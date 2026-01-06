// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERCELASTICSCALINGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERCELASTICSCALINGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
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
    class ScheduledRuleTemplates : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ScheduledRuleTemplates& obj) { 
        DARABONBA_PTR_TO_JSON(items, items_);
      };
      friend void from_json(const Darabonba::Json& j, ScheduledRuleTemplates& obj) { 
        DARABONBA_PTR_FROM_JSON(items, items_);
      };
      ScheduledRuleTemplates() = default ;
      ScheduledRuleTemplates(const ScheduledRuleTemplates &) = default ;
      ScheduledRuleTemplates(ScheduledRuleTemplates &&) = default ;
      ScheduledRuleTemplates(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ScheduledRuleTemplates() = default ;
      ScheduledRuleTemplates& operator=(const ScheduledRuleTemplates &) = default ;
      ScheduledRuleTemplates& operator=(ScheduledRuleTemplates &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->items_ == nullptr; };
      // items Field Functions 
      bool hasItems() const { return this->items_ != nullptr;};
      void deleteItems() { this->items_ = nullptr;};
      inline const vector<string> & getItems() const { DARABONBA_PTR_GET_CONST(items_, vector<string>) };
      inline vector<string> getItems() { DARABONBA_PTR_GET(items_, vector<string>) };
      inline ScheduledRuleTemplates& setItems(const vector<string> & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
      inline ScheduledRuleTemplates& setItems(vector<string> && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


    protected:
      shared_ptr<vector<string>> items_ {};
    };

    virtual bool empty() const override { return this->acuType_ == nullptr
        && this->instanceId_ == nullptr && this->requestId_ == nullptr && this->scalingEnabled_ == nullptr && this->scalingSupported_ == nullptr && this->scheduledRule_ == nullptr
        && this->scheduledRuleTemplates_ == nullptr && this->targetInstanceType_ == nullptr; };
    // acuType Field Functions 
    bool hasAcuType() const { return this->acuType_ != nullptr;};
    void deleteAcuType() { this->acuType_ = nullptr;};
    inline string getAcuType() const { DARABONBA_PTR_GET_DEFAULT(acuType_, "") };
    inline DescribeRCElasticScalingResponseBody& setAcuType(string acuType) { DARABONBA_PTR_SET_VALUE(acuType_, acuType) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribeRCElasticScalingResponseBody& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeRCElasticScalingResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // scalingEnabled Field Functions 
    bool hasScalingEnabled() const { return this->scalingEnabled_ != nullptr;};
    void deleteScalingEnabled() { this->scalingEnabled_ = nullptr;};
    inline bool getScalingEnabled() const { DARABONBA_PTR_GET_DEFAULT(scalingEnabled_, false) };
    inline DescribeRCElasticScalingResponseBody& setScalingEnabled(bool scalingEnabled) { DARABONBA_PTR_SET_VALUE(scalingEnabled_, scalingEnabled) };


    // scalingSupported Field Functions 
    bool hasScalingSupported() const { return this->scalingSupported_ != nullptr;};
    void deleteScalingSupported() { this->scalingSupported_ = nullptr;};
    inline bool getScalingSupported() const { DARABONBA_PTR_GET_DEFAULT(scalingSupported_, false) };
    inline DescribeRCElasticScalingResponseBody& setScalingSupported(bool scalingSupported) { DARABONBA_PTR_SET_VALUE(scalingSupported_, scalingSupported) };


    // scheduledRule Field Functions 
    bool hasScheduledRule() const { return this->scheduledRule_ != nullptr;};
    void deleteScheduledRule() { this->scheduledRule_ = nullptr;};
    inline string getScheduledRule() const { DARABONBA_PTR_GET_DEFAULT(scheduledRule_, "") };
    inline DescribeRCElasticScalingResponseBody& setScheduledRule(string scheduledRule) { DARABONBA_PTR_SET_VALUE(scheduledRule_, scheduledRule) };


    // scheduledRuleTemplates Field Functions 
    bool hasScheduledRuleTemplates() const { return this->scheduledRuleTemplates_ != nullptr;};
    void deleteScheduledRuleTemplates() { this->scheduledRuleTemplates_ = nullptr;};
    inline const DescribeRCElasticScalingResponseBody::ScheduledRuleTemplates & getScheduledRuleTemplates() const { DARABONBA_PTR_GET_CONST(scheduledRuleTemplates_, DescribeRCElasticScalingResponseBody::ScheduledRuleTemplates) };
    inline DescribeRCElasticScalingResponseBody::ScheduledRuleTemplates getScheduledRuleTemplates() { DARABONBA_PTR_GET(scheduledRuleTemplates_, DescribeRCElasticScalingResponseBody::ScheduledRuleTemplates) };
    inline DescribeRCElasticScalingResponseBody& setScheduledRuleTemplates(const DescribeRCElasticScalingResponseBody::ScheduledRuleTemplates & scheduledRuleTemplates) { DARABONBA_PTR_SET_VALUE(scheduledRuleTemplates_, scheduledRuleTemplates) };
    inline DescribeRCElasticScalingResponseBody& setScheduledRuleTemplates(DescribeRCElasticScalingResponseBody::ScheduledRuleTemplates && scheduledRuleTemplates) { DARABONBA_PTR_SET_RVALUE(scheduledRuleTemplates_, scheduledRuleTemplates) };


    // targetInstanceType Field Functions 
    bool hasTargetInstanceType() const { return this->targetInstanceType_ != nullptr;};
    void deleteTargetInstanceType() { this->targetInstanceType_ = nullptr;};
    inline string getTargetInstanceType() const { DARABONBA_PTR_GET_DEFAULT(targetInstanceType_, "") };
    inline DescribeRCElasticScalingResponseBody& setTargetInstanceType(string targetInstanceType) { DARABONBA_PTR_SET_VALUE(targetInstanceType_, targetInstanceType) };


  protected:
    shared_ptr<string> acuType_ {};
    shared_ptr<string> instanceId_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> scalingEnabled_ {};
    shared_ptr<bool> scalingSupported_ {};
    shared_ptr<string> scheduledRule_ {};
    shared_ptr<DescribeRCElasticScalingResponseBody::ScheduledRuleTemplates> scheduledRuleTemplates_ {};
    shared_ptr<string> targetInstanceType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
