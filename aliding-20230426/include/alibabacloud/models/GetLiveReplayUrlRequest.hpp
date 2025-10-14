// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETLIVEREPLAYURLREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETLIVEREPLAYURLREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetLiveReplayUrlRequestTenantContext.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class GetLiveReplayUrlRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetLiveReplayUrlRequest& obj) { 
      DARABONBA_PTR_TO_JSON(LiveId, liveId_);
      DARABONBA_PTR_TO_JSON(TenantContext, tenantContext_);
    };
    friend void from_json(const Darabonba::Json& j, GetLiveReplayUrlRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(LiveId, liveId_);
      DARABONBA_PTR_FROM_JSON(TenantContext, tenantContext_);
    };
    GetLiveReplayUrlRequest() = default ;
    GetLiveReplayUrlRequest(const GetLiveReplayUrlRequest &) = default ;
    GetLiveReplayUrlRequest(GetLiveReplayUrlRequest &&) = default ;
    GetLiveReplayUrlRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetLiveReplayUrlRequest() = default ;
    GetLiveReplayUrlRequest& operator=(const GetLiveReplayUrlRequest &) = default ;
    GetLiveReplayUrlRequest& operator=(GetLiveReplayUrlRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->liveId_ == nullptr
        && return this->tenantContext_ == nullptr; };
    // liveId Field Functions 
    bool hasLiveId() const { return this->liveId_ != nullptr;};
    void deleteLiveId() { this->liveId_ = nullptr;};
    inline string liveId() const { DARABONBA_PTR_GET_DEFAULT(liveId_, "") };
    inline GetLiveReplayUrlRequest& setLiveId(string liveId) { DARABONBA_PTR_SET_VALUE(liveId_, liveId) };


    // tenantContext Field Functions 
    bool hasTenantContext() const { return this->tenantContext_ != nullptr;};
    void deleteTenantContext() { this->tenantContext_ = nullptr;};
    inline const GetLiveReplayUrlRequestTenantContext & tenantContext() const { DARABONBA_PTR_GET_CONST(tenantContext_, GetLiveReplayUrlRequestTenantContext) };
    inline GetLiveReplayUrlRequestTenantContext tenantContext() { DARABONBA_PTR_GET(tenantContext_, GetLiveReplayUrlRequestTenantContext) };
    inline GetLiveReplayUrlRequest& setTenantContext(const GetLiveReplayUrlRequestTenantContext & tenantContext) { DARABONBA_PTR_SET_VALUE(tenantContext_, tenantContext) };
    inline GetLiveReplayUrlRequest& setTenantContext(GetLiveReplayUrlRequestTenantContext && tenantContext) { DARABONBA_PTR_SET_RVALUE(tenantContext_, tenantContext) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> liveId_ = nullptr;
    std::shared_ptr<GetLiveReplayUrlRequestTenantContext> tenantContext_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
