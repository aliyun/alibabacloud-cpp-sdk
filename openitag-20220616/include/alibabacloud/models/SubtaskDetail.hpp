// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBTASKDETAIL_HPP_
#define ALIBABACLOUD_MODELS_SUBTASKDETAIL_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/Workforce.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OpenITag20220616
{
namespace Models
{
  class SubtaskDetail : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubtaskDetail& obj) { 
      DARABONBA_PTR_TO_JSON(CanDiscard, canDiscard_);
      DARABONBA_PTR_TO_JSON(CanReassign, canReassign_);
      DARABONBA_PTR_TO_JSON(CanRelease, canRelease_);
      DARABONBA_PTR_TO_JSON(CurrentWorkNode, currentWorkNode_);
      DARABONBA_PTR_TO_JSON(ExtConfigs, extConfigs_);
      DARABONBA_PTR_TO_JSON(Items, items_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(SubtaskId, subtaskId_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
      DARABONBA_PTR_TO_JSON(Weight, weight_);
      DARABONBA_PTR_TO_JSON(WorkNodeState, workNodeState_);
      DARABONBA_PTR_TO_JSON(Workforce, workforce_);
    };
    friend void from_json(const Darabonba::Json& j, SubtaskDetail& obj) { 
      DARABONBA_PTR_FROM_JSON(CanDiscard, canDiscard_);
      DARABONBA_PTR_FROM_JSON(CanReassign, canReassign_);
      DARABONBA_PTR_FROM_JSON(CanRelease, canRelease_);
      DARABONBA_PTR_FROM_JSON(CurrentWorkNode, currentWorkNode_);
      DARABONBA_PTR_FROM_JSON(ExtConfigs, extConfigs_);
      DARABONBA_PTR_FROM_JSON(Items, items_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(SubtaskId, subtaskId_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
      DARABONBA_PTR_FROM_JSON(Weight, weight_);
      DARABONBA_PTR_FROM_JSON(WorkNodeState, workNodeState_);
      DARABONBA_PTR_FROM_JSON(Workforce, workforce_);
    };
    SubtaskDetail() = default ;
    SubtaskDetail(const SubtaskDetail &) = default ;
    SubtaskDetail(SubtaskDetail &&) = default ;
    SubtaskDetail(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubtaskDetail() = default ;
    SubtaskDetail& operator=(const SubtaskDetail &) = default ;
    SubtaskDetail& operator=(SubtaskDetail &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Items : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Items& obj) { 
        DARABONBA_PTR_TO_JSON(AbandonFlag, abandonFlag_);
        DARABONBA_PTR_TO_JSON(AbandonRemark, abandonRemark_);
        DARABONBA_PTR_TO_JSON(DataId, dataId_);
        DARABONBA_PTR_TO_JSON(FeedbackFlag, feedbackFlag_);
        DARABONBA_PTR_TO_JSON(FeedbackRemark, feedbackRemark_);
        DARABONBA_PTR_TO_JSON(FixedFlag, fixedFlag_);
        DARABONBA_PTR_TO_JSON(Mine, mine_);
        DARABONBA_PTR_TO_JSON(RejectFlag, rejectFlag_);
        DARABONBA_PTR_TO_JSON(State, state_);
        DARABONBA_PTR_TO_JSON(Weight, weight_);
      };
      friend void from_json(const Darabonba::Json& j, Items& obj) { 
        DARABONBA_PTR_FROM_JSON(AbandonFlag, abandonFlag_);
        DARABONBA_PTR_FROM_JSON(AbandonRemark, abandonRemark_);
        DARABONBA_PTR_FROM_JSON(DataId, dataId_);
        DARABONBA_PTR_FROM_JSON(FeedbackFlag, feedbackFlag_);
        DARABONBA_PTR_FROM_JSON(FeedbackRemark, feedbackRemark_);
        DARABONBA_PTR_FROM_JSON(FixedFlag, fixedFlag_);
        DARABONBA_PTR_FROM_JSON(Mine, mine_);
        DARABONBA_PTR_FROM_JSON(RejectFlag, rejectFlag_);
        DARABONBA_PTR_FROM_JSON(State, state_);
        DARABONBA_PTR_FROM_JSON(Weight, weight_);
      };
      Items() = default ;
      Items(const Items &) = default ;
      Items(Items &&) = default ;
      Items(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Items() = default ;
      Items& operator=(const Items &) = default ;
      Items& operator=(Items &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->abandonFlag_ == nullptr
        && this->abandonRemark_ == nullptr && this->dataId_ == nullptr && this->feedbackFlag_ == nullptr && this->feedbackRemark_ == nullptr && this->fixedFlag_ == nullptr
        && this->mine_ == nullptr && this->rejectFlag_ == nullptr && this->state_ == nullptr && this->weight_ == nullptr; };
      // abandonFlag Field Functions 
      bool hasAbandonFlag() const { return this->abandonFlag_ != nullptr;};
      void deleteAbandonFlag() { this->abandonFlag_ = nullptr;};
      inline bool getAbandonFlag() const { DARABONBA_PTR_GET_DEFAULT(abandonFlag_, false) };
      inline Items& setAbandonFlag(bool abandonFlag) { DARABONBA_PTR_SET_VALUE(abandonFlag_, abandonFlag) };


      // abandonRemark Field Functions 
      bool hasAbandonRemark() const { return this->abandonRemark_ != nullptr;};
      void deleteAbandonRemark() { this->abandonRemark_ = nullptr;};
      inline string getAbandonRemark() const { DARABONBA_PTR_GET_DEFAULT(abandonRemark_, "") };
      inline Items& setAbandonRemark(string abandonRemark) { DARABONBA_PTR_SET_VALUE(abandonRemark_, abandonRemark) };


      // dataId Field Functions 
      bool hasDataId() const { return this->dataId_ != nullptr;};
      void deleteDataId() { this->dataId_ = nullptr;};
      inline string getDataId() const { DARABONBA_PTR_GET_DEFAULT(dataId_, "") };
      inline Items& setDataId(string dataId) { DARABONBA_PTR_SET_VALUE(dataId_, dataId) };


      // feedbackFlag Field Functions 
      bool hasFeedbackFlag() const { return this->feedbackFlag_ != nullptr;};
      void deleteFeedbackFlag() { this->feedbackFlag_ = nullptr;};
      inline bool getFeedbackFlag() const { DARABONBA_PTR_GET_DEFAULT(feedbackFlag_, false) };
      inline Items& setFeedbackFlag(bool feedbackFlag) { DARABONBA_PTR_SET_VALUE(feedbackFlag_, feedbackFlag) };


      // feedbackRemark Field Functions 
      bool hasFeedbackRemark() const { return this->feedbackRemark_ != nullptr;};
      void deleteFeedbackRemark() { this->feedbackRemark_ = nullptr;};
      inline string getFeedbackRemark() const { DARABONBA_PTR_GET_DEFAULT(feedbackRemark_, "") };
      inline Items& setFeedbackRemark(string feedbackRemark) { DARABONBA_PTR_SET_VALUE(feedbackRemark_, feedbackRemark) };


      // fixedFlag Field Functions 
      bool hasFixedFlag() const { return this->fixedFlag_ != nullptr;};
      void deleteFixedFlag() { this->fixedFlag_ = nullptr;};
      inline bool getFixedFlag() const { DARABONBA_PTR_GET_DEFAULT(fixedFlag_, false) };
      inline Items& setFixedFlag(bool fixedFlag) { DARABONBA_PTR_SET_VALUE(fixedFlag_, fixedFlag) };


      // mine Field Functions 
      bool hasMine() const { return this->mine_ != nullptr;};
      void deleteMine() { this->mine_ = nullptr;};
      inline int64_t getMine() const { DARABONBA_PTR_GET_DEFAULT(mine_, 0L) };
      inline Items& setMine(int64_t mine) { DARABONBA_PTR_SET_VALUE(mine_, mine) };


      // rejectFlag Field Functions 
      bool hasRejectFlag() const { return this->rejectFlag_ != nullptr;};
      void deleteRejectFlag() { this->rejectFlag_ = nullptr;};
      inline bool getRejectFlag() const { DARABONBA_PTR_GET_DEFAULT(rejectFlag_, false) };
      inline Items& setRejectFlag(bool rejectFlag) { DARABONBA_PTR_SET_VALUE(rejectFlag_, rejectFlag) };


      // state Field Functions 
      bool hasState() const { return this->state_ != nullptr;};
      void deleteState() { this->state_ = nullptr;};
      inline string getState() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
      inline Items& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


      // weight Field Functions 
      bool hasWeight() const { return this->weight_ != nullptr;};
      void deleteWeight() { this->weight_ = nullptr;};
      inline int64_t getWeight() const { DARABONBA_PTR_GET_DEFAULT(weight_, 0L) };
      inline Items& setWeight(int64_t weight) { DARABONBA_PTR_SET_VALUE(weight_, weight) };


    protected:
      // Abandon mark
      shared_ptr<bool> abandonFlag_ {};
      // discard reason
      shared_ptr<string> abandonRemark_ {};
      // Date ID
      shared_ptr<string> dataId_ {};
      // feedback mark
      shared_ptr<bool> feedbackFlag_ {};
      // Validate feedback
      shared_ptr<string> feedbackRemark_ {};
      // Failed mark
      shared_ptr<bool> fixedFlag_ {};
      // Is assigned to me
      shared_ptr<int64_t> mine_ {};
      // skip mark
      shared_ptr<bool> rejectFlag_ {};
      // status
      shared_ptr<string> state_ {};
      // Weight
      shared_ptr<int64_t> weight_ {};
    };

    virtual bool empty() const override { return this->canDiscard_ == nullptr
        && this->canReassign_ == nullptr && this->canRelease_ == nullptr && this->currentWorkNode_ == nullptr && this->extConfigs_ == nullptr && this->items_ == nullptr
        && this->status_ == nullptr && this->subtaskId_ == nullptr && this->taskId_ == nullptr && this->weight_ == nullptr && this->workNodeState_ == nullptr
        && this->workforce_ == nullptr; };
    // canDiscard Field Functions 
    bool hasCanDiscard() const { return this->canDiscard_ != nullptr;};
    void deleteCanDiscard() { this->canDiscard_ = nullptr;};
    inline bool getCanDiscard() const { DARABONBA_PTR_GET_DEFAULT(canDiscard_, false) };
    inline SubtaskDetail& setCanDiscard(bool canDiscard) { DARABONBA_PTR_SET_VALUE(canDiscard_, canDiscard) };


    // canReassign Field Functions 
    bool hasCanReassign() const { return this->canReassign_ != nullptr;};
    void deleteCanReassign() { this->canReassign_ = nullptr;};
    inline bool getCanReassign() const { DARABONBA_PTR_GET_DEFAULT(canReassign_, false) };
    inline SubtaskDetail& setCanReassign(bool canReassign) { DARABONBA_PTR_SET_VALUE(canReassign_, canReassign) };


    // canRelease Field Functions 
    bool hasCanRelease() const { return this->canRelease_ != nullptr;};
    void deleteCanRelease() { this->canRelease_ = nullptr;};
    inline bool getCanRelease() const { DARABONBA_PTR_GET_DEFAULT(canRelease_, false) };
    inline SubtaskDetail& setCanRelease(bool canRelease) { DARABONBA_PTR_SET_VALUE(canRelease_, canRelease) };


    // currentWorkNode Field Functions 
    bool hasCurrentWorkNode() const { return this->currentWorkNode_ != nullptr;};
    void deleteCurrentWorkNode() { this->currentWorkNode_ = nullptr;};
    inline string getCurrentWorkNode() const { DARABONBA_PTR_GET_DEFAULT(currentWorkNode_, "") };
    inline SubtaskDetail& setCurrentWorkNode(string currentWorkNode) { DARABONBA_PTR_SET_VALUE(currentWorkNode_, currentWorkNode) };


    // extConfigs Field Functions 
    bool hasExtConfigs() const { return this->extConfigs_ != nullptr;};
    void deleteExtConfigs() { this->extConfigs_ = nullptr;};
    inline string getExtConfigs() const { DARABONBA_PTR_GET_DEFAULT(extConfigs_, "") };
    inline SubtaskDetail& setExtConfigs(string extConfigs) { DARABONBA_PTR_SET_VALUE(extConfigs_, extConfigs) };


    // items Field Functions 
    bool hasItems() const { return this->items_ != nullptr;};
    void deleteItems() { this->items_ = nullptr;};
    inline const vector<SubtaskDetail::Items> & getItems() const { DARABONBA_PTR_GET_CONST(items_, vector<SubtaskDetail::Items>) };
    inline vector<SubtaskDetail::Items> getItems() { DARABONBA_PTR_GET(items_, vector<SubtaskDetail::Items>) };
    inline SubtaskDetail& setItems(const vector<SubtaskDetail::Items> & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
    inline SubtaskDetail& setItems(vector<SubtaskDetail::Items> && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline SubtaskDetail& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // subtaskId Field Functions 
    bool hasSubtaskId() const { return this->subtaskId_ != nullptr;};
    void deleteSubtaskId() { this->subtaskId_ = nullptr;};
    inline string getSubtaskId() const { DARABONBA_PTR_GET_DEFAULT(subtaskId_, "") };
    inline SubtaskDetail& setSubtaskId(string subtaskId) { DARABONBA_PTR_SET_VALUE(subtaskId_, subtaskId) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline SubtaskDetail& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    // weight Field Functions 
    bool hasWeight() const { return this->weight_ != nullptr;};
    void deleteWeight() { this->weight_ = nullptr;};
    inline int64_t getWeight() const { DARABONBA_PTR_GET_DEFAULT(weight_, 0L) };
    inline SubtaskDetail& setWeight(int64_t weight) { DARABONBA_PTR_SET_VALUE(weight_, weight) };


    // workNodeState Field Functions 
    bool hasWorkNodeState() const { return this->workNodeState_ != nullptr;};
    void deleteWorkNodeState() { this->workNodeState_ = nullptr;};
    inline string getWorkNodeState() const { DARABONBA_PTR_GET_DEFAULT(workNodeState_, "") };
    inline SubtaskDetail& setWorkNodeState(string workNodeState) { DARABONBA_PTR_SET_VALUE(workNodeState_, workNodeState) };


    // workforce Field Functions 
    bool hasWorkforce() const { return this->workforce_ != nullptr;};
    void deleteWorkforce() { this->workforce_ = nullptr;};
    inline const vector<Workforce> & getWorkforce() const { DARABONBA_PTR_GET_CONST(workforce_, vector<Workforce>) };
    inline vector<Workforce> getWorkforce() { DARABONBA_PTR_GET(workforce_, vector<Workforce>) };
    inline SubtaskDetail& setWorkforce(const vector<Workforce> & workforce) { DARABONBA_PTR_SET_VALUE(workforce_, workforce) };
    inline SubtaskDetail& setWorkforce(vector<Workforce> && workforce) { DARABONBA_PTR_SET_RVALUE(workforce_, workforce) };


  protected:
    // is discardable
    shared_ptr<bool> canDiscard_ {};
    // Can assign
    shared_ptr<bool> canReassign_ {};
    // is releasable
    shared_ptr<bool> canRelease_ {};
    // current File Type
    shared_ptr<string> currentWorkNode_ {};
    // extra parameters
    shared_ptr<string> extConfigs_ {};
    // List of items in the sub-job
    shared_ptr<vector<SubtaskDetail::Items>> items_ {};
    // status
    shared_ptr<string> status_ {};
    // Subtask ID
    shared_ptr<string> subtaskId_ {};
    // parent job ID of the sub-job
    shared_ptr<string> taskId_ {};
    // Job weight
    shared_ptr<int64_t> weight_ {};
    // Current edge zone status
    shared_ptr<string> workNodeState_ {};
    // list of annotators assigned to the sub-job
    shared_ptr<vector<Workforce>> workforce_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OpenITag20220616
#endif
