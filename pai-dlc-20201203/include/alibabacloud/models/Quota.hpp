// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUOTA_HPP_
#define ALIBABACLOUD_MODELS_QUOTA_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/QuotaConfig.hpp>
#include <alibabacloud/models/QuotaDetail.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiDlc20201203
{
namespace Models
{
  class Quota : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const Quota& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(ClusterName, clusterName_);
      DARABONBA_PTR_TO_JSON(QuotaConfig, quotaConfig_);
      DARABONBA_PTR_TO_JSON(QuotaId, quotaId_);
      DARABONBA_PTR_TO_JSON(QuotaName, quotaName_);
      DARABONBA_PTR_TO_JSON(QuotaType, quotaType_);
      DARABONBA_PTR_TO_JSON(TotalQuota, totalQuota_);
      DARABONBA_PTR_TO_JSON(TotalTideQuota, totalTideQuota_);
      DARABONBA_PTR_TO_JSON(UsedQuota, usedQuota_);
      DARABONBA_PTR_TO_JSON(UsedTideQuota, usedTideQuota_);
    };
    friend void from_json(const Darabonba::Json& j, Quota& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(ClusterName, clusterName_);
      DARABONBA_PTR_FROM_JSON(QuotaConfig, quotaConfig_);
      DARABONBA_PTR_FROM_JSON(QuotaId, quotaId_);
      DARABONBA_PTR_FROM_JSON(QuotaName, quotaName_);
      DARABONBA_PTR_FROM_JSON(QuotaType, quotaType_);
      DARABONBA_PTR_FROM_JSON(TotalQuota, totalQuota_);
      DARABONBA_PTR_FROM_JSON(TotalTideQuota, totalTideQuota_);
      DARABONBA_PTR_FROM_JSON(UsedQuota, usedQuota_);
      DARABONBA_PTR_FROM_JSON(UsedTideQuota, usedTideQuota_);
    };
    Quota() = default ;
    Quota(const Quota &) = default ;
    Quota(Quota &&) = default ;
    Quota(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~Quota() = default ;
    Quota& operator=(const Quota &) = default ;
    Quota& operator=(Quota &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clusterId_ == nullptr
        && return this->clusterName_ == nullptr && return this->quotaConfig_ == nullptr && return this->quotaId_ == nullptr && return this->quotaName_ == nullptr && return this->quotaType_ == nullptr
        && return this->totalQuota_ == nullptr && return this->totalTideQuota_ == nullptr && return this->usedQuota_ == nullptr && return this->usedTideQuota_ == nullptr; };
    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string clusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline Quota& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // clusterName Field Functions 
    bool hasClusterName() const { return this->clusterName_ != nullptr;};
    void deleteClusterName() { this->clusterName_ = nullptr;};
    inline string clusterName() const { DARABONBA_PTR_GET_DEFAULT(clusterName_, "") };
    inline Quota& setClusterName(string clusterName) { DARABONBA_PTR_SET_VALUE(clusterName_, clusterName) };


    // quotaConfig Field Functions 
    bool hasQuotaConfig() const { return this->quotaConfig_ != nullptr;};
    void deleteQuotaConfig() { this->quotaConfig_ = nullptr;};
    inline const QuotaConfig & quotaConfig() const { DARABONBA_PTR_GET_CONST(quotaConfig_, QuotaConfig) };
    inline QuotaConfig quotaConfig() { DARABONBA_PTR_GET(quotaConfig_, QuotaConfig) };
    inline Quota& setQuotaConfig(const QuotaConfig & quotaConfig) { DARABONBA_PTR_SET_VALUE(quotaConfig_, quotaConfig) };
    inline Quota& setQuotaConfig(QuotaConfig && quotaConfig) { DARABONBA_PTR_SET_RVALUE(quotaConfig_, quotaConfig) };


    // quotaId Field Functions 
    bool hasQuotaId() const { return this->quotaId_ != nullptr;};
    void deleteQuotaId() { this->quotaId_ = nullptr;};
    inline string quotaId() const { DARABONBA_PTR_GET_DEFAULT(quotaId_, "") };
    inline Quota& setQuotaId(string quotaId) { DARABONBA_PTR_SET_VALUE(quotaId_, quotaId) };


    // quotaName Field Functions 
    bool hasQuotaName() const { return this->quotaName_ != nullptr;};
    void deleteQuotaName() { this->quotaName_ = nullptr;};
    inline string quotaName() const { DARABONBA_PTR_GET_DEFAULT(quotaName_, "") };
    inline Quota& setQuotaName(string quotaName) { DARABONBA_PTR_SET_VALUE(quotaName_, quotaName) };


    // quotaType Field Functions 
    bool hasQuotaType() const { return this->quotaType_ != nullptr;};
    void deleteQuotaType() { this->quotaType_ = nullptr;};
    inline string quotaType() const { DARABONBA_PTR_GET_DEFAULT(quotaType_, "") };
    inline Quota& setQuotaType(string quotaType) { DARABONBA_PTR_SET_VALUE(quotaType_, quotaType) };


    // totalQuota Field Functions 
    bool hasTotalQuota() const { return this->totalQuota_ != nullptr;};
    void deleteTotalQuota() { this->totalQuota_ = nullptr;};
    inline const QuotaDetail & totalQuota() const { DARABONBA_PTR_GET_CONST(totalQuota_, QuotaDetail) };
    inline QuotaDetail totalQuota() { DARABONBA_PTR_GET(totalQuota_, QuotaDetail) };
    inline Quota& setTotalQuota(const QuotaDetail & totalQuota) { DARABONBA_PTR_SET_VALUE(totalQuota_, totalQuota) };
    inline Quota& setTotalQuota(QuotaDetail && totalQuota) { DARABONBA_PTR_SET_RVALUE(totalQuota_, totalQuota) };


    // totalTideQuota Field Functions 
    bool hasTotalTideQuota() const { return this->totalTideQuota_ != nullptr;};
    void deleteTotalTideQuota() { this->totalTideQuota_ = nullptr;};
    inline const QuotaDetail & totalTideQuota() const { DARABONBA_PTR_GET_CONST(totalTideQuota_, QuotaDetail) };
    inline QuotaDetail totalTideQuota() { DARABONBA_PTR_GET(totalTideQuota_, QuotaDetail) };
    inline Quota& setTotalTideQuota(const QuotaDetail & totalTideQuota) { DARABONBA_PTR_SET_VALUE(totalTideQuota_, totalTideQuota) };
    inline Quota& setTotalTideQuota(QuotaDetail && totalTideQuota) { DARABONBA_PTR_SET_RVALUE(totalTideQuota_, totalTideQuota) };


    // usedQuota Field Functions 
    bool hasUsedQuota() const { return this->usedQuota_ != nullptr;};
    void deleteUsedQuota() { this->usedQuota_ = nullptr;};
    inline const QuotaDetail & usedQuota() const { DARABONBA_PTR_GET_CONST(usedQuota_, QuotaDetail) };
    inline QuotaDetail usedQuota() { DARABONBA_PTR_GET(usedQuota_, QuotaDetail) };
    inline Quota& setUsedQuota(const QuotaDetail & usedQuota) { DARABONBA_PTR_SET_VALUE(usedQuota_, usedQuota) };
    inline Quota& setUsedQuota(QuotaDetail && usedQuota) { DARABONBA_PTR_SET_RVALUE(usedQuota_, usedQuota) };


    // usedTideQuota Field Functions 
    bool hasUsedTideQuota() const { return this->usedTideQuota_ != nullptr;};
    void deleteUsedTideQuota() { this->usedTideQuota_ = nullptr;};
    inline const QuotaDetail & usedTideQuota() const { DARABONBA_PTR_GET_CONST(usedTideQuota_, QuotaDetail) };
    inline QuotaDetail usedTideQuota() { DARABONBA_PTR_GET(usedTideQuota_, QuotaDetail) };
    inline Quota& setUsedTideQuota(const QuotaDetail & usedTideQuota) { DARABONBA_PTR_SET_VALUE(usedTideQuota_, usedTideQuota) };
    inline Quota& setUsedTideQuota(QuotaDetail && usedTideQuota) { DARABONBA_PTR_SET_RVALUE(usedTideQuota_, usedTideQuota) };


  protected:
    std::shared_ptr<string> clusterId_ = nullptr;
    std::shared_ptr<string> clusterName_ = nullptr;
    std::shared_ptr<QuotaConfig> quotaConfig_ = nullptr;
    std::shared_ptr<string> quotaId_ = nullptr;
    std::shared_ptr<string> quotaName_ = nullptr;
    std::shared_ptr<string> quotaType_ = nullptr;
    std::shared_ptr<QuotaDetail> totalQuota_ = nullptr;
    std::shared_ptr<QuotaDetail> totalTideQuota_ = nullptr;
    std::shared_ptr<QuotaDetail> usedQuota_ = nullptr;
    std::shared_ptr<QuotaDetail> usedTideQuota_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiDlc20201203
#endif
