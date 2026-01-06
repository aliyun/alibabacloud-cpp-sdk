// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEDELIVERYPLANREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEDELIVERYPLANREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class CreateDeliveryPlanRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateDeliveryPlanRequest& obj) { 
      DARABONBA_ANY_TO_JSON(Content, content_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(ResId, resId_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(TenantContext, tenantContext_);
      DARABONBA_PTR_TO_JSON(UserIdList, userIdList_);
    };
    friend void from_json(const Darabonba::Json& j, CreateDeliveryPlanRequest& obj) { 
      DARABONBA_ANY_FROM_JSON(Content, content_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(ResId, resId_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(TenantContext, tenantContext_);
      DARABONBA_PTR_FROM_JSON(UserIdList, userIdList_);
    };
    CreateDeliveryPlanRequest() = default ;
    CreateDeliveryPlanRequest(const CreateDeliveryPlanRequest &) = default ;
    CreateDeliveryPlanRequest(CreateDeliveryPlanRequest &&) = default ;
    CreateDeliveryPlanRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateDeliveryPlanRequest() = default ;
    CreateDeliveryPlanRequest& operator=(const CreateDeliveryPlanRequest &) = default ;
    CreateDeliveryPlanRequest& operator=(CreateDeliveryPlanRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class TenantContext : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const TenantContext& obj) { 
        DARABONBA_PTR_TO_JSON(tenantId, tenantId_);
      };
      friend void from_json(const Darabonba::Json& j, TenantContext& obj) { 
        DARABONBA_PTR_FROM_JSON(tenantId, tenantId_);
      };
      TenantContext() = default ;
      TenantContext(const TenantContext &) = default ;
      TenantContext(TenantContext &&) = default ;
      TenantContext(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~TenantContext() = default ;
      TenantContext& operator=(const TenantContext &) = default ;
      TenantContext& operator=(TenantContext &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->tenantId_ == nullptr; };
      // tenantId Field Functions 
      bool hasTenantId() const { return this->tenantId_ != nullptr;};
      void deleteTenantId() { this->tenantId_ = nullptr;};
      inline string getTenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
      inline TenantContext& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


    protected:
      shared_ptr<string> tenantId_ {};
    };

    virtual bool empty() const override { return this->content_ == nullptr
        && this->endTime_ == nullptr && this->resId_ == nullptr && this->startTime_ == nullptr && this->tenantContext_ == nullptr && this->userIdList_ == nullptr; };
    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline     const Darabonba::Json & getContent() const { DARABONBA_GET(content_) };
    Darabonba::Json & getContent() { DARABONBA_GET(content_) };
    inline CreateDeliveryPlanRequest& setContent(const Darabonba::Json & content) { DARABONBA_SET_VALUE(content_, content) };
    inline CreateDeliveryPlanRequest& setContent(Darabonba::Json && content) { DARABONBA_SET_RVALUE(content_, content) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int64_t getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
    inline CreateDeliveryPlanRequest& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // resId Field Functions 
    bool hasResId() const { return this->resId_ != nullptr;};
    void deleteResId() { this->resId_ = nullptr;};
    inline string getResId() const { DARABONBA_PTR_GET_DEFAULT(resId_, "") };
    inline CreateDeliveryPlanRequest& setResId(string resId) { DARABONBA_PTR_SET_VALUE(resId_, resId) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int64_t getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
    inline CreateDeliveryPlanRequest& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // tenantContext Field Functions 
    bool hasTenantContext() const { return this->tenantContext_ != nullptr;};
    void deleteTenantContext() { this->tenantContext_ = nullptr;};
    inline const CreateDeliveryPlanRequest::TenantContext & getTenantContext() const { DARABONBA_PTR_GET_CONST(tenantContext_, CreateDeliveryPlanRequest::TenantContext) };
    inline CreateDeliveryPlanRequest::TenantContext getTenantContext() { DARABONBA_PTR_GET(tenantContext_, CreateDeliveryPlanRequest::TenantContext) };
    inline CreateDeliveryPlanRequest& setTenantContext(const CreateDeliveryPlanRequest::TenantContext & tenantContext) { DARABONBA_PTR_SET_VALUE(tenantContext_, tenantContext) };
    inline CreateDeliveryPlanRequest& setTenantContext(CreateDeliveryPlanRequest::TenantContext && tenantContext) { DARABONBA_PTR_SET_RVALUE(tenantContext_, tenantContext) };


    // userIdList Field Functions 
    bool hasUserIdList() const { return this->userIdList_ != nullptr;};
    void deleteUserIdList() { this->userIdList_ = nullptr;};
    inline const vector<string> & getUserIdList() const { DARABONBA_PTR_GET_CONST(userIdList_, vector<string>) };
    inline vector<string> getUserIdList() { DARABONBA_PTR_GET(userIdList_, vector<string>) };
    inline CreateDeliveryPlanRequest& setUserIdList(const vector<string> & userIdList) { DARABONBA_PTR_SET_VALUE(userIdList_, userIdList) };
    inline CreateDeliveryPlanRequest& setUserIdList(vector<string> && userIdList) { DARABONBA_PTR_SET_RVALUE(userIdList_, userIdList) };


  protected:
    Darabonba::Json content_ {};
    shared_ptr<int64_t> endTime_ {};
    shared_ptr<string> resId_ {};
    shared_ptr<int64_t> startTime_ {};
    shared_ptr<CreateDeliveryPlanRequest::TenantContext> tenantContext_ {};
    shared_ptr<vector<string>> userIdList_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
