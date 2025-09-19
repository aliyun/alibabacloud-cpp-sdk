// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETHONEYPOTEVENTTRENDREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETHONEYPOTEVENTTRENDREQUEST_HPP_
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
  class GetHoneypotEventTrendRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetHoneypotEventTrendRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EndTimeStamp, endTimeStamp_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(RiskLevelList, riskLevelList_);
      DARABONBA_PTR_TO_JSON(SrcIp, srcIp_);
      DARABONBA_PTR_TO_JSON(StartTimeStamp, startTimeStamp_);
    };
    friend void from_json(const Darabonba::Json& j, GetHoneypotEventTrendRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EndTimeStamp, endTimeStamp_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(RiskLevelList, riskLevelList_);
      DARABONBA_PTR_FROM_JSON(SrcIp, srcIp_);
      DARABONBA_PTR_FROM_JSON(StartTimeStamp, startTimeStamp_);
    };
    GetHoneypotEventTrendRequest() = default ;
    GetHoneypotEventTrendRequest(const GetHoneypotEventTrendRequest &) = default ;
    GetHoneypotEventTrendRequest(GetHoneypotEventTrendRequest &&) = default ;
    GetHoneypotEventTrendRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetHoneypotEventTrendRequest() = default ;
    GetHoneypotEventTrendRequest& operator=(const GetHoneypotEventTrendRequest &) = default ;
    GetHoneypotEventTrendRequest& operator=(GetHoneypotEventTrendRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->endTimeStamp_ != nullptr
        && this->lang_ != nullptr && this->riskLevelList_ != nullptr && this->srcIp_ != nullptr && this->startTimeStamp_ != nullptr; };
    // endTimeStamp Field Functions 
    bool hasEndTimeStamp() const { return this->endTimeStamp_ != nullptr;};
    void deleteEndTimeStamp() { this->endTimeStamp_ = nullptr;};
    inline int64_t endTimeStamp() const { DARABONBA_PTR_GET_DEFAULT(endTimeStamp_, 0L) };
    inline GetHoneypotEventTrendRequest& setEndTimeStamp(int64_t endTimeStamp) { DARABONBA_PTR_SET_VALUE(endTimeStamp_, endTimeStamp) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string lang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline GetHoneypotEventTrendRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // riskLevelList Field Functions 
    bool hasRiskLevelList() const { return this->riskLevelList_ != nullptr;};
    void deleteRiskLevelList() { this->riskLevelList_ = nullptr;};
    inline const vector<string> & riskLevelList() const { DARABONBA_PTR_GET_CONST(riskLevelList_, vector<string>) };
    inline vector<string> riskLevelList() { DARABONBA_PTR_GET(riskLevelList_, vector<string>) };
    inline GetHoneypotEventTrendRequest& setRiskLevelList(const vector<string> & riskLevelList) { DARABONBA_PTR_SET_VALUE(riskLevelList_, riskLevelList) };
    inline GetHoneypotEventTrendRequest& setRiskLevelList(vector<string> && riskLevelList) { DARABONBA_PTR_SET_RVALUE(riskLevelList_, riskLevelList) };


    // srcIp Field Functions 
    bool hasSrcIp() const { return this->srcIp_ != nullptr;};
    void deleteSrcIp() { this->srcIp_ = nullptr;};
    inline string srcIp() const { DARABONBA_PTR_GET_DEFAULT(srcIp_, "") };
    inline GetHoneypotEventTrendRequest& setSrcIp(string srcIp) { DARABONBA_PTR_SET_VALUE(srcIp_, srcIp) };


    // startTimeStamp Field Functions 
    bool hasStartTimeStamp() const { return this->startTimeStamp_ != nullptr;};
    void deleteStartTimeStamp() { this->startTimeStamp_ = nullptr;};
    inline int64_t startTimeStamp() const { DARABONBA_PTR_GET_DEFAULT(startTimeStamp_, 0L) };
    inline GetHoneypotEventTrendRequest& setStartTimeStamp(int64_t startTimeStamp) { DARABONBA_PTR_SET_VALUE(startTimeStamp_, startTimeStamp) };


  protected:
    // End time, timestamp format.
    std::shared_ptr<int64_t> endTimeStamp_ = nullptr;
    // The language of the content within the request and response. Valid values:
    // 
    // *   **zh**: Chinese
    // *   **en**: English
    std::shared_ptr<string> lang_ = nullptr;
    // The risk levels of the alert events.
    std::shared_ptr<vector<string>> riskLevelList_ = nullptr;
    // The source IP address of the attack.
    // 
    // This parameter is required.
    std::shared_ptr<string> srcIp_ = nullptr;
    // Start time, timestamp format.
    std::shared_ptr<int64_t> startTimeStamp_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
