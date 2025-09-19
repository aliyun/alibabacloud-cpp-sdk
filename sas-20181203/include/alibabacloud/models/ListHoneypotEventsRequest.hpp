// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTHONEYPOTEVENTSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTHONEYPOTEVENTSREQUEST_HPP_
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
  class ListHoneypotEventsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListHoneypotEventsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AgentIdList, agentIdList_);
      DARABONBA_PTR_TO_JSON(AlarmEventId, alarmEventId_);
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(Dealed, dealed_);
      DARABONBA_PTR_TO_JSON(HoneypotIdList, honeypotIdList_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(PortraitId, portraitId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(RiskLevelList, riskLevelList_);
      DARABONBA_PTR_TO_JSON(SrcIp, srcIp_);
    };
    friend void from_json(const Darabonba::Json& j, ListHoneypotEventsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AgentIdList, agentIdList_);
      DARABONBA_PTR_FROM_JSON(AlarmEventId, alarmEventId_);
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(Dealed, dealed_);
      DARABONBA_PTR_FROM_JSON(HoneypotIdList, honeypotIdList_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(PortraitId, portraitId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(RiskLevelList, riskLevelList_);
      DARABONBA_PTR_FROM_JSON(SrcIp, srcIp_);
    };
    ListHoneypotEventsRequest() = default ;
    ListHoneypotEventsRequest(const ListHoneypotEventsRequest &) = default ;
    ListHoneypotEventsRequest(ListHoneypotEventsRequest &&) = default ;
    ListHoneypotEventsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListHoneypotEventsRequest() = default ;
    ListHoneypotEventsRequest& operator=(const ListHoneypotEventsRequest &) = default ;
    ListHoneypotEventsRequest& operator=(ListHoneypotEventsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->agentIdList_ != nullptr
        && this->alarmEventId_ != nullptr && this->currentPage_ != nullptr && this->dealed_ != nullptr && this->honeypotIdList_ != nullptr && this->lang_ != nullptr
        && this->pageSize_ != nullptr && this->portraitId_ != nullptr && this->requestId_ != nullptr && this->riskLevelList_ != nullptr && this->srcIp_ != nullptr; };
    // agentIdList Field Functions 
    bool hasAgentIdList() const { return this->agentIdList_ != nullptr;};
    void deleteAgentIdList() { this->agentIdList_ = nullptr;};
    inline const vector<string> & agentIdList() const { DARABONBA_PTR_GET_CONST(agentIdList_, vector<string>) };
    inline vector<string> agentIdList() { DARABONBA_PTR_GET(agentIdList_, vector<string>) };
    inline ListHoneypotEventsRequest& setAgentIdList(const vector<string> & agentIdList) { DARABONBA_PTR_SET_VALUE(agentIdList_, agentIdList) };
    inline ListHoneypotEventsRequest& setAgentIdList(vector<string> && agentIdList) { DARABONBA_PTR_SET_RVALUE(agentIdList_, agentIdList) };


    // alarmEventId Field Functions 
    bool hasAlarmEventId() const { return this->alarmEventId_ != nullptr;};
    void deleteAlarmEventId() { this->alarmEventId_ = nullptr;};
    inline int64_t alarmEventId() const { DARABONBA_PTR_GET_DEFAULT(alarmEventId_, 0L) };
    inline ListHoneypotEventsRequest& setAlarmEventId(int64_t alarmEventId) { DARABONBA_PTR_SET_VALUE(alarmEventId_, alarmEventId) };


    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t currentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline ListHoneypotEventsRequest& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // dealed Field Functions 
    bool hasDealed() const { return this->dealed_ != nullptr;};
    void deleteDealed() { this->dealed_ = nullptr;};
    inline string dealed() const { DARABONBA_PTR_GET_DEFAULT(dealed_, "") };
    inline ListHoneypotEventsRequest& setDealed(string dealed) { DARABONBA_PTR_SET_VALUE(dealed_, dealed) };


    // honeypotIdList Field Functions 
    bool hasHoneypotIdList() const { return this->honeypotIdList_ != nullptr;};
    void deleteHoneypotIdList() { this->honeypotIdList_ = nullptr;};
    inline const vector<string> & honeypotIdList() const { DARABONBA_PTR_GET_CONST(honeypotIdList_, vector<string>) };
    inline vector<string> honeypotIdList() { DARABONBA_PTR_GET(honeypotIdList_, vector<string>) };
    inline ListHoneypotEventsRequest& setHoneypotIdList(const vector<string> & honeypotIdList) { DARABONBA_PTR_SET_VALUE(honeypotIdList_, honeypotIdList) };
    inline ListHoneypotEventsRequest& setHoneypotIdList(vector<string> && honeypotIdList) { DARABONBA_PTR_SET_RVALUE(honeypotIdList_, honeypotIdList) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string lang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline ListHoneypotEventsRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListHoneypotEventsRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // portraitId Field Functions 
    bool hasPortraitId() const { return this->portraitId_ != nullptr;};
    void deletePortraitId() { this->portraitId_ = nullptr;};
    inline string portraitId() const { DARABONBA_PTR_GET_DEFAULT(portraitId_, "") };
    inline ListHoneypotEventsRequest& setPortraitId(string portraitId) { DARABONBA_PTR_SET_VALUE(portraitId_, portraitId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListHoneypotEventsRequest& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // riskLevelList Field Functions 
    bool hasRiskLevelList() const { return this->riskLevelList_ != nullptr;};
    void deleteRiskLevelList() { this->riskLevelList_ = nullptr;};
    inline const vector<string> & riskLevelList() const { DARABONBA_PTR_GET_CONST(riskLevelList_, vector<string>) };
    inline vector<string> riskLevelList() { DARABONBA_PTR_GET(riskLevelList_, vector<string>) };
    inline ListHoneypotEventsRequest& setRiskLevelList(const vector<string> & riskLevelList) { DARABONBA_PTR_SET_VALUE(riskLevelList_, riskLevelList) };
    inline ListHoneypotEventsRequest& setRiskLevelList(vector<string> && riskLevelList) { DARABONBA_PTR_SET_RVALUE(riskLevelList_, riskLevelList) };


    // srcIp Field Functions 
    bool hasSrcIp() const { return this->srcIp_ != nullptr;};
    void deleteSrcIp() { this->srcIp_ = nullptr;};
    inline string srcIp() const { DARABONBA_PTR_GET_DEFAULT(srcIp_, "") };
    inline ListHoneypotEventsRequest& setSrcIp(string srcIp) { DARABONBA_PTR_SET_VALUE(srcIp_, srcIp) };


  protected:
    // The probe IDs.
    std::shared_ptr<vector<string>> agentIdList_ = nullptr;
    // The ID of the alert.
    std::shared_ptr<int64_t> alarmEventId_ = nullptr;
    // The page number.
    std::shared_ptr<int32_t> currentPage_ = nullptr;
    // The status of the event. Valid values:
    // 
    // *   **y**: handled
    // *   **n**: unhandled
    // *   **a**: all statuses
    std::shared_ptr<string> dealed_ = nullptr;
    // The honeypot IDs.
    std::shared_ptr<vector<string>> honeypotIdList_ = nullptr;
    // The language of the content within the request and response. Default value: **zh**. Valid values:
    // 
    // *   **zh**: Chinese
    // *   **en**: English
    std::shared_ptr<string> lang_ = nullptr;
    // The number of entries per page. Default value: **20**.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The ID of the attacker profile.
    std::shared_ptr<string> portraitId_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The risk levels.
    std::shared_ptr<vector<string>> riskLevelList_ = nullptr;
    // The source IP address of the attack.
    std::shared_ptr<string> srcIp_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
