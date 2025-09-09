// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATESERVICEINSTANCEATTRIBUTEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATESERVICEINSTANCEATTRIBUTEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/UpdateServiceInstanceAttributeRequestLicenseData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ComputeNestSupplier20210521
{
namespace Models
{
  class UpdateServiceInstanceAttributeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateServiceInstanceAttributeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(LicenseData, licenseData_);
      DARABONBA_PTR_TO_JSON(Reason, reason_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ServiceInstanceId, serviceInstanceId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateServiceInstanceAttributeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(LicenseData, licenseData_);
      DARABONBA_PTR_FROM_JSON(Reason, reason_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ServiceInstanceId, serviceInstanceId_);
    };
    UpdateServiceInstanceAttributeRequest() = default ;
    UpdateServiceInstanceAttributeRequest(const UpdateServiceInstanceAttributeRequest &) = default ;
    UpdateServiceInstanceAttributeRequest(UpdateServiceInstanceAttributeRequest &&) = default ;
    UpdateServiceInstanceAttributeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateServiceInstanceAttributeRequest() = default ;
    UpdateServiceInstanceAttributeRequest& operator=(const UpdateServiceInstanceAttributeRequest &) = default ;
    UpdateServiceInstanceAttributeRequest& operator=(UpdateServiceInstanceAttributeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->endTime_ != nullptr
        && this->licenseData_ != nullptr && this->reason_ != nullptr && this->regionId_ != nullptr && this->serviceInstanceId_ != nullptr; };
    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline UpdateServiceInstanceAttributeRequest& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // licenseData Field Functions 
    bool hasLicenseData() const { return this->licenseData_ != nullptr;};
    void deleteLicenseData() { this->licenseData_ = nullptr;};
    inline const UpdateServiceInstanceAttributeRequestLicenseData & licenseData() const { DARABONBA_PTR_GET_CONST(licenseData_, UpdateServiceInstanceAttributeRequestLicenseData) };
    inline UpdateServiceInstanceAttributeRequestLicenseData licenseData() { DARABONBA_PTR_GET(licenseData_, UpdateServiceInstanceAttributeRequestLicenseData) };
    inline UpdateServiceInstanceAttributeRequest& setLicenseData(const UpdateServiceInstanceAttributeRequestLicenseData & licenseData) { DARABONBA_PTR_SET_VALUE(licenseData_, licenseData) };
    inline UpdateServiceInstanceAttributeRequest& setLicenseData(UpdateServiceInstanceAttributeRequestLicenseData && licenseData) { DARABONBA_PTR_SET_RVALUE(licenseData_, licenseData) };


    // reason Field Functions 
    bool hasReason() const { return this->reason_ != nullptr;};
    void deleteReason() { this->reason_ = nullptr;};
    inline string reason() const { DARABONBA_PTR_GET_DEFAULT(reason_, "") };
    inline UpdateServiceInstanceAttributeRequest& setReason(string reason) { DARABONBA_PTR_SET_VALUE(reason_, reason) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline UpdateServiceInstanceAttributeRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // serviceInstanceId Field Functions 
    bool hasServiceInstanceId() const { return this->serviceInstanceId_ != nullptr;};
    void deleteServiceInstanceId() { this->serviceInstanceId_ = nullptr;};
    inline string serviceInstanceId() const { DARABONBA_PTR_GET_DEFAULT(serviceInstanceId_, "") };
    inline UpdateServiceInstanceAttributeRequest& setServiceInstanceId(string serviceInstanceId) { DARABONBA_PTR_SET_VALUE(serviceInstanceId_, serviceInstanceId) };


  protected:
    // The time when the service instance expires.
    // 
    // Use the UTC time format: yyyy-MM-ddTHH:mmZ
    std::shared_ptr<string> endTime_ = nullptr;
    // The License Data
    std::shared_ptr<UpdateServiceInstanceAttributeRequestLicenseData> licenseData_ = nullptr;
    // Application reason, currently used for trial application extension.
    std::shared_ptr<string> reason_ = nullptr;
    // The region ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    // The service instance ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> serviceInstanceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ComputeNestSupplier20210521
#endif
