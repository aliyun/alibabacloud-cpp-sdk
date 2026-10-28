// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEPXFSTENANTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEPXFSTENANTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardbx20200202
{
namespace Models
{
  class CreatePxfsTenantRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreatePxfsTenantRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DBInstanceName, DBInstanceName_);
      DARABONBA_PTR_TO_JSON(QuotaBytes, quotaBytes_);
      DARABONBA_PTR_TO_JSON(QuotaFiles, quotaFiles_);
      DARABONBA_PTR_TO_JSON(RateLimitRps, rateLimitRps_);
      DARABONBA_PTR_TO_JSON(RateLimitWbps, rateLimitWbps_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(TenantId, tenantId_);
      DARABONBA_PTR_TO_JSON(TenantName, tenantName_);
    };
    friend void from_json(const Darabonba::Json& j, CreatePxfsTenantRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DBInstanceName, DBInstanceName_);
      DARABONBA_PTR_FROM_JSON(QuotaBytes, quotaBytes_);
      DARABONBA_PTR_FROM_JSON(QuotaFiles, quotaFiles_);
      DARABONBA_PTR_FROM_JSON(RateLimitRps, rateLimitRps_);
      DARABONBA_PTR_FROM_JSON(RateLimitWbps, rateLimitWbps_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(TenantId, tenantId_);
      DARABONBA_PTR_FROM_JSON(TenantName, tenantName_);
    };
    CreatePxfsTenantRequest() = default ;
    CreatePxfsTenantRequest(const CreatePxfsTenantRequest &) = default ;
    CreatePxfsTenantRequest(CreatePxfsTenantRequest &&) = default ;
    CreatePxfsTenantRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreatePxfsTenantRequest() = default ;
    CreatePxfsTenantRequest& operator=(const CreatePxfsTenantRequest &) = default ;
    CreatePxfsTenantRequest& operator=(CreatePxfsTenantRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->DBInstanceName_ == nullptr
        && this->quotaBytes_ == nullptr && this->quotaFiles_ == nullptr && this->rateLimitRps_ == nullptr && this->rateLimitWbps_ == nullptr && this->regionId_ == nullptr
        && this->tenantId_ == nullptr && this->tenantName_ == nullptr; };
    // DBInstanceName Field Functions 
    bool hasDBInstanceName() const { return this->DBInstanceName_ != nullptr;};
    void deleteDBInstanceName() { this->DBInstanceName_ = nullptr;};
    inline string getDBInstanceName() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceName_, "") };
    inline CreatePxfsTenantRequest& setDBInstanceName(string DBInstanceName) { DARABONBA_PTR_SET_VALUE(DBInstanceName_, DBInstanceName) };


    // quotaBytes Field Functions 
    bool hasQuotaBytes() const { return this->quotaBytes_ != nullptr;};
    void deleteQuotaBytes() { this->quotaBytes_ = nullptr;};
    inline int64_t getQuotaBytes() const { DARABONBA_PTR_GET_DEFAULT(quotaBytes_, 0L) };
    inline CreatePxfsTenantRequest& setQuotaBytes(int64_t quotaBytes) { DARABONBA_PTR_SET_VALUE(quotaBytes_, quotaBytes) };


    // quotaFiles Field Functions 
    bool hasQuotaFiles() const { return this->quotaFiles_ != nullptr;};
    void deleteQuotaFiles() { this->quotaFiles_ = nullptr;};
    inline int64_t getQuotaFiles() const { DARABONBA_PTR_GET_DEFAULT(quotaFiles_, 0L) };
    inline CreatePxfsTenantRequest& setQuotaFiles(int64_t quotaFiles) { DARABONBA_PTR_SET_VALUE(quotaFiles_, quotaFiles) };


    // rateLimitRps Field Functions 
    bool hasRateLimitRps() const { return this->rateLimitRps_ != nullptr;};
    void deleteRateLimitRps() { this->rateLimitRps_ = nullptr;};
    inline int64_t getRateLimitRps() const { DARABONBA_PTR_GET_DEFAULT(rateLimitRps_, 0L) };
    inline CreatePxfsTenantRequest& setRateLimitRps(int64_t rateLimitRps) { DARABONBA_PTR_SET_VALUE(rateLimitRps_, rateLimitRps) };


    // rateLimitWbps Field Functions 
    bool hasRateLimitWbps() const { return this->rateLimitWbps_ != nullptr;};
    void deleteRateLimitWbps() { this->rateLimitWbps_ = nullptr;};
    inline int64_t getRateLimitWbps() const { DARABONBA_PTR_GET_DEFAULT(rateLimitWbps_, 0L) };
    inline CreatePxfsTenantRequest& setRateLimitWbps(int64_t rateLimitWbps) { DARABONBA_PTR_SET_VALUE(rateLimitWbps_, rateLimitWbps) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreatePxfsTenantRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline string getTenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
    inline CreatePxfsTenantRequest& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


    // tenantName Field Functions 
    bool hasTenantName() const { return this->tenantName_ != nullptr;};
    void deleteTenantName() { this->tenantName_ = nullptr;};
    inline string getTenantName() const { DARABONBA_PTR_GET_DEFAULT(tenantName_, "") };
    inline CreatePxfsTenantRequest& setTenantName(string tenantName) { DARABONBA_PTR_SET_VALUE(tenantName_, tenantName) };


  protected:
    // The PolarDB-X instance ID.
    // 
    // This parameter is required.
    shared_ptr<string> DBInstanceName_ {};
    // The capacity quota.
    // 
    // This parameter is required.
    shared_ptr<int64_t> quotaBytes_ {};
    // The file count quota.
    // 
    // This parameter is required.
    shared_ptr<int64_t> quotaFiles_ {};
    // The request rate limit.
    shared_ptr<int64_t> rateLimitRps_ {};
    // The write bandwidth limit.
    shared_ptr<int64_t> rateLimitWbps_ {};
    // The region ID.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // The ID of the tenant.
    // 
    // This parameter is required.
    shared_ptr<string> tenantId_ {};
    // The name of the tenant.
    // 
    // This parameter is required.
    shared_ptr<string> tenantName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardbx20200202
#endif
