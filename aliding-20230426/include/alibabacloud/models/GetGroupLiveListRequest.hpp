// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETGROUPLIVELISTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETGROUPLIVELISTREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetGroupLiveListRequestTenantContext.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class GetGroupLiveListRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetGroupLiveListRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(OpenConversationId, openConversationId_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(TenantContext, tenantContext_);
    };
    friend void from_json(const Darabonba::Json& j, GetGroupLiveListRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(OpenConversationId, openConversationId_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(TenantContext, tenantContext_);
    };
    GetGroupLiveListRequest() = default ;
    GetGroupLiveListRequest(const GetGroupLiveListRequest &) = default ;
    GetGroupLiveListRequest(GetGroupLiveListRequest &&) = default ;
    GetGroupLiveListRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetGroupLiveListRequest() = default ;
    GetGroupLiveListRequest& operator=(const GetGroupLiveListRequest &) = default ;
    GetGroupLiveListRequest& operator=(GetGroupLiveListRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->endTime_ != nullptr
        && this->openConversationId_ != nullptr && this->startTime_ != nullptr && this->tenantContext_ != nullptr; };
    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int64_t endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
    inline GetGroupLiveListRequest& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // openConversationId Field Functions 
    bool hasOpenConversationId() const { return this->openConversationId_ != nullptr;};
    void deleteOpenConversationId() { this->openConversationId_ = nullptr;};
    inline string openConversationId() const { DARABONBA_PTR_GET_DEFAULT(openConversationId_, "") };
    inline GetGroupLiveListRequest& setOpenConversationId(string openConversationId) { DARABONBA_PTR_SET_VALUE(openConversationId_, openConversationId) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int64_t startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
    inline GetGroupLiveListRequest& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // tenantContext Field Functions 
    bool hasTenantContext() const { return this->tenantContext_ != nullptr;};
    void deleteTenantContext() { this->tenantContext_ = nullptr;};
    inline const GetGroupLiveListRequestTenantContext & tenantContext() const { DARABONBA_PTR_GET_CONST(tenantContext_, GetGroupLiveListRequestTenantContext) };
    inline GetGroupLiveListRequestTenantContext tenantContext() { DARABONBA_PTR_GET(tenantContext_, GetGroupLiveListRequestTenantContext) };
    inline GetGroupLiveListRequest& setTenantContext(const GetGroupLiveListRequestTenantContext & tenantContext) { DARABONBA_PTR_SET_VALUE(tenantContext_, tenantContext) };
    inline GetGroupLiveListRequest& setTenantContext(GetGroupLiveListRequestTenantContext && tenantContext) { DARABONBA_PTR_SET_RVALUE(tenantContext_, tenantContext) };


  protected:
    // This parameter is required.
    std::shared_ptr<int64_t> endTime_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> openConversationId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> startTime_ = nullptr;
    std::shared_ptr<GetGroupLiveListRequestTenantContext> tenantContext_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
