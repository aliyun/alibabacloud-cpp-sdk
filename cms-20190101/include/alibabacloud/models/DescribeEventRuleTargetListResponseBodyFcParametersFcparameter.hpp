// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEEVENTRULETARGETLISTRESPONSEBODYFCPARAMETERSFCPARAMETER_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEEVENTRULETARGETLISTRESPONSEBODYFCPARAMETERSFCPARAMETER_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class DescribeEventRuleTargetListResponseBodyFcParametersFCParameter : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeEventRuleTargetListResponseBodyFcParametersFCParameter& obj) { 
      DARABONBA_PTR_TO_JSON(Arn, arn_);
      DARABONBA_PTR_TO_JSON(FunctionName, functionName_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Region, region_);
      DARABONBA_PTR_TO_JSON(ServiceName, serviceName_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeEventRuleTargetListResponseBodyFcParametersFCParameter& obj) { 
      DARABONBA_PTR_FROM_JSON(Arn, arn_);
      DARABONBA_PTR_FROM_JSON(FunctionName, functionName_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Region, region_);
      DARABONBA_PTR_FROM_JSON(ServiceName, serviceName_);
    };
    DescribeEventRuleTargetListResponseBodyFcParametersFCParameter() = default ;
    DescribeEventRuleTargetListResponseBodyFcParametersFCParameter(const DescribeEventRuleTargetListResponseBodyFcParametersFCParameter &) = default ;
    DescribeEventRuleTargetListResponseBodyFcParametersFCParameter(DescribeEventRuleTargetListResponseBodyFcParametersFCParameter &&) = default ;
    DescribeEventRuleTargetListResponseBodyFcParametersFCParameter(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeEventRuleTargetListResponseBodyFcParametersFCParameter() = default ;
    DescribeEventRuleTargetListResponseBodyFcParametersFCParameter& operator=(const DescribeEventRuleTargetListResponseBodyFcParametersFCParameter &) = default ;
    DescribeEventRuleTargetListResponseBodyFcParametersFCParameter& operator=(DescribeEventRuleTargetListResponseBodyFcParametersFCParameter &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->arn_ != nullptr
        && this->functionName_ != nullptr && this->id_ != nullptr && this->region_ != nullptr && this->serviceName_ != nullptr; };
    // arn Field Functions 
    bool hasArn() const { return this->arn_ != nullptr;};
    void deleteArn() { this->arn_ = nullptr;};
    inline string arn() const { DARABONBA_PTR_GET_DEFAULT(arn_, "") };
    inline DescribeEventRuleTargetListResponseBodyFcParametersFCParameter& setArn(string arn) { DARABONBA_PTR_SET_VALUE(arn_, arn) };


    // functionName Field Functions 
    bool hasFunctionName() const { return this->functionName_ != nullptr;};
    void deleteFunctionName() { this->functionName_ = nullptr;};
    inline string functionName() const { DARABONBA_PTR_GET_DEFAULT(functionName_, "") };
    inline DescribeEventRuleTargetListResponseBodyFcParametersFCParameter& setFunctionName(string functionName) { DARABONBA_PTR_SET_VALUE(functionName_, functionName) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline DescribeEventRuleTargetListResponseBodyFcParametersFCParameter& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // region Field Functions 
    bool hasRegion() const { return this->region_ != nullptr;};
    void deleteRegion() { this->region_ = nullptr;};
    inline string region() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
    inline DescribeEventRuleTargetListResponseBodyFcParametersFCParameter& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


    // serviceName Field Functions 
    bool hasServiceName() const { return this->serviceName_ != nullptr;};
    void deleteServiceName() { this->serviceName_ = nullptr;};
    inline string serviceName() const { DARABONBA_PTR_GET_DEFAULT(serviceName_, "") };
    inline DescribeEventRuleTargetListResponseBodyFcParametersFCParameter& setServiceName(string serviceName) { DARABONBA_PTR_SET_VALUE(serviceName_, serviceName) };


  protected:
    // The Alibaba Cloud Resource Name (ARN) of the function. 
    // 
    // Format: `arn:acs:${Service}:${Region}:${Account}:${ResourceType}/${ResourceId}`. Fields: 
    // 
    // - Service: the code of an Alibaba Cloud service
    // - Region: the region ID
    // - Account: the ID of an Alibaba Cloud account
    // - ResourceType: the resource type
    // - ResourceId: the resource ID
    std::shared_ptr<string> arn_ = nullptr;
    // The name of the function.
    std::shared_ptr<string> functionName_ = nullptr;
    // The ID of the recipient.
    std::shared_ptr<string> id_ = nullptr;
    // The region where Function Compute is deployed.
    std::shared_ptr<string> region_ = nullptr;
    // The name of the Function Compute service.
    std::shared_ptr<string> serviceName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
