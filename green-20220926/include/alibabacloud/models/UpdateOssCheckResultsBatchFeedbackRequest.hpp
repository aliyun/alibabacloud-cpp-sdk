// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEOSSCHECKRESULTSBATCHFEEDBACKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEOSSCHECKRESULTSBATCHFEEDBACKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Green20220926
{
namespace Models
{
  class UpdateOssCheckResultsBatchFeedbackRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateOssCheckResultsBatchFeedbackRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Feedback, feedback_);
      DARABONBA_PTR_TO_JSON(Items, items_);
      DARABONBA_PTR_TO_JSON(ParentTaskId, parentTaskId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateOssCheckResultsBatchFeedbackRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Feedback, feedback_);
      DARABONBA_PTR_FROM_JSON(Items, items_);
      DARABONBA_PTR_FROM_JSON(ParentTaskId, parentTaskId_);
    };
    UpdateOssCheckResultsBatchFeedbackRequest() = default ;
    UpdateOssCheckResultsBatchFeedbackRequest(const UpdateOssCheckResultsBatchFeedbackRequest &) = default ;
    UpdateOssCheckResultsBatchFeedbackRequest(UpdateOssCheckResultsBatchFeedbackRequest &&) = default ;
    UpdateOssCheckResultsBatchFeedbackRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateOssCheckResultsBatchFeedbackRequest() = default ;
    UpdateOssCheckResultsBatchFeedbackRequest& operator=(const UpdateOssCheckResultsBatchFeedbackRequest &) = default ;
    UpdateOssCheckResultsBatchFeedbackRequest& operator=(UpdateOssCheckResultsBatchFeedbackRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->feedback_ == nullptr
        && this->items_ == nullptr && this->parentTaskId_ == nullptr; };
    // feedback Field Functions 
    bool hasFeedback() const { return this->feedback_ != nullptr;};
    void deleteFeedback() { this->feedback_ = nullptr;};
    inline string getFeedback() const { DARABONBA_PTR_GET_DEFAULT(feedback_, "") };
    inline UpdateOssCheckResultsBatchFeedbackRequest& setFeedback(string feedback) { DARABONBA_PTR_SET_VALUE(feedback_, feedback) };


    // items Field Functions 
    bool hasItems() const { return this->items_ != nullptr;};
    void deleteItems() { this->items_ = nullptr;};
    inline string getItems() const { DARABONBA_PTR_GET_DEFAULT(items_, "") };
    inline UpdateOssCheckResultsBatchFeedbackRequest& setItems(string items) { DARABONBA_PTR_SET_VALUE(items_, items) };


    // parentTaskId Field Functions 
    bool hasParentTaskId() const { return this->parentTaskId_ != nullptr;};
    void deleteParentTaskId() { this->parentTaskId_ = nullptr;};
    inline string getParentTaskId() const { DARABONBA_PTR_GET_DEFAULT(parentTaskId_, "") };
    inline UpdateOssCheckResultsBatchFeedbackRequest& setParentTaskId(string parentTaskId) { DARABONBA_PTR_SET_VALUE(parentTaskId_, parentTaskId) };


  protected:
    shared_ptr<string> feedback_ {};
    shared_ptr<string> items_ {};
    shared_ptr<string> parentTaskId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Green20220926
#endif
