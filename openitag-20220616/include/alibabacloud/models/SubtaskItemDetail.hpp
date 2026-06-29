// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBTASKITEMDETAIL_HPP_
#define ALIBABACLOUD_MODELS_SUBTASKITEMDETAIL_HPP_
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
  class SubtaskItemDetail : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubtaskItemDetail& obj) { 
      DARABONBA_PTR_TO_JSON(Annotations, annotations_);
      DARABONBA_ANY_TO_JSON(DataSource, dataSource_);
      DARABONBA_PTR_TO_JSON(ItemId, itemId_);
    };
    friend void from_json(const Darabonba::Json& j, SubtaskItemDetail& obj) { 
      DARABONBA_PTR_FROM_JSON(Annotations, annotations_);
      DARABONBA_ANY_FROM_JSON(DataSource, dataSource_);
      DARABONBA_PTR_FROM_JSON(ItemId, itemId_);
    };
    SubtaskItemDetail() = default ;
    SubtaskItemDetail(const SubtaskItemDetail &) = default ;
    SubtaskItemDetail(SubtaskItemDetail &&) = default ;
    SubtaskItemDetail(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubtaskItemDetail() = default ;
    SubtaskItemDetail& operator=(const SubtaskItemDetail &) = default ;
    SubtaskItemDetail& operator=(SubtaskItemDetail &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Annotations : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Annotations& obj) { 
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
      friend void from_json(const Darabonba::Json& j, Annotations& obj) { 
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
      Annotations() = default ;
      Annotations(const Annotations &) = default ;
      Annotations(Annotations &&) = default ;
      Annotations(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Annotations() = default ;
      Annotations& operator=(const Annotations &) = default ;
      Annotations& operator=(Annotations &&) = default ;
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
      inline Annotations& setAbandonFlag(bool abandonFlag) { DARABONBA_PTR_SET_VALUE(abandonFlag_, abandonFlag) };


      // abandonRemark Field Functions 
      bool hasAbandonRemark() const { return this->abandonRemark_ != nullptr;};
      void deleteAbandonRemark() { this->abandonRemark_ = nullptr;};
      inline string getAbandonRemark() const { DARABONBA_PTR_GET_DEFAULT(abandonRemark_, "") };
      inline Annotations& setAbandonRemark(string abandonRemark) { DARABONBA_PTR_SET_VALUE(abandonRemark_, abandonRemark) };


      // dataId Field Functions 
      bool hasDataId() const { return this->dataId_ != nullptr;};
      void deleteDataId() { this->dataId_ = nullptr;};
      inline string getDataId() const { DARABONBA_PTR_GET_DEFAULT(dataId_, "") };
      inline Annotations& setDataId(string dataId) { DARABONBA_PTR_SET_VALUE(dataId_, dataId) };


      // feedbackFlag Field Functions 
      bool hasFeedbackFlag() const { return this->feedbackFlag_ != nullptr;};
      void deleteFeedbackFlag() { this->feedbackFlag_ = nullptr;};
      inline bool getFeedbackFlag() const { DARABONBA_PTR_GET_DEFAULT(feedbackFlag_, false) };
      inline Annotations& setFeedbackFlag(bool feedbackFlag) { DARABONBA_PTR_SET_VALUE(feedbackFlag_, feedbackFlag) };


      // feedbackRemark Field Functions 
      bool hasFeedbackRemark() const { return this->feedbackRemark_ != nullptr;};
      void deleteFeedbackRemark() { this->feedbackRemark_ = nullptr;};
      inline string getFeedbackRemark() const { DARABONBA_PTR_GET_DEFAULT(feedbackRemark_, "") };
      inline Annotations& setFeedbackRemark(string feedbackRemark) { DARABONBA_PTR_SET_VALUE(feedbackRemark_, feedbackRemark) };


      // fixedFlag Field Functions 
      bool hasFixedFlag() const { return this->fixedFlag_ != nullptr;};
      void deleteFixedFlag() { this->fixedFlag_ = nullptr;};
      inline bool getFixedFlag() const { DARABONBA_PTR_GET_DEFAULT(fixedFlag_, false) };
      inline Annotations& setFixedFlag(bool fixedFlag) { DARABONBA_PTR_SET_VALUE(fixedFlag_, fixedFlag) };


      // mine Field Functions 
      bool hasMine() const { return this->mine_ != nullptr;};
      void deleteMine() { this->mine_ = nullptr;};
      inline int64_t getMine() const { DARABONBA_PTR_GET_DEFAULT(mine_, 0L) };
      inline Annotations& setMine(int64_t mine) { DARABONBA_PTR_SET_VALUE(mine_, mine) };


      // rejectFlag Field Functions 
      bool hasRejectFlag() const { return this->rejectFlag_ != nullptr;};
      void deleteRejectFlag() { this->rejectFlag_ = nullptr;};
      inline bool getRejectFlag() const { DARABONBA_PTR_GET_DEFAULT(rejectFlag_, false) };
      inline Annotations& setRejectFlag(bool rejectFlag) { DARABONBA_PTR_SET_VALUE(rejectFlag_, rejectFlag) };


      // state Field Functions 
      bool hasState() const { return this->state_ != nullptr;};
      void deleteState() { this->state_ = nullptr;};
      inline string getState() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
      inline Annotations& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


      // weight Field Functions 
      bool hasWeight() const { return this->weight_ != nullptr;};
      void deleteWeight() { this->weight_ = nullptr;};
      inline int64_t getWeight() const { DARABONBA_PTR_GET_DEFAULT(weight_, 0L) };
      inline Annotations& setWeight(int64_t weight) { DARABONBA_PTR_SET_VALUE(weight_, weight) };


    protected:
      // Abandon mark
      shared_ptr<bool> abandonFlag_ {};
      // Abandonment remark
      shared_ptr<string> abandonRemark_ {};
      // Date ID
      shared_ptr<string> dataId_ {};
      // Feedback mark
      shared_ptr<bool> feedbackFlag_ {};
      // Validation feedback
      shared_ptr<string> feedbackRemark_ {};
      // Failure mark
      shared_ptr<bool> fixedFlag_ {};
      // Is assigned to me
      shared_ptr<int64_t> mine_ {};
      // Skip mark
      shared_ptr<bool> rejectFlag_ {};
      // Status
      shared_ptr<string> state_ {};
      // weight
      shared_ptr<int64_t> weight_ {};
    };

    virtual bool empty() const override { return this->annotations_ == nullptr
        && this->dataSource_ == nullptr && this->itemId_ == nullptr; };
    // annotations Field Functions 
    bool hasAnnotations() const { return this->annotations_ != nullptr;};
    void deleteAnnotations() { this->annotations_ = nullptr;};
    inline const vector<SubtaskItemDetail::Annotations> & getAnnotations() const { DARABONBA_PTR_GET_CONST(annotations_, vector<SubtaskItemDetail::Annotations>) };
    inline vector<SubtaskItemDetail::Annotations> getAnnotations() { DARABONBA_PTR_GET(annotations_, vector<SubtaskItemDetail::Annotations>) };
    inline SubtaskItemDetail& setAnnotations(const vector<SubtaskItemDetail::Annotations> & annotations) { DARABONBA_PTR_SET_VALUE(annotations_, annotations) };
    inline SubtaskItemDetail& setAnnotations(vector<SubtaskItemDetail::Annotations> && annotations) { DARABONBA_PTR_SET_RVALUE(annotations_, annotations) };


    // dataSource Field Functions 
    bool hasDataSource() const { return this->dataSource_ != nullptr;};
    void deleteDataSource() { this->dataSource_ = nullptr;};
    inline     const Darabonba::Json & getDataSource() const { DARABONBA_GET(dataSource_) };
    Darabonba::Json & getDataSource() { DARABONBA_GET(dataSource_) };
    inline SubtaskItemDetail& setDataSource(const Darabonba::Json & dataSource) { DARABONBA_SET_VALUE(dataSource_, dataSource) };
    inline SubtaskItemDetail& setDataSource(Darabonba::Json && dataSource) { DARABONBA_SET_RVALUE(dataSource_, dataSource) };


    // itemId Field Functions 
    bool hasItemId() const { return this->itemId_ != nullptr;};
    void deleteItemId() { this->itemId_ = nullptr;};
    inline int64_t getItemId() const { DARABONBA_PTR_GET_DEFAULT(itemId_, 0L) };
    inline SubtaskItemDetail& setItemId(int64_t itemId) { DARABONBA_PTR_SET_VALUE(itemId_, itemId) };


  protected:
    // List of annotation results
    shared_ptr<vector<SubtaskItemDetail::Annotations>> annotations_ {};
    // data source
    Darabonba::Json dataSource_ {};
    // Item ID
    shared_ptr<int64_t> itemId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OpenITag20220616
#endif
