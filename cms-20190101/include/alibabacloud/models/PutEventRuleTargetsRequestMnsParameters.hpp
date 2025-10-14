// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PUTEVENTRULETARGETSREQUESTMNSPARAMETERS_HPP_
#define ALIBABACLOUD_MODELS_PUTEVENTRULETARGETSREQUESTMNSPARAMETERS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class PutEventRuleTargetsRequestMnsParameters : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PutEventRuleTargetsRequestMnsParameters& obj) { 
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Queue, queue_);
      DARABONBA_PTR_TO_JSON(Region, region_);
      DARABONBA_PTR_TO_JSON(Topic, topic_);
    };
    friend void from_json(const Darabonba::Json& j, PutEventRuleTargetsRequestMnsParameters& obj) { 
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Queue, queue_);
      DARABONBA_PTR_FROM_JSON(Region, region_);
      DARABONBA_PTR_FROM_JSON(Topic, topic_);
    };
    PutEventRuleTargetsRequestMnsParameters() = default ;
    PutEventRuleTargetsRequestMnsParameters(const PutEventRuleTargetsRequestMnsParameters &) = default ;
    PutEventRuleTargetsRequestMnsParameters(PutEventRuleTargetsRequestMnsParameters &&) = default ;
    PutEventRuleTargetsRequestMnsParameters(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PutEventRuleTargetsRequestMnsParameters() = default ;
    PutEventRuleTargetsRequestMnsParameters& operator=(const PutEventRuleTargetsRequestMnsParameters &) = default ;
    PutEventRuleTargetsRequestMnsParameters& operator=(PutEventRuleTargetsRequestMnsParameters &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->id_ == nullptr
        && return this->queue_ == nullptr && return this->region_ == nullptr && return this->topic_ == nullptr; };
    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline PutEventRuleTargetsRequestMnsParameters& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // queue Field Functions 
    bool hasQueue() const { return this->queue_ != nullptr;};
    void deleteQueue() { this->queue_ = nullptr;};
    inline string queue() const { DARABONBA_PTR_GET_DEFAULT(queue_, "") };
    inline PutEventRuleTargetsRequestMnsParameters& setQueue(string queue) { DARABONBA_PTR_SET_VALUE(queue_, queue) };


    // region Field Functions 
    bool hasRegion() const { return this->region_ != nullptr;};
    void deleteRegion() { this->region_ = nullptr;};
    inline string region() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
    inline PutEventRuleTargetsRequestMnsParameters& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


    // topic Field Functions 
    bool hasTopic() const { return this->topic_ != nullptr;};
    void deleteTopic() { this->topic_ = nullptr;};
    inline string topic() const { DARABONBA_PTR_GET_DEFAULT(topic_, "") };
    inline PutEventRuleTargetsRequestMnsParameters& setTopic(string topic) { DARABONBA_PTR_SET_VALUE(topic_, topic) };


  protected:
    // The ID of the recipient that receives alert notifications. Valid values of N: 1 to 5.
    std::shared_ptr<string> id_ = nullptr;
    // The name of the SMQ queue. Valid values of N: 1 to 5.
    std::shared_ptr<string> queue_ = nullptr;
    // The region for SMQ. Valid values of N: 1 to 5.
    std::shared_ptr<string> region_ = nullptr;
    // The SMQ topic.
    std::shared_ptr<string> topic_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
