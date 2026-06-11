// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_HIMARKETPORTALDOMAINCONFIG_HPP_
#define ALIBABACLOUD_MODELS_HIMARKETPORTALDOMAINCONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class HiMarketPortalDomainConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const HiMarketPortalDomainConfig& obj) { 
      DARABONBA_PTR_TO_JSON(domain, domain_);
      DARABONBA_PTR_TO_JSON(protocol, protocol_);
      DARABONBA_PTR_TO_JSON(type, type_);
    };
    friend void from_json(const Darabonba::Json& j, HiMarketPortalDomainConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(domain, domain_);
      DARABONBA_PTR_FROM_JSON(protocol, protocol_);
      DARABONBA_PTR_FROM_JSON(type, type_);
    };
    HiMarketPortalDomainConfig() = default ;
    HiMarketPortalDomainConfig(const HiMarketPortalDomainConfig &) = default ;
    HiMarketPortalDomainConfig(HiMarketPortalDomainConfig &&) = default ;
    HiMarketPortalDomainConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~HiMarketPortalDomainConfig() = default ;
    HiMarketPortalDomainConfig& operator=(const HiMarketPortalDomainConfig &) = default ;
    HiMarketPortalDomainConfig& operator=(HiMarketPortalDomainConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->domain_ == nullptr
        && this->protocol_ == nullptr && this->type_ == nullptr; };
    // domain Field Functions 
    bool hasDomain() const { return this->domain_ != nullptr;};
    void deleteDomain() { this->domain_ = nullptr;};
    inline string getDomain() const { DARABONBA_PTR_GET_DEFAULT(domain_, "") };
    inline HiMarketPortalDomainConfig& setDomain(string domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


    // protocol Field Functions 
    bool hasProtocol() const { return this->protocol_ != nullptr;};
    void deleteProtocol() { this->protocol_ = nullptr;};
    inline string getProtocol() const { DARABONBA_PTR_GET_DEFAULT(protocol_, "") };
    inline HiMarketPortalDomainConfig& setProtocol(string protocol) { DARABONBA_PTR_SET_VALUE(protocol_, protocol) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline HiMarketPortalDomainConfig& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The domain name.
    shared_ptr<string> domain_ {};
    // The domain protocol.
    shared_ptr<string> protocol_ {};
    // The domain type.
    shared_ptr<string> type_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
