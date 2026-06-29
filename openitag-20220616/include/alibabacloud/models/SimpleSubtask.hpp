// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SIMPLESUBTASK_HPP_
#define ALIBABACLOUD_MODELS_SIMPLESUBTASK_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OpenITag20220616
{
namespace Models
{
  class SimpleSubtask : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SimpleSubtask& obj) { 
      DARABONBA_PTR_TO_JSON(Items, items_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(SubtaskId, subtaskId_);
    };
    friend void from_json(const Darabonba::Json& j, SimpleSubtask& obj) { 
      DARABONBA_PTR_FROM_JSON(Items, items_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(SubtaskId, subtaskId_);
    };
    SimpleSubtask() = default ;
    SimpleSubtask(const SimpleSubtask &) = default ;
    SimpleSubtask(SimpleSubtask &&) = default ;
    SimpleSubtask(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SimpleSubtask() = default ;
    SimpleSubtask& operator=(const SimpleSubtask &) = default ;
    SimpleSubtask& operator=(SimpleSubtask &&) = default ;
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
        DARABONBA_PTR_TO_JSON(ItemId, itemId_);
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
        DARABONBA_PTR_FROM_JSON(ItemId, itemId_);
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
        && this->itemId_ == nullptr && this->mine_ == nullptr && this->rejectFlag_ == nullptr && this->state_ == nullptr && this->weight_ == nullptr; };
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


      // itemId Field Functions 
      bool hasItemId() const { return this->itemId_ != nullptr;};
      void deleteItemId() { this->itemId_ = nullptr;};
      inline int64_t getItemId() const { DARABONBA_PTR_GET_DEFAULT(itemId_, 0L) };
      inline Items& setItemId(int64_t itemId) { DARABONBA_PTR_SET_VALUE(itemId_, itemId) };


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
      // Abandon flag.
      shared_ptr<bool> abandonFlag_ {};
      // Abandonment remark.
      shared_ptr<string> abandonRemark_ {};
      // Date ID.
      shared_ptr<string> dataId_ {};
      // Feedback flag.
      shared_ptr<bool> feedbackFlag_ {};
      // Validation feedback.
      shared_ptr<string> feedbackRemark_ {};
      // Failed mark.
      shared_ptr<bool> fixedFlag_ {};
      // Data item ID.
      shared_ptr<int64_t> itemId_ {};
      // Assigned to me:
      // - 0: Not assigned to me.
      // - 1: Assigned to me.
      shared_ptr<int64_t> mine_ {};
      // Skip flag.
      shared_ptr<bool> rejectFlag_ {};
      // Status:
      // 
      // - INIT: Initial status.
      // - TOPUBLISH: Pending publish.
      // - CREATED: Created.
      // - HANDLING: In progress.
      // - VOTING: Voting in progress.
      // - FINISHED: Completed.
      // - FAIL: Failed.
      // - EXPIRE: Timeout.
      // - DISCARDED: Passively abandoned.
      // - DISABLE: Actively abandoned.
      // - LOCKED: Edit Lock.
      // - OFFLINE: Unpublished.
      // - MERGING: Merging results.
      shared_ptr<string> state_ {};
      // Weight.
      shared_ptr<int64_t> weight_ {};
    };

    virtual bool empty() const override { return this->items_ == nullptr
        && this->status_ == nullptr && this->subtaskId_ == nullptr; };
    // items Field Functions 
    bool hasItems() const { return this->items_ != nullptr;};
    void deleteItems() { this->items_ = nullptr;};
    inline const vector<SimpleSubtask::Items> & getItems() const { DARABONBA_PTR_GET_CONST(items_, vector<SimpleSubtask::Items>) };
    inline vector<SimpleSubtask::Items> getItems() { DARABONBA_PTR_GET(items_, vector<SimpleSubtask::Items>) };
    inline SimpleSubtask& setItems(const vector<SimpleSubtask::Items> & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
    inline SimpleSubtask& setItems(vector<SimpleSubtask::Items> && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline SimpleSubtask& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // subtaskId Field Functions 
    bool hasSubtaskId() const { return this->subtaskId_ != nullptr;};
    void deleteSubtaskId() { this->subtaskId_ = nullptr;};
    inline int64_t getSubtaskId() const { DARABONBA_PTR_GET_DEFAULT(subtaskId_, 0L) };
    inline SimpleSubtask& setSubtaskId(int64_t subtaskId) { DARABONBA_PTR_SET_VALUE(subtaskId_, subtaskId) };


  protected:
    // List of items for subtasks.
    shared_ptr<vector<SimpleSubtask::Items>> items_ {};
    // Status.
    shared_ptr<string> status_ {};
    // Subtask ID.
    shared_ptr<int64_t> subtaskId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OpenITag20220616
#endif
