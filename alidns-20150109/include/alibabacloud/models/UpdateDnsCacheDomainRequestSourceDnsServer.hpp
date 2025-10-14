// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEDNSCACHEDOMAINREQUESTSOURCEDNSSERVER_HPP_
#define ALIBABACLOUD_MODELS_UPDATEDNSCACHEDOMAINREQUESTSOURCEDNSSERVER_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class UpdateDnsCacheDomainRequestSourceDnsServer : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateDnsCacheDomainRequestSourceDnsServer& obj) { 
      DARABONBA_PTR_TO_JSON(Host, host_);
      DARABONBA_PTR_TO_JSON(Port, port_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateDnsCacheDomainRequestSourceDnsServer& obj) { 
      DARABONBA_PTR_FROM_JSON(Host, host_);
      DARABONBA_PTR_FROM_JSON(Port, port_);
    };
    UpdateDnsCacheDomainRequestSourceDnsServer() = default ;
    UpdateDnsCacheDomainRequestSourceDnsServer(const UpdateDnsCacheDomainRequestSourceDnsServer &) = default ;
    UpdateDnsCacheDomainRequestSourceDnsServer(UpdateDnsCacheDomainRequestSourceDnsServer &&) = default ;
    UpdateDnsCacheDomainRequestSourceDnsServer(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateDnsCacheDomainRequestSourceDnsServer() = default ;
    UpdateDnsCacheDomainRequestSourceDnsServer& operator=(const UpdateDnsCacheDomainRequestSourceDnsServer &) = default ;
    UpdateDnsCacheDomainRequestSourceDnsServer& operator=(UpdateDnsCacheDomainRequestSourceDnsServer &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->host_ == nullptr
        && return this->port_ == nullptr; };
    // host Field Functions 
    bool hasHost() const { return this->host_ != nullptr;};
    void deleteHost() { this->host_ = nullptr;};
    inline string host() const { DARABONBA_PTR_GET_DEFAULT(host_, "") };
    inline UpdateDnsCacheDomainRequestSourceDnsServer& setHost(string host) { DARABONBA_PTR_SET_VALUE(host_, host) };


    // port Field Functions 
    bool hasPort() const { return this->port_ != nullptr;};
    void deletePort() { this->port_ = nullptr;};
    inline string port() const { DARABONBA_PTR_GET_DEFAULT(port_, "") };
    inline UpdateDnsCacheDomainRequestSourceDnsServer& setPort(string port) { DARABONBA_PTR_SET_VALUE(port_, port) };


  protected:
    // The domain name or IP address of the origin DNS server.
    std::shared_ptr<string> host_ = nullptr;
    // The port of the origin DNS server.
    std::shared_ptr<string> port_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
