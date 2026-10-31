// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REVIEWRECTIFYFLOWREQUEST_HPP_
#define ALIBABACLOUD_MODELS_REVIEWRECTIFYFLOWREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class ReviewRectifyFlowRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ReviewRectifyFlowRequest& obj) { 
      DARABONBA_PTR_TO_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_TO_JSON(OpUserId, opUserId_);
      DARABONBA_PTR_TO_JSON(ReviewCommand, reviewCommand_);
    };
    friend void from_json(const Darabonba::Json& j, ReviewRectifyFlowRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_FROM_JSON(OpUserId, opUserId_);
      DARABONBA_PTR_FROM_JSON(ReviewCommand, reviewCommand_);
    };
    ReviewRectifyFlowRequest() = default ;
    ReviewRectifyFlowRequest(const ReviewRectifyFlowRequest &) = default ;
    ReviewRectifyFlowRequest(ReviewRectifyFlowRequest &&) = default ;
    ReviewRectifyFlowRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ReviewRectifyFlowRequest() = default ;
    ReviewRectifyFlowRequest& operator=(const ReviewRectifyFlowRequest &) = default ;
    ReviewRectifyFlowRequest& operator=(ReviewRectifyFlowRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ReviewCommand : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ReviewCommand& obj) { 
        DARABONBA_PTR_TO_JSON(Comment, comment_);
        DARABONBA_PTR_TO_JSON(RectifyId, rectifyId_);
        DARABONBA_PTR_TO_JSON(ReviewResult, reviewResult_);
      };
      friend void from_json(const Darabonba::Json& j, ReviewCommand& obj) { 
        DARABONBA_PTR_FROM_JSON(Comment, comment_);
        DARABONBA_PTR_FROM_JSON(RectifyId, rectifyId_);
        DARABONBA_PTR_FROM_JSON(ReviewResult, reviewResult_);
      };
      ReviewCommand() = default ;
      ReviewCommand(const ReviewCommand &) = default ;
      ReviewCommand(ReviewCommand &&) = default ;
      ReviewCommand(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ReviewCommand() = default ;
      ReviewCommand& operator=(const ReviewCommand &) = default ;
      ReviewCommand& operator=(ReviewCommand &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->comment_ == nullptr
        && this->rectifyId_ == nullptr && this->reviewResult_ == nullptr; };
      // comment Field Functions 
      bool hasComment() const { return this->comment_ != nullptr;};
      void deleteComment() { this->comment_ = nullptr;};
      inline string getComment() const { DARABONBA_PTR_GET_DEFAULT(comment_, "") };
      inline ReviewCommand& setComment(string comment) { DARABONBA_PTR_SET_VALUE(comment_, comment) };


      // rectifyId Field Functions 
      bool hasRectifyId() const { return this->rectifyId_ != nullptr;};
      void deleteRectifyId() { this->rectifyId_ = nullptr;};
      inline int64_t getRectifyId() const { DARABONBA_PTR_GET_DEFAULT(rectifyId_, 0L) };
      inline ReviewCommand& setRectifyId(int64_t rectifyId) { DARABONBA_PTR_SET_VALUE(rectifyId_, rectifyId) };


      // reviewResult Field Functions 
      bool hasReviewResult() const { return this->reviewResult_ != nullptr;};
      void deleteReviewResult() { this->reviewResult_ = nullptr;};
      inline string getReviewResult() const { DARABONBA_PTR_GET_DEFAULT(reviewResult_, "") };
      inline ReviewCommand& setReviewResult(string reviewResult) { DARABONBA_PTR_SET_VALUE(reviewResult_, reviewResult) };


    protected:
      // The acceptance description. This parameter is optional and can contain up to 128 characters.
      shared_ptr<string> comment_ {};
      // The ID of the rectification process. This operation is allowed only when the process is pending acceptance.
      // 
      // This parameter is required.
      shared_ptr<int64_t> rectifyId_ {};
      // The acceptance result. Valid values: PASSED and REJECTED.
      // 
      // This parameter is required.
      shared_ptr<string> reviewResult_ {};
    };

    virtual bool empty() const override { return this->opTenantId_ == nullptr
        && this->opUserId_ == nullptr && this->reviewCommand_ == nullptr; };
    // opTenantId Field Functions 
    bool hasOpTenantId() const { return this->opTenantId_ != nullptr;};
    void deleteOpTenantId() { this->opTenantId_ = nullptr;};
    inline int64_t getOpTenantId() const { DARABONBA_PTR_GET_DEFAULT(opTenantId_, 0L) };
    inline ReviewRectifyFlowRequest& setOpTenantId(int64_t opTenantId) { DARABONBA_PTR_SET_VALUE(opTenantId_, opTenantId) };


    // opUserId Field Functions 
    bool hasOpUserId() const { return this->opUserId_ != nullptr;};
    void deleteOpUserId() { this->opUserId_ = nullptr;};
    inline string getOpUserId() const { DARABONBA_PTR_GET_DEFAULT(opUserId_, "") };
    inline ReviewRectifyFlowRequest& setOpUserId(string opUserId) { DARABONBA_PTR_SET_VALUE(opUserId_, opUserId) };


    // reviewCommand Field Functions 
    bool hasReviewCommand() const { return this->reviewCommand_ != nullptr;};
    void deleteReviewCommand() { this->reviewCommand_ = nullptr;};
    inline const ReviewRectifyFlowRequest::ReviewCommand & getReviewCommand() const { DARABONBA_PTR_GET_CONST(reviewCommand_, ReviewRectifyFlowRequest::ReviewCommand) };
    inline ReviewRectifyFlowRequest::ReviewCommand getReviewCommand() { DARABONBA_PTR_GET(reviewCommand_, ReviewRectifyFlowRequest::ReviewCommand) };
    inline ReviewRectifyFlowRequest& setReviewCommand(const ReviewRectifyFlowRequest::ReviewCommand & reviewCommand) { DARABONBA_PTR_SET_VALUE(reviewCommand_, reviewCommand) };
    inline ReviewRectifyFlowRequest& setReviewCommand(ReviewRectifyFlowRequest::ReviewCommand && reviewCommand) { DARABONBA_PTR_SET_RVALUE(reviewCommand_, reviewCommand) };


  protected:
    // The tenant ID.
    // 
    // This parameter is required.
    shared_ptr<int64_t> opTenantId_ {};
    // The ID of the operator user.
    shared_ptr<string> opUserId_ {};
    // The business request parameters.
    // 
    // This parameter is required.
    shared_ptr<ReviewRectifyFlowRequest::ReviewCommand> reviewCommand_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
