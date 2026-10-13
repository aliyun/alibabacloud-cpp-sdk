// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITSCRIPTPREREVIEWRESULTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SUBMITSCRIPTPREREVIEWRESULTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OutboundBot20191226
{
namespace Models
{
  class SubmitScriptPreReviewResultRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitScriptPreReviewResultRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(RecordId, recordId_);
      DARABONBA_PTR_TO_JSON(RejectReason, rejectReason_);
      DARABONBA_PTR_TO_JSON(ReviewResult, reviewResult_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitScriptPreReviewResultRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(RecordId, recordId_);
      DARABONBA_PTR_FROM_JSON(RejectReason, rejectReason_);
      DARABONBA_PTR_FROM_JSON(ReviewResult, reviewResult_);
    };
    SubmitScriptPreReviewResultRequest() = default ;
    SubmitScriptPreReviewResultRequest(const SubmitScriptPreReviewResultRequest &) = default ;
    SubmitScriptPreReviewResultRequest(SubmitScriptPreReviewResultRequest &&) = default ;
    SubmitScriptPreReviewResultRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitScriptPreReviewResultRequest() = default ;
    SubmitScriptPreReviewResultRequest& operator=(const SubmitScriptPreReviewResultRequest &) = default ;
    SubmitScriptPreReviewResultRequest& operator=(SubmitScriptPreReviewResultRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceId_ == nullptr
        && this->recordId_ == nullptr && this->rejectReason_ == nullptr && this->reviewResult_ == nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline SubmitScriptPreReviewResultRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // recordId Field Functions 
    bool hasRecordId() const { return this->recordId_ != nullptr;};
    void deleteRecordId() { this->recordId_ = nullptr;};
    inline string getRecordId() const { DARABONBA_PTR_GET_DEFAULT(recordId_, "") };
    inline SubmitScriptPreReviewResultRequest& setRecordId(string recordId) { DARABONBA_PTR_SET_VALUE(recordId_, recordId) };


    // rejectReason Field Functions 
    bool hasRejectReason() const { return this->rejectReason_ != nullptr;};
    void deleteRejectReason() { this->rejectReason_ = nullptr;};
    inline string getRejectReason() const { DARABONBA_PTR_GET_DEFAULT(rejectReason_, "") };
    inline SubmitScriptPreReviewResultRequest& setRejectReason(string rejectReason) { DARABONBA_PTR_SET_VALUE(rejectReason_, rejectReason) };


    // reviewResult Field Functions 
    bool hasReviewResult() const { return this->reviewResult_ != nullptr;};
    void deleteReviewResult() { this->reviewResult_ = nullptr;};
    inline string getReviewResult() const { DARABONBA_PTR_GET_DEFAULT(reviewResult_, "") };
    inline SubmitScriptPreReviewResultRequest& setReviewResult(string reviewResult) { DARABONBA_PTR_SET_VALUE(reviewResult_, reviewResult) };


  protected:
    // The instance ID.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // The ID of the script review record.
    // 
    // This parameter is required.
    shared_ptr<string> recordId_ {};
    // The reason for pre-review rejection. This parameter is required when ReviewResult is set to REJECT.
    shared_ptr<string> rejectReason_ {};
    // The pre-review result. Valid values: PASS (approved) and REJECT (rejected). The value is not case-sensitive.
    // 
    // This parameter is required.
    shared_ptr<string> reviewResult_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OutboundBot20191226
#endif
