// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CACHESERVICE_HPP_
#define ALIBABACLOUD_MODELS_CACHESERVICE_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CacheInfo.hpp>
#include <alibabacloud/models/UserVpc.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiStudio20220112
{
namespace Models
{
  class CacheService : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CacheService& obj) { 
      DARABONBA_PTR_TO_JSON(CacheInfos, cacheInfos_);
      DARABONBA_PTR_TO_JSON(CacheServiceId, cacheServiceId_);
      DARABONBA_PTR_TO_JSON(CreatedBy, createdBy_);
      DARABONBA_PTR_TO_JSON(GmtCreated, gmtCreated_);
      DARABONBA_PTR_TO_JSON(QuotaId, quotaId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(SupportedClientQuotaIds, supportedClientQuotaIds_);
      DARABONBA_PTR_TO_JSON(TenantId, tenantId_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
      DARABONBA_PTR_TO_JSON(UserVpc, userVpc_);
    };
    friend void from_json(const Darabonba::Json& j, CacheService& obj) { 
      DARABONBA_PTR_FROM_JSON(CacheInfos, cacheInfos_);
      DARABONBA_PTR_FROM_JSON(CacheServiceId, cacheServiceId_);
      DARABONBA_PTR_FROM_JSON(CreatedBy, createdBy_);
      DARABONBA_PTR_FROM_JSON(GmtCreated, gmtCreated_);
      DARABONBA_PTR_FROM_JSON(QuotaId, quotaId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(SupportedClientQuotaIds, supportedClientQuotaIds_);
      DARABONBA_PTR_FROM_JSON(TenantId, tenantId_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
      DARABONBA_PTR_FROM_JSON(UserVpc, userVpc_);
    };
    CacheService() = default ;
    CacheService(const CacheService &) = default ;
    CacheService(CacheService &&) = default ;
    CacheService(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CacheService() = default ;
    CacheService& operator=(const CacheService &) = default ;
    CacheService& operator=(CacheService &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->cacheInfos_ != nullptr
        && this->cacheServiceId_ != nullptr && this->createdBy_ != nullptr && this->gmtCreated_ != nullptr && this->quotaId_ != nullptr && this->status_ != nullptr
        && this->supportedClientQuotaIds_ != nullptr && this->tenantId_ != nullptr && this->userId_ != nullptr && this->userVpc_ != nullptr; };
    // cacheInfos Field Functions 
    bool hasCacheInfos() const { return this->cacheInfos_ != nullptr;};
    void deleteCacheInfos() { this->cacheInfos_ = nullptr;};
    inline const vector<CacheInfo> & cacheInfos() const { DARABONBA_PTR_GET_CONST(cacheInfos_, vector<CacheInfo>) };
    inline vector<CacheInfo> cacheInfos() { DARABONBA_PTR_GET(cacheInfos_, vector<CacheInfo>) };
    inline CacheService& setCacheInfos(const vector<CacheInfo> & cacheInfos) { DARABONBA_PTR_SET_VALUE(cacheInfos_, cacheInfos) };
    inline CacheService& setCacheInfos(vector<CacheInfo> && cacheInfos) { DARABONBA_PTR_SET_RVALUE(cacheInfos_, cacheInfos) };


    // cacheServiceId Field Functions 
    bool hasCacheServiceId() const { return this->cacheServiceId_ != nullptr;};
    void deleteCacheServiceId() { this->cacheServiceId_ = nullptr;};
    inline string cacheServiceId() const { DARABONBA_PTR_GET_DEFAULT(cacheServiceId_, "") };
    inline CacheService& setCacheServiceId(string cacheServiceId) { DARABONBA_PTR_SET_VALUE(cacheServiceId_, cacheServiceId) };


    // createdBy Field Functions 
    bool hasCreatedBy() const { return this->createdBy_ != nullptr;};
    void deleteCreatedBy() { this->createdBy_ = nullptr;};
    inline string createdBy() const { DARABONBA_PTR_GET_DEFAULT(createdBy_, "") };
    inline CacheService& setCreatedBy(string createdBy) { DARABONBA_PTR_SET_VALUE(createdBy_, createdBy) };


    // gmtCreated Field Functions 
    bool hasGmtCreated() const { return this->gmtCreated_ != nullptr;};
    void deleteGmtCreated() { this->gmtCreated_ = nullptr;};
    inline string gmtCreated() const { DARABONBA_PTR_GET_DEFAULT(gmtCreated_, "") };
    inline CacheService& setGmtCreated(string gmtCreated) { DARABONBA_PTR_SET_VALUE(gmtCreated_, gmtCreated) };


    // quotaId Field Functions 
    bool hasQuotaId() const { return this->quotaId_ != nullptr;};
    void deleteQuotaId() { this->quotaId_ = nullptr;};
    inline string quotaId() const { DARABONBA_PTR_GET_DEFAULT(quotaId_, "") };
    inline CacheService& setQuotaId(string quotaId) { DARABONBA_PTR_SET_VALUE(quotaId_, quotaId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline CacheService& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // supportedClientQuotaIds Field Functions 
    bool hasSupportedClientQuotaIds() const { return this->supportedClientQuotaIds_ != nullptr;};
    void deleteSupportedClientQuotaIds() { this->supportedClientQuotaIds_ = nullptr;};
    inline const vector<string> & supportedClientQuotaIds() const { DARABONBA_PTR_GET_CONST(supportedClientQuotaIds_, vector<string>) };
    inline vector<string> supportedClientQuotaIds() { DARABONBA_PTR_GET(supportedClientQuotaIds_, vector<string>) };
    inline CacheService& setSupportedClientQuotaIds(const vector<string> & supportedClientQuotaIds) { DARABONBA_PTR_SET_VALUE(supportedClientQuotaIds_, supportedClientQuotaIds) };
    inline CacheService& setSupportedClientQuotaIds(vector<string> && supportedClientQuotaIds) { DARABONBA_PTR_SET_RVALUE(supportedClientQuotaIds_, supportedClientQuotaIds) };


    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline string tenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
    inline CacheService& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline CacheService& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    // userVpc Field Functions 
    bool hasUserVpc() const { return this->userVpc_ != nullptr;};
    void deleteUserVpc() { this->userVpc_ = nullptr;};
    inline const UserVpc & userVpc() const { DARABONBA_PTR_GET_CONST(userVpc_, UserVpc) };
    inline UserVpc userVpc() { DARABONBA_PTR_GET(userVpc_, UserVpc) };
    inline CacheService& setUserVpc(const UserVpc & userVpc) { DARABONBA_PTR_SET_VALUE(userVpc_, userVpc) };
    inline CacheService& setUserVpc(UserVpc && userVpc) { DARABONBA_PTR_SET_RVALUE(userVpc_, userVpc) };


  protected:
    std::shared_ptr<vector<CacheInfo>> cacheInfos_ = nullptr;
    std::shared_ptr<string> cacheServiceId_ = nullptr;
    std::shared_ptr<string> createdBy_ = nullptr;
    std::shared_ptr<string> gmtCreated_ = nullptr;
    std::shared_ptr<string> quotaId_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<vector<string>> supportedClientQuotaIds_ = nullptr;
    std::shared_ptr<string> tenantId_ = nullptr;
    std::shared_ptr<string> userId_ = nullptr;
    std::shared_ptr<UserVpc> userVpc_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiStudio20220112
#endif
