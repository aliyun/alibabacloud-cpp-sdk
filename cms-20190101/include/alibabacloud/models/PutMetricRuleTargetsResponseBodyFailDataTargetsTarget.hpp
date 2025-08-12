// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PUTMETRICRULETARGETSRESPONSEBODYFAILDATATARGETSTARGET_HPP_
#define ALIBABACLOUD_MODELS_PUTMETRICRULETARGETSRESPONSEBODYFAILDATATARGETSTARGET_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class PutMetricRuleTargetsResponseBodyFailDataTargetsTarget : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PutMetricRuleTargetsResponseBodyFailDataTargetsTarget& obj) { 
      DARABONBA_PTR_TO_JSON(Arn, arn_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Level, level_);
    };
    friend void from_json(const Darabonba::Json& j, PutMetricRuleTargetsResponseBodyFailDataTargetsTarget& obj) { 
      DARABONBA_PTR_FROM_JSON(Arn, arn_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Level, level_);
    };
    PutMetricRuleTargetsResponseBodyFailDataTargetsTarget() = default ;
    PutMetricRuleTargetsResponseBodyFailDataTargetsTarget(const PutMetricRuleTargetsResponseBodyFailDataTargetsTarget &) = default ;
    PutMetricRuleTargetsResponseBodyFailDataTargetsTarget(PutMetricRuleTargetsResponseBodyFailDataTargetsTarget &&) = default ;
    PutMetricRuleTargetsResponseBodyFailDataTargetsTarget(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PutMetricRuleTargetsResponseBodyFailDataTargetsTarget() = default ;
    PutMetricRuleTargetsResponseBodyFailDataTargetsTarget& operator=(const PutMetricRuleTargetsResponseBodyFailDataTargetsTarget &) = default ;
    PutMetricRuleTargetsResponseBodyFailDataTargetsTarget& operator=(PutMetricRuleTargetsResponseBodyFailDataTargetsTarget &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->arn_ != nullptr
        && this->id_ != nullptr && this->level_ != nullptr; };
    // arn Field Functions 
    bool hasArn() const { return this->arn_ != nullptr;};
    void deleteArn() { this->arn_ = nullptr;};
    inline string arn() const { DARABONBA_PTR_GET_DEFAULT(arn_, "") };
    inline PutMetricRuleTargetsResponseBodyFailDataTargetsTarget& setArn(string arn) { DARABONBA_PTR_SET_VALUE(arn_, arn) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline PutMetricRuleTargetsResponseBodyFailDataTargetsTarget& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // level Field Functions 
    bool hasLevel() const { return this->level_ != nullptr;};
    void deleteLevel() { this->level_ = nullptr;};
    inline string level() const { DARABONBA_PTR_GET_DEFAULT(level_, "") };
    inline PutMetricRuleTargetsResponseBodyFailDataTargetsTarget& setLevel(string level) { DARABONBA_PTR_SET_VALUE(level_, level) };


  protected:
    // The ARN of the resource. Format: `acs:{Service name abbreviation}:{regionId}:{userId}:/{Resource type}/{Resource name}/message`. SMQ, Auto Scaling, Simple Log Service, and Function Compute are supported. Example: `acs:mns:cn-hangzhou:120886317861****:/queues/test123/message`. The following part describes the ARN of SMQ and the parameters in the ARN:
    // 
    // *   {Service name abbreviation}: mns.
    // 
    // *   {userId}: the ID of the Alibaba Cloud account.
    // 
    // *   {regionId}: the region ID of the SMQ queue or topic.
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
    std::shared_ptr<string> arn_ = nullptr;
    // The ID of the resource for which alerts are triggered.
    std::shared_ptr<string> id_ = nullptr;
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
