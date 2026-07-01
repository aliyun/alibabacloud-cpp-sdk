// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_VERIFYAGENTICDBTENANTAPIKEYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_VERIFYAGENTICDBTENANTAPIKEYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class VerifyAgenticDBTenantApiKeyResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const VerifyAgenticDBTenantApiKeyResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ApiKeyId, apiKeyId_);
      DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_TO_JSON(ExpireTime, expireTime_);
      DARABONBA_PTR_TO_JSON(Reason, reason_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TenantId, tenantId_);
      DARABONBA_PTR_TO_JSON(TenantName, tenantName_);
      DARABONBA_PTR_TO_JSON(Valid, valid_);
    };
    friend void from_json(const Darabonba::Json& j, VerifyAgenticDBTenantApiKeyResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ApiKeyId, apiKeyId_);
      DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_FROM_JSON(ExpireTime, expireTime_);
      DARABONBA_PTR_FROM_JSON(Reason, reason_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TenantId, tenantId_);
      DARABONBA_PTR_FROM_JSON(TenantName, tenantName_);
      DARABONBA_PTR_FROM_JSON(Valid, valid_);
    };
    VerifyAgenticDBTenantApiKeyResponseBody() = default ;
    VerifyAgenticDBTenantApiKeyResponseBody(const VerifyAgenticDBTenantApiKeyResponseBody &) = default ;
    VerifyAgenticDBTenantApiKeyResponseBody(VerifyAgenticDBTenantApiKeyResponseBody &&) = default ;
    VerifyAgenticDBTenantApiKeyResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~VerifyAgenticDBTenantApiKeyResponseBody() = default ;
    VerifyAgenticDBTenantApiKeyResponseBody& operator=(const VerifyAgenticDBTenantApiKeyResponseBody &) = default ;
    VerifyAgenticDBTenantApiKeyResponseBody& operator=(VerifyAgenticDBTenantApiKeyResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->apiKeyId_ == nullptr
        && this->DBClusterId_ == nullptr && this->expireTime_ == nullptr && this->reason_ == nullptr && this->regionId_ == nullptr && this->requestId_ == nullptr
        && this->tenantId_ == nullptr && this->tenantName_ == nullptr && this->valid_ == nullptr; };
    // apiKeyId Field Functions 
    bool hasApiKeyId() const { return this->apiKeyId_ != nullptr;};
    void deleteApiKeyId() { this->apiKeyId_ = nullptr;};
    inline string getApiKeyId() const { DARABONBA_PTR_GET_DEFAULT(apiKeyId_, "") };
    inline VerifyAgenticDBTenantApiKeyResponseBody& setApiKeyId(string apiKeyId) { DARABONBA_PTR_SET_VALUE(apiKeyId_, apiKeyId) };


    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string getDBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline VerifyAgenticDBTenantApiKeyResponseBody& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


    // expireTime Field Functions 
    bool hasExpireTime() const { return this->expireTime_ != nullptr;};
    void deleteExpireTime() { this->expireTime_ = nullptr;};
    inline string getExpireTime() const { DARABONBA_PTR_GET_DEFAULT(expireTime_, "") };
    inline VerifyAgenticDBTenantApiKeyResponseBody& setExpireTime(string expireTime) { DARABONBA_PTR_SET_VALUE(expireTime_, expireTime) };


    // reason Field Functions 
    bool hasReason() const { return this->reason_ != nullptr;};
    void deleteReason() { this->reason_ = nullptr;};
    inline string getReason() const { DARABONBA_PTR_GET_DEFAULT(reason_, "") };
    inline VerifyAgenticDBTenantApiKeyResponseBody& setReason(string reason) { DARABONBA_PTR_SET_VALUE(reason_, reason) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline VerifyAgenticDBTenantApiKeyResponseBody& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline VerifyAgenticDBTenantApiKeyResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline string getTenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
    inline VerifyAgenticDBTenantApiKeyResponseBody& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


    // tenantName Field Functions 
    bool hasTenantName() const { return this->tenantName_ != nullptr;};
    void deleteTenantName() { this->tenantName_ = nullptr;};
    inline string getTenantName() const { DARABONBA_PTR_GET_DEFAULT(tenantName_, "") };
    inline VerifyAgenticDBTenantApiKeyResponseBody& setTenantName(string tenantName) { DARABONBA_PTR_SET_VALUE(tenantName_, tenantName) };


    // valid Field Functions 
    bool hasValid() const { return this->valid_ != nullptr;};
    void deleteValid() { this->valid_ = nullptr;};
    inline bool getValid() const { DARABONBA_PTR_GET_DEFAULT(valid_, false) };
    inline VerifyAgenticDBTenantApiKeyResponseBody& setValid(bool valid) { DARABONBA_PTR_SET_VALUE(valid_, valid) };


  protected:
    shared_ptr<string> apiKeyId_ {};
    shared_ptr<string> DBClusterId_ {};
    shared_ptr<string> expireTime_ {};
    shared_ptr<string> reason_ {};
    shared_ptr<string> regionId_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<string> tenantId_ {};
    shared_ptr<string> tenantName_ {};
    shared_ptr<bool> valid_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
