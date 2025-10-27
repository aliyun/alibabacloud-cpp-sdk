// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBETOTALSTATISTICSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBETOTALSTATISTICSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeTotalStatisticsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeTotalStatisticsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Account, account_);
      DARABONBA_PTR_TO_JSON(Health, health_);
      DARABONBA_PTR_TO_JSON(HealthTotal, healthTotal_);
      DARABONBA_PTR_TO_JSON(HealthdealedTotal, healthdealedTotal_);
      DARABONBA_PTR_TO_JSON(HealthhighTotal, healthhighTotal_);
      DARABONBA_PTR_TO_JSON(HealthlowTotal, healthlowTotal_);
      DARABONBA_PTR_TO_JSON(HealthmediumTotal, healthmediumTotal_);
      DARABONBA_PTR_TO_JSON(HealthseriousTotal, healthseriousTotal_);
      DARABONBA_PTR_TO_JSON(Newsuspicious, newsuspicious_);
      DARABONBA_PTR_TO_JSON(Online, online_);
      DARABONBA_PTR_TO_JSON(Patch, patch_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Suspicious, suspicious_);
      DARABONBA_PTR_TO_JSON(SuspiciousTotal, suspiciousTotal_);
      DARABONBA_PTR_TO_JSON(SuspiciousdealedTotal, suspiciousdealedTotal_);
      DARABONBA_PTR_TO_JSON(SuspicioushighTotal, suspicioushighTotal_);
      DARABONBA_PTR_TO_JSON(SuspiciouslowTotal, suspiciouslowTotal_);
      DARABONBA_PTR_TO_JSON(SuspiciousmediumTotal, suspiciousmediumTotal_);
      DARABONBA_PTR_TO_JSON(SuspiciousseriousTotal, suspiciousseriousTotal_);
      DARABONBA_PTR_TO_JSON(Trojan, trojan_);
      DARABONBA_PTR_TO_JSON(Vul, vul_);
      DARABONBA_PTR_TO_JSON(VulAsapSum, vulAsapSum_);
      DARABONBA_PTR_TO_JSON(VulDealedTotal, vulDealedTotal_);
      DARABONBA_PTR_TO_JSON(VulLaterSum, vulLaterSum_);
      DARABONBA_PTR_TO_JSON(VulNntfSum, vulNntfSum_);
      DARABONBA_PTR_TO_JSON(VulTotal, vulTotal_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeTotalStatisticsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Account, account_);
      DARABONBA_PTR_FROM_JSON(Health, health_);
      DARABONBA_PTR_FROM_JSON(HealthTotal, healthTotal_);
      DARABONBA_PTR_FROM_JSON(HealthdealedTotal, healthdealedTotal_);
      DARABONBA_PTR_FROM_JSON(HealthhighTotal, healthhighTotal_);
      DARABONBA_PTR_FROM_JSON(HealthlowTotal, healthlowTotal_);
      DARABONBA_PTR_FROM_JSON(HealthmediumTotal, healthmediumTotal_);
      DARABONBA_PTR_FROM_JSON(HealthseriousTotal, healthseriousTotal_);
      DARABONBA_PTR_FROM_JSON(Newsuspicious, newsuspicious_);
      DARABONBA_PTR_FROM_JSON(Online, online_);
      DARABONBA_PTR_FROM_JSON(Patch, patch_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Suspicious, suspicious_);
      DARABONBA_PTR_FROM_JSON(SuspiciousTotal, suspiciousTotal_);
      DARABONBA_PTR_FROM_JSON(SuspiciousdealedTotal, suspiciousdealedTotal_);
      DARABONBA_PTR_FROM_JSON(SuspicioushighTotal, suspicioushighTotal_);
      DARABONBA_PTR_FROM_JSON(SuspiciouslowTotal, suspiciouslowTotal_);
      DARABONBA_PTR_FROM_JSON(SuspiciousmediumTotal, suspiciousmediumTotal_);
      DARABONBA_PTR_FROM_JSON(SuspiciousseriousTotal, suspiciousseriousTotal_);
      DARABONBA_PTR_FROM_JSON(Trojan, trojan_);
      DARABONBA_PTR_FROM_JSON(Vul, vul_);
      DARABONBA_PTR_FROM_JSON(VulAsapSum, vulAsapSum_);
      DARABONBA_PTR_FROM_JSON(VulDealedTotal, vulDealedTotal_);
      DARABONBA_PTR_FROM_JSON(VulLaterSum, vulLaterSum_);
      DARABONBA_PTR_FROM_JSON(VulNntfSum, vulNntfSum_);
      DARABONBA_PTR_FROM_JSON(VulTotal, vulTotal_);
    };
    DescribeTotalStatisticsResponseBody() = default ;
    DescribeTotalStatisticsResponseBody(const DescribeTotalStatisticsResponseBody &) = default ;
    DescribeTotalStatisticsResponseBody(DescribeTotalStatisticsResponseBody &&) = default ;
    DescribeTotalStatisticsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeTotalStatisticsResponseBody() = default ;
    DescribeTotalStatisticsResponseBody& operator=(const DescribeTotalStatisticsResponseBody &) = default ;
    DescribeTotalStatisticsResponseBody& operator=(DescribeTotalStatisticsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->account_ == nullptr
        && return this->health_ == nullptr && return this->healthTotal_ == nullptr && return this->healthdealedTotal_ == nullptr && return this->healthhighTotal_ == nullptr && return this->healthlowTotal_ == nullptr
        && return this->healthmediumTotal_ == nullptr && return this->healthseriousTotal_ == nullptr && return this->newsuspicious_ == nullptr && return this->online_ == nullptr && return this->patch_ == nullptr
        && return this->requestId_ == nullptr && return this->suspicious_ == nullptr && return this->suspiciousTotal_ == nullptr && return this->suspiciousdealedTotal_ == nullptr && return this->suspicioushighTotal_ == nullptr
        && return this->suspiciouslowTotal_ == nullptr && return this->suspiciousmediumTotal_ == nullptr && return this->suspiciousseriousTotal_ == nullptr && return this->trojan_ == nullptr && return this->vul_ == nullptr
        && return this->vulAsapSum_ == nullptr && return this->vulDealedTotal_ == nullptr && return this->vulLaterSum_ == nullptr && return this->vulNntfSum_ == nullptr && return this->vulTotal_ == nullptr; };
    // account Field Functions 
    bool hasAccount() const { return this->account_ != nullptr;};
    void deleteAccount() { this->account_ = nullptr;};
    inline int32_t account() const { DARABONBA_PTR_GET_DEFAULT(account_, 0) };
    inline DescribeTotalStatisticsResponseBody& setAccount(int32_t account) { DARABONBA_PTR_SET_VALUE(account_, account) };


    // health Field Functions 
    bool hasHealth() const { return this->health_ != nullptr;};
    void deleteHealth() { this->health_ = nullptr;};
    inline int32_t health() const { DARABONBA_PTR_GET_DEFAULT(health_, 0) };
    inline DescribeTotalStatisticsResponseBody& setHealth(int32_t health) { DARABONBA_PTR_SET_VALUE(health_, health) };


    // healthTotal Field Functions 
    bool hasHealthTotal() const { return this->healthTotal_ != nullptr;};
    void deleteHealthTotal() { this->healthTotal_ = nullptr;};
    inline int32_t healthTotal() const { DARABONBA_PTR_GET_DEFAULT(healthTotal_, 0) };
    inline DescribeTotalStatisticsResponseBody& setHealthTotal(int32_t healthTotal) { DARABONBA_PTR_SET_VALUE(healthTotal_, healthTotal) };


    // healthdealedTotal Field Functions 
    bool hasHealthdealedTotal() const { return this->healthdealedTotal_ != nullptr;};
    void deleteHealthdealedTotal() { this->healthdealedTotal_ = nullptr;};
    inline int32_t healthdealedTotal() const { DARABONBA_PTR_GET_DEFAULT(healthdealedTotal_, 0) };
    inline DescribeTotalStatisticsResponseBody& setHealthdealedTotal(int32_t healthdealedTotal) { DARABONBA_PTR_SET_VALUE(healthdealedTotal_, healthdealedTotal) };


    // healthhighTotal Field Functions 
    bool hasHealthhighTotal() const { return this->healthhighTotal_ != nullptr;};
    void deleteHealthhighTotal() { this->healthhighTotal_ = nullptr;};
    inline int32_t healthhighTotal() const { DARABONBA_PTR_GET_DEFAULT(healthhighTotal_, 0) };
    inline DescribeTotalStatisticsResponseBody& setHealthhighTotal(int32_t healthhighTotal) { DARABONBA_PTR_SET_VALUE(healthhighTotal_, healthhighTotal) };


    // healthlowTotal Field Functions 
    bool hasHealthlowTotal() const { return this->healthlowTotal_ != nullptr;};
    void deleteHealthlowTotal() { this->healthlowTotal_ = nullptr;};
    inline int32_t healthlowTotal() const { DARABONBA_PTR_GET_DEFAULT(healthlowTotal_, 0) };
    inline DescribeTotalStatisticsResponseBody& setHealthlowTotal(int32_t healthlowTotal) { DARABONBA_PTR_SET_VALUE(healthlowTotal_, healthlowTotal) };


    // healthmediumTotal Field Functions 
    bool hasHealthmediumTotal() const { return this->healthmediumTotal_ != nullptr;};
    void deleteHealthmediumTotal() { this->healthmediumTotal_ = nullptr;};
    inline int32_t healthmediumTotal() const { DARABONBA_PTR_GET_DEFAULT(healthmediumTotal_, 0) };
    inline DescribeTotalStatisticsResponseBody& setHealthmediumTotal(int32_t healthmediumTotal) { DARABONBA_PTR_SET_VALUE(healthmediumTotal_, healthmediumTotal) };


    // healthseriousTotal Field Functions 
    bool hasHealthseriousTotal() const { return this->healthseriousTotal_ != nullptr;};
    void deleteHealthseriousTotal() { this->healthseriousTotal_ = nullptr;};
    inline int32_t healthseriousTotal() const { DARABONBA_PTR_GET_DEFAULT(healthseriousTotal_, 0) };
    inline DescribeTotalStatisticsResponseBody& setHealthseriousTotal(int32_t healthseriousTotal) { DARABONBA_PTR_SET_VALUE(healthseriousTotal_, healthseriousTotal) };


    // newsuspicious Field Functions 
    bool hasNewsuspicious() const { return this->newsuspicious_ != nullptr;};
    void deleteNewsuspicious() { this->newsuspicious_ = nullptr;};
    inline int32_t newsuspicious() const { DARABONBA_PTR_GET_DEFAULT(newsuspicious_, 0) };
    inline DescribeTotalStatisticsResponseBody& setNewsuspicious(int32_t newsuspicious) { DARABONBA_PTR_SET_VALUE(newsuspicious_, newsuspicious) };


    // online Field Functions 
    bool hasOnline() const { return this->online_ != nullptr;};
    void deleteOnline() { this->online_ = nullptr;};
    inline bool online() const { DARABONBA_PTR_GET_DEFAULT(online_, false) };
    inline DescribeTotalStatisticsResponseBody& setOnline(bool online) { DARABONBA_PTR_SET_VALUE(online_, online) };


    // patch Field Functions 
    bool hasPatch() const { return this->patch_ != nullptr;};
    void deletePatch() { this->patch_ = nullptr;};
    inline int32_t patch() const { DARABONBA_PTR_GET_DEFAULT(patch_, 0) };
    inline DescribeTotalStatisticsResponseBody& setPatch(int32_t patch) { DARABONBA_PTR_SET_VALUE(patch_, patch) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeTotalStatisticsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // suspicious Field Functions 
    bool hasSuspicious() const { return this->suspicious_ != nullptr;};
    void deleteSuspicious() { this->suspicious_ = nullptr;};
    inline int32_t suspicious() const { DARABONBA_PTR_GET_DEFAULT(suspicious_, 0) };
    inline DescribeTotalStatisticsResponseBody& setSuspicious(int32_t suspicious) { DARABONBA_PTR_SET_VALUE(suspicious_, suspicious) };


    // suspiciousTotal Field Functions 
    bool hasSuspiciousTotal() const { return this->suspiciousTotal_ != nullptr;};
    void deleteSuspiciousTotal() { this->suspiciousTotal_ = nullptr;};
    inline int32_t suspiciousTotal() const { DARABONBA_PTR_GET_DEFAULT(suspiciousTotal_, 0) };
    inline DescribeTotalStatisticsResponseBody& setSuspiciousTotal(int32_t suspiciousTotal) { DARABONBA_PTR_SET_VALUE(suspiciousTotal_, suspiciousTotal) };


    // suspiciousdealedTotal Field Functions 
    bool hasSuspiciousdealedTotal() const { return this->suspiciousdealedTotal_ != nullptr;};
    void deleteSuspiciousdealedTotal() { this->suspiciousdealedTotal_ = nullptr;};
    inline int32_t suspiciousdealedTotal() const { DARABONBA_PTR_GET_DEFAULT(suspiciousdealedTotal_, 0) };
    inline DescribeTotalStatisticsResponseBody& setSuspiciousdealedTotal(int32_t suspiciousdealedTotal) { DARABONBA_PTR_SET_VALUE(suspiciousdealedTotal_, suspiciousdealedTotal) };


    // suspicioushighTotal Field Functions 
    bool hasSuspicioushighTotal() const { return this->suspicioushighTotal_ != nullptr;};
    void deleteSuspicioushighTotal() { this->suspicioushighTotal_ = nullptr;};
    inline int32_t suspicioushighTotal() const { DARABONBA_PTR_GET_DEFAULT(suspicioushighTotal_, 0) };
    inline DescribeTotalStatisticsResponseBody& setSuspicioushighTotal(int32_t suspicioushighTotal) { DARABONBA_PTR_SET_VALUE(suspicioushighTotal_, suspicioushighTotal) };


    // suspiciouslowTotal Field Functions 
    bool hasSuspiciouslowTotal() const { return this->suspiciouslowTotal_ != nullptr;};
    void deleteSuspiciouslowTotal() { this->suspiciouslowTotal_ = nullptr;};
    inline int32_t suspiciouslowTotal() const { DARABONBA_PTR_GET_DEFAULT(suspiciouslowTotal_, 0) };
    inline DescribeTotalStatisticsResponseBody& setSuspiciouslowTotal(int32_t suspiciouslowTotal) { DARABONBA_PTR_SET_VALUE(suspiciouslowTotal_, suspiciouslowTotal) };


    // suspiciousmediumTotal Field Functions 
    bool hasSuspiciousmediumTotal() const { return this->suspiciousmediumTotal_ != nullptr;};
    void deleteSuspiciousmediumTotal() { this->suspiciousmediumTotal_ = nullptr;};
    inline int32_t suspiciousmediumTotal() const { DARABONBA_PTR_GET_DEFAULT(suspiciousmediumTotal_, 0) };
    inline DescribeTotalStatisticsResponseBody& setSuspiciousmediumTotal(int32_t suspiciousmediumTotal) { DARABONBA_PTR_SET_VALUE(suspiciousmediumTotal_, suspiciousmediumTotal) };


    // suspiciousseriousTotal Field Functions 
    bool hasSuspiciousseriousTotal() const { return this->suspiciousseriousTotal_ != nullptr;};
    void deleteSuspiciousseriousTotal() { this->suspiciousseriousTotal_ = nullptr;};
    inline int32_t suspiciousseriousTotal() const { DARABONBA_PTR_GET_DEFAULT(suspiciousseriousTotal_, 0) };
    inline DescribeTotalStatisticsResponseBody& setSuspiciousseriousTotal(int32_t suspiciousseriousTotal) { DARABONBA_PTR_SET_VALUE(suspiciousseriousTotal_, suspiciousseriousTotal) };


    // trojan Field Functions 
    bool hasTrojan() const { return this->trojan_ != nullptr;};
    void deleteTrojan() { this->trojan_ = nullptr;};
    inline int32_t trojan() const { DARABONBA_PTR_GET_DEFAULT(trojan_, 0) };
    inline DescribeTotalStatisticsResponseBody& setTrojan(int32_t trojan) { DARABONBA_PTR_SET_VALUE(trojan_, trojan) };


    // vul Field Functions 
    bool hasVul() const { return this->vul_ != nullptr;};
    void deleteVul() { this->vul_ = nullptr;};
    inline int32_t vul() const { DARABONBA_PTR_GET_DEFAULT(vul_, 0) };
    inline DescribeTotalStatisticsResponseBody& setVul(int32_t vul) { DARABONBA_PTR_SET_VALUE(vul_, vul) };


    // vulAsapSum Field Functions 
    bool hasVulAsapSum() const { return this->vulAsapSum_ != nullptr;};
    void deleteVulAsapSum() { this->vulAsapSum_ = nullptr;};
    inline int32_t vulAsapSum() const { DARABONBA_PTR_GET_DEFAULT(vulAsapSum_, 0) };
    inline DescribeTotalStatisticsResponseBody& setVulAsapSum(int32_t vulAsapSum) { DARABONBA_PTR_SET_VALUE(vulAsapSum_, vulAsapSum) };


    // vulDealedTotal Field Functions 
    bool hasVulDealedTotal() const { return this->vulDealedTotal_ != nullptr;};
    void deleteVulDealedTotal() { this->vulDealedTotal_ = nullptr;};
    inline int32_t vulDealedTotal() const { DARABONBA_PTR_GET_DEFAULT(vulDealedTotal_, 0) };
    inline DescribeTotalStatisticsResponseBody& setVulDealedTotal(int32_t vulDealedTotal) { DARABONBA_PTR_SET_VALUE(vulDealedTotal_, vulDealedTotal) };


    // vulLaterSum Field Functions 
    bool hasVulLaterSum() const { return this->vulLaterSum_ != nullptr;};
    void deleteVulLaterSum() { this->vulLaterSum_ = nullptr;};
    inline int32_t vulLaterSum() const { DARABONBA_PTR_GET_DEFAULT(vulLaterSum_, 0) };
    inline DescribeTotalStatisticsResponseBody& setVulLaterSum(int32_t vulLaterSum) { DARABONBA_PTR_SET_VALUE(vulLaterSum_, vulLaterSum) };


    // vulNntfSum Field Functions 
    bool hasVulNntfSum() const { return this->vulNntfSum_ != nullptr;};
    void deleteVulNntfSum() { this->vulNntfSum_ = nullptr;};
    inline int32_t vulNntfSum() const { DARABONBA_PTR_GET_DEFAULT(vulNntfSum_, 0) };
    inline DescribeTotalStatisticsResponseBody& setVulNntfSum(int32_t vulNntfSum) { DARABONBA_PTR_SET_VALUE(vulNntfSum_, vulNntfSum) };


    // vulTotal Field Functions 
    bool hasVulTotal() const { return this->vulTotal_ != nullptr;};
    void deleteVulTotal() { this->vulTotal_ = nullptr;};
    inline int32_t vulTotal() const { DARABONBA_PTR_GET_DEFAULT(vulTotal_, 0) };
    inline DescribeTotalStatisticsResponseBody& setVulTotal(int32_t vulTotal) { DARABONBA_PTR_SET_VALUE(vulTotal_, vulTotal) };


  protected:
    // The number of logons to the asset.
    std::shared_ptr<int32_t> account_ = nullptr;
    // The total number of unfixed baseline risks.
    std::shared_ptr<int32_t> health_ = nullptr;
    // The total number of baseline risks.
    std::shared_ptr<int32_t> healthTotal_ = nullptr;
    // The total number of fixed baseline risk items. This parameter is deprecated.
    std::shared_ptr<int32_t> healthdealedTotal_ = nullptr;
    // The number of baseline risk items whose severity is high.
    std::shared_ptr<int32_t> healthhighTotal_ = nullptr;
    // The number of baseline risk items whose severity is low.
    std::shared_ptr<int32_t> healthlowTotal_ = nullptr;
    // The number of baseline risk items whose severity is medium.
    std::shared_ptr<int32_t> healthmediumTotal_ = nullptr;
    // The number of baseline risk items whose severity is urgent. This parameter is deprecated.
    std::shared_ptr<int32_t> healthseriousTotal_ = nullptr;
    // The number of alerts that are generated by Server Guard or Security Center.
    // 
    // > 
    // 
    // > *   If you set the **Type** parameter to **sas**, this parameter indicates the number of alerts that are generated by Security Center.
    // 
    // > *   If you set the **Type** parameter to **aqs**, this parameter indicates the number of alerts that are generated by Server Guard.
    std::shared_ptr<int32_t> newsuspicious_ = nullptr;
    // Indicates whether the agent is online. Valid values:
    // 
    // *   **true**
    // *   **false**
    std::shared_ptr<bool> online_ = nullptr;
    // The number of Web-CMS vulnerabilities.
    std::shared_ptr<int32_t> patch_ = nullptr;
    // The ID of the request, which is used to locate and troubleshoot issues.
    std::shared_ptr<string> requestId_ = nullptr;
    // The number of alerts that are generated by Server Guard.
    std::shared_ptr<int32_t> suspicious_ = nullptr;
    // This parameter is deprecated.
    std::shared_ptr<int32_t> suspiciousTotal_ = nullptr;
    // The number of handled alerts.
    std::shared_ptr<int32_t> suspiciousdealedTotal_ = nullptr;
    // This parameter is deprecated. This parameter is deprecated.
    std::shared_ptr<int32_t> suspicioushighTotal_ = nullptr;
    // The number of alerts whose risk level is reminder.
    std::shared_ptr<int32_t> suspiciouslowTotal_ = nullptr;
    // The number of alerts whose risk level is suspicious.
    std::shared_ptr<int32_t> suspiciousmediumTotal_ = nullptr;
    // The number of alerts whose risk level is urgent.
    std::shared_ptr<int32_t> suspiciousseriousTotal_ = nullptr;
    // The number of webshell alerts.
    std::shared_ptr<int32_t> trojan_ = nullptr;
    // The number of unfixed vulnerabilities.
    std::shared_ptr<int32_t> vul_ = nullptr;
    // The number of vulnerabilities whose severity level is high.
    std::shared_ptr<int32_t> vulAsapSum_ = nullptr;
    // The total number of fixed vulnerabilities.
    std::shared_ptr<int32_t> vulDealedTotal_ = nullptr;
    // The number of vulnerabilities whose severity level is medium.
    std::shared_ptr<int32_t> vulLaterSum_ = nullptr;
    // The number of unfixed vulnerabilities whose severity level is low.
    std::shared_ptr<int32_t> vulNntfSum_ = nullptr;
    // The total number of vulnerabilities.
    std::shared_ptr<int32_t> vulTotal_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
