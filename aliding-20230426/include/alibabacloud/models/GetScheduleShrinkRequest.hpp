// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSCHEDULESHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETSCHEDULESHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class GetScheduleShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetScheduleShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(TenantContext, tenantContextShrink_);
      DARABONBA_PTR_TO_JSON(UserIds, userIdsShrink_);
    };
    friend void from_json(const Darabonba::Json& j, GetScheduleShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(TenantContext, tenantContextShrink_);
      DARABONBA_PTR_FROM_JSON(UserIds, userIdsShrink_);
    };
    GetScheduleShrinkRequest() = default ;
    GetScheduleShrinkRequest(const GetScheduleShrinkRequest &) = default ;
    GetScheduleShrinkRequest(GetScheduleShrinkRequest &&) = default ;
    GetScheduleShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetScheduleShrinkRequest() = default ;
    GetScheduleShrinkRequest& operator=(const GetScheduleShrinkRequest &) = default ;
    GetScheduleShrinkRequest& operator=(GetScheduleShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->endTime_ != nullptr
        && this->startTime_ != nullptr && this->tenantContextShrink_ != nullptr && this->userIdsShrink_ != nullptr; };
    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline GetScheduleShrinkRequest& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline GetScheduleShrinkRequest& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // tenantContextShrink Field Functions 
    bool hasTenantContextShrink() const { return this->tenantContextShrink_ != nullptr;};
    void deleteTenantContextShrink() { this->tenantContextShrink_ = nullptr;};
    inline string tenantContextShrink() const { DARABONBA_PTR_GET_DEFAULT(tenantContextShrink_, "") };
    inline GetScheduleShrinkRequest& setTenantContextShrink(string tenantContextShrink) { DARABONBA_PTR_SET_VALUE(tenantContextShrink_, tenantContextShrink) };


    // userIdsShrink Field Functions 
    bool hasUserIdsShrink() const { return this->userIdsShrink_ != nullptr;};
    void deleteUserIdsShrink() { this->userIdsShrink_ = nullptr;};
    inline string userIdsShrink() const { DARABONBA_PTR_GET_DEFAULT(userIdsShrink_, "") };
    inline GetScheduleShrinkRequest& setUserIdsShrink(string userIdsShrink) { DARABONBA_PTR_SET_VALUE(userIdsShrink_, userIdsShrink) };


  protected:
    std::shared_ptr<string> endTime_ = nullptr;
    std::shared_ptr<string> startTime_ = nullptr;
    std::shared_ptr<string> tenantContextShrink_ = nullptr;
    std::shared_ptr<string> userIdsShrink_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
