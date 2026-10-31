// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITRECTIFYFLOWFORREVIEWREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SUBMITRECTIFYFLOWFORREVIEWREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class SubmitRectifyFlowForReviewRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitRectifyFlowForReviewRequest& obj) { 
      DARABONBA_PTR_TO_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_TO_JSON(OpUserId, opUserId_);
      DARABONBA_PTR_TO_JSON(SubmitCommand, submitCommand_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitRectifyFlowForReviewRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_FROM_JSON(OpUserId, opUserId_);
      DARABONBA_PTR_FROM_JSON(SubmitCommand, submitCommand_);
    };
    SubmitRectifyFlowForReviewRequest() = default ;
    SubmitRectifyFlowForReviewRequest(const SubmitRectifyFlowForReviewRequest &) = default ;
    SubmitRectifyFlowForReviewRequest(SubmitRectifyFlowForReviewRequest &&) = default ;
    SubmitRectifyFlowForReviewRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitRectifyFlowForReviewRequest() = default ;
    SubmitRectifyFlowForReviewRequest& operator=(const SubmitRectifyFlowForReviewRequest &) = default ;
    SubmitRectifyFlowForReviewRequest& operator=(SubmitRectifyFlowForReviewRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class SubmitCommand : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SubmitCommand& obj) { 
        DARABONBA_PTR_TO_JSON(Comment, comment_);
        DARABONBA_PTR_TO_JSON(RectifyId, rectifyId_);
      };
      friend void from_json(const Darabonba::Json& j, SubmitCommand& obj) { 
        DARABONBA_PTR_FROM_JSON(Comment, comment_);
        DARABONBA_PTR_FROM_JSON(RectifyId, rectifyId_);
      };
      SubmitCommand() = default ;
      SubmitCommand(const SubmitCommand &) = default ;
      SubmitCommand(SubmitCommand &&) = default ;
      SubmitCommand(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SubmitCommand() = default ;
      SubmitCommand& operator=(const SubmitCommand &) = default ;
      SubmitCommand& operator=(SubmitCommand &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->comment_ == nullptr
        && this->rectifyId_ == nullptr; };
      // comment Field Functions 
      bool hasComment() const { return this->comment_ != nullptr;};
      void deleteComment() { this->comment_ = nullptr;};
      inline string getComment() const { DARABONBA_PTR_GET_DEFAULT(comment_, "") };
      inline SubmitCommand& setComment(string comment) { DARABONBA_PTR_SET_VALUE(comment_, comment) };


      // rectifyId Field Functions 
      bool hasRectifyId() const { return this->rectifyId_ != nullptr;};
      void deleteRectifyId() { this->rectifyId_ = nullptr;};
      inline int64_t getRectifyId() const { DARABONBA_PTR_GET_DEFAULT(rectifyId_, 0L) };
      inline SubmitCommand& setRectifyId(int64_t rectifyId) { DARABONBA_PTR_SET_VALUE(rectifyId_, rectifyId) };


    protected:
      // The description of the rectification result. This parameter is required and can be up to 128 characters in length.
      // 
      // This parameter is required.
      shared_ptr<string> comment_ {};
      // The ID of the rectification process. Submission is allowed only when the process is in the rectifying or re-rectifying state.
      // 
      // This parameter is required.
      shared_ptr<int64_t> rectifyId_ {};
    };

    virtual bool empty() const override { return this->opTenantId_ == nullptr
        && this->opUserId_ == nullptr && this->submitCommand_ == nullptr; };
    // opTenantId Field Functions 
    bool hasOpTenantId() const { return this->opTenantId_ != nullptr;};
    void deleteOpTenantId() { this->opTenantId_ = nullptr;};
    inline int64_t getOpTenantId() const { DARABONBA_PTR_GET_DEFAULT(opTenantId_, 0L) };
    inline SubmitRectifyFlowForReviewRequest& setOpTenantId(int64_t opTenantId) { DARABONBA_PTR_SET_VALUE(opTenantId_, opTenantId) };


    // opUserId Field Functions 
    bool hasOpUserId() const { return this->opUserId_ != nullptr;};
    void deleteOpUserId() { this->opUserId_ = nullptr;};
    inline string getOpUserId() const { DARABONBA_PTR_GET_DEFAULT(opUserId_, "") };
    inline SubmitRectifyFlowForReviewRequest& setOpUserId(string opUserId) { DARABONBA_PTR_SET_VALUE(opUserId_, opUserId) };


    // submitCommand Field Functions 
    bool hasSubmitCommand() const { return this->submitCommand_ != nullptr;};
    void deleteSubmitCommand() { this->submitCommand_ = nullptr;};
    inline const SubmitRectifyFlowForReviewRequest::SubmitCommand & getSubmitCommand() const { DARABONBA_PTR_GET_CONST(submitCommand_, SubmitRectifyFlowForReviewRequest::SubmitCommand) };
    inline SubmitRectifyFlowForReviewRequest::SubmitCommand getSubmitCommand() { DARABONBA_PTR_GET(submitCommand_, SubmitRectifyFlowForReviewRequest::SubmitCommand) };
    inline SubmitRectifyFlowForReviewRequest& setSubmitCommand(const SubmitRectifyFlowForReviewRequest::SubmitCommand & submitCommand) { DARABONBA_PTR_SET_VALUE(submitCommand_, submitCommand) };
    inline SubmitRectifyFlowForReviewRequest& setSubmitCommand(SubmitRectifyFlowForReviewRequest::SubmitCommand && submitCommand) { DARABONBA_PTR_SET_RVALUE(submitCommand_, submitCommand) };


  protected:
    // The tenant ID.
    // 
    // This parameter is required.
    shared_ptr<int64_t> opTenantId_ {};
    // The operator user ID.
    shared_ptr<string> opUserId_ {};
    // The business request parameters.
    // 
    // This parameter is required.
    shared_ptr<SubmitRectifyFlowForReviewRequest::SubmitCommand> submitCommand_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
