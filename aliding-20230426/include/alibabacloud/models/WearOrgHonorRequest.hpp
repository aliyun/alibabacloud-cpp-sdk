// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_WEARORGHONORREQUEST_HPP_
#define ALIBABACLOUD_MODELS_WEARORGHONORREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/WearOrgHonorRequestTenantContext.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class WearOrgHonorRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const WearOrgHonorRequest& obj) { 
      DARABONBA_PTR_TO_JSON(TenantContext, tenantContext_);
      DARABONBA_PTR_TO_JSON(honorId, honorId_);
      DARABONBA_PTR_TO_JSON(orgId, orgId_);
      DARABONBA_PTR_TO_JSON(userId, userId_);
      DARABONBA_PTR_TO_JSON(wear, wear_);
    };
    friend void from_json(const Darabonba::Json& j, WearOrgHonorRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(TenantContext, tenantContext_);
      DARABONBA_PTR_FROM_JSON(honorId, honorId_);
      DARABONBA_PTR_FROM_JSON(orgId, orgId_);
      DARABONBA_PTR_FROM_JSON(userId, userId_);
      DARABONBA_PTR_FROM_JSON(wear, wear_);
    };
    WearOrgHonorRequest() = default ;
    WearOrgHonorRequest(const WearOrgHonorRequest &) = default ;
    WearOrgHonorRequest(WearOrgHonorRequest &&) = default ;
    WearOrgHonorRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~WearOrgHonorRequest() = default ;
    WearOrgHonorRequest& operator=(const WearOrgHonorRequest &) = default ;
    WearOrgHonorRequest& operator=(WearOrgHonorRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->tenantContext_ != nullptr
        && this->honorId_ != nullptr && this->orgId_ != nullptr && this->userId_ != nullptr && this->wear_ != nullptr; };
    // tenantContext Field Functions 
    bool hasTenantContext() const { return this->tenantContext_ != nullptr;};
    void deleteTenantContext() { this->tenantContext_ = nullptr;};
    inline const WearOrgHonorRequestTenantContext & tenantContext() const { DARABONBA_PTR_GET_CONST(tenantContext_, WearOrgHonorRequestTenantContext) };
    inline WearOrgHonorRequestTenantContext tenantContext() { DARABONBA_PTR_GET(tenantContext_, WearOrgHonorRequestTenantContext) };
    inline WearOrgHonorRequest& setTenantContext(const WearOrgHonorRequestTenantContext & tenantContext) { DARABONBA_PTR_SET_VALUE(tenantContext_, tenantContext) };
    inline WearOrgHonorRequest& setTenantContext(WearOrgHonorRequestTenantContext && tenantContext) { DARABONBA_PTR_SET_RVALUE(tenantContext_, tenantContext) };


    // honorId Field Functions 
    bool hasHonorId() const { return this->honorId_ != nullptr;};
    void deleteHonorId() { this->honorId_ = nullptr;};
    inline string honorId() const { DARABONBA_PTR_GET_DEFAULT(honorId_, "") };
    inline WearOrgHonorRequest& setHonorId(string honorId) { DARABONBA_PTR_SET_VALUE(honorId_, honorId) };


    // orgId Field Functions 
    bool hasOrgId() const { return this->orgId_ != nullptr;};
    void deleteOrgId() { this->orgId_ = nullptr;};
    inline int64_t orgId() const { DARABONBA_PTR_GET_DEFAULT(orgId_, 0L) };
    inline WearOrgHonorRequest& setOrgId(int64_t orgId) { DARABONBA_PTR_SET_VALUE(orgId_, orgId) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline WearOrgHonorRequest& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    // wear Field Functions 
    bool hasWear() const { return this->wear_ != nullptr;};
    void deleteWear() { this->wear_ = nullptr;};
    inline bool wear() const { DARABONBA_PTR_GET_DEFAULT(wear_, false) };
    inline WearOrgHonorRequest& setWear(bool wear) { DARABONBA_PTR_SET_VALUE(wear_, wear) };


  protected:
    std::shared_ptr<WearOrgHonorRequestTenantContext> tenantContext_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> honorId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> orgId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> userId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<bool> wear_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
