// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDDNSCACHEDOMAINREQUESTSOURCEDNSSERVER_HPP_
#define ALIBABACLOUD_MODELS_ADDDNSCACHEDOMAINREQUESTSOURCEDNSSERVER_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class AddDnsCacheDomainRequestSourceDnsServer : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddDnsCacheDomainRequestSourceDnsServer& obj) { 
      DARABONBA_PTR_TO_JSON(Host, host_);
      DARABONBA_PTR_TO_JSON(Port, port_);
    };
    friend void from_json(const Darabonba::Json& j, AddDnsCacheDomainRequestSourceDnsServer& obj) { 
      DARABONBA_PTR_FROM_JSON(Host, host_);
      DARABONBA_PTR_FROM_JSON(Port, port_);
    };
    AddDnsCacheDomainRequestSourceDnsServer() = default ;
    AddDnsCacheDomainRequestSourceDnsServer(const AddDnsCacheDomainRequestSourceDnsServer &) = default ;
    AddDnsCacheDomainRequestSourceDnsServer(AddDnsCacheDomainRequestSourceDnsServer &&) = default ;
    AddDnsCacheDomainRequestSourceDnsServer(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddDnsCacheDomainRequestSourceDnsServer() = default ;
    AddDnsCacheDomainRequestSourceDnsServer& operator=(const AddDnsCacheDomainRequestSourceDnsServer &) = default ;
    AddDnsCacheDomainRequestSourceDnsServer& operator=(AddDnsCacheDomainRequestSourceDnsServer &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->host_ != nullptr
        && this->port_ != nullptr; };
    // host Field Functions 
    bool hasHost() const { return this->host_ != nullptr;};
    void deleteHost() { this->host_ = nullptr;};
    inline string host() const { DARABONBA_PTR_GET_DEFAULT(host_, "") };
    inline AddDnsCacheDomainRequestSourceDnsServer& setHost(string host) { DARABONBA_PTR_SET_VALUE(host_, host) };


    // port Field Functions 
    bool hasPort() const { return this->port_ != nullptr;};
    void deletePort() { this->port_ = nullptr;};
    inline string port() const { DARABONBA_PTR_GET_DEFAULT(port_, "") };
    inline AddDnsCacheDomainRequestSourceDnsServer& setPort(string port) { DARABONBA_PTR_SET_VALUE(port_, port) };


  protected:
    // The domain name or IP address of the origin DNS server.
    // 
    // This parameter is required.
    std::shared_ptr<string> host_ = nullptr;
    // The port of the origin DNS server.
    // 
    // This parameter is required.
    std::shared_ptr<string> port_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
