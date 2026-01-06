// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYGROUPLIVEINFOSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYGROUPLIVEINFOSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class QueryGroupLiveInfoShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryGroupLiveInfoShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AnchorUnionId, anchorUnionId_);
      DARABONBA_PTR_TO_JSON(LiveUuid, liveUuid_);
      DARABONBA_PTR_TO_JSON(TenantContext, tenantContextShrink_);
    };
    friend void from_json(const Darabonba::Json& j, QueryGroupLiveInfoShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AnchorUnionId, anchorUnionId_);
      DARABONBA_PTR_FROM_JSON(LiveUuid, liveUuid_);
      DARABONBA_PTR_FROM_JSON(TenantContext, tenantContextShrink_);
    };
    QueryGroupLiveInfoShrinkRequest() = default ;
    QueryGroupLiveInfoShrinkRequest(const QueryGroupLiveInfoShrinkRequest &) = default ;
    QueryGroupLiveInfoShrinkRequest(QueryGroupLiveInfoShrinkRequest &&) = default ;
    QueryGroupLiveInfoShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryGroupLiveInfoShrinkRequest() = default ;
    QueryGroupLiveInfoShrinkRequest& operator=(const QueryGroupLiveInfoShrinkRequest &) = default ;
    QueryGroupLiveInfoShrinkRequest& operator=(QueryGroupLiveInfoShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->anchorUnionId_ == nullptr
        && this->liveUuid_ == nullptr && this->tenantContextShrink_ == nullptr; };
    // anchorUnionId Field Functions 
    bool hasAnchorUnionId() const { return this->anchorUnionId_ != nullptr;};
    void deleteAnchorUnionId() { this->anchorUnionId_ = nullptr;};
    inline string getAnchorUnionId() const { DARABONBA_PTR_GET_DEFAULT(anchorUnionId_, "") };
    inline QueryGroupLiveInfoShrinkRequest& setAnchorUnionId(string anchorUnionId) { DARABONBA_PTR_SET_VALUE(anchorUnionId_, anchorUnionId) };


    // liveUuid Field Functions 
    bool hasLiveUuid() const { return this->liveUuid_ != nullptr;};
    void deleteLiveUuid() { this->liveUuid_ = nullptr;};
    inline string getLiveUuid() const { DARABONBA_PTR_GET_DEFAULT(liveUuid_, "") };
    inline QueryGroupLiveInfoShrinkRequest& setLiveUuid(string liveUuid) { DARABONBA_PTR_SET_VALUE(liveUuid_, liveUuid) };


    // tenantContextShrink Field Functions 
    bool hasTenantContextShrink() const { return this->tenantContextShrink_ != nullptr;};
    void deleteTenantContextShrink() { this->tenantContextShrink_ = nullptr;};
    inline string getTenantContextShrink() const { DARABONBA_PTR_GET_DEFAULT(tenantContextShrink_, "") };
    inline QueryGroupLiveInfoShrinkRequest& setTenantContextShrink(string tenantContextShrink) { DARABONBA_PTR_SET_VALUE(tenantContextShrink_, tenantContextShrink) };


  protected:
    // This parameter is required.
    shared_ptr<string> anchorUnionId_ {};
    // This parameter is required.
    shared_ptr<string> liveUuid_ {};
    shared_ptr<string> tenantContextShrink_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
