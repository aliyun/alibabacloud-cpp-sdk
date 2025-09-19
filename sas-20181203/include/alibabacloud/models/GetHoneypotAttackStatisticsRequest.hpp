// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETHONEYPOTATTACKSTATISTICSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETHONEYPOTATTACKSTATISTICSREQUEST_HPP_
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
  class GetHoneypotAttackStatisticsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetHoneypotAttackStatisticsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(EndTimeStamp, endTimeStamp_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RiskLevelList, riskLevelList_);
      DARABONBA_PTR_TO_JSON(SrcIp, srcIp_);
      DARABONBA_PTR_TO_JSON(StartTimeStamp, startTimeStamp_);
      DARABONBA_PTR_TO_JSON(StatisticsType, statisticsType_);
    };
    friend void from_json(const Darabonba::Json& j, GetHoneypotAttackStatisticsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(EndTimeStamp, endTimeStamp_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RiskLevelList, riskLevelList_);
      DARABONBA_PTR_FROM_JSON(SrcIp, srcIp_);
      DARABONBA_PTR_FROM_JSON(StartTimeStamp, startTimeStamp_);
      DARABONBA_PTR_FROM_JSON(StatisticsType, statisticsType_);
    };
    GetHoneypotAttackStatisticsRequest() = default ;
    GetHoneypotAttackStatisticsRequest(const GetHoneypotAttackStatisticsRequest &) = default ;
    GetHoneypotAttackStatisticsRequest(GetHoneypotAttackStatisticsRequest &&) = default ;
    GetHoneypotAttackStatisticsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetHoneypotAttackStatisticsRequest() = default ;
    GetHoneypotAttackStatisticsRequest& operator=(const GetHoneypotAttackStatisticsRequest &) = default ;
    GetHoneypotAttackStatisticsRequest& operator=(GetHoneypotAttackStatisticsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->currentPage_ != nullptr
        && this->endTimeStamp_ != nullptr && this->lang_ != nullptr && this->pageSize_ != nullptr && this->riskLevelList_ != nullptr && this->srcIp_ != nullptr
        && this->startTimeStamp_ != nullptr && this->statisticsType_ != nullptr; };
    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t currentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline GetHoneypotAttackStatisticsRequest& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // endTimeStamp Field Functions 
    bool hasEndTimeStamp() const { return this->endTimeStamp_ != nullptr;};
    void deleteEndTimeStamp() { this->endTimeStamp_ = nullptr;};
    inline int64_t endTimeStamp() const { DARABONBA_PTR_GET_DEFAULT(endTimeStamp_, 0L) };
    inline GetHoneypotAttackStatisticsRequest& setEndTimeStamp(int64_t endTimeStamp) { DARABONBA_PTR_SET_VALUE(endTimeStamp_, endTimeStamp) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string lang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline GetHoneypotAttackStatisticsRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline GetHoneypotAttackStatisticsRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // riskLevelList Field Functions 
    bool hasRiskLevelList() const { return this->riskLevelList_ != nullptr;};
    void deleteRiskLevelList() { this->riskLevelList_ = nullptr;};
    inline const vector<string> & riskLevelList() const { DARABONBA_PTR_GET_CONST(riskLevelList_, vector<string>) };
    inline vector<string> riskLevelList() { DARABONBA_PTR_GET(riskLevelList_, vector<string>) };
    inline GetHoneypotAttackStatisticsRequest& setRiskLevelList(const vector<string> & riskLevelList) { DARABONBA_PTR_SET_VALUE(riskLevelList_, riskLevelList) };
    inline GetHoneypotAttackStatisticsRequest& setRiskLevelList(vector<string> && riskLevelList) { DARABONBA_PTR_SET_RVALUE(riskLevelList_, riskLevelList) };


    // srcIp Field Functions 
    bool hasSrcIp() const { return this->srcIp_ != nullptr;};
    void deleteSrcIp() { this->srcIp_ = nullptr;};
    inline string srcIp() const { DARABONBA_PTR_GET_DEFAULT(srcIp_, "") };
    inline GetHoneypotAttackStatisticsRequest& setSrcIp(string srcIp) { DARABONBA_PTR_SET_VALUE(srcIp_, srcIp) };


    // startTimeStamp Field Functions 
    bool hasStartTimeStamp() const { return this->startTimeStamp_ != nullptr;};
    void deleteStartTimeStamp() { this->startTimeStamp_ = nullptr;};
    inline int64_t startTimeStamp() const { DARABONBA_PTR_GET_DEFAULT(startTimeStamp_, 0L) };
    inline GetHoneypotAttackStatisticsRequest& setStartTimeStamp(int64_t startTimeStamp) { DARABONBA_PTR_SET_VALUE(startTimeStamp_, startTimeStamp) };


    // statisticsType Field Functions 
    bool hasStatisticsType() const { return this->statisticsType_ != nullptr;};
    void deleteStatisticsType() { this->statisticsType_ = nullptr;};
    inline string statisticsType() const { DARABONBA_PTR_GET_DEFAULT(statisticsType_, "") };
    inline GetHoneypotAttackStatisticsRequest& setStatisticsType(string statisticsType) { DARABONBA_PTR_SET_VALUE(statisticsType_, statisticsType) };


  protected:
    // The page number. Pages start from page **1**. Default value: **1**.
    std::shared_ptr<int32_t> currentPage_ = nullptr;
    // The end time. The value is a UNIX timestamp.
    std::shared_ptr<int64_t> endTimeStamp_ = nullptr;
    // The language of the content within the request and response. Default value: **zh**. Valid values:
    // 
    // *   **zh**: Chinese
    // *   **en**: English
    std::shared_ptr<string> lang_ = nullptr;
    // The number of entries per page. Default value: 20. If you leave this parameter empty, 20 entries are returned on each page. We recommend that you do not leave this parameter empty.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The risk levels.
    std::shared_ptr<vector<string>> riskLevelList_ = nullptr;
    // The source IP address of the attack.
    // 
    // This parameter is required.
    std::shared_ptr<string> srcIp_ = nullptr;
    // The start time. The value is a UNIX timestamp.
    std::shared_ptr<int64_t> startTimeStamp_ = nullptr;
    // The type of the attack source statistics. Valid values:
    // 
    // *   **TOP_ATTACKED_AGENT**: the top 5 probes that are attacked the most frequently
    // *   **TOP_ATTACKED_IP**: the top 5 IP addresses that are attacked the most frequently
    // *   **ATTACK_EVENT_TYPE**: the type of the intrusion event
    // *   **ATTACK_HONEYPOT_TYPE**: the type of the attacked honeypot
    // 
    // This parameter is required.
    std::shared_ptr<string> statisticsType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
