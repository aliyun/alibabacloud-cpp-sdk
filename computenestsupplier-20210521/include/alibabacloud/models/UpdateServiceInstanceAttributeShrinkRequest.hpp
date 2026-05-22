// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATESERVICEINSTANCEATTRIBUTESHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATESERVICEINSTANCEATTRIBUTESHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ComputeNestSupplier20210521
{
namespace Models
{
  class UpdateServiceInstanceAttributeShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateServiceInstanceAttributeShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(LicenseData, licenseDataShrink_);
      DARABONBA_PTR_TO_JSON(Reason, reason_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ServiceInstanceId, serviceInstanceId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateServiceInstanceAttributeShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(LicenseData, licenseDataShrink_);
      DARABONBA_PTR_FROM_JSON(Reason, reason_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ServiceInstanceId, serviceInstanceId_);
    };
    UpdateServiceInstanceAttributeShrinkRequest() = default ;
    UpdateServiceInstanceAttributeShrinkRequest(const UpdateServiceInstanceAttributeShrinkRequest &) = default ;
    UpdateServiceInstanceAttributeShrinkRequest(UpdateServiceInstanceAttributeShrinkRequest &&) = default ;
    UpdateServiceInstanceAttributeShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateServiceInstanceAttributeShrinkRequest() = default ;
    UpdateServiceInstanceAttributeShrinkRequest& operator=(const UpdateServiceInstanceAttributeShrinkRequest &) = default ;
    UpdateServiceInstanceAttributeShrinkRequest& operator=(UpdateServiceInstanceAttributeShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->endTime_ == nullptr
        && this->licenseDataShrink_ == nullptr && this->reason_ == nullptr && this->regionId_ == nullptr && this->serviceInstanceId_ == nullptr; };
    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline UpdateServiceInstanceAttributeShrinkRequest& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // licenseDataShrink Field Functions 
    bool hasLicenseDataShrink() const { return this->licenseDataShrink_ != nullptr;};
    void deleteLicenseDataShrink() { this->licenseDataShrink_ = nullptr;};
    inline string getLicenseDataShrink() const { DARABONBA_PTR_GET_DEFAULT(licenseDataShrink_, "") };
    inline UpdateServiceInstanceAttributeShrinkRequest& setLicenseDataShrink(string licenseDataShrink) { DARABONBA_PTR_SET_VALUE(licenseDataShrink_, licenseDataShrink) };


    // reason Field Functions 
    bool hasReason() const { return this->reason_ != nullptr;};
    void deleteReason() { this->reason_ = nullptr;};
    inline string getReason() const { DARABONBA_PTR_GET_DEFAULT(reason_, "") };
    inline UpdateServiceInstanceAttributeShrinkRequest& setReason(string reason) { DARABONBA_PTR_SET_VALUE(reason_, reason) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline UpdateServiceInstanceAttributeShrinkRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // serviceInstanceId Field Functions 
    bool hasServiceInstanceId() const { return this->serviceInstanceId_ != nullptr;};
    void deleteServiceInstanceId() { this->serviceInstanceId_ = nullptr;};
    inline string getServiceInstanceId() const { DARABONBA_PTR_GET_DEFAULT(serviceInstanceId_, "") };
    inline UpdateServiceInstanceAttributeShrinkRequest& setServiceInstanceId(string serviceInstanceId) { DARABONBA_PTR_SET_VALUE(serviceInstanceId_, serviceInstanceId) };


  protected:
    // The time when the service instance expires.
    // 
    // Use the UTC time format: yyyy-MM-ddTHH:mmZ
    shared_ptr<string> endTime_ {};
    // The License Data
    shared_ptr<string> licenseDataShrink_ {};
    // Application reason, currently used for trial application extension.
    shared_ptr<string> reason_ {};
    // The region ID.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // The service instance ID.
    // 
    // This parameter is required.
    shared_ptr<string> serviceInstanceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ComputeNestSupplier20210521
#endif
