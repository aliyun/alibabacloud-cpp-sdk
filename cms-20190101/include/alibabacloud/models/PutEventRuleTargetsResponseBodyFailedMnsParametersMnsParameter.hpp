// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PUTEVENTRULETARGETSRESPONSEBODYFAILEDMNSPARAMETERSMNSPARAMETER_HPP_
#define ALIBABACLOUD_MODELS_PUTEVENTRULETARGETSRESPONSEBODYFAILEDMNSPARAMETERSMNSPARAMETER_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class PutEventRuleTargetsResponseBodyFailedMnsParametersMnsParameter : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PutEventRuleTargetsResponseBodyFailedMnsParametersMnsParameter& obj) { 
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Queue, queue_);
      DARABONBA_PTR_TO_JSON(Region, region_);
    };
    friend void from_json(const Darabonba::Json& j, PutEventRuleTargetsResponseBodyFailedMnsParametersMnsParameter& obj) { 
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Queue, queue_);
      DARABONBA_PTR_FROM_JSON(Region, region_);
    };
    PutEventRuleTargetsResponseBodyFailedMnsParametersMnsParameter() = default ;
    PutEventRuleTargetsResponseBodyFailedMnsParametersMnsParameter(const PutEventRuleTargetsResponseBodyFailedMnsParametersMnsParameter &) = default ;
    PutEventRuleTargetsResponseBodyFailedMnsParametersMnsParameter(PutEventRuleTargetsResponseBodyFailedMnsParametersMnsParameter &&) = default ;
    PutEventRuleTargetsResponseBodyFailedMnsParametersMnsParameter(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PutEventRuleTargetsResponseBodyFailedMnsParametersMnsParameter() = default ;
    PutEventRuleTargetsResponseBodyFailedMnsParametersMnsParameter& operator=(const PutEventRuleTargetsResponseBodyFailedMnsParametersMnsParameter &) = default ;
    PutEventRuleTargetsResponseBodyFailedMnsParametersMnsParameter& operator=(PutEventRuleTargetsResponseBodyFailedMnsParametersMnsParameter &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->id_ == nullptr
        && return this->queue_ == nullptr && return this->region_ == nullptr; };
    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int32_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0) };
    inline PutEventRuleTargetsResponseBodyFailedMnsParametersMnsParameter& setId(int32_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // queue Field Functions 
    bool hasQueue() const { return this->queue_ != nullptr;};
    void deleteQueue() { this->queue_ = nullptr;};
    inline string queue() const { DARABONBA_PTR_GET_DEFAULT(queue_, "") };
    inline PutEventRuleTargetsResponseBodyFailedMnsParametersMnsParameter& setQueue(string queue) { DARABONBA_PTR_SET_VALUE(queue_, queue) };


    // region Field Functions 
    bool hasRegion() const { return this->region_ != nullptr;};
    void deleteRegion() { this->region_ = nullptr;};
    inline string region() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
    inline PutEventRuleTargetsResponseBodyFailedMnsParametersMnsParameter& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


  protected:
    // The ID of the recipient.
    std::shared_ptr<int32_t> id_ = nullptr;
    // The name of the MNS queue.
    std::shared_ptr<string> queue_ = nullptr;
    // The region ID.
    std::shared_ptr<string> region_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
