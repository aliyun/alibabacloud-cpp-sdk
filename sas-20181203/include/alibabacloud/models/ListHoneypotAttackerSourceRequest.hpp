// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTHONEYPOTATTACKERSOURCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTHONEYPOTATTACKERSOURCEREQUEST_HPP_
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
  class ListHoneypotAttackerSourceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListHoneypotAttackerSourceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(EndTimeStamp, endTimeStamp_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RiskLevelList, riskLevelList_);
      DARABONBA_PTR_TO_JSON(SrcIp, srcIp_);
      DARABONBA_PTR_TO_JSON(StartTimeStamp, startTimeStamp_);
    };
    friend void from_json(const Darabonba::Json& j, ListHoneypotAttackerSourceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(EndTimeStamp, endTimeStamp_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RiskLevelList, riskLevelList_);
      DARABONBA_PTR_FROM_JSON(SrcIp, srcIp_);
      DARABONBA_PTR_FROM_JSON(StartTimeStamp, startTimeStamp_);
    };
    ListHoneypotAttackerSourceRequest() = default ;
    ListHoneypotAttackerSourceRequest(const ListHoneypotAttackerSourceRequest &) = default ;
    ListHoneypotAttackerSourceRequest(ListHoneypotAttackerSourceRequest &&) = default ;
    ListHoneypotAttackerSourceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListHoneypotAttackerSourceRequest() = default ;
    ListHoneypotAttackerSourceRequest& operator=(const ListHoneypotAttackerSourceRequest &) = default ;
    ListHoneypotAttackerSourceRequest& operator=(ListHoneypotAttackerSourceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->currentPage_ == nullptr
        && this->endTimeStamp_ == nullptr && this->lang_ == nullptr && this->pageSize_ == nullptr && this->riskLevelList_ == nullptr && this->srcIp_ == nullptr
        && this->startTimeStamp_ == nullptr; };
    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline ListHoneypotAttackerSourceRequest& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // endTimeStamp Field Functions 
    bool hasEndTimeStamp() const { return this->endTimeStamp_ != nullptr;};
    void deleteEndTimeStamp() { this->endTimeStamp_ = nullptr;};
    inline int64_t getEndTimeStamp() const { DARABONBA_PTR_GET_DEFAULT(endTimeStamp_, 0L) };
    inline ListHoneypotAttackerSourceRequest& setEndTimeStamp(int64_t endTimeStamp) { DARABONBA_PTR_SET_VALUE(endTimeStamp_, endTimeStamp) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline ListHoneypotAttackerSourceRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListHoneypotAttackerSourceRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // riskLevelList Field Functions 
    bool hasRiskLevelList() const { return this->riskLevelList_ != nullptr;};
    void deleteRiskLevelList() { this->riskLevelList_ = nullptr;};
    inline const vector<string> & getRiskLevelList() const { DARABONBA_PTR_GET_CONST(riskLevelList_, vector<string>) };
    inline vector<string> getRiskLevelList() { DARABONBA_PTR_GET(riskLevelList_, vector<string>) };
    inline ListHoneypotAttackerSourceRequest& setRiskLevelList(const vector<string> & riskLevelList) { DARABONBA_PTR_SET_VALUE(riskLevelList_, riskLevelList) };
    inline ListHoneypotAttackerSourceRequest& setRiskLevelList(vector<string> && riskLevelList) { DARABONBA_PTR_SET_RVALUE(riskLevelList_, riskLevelList) };


    // srcIp Field Functions 
    bool hasSrcIp() const { return this->srcIp_ != nullptr;};
    void deleteSrcIp() { this->srcIp_ = nullptr;};
    inline string getSrcIp() const { DARABONBA_PTR_GET_DEFAULT(srcIp_, "") };
    inline ListHoneypotAttackerSourceRequest& setSrcIp(string srcIp) { DARABONBA_PTR_SET_VALUE(srcIp_, srcIp) };


    // startTimeStamp Field Functions 
    bool hasStartTimeStamp() const { return this->startTimeStamp_ != nullptr;};
    void deleteStartTimeStamp() { this->startTimeStamp_ = nullptr;};
    inline int64_t getStartTimeStamp() const { DARABONBA_PTR_GET_DEFAULT(startTimeStamp_, 0L) };
    inline ListHoneypotAttackerSourceRequest& setStartTimeStamp(int64_t startTimeStamp) { DARABONBA_PTR_SET_VALUE(startTimeStamp_, startTimeStamp) };


  protected:
    // The page number.
    shared_ptr<int32_t> currentPage_ {};
    // The end of the time range to query. This value is a timestamp.
    shared_ptr<int64_t> endTimeStamp_ {};
    // The language of the content within the request and response. Default value: **zh**. Valid values:
    // 
    // *   **zh**: Chinese
    // *   **en**: English
    shared_ptr<string> lang_ {};
    // The number of entries to return on each page.
    shared_ptr<int32_t> pageSize_ {};
    // An array that consists of risk levels.
    shared_ptr<vector<string>> riskLevelList_ {};
    // The source IP address of the attack.
    shared_ptr<string> srcIp_ {};
    // The beginning of the time range to query. This value is a timestamp.
    shared_ptr<int64_t> startTimeStamp_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
