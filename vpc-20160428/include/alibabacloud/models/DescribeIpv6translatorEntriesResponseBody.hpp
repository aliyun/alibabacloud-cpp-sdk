// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEIPV6TRANSLATORENTRIESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEIPV6TRANSLATORENTRIESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeIPv6TranslatorEntriesResponseBodyIpv6TranslatorEntries.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class DescribeIPv6TranslatorEntriesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeIPv6TranslatorEntriesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Ipv6TranslatorEntries, ipv6TranslatorEntries_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeIPv6TranslatorEntriesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Ipv6TranslatorEntries, ipv6TranslatorEntries_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeIPv6TranslatorEntriesResponseBody() = default ;
    DescribeIPv6TranslatorEntriesResponseBody(const DescribeIPv6TranslatorEntriesResponseBody &) = default ;
    DescribeIPv6TranslatorEntriesResponseBody(DescribeIPv6TranslatorEntriesResponseBody &&) = default ;
    DescribeIPv6TranslatorEntriesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeIPv6TranslatorEntriesResponseBody() = default ;
    DescribeIPv6TranslatorEntriesResponseBody& operator=(const DescribeIPv6TranslatorEntriesResponseBody &) = default ;
    DescribeIPv6TranslatorEntriesResponseBody& operator=(DescribeIPv6TranslatorEntriesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->ipv6TranslatorEntries_ != nullptr
        && this->pageNumber_ != nullptr && this->pageSize_ != nullptr && this->requestId_ != nullptr && this->totalCount_ != nullptr; };
    // ipv6TranslatorEntries Field Functions 
    bool hasIpv6TranslatorEntries() const { return this->ipv6TranslatorEntries_ != nullptr;};
    void deleteIpv6TranslatorEntries() { this->ipv6TranslatorEntries_ = nullptr;};
    inline const DescribeIPv6TranslatorEntriesResponseBodyIpv6TranslatorEntries & ipv6TranslatorEntries() const { DARABONBA_PTR_GET_CONST(ipv6TranslatorEntries_, DescribeIPv6TranslatorEntriesResponseBodyIpv6TranslatorEntries) };
    inline DescribeIPv6TranslatorEntriesResponseBodyIpv6TranslatorEntries ipv6TranslatorEntries() { DARABONBA_PTR_GET(ipv6TranslatorEntries_, DescribeIPv6TranslatorEntriesResponseBodyIpv6TranslatorEntries) };
    inline DescribeIPv6TranslatorEntriesResponseBody& setIpv6TranslatorEntries(const DescribeIPv6TranslatorEntriesResponseBodyIpv6TranslatorEntries & ipv6TranslatorEntries) { DARABONBA_PTR_SET_VALUE(ipv6TranslatorEntries_, ipv6TranslatorEntries) };
    inline DescribeIPv6TranslatorEntriesResponseBody& setIpv6TranslatorEntries(DescribeIPv6TranslatorEntriesResponseBodyIpv6TranslatorEntries && ipv6TranslatorEntries) { DARABONBA_PTR_SET_RVALUE(ipv6TranslatorEntries_, ipv6TranslatorEntries) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeIPv6TranslatorEntriesResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeIPv6TranslatorEntriesResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeIPv6TranslatorEntriesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeIPv6TranslatorEntriesResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The IPv6 mapping entries that are queried.
    std::shared_ptr<DescribeIPv6TranslatorEntriesResponseBodyIpv6TranslatorEntries> ipv6TranslatorEntries_ = nullptr;
    // The page number of the returned page.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of entries returned per page.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The number of entries returned.
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
