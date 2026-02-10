// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINSTANCESTATISTICSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINSTANCESTATISTICSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeInstanceStatisticsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInstanceStatisticsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInstanceStatisticsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeInstanceStatisticsResponseBody() = default ;
    DescribeInstanceStatisticsResponseBody(const DescribeInstanceStatisticsResponseBody &) = default ;
    DescribeInstanceStatisticsResponseBody(DescribeInstanceStatisticsResponseBody &&) = default ;
    DescribeInstanceStatisticsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInstanceStatisticsResponseBody() = default ;
    DescribeInstanceStatisticsResponseBody& operator=(const DescribeInstanceStatisticsResponseBody &) = default ;
    DescribeInstanceStatisticsResponseBody& operator=(DescribeInstanceStatisticsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(Account, account_);
        DARABONBA_PTR_TO_JSON(AgentlessAll, agentlessAll_);
        DARABONBA_PTR_TO_JSON(AgentlessBaseline, agentlessBaseline_);
        DARABONBA_PTR_TO_JSON(AgentlessMalicious, agentlessMalicious_);
        DARABONBA_PTR_TO_JSON(AgentlessSensitiveFile, agentlessSensitiveFile_);
        DARABONBA_PTR_TO_JSON(AgentlessVulCve, agentlessVulCve_);
        DARABONBA_PTR_TO_JSON(AgentlessVulSca, agentlessVulSca_);
        DARABONBA_PTR_TO_JSON(AgentlessVulSys, agentlessVulSys_);
        DARABONBA_PTR_TO_JSON(AppNum, appNum_);
        DARABONBA_PTR_TO_JSON(CmsNum, cmsNum_);
        DARABONBA_PTR_TO_JSON(CspmHighRiskNum, cspmHighRiskNum_);
        DARABONBA_PTR_TO_JSON(CspmNum, cspmNum_);
        DARABONBA_PTR_TO_JSON(CveNum, cveNum_);
        DARABONBA_PTR_TO_JSON(EmgNum, emgNum_);
        DARABONBA_PTR_TO_JSON(Health, health_);
        DARABONBA_PTR_TO_JSON(RemindSuspiciousNum, remindSuspiciousNum_);
        DARABONBA_PTR_TO_JSON(ScaNum, scaNum_);
        DARABONBA_PTR_TO_JSON(SeriousSuspiciousNum, seriousSuspiciousNum_);
        DARABONBA_PTR_TO_JSON(SuspectSuspiciousNum, suspectSuspiciousNum_);
        DARABONBA_PTR_TO_JSON(Suspicious, suspicious_);
        DARABONBA_PTR_TO_JSON(SysAsapVulCount, sysAsapVulCount_);
        DARABONBA_PTR_TO_JSON(SysNum, sysNum_);
        DARABONBA_PTR_TO_JSON(Trojan, trojan_);
        DARABONBA_PTR_TO_JSON(Uuid, uuid_);
        DARABONBA_PTR_TO_JSON(Vul, vul_);
        DARABONBA_PTR_TO_JSON(WeakPWNum, weakPWNum_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(Account, account_);
        DARABONBA_PTR_FROM_JSON(AgentlessAll, agentlessAll_);
        DARABONBA_PTR_FROM_JSON(AgentlessBaseline, agentlessBaseline_);
        DARABONBA_PTR_FROM_JSON(AgentlessMalicious, agentlessMalicious_);
        DARABONBA_PTR_FROM_JSON(AgentlessSensitiveFile, agentlessSensitiveFile_);
        DARABONBA_PTR_FROM_JSON(AgentlessVulCve, agentlessVulCve_);
        DARABONBA_PTR_FROM_JSON(AgentlessVulSca, agentlessVulSca_);
        DARABONBA_PTR_FROM_JSON(AgentlessVulSys, agentlessVulSys_);
        DARABONBA_PTR_FROM_JSON(AppNum, appNum_);
        DARABONBA_PTR_FROM_JSON(CmsNum, cmsNum_);
        DARABONBA_PTR_FROM_JSON(CspmHighRiskNum, cspmHighRiskNum_);
        DARABONBA_PTR_FROM_JSON(CspmNum, cspmNum_);
        DARABONBA_PTR_FROM_JSON(CveNum, cveNum_);
        DARABONBA_PTR_FROM_JSON(EmgNum, emgNum_);
        DARABONBA_PTR_FROM_JSON(Health, health_);
        DARABONBA_PTR_FROM_JSON(RemindSuspiciousNum, remindSuspiciousNum_);
        DARABONBA_PTR_FROM_JSON(ScaNum, scaNum_);
        DARABONBA_PTR_FROM_JSON(SeriousSuspiciousNum, seriousSuspiciousNum_);
        DARABONBA_PTR_FROM_JSON(SuspectSuspiciousNum, suspectSuspiciousNum_);
        DARABONBA_PTR_FROM_JSON(Suspicious, suspicious_);
        DARABONBA_PTR_FROM_JSON(SysAsapVulCount, sysAsapVulCount_);
        DARABONBA_PTR_FROM_JSON(SysNum, sysNum_);
        DARABONBA_PTR_FROM_JSON(Trojan, trojan_);
        DARABONBA_PTR_FROM_JSON(Uuid, uuid_);
        DARABONBA_PTR_FROM_JSON(Vul, vul_);
        DARABONBA_PTR_FROM_JSON(WeakPWNum, weakPWNum_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->account_ == nullptr
        && this->agentlessAll_ == nullptr && this->agentlessBaseline_ == nullptr && this->agentlessMalicious_ == nullptr && this->agentlessSensitiveFile_ == nullptr && this->agentlessVulCve_ == nullptr
        && this->agentlessVulSca_ == nullptr && this->agentlessVulSys_ == nullptr && this->appNum_ == nullptr && this->cmsNum_ == nullptr && this->cspmHighRiskNum_ == nullptr
        && this->cspmNum_ == nullptr && this->cveNum_ == nullptr && this->emgNum_ == nullptr && this->health_ == nullptr && this->remindSuspiciousNum_ == nullptr
        && this->scaNum_ == nullptr && this->seriousSuspiciousNum_ == nullptr && this->suspectSuspiciousNum_ == nullptr && this->suspicious_ == nullptr && this->sysAsapVulCount_ == nullptr
        && this->sysNum_ == nullptr && this->trojan_ == nullptr && this->uuid_ == nullptr && this->vul_ == nullptr && this->weakPWNum_ == nullptr; };
      // account Field Functions 
      bool hasAccount() const { return this->account_ != nullptr;};
      void deleteAccount() { this->account_ = nullptr;};
      inline int32_t getAccount() const { DARABONBA_PTR_GET_DEFAULT(account_, 0) };
      inline Data& setAccount(int32_t account) { DARABONBA_PTR_SET_VALUE(account_, account) };


      // agentlessAll Field Functions 
      bool hasAgentlessAll() const { return this->agentlessAll_ != nullptr;};
      void deleteAgentlessAll() { this->agentlessAll_ = nullptr;};
      inline int32_t getAgentlessAll() const { DARABONBA_PTR_GET_DEFAULT(agentlessAll_, 0) };
      inline Data& setAgentlessAll(int32_t agentlessAll) { DARABONBA_PTR_SET_VALUE(agentlessAll_, agentlessAll) };


      // agentlessBaseline Field Functions 
      bool hasAgentlessBaseline() const { return this->agentlessBaseline_ != nullptr;};
      void deleteAgentlessBaseline() { this->agentlessBaseline_ = nullptr;};
      inline int32_t getAgentlessBaseline() const { DARABONBA_PTR_GET_DEFAULT(agentlessBaseline_, 0) };
      inline Data& setAgentlessBaseline(int32_t agentlessBaseline) { DARABONBA_PTR_SET_VALUE(agentlessBaseline_, agentlessBaseline) };


      // agentlessMalicious Field Functions 
      bool hasAgentlessMalicious() const { return this->agentlessMalicious_ != nullptr;};
      void deleteAgentlessMalicious() { this->agentlessMalicious_ = nullptr;};
      inline int32_t getAgentlessMalicious() const { DARABONBA_PTR_GET_DEFAULT(agentlessMalicious_, 0) };
      inline Data& setAgentlessMalicious(int32_t agentlessMalicious) { DARABONBA_PTR_SET_VALUE(agentlessMalicious_, agentlessMalicious) };


      // agentlessSensitiveFile Field Functions 
      bool hasAgentlessSensitiveFile() const { return this->agentlessSensitiveFile_ != nullptr;};
      void deleteAgentlessSensitiveFile() { this->agentlessSensitiveFile_ = nullptr;};
      inline int32_t getAgentlessSensitiveFile() const { DARABONBA_PTR_GET_DEFAULT(agentlessSensitiveFile_, 0) };
      inline Data& setAgentlessSensitiveFile(int32_t agentlessSensitiveFile) { DARABONBA_PTR_SET_VALUE(agentlessSensitiveFile_, agentlessSensitiveFile) };


      // agentlessVulCve Field Functions 
      bool hasAgentlessVulCve() const { return this->agentlessVulCve_ != nullptr;};
      void deleteAgentlessVulCve() { this->agentlessVulCve_ = nullptr;};
      inline int32_t getAgentlessVulCve() const { DARABONBA_PTR_GET_DEFAULT(agentlessVulCve_, 0) };
      inline Data& setAgentlessVulCve(int32_t agentlessVulCve) { DARABONBA_PTR_SET_VALUE(agentlessVulCve_, agentlessVulCve) };


      // agentlessVulSca Field Functions 
      bool hasAgentlessVulSca() const { return this->agentlessVulSca_ != nullptr;};
      void deleteAgentlessVulSca() { this->agentlessVulSca_ = nullptr;};
      inline int32_t getAgentlessVulSca() const { DARABONBA_PTR_GET_DEFAULT(agentlessVulSca_, 0) };
      inline Data& setAgentlessVulSca(int32_t agentlessVulSca) { DARABONBA_PTR_SET_VALUE(agentlessVulSca_, agentlessVulSca) };


      // agentlessVulSys Field Functions 
      bool hasAgentlessVulSys() const { return this->agentlessVulSys_ != nullptr;};
      void deleteAgentlessVulSys() { this->agentlessVulSys_ = nullptr;};
      inline int32_t getAgentlessVulSys() const { DARABONBA_PTR_GET_DEFAULT(agentlessVulSys_, 0) };
      inline Data& setAgentlessVulSys(int32_t agentlessVulSys) { DARABONBA_PTR_SET_VALUE(agentlessVulSys_, agentlessVulSys) };


      // appNum Field Functions 
      bool hasAppNum() const { return this->appNum_ != nullptr;};
      void deleteAppNum() { this->appNum_ = nullptr;};
      inline int32_t getAppNum() const { DARABONBA_PTR_GET_DEFAULT(appNum_, 0) };
      inline Data& setAppNum(int32_t appNum) { DARABONBA_PTR_SET_VALUE(appNum_, appNum) };


      // cmsNum Field Functions 
      bool hasCmsNum() const { return this->cmsNum_ != nullptr;};
      void deleteCmsNum() { this->cmsNum_ = nullptr;};
      inline int32_t getCmsNum() const { DARABONBA_PTR_GET_DEFAULT(cmsNum_, 0) };
      inline Data& setCmsNum(int32_t cmsNum) { DARABONBA_PTR_SET_VALUE(cmsNum_, cmsNum) };


      // cspmHighRiskNum Field Functions 
      bool hasCspmHighRiskNum() const { return this->cspmHighRiskNum_ != nullptr;};
      void deleteCspmHighRiskNum() { this->cspmHighRiskNum_ = nullptr;};
      inline string getCspmHighRiskNum() const { DARABONBA_PTR_GET_DEFAULT(cspmHighRiskNum_, "") };
      inline Data& setCspmHighRiskNum(string cspmHighRiskNum) { DARABONBA_PTR_SET_VALUE(cspmHighRiskNum_, cspmHighRiskNum) };


      // cspmNum Field Functions 
      bool hasCspmNum() const { return this->cspmNum_ != nullptr;};
      void deleteCspmNum() { this->cspmNum_ = nullptr;};
      inline int32_t getCspmNum() const { DARABONBA_PTR_GET_DEFAULT(cspmNum_, 0) };
      inline Data& setCspmNum(int32_t cspmNum) { DARABONBA_PTR_SET_VALUE(cspmNum_, cspmNum) };


      // cveNum Field Functions 
      bool hasCveNum() const { return this->cveNum_ != nullptr;};
      void deleteCveNum() { this->cveNum_ = nullptr;};
      inline int32_t getCveNum() const { DARABONBA_PTR_GET_DEFAULT(cveNum_, 0) };
      inline Data& setCveNum(int32_t cveNum) { DARABONBA_PTR_SET_VALUE(cveNum_, cveNum) };


      // emgNum Field Functions 
      bool hasEmgNum() const { return this->emgNum_ != nullptr;};
      void deleteEmgNum() { this->emgNum_ = nullptr;};
      inline int32_t getEmgNum() const { DARABONBA_PTR_GET_DEFAULT(emgNum_, 0) };
      inline Data& setEmgNum(int32_t emgNum) { DARABONBA_PTR_SET_VALUE(emgNum_, emgNum) };


      // health Field Functions 
      bool hasHealth() const { return this->health_ != nullptr;};
      void deleteHealth() { this->health_ = nullptr;};
      inline int32_t getHealth() const { DARABONBA_PTR_GET_DEFAULT(health_, 0) };
      inline Data& setHealth(int32_t health) { DARABONBA_PTR_SET_VALUE(health_, health) };


      // remindSuspiciousNum Field Functions 
      bool hasRemindSuspiciousNum() const { return this->remindSuspiciousNum_ != nullptr;};
      void deleteRemindSuspiciousNum() { this->remindSuspiciousNum_ = nullptr;};
      inline string getRemindSuspiciousNum() const { DARABONBA_PTR_GET_DEFAULT(remindSuspiciousNum_, "") };
      inline Data& setRemindSuspiciousNum(string remindSuspiciousNum) { DARABONBA_PTR_SET_VALUE(remindSuspiciousNum_, remindSuspiciousNum) };


      // scaNum Field Functions 
      bool hasScaNum() const { return this->scaNum_ != nullptr;};
      void deleteScaNum() { this->scaNum_ = nullptr;};
      inline int32_t getScaNum() const { DARABONBA_PTR_GET_DEFAULT(scaNum_, 0) };
      inline Data& setScaNum(int32_t scaNum) { DARABONBA_PTR_SET_VALUE(scaNum_, scaNum) };


      // seriousSuspiciousNum Field Functions 
      bool hasSeriousSuspiciousNum() const { return this->seriousSuspiciousNum_ != nullptr;};
      void deleteSeriousSuspiciousNum() { this->seriousSuspiciousNum_ = nullptr;};
      inline string getSeriousSuspiciousNum() const { DARABONBA_PTR_GET_DEFAULT(seriousSuspiciousNum_, "") };
      inline Data& setSeriousSuspiciousNum(string seriousSuspiciousNum) { DARABONBA_PTR_SET_VALUE(seriousSuspiciousNum_, seriousSuspiciousNum) };


      // suspectSuspiciousNum Field Functions 
      bool hasSuspectSuspiciousNum() const { return this->suspectSuspiciousNum_ != nullptr;};
      void deleteSuspectSuspiciousNum() { this->suspectSuspiciousNum_ = nullptr;};
      inline string getSuspectSuspiciousNum() const { DARABONBA_PTR_GET_DEFAULT(suspectSuspiciousNum_, "") };
      inline Data& setSuspectSuspiciousNum(string suspectSuspiciousNum) { DARABONBA_PTR_SET_VALUE(suspectSuspiciousNum_, suspectSuspiciousNum) };


      // suspicious Field Functions 
      bool hasSuspicious() const { return this->suspicious_ != nullptr;};
      void deleteSuspicious() { this->suspicious_ = nullptr;};
      inline int32_t getSuspicious() const { DARABONBA_PTR_GET_DEFAULT(suspicious_, 0) };
      inline Data& setSuspicious(int32_t suspicious) { DARABONBA_PTR_SET_VALUE(suspicious_, suspicious) };


      // sysAsapVulCount Field Functions 
      bool hasSysAsapVulCount() const { return this->sysAsapVulCount_ != nullptr;};
      void deleteSysAsapVulCount() { this->sysAsapVulCount_ = nullptr;};
      inline string getSysAsapVulCount() const { DARABONBA_PTR_GET_DEFAULT(sysAsapVulCount_, "") };
      inline Data& setSysAsapVulCount(string sysAsapVulCount) { DARABONBA_PTR_SET_VALUE(sysAsapVulCount_, sysAsapVulCount) };


      // sysNum Field Functions 
      bool hasSysNum() const { return this->sysNum_ != nullptr;};
      void deleteSysNum() { this->sysNum_ = nullptr;};
      inline int32_t getSysNum() const { DARABONBA_PTR_GET_DEFAULT(sysNum_, 0) };
      inline Data& setSysNum(int32_t sysNum) { DARABONBA_PTR_SET_VALUE(sysNum_, sysNum) };


      // trojan Field Functions 
      bool hasTrojan() const { return this->trojan_ != nullptr;};
      void deleteTrojan() { this->trojan_ = nullptr;};
      inline int32_t getTrojan() const { DARABONBA_PTR_GET_DEFAULT(trojan_, 0) };
      inline Data& setTrojan(int32_t trojan) { DARABONBA_PTR_SET_VALUE(trojan_, trojan) };


      // uuid Field Functions 
      bool hasUuid() const { return this->uuid_ != nullptr;};
      void deleteUuid() { this->uuid_ = nullptr;};
      inline string getUuid() const { DARABONBA_PTR_GET_DEFAULT(uuid_, "") };
      inline Data& setUuid(string uuid) { DARABONBA_PTR_SET_VALUE(uuid_, uuid) };


      // vul Field Functions 
      bool hasVul() const { return this->vul_ != nullptr;};
      void deleteVul() { this->vul_ = nullptr;};
      inline int32_t getVul() const { DARABONBA_PTR_GET_DEFAULT(vul_, 0) };
      inline Data& setVul(int32_t vul) { DARABONBA_PTR_SET_VALUE(vul_, vul) };


      // weakPWNum Field Functions 
      bool hasWeakPWNum() const { return this->weakPWNum_ != nullptr;};
      void deleteWeakPWNum() { this->weakPWNum_ = nullptr;};
      inline int32_t getWeakPWNum() const { DARABONBA_PTR_GET_DEFAULT(weakPWNum_, 0) };
      inline Data& setWeakPWNum(int32_t weakPWNum) { DARABONBA_PTR_SET_VALUE(weakPWNum_, weakPWNum) };


    protected:
      // The number of unusual logons to the asset.
      shared_ptr<int32_t> account_ {};
      // The number of alerts generated by the agentless detection feature.
      shared_ptr<int32_t> agentlessAll_ {};
      // The number of baseline risks detected by the agentless detection feature.
      shared_ptr<int32_t> agentlessBaseline_ {};
      // The number of malicious samples detected by the agentless detection feature.
      shared_ptr<int32_t> agentlessMalicious_ {};
      // The number of sensitive file alerts generated by the agentless detection feature.
      shared_ptr<int32_t> agentlessSensitiveFile_ {};
      // The number of system vulnerabilities detected by the agentless detection feature.
      shared_ptr<int32_t> agentlessVulCve_ {};
      // The number of application vulnerabilities detected by the agentless detection feature.
      shared_ptr<int32_t> agentlessVulSca_ {};
      // The number of Windows vulnerabilities detected by using agentless detection.
      shared_ptr<int32_t> agentlessVulSys_ {};
      // The number of application vulnerabilities detected on the asset.
      shared_ptr<int32_t> appNum_ {};
      // The number of Web-CMS vulnerabilities detected on the asset.
      shared_ptr<int32_t> cmsNum_ {};
      // Number of high-risk CSPM issues in the system
      shared_ptr<string> cspmHighRiskNum_ {};
      // The number of configuration risks detected on the asset.
      shared_ptr<int32_t> cspmNum_ {};
      // The number of common vulnerabilities detected on the asset.
      shared_ptr<int32_t> cveNum_ {};
      // The number of urgent vulnerabilities detected on the asset.
      shared_ptr<int32_t> emgNum_ {};
      // The number of baseline risks detected on the asset.
      shared_ptr<int32_t> health_ {};
      // Number of security alerts for asset existence reminders.
      shared_ptr<string> remindSuspiciousNum_ {};
      // The number of middleware vulnerabilities detected on the asset.
      shared_ptr<int32_t> scaNum_ {};
      // Number of high-risk security alerts for the asset.
      shared_ptr<string> seriousSuspiciousNum_ {};
      // Number of suspicious security alerts for the asset.
      shared_ptr<string> suspectSuspiciousNum_ {};
      // The number of alerts generated for the asset.
      shared_ptr<int32_t> suspicious_ {};
      // Number of system vulnerabilities in the asset.
      shared_ptr<string> sysAsapVulCount_ {};
      // The number of Windows system vulnerabilities detected on the asset.
      shared_ptr<int32_t> sysNum_ {};
      // The number of trojans detected on the asset.
      shared_ptr<int32_t> trojan_ {};
      // The UUID of the asset.
      shared_ptr<string> uuid_ {};
      // The total number of vulnerabilities detected on the asset.
      shared_ptr<int32_t> vul_ {};
      // The number of weak passwords.
      shared_ptr<int32_t> weakPWNum_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<DescribeInstanceStatisticsResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<DescribeInstanceStatisticsResponseBody::Data>) };
    inline vector<DescribeInstanceStatisticsResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<DescribeInstanceStatisticsResponseBody::Data>) };
    inline DescribeInstanceStatisticsResponseBody& setData(const vector<DescribeInstanceStatisticsResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribeInstanceStatisticsResponseBody& setData(vector<DescribeInstanceStatisticsResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeInstanceStatisticsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The risk information about assets.
    shared_ptr<vector<DescribeInstanceStatisticsResponseBody::Data>> data_ {};
    // The ID of the request, which is used to locate and troubleshoot issues.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
