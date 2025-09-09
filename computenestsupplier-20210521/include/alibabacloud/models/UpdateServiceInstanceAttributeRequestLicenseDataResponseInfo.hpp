// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATESERVICEINSTANCEATTRIBUTEREQUESTLICENSEDATARESPONSEINFO_HPP_
#define ALIBABACLOUD_MODELS_UPDATESERVICEINSTANCEATTRIBUTEREQUESTLICENSEDATARESPONSEINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ComputeNestSupplier20210521
{
namespace Models
{
  class UpdateServiceInstanceAttributeRequestLicenseDataResponseInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateServiceInstanceAttributeRequestLicenseDataResponseInfo& obj) { 
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(UpdateResponse, updateResponse_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateServiceInstanceAttributeRequestLicenseDataResponseInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(UpdateResponse, updateResponse_);
    };
    UpdateServiceInstanceAttributeRequestLicenseDataResponseInfo() = default ;
    UpdateServiceInstanceAttributeRequestLicenseDataResponseInfo(const UpdateServiceInstanceAttributeRequestLicenseDataResponseInfo &) = default ;
    UpdateServiceInstanceAttributeRequestLicenseDataResponseInfo(UpdateServiceInstanceAttributeRequestLicenseDataResponseInfo &&) = default ;
    UpdateServiceInstanceAttributeRequestLicenseDataResponseInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateServiceInstanceAttributeRequestLicenseDataResponseInfo() = default ;
    UpdateServiceInstanceAttributeRequestLicenseDataResponseInfo& operator=(const UpdateServiceInstanceAttributeRequestLicenseDataResponseInfo &) = default ;
    UpdateServiceInstanceAttributeRequestLicenseDataResponseInfo& operator=(UpdateServiceInstanceAttributeRequestLicenseDataResponseInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->errorCode_ != nullptr
        && this->errorMessage_ != nullptr && this->updateResponse_ != nullptr; };
    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string errorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline UpdateServiceInstanceAttributeRequestLicenseDataResponseInfo& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string errorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline UpdateServiceInstanceAttributeRequestLicenseDataResponseInfo& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // updateResponse Field Functions 
    bool hasUpdateResponse() const { return this->updateResponse_ != nullptr;};
    void deleteUpdateResponse() { this->updateResponse_ = nullptr;};
    inline bool updateResponse() const { DARABONBA_PTR_GET_DEFAULT(updateResponse_, false) };
    inline UpdateServiceInstanceAttributeRequestLicenseDataResponseInfo& setUpdateResponse(bool updateResponse) { DARABONBA_PTR_SET_VALUE(updateResponse_, updateResponse) };


  protected:
    // Mock error code.
    std::shared_ptr<string> errorCode_ = nullptr;
    // Mock error message.
    std::shared_ptr<string> errorMessage_ = nullptr;
    // if you want mock response, please open this option.
    std::shared_ptr<bool> updateResponse_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ComputeNestSupplier20210521
#endif
