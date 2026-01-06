// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SENDBANNERSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SENDBANNERSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class SendBannerShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SendBannerShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Content, contentShrink_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(TenantContext, tenantContextShrink_);
    };
    friend void from_json(const Darabonba::Json& j, SendBannerShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Content, contentShrink_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(TenantContext, tenantContextShrink_);
    };
    SendBannerShrinkRequest() = default ;
    SendBannerShrinkRequest(const SendBannerShrinkRequest &) = default ;
    SendBannerShrinkRequest(SendBannerShrinkRequest &&) = default ;
    SendBannerShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SendBannerShrinkRequest() = default ;
    SendBannerShrinkRequest& operator=(const SendBannerShrinkRequest &) = default ;
    SendBannerShrinkRequest& operator=(SendBannerShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->contentShrink_ == nullptr
        && this->endTime_ == nullptr && this->startTime_ == nullptr && this->tenantContextShrink_ == nullptr; };
    // contentShrink Field Functions 
    bool hasContentShrink() const { return this->contentShrink_ != nullptr;};
    void deleteContentShrink() { this->contentShrink_ = nullptr;};
    inline string getContentShrink() const { DARABONBA_PTR_GET_DEFAULT(contentShrink_, "") };
    inline SendBannerShrinkRequest& setContentShrink(string contentShrink) { DARABONBA_PTR_SET_VALUE(contentShrink_, contentShrink) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int64_t getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
    inline SendBannerShrinkRequest& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int64_t getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
    inline SendBannerShrinkRequest& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // tenantContextShrink Field Functions 
    bool hasTenantContextShrink() const { return this->tenantContextShrink_ != nullptr;};
    void deleteTenantContextShrink() { this->tenantContextShrink_ = nullptr;};
    inline string getTenantContextShrink() const { DARABONBA_PTR_GET_DEFAULT(tenantContextShrink_, "") };
    inline SendBannerShrinkRequest& setTenantContextShrink(string tenantContextShrink) { DARABONBA_PTR_SET_VALUE(tenantContextShrink_, tenantContextShrink) };


  protected:
    shared_ptr<string> contentShrink_ {};
    shared_ptr<int64_t> endTime_ {};
    shared_ptr<int64_t> startTime_ {};
    shared_ptr<string> tenantContextShrink_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
