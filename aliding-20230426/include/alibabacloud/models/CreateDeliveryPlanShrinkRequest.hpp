// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEDELIVERYPLANSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEDELIVERYPLANSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class CreateDeliveryPlanShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateDeliveryPlanShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Content, contentShrink_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(ResId, resId_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(TenantContext, tenantContextShrink_);
      DARABONBA_PTR_TO_JSON(UserIdList, userIdListShrink_);
    };
    friend void from_json(const Darabonba::Json& j, CreateDeliveryPlanShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Content, contentShrink_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(ResId, resId_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(TenantContext, tenantContextShrink_);
      DARABONBA_PTR_FROM_JSON(UserIdList, userIdListShrink_);
    };
    CreateDeliveryPlanShrinkRequest() = default ;
    CreateDeliveryPlanShrinkRequest(const CreateDeliveryPlanShrinkRequest &) = default ;
    CreateDeliveryPlanShrinkRequest(CreateDeliveryPlanShrinkRequest &&) = default ;
    CreateDeliveryPlanShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateDeliveryPlanShrinkRequest() = default ;
    CreateDeliveryPlanShrinkRequest& operator=(const CreateDeliveryPlanShrinkRequest &) = default ;
    CreateDeliveryPlanShrinkRequest& operator=(CreateDeliveryPlanShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->contentShrink_ != nullptr
        && this->endTime_ != nullptr && this->resId_ != nullptr && this->startTime_ != nullptr && this->tenantContextShrink_ != nullptr && this->userIdListShrink_ != nullptr; };
    // contentShrink Field Functions 
    bool hasContentShrink() const { return this->contentShrink_ != nullptr;};
    void deleteContentShrink() { this->contentShrink_ = nullptr;};
    inline string contentShrink() const { DARABONBA_PTR_GET_DEFAULT(contentShrink_, "") };
    inline CreateDeliveryPlanShrinkRequest& setContentShrink(string contentShrink) { DARABONBA_PTR_SET_VALUE(contentShrink_, contentShrink) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int64_t endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
    inline CreateDeliveryPlanShrinkRequest& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // resId Field Functions 
    bool hasResId() const { return this->resId_ != nullptr;};
    void deleteResId() { this->resId_ = nullptr;};
    inline string resId() const { DARABONBA_PTR_GET_DEFAULT(resId_, "") };
    inline CreateDeliveryPlanShrinkRequest& setResId(string resId) { DARABONBA_PTR_SET_VALUE(resId_, resId) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int64_t startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
    inline CreateDeliveryPlanShrinkRequest& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // tenantContextShrink Field Functions 
    bool hasTenantContextShrink() const { return this->tenantContextShrink_ != nullptr;};
    void deleteTenantContextShrink() { this->tenantContextShrink_ = nullptr;};
    inline string tenantContextShrink() const { DARABONBA_PTR_GET_DEFAULT(tenantContextShrink_, "") };
    inline CreateDeliveryPlanShrinkRequest& setTenantContextShrink(string tenantContextShrink) { DARABONBA_PTR_SET_VALUE(tenantContextShrink_, tenantContextShrink) };


    // userIdListShrink Field Functions 
    bool hasUserIdListShrink() const { return this->userIdListShrink_ != nullptr;};
    void deleteUserIdListShrink() { this->userIdListShrink_ = nullptr;};
    inline string userIdListShrink() const { DARABONBA_PTR_GET_DEFAULT(userIdListShrink_, "") };
    inline CreateDeliveryPlanShrinkRequest& setUserIdListShrink(string userIdListShrink) { DARABONBA_PTR_SET_VALUE(userIdListShrink_, userIdListShrink) };


  protected:
    std::shared_ptr<string> contentShrink_ = nullptr;
    std::shared_ptr<int64_t> endTime_ = nullptr;
    std::shared_ptr<string> resId_ = nullptr;
    std::shared_ptr<int64_t> startTime_ = nullptr;
    std::shared_ptr<string> tenantContextShrink_ = nullptr;
    std::shared_ptr<string> userIdListShrink_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
