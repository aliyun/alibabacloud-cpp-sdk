// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REVIEWRECTIFYFLOWSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_REVIEWRECTIFYFLOWSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class ReviewRectifyFlowShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ReviewRectifyFlowShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_TO_JSON(OpUserId, opUserId_);
      DARABONBA_PTR_TO_JSON(ReviewCommand, reviewCommandShrink_);
    };
    friend void from_json(const Darabonba::Json& j, ReviewRectifyFlowShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_FROM_JSON(OpUserId, opUserId_);
      DARABONBA_PTR_FROM_JSON(ReviewCommand, reviewCommandShrink_);
    };
    ReviewRectifyFlowShrinkRequest() = default ;
    ReviewRectifyFlowShrinkRequest(const ReviewRectifyFlowShrinkRequest &) = default ;
    ReviewRectifyFlowShrinkRequest(ReviewRectifyFlowShrinkRequest &&) = default ;
    ReviewRectifyFlowShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ReviewRectifyFlowShrinkRequest() = default ;
    ReviewRectifyFlowShrinkRequest& operator=(const ReviewRectifyFlowShrinkRequest &) = default ;
    ReviewRectifyFlowShrinkRequest& operator=(ReviewRectifyFlowShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->opTenantId_ == nullptr
        && this->opUserId_ == nullptr && this->reviewCommandShrink_ == nullptr; };
    // opTenantId Field Functions 
    bool hasOpTenantId() const { return this->opTenantId_ != nullptr;};
    void deleteOpTenantId() { this->opTenantId_ = nullptr;};
    inline int64_t getOpTenantId() const { DARABONBA_PTR_GET_DEFAULT(opTenantId_, 0L) };
    inline ReviewRectifyFlowShrinkRequest& setOpTenantId(int64_t opTenantId) { DARABONBA_PTR_SET_VALUE(opTenantId_, opTenantId) };


    // opUserId Field Functions 
    bool hasOpUserId() const { return this->opUserId_ != nullptr;};
    void deleteOpUserId() { this->opUserId_ = nullptr;};
    inline string getOpUserId() const { DARABONBA_PTR_GET_DEFAULT(opUserId_, "") };
    inline ReviewRectifyFlowShrinkRequest& setOpUserId(string opUserId) { DARABONBA_PTR_SET_VALUE(opUserId_, opUserId) };


    // reviewCommandShrink Field Functions 
    bool hasReviewCommandShrink() const { return this->reviewCommandShrink_ != nullptr;};
    void deleteReviewCommandShrink() { this->reviewCommandShrink_ = nullptr;};
    inline string getReviewCommandShrink() const { DARABONBA_PTR_GET_DEFAULT(reviewCommandShrink_, "") };
    inline ReviewRectifyFlowShrinkRequest& setReviewCommandShrink(string reviewCommandShrink) { DARABONBA_PTR_SET_VALUE(reviewCommandShrink_, reviewCommandShrink) };


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
    shared_ptr<string> reviewCommandShrink_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
