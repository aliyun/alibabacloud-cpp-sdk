// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RLFLOWMILESTONECOUNT_HPP_
#define ALIBABACLOUD_MODELS_RLFLOWMILESTONECOUNT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiDlc20201203
{
namespace Models
{
  class RLFlowMilestoneCount : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RLFlowMilestoneCount& obj) { 
      DARABONBA_PTR_TO_JSON(Count, count_);
      DARABONBA_PTR_TO_JSON(Milestone, milestone_);
    };
    friend void from_json(const Darabonba::Json& j, RLFlowMilestoneCount& obj) { 
      DARABONBA_PTR_FROM_JSON(Count, count_);
      DARABONBA_PTR_FROM_JSON(Milestone, milestone_);
    };
    RLFlowMilestoneCount() = default ;
    RLFlowMilestoneCount(const RLFlowMilestoneCount &) = default ;
    RLFlowMilestoneCount(RLFlowMilestoneCount &&) = default ;
    RLFlowMilestoneCount(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RLFlowMilestoneCount() = default ;
    RLFlowMilestoneCount& operator=(const RLFlowMilestoneCount &) = default ;
    RLFlowMilestoneCount& operator=(RLFlowMilestoneCount &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->count_ == nullptr
        && this->milestone_ == nullptr; };
    // count Field Functions 
    bool hasCount() const { return this->count_ != nullptr;};
    void deleteCount() { this->count_ = nullptr;};
    inline int32_t getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, 0) };
    inline RLFlowMilestoneCount& setCount(int32_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


    // milestone Field Functions 
    bool hasMilestone() const { return this->milestone_ != nullptr;};
    void deleteMilestone() { this->milestone_ = nullptr;};
    inline string getMilestone() const { DARABONBA_PTR_GET_DEFAULT(milestone_, "") };
    inline RLFlowMilestoneCount& setMilestone(string milestone) { DARABONBA_PTR_SET_VALUE(milestone_, milestone) };


  protected:
    // The number of in-transit trajectories that remain at this milestone.
    shared_ptr<int32_t> count_ {};
    // The milestone. Valid values are the same as those of Stuck[].Milestone.
    shared_ptr<string> milestone_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiDlc20201203
#endif
