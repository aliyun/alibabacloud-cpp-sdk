// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYDCDNDOMAINSCHDMBYPROPERTYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYDCDNDOMAINSCHDMBYPROPERTYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dcdn20180115
{
namespace Models
{
  class ModifyDCdnDomainSchdmByPropertyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyDCdnDomainSchdmByPropertyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(Property, property_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyDCdnDomainSchdmByPropertyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(Property, property_);
    };
    ModifyDCdnDomainSchdmByPropertyRequest() = default ;
    ModifyDCdnDomainSchdmByPropertyRequest(const ModifyDCdnDomainSchdmByPropertyRequest &) = default ;
    ModifyDCdnDomainSchdmByPropertyRequest(ModifyDCdnDomainSchdmByPropertyRequest &&) = default ;
    ModifyDCdnDomainSchdmByPropertyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyDCdnDomainSchdmByPropertyRequest() = default ;
    ModifyDCdnDomainSchdmByPropertyRequest& operator=(const ModifyDCdnDomainSchdmByPropertyRequest &) = default ;
    ModifyDCdnDomainSchdmByPropertyRequest& operator=(ModifyDCdnDomainSchdmByPropertyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->domainName_ == nullptr
        && this->property_ == nullptr; };
    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string getDomainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline ModifyDCdnDomainSchdmByPropertyRequest& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // property Field Functions 
    bool hasProperty() const { return this->property_ != nullptr;};
    void deleteProperty() { this->property_ = nullptr;};
    inline string getProperty() const { DARABONBA_PTR_GET_DEFAULT(property_, "") };
    inline ModifyDCdnDomainSchdmByPropertyRequest& setProperty(string property) { DARABONBA_PTR_SET_VALUE(property_, property) };


  protected:
    // The name of the accelerated domain for which you want to change the acceleration region. You can specify only one domain name.
    // 
    // This parameter is required.
    shared_ptr<string> domainName_ {};
    // The region where the acceleration service is deployed. Valid values:
    // 
    // *   **domestic**: Chinese mainland
    // *   **overseas**: global (excluding mainland China)
    // *   **global**: global
    // 
    // This parameter is required.
    shared_ptr<string> property_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dcdn20180115
#endif
