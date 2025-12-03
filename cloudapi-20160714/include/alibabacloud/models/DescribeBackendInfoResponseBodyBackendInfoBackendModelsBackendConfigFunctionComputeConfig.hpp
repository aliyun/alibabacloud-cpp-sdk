// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEBACKENDINFORESPONSEBODYBACKENDINFOBACKENDMODELSBACKENDCONFIGFUNCTIONCOMPUTECONFIG_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEBACKENDINFORESPONSEBODYBACKENDINFOBACKENDMODELSBACKENDCONFIGFUNCTIONCOMPUTECONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class DescribeBackendInfoResponseBodyBackendInfoBackendModelsBackendConfigFunctionComputeConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeBackendInfoResponseBodyBackendInfoBackendModelsBackendConfigFunctionComputeConfig& obj) { 
      DARABONBA_PTR_TO_JSON(FcBaseUrl, fcBaseUrl_);
      DARABONBA_PTR_TO_JSON(FcRegionId, fcRegionId_);
      DARABONBA_PTR_TO_JSON(FcType, fcType_);
      DARABONBA_PTR_TO_JSON(FunctionName, functionName_);
      DARABONBA_PTR_TO_JSON(OnlyBusinessPath, onlyBusinessPath_);
      DARABONBA_PTR_TO_JSON(Qualifier, qualifier_);
      DARABONBA_PTR_TO_JSON(RoleArn, roleArn_);
      DARABONBA_PTR_TO_JSON(ServiceName, serviceName_);
      DARABONBA_PTR_TO_JSON(TriggerName, triggerName_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeBackendInfoResponseBodyBackendInfoBackendModelsBackendConfigFunctionComputeConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(FcBaseUrl, fcBaseUrl_);
      DARABONBA_PTR_FROM_JSON(FcRegionId, fcRegionId_);
      DARABONBA_PTR_FROM_JSON(FcType, fcType_);
      DARABONBA_PTR_FROM_JSON(FunctionName, functionName_);
      DARABONBA_PTR_FROM_JSON(OnlyBusinessPath, onlyBusinessPath_);
      DARABONBA_PTR_FROM_JSON(Qualifier, qualifier_);
      DARABONBA_PTR_FROM_JSON(RoleArn, roleArn_);
      DARABONBA_PTR_FROM_JSON(ServiceName, serviceName_);
      DARABONBA_PTR_FROM_JSON(TriggerName, triggerName_);
    };
    DescribeBackendInfoResponseBodyBackendInfoBackendModelsBackendConfigFunctionComputeConfig() = default ;
    DescribeBackendInfoResponseBodyBackendInfoBackendModelsBackendConfigFunctionComputeConfig(const DescribeBackendInfoResponseBodyBackendInfoBackendModelsBackendConfigFunctionComputeConfig &) = default ;
    DescribeBackendInfoResponseBodyBackendInfoBackendModelsBackendConfigFunctionComputeConfig(DescribeBackendInfoResponseBodyBackendInfoBackendModelsBackendConfigFunctionComputeConfig &&) = default ;
    DescribeBackendInfoResponseBodyBackendInfoBackendModelsBackendConfigFunctionComputeConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeBackendInfoResponseBodyBackendInfoBackendModelsBackendConfigFunctionComputeConfig() = default ;
    DescribeBackendInfoResponseBodyBackendInfoBackendModelsBackendConfigFunctionComputeConfig& operator=(const DescribeBackendInfoResponseBodyBackendInfoBackendModelsBackendConfigFunctionComputeConfig &) = default ;
    DescribeBackendInfoResponseBodyBackendInfoBackendModelsBackendConfigFunctionComputeConfig& operator=(DescribeBackendInfoResponseBodyBackendInfoBackendModelsBackendConfigFunctionComputeConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->fcBaseUrl_ == nullptr
        && return this->fcRegionId_ == nullptr && return this->fcType_ == nullptr && return this->functionName_ == nullptr && return this->onlyBusinessPath_ == nullptr && return this->qualifier_ == nullptr
        && return this->roleArn_ == nullptr && return this->serviceName_ == nullptr && return this->triggerName_ == nullptr; };
    // fcBaseUrl Field Functions 
    bool hasFcBaseUrl() const { return this->fcBaseUrl_ != nullptr;};
    void deleteFcBaseUrl() { this->fcBaseUrl_ = nullptr;};
    inline string fcBaseUrl() const { DARABONBA_PTR_GET_DEFAULT(fcBaseUrl_, "") };
    inline DescribeBackendInfoResponseBodyBackendInfoBackendModelsBackendConfigFunctionComputeConfig& setFcBaseUrl(string fcBaseUrl) { DARABONBA_PTR_SET_VALUE(fcBaseUrl_, fcBaseUrl) };


    // fcRegionId Field Functions 
    bool hasFcRegionId() const { return this->fcRegionId_ != nullptr;};
    void deleteFcRegionId() { this->fcRegionId_ = nullptr;};
    inline string fcRegionId() const { DARABONBA_PTR_GET_DEFAULT(fcRegionId_, "") };
    inline DescribeBackendInfoResponseBodyBackendInfoBackendModelsBackendConfigFunctionComputeConfig& setFcRegionId(string fcRegionId) { DARABONBA_PTR_SET_VALUE(fcRegionId_, fcRegionId) };


    // fcType Field Functions 
    bool hasFcType() const { return this->fcType_ != nullptr;};
    void deleteFcType() { this->fcType_ = nullptr;};
    inline string fcType() const { DARABONBA_PTR_GET_DEFAULT(fcType_, "") };
    inline DescribeBackendInfoResponseBodyBackendInfoBackendModelsBackendConfigFunctionComputeConfig& setFcType(string fcType) { DARABONBA_PTR_SET_VALUE(fcType_, fcType) };


    // functionName Field Functions 
    bool hasFunctionName() const { return this->functionName_ != nullptr;};
    void deleteFunctionName() { this->functionName_ = nullptr;};
    inline string functionName() const { DARABONBA_PTR_GET_DEFAULT(functionName_, "") };
    inline DescribeBackendInfoResponseBodyBackendInfoBackendModelsBackendConfigFunctionComputeConfig& setFunctionName(string functionName) { DARABONBA_PTR_SET_VALUE(functionName_, functionName) };


    // onlyBusinessPath Field Functions 
    bool hasOnlyBusinessPath() const { return this->onlyBusinessPath_ != nullptr;};
    void deleteOnlyBusinessPath() { this->onlyBusinessPath_ = nullptr;};
    inline bool onlyBusinessPath() const { DARABONBA_PTR_GET_DEFAULT(onlyBusinessPath_, false) };
    inline DescribeBackendInfoResponseBodyBackendInfoBackendModelsBackendConfigFunctionComputeConfig& setOnlyBusinessPath(bool onlyBusinessPath) { DARABONBA_PTR_SET_VALUE(onlyBusinessPath_, onlyBusinessPath) };


    // qualifier Field Functions 
    bool hasQualifier() const { return this->qualifier_ != nullptr;};
    void deleteQualifier() { this->qualifier_ = nullptr;};
    inline string qualifier() const { DARABONBA_PTR_GET_DEFAULT(qualifier_, "") };
    inline DescribeBackendInfoResponseBodyBackendInfoBackendModelsBackendConfigFunctionComputeConfig& setQualifier(string qualifier) { DARABONBA_PTR_SET_VALUE(qualifier_, qualifier) };


    // roleArn Field Functions 
    bool hasRoleArn() const { return this->roleArn_ != nullptr;};
    void deleteRoleArn() { this->roleArn_ = nullptr;};
    inline string roleArn() const { DARABONBA_PTR_GET_DEFAULT(roleArn_, "") };
    inline DescribeBackendInfoResponseBodyBackendInfoBackendModelsBackendConfigFunctionComputeConfig& setRoleArn(string roleArn) { DARABONBA_PTR_SET_VALUE(roleArn_, roleArn) };


    // serviceName Field Functions 
    bool hasServiceName() const { return this->serviceName_ != nullptr;};
    void deleteServiceName() { this->serviceName_ = nullptr;};
    inline string serviceName() const { DARABONBA_PTR_GET_DEFAULT(serviceName_, "") };
    inline DescribeBackendInfoResponseBodyBackendInfoBackendModelsBackendConfigFunctionComputeConfig& setServiceName(string serviceName) { DARABONBA_PTR_SET_VALUE(serviceName_, serviceName) };


    // triggerName Field Functions 
    bool hasTriggerName() const { return this->triggerName_ != nullptr;};
    void deleteTriggerName() { this->triggerName_ = nullptr;};
    inline string triggerName() const { DARABONBA_PTR_GET_DEFAULT(triggerName_, "") };
    inline DescribeBackendInfoResponseBodyBackendInfoBackendModelsBackendConfigFunctionComputeConfig& setTriggerName(string triggerName) { DARABONBA_PTR_SET_VALUE(triggerName_, triggerName) };


  protected:
    // The root path of the Function Compute service.
    std::shared_ptr<string> fcBaseUrl_ = nullptr;
    // The region ID of the Function Compute service.
    std::shared_ptr<string> fcRegionId_ = nullptr;
    // The type of the service in Function Compute.
    std::shared_ptr<string> fcType_ = nullptr;
    // The function name that is defined in Function Compute.
    std::shared_ptr<string> functionName_ = nullptr;
    // Indicates whether the backend service receives only the service path.
    std::shared_ptr<bool> onlyBusinessPath_ = nullptr;
    // The alias of the function.
    std::shared_ptr<string> qualifier_ = nullptr;
    // The Alibaba Cloud Resource Name (ARN) of the RAM role that is assumed by API Gateway to access Function Compute.
    std::shared_ptr<string> roleArn_ = nullptr;
    // The service name that is defined in Function Compute.
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
