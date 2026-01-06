// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESEARCHKEYWORDSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATESEARCHKEYWORDSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class CreateSearchKeywordShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateSearchKeywordShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Content, content_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(ResId, resId_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(TenantContext, tenantContextShrink_);
      DARABONBA_PTR_TO_JSON(UserIdList, userIdListShrink_);
    };
    friend void from_json(const Darabonba::Json& j, CreateSearchKeywordShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Content, content_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(ResId, resId_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(TenantContext, tenantContextShrink_);
      DARABONBA_PTR_FROM_JSON(UserIdList, userIdListShrink_);
    };
    CreateSearchKeywordShrinkRequest() = default ;
    CreateSearchKeywordShrinkRequest(const CreateSearchKeywordShrinkRequest &) = default ;
    CreateSearchKeywordShrinkRequest(CreateSearchKeywordShrinkRequest &&) = default ;
    CreateSearchKeywordShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateSearchKeywordShrinkRequest() = default ;
    CreateSearchKeywordShrinkRequest& operator=(const CreateSearchKeywordShrinkRequest &) = default ;
    CreateSearchKeywordShrinkRequest& operator=(CreateSearchKeywordShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->content_ == nullptr
        && this->endTime_ == nullptr && this->resId_ == nullptr && this->startTime_ == nullptr && this->tenantContextShrink_ == nullptr && this->userIdListShrink_ == nullptr; };
    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline string getContent() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
    inline CreateSearchKeywordShrinkRequest& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int64_t getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
    inline CreateSearchKeywordShrinkRequest& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // resId Field Functions 
    bool hasResId() const { return this->resId_ != nullptr;};
    void deleteResId() { this->resId_ = nullptr;};
    inline string getResId() const { DARABONBA_PTR_GET_DEFAULT(resId_, "") };
    inline CreateSearchKeywordShrinkRequest& setResId(string resId) { DARABONBA_PTR_SET_VALUE(resId_, resId) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int64_t getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
    inline CreateSearchKeywordShrinkRequest& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // tenantContextShrink Field Functions 
    bool hasTenantContextShrink() const { return this->tenantContextShrink_ != nullptr;};
    void deleteTenantContextShrink() { this->tenantContextShrink_ = nullptr;};
    inline string getTenantContextShrink() const { DARABONBA_PTR_GET_DEFAULT(tenantContextShrink_, "") };
    inline CreateSearchKeywordShrinkRequest& setTenantContextShrink(string tenantContextShrink) { DARABONBA_PTR_SET_VALUE(tenantContextShrink_, tenantContextShrink) };


    // userIdListShrink Field Functions 
    bool hasUserIdListShrink() const { return this->userIdListShrink_ != nullptr;};
    void deleteUserIdListShrink() { this->userIdListShrink_ = nullptr;};
    inline string getUserIdListShrink() const { DARABONBA_PTR_GET_DEFAULT(userIdListShrink_, "") };
    inline CreateSearchKeywordShrinkRequest& setUserIdListShrink(string userIdListShrink) { DARABONBA_PTR_SET_VALUE(userIdListShrink_, userIdListShrink) };


  protected:
    shared_ptr<string> content_ {};
    shared_ptr<int64_t> endTime_ {};
    shared_ptr<string> resId_ {};
    shared_ptr<int64_t> startTime_ {};
    shared_ptr<string> tenantContextShrink_ {};
    shared_ptr<string> userIdListShrink_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
