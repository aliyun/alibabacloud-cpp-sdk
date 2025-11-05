// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYCDNDOMAINSCHDMBYPROPERTYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYCDNDOMAINSCHDMBYPROPERTYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cdn20180510
{
namespace Models
{
  class ModifyCdnDomainSchdmByPropertyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyCdnDomainSchdmByPropertyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(Property, property_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyCdnDomainSchdmByPropertyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(Property, property_);
    };
    ModifyCdnDomainSchdmByPropertyRequest() = default ;
    ModifyCdnDomainSchdmByPropertyRequest(const ModifyCdnDomainSchdmByPropertyRequest &) = default ;
    ModifyCdnDomainSchdmByPropertyRequest(ModifyCdnDomainSchdmByPropertyRequest &&) = default ;
    ModifyCdnDomainSchdmByPropertyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyCdnDomainSchdmByPropertyRequest() = default ;
    ModifyCdnDomainSchdmByPropertyRequest& operator=(const ModifyCdnDomainSchdmByPropertyRequest &) = default ;
    ModifyCdnDomainSchdmByPropertyRequest& operator=(ModifyCdnDomainSchdmByPropertyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->domainName_ == nullptr
        && return this->property_ == nullptr; };
    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string domainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline ModifyCdnDomainSchdmByPropertyRequest& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // property Field Functions 
    bool hasProperty() const { return this->property_ != nullptr;};
    void deleteProperty() { this->property_ = nullptr;};
    inline string property() const { DARABONBA_PTR_GET_DEFAULT(property_, "") };
    inline ModifyCdnDomainSchdmByPropertyRequest& setProperty(string property) { DARABONBA_PTR_SET_VALUE(property_, property) };


  protected:
    // The accelerated domain name for which you want to change the acceleration region. You can specify only one domain name.
    // 
    // This parameter is required.
    std::shared_ptr<string> domainName_ = nullptr;
    // The information about the acceleration region. {"coverage":"overseas"}
    // 
    // Valid values for coverage:
    // 
    // *   **domestic**: Chinese mainland
    // *   **overseas**: global (excluding the Chinese mainland)
    // *   **global**: global
    // 
    // This parameter is required.
    std::shared_ptr<string> property_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cdn20180510
#endif
