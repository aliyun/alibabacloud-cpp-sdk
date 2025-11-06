// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CANCELPUSHSCHEDULERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CANCELPUSHSCHEDULERREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MPaaS20201028
{
namespace Models
{
  class CancelPushSchedulerRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CancelPushSchedulerRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(TenantId, tenantId_);
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_PTR_TO_JSON(UniqueIds, uniqueIds_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, CancelPushSchedulerRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(TenantId, tenantId_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
      DARABONBA_PTR_FROM_JSON(UniqueIds, uniqueIds_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    CancelPushSchedulerRequest() = default ;
    CancelPushSchedulerRequest(const CancelPushSchedulerRequest &) = default ;
    CancelPushSchedulerRequest(CancelPushSchedulerRequest &&) = default ;
    CancelPushSchedulerRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CancelPushSchedulerRequest() = default ;
    CancelPushSchedulerRequest& operator=(const CancelPushSchedulerRequest &) = default ;
    CancelPushSchedulerRequest& operator=(CancelPushSchedulerRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appId_ == nullptr
        && return this->tenantId_ == nullptr && return this->type_ == nullptr && return this->uniqueIds_ == nullptr && return this->workspaceId_ == nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline CancelPushSchedulerRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline string tenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
    inline CancelPushSchedulerRequest& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline int32_t type() const { DARABONBA_PTR_GET_DEFAULT(type_, 0) };
    inline CancelPushSchedulerRequest& setType(int32_t type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // uniqueIds Field Functions 
    bool hasUniqueIds() const { return this->uniqueIds_ != nullptr;};
    void deleteUniqueIds() { this->uniqueIds_ = nullptr;};
    inline string uniqueIds() const { DARABONBA_PTR_GET_DEFAULT(uniqueIds_, "") };
    inline CancelPushSchedulerRequest& setUniqueIds(string uniqueIds) { DARABONBA_PTR_SET_VALUE(uniqueIds_, uniqueIds) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string workspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline CancelPushSchedulerRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> appId_ = nullptr;
    std::shared_ptr<string> tenantId_ = nullptr;
    std::shared_ptr<int32_t> type_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> uniqueIds_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> workspaceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MPaaS20201028
#endif
