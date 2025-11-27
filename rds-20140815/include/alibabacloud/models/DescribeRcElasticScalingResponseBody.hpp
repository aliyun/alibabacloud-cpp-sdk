// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERCELASTICSCALINGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERCELASTICSCALINGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeRCElasticScalingResponseBodyScheduledRuleTemplates.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class DescribeRCElasticScalingResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRCElasticScalingResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AcuType, acuType_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ScalingEnabled, scalingEnabled_);
      DARABONBA_PTR_TO_JSON(ScalingSupported, scalingSupported_);
      DARABONBA_PTR_TO_JSON(ScheduledRule, scheduledRule_);
      DARABONBA_PTR_TO_JSON(ScheduledRuleTemplates, scheduledRuleTemplates_);
      DARABONBA_PTR_TO_JSON(TargetInstanceType, targetInstanceType_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRCElasticScalingResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AcuType, acuType_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ScalingEnabled, scalingEnabled_);
      DARABONBA_PTR_FROM_JSON(ScalingSupported, scalingSupported_);
      DARABONBA_PTR_FROM_JSON(ScheduledRule, scheduledRule_);
      DARABONBA_PTR_FROM_JSON(ScheduledRuleTemplates, scheduledRuleTemplates_);
      DARABONBA_PTR_FROM_JSON(TargetInstanceType, targetInstanceType_);
    };
    DescribeRCElasticScalingResponseBody() = default ;
    DescribeRCElasticScalingResponseBody(const DescribeRCElasticScalingResponseBody &) = default ;
    DescribeRCElasticScalingResponseBody(DescribeRCElasticScalingResponseBody &&) = default ;
    DescribeRCElasticScalingResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRCElasticScalingResponseBody() = default ;
    DescribeRCElasticScalingResponseBody& operator=(const DescribeRCElasticScalingResponseBody &) = default ;
    DescribeRCElasticScalingResponseBody& operator=(DescribeRCElasticScalingResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->acuType_ == nullptr
        && return this->instanceId_ == nullptr && return this->requestId_ == nullptr && return this->scalingEnabled_ == nullptr && return this->scalingSupported_ == nullptr && return this->scheduledRule_ == nullptr
        && return this->scheduledRuleTemplates_ == nullptr && return this->targetInstanceType_ == nullptr; };
    // acuType Field Functions 
    bool hasAcuType() const { return this->acuType_ != nullptr;};
    void deleteAcuType() { this->acuType_ = nullptr;};
    inline string acuType() const { DARABONBA_PTR_GET_DEFAULT(acuType_, "") };
    inline DescribeRCElasticScalingResponseBody& setAcuType(string acuType) { DARABONBA_PTR_SET_VALUE(acuType_, acuType) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribeRCElasticScalingResponseBody& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeRCElasticScalingResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // scalingEnabled Field Functions 
    bool hasScalingEnabled() const { return this->scalingEnabled_ != nullptr;};
    void deleteScalingEnabled() { this->scalingEnabled_ = nullptr;};
    inline bool scalingEnabled() const { DARABONBA_PTR_GET_DEFAULT(scalingEnabled_, false) };
    inline DescribeRCElasticScalingResponseBody& setScalingEnabled(bool scalingEnabled) { DARABONBA_PTR_SET_VALUE(scalingEnabled_, scalingEnabled) };


    // scalingSupported Field Functions 
    bool hasScalingSupported() const { return this->scalingSupported_ != nullptr;};
    void deleteScalingSupported() { this->scalingSupported_ = nullptr;};
    inline bool scalingSupported() const { DARABONBA_PTR_GET_DEFAULT(scalingSupported_, false) };
    inline DescribeRCElasticScalingResponseBody& setScalingSupported(bool scalingSupported) { DARABONBA_PTR_SET_VALUE(scalingSupported_, scalingSupported) };


    // scheduledRule Field Functions 
    bool hasScheduledRule() const { return this->scheduledRule_ != nullptr;};
    void deleteScheduledRule() { this->scheduledRule_ = nullptr;};
    inline string scheduledRule() const { DARABONBA_PTR_GET_DEFAULT(scheduledRule_, "") };
    inline DescribeRCElasticScalingResponseBody& setScheduledRule(string scheduledRule) { DARABONBA_PTR_SET_VALUE(scheduledRule_, scheduledRule) };


    // scheduledRuleTemplates Field Functions 
    bool hasScheduledRuleTemplates() const { return this->scheduledRuleTemplates_ != nullptr;};
    void deleteScheduledRuleTemplates() { this->scheduledRuleTemplates_ = nullptr;};
    inline const DescribeRCElasticScalingResponseBodyScheduledRuleTemplates & scheduledRuleTemplates() const { DARABONBA_PTR_GET_CONST(scheduledRuleTemplates_, DescribeRCElasticScalingResponseBodyScheduledRuleTemplates) };
    inline DescribeRCElasticScalingResponseBodyScheduledRuleTemplates scheduledRuleTemplates() { DARABONBA_PTR_GET(scheduledRuleTemplates_, DescribeRCElasticScalingResponseBodyScheduledRuleTemplates) };
    inline DescribeRCElasticScalingResponseBody& setScheduledRuleTemplates(const DescribeRCElasticScalingResponseBodyScheduledRuleTemplates & scheduledRuleTemplates) { DARABONBA_PTR_SET_VALUE(scheduledRuleTemplates_, scheduledRuleTemplates) };
    inline DescribeRCElasticScalingResponseBody& setScheduledRuleTemplates(DescribeRCElasticScalingResponseBodyScheduledRuleTemplates && scheduledRuleTemplates) { DARABONBA_PTR_SET_RVALUE(scheduledRuleTemplates_, scheduledRuleTemplates) };


    // targetInstanceType Field Functions 
    bool hasTargetInstanceType() const { return this->targetInstanceType_ != nullptr;};
    void deleteTargetInstanceType() { this->targetInstanceType_ = nullptr;};
    inline string targetInstanceType() const { DARABONBA_PTR_GET_DEFAULT(targetInstanceType_, "") };
    inline DescribeRCElasticScalingResponseBody& setTargetInstanceType(string targetInstanceType) { DARABONBA_PTR_SET_VALUE(targetInstanceType_, targetInstanceType) };


  protected:
    std::shared_ptr<string> acuType_ = nullptr;
    std::shared_ptr<string> instanceId_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<bool> scalingEnabled_ = nullptr;
    std::shared_ptr<bool> scalingSupported_ = nullptr;
    std::shared_ptr<string> scheduledRule_ = nullptr;
    std::shared_ptr<DescribeRCElasticScalingResponseBodyScheduledRuleTemplates> scheduledRuleTemplates_ = nullptr;
    std::shared_ptr<string> targetInstanceType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
