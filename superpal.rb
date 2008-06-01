require 'xmlrpc/client'
class Superpal
	def initialize
		@fart = XMLRPC::Client.new2('http://209.195.0.124:8001')
	end
	
	def method_missing(*args)
		@fart.call(*args)
	rescue e
		"fuck: #{e.message}"
	end
end