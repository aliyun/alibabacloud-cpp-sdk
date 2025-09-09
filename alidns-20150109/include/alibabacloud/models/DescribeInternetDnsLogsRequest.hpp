// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINTERNETDNSLOGSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINTERNETDNSLOGSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class DescribeInternetDnsLogsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInternetDnsLogsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AccountId, accountId_);
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(EndTimestamp, endTimestamp_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(Module, module_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(QueryCondition, queryCondition_);
      DARABONBA_PTR_TO_JSON(RecursionProtocolType, recursionProtocolType_);
      DARABONBA_PTR_TO_JSON(StartTimestamp, startTimestamp_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInternetDnsLogsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AccountId, accountId_);
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(EndTimestamp, endTimestamp_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(Module, module_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(QueryCondition, queryCondition_);
      DARABONBA_PTR_FROM_JSON(RecursionProtocolType, recursionProtocolType_);
      DARABONBA_PTR_FROM_JSON(StartTimestamp, startTimestamp_);
    };
    DescribeInternetDnsLogsRequest() = default ;
    DescribeInternetDnsLogsRequest(const DescribeInternetDnsLogsRequest &) = default ;
    DescribeInternetDnsLogsRequest(DescribeInternetDnsLogsRequest &&) = default ;
    DescribeInternetDnsLogsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInternetDnsLogsRequest() = default ;
    DescribeInternetDnsLogsRequest& operator=(const DescribeInternetDnsLogsRequest &) = default ;
    DescribeInternetDnsLogsRequest& operator=(DescribeInternetDnsLogsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->accountId_ != nullptr
        && this->domainName_ != nullptr && this->endTimestamp_ != nullptr && this->lang_ != nullptr && this->module_ != nullptr && this->pageNumber_ != nullptr
        && this->pageSize_ != nullptr && this->queryCondition_ != nullptr && this->recursionProtocolType_ != nullptr && this->startTimestamp_ != nullptr; };
    // accountId Field Functions 
    bool hasAccountId() const { return this->accountId_ != nullptr;};
    void deleteAccountId() { this->accountId_ = nullptr;};
    inline int64_t accountId() const { DARABONBA_PTR_GET_DEFAULT(accountId_, 0L) };
    inline DescribeInternetDnsLogsRequest& setAccountId(int64_t accountId) { DARABONBA_PTR_SET_VALUE(accountId_, accountId) };


    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string domainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline DescribeInternetDnsLogsRequest& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // endTimestamp Field Functions 
    bool hasEndTimestamp() const { return this->endTimestamp_ != nullptr;};
    void deleteEndTimestamp() { this->endTimestamp_ = nullptr;};
    inline int64_t endTimestamp() const { DARABONBA_PTR_GET_DEFAULT(endTimestamp_, 0L) };
    inline DescribeInternetDnsLogsRequest& setEndTimestamp(int64_t endTimestamp) { DARABONBA_PTR_SET_VALUE(endTimestamp_, endTimestamp) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string lang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline DescribeInternetDnsLogsRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // module Field Functions 
    bool hasModule() const { return this->module_ != nullptr;};
    void deleteModule() { this->module_ = nullptr;};
    inline string module() const { DARABONBA_PTR_GET_DEFAULT(module_, "") };
    inline DescribeInternetDnsLogsRequest& setModule(string module) { DARABONBA_PTR_SET_VALUE(module_, module) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeInternetDnsLogsRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeInternetDnsLogsRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // queryCondition Field Functions 
    bool hasQueryCondition() const { return this->queryCondition_ != nullptr;};
    void deleteQueryCondition() { this->queryCondition_ = nullptr;};
    inline string queryCondition() const { DARABONBA_PTR_GET_DEFAULT(queryCondition_, "") };
    inline DescribeInternetDnsLogsRequest& setQueryCondition(string queryCondition) { DARABONBA_PTR_SET_VALUE(queryCondition_, queryCondition) };


    // recursionProtocolType Field Functions 
    bool hasRecursionProtocolType() const { return this->recursionProtocolType_ != nullptr;};
    void deleteRecursionProtocolType() { this->recursionProtocolType_ = nullptr;};
    inline string recursionProtocolType() const { DARABONBA_PTR_GET_DEFAULT(recursionProtocolType_, "") };
    inline DescribeInternetDnsLogsRequest& setRecursionProtocolType(string recursionProtocolType) { DARABONBA_PTR_SET_VALUE(recursionProtocolType_, recursionProtocolType) };


    // startTimestamp Field Functions 
    bool hasStartTimestamp() const { return this->startTimestamp_ != nullptr;};
    void deleteStartTimestamp() { this->startTimestamp_ = nullptr;};
    inline int64_t startTimestamp() const { DARABONBA_PTR_GET_DEFAULT(startTimestamp_, 0L) };
    inline DescribeInternetDnsLogsRequest& setStartTimestamp(int64_t startTimestamp) { DARABONBA_PTR_SET_VALUE(startTimestamp_, startTimestamp) };


  protected:
    // The account ID displayed on the Recursive Resolution (Public DNS) page after you activate Alibaba Cloud Public DNS.
    std::shared_ptr<int64_t> accountId_ = nullptr;
    // The domain name.
    std::shared_ptr<string> domainName_ = nullptr;
    // The end time of the query (timestamp, unit: milliseconds). >Warning: If the query time span is too large and the amount of resolution logs for the queried domain is excessive, it may lead to a query timeout or inaccurate query results.
    std::shared_ptr<int64_t> endTimestamp_ = nullptr;
    // Return value language, options: 
    // - zh: Chinese 
    // - en: English
    // 
    // Default: en
    std::shared_ptr<string> lang_ = nullptr;
    // Module type 
    // - AUTHORITY (default): Public Authoritative DNS 
    // - RECURSION: Public Recursive DNS
    std::shared_ptr<string> module_ = nullptr;
    // Page number, default value is 1.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // Page size for query.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // Query parameters 
    // - sourceIp: Source IP address 
    // - queryNameFuzzy: Domain name (fuzzy value) 
    // - queryType: Record type 
    // - value: Resolution result 
    // - status: Status 
    // - serverIp: Resolution server IP
    std::shared_ptr<string> queryCondition_ = nullptr;
    std::shared_ptr<string> recursionProtocolType_ = nullptr;
    // The start time of the query (timestamp, unit: milliseconds).
    std::shared_ptr<int64_t> startTimestamp_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
