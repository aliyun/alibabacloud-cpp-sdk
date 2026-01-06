// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RECALLHONORSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_RECALLHONORSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class RecallHonorShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RecallHonorShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(TenantContext, tenantContextShrink_);
      DARABONBA_PTR_TO_JSON(honorId, honorId_);
      DARABONBA_PTR_TO_JSON(orgId, orgId_);
      DARABONBA_PTR_TO_JSON(userId, userId_);
    };
    friend void from_json(const Darabonba::Json& j, RecallHonorShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(TenantContext, tenantContextShrink_);
      DARABONBA_PTR_FROM_JSON(honorId, honorId_);
      DARABONBA_PTR_FROM_JSON(orgId, orgId_);
      DARABONBA_PTR_FROM_JSON(userId, userId_);
    };
    RecallHonorShrinkRequest() = default ;
    RecallHonorShrinkRequest(const RecallHonorShrinkRequest &) = default ;
    RecallHonorShrinkRequest(RecallHonorShrinkRequest &&) = default ;
    RecallHonorShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RecallHonorShrinkRequest() = default ;
    RecallHonorShrinkRequest& operator=(const RecallHonorShrinkRequest &) = default ;
    RecallHonorShrinkRequest& operator=(RecallHonorShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->tenantContextShrink_ == nullptr
        && this->honorId_ == nullptr && this->orgId_ == nullptr && this->userId_ == nullptr; };
    // tenantContextShrink Field Functions 
    bool hasTenantContextShrink() const { return this->tenantContextShrink_ != nullptr;};
    void deleteTenantContextShrink() { this->tenantContextShrink_ = nullptr;};
    inline string getTenantContextShrink() const { DARABONBA_PTR_GET_DEFAULT(tenantContextShrink_, "") };
    inline RecallHonorShrinkRequest& setTenantContextShrink(string tenantContextShrink) { DARABONBA_PTR_SET_VALUE(tenantContextShrink_, tenantContextShrink) };


    // honorId Field Functions 
    bool hasHonorId() const { return this->honorId_ != nullptr;};
    void deleteHonorId() { this->honorId_ = nullptr;};
    inline string getHonorId() const { DARABONBA_PTR_GET_DEFAULT(honorId_, "") };
    inline RecallHonorShrinkRequest& setHonorId(string honorId) { DARABONBA_PTR_SET_VALUE(honorId_, honorId) };


    // orgId Field Functions 
    bool hasOrgId() const { return this->orgId_ != nullptr;};
    void deleteOrgId() { this->orgId_ = nullptr;};
    inline int64_t getOrgId() const { DARABONBA_PTR_GET_DEFAULT(orgId_, 0L) };
    inline RecallHonorShrinkRequest& setOrgId(int64_t orgId) { DARABONBA_PTR_SET_VALUE(orgId_, orgId) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline RecallHonorShrinkRequest& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


  protected:
    shared_ptr<string> tenantContextShrink_ {};
    // This parameter is required.
    shared_ptr<string> honorId_ {};
    // This parameter is required.
    shared_ptr<int64_t> orgId_ {};
    // This parameter is required.
    shared_ptr<string> userId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
