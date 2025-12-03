// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAPIRESPONSEBODYSERVICECONFIGFUNCTIONCOMPUTECONFIG_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAPIRESPONSEBODYSERVICECONFIGFUNCTIONCOMPUTECONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class DescribeApiResponseBodyServiceConfigFunctionComputeConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeApiResponseBodyServiceConfigFunctionComputeConfig& obj) { 
      DARABONBA_PTR_TO_JSON(ContentTypeCatagory, contentTypeCatagory_);
      DARABONBA_PTR_TO_JSON(ContentTypeValue, contentTypeValue_);
      DARABONBA_PTR_TO_JSON(FcBaseUrl, fcBaseUrl_);
      DARABONBA_PTR_TO_JSON(FcType, fcType_);
      DARABONBA_PTR_TO_JSON(FcVersion, fcVersion_);
      DARABONBA_PTR_TO_JSON(FunctionName, functionName_);
      DARABONBA_PTR_TO_JSON(Method, method_);
      DARABONBA_PTR_TO_JSON(OnlyBusinessPath, onlyBusinessPath_);
      DARABONBA_PTR_TO_JSON(Path, path_);
      DARABONBA_PTR_TO_JSON(Qualifier, qualifier_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RoleArn, roleArn_);
      DARABONBA_PTR_TO_JSON(ServiceName, serviceName_);
      DARABONBA_PTR_TO_JSON(TriggerName, triggerName_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeApiResponseBodyServiceConfigFunctionComputeConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(ContentTypeCatagory, contentTypeCatagory_);
      DARABONBA_PTR_FROM_JSON(ContentTypeValue, contentTypeValue_);
      DARABONBA_PTR_FROM_JSON(FcBaseUrl, fcBaseUrl_);
      DARABONBA_PTR_FROM_JSON(FcType, fcType_);
      DARABONBA_PTR_FROM_JSON(FcVersion, fcVersion_);
      DARABONBA_PTR_FROM_JSON(FunctionName, functionName_);
      DARABONBA_PTR_FROM_JSON(Method, method_);
      DARABONBA_PTR_FROM_JSON(OnlyBusinessPath, onlyBusinessPath_);
      DARABONBA_PTR_FROM_JSON(Path, path_);
      DARABONBA_PTR_FROM_JSON(Qualifier, qualifier_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RoleArn, roleArn_);
      DARABONBA_PTR_FROM_JSON(ServiceName, serviceName_);
      DARABONBA_PTR_FROM_JSON(TriggerName, triggerName_);
    };
    DescribeApiResponseBodyServiceConfigFunctionComputeConfig() = default ;
    DescribeApiResponseBodyServiceConfigFunctionComputeConfig(const DescribeApiResponseBodyServiceConfigFunctionComputeConfig &) = default ;
    DescribeApiResponseBodyServiceConfigFunctionComputeConfig(DescribeApiResponseBodyServiceConfigFunctionComputeConfig &&) = default ;
    DescribeApiResponseBodyServiceConfigFunctionComputeConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeApiResponseBodyServiceConfigFunctionComputeConfig() = default ;
    DescribeApiResponseBodyServiceConfigFunctionComputeConfig& operator=(const DescribeApiResponseBodyServiceConfigFunctionComputeConfig &) = default ;
    DescribeApiResponseBodyServiceConfigFunctionComputeConfig& operator=(DescribeApiResponseBodyServiceConfigFunctionComputeConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->contentTypeCatagory_ == nullptr
        && return this->contentTypeValue_ == nullptr && return this->fcBaseUrl_ == nullptr && return this->fcType_ == nullptr && return this->fcVersion_ == nullptr && return this->functionName_ == nullptr
        && return this->method_ == nullptr && return this->onlyBusinessPath_ == nullptr && return this->path_ == nullptr && return this->qualifier_ == nullptr && return this->regionId_ == nullptr
        && return this->roleArn_ == nullptr && return this->serviceName_ == nullptr && return this->triggerName_ == nullptr; };
    // contentTypeCatagory Field Functions 
    bool hasContentTypeCatagory() const { return this->contentTypeCatagory_ != nullptr;};
    void deleteContentTypeCatagory() { this->contentTypeCatagory_ = nullptr;};
    inline string contentTypeCatagory() const { DARABONBA_PTR_GET_DEFAULT(contentTypeCatagory_, "") };
    inline DescribeApiResponseBodyServiceConfigFunctionComputeConfig& setContentTypeCatagory(string contentTypeCatagory) { DARABONBA_PTR_SET_VALUE(contentTypeCatagory_, contentTypeCatagory) };


    // contentTypeValue Field Functions 
    bool hasContentTypeValue() const { return this->contentTypeValue_ != nullptr;};
    void deleteContentTypeValue() { this->contentTypeValue_ = nullptr;};
    inline string contentTypeValue() const { DARABONBA_PTR_GET_DEFAULT(contentTypeValue_, "") };
    inline DescribeApiResponseBodyServiceConfigFunctionComputeConfig& setContentTypeValue(string contentTypeValue) { DARABONBA_PTR_SET_VALUE(contentTypeValue_, contentTypeValue) };


    // fcBaseUrl Field Functions 
    bool hasFcBaseUrl() const { return this->fcBaseUrl_ != nullptr;};
    void deleteFcBaseUrl() { this->fcBaseUrl_ = nullptr;};
    inline string fcBaseUrl() const { DARABONBA_PTR_GET_DEFAULT(fcBaseUrl_, "") };
    inline DescribeApiResponseBodyServiceConfigFunctionComputeConfig& setFcBaseUrl(string fcBaseUrl) { DARABONBA_PTR_SET_VALUE(fcBaseUrl_, fcBaseUrl) };


    // fcType Field Functions 
    bool hasFcType() const { return this->fcType_ != nullptr;};
    void deleteFcType() { this->fcType_ = nullptr;};
    inline string fcType() const { DARABONBA_PTR_GET_DEFAULT(fcType_, "") };
    inline DescribeApiResponseBodyServiceConfigFunctionComputeConfig& setFcType(string fcType) { DARABONBA_PTR_SET_VALUE(fcType_, fcType) };


    // fcVersion Field Functions 
    bool hasFcVersion() const { return this->fcVersion_ != nullptr;};
    void deleteFcVersion() { this->fcVersion_ = nullptr;};
    inline string fcVersion() const { DARABONBA_PTR_GET_DEFAULT(fcVersion_, "") };
    inline DescribeApiResponseBodyServiceConfigFunctionComputeConfig& setFcVersion(string fcVersion) { DARABONBA_PTR_SET_VALUE(fcVersion_, fcVersion) };


    // functionName Field Functions 
    bool hasFunctionName() const { return this->functionName_ != nullptr;};
    void deleteFunctionName() { this->functionName_ = nullptr;};
    inline string functionName() const { DARABONBA_PTR_GET_DEFAULT(functionName_, "") };
    inline DescribeApiResponseBodyServiceConfigFunctionComputeConfig& setFunctionName(string functionName) { DARABONBA_PTR_SET_VALUE(functionName_, functionName) };


    // method Field Functions 
    bool hasMethod() const { return this->method_ != nullptr;};
    void deleteMethod() { this->method_ = nullptr;};
    inline string method() const { DARABONBA_PTR_GET_DEFAULT(method_, "") };
    inline DescribeApiResponseBodyServiceConfigFunctionComputeConfig& setMethod(string method) { DARABONBA_PTR_SET_VALUE(method_, method) };


    // onlyBusinessPath Field Functions 
    bool hasOnlyBusinessPath() const { return this->onlyBusinessPath_ != nullptr;};
    void deleteOnlyBusinessPath() { this->onlyBusinessPath_ = nullptr;};
    inline bool onlyBusinessPath() const { DARABONBA_PTR_GET_DEFAULT(onlyBusinessPath_, false) };
    inline DescribeApiResponseBodyServiceConfigFunctionComputeConfig& setOnlyBusinessPath(bool onlyBusinessPath) { DARABONBA_PTR_SET_VALUE(onlyBusinessPath_, onlyBusinessPath) };


    // path Field Functions 
    bool hasPath() const { return this->path_ != nullptr;};
    void deletePath() { this->path_ = nullptr;};
    inline string path() const { DARABONBA_PTR_GET_DEFAULT(path_, "") };
    inline DescribeApiResponseBodyServiceConfigFunctionComputeConfig& setPath(string path) { DARABONBA_PTR_SET_VALUE(path_, path) };


    // qualifier Field Functions 
    bool hasQualifier() const { return this->qualifier_ != nullptr;};
    void deleteQualifier() { this->qualifier_ = nullptr;};
    inline string qualifier() const { DARABONBA_PTR_GET_DEFAULT(qualifier_, "") };
    inline DescribeApiResponseBodyServiceConfigFunctionComputeConfig& setQualifier(string qualifier) { DARABONBA_PTR_SET_VALUE(qualifier_, qualifier) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeApiResponseBodyServiceConfigFunctionComputeConfig& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // roleArn Field Functions 
    bool hasRoleArn() const { return this->roleArn_ != nullptr;};
    void deleteRoleArn() { this->roleArn_ = nullptr;};
    inline string roleArn() const { DARABONBA_PTR_GET_DEFAULT(roleArn_, "") };
    inline DescribeApiResponseBodyServiceConfigFunctionComputeConfig& setRoleArn(string roleArn) { DARABONBA_PTR_SET_VALUE(roleArn_, roleArn) };


    // serviceName Field Functions 
    bool hasServiceName() const { return this->serviceName_ != nullptr;};
    void deleteServiceName() { this->serviceName_ = nullptr;};
    inline string serviceName() const { DARABONBA_PTR_GET_DEFAULT(serviceName_, "") };
    inline DescribeApiResponseBodyServiceConfigFunctionComputeConfig& setServiceName(string serviceName) { DARABONBA_PTR_SET_VALUE(serviceName_, serviceName) };


    // triggerName Field Functions 
    bool hasTriggerName() const { return this->triggerName_ != nullptr;};
    void deleteTriggerName() { this->triggerName_ = nullptr;};
    inline string triggerName() const { DARABONBA_PTR_GET_DEFAULT(triggerName_, "") };
    inline DescribeApiResponseBodyServiceConfigFunctionComputeConfig& setTriggerName(string triggerName) { DARABONBA_PTR_SET_VALUE(triggerName_, triggerName) };


  protected:
    // The ContentType header type used when you call the backend service over HTTP.
    // 
    // *   **DEFAULT**: the default header type in API Gateway
    // *   **CUSTOM**: a custom header type
    // *   **CLIENT**: the ContentType header type of the client
    std::shared_ptr<string> contentTypeCatagory_ = nullptr;
    // The value of the ContentType header when the ContentTypeCatagory parameter is set to DEFAULT or CUSTOM.
    std::shared_ptr<string> contentTypeValue_ = nullptr;
    // The root path of Function Compute.
    std::shared_ptr<string> fcBaseUrl_ = nullptr;
    // The type of the Function Compute instance.
    std::shared_ptr<string> fcType_ = nullptr;
    std::shared_ptr<string> fcVersion_ = nullptr;
    // The function name defined in Function Compute.
    std::shared_ptr<string> functionName_ = nullptr;
    // The request method.
    std::shared_ptr<string> method_ = nullptr;
    // The backend only receives the service path.
    std::shared_ptr<bool> onlyBusinessPath_ = nullptr;
    // The API request path.
    std::shared_ptr<string> path_ = nullptr;
    // The alias of the function.
    std::shared_ptr<string> qualifier_ = nullptr;
    // The region where the Function Compute instance is located.
    std::shared_ptr<string> regionId_ = nullptr;
    // The Alibaba Cloud Resource Name (ARN) of the RAM role to be assumed by API Gateway to access Function Compute.
    std::shared_ptr<string> roleArn_ = nullptr;
    // The service name defined in Function Compute.
    std::shared_ptr<string> serviceName_ = nullptr;
    // The name of the trigger.
    // 
    // You can specify the TriggerName or TriggerUrl parameter. The TriggerName parameter is optional.
    std::shared_ptr<string> triggerName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
