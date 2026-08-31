// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETBIZMETRICBYNAMESHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETBIZMETRICBYNAMESHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class GetBizMetricByNameShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetBizMetricByNameShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BizMetricByNameQuery, bizMetricByNameQueryShrink_);
      DARABONBA_PTR_TO_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_TO_JSON(OpUserId, opUserId_);
    };
    friend void from_json(const Darabonba::Json& j, GetBizMetricByNameShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BizMetricByNameQuery, bizMetricByNameQueryShrink_);
      DARABONBA_PTR_FROM_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_FROM_JSON(OpUserId, opUserId_);
    };
    GetBizMetricByNameShrinkRequest() = default ;
    GetBizMetricByNameShrinkRequest(const GetBizMetricByNameShrinkRequest &) = default ;
    GetBizMetricByNameShrinkRequest(GetBizMetricByNameShrinkRequest &&) = default ;
    GetBizMetricByNameShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetBizMetricByNameShrinkRequest() = default ;
    GetBizMetricByNameShrinkRequest& operator=(const GetBizMetricByNameShrinkRequest &) = default ;
    GetBizMetricByNameShrinkRequest& operator=(GetBizMetricByNameShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bizMetricByNameQueryShrink_ == nullptr
        && this->opTenantId_ == nullptr && this->opUserId_ == nullptr; };
    // bizMetricByNameQueryShrink Field Functions 
    bool hasBizMetricByNameQueryShrink() const { return this->bizMetricByNameQueryShrink_ != nullptr;};
    void deleteBizMetricByNameQueryShrink() { this->bizMetricByNameQueryShrink_ = nullptr;};
    inline string getBizMetricByNameQueryShrink() const { DARABONBA_PTR_GET_DEFAULT(bizMetricByNameQueryShrink_, "") };
    inline GetBizMetricByNameShrinkRequest& setBizMetricByNameQueryShrink(string bizMetricByNameQueryShrink) { DARABONBA_PTR_SET_VALUE(bizMetricByNameQueryShrink_, bizMetricByNameQueryShrink) };


    // opTenantId Field Functions 
    bool hasOpTenantId() const { return this->opTenantId_ != nullptr;};
    void deleteOpTenantId() { this->opTenantId_ = nullptr;};
    inline int64_t getOpTenantId() const { DARABONBA_PTR_GET_DEFAULT(opTenantId_, 0L) };
    inline GetBizMetricByNameShrinkRequest& setOpTenantId(int64_t opTenantId) { DARABONBA_PTR_SET_VALUE(opTenantId_, opTenantId) };


    // opUserId Field Functions 
    bool hasOpUserId() const { return this->opUserId_ != nullptr;};
    void deleteOpUserId() { this->opUserId_ = nullptr;};
    inline string getOpUserId() const { DARABONBA_PTR_GET_DEFAULT(opUserId_, "") };
    inline GetBizMetricByNameShrinkRequest& setOpUserId(string opUserId) { DARABONBA_PTR_SET_VALUE(opUserId_, opUserId) };


  protected:
    // Query request.
    // 
    // This parameter is required.
    shared_ptr<string> bizMetricByNameQueryShrink_ {};
    // Tenant ID.
    // 
    // This parameter is required.
    shared_ptr<int64_t> opTenantId_ {};
    shared_ptr<string> opUserId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
