// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATESERVICEINSTANCEATTRIBUTEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATESERVICEINSTANCEATTRIBUTEREQUEST_HPP_
#include <darabonba/Core.hpp>
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
    class LicenseData : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const LicenseData& obj) { 
        DARABONBA_PTR_TO_JSON(CustomData, customData_);
        DARABONBA_PTR_TO_JSON(ResponseInfo, responseInfo_);
      };
      friend void from_json(const Darabonba::Json& j, LicenseData& obj) { 
        DARABONBA_PTR_FROM_JSON(CustomData, customData_);
        DARABONBA_PTR_FROM_JSON(ResponseInfo, responseInfo_);
      };
      LicenseData() = default ;
      LicenseData(const LicenseData &) = default ;
      LicenseData(LicenseData &&) = default ;
      LicenseData(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~LicenseData() = default ;
      LicenseData& operator=(const LicenseData &) = default ;
      LicenseData& operator=(LicenseData &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class ResponseInfo : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ResponseInfo& obj) { 
          DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
          DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
          DARABONBA_PTR_TO_JSON(UpdateResponse, updateResponse_);
        };
        friend void from_json(const Darabonba::Json& j, ResponseInfo& obj) { 
          DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
          DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
          DARABONBA_PTR_FROM_JSON(UpdateResponse, updateResponse_);
        };
        ResponseInfo() = default ;
        ResponseInfo(const ResponseInfo &) = default ;
        ResponseInfo(ResponseInfo &&) = default ;
        ResponseInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ResponseInfo() = default ;
        ResponseInfo& operator=(const ResponseInfo &) = default ;
        ResponseInfo& operator=(ResponseInfo &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->errorCode_ == nullptr
        && this->errorMessage_ == nullptr && this->updateResponse_ == nullptr; };
        // errorCode Field Functions 
        bool hasErrorCode() const { return this->errorCode_ != nullptr;};
        void deleteErrorCode() { this->errorCode_ = nullptr;};
        inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
        inline ResponseInfo& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


        // errorMessage Field Functions 
        bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
        void deleteErrorMessage() { this->errorMessage_ = nullptr;};
        inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
        inline ResponseInfo& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


        // updateResponse Field Functions 
        bool hasUpdateResponse() const { return this->updateResponse_ != nullptr;};
        void deleteUpdateResponse() { this->updateResponse_ = nullptr;};
        inline bool getUpdateResponse() const { DARABONBA_PTR_GET_DEFAULT(updateResponse_, false) };
        inline ResponseInfo& setUpdateResponse(bool updateResponse) { DARABONBA_PTR_SET_VALUE(updateResponse_, updateResponse) };


      protected:
        // To impersonate an error message, specify an error code.
        shared_ptr<string> errorCode_ {};
        // To impersonate an error message, specify the error message.
        shared_ptr<string> errorMessage_ {};
        // Specifies whether to modify the return value.
        shared_ptr<bool> updateResponse_ {};
      };

      virtual bool empty() const override { return this->customData_ == nullptr
        && this->responseInfo_ == nullptr; };
      // customData Field Functions 
      bool hasCustomData() const { return this->customData_ != nullptr;};
      void deleteCustomData() { this->customData_ = nullptr;};
      inline string getCustomData() const { DARABONBA_PTR_GET_DEFAULT(customData_, "") };
      inline LicenseData& setCustomData(string customData) { DARABONBA_PTR_SET_VALUE(customData_, customData) };


      // responseInfo Field Functions 
      bool hasResponseInfo() const { return this->responseInfo_ != nullptr;};
      void deleteResponseInfo() { this->responseInfo_ = nullptr;};
      inline const LicenseData::ResponseInfo & getResponseInfo() const { DARABONBA_PTR_GET_CONST(responseInfo_, LicenseData::ResponseInfo) };
      inline LicenseData::ResponseInfo getResponseInfo() { DARABONBA_PTR_GET(responseInfo_, LicenseData::ResponseInfo) };
      inline LicenseData& setResponseInfo(const LicenseData::ResponseInfo & responseInfo) { DARABONBA_PTR_SET_VALUE(responseInfo_, responseInfo) };
      inline LicenseData& setResponseInfo(LicenseData::ResponseInfo && responseInfo) { DARABONBA_PTR_SET_RVALUE(responseInfo_, responseInfo) };


    protected:
      // The custom metadata.
      shared_ptr<string> customData_ {};
      // The information about the impersonated return value.
      shared_ptr<LicenseData::ResponseInfo> responseInfo_ {};
    };

    virtual bool empty() const override { return this->endTime_ == nullptr
        && this->licenseData_ == nullptr && this->reason_ == nullptr && this->regionId_ == nullptr && this->serviceInstanceId_ == nullptr; };
    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline UpdateServiceInstanceAttributeRequest& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // licenseData Field Functions 
    bool hasLicenseData() const { return this->licenseData_ != nullptr;};
    void deleteLicenseData() { this->licenseData_ = nullptr;};
    inline const UpdateServiceInstanceAttributeRequest::LicenseData & getLicenseData() const { DARABONBA_PTR_GET_CONST(licenseData_, UpdateServiceInstanceAttributeRequest::LicenseData) };
    inline UpdateServiceInstanceAttributeRequest::LicenseData getLicenseData() { DARABONBA_PTR_GET(licenseData_, UpdateServiceInstanceAttributeRequest::LicenseData) };
    inline UpdateServiceInstanceAttributeRequest& setLicenseData(const UpdateServiceInstanceAttributeRequest::LicenseData & licenseData) { DARABONBA_PTR_SET_VALUE(licenseData_, licenseData) };
    inline UpdateServiceInstanceAttributeRequest& setLicenseData(UpdateServiceInstanceAttributeRequest::LicenseData && licenseData) { DARABONBA_PTR_SET_RVALUE(licenseData_, licenseData) };


    // reason Field Functions 
    bool hasReason() const { return this->reason_ != nullptr;};
    void deleteReason() { this->reason_ = nullptr;};
    inline string getReason() const { DARABONBA_PTR_GET_DEFAULT(reason_, "") };
    inline UpdateServiceInstanceAttributeRequest& setReason(string reason) { DARABONBA_PTR_SET_VALUE(reason_, reason) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline UpdateServiceInstanceAttributeRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // serviceInstanceId Field Functions 
    bool hasServiceInstanceId() const { return this->serviceInstanceId_ != nullptr;};
    void deleteServiceInstanceId() { this->serviceInstanceId_ = nullptr;};
    inline string getServiceInstanceId() const { DARABONBA_PTR_GET_DEFAULT(serviceInstanceId_, "") };
    inline UpdateServiceInstanceAttributeRequest& setServiceInstanceId(string serviceInstanceId) { DARABONBA_PTR_SET_VALUE(serviceInstanceId_, serviceInstanceId) };


  protected:
    // The time when the service instance expires.
    // 
    // Use the UTC time format: yyyy-MM-ddTHH:mmZ
    shared_ptr<string> endTime_ {};
    // The license data.
    shared_ptr<UpdateServiceInstanceAttributeRequest::LicenseData> licenseData_ {};
    // The reason for the request. This parameter is used to extend a trial.
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
