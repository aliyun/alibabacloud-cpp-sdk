// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PUTMETRICRULETARGETSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_PUTMETRICRULETARGETSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class PutMetricRuleTargetsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PutMetricRuleTargetsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RuleId, ruleId_);
      DARABONBA_PTR_TO_JSON(Targets, targets_);
    };
    friend void from_json(const Darabonba::Json& j, PutMetricRuleTargetsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RuleId, ruleId_);
      DARABONBA_PTR_FROM_JSON(Targets, targets_);
    };
    PutMetricRuleTargetsRequest() = default ;
    PutMetricRuleTargetsRequest(const PutMetricRuleTargetsRequest &) = default ;
    PutMetricRuleTargetsRequest(PutMetricRuleTargetsRequest &&) = default ;
    PutMetricRuleTargetsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PutMetricRuleTargetsRequest() = default ;
    PutMetricRuleTargetsRequest& operator=(const PutMetricRuleTargetsRequest &) = default ;
    PutMetricRuleTargetsRequest& operator=(PutMetricRuleTargetsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Targets : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Targets& obj) { 
        DARABONBA_PTR_TO_JSON(Arn, arn_);
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(JsonParams, jsonParams_);
        DARABONBA_PTR_TO_JSON(Level, level_);
      };
      friend void from_json(const Darabonba::Json& j, Targets& obj) { 
        DARABONBA_PTR_FROM_JSON(Arn, arn_);
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(JsonParams, jsonParams_);
        DARABONBA_PTR_FROM_JSON(Level, level_);
      };
      Targets() = default ;
      Targets(const Targets &) = default ;
      Targets(Targets &&) = default ;
      Targets(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Targets() = default ;
      Targets& operator=(const Targets &) = default ;
      Targets& operator=(Targets &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->arn_ == nullptr
        && this->id_ == nullptr && this->jsonParams_ == nullptr && this->level_ == nullptr; };
      // arn Field Functions 
      bool hasArn() const { return this->arn_ != nullptr;};
      void deleteArn() { this->arn_ = nullptr;};
      inline string getArn() const { DARABONBA_PTR_GET_DEFAULT(arn_, "") };
      inline Targets& setArn(string arn) { DARABONBA_PTR_SET_VALUE(arn_, arn) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
      inline Targets& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // jsonParams Field Functions 
      bool hasJsonParams() const { return this->jsonParams_ != nullptr;};
      void deleteJsonParams() { this->jsonParams_ = nullptr;};
      inline string getJsonParams() const { DARABONBA_PTR_GET_DEFAULT(jsonParams_, "") };
      inline Targets& setJsonParams(string jsonParams) { DARABONBA_PTR_SET_VALUE(jsonParams_, jsonParams) };


      // level Field Functions 
      bool hasLevel() const { return this->level_ != nullptr;};
      void deleteLevel() { this->level_ = nullptr;};
      inline string getLevel() const { DARABONBA_PTR_GET_DEFAULT(level_, "") };
      inline Targets& setLevel(string level) { DARABONBA_PTR_SET_VALUE(level_, level) };


    protected:
      // The Alibaba Cloud Resource Name (ARN) of the resource. Simple Message Queue (formerly MNS) (SMQ), Auto Scaling, Simple Log Service, and Function Compute are supported.
      // 
      // The following part describes the ARN of SMQ and the parameters in the ARN:
      // 
      // `acs:mns:{regionId}:{userId}:/{Resource type}/{Resource name}/message`.
      // 
      // *   {regionId}: the region ID of the SMQ queue or topic.
      // 
      // *   {userId}: the ID of the Alibaba Cloud account that owns the resource.
      // 
      // *   {Resource type}: the type of the resource for which alerts are triggered. Valid values:
      // 
      //     *   **queues**
      //     *   **topics**
      // 
      // *   {Resource name}: the resource name.
      // 
      //     *   If the resource type is **queues**, the resource name is the queue name.
      //     *   If the resource type is **topics**, the resource name is the topic name.
      // 
      // ARN of Auto Scaling:
      // 
      // acs:ess:{regionId}:{userId}:scalingGroupId/{Scaling group ID}:scalingRuleId/{Scaling rule ID}
      // 
      // ARN of Simple Log Service:
      // 
      // acs:log:{regionId}:{userId}:project/{Project name}/logstore/{Logstore name}
      // 
      // ARN of Function Compute:
      // 
      // acs:fc:{regionId}:{userId}:services/{Service name}/functions/{Function name}
      // 
      // This parameter is required.
      shared_ptr<string> arn_ {};
      // The ID of the resource for which alerts are triggered.
      // 
      // For more information about how to obtain the ID of the resource for which alerts are triggered, see [DescribeMetricRuleTargets](https://help.aliyun.com/document_detail/121592.html).
      // 
      // This parameter is required.
      shared_ptr<string> id_ {};
      // The parameters of the alert callback. The parameters are in the JSON format.
      shared_ptr<string> jsonParams_ {};
      // The alert level. Valid values:
      // 
      // *   INFO
      // *   WARN
      // *   CRITICAL
      shared_ptr<string> level_ {};
    };

    virtual bool empty() const override { return this->regionId_ == nullptr
        && this->ruleId_ == nullptr && this->targets_ == nullptr; };
    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline PutMetricRuleTargetsRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // ruleId Field Functions 
    bool hasRuleId() const { return this->ruleId_ != nullptr;};
    void deleteRuleId() { this->ruleId_ = nullptr;};
    inline string getRuleId() const { DARABONBA_PTR_GET_DEFAULT(ruleId_, "") };
    inline PutMetricRuleTargetsRequest& setRuleId(string ruleId) { DARABONBA_PTR_SET_VALUE(ruleId_, ruleId) };


    // targets Field Functions 
    bool hasTargets() const { return this->targets_ != nullptr;};
    void deleteTargets() { this->targets_ = nullptr;};
    inline const vector<PutMetricRuleTargetsRequest::Targets> & getTargets() const { DARABONBA_PTR_GET_CONST(targets_, vector<PutMetricRuleTargetsRequest::Targets>) };
    inline vector<PutMetricRuleTargetsRequest::Targets> getTargets() { DARABONBA_PTR_GET(targets_, vector<PutMetricRuleTargetsRequest::Targets>) };
    inline PutMetricRuleTargetsRequest& setTargets(const vector<PutMetricRuleTargetsRequest::Targets> & targets) { DARABONBA_PTR_SET_VALUE(targets_, targets) };
    inline PutMetricRuleTargetsRequest& setTargets(vector<PutMetricRuleTargetsRequest::Targets> && targets) { DARABONBA_PTR_SET_RVALUE(targets_, targets) };


  protected:
    shared_ptr<string> regionId_ {};
    // The ID of the alert rule.
    // 
    // For information about how to obtain the ID of an alert rule, see [DescribeMetricRuleList](https://help.aliyun.com/document_detail/114941.html).
    // 
    // This parameter is required.
    shared_ptr<string> ruleId_ {};
    // None.
    // 
    // This parameter is required.
    shared_ptr<vector<PutMetricRuleTargetsRequest::Targets>> targets_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
