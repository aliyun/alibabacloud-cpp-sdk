// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PUTMETRICRULETARGETSREQUESTTARGETS_HPP_
#define ALIBABACLOUD_MODELS_PUTMETRICRULETARGETSREQUESTTARGETS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class PutMetricRuleTargetsRequestTargets : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PutMetricRuleTargetsRequestTargets& obj) { 
      DARABONBA_PTR_TO_JSON(Arn, arn_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(JsonParams, jsonParams_);
      DARABONBA_PTR_TO_JSON(Level, level_);
    };
    friend void from_json(const Darabonba::Json& j, PutMetricRuleTargetsRequestTargets& obj) { 
      DARABONBA_PTR_FROM_JSON(Arn, arn_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(JsonParams, jsonParams_);
      DARABONBA_PTR_FROM_JSON(Level, level_);
    };
    PutMetricRuleTargetsRequestTargets() = default ;
    PutMetricRuleTargetsRequestTargets(const PutMetricRuleTargetsRequestTargets &) = default ;
    PutMetricRuleTargetsRequestTargets(PutMetricRuleTargetsRequestTargets &&) = default ;
    PutMetricRuleTargetsRequestTargets(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PutMetricRuleTargetsRequestTargets() = default ;
    PutMetricRuleTargetsRequestTargets& operator=(const PutMetricRuleTargetsRequestTargets &) = default ;
    PutMetricRuleTargetsRequestTargets& operator=(PutMetricRuleTargetsRequestTargets &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->arn_ != nullptr
        && this->id_ != nullptr && this->jsonParams_ != nullptr && this->level_ != nullptr; };
    // arn Field Functions 
    bool hasArn() const { return this->arn_ != nullptr;};
    void deleteArn() { this->arn_ = nullptr;};
    inline string arn() const { DARABONBA_PTR_GET_DEFAULT(arn_, "") };
    inline PutMetricRuleTargetsRequestTargets& setArn(string arn) { DARABONBA_PTR_SET_VALUE(arn_, arn) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline PutMetricRuleTargetsRequestTargets& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // jsonParams Field Functions 
    bool hasJsonParams() const { return this->jsonParams_ != nullptr;};
    void deleteJsonParams() { this->jsonParams_ = nullptr;};
    inline string jsonParams() const { DARABONBA_PTR_GET_DEFAULT(jsonParams_, "") };
    inline PutMetricRuleTargetsRequestTargets& setJsonParams(string jsonParams) { DARABONBA_PTR_SET_VALUE(jsonParams_, jsonParams) };


    // level Field Functions 
    bool hasLevel() const { return this->level_ != nullptr;};
    void deleteLevel() { this->level_ = nullptr;};
    inline string level() const { DARABONBA_PTR_GET_DEFAULT(level_, "") };
    inline PutMetricRuleTargetsRequestTargets& setLevel(string level) { DARABONBA_PTR_SET_VALUE(level_, level) };


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
    std::shared_ptr<string> arn_ = nullptr;
    // The ID of the resource for which alerts are triggered.
    // 
    // For more information about how to obtain the ID of the resource for which alerts are triggered, see [DescribeMetricRuleTargets](https://help.aliyun.com/document_detail/121592.html).
    // 
    // This parameter is required.
    std::shared_ptr<string> id_ = nullptr;
    // The parameters of the alert callback. The parameters are in the JSON format.
    std::shared_ptr<string> jsonParams_ = nullptr;
    // The alert level. Valid values:
    // 
    // *   INFO
    // *   WARN
    // *   CRITICAL
    std::shared_ptr<string> level_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
