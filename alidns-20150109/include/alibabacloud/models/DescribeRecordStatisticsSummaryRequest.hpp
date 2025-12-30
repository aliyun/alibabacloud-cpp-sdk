// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERECORDSTATISTICSSUMMARYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERECORDSTATISTICSSUMMARYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class DescribeRecordStatisticsSummaryRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRecordStatisticsSummaryRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(DomainType, domainType_);
      DARABONBA_PTR_TO_JSON(EndDate, endDate_);
      DARABONBA_PTR_TO_JSON(Keyword, keyword_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(SearchMode, searchMode_);
      DARABONBA_PTR_TO_JSON(StartDate, startDate_);
      DARABONBA_PTR_TO_JSON(Threshold, threshold_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRecordStatisticsSummaryRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(DomainType, domainType_);
      DARABONBA_PTR_FROM_JSON(EndDate, endDate_);
      DARABONBA_PTR_FROM_JSON(Keyword, keyword_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(SearchMode, searchMode_);
      DARABONBA_PTR_FROM_JSON(StartDate, startDate_);
      DARABONBA_PTR_FROM_JSON(Threshold, threshold_);
    };
    DescribeRecordStatisticsSummaryRequest() = default ;
    DescribeRecordStatisticsSummaryRequest(const DescribeRecordStatisticsSummaryRequest &) = default ;
    DescribeRecordStatisticsSummaryRequest(DescribeRecordStatisticsSummaryRequest &&) = default ;
    DescribeRecordStatisticsSummaryRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRecordStatisticsSummaryRequest() = default ;
    DescribeRecordStatisticsSummaryRequest& operator=(const DescribeRecordStatisticsSummaryRequest &) = default ;
    DescribeRecordStatisticsSummaryRequest& operator=(DescribeRecordStatisticsSummaryRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->domainName_ == nullptr
        && this->domainType_ == nullptr && this->endDate_ == nullptr && this->keyword_ == nullptr && this->lang_ == nullptr && this->pageNumber_ == nullptr
        && this->pageSize_ == nullptr && this->searchMode_ == nullptr && this->startDate_ == nullptr && this->threshold_ == nullptr; };
    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string getDomainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline DescribeRecordStatisticsSummaryRequest& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // domainType Field Functions 
    bool hasDomainType() const { return this->domainType_ != nullptr;};
    void deleteDomainType() { this->domainType_ = nullptr;};
    inline string getDomainType() const { DARABONBA_PTR_GET_DEFAULT(domainType_, "") };
    inline DescribeRecordStatisticsSummaryRequest& setDomainType(string domainType) { DARABONBA_PTR_SET_VALUE(domainType_, domainType) };


    // endDate Field Functions 
    bool hasEndDate() const { return this->endDate_ != nullptr;};
    void deleteEndDate() { this->endDate_ = nullptr;};
    inline string getEndDate() const { DARABONBA_PTR_GET_DEFAULT(endDate_, "") };
    inline DescribeRecordStatisticsSummaryRequest& setEndDate(string endDate) { DARABONBA_PTR_SET_VALUE(endDate_, endDate) };


    // keyword Field Functions 
    bool hasKeyword() const { return this->keyword_ != nullptr;};
    void deleteKeyword() { this->keyword_ = nullptr;};
    inline string getKeyword() const { DARABONBA_PTR_GET_DEFAULT(keyword_, "") };
    inline DescribeRecordStatisticsSummaryRequest& setKeyword(string keyword) { DARABONBA_PTR_SET_VALUE(keyword_, keyword) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline DescribeRecordStatisticsSummaryRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int64_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0L) };
    inline DescribeRecordStatisticsSummaryRequest& setPageNumber(int64_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline DescribeRecordStatisticsSummaryRequest& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // searchMode Field Functions 
    bool hasSearchMode() const { return this->searchMode_ != nullptr;};
    void deleteSearchMode() { this->searchMode_ = nullptr;};
    inline string getSearchMode() const { DARABONBA_PTR_GET_DEFAULT(searchMode_, "") };
    inline DescribeRecordStatisticsSummaryRequest& setSearchMode(string searchMode) { DARABONBA_PTR_SET_VALUE(searchMode_, searchMode) };


    // startDate Field Functions 
    bool hasStartDate() const { return this->startDate_ != nullptr;};
    void deleteStartDate() { this->startDate_ = nullptr;};
    inline string getStartDate() const { DARABONBA_PTR_GET_DEFAULT(startDate_, "") };
    inline DescribeRecordStatisticsSummaryRequest& setStartDate(string startDate) { DARABONBA_PTR_SET_VALUE(startDate_, startDate) };


    // threshold Field Functions 
    bool hasThreshold() const { return this->threshold_ != nullptr;};
    void deleteThreshold() { this->threshold_ = nullptr;};
    inline int64_t getThreshold() const { DARABONBA_PTR_GET_DEFAULT(threshold_, 0L) };
    inline DescribeRecordStatisticsSummaryRequest& setThreshold(int64_t threshold) { DARABONBA_PTR_SET_VALUE(threshold_, threshold) };


  protected:
    // The domain name.
    // 
    // This parameter is required.
    shared_ptr<string> domainName_ {};
    // The type of the domain name. The parameter value is not case-sensitive. Valid values:
    // 
    // *   PUBLIC (default): hosted public domain name
    // *   CACHE: cache-accelerated domain name
    shared_ptr<string> domainType_ {};
    // The end date of the query. Specify the start date in the **YYYY-MM-DD** format.
    // 
    // The default value is the day when you query the data.
    shared_ptr<string> endDate_ {};
    // The keyword for searches in %KeyWord% mode. The value is not case-sensitive.
    shared_ptr<string> keyword_ {};
    // The language.
    shared_ptr<string> lang_ {};
    // The page number. Pages start from page **1**. Default value: **1**.
    shared_ptr<int64_t> pageNumber_ {};
    // The number of entries per page. Valid values: **1 to 100**. Default value: **20**.
    shared_ptr<int64_t> pageSize_ {};
    // The search mode of the keyword. Valid values:
    // 
    // *   **LIKE** (default): fuzzy search
    // *   **EXACT**: exact search
    shared_ptr<string> searchMode_ {};
    // The start date of the query. Specify the start date in the **YYYY-MM-DD** format.
    // 
    // You can only query the DNS records within the last 90 days.``
    // 
    // This parameter is required.
    shared_ptr<string> startDate_ {};
    // The maximum number of DNS requests that you can obtain. You can obtain data about a domain name with DNS request volume less than or equal to the maximum number. For example, if you set this parameter to 100, you can query domain names with less than 100 DNS requests.
    shared_ptr<int64_t> threshold_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
