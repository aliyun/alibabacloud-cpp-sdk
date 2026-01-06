// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETLIVEREPLAYURLSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETLIVEREPLAYURLSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class GetLiveReplayUrlShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetLiveReplayUrlShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(LiveId, liveId_);
      DARABONBA_PTR_TO_JSON(TenantContext, tenantContextShrink_);
    };
    friend void from_json(const Darabonba::Json& j, GetLiveReplayUrlShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(LiveId, liveId_);
      DARABONBA_PTR_FROM_JSON(TenantContext, tenantContextShrink_);
    };
    GetLiveReplayUrlShrinkRequest() = default ;
    GetLiveReplayUrlShrinkRequest(const GetLiveReplayUrlShrinkRequest &) = default ;
    GetLiveReplayUrlShrinkRequest(GetLiveReplayUrlShrinkRequest &&) = default ;
    GetLiveReplayUrlShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetLiveReplayUrlShrinkRequest() = default ;
    GetLiveReplayUrlShrinkRequest& operator=(const GetLiveReplayUrlShrinkRequest &) = default ;
    GetLiveReplayUrlShrinkRequest& operator=(GetLiveReplayUrlShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->liveId_ == nullptr
        && this->tenantContextShrink_ == nullptr; };
    // liveId Field Functions 
    bool hasLiveId() const { return this->liveId_ != nullptr;};
    void deleteLiveId() { this->liveId_ = nullptr;};
    inline string getLiveId() const { DARABONBA_PTR_GET_DEFAULT(liveId_, "") };
    inline GetLiveReplayUrlShrinkRequest& setLiveId(string liveId) { DARABONBA_PTR_SET_VALUE(liveId_, liveId) };


    // tenantContextShrink Field Functions 
    bool hasTenantContextShrink() const { return this->tenantContextShrink_ != nullptr;};
    void deleteTenantContextShrink() { this->tenantContextShrink_ = nullptr;};
    inline string getTenantContextShrink() const { DARABONBA_PTR_GET_DEFAULT(tenantContextShrink_, "") };
    inline GetLiveReplayUrlShrinkRequest& setTenantContextShrink(string tenantContextShrink) { DARABONBA_PTR_SET_VALUE(tenantContextShrink_, tenantContextShrink) };


  protected:
    // This parameter is required.
    shared_ptr<string> liveId_ {};
    shared_ptr<string> tenantContextShrink_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
