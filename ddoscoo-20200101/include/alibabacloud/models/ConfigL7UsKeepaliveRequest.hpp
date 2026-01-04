// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CONFIGL7USKEEPALIVEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CONFIGL7USKEEPALIVEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddoscoo20200101
{
namespace Models
{
  class ConfigL7UsKeepaliveRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ConfigL7UsKeepaliveRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Domain, domain_);
      DARABONBA_PTR_TO_JSON(DownstreamKeepalive, downstreamKeepalive_);
      DARABONBA_PTR_TO_JSON(UpstreamKeepalive, upstreamKeepalive_);
    };
    friend void from_json(const Darabonba::Json& j, ConfigL7UsKeepaliveRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Domain, domain_);
      DARABONBA_PTR_FROM_JSON(DownstreamKeepalive, downstreamKeepalive_);
      DARABONBA_PTR_FROM_JSON(UpstreamKeepalive, upstreamKeepalive_);
    };
    ConfigL7UsKeepaliveRequest() = default ;
    ConfigL7UsKeepaliveRequest(const ConfigL7UsKeepaliveRequest &) = default ;
    ConfigL7UsKeepaliveRequest(ConfigL7UsKeepaliveRequest &&) = default ;
    ConfigL7UsKeepaliveRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ConfigL7UsKeepaliveRequest() = default ;
    ConfigL7UsKeepaliveRequest& operator=(const ConfigL7UsKeepaliveRequest &) = default ;
    ConfigL7UsKeepaliveRequest& operator=(ConfigL7UsKeepaliveRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->domain_ == nullptr
        && this->downstreamKeepalive_ == nullptr && this->upstreamKeepalive_ == nullptr; };
    // domain Field Functions 
    bool hasDomain() const { return this->domain_ != nullptr;};
    void deleteDomain() { this->domain_ = nullptr;};
    inline string getDomain() const { DARABONBA_PTR_GET_DEFAULT(domain_, "") };
    inline ConfigL7UsKeepaliveRequest& setDomain(string domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


    // downstreamKeepalive Field Functions 
    bool hasDownstreamKeepalive() const { return this->downstreamKeepalive_ != nullptr;};
    void deleteDownstreamKeepalive() { this->downstreamKeepalive_ = nullptr;};
    inline string getDownstreamKeepalive() const { DARABONBA_PTR_GET_DEFAULT(downstreamKeepalive_, "") };
    inline ConfigL7UsKeepaliveRequest& setDownstreamKeepalive(string downstreamKeepalive) { DARABONBA_PTR_SET_VALUE(downstreamKeepalive_, downstreamKeepalive) };


    // upstreamKeepalive Field Functions 
    bool hasUpstreamKeepalive() const { return this->upstreamKeepalive_ != nullptr;};
    void deleteUpstreamKeepalive() { this->upstreamKeepalive_ = nullptr;};
    inline string getUpstreamKeepalive() const { DARABONBA_PTR_GET_DEFAULT(upstreamKeepalive_, "") };
    inline ConfigL7UsKeepaliveRequest& setUpstreamKeepalive(string upstreamKeepalive) { DARABONBA_PTR_SET_VALUE(upstreamKeepalive_, upstreamKeepalive) };


  protected:
    // The domain name of the website.
    // 
    // >  A forwarding rule must be configured for the domain name. You can call the [DescribeDomains](https://help.aliyun.com/document_detail/91724.html) operation to query all domain names.
    shared_ptr<string> domain_ {};
    shared_ptr<string> downstreamKeepalive_ {};
    // The settings for back-to-origin persistent connections. The value is a string that consists of a JSON struct. The JSON struct contains the following fields:
    // 
    // *   **enabled**: the switch for back-to-origin persistent connections. This field is required, and the value is of the Boolean type.
    // *   **keepalive_requests**: the number of requests that reuse a persistent connection. This field is required, and the value is of the integer type.
    // *   **keepalive_timeout**: the timeout period for an idle persistent connection. This field is required, and the value is of the integer type.
    // 
    // This parameter is required.
    shared_ptr<string> upstreamKeepalive_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20200101
#endif
