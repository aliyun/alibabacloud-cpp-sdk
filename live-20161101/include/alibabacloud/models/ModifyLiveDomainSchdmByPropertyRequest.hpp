// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYLIVEDOMAINSCHDMBYPROPERTYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYLIVEDOMAINSCHDMBYPROPERTYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class ModifyLiveDomainSchdmByPropertyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyLiveDomainSchdmByPropertyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(Property, property_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyLiveDomainSchdmByPropertyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(Property, property_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    ModifyLiveDomainSchdmByPropertyRequest() = default ;
    ModifyLiveDomainSchdmByPropertyRequest(const ModifyLiveDomainSchdmByPropertyRequest &) = default ;
    ModifyLiveDomainSchdmByPropertyRequest(ModifyLiveDomainSchdmByPropertyRequest &&) = default ;
    ModifyLiveDomainSchdmByPropertyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyLiveDomainSchdmByPropertyRequest() = default ;
    ModifyLiveDomainSchdmByPropertyRequest& operator=(const ModifyLiveDomainSchdmByPropertyRequest &) = default ;
    ModifyLiveDomainSchdmByPropertyRequest& operator=(ModifyLiveDomainSchdmByPropertyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->domainName_ != nullptr
        && this->ownerId_ != nullptr && this->property_ != nullptr && this->regionId_ != nullptr; };
    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string domainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline ModifyLiveDomainSchdmByPropertyRequest& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline ModifyLiveDomainSchdmByPropertyRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // property Field Functions 
    bool hasProperty() const { return this->property_ != nullptr;};
    void deleteProperty() { this->property_ = nullptr;};
    inline string property() const { DARABONBA_PTR_GET_DEFAULT(property_, "") };
    inline ModifyLiveDomainSchdmByPropertyRequest& setProperty(string property) { DARABONBA_PTR_SET_VALUE(property_, property) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ModifyLiveDomainSchdmByPropertyRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The domain name for which you want to modify the acceleration region.
    // 
    // This parameter is required.
    std::shared_ptr<string> domainName_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // The acceleration region that you want to set. {"coverage":"overseas"} specifies regions outside the Chinese mainland. Valid values of coverage:
    // 
    // *   domestic: regions in the Chinese mainland.
    // *   overseas: regions outside the Chinese mainland.
    // *   global: regions in and outside the Chinese mainland.
    // 
    // This parameter is required.
    std::shared_ptr<string> property_ = nullptr;
    std::shared_ptr<string> regionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
