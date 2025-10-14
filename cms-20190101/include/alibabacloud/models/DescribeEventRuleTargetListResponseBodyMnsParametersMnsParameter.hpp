// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEEVENTRULETARGETLISTRESPONSEBODYMNSPARAMETERSMNSPARAMETER_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEEVENTRULETARGETLISTRESPONSEBODYMNSPARAMETERSMNSPARAMETER_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class DescribeEventRuleTargetListResponseBodyMnsParametersMnsParameter : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeEventRuleTargetListResponseBodyMnsParametersMnsParameter& obj) { 
      DARABONBA_PTR_TO_JSON(Arn, arn_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Queue, queue_);
      DARABONBA_PTR_TO_JSON(Region, region_);
      DARABONBA_PTR_TO_JSON(Topic, topic_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeEventRuleTargetListResponseBodyMnsParametersMnsParameter& obj) { 
      DARABONBA_PTR_FROM_JSON(Arn, arn_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Queue, queue_);
      DARABONBA_PTR_FROM_JSON(Region, region_);
      DARABONBA_PTR_FROM_JSON(Topic, topic_);
    };
    DescribeEventRuleTargetListResponseBodyMnsParametersMnsParameter() = default ;
    DescribeEventRuleTargetListResponseBodyMnsParametersMnsParameter(const DescribeEventRuleTargetListResponseBodyMnsParametersMnsParameter &) = default ;
    DescribeEventRuleTargetListResponseBodyMnsParametersMnsParameter(DescribeEventRuleTargetListResponseBodyMnsParametersMnsParameter &&) = default ;
    DescribeEventRuleTargetListResponseBodyMnsParametersMnsParameter(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeEventRuleTargetListResponseBodyMnsParametersMnsParameter() = default ;
    DescribeEventRuleTargetListResponseBodyMnsParametersMnsParameter& operator=(const DescribeEventRuleTargetListResponseBodyMnsParametersMnsParameter &) = default ;
    DescribeEventRuleTargetListResponseBodyMnsParametersMnsParameter& operator=(DescribeEventRuleTargetListResponseBodyMnsParametersMnsParameter &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->arn_ == nullptr
        && return this->id_ == nullptr && return this->queue_ == nullptr && return this->region_ == nullptr && return this->topic_ == nullptr; };
    // arn Field Functions 
    bool hasArn() const { return this->arn_ != nullptr;};
    void deleteArn() { this->arn_ = nullptr;};
    inline string arn() const { DARABONBA_PTR_GET_DEFAULT(arn_, "") };
    inline DescribeEventRuleTargetListResponseBodyMnsParametersMnsParameter& setArn(string arn) { DARABONBA_PTR_SET_VALUE(arn_, arn) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline DescribeEventRuleTargetListResponseBodyMnsParametersMnsParameter& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // queue Field Functions 
    bool hasQueue() const { return this->queue_ != nullptr;};
    void deleteQueue() { this->queue_ = nullptr;};
    inline string queue() const { DARABONBA_PTR_GET_DEFAULT(queue_, "") };
    inline DescribeEventRuleTargetListResponseBodyMnsParametersMnsParameter& setQueue(string queue) { DARABONBA_PTR_SET_VALUE(queue_, queue) };


    // region Field Functions 
    bool hasRegion() const { return this->region_ != nullptr;};
    void deleteRegion() { this->region_ = nullptr;};
    inline string region() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
    inline DescribeEventRuleTargetListResponseBodyMnsParametersMnsParameter& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


    // topic Field Functions 
    bool hasTopic() const { return this->topic_ != nullptr;};
    void deleteTopic() { this->topic_ = nullptr;};
    inline string topic() const { DARABONBA_PTR_GET_DEFAULT(topic_, "") };
    inline DescribeEventRuleTargetListResponseBodyMnsParametersMnsParameter& setTopic(string topic) { DARABONBA_PTR_SET_VALUE(topic_, topic) };


  protected:
    // The ARN of the MNS queue. 
    // 
    // Format: `arn:acs:${Service}:${Region}:${Account}:${ResourceType}/${ResourceId}`. Fields: 
    // 
    // - Service: the code of an Alibaba Cloud service
    // - Region: the region ID
    // - Account: the ID of an Alibaba Cloud account
    // - ResourceType: the resource type
    // - ResourceId: the resource ID
    std::shared_ptr<string> arn_ = nullptr;
    // The ID of the recipient.
    std::shared_ptr<string> id_ = nullptr;
    // The name of the SMQ queue.
    std::shared_ptr<string> queue_ = nullptr;
    // The region for SMQ.
    std::shared_ptr<string> region_ = nullptr;
    // The SMQ topic.
    std::shared_ptr<string> topic_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
