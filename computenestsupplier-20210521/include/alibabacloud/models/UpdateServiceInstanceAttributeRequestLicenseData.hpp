// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATESERVICEINSTANCEATTRIBUTEREQUESTLICENSEDATA_HPP_
#define ALIBABACLOUD_MODELS_UPDATESERVICEINSTANCEATTRIBUTEREQUESTLICENSEDATA_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/UpdateServiceInstanceAttributeRequestLicenseDataResponseInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ComputeNestSupplier20210521
{
namespace Models
{
  class UpdateServiceInstanceAttributeRequestLicenseData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateServiceInstanceAttributeRequestLicenseData& obj) { 
      DARABONBA_PTR_TO_JSON(CustomData, customData_);
      DARABONBA_PTR_TO_JSON(ResponseInfo, responseInfo_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateServiceInstanceAttributeRequestLicenseData& obj) { 
      DARABONBA_PTR_FROM_JSON(CustomData, customData_);
      DARABONBA_PTR_FROM_JSON(ResponseInfo, responseInfo_);
    };
    UpdateServiceInstanceAttributeRequestLicenseData() = default ;
    UpdateServiceInstanceAttributeRequestLicenseData(const UpdateServiceInstanceAttributeRequestLicenseData &) = default ;
    UpdateServiceInstanceAttributeRequestLicenseData(UpdateServiceInstanceAttributeRequestLicenseData &&) = default ;
    UpdateServiceInstanceAttributeRequestLicenseData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateServiceInstanceAttributeRequestLicenseData() = default ;
    UpdateServiceInstanceAttributeRequestLicenseData& operator=(const UpdateServiceInstanceAttributeRequestLicenseData &) = default ;
    UpdateServiceInstanceAttributeRequestLicenseData& operator=(UpdateServiceInstanceAttributeRequestLicenseData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->customData_ != nullptr
        && this->responseInfo_ != nullptr; };
    // customData Field Functions 
    bool hasCustomData() const { return this->customData_ != nullptr;};
    void deleteCustomData() { this->customData_ = nullptr;};
    inline string customData() const { DARABONBA_PTR_GET_DEFAULT(customData_, "") };
    inline UpdateServiceInstanceAttributeRequestLicenseData& setCustomData(string customData) { DARABONBA_PTR_SET_VALUE(customData_, customData) };


    // responseInfo Field Functions 
    bool hasResponseInfo() const { return this->responseInfo_ != nullptr;};
    void deleteResponseInfo() { this->responseInfo_ = nullptr;};
    inline const Models::UpdateServiceInstanceAttributeRequestLicenseDataResponseInfo & responseInfo() const { DARABONBA_PTR_GET_CONST(responseInfo_, Models::UpdateServiceInstanceAttributeRequestLicenseDataResponseInfo) };
    inline Models::UpdateServiceInstanceAttributeRequestLicenseDataResponseInfo responseInfo() { DARABONBA_PTR_GET(responseInfo_, Models::UpdateServiceInstanceAttributeRequestLicenseDataResponseInfo) };
    inline UpdateServiceInstanceAttributeRequestLicenseData& setResponseInfo(const Models::UpdateServiceInstanceAttributeRequestLicenseDataResponseInfo & responseInfo) { DARABONBA_PTR_SET_VALUE(responseInfo_, responseInfo) };
    inline UpdateServiceInstanceAttributeRequestLicenseData& setResponseInfo(Models::UpdateServiceInstanceAttributeRequestLicenseDataResponseInfo && responseInfo) { DARABONBA_PTR_SET_RVALUE(responseInfo_, responseInfo) };


  protected:
    // The Custom Data
    std::shared_ptr<string> customData_ = nullptr;
    // Mock response info.
    std::shared_ptr<Models::UpdateServiceInstanceAttributeRequestLicenseDataResponseInfo> responseInfo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ComputeNestSupplier20210521
#endif
