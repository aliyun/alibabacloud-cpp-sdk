// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERECORDRESOLVESTATISTICSSUMMARYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERECORDRESOLVESTATISTICSSUMMARYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class DescribeRecordResolveStatisticsSummaryRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRecordResolveStatisticsSummaryRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Direction, direction_);
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
    friend void from_json(const Darabonba::Json& j, DescribeRecordResolveStatisticsSummaryRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Direction, direction_);
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
    DescribeRecordResolveStatisticsSummaryRequest() = default ;
    DescribeRecordResolveStatisticsSummaryRequest(const DescribeRecordResolveStatisticsSummaryRequest &) = default ;
    DescribeRecordResolveStatisticsSummaryRequest(DescribeRecordResolveStatisticsSummaryRequest &&) = default ;
    DescribeRecordResolveStatisticsSummaryRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRecordResolveStatisticsSummaryRequest() = default ;
    DescribeRecordResolveStatisticsSummaryRequest& operator=(const DescribeRecordResolveStatisticsSummaryRequest &) = default ;
    DescribeRecordResolveStatisticsSummaryRequest& operator=(DescribeRecordResolveStatisticsSummaryRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->direction_ == nullptr
        && this->domainName_ == nullptr && this->domainType_ == nullptr && this->endDate_ == nullptr && this->keyword_ == nullptr && this->lang_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->searchMode_ == nullptr && this->startDate_ == nullptr && this->threshold_ == nullptr; };
    // direction Field Functions 
    bool hasDirection() const { return this->direction_ != nullptr;};
    void deleteDirection() { this->direction_ = nullptr;};
    inline string getDirection() const { DARABONBA_PTR_GET_DEFAULT(direction_, "") };
    inline DescribeRecordResolveStatisticsSummaryRequest& setDirection(string direction) { DARABONBA_PTR_SET_VALUE(direction_, direction) };


    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string getDomainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline DescribeRecordResolveStatisticsSummaryRequest& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // domainType Field Functions 
    bool hasDomainType() const { return this->domainType_ != nullptr;};
    void deleteDomainType() { this->domainType_ = nullptr;};
    inline string getDomainType() const { DARABONBA_PTR_GET_DEFAULT(domainType_, "") };
    inline DescribeRecordResolveStatisticsSummaryRequest& setDomainType(string domainType) { DARABONBA_PTR_SET_VALUE(domainType_, domainType) };


    // endDate Field Functions 
    bool hasEndDate() const { return this->endDate_ != nullptr;};
    void deleteEndDate() { this->endDate_ = nullptr;};
    inline string getEndDate() const { DARABONBA_PTR_GET_DEFAULT(endDate_, "") };
    inline DescribeRecordResolveStatisticsSummaryRequest& setEndDate(string endDate) { DARABONBA_PTR_SET_VALUE(endDate_, endDate) };


    // keyword Field Functions 
    bool hasKeyword() const { return this->keyword_ != nullptr;};
    void deleteKeyword() { this->keyword_ = nullptr;};
    inline string getKeyword() const { DARABONBA_PTR_GET_DEFAULT(keyword_, "") };
    inline DescribeRecordResolveStatisticsSummaryRequest& setKeyword(string keyword) { DARABONBA_PTR_SET_VALUE(keyword_, keyword) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline DescribeRecordResolveStatisticsSummaryRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeRecordResolveStatisticsSummaryRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeRecordResolveStatisticsSummaryRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // searchMode Field Functions 
    bool hasSearchMode() const { return this->searchMode_ != nullptr;};
    void deleteSearchMode() { this->searchMode_ = nullptr;};
    inline string getSearchMode() const { DARABONBA_PTR_GET_DEFAULT(searchMode_, "") };
    inline DescribeRecordResolveStatisticsSummaryRequest& setSearchMode(string searchMode) { DARABONBA_PTR_SET_VALUE(searchMode_, searchMode) };


    // startDate Field Functions 
    bool hasStartDate() const { return this->startDate_ != nullptr;};
    void deleteStartDate() { this->startDate_ = nullptr;};
    inline string getStartDate() const { DARABONBA_PTR_GET_DEFAULT(startDate_, "") };
    inline DescribeRecordResolveStatisticsSummaryRequest& setStartDate(string startDate) { DARABONBA_PTR_SET_VALUE(startDate_, startDate) };


    // threshold Field Functions 
    bool hasThreshold() const { return this->threshold_ != nullptr;};
    void deleteThreshold() { this->threshold_ = nullptr;};
    inline int64_t getThreshold() const { DARABONBA_PTR_GET_DEFAULT(threshold_, 0L) };
    inline DescribeRecordResolveStatisticsSummaryRequest& setThreshold(int64_t threshold) { DARABONBA_PTR_SET_VALUE(threshold_, threshold) };


  protected:
    // The order in which the returned entries are sorted. Valid values:
    // 
    // *   DESC (default): descending order
    // *   ASC: ascending order
    shared_ptr<string> direction_ {};
    // The domain name.
    // 
    // This parameter is required.
    shared_ptr<string> domainName_ {};
    // The type of the domain name. The parameter value is not case-sensitive. Valid values:
    // 
    // *   PUBLIC (default): hosted public domain name
    // *   CACHE: cache-accelerated domain name
    shared_ptr<string> domainType_ {};
    // The end date of the time range to be queried. Specify the time in the yyyy-MM-dd format, such as 2023-03-13.
    shared_ptr<string> endDate_ {};
    // The keyword. Keyword is used together with SearchMode.
    shared_ptr<string> keyword_ {};
    // The language. Valid values: zh, en, and ja.
    shared_ptr<string> lang_ {};
    // The number of the page to return. Pages start from page 1. Default value: 1.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries to return on each page. Valid values: 1 to 1000.
    shared_ptr<int32_t> pageSize_ {};
    // The search mode of the keyword. Valid values:
    // 
    // *   LIKE (default): fuzzy search
    // *   EXACT: exact search
    shared_ptr<string> searchMode_ {};
    // The start date of the time range to be queried. Specify the time in the yyyy-MM-dd format, such as 2023-03-01.
    // 
    // This parameter is required.
    shared_ptr<string> startDate_ {};
    // The threshold for the number of Domain Name System (DNS) requests. You can query the subdomain names at the specified quantity level of DNS requests and query the number of DNS requests for each subdomain name.
    // 
    // If you do not specify this parameter, the data about the subdomain names that have DNS requests is obtained.
    // 
    // If you set this parameter to a value less than 0, the data about all subdomain names is obtained.
    // 
    // If you set this parameter to 0, the data about the subdomain names that do not have DNS requests is obtained.
    // 
    // If you set this parameter to a value greater than 0, the data about the subdomain names whose number of DNS requests is less than or equal to the value of this parameter is obtained.
    shared_ptr<int64_t> threshold_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
