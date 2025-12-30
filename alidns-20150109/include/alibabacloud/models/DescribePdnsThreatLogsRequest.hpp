// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPDNSTHREATLOGSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPDNSTHREATLOGSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class DescribePdnsThreatLogsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePdnsThreatLogsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EndDate, endDate_);
      DARABONBA_PTR_TO_JSON(Keyword, keyword_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(StartDate, startDate_);
      DARABONBA_PTR_TO_JSON(ThreatLevel, threatLevel_);
      DARABONBA_PTR_TO_JSON(ThreatSourceIp, threatSourceIp_);
      DARABONBA_PTR_TO_JSON(ThreatType, threatType_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePdnsThreatLogsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EndDate, endDate_);
      DARABONBA_PTR_FROM_JSON(Keyword, keyword_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(StartDate, startDate_);
      DARABONBA_PTR_FROM_JSON(ThreatLevel, threatLevel_);
      DARABONBA_PTR_FROM_JSON(ThreatSourceIp, threatSourceIp_);
      DARABONBA_PTR_FROM_JSON(ThreatType, threatType_);
    };
    DescribePdnsThreatLogsRequest() = default ;
    DescribePdnsThreatLogsRequest(const DescribePdnsThreatLogsRequest &) = default ;
    DescribePdnsThreatLogsRequest(DescribePdnsThreatLogsRequest &&) = default ;
    DescribePdnsThreatLogsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePdnsThreatLogsRequest() = default ;
    DescribePdnsThreatLogsRequest& operator=(const DescribePdnsThreatLogsRequest &) = default ;
    DescribePdnsThreatLogsRequest& operator=(DescribePdnsThreatLogsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->endDate_ == nullptr
        && this->keyword_ == nullptr && this->lang_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->startDate_ == nullptr
        && this->threatLevel_ == nullptr && this->threatSourceIp_ == nullptr && this->threatType_ == nullptr; };
    // endDate Field Functions 
    bool hasEndDate() const { return this->endDate_ != nullptr;};
    void deleteEndDate() { this->endDate_ = nullptr;};
    inline string getEndDate() const { DARABONBA_PTR_GET_DEFAULT(endDate_, "") };
    inline DescribePdnsThreatLogsRequest& setEndDate(string endDate) { DARABONBA_PTR_SET_VALUE(endDate_, endDate) };


    // keyword Field Functions 
    bool hasKeyword() const { return this->keyword_ != nullptr;};
    void deleteKeyword() { this->keyword_ = nullptr;};
    inline string getKeyword() const { DARABONBA_PTR_GET_DEFAULT(keyword_, "") };
    inline DescribePdnsThreatLogsRequest& setKeyword(string keyword) { DARABONBA_PTR_SET_VALUE(keyword_, keyword) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline DescribePdnsThreatLogsRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int64_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0L) };
    inline DescribePdnsThreatLogsRequest& setPageNumber(int64_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline DescribePdnsThreatLogsRequest& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // startDate Field Functions 
    bool hasStartDate() const { return this->startDate_ != nullptr;};
    void deleteStartDate() { this->startDate_ = nullptr;};
    inline string getStartDate() const { DARABONBA_PTR_GET_DEFAULT(startDate_, "") };
    inline DescribePdnsThreatLogsRequest& setStartDate(string startDate) { DARABONBA_PTR_SET_VALUE(startDate_, startDate) };


    // threatLevel Field Functions 
    bool hasThreatLevel() const { return this->threatLevel_ != nullptr;};
    void deleteThreatLevel() { this->threatLevel_ = nullptr;};
    inline string getThreatLevel() const { DARABONBA_PTR_GET_DEFAULT(threatLevel_, "") };
    inline DescribePdnsThreatLogsRequest& setThreatLevel(string threatLevel) { DARABONBA_PTR_SET_VALUE(threatLevel_, threatLevel) };


    // threatSourceIp Field Functions 
    bool hasThreatSourceIp() const { return this->threatSourceIp_ != nullptr;};
    void deleteThreatSourceIp() { this->threatSourceIp_ = nullptr;};
    inline string getThreatSourceIp() const { DARABONBA_PTR_GET_DEFAULT(threatSourceIp_, "") };
    inline DescribePdnsThreatLogsRequest& setThreatSourceIp(string threatSourceIp) { DARABONBA_PTR_SET_VALUE(threatSourceIp_, threatSourceIp) };


    // threatType Field Functions 
    bool hasThreatType() const { return this->threatType_ != nullptr;};
    void deleteThreatType() { this->threatType_ = nullptr;};
    inline string getThreatType() const { DARABONBA_PTR_GET_DEFAULT(threatType_, "") };
    inline DescribePdnsThreatLogsRequest& setThreatType(string threatType) { DARABONBA_PTR_SET_VALUE(threatType_, threatType) };


  protected:
    shared_ptr<string> endDate_ {};
    shared_ptr<string> keyword_ {};
    shared_ptr<string> lang_ {};
    shared_ptr<int64_t> pageNumber_ {};
    shared_ptr<int64_t> pageSize_ {};
    shared_ptr<string> startDate_ {};
    shared_ptr<string> threatLevel_ {};
    shared_ptr<string> threatSourceIp_ {};
    shared_ptr<string> threatType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
