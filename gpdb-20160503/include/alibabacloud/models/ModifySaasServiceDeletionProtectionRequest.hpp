// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYSAASSERVICEDELETIONPROTECTIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYSAASSERVICEDELETIONPROTECTIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class ModifySaasServiceDeletionProtectionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifySaasServiceDeletionProtectionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DeletionProtection, deletionProtection_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ServiceId, serviceId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifySaasServiceDeletionProtectionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DeletionProtection, deletionProtection_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ServiceId, serviceId_);
    };
    ModifySaasServiceDeletionProtectionRequest() = default ;
    ModifySaasServiceDeletionProtectionRequest(const ModifySaasServiceDeletionProtectionRequest &) = default ;
    ModifySaasServiceDeletionProtectionRequest(ModifySaasServiceDeletionProtectionRequest &&) = default ;
    ModifySaasServiceDeletionProtectionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifySaasServiceDeletionProtectionRequest() = default ;
    ModifySaasServiceDeletionProtectionRequest& operator=(const ModifySaasServiceDeletionProtectionRequest &) = default ;
    ModifySaasServiceDeletionProtectionRequest& operator=(ModifySaasServiceDeletionProtectionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->deletionProtection_ == nullptr
        && this->regionId_ == nullptr && this->serviceId_ == nullptr; };
    // deletionProtection Field Functions 
    bool hasDeletionProtection() const { return this->deletionProtection_ != nullptr;};
    void deleteDeletionProtection() { this->deletionProtection_ = nullptr;};
    inline bool getDeletionProtection() const { DARABONBA_PTR_GET_DEFAULT(deletionProtection_, false) };
    inline ModifySaasServiceDeletionProtectionRequest& setDeletionProtection(bool deletionProtection) { DARABONBA_PTR_SET_VALUE(deletionProtection_, deletionProtection) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ModifySaasServiceDeletionProtectionRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // serviceId Field Functions 
    bool hasServiceId() const { return this->serviceId_ != nullptr;};
    void deleteServiceId() { this->serviceId_ = nullptr;};
    inline string getServiceId() const { DARABONBA_PTR_GET_DEFAULT(serviceId_, "") };
    inline ModifySaasServiceDeletionProtectionRequest& setServiceId(string serviceId) { DARABONBA_PTR_SET_VALUE(serviceId_, serviceId) };


  protected:
    // Specifies whether to enable deletion protection.
    shared_ptr<bool> deletionProtection_ {};
    // The region ID.
    shared_ptr<string> regionId_ {};
    // The service ID.
    // 
    // This parameter is required.
    shared_ptr<string> serviceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
