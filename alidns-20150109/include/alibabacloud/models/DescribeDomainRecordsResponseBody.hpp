// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDOMAINRECORDSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDOMAINRECORDSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeDomainRecordsResponseBodyDomainRecords.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class DescribeDomainRecordsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDomainRecordsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DomainRecords, domainRecords_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDomainRecordsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DomainRecords, domainRecords_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeDomainRecordsResponseBody() = default ;
    DescribeDomainRecordsResponseBody(const DescribeDomainRecordsResponseBody &) = default ;
    DescribeDomainRecordsResponseBody(DescribeDomainRecordsResponseBody &&) = default ;
    DescribeDomainRecordsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDomainRecordsResponseBody() = default ;
    DescribeDomainRecordsResponseBody& operator=(const DescribeDomainRecordsResponseBody &) = default ;
    DescribeDomainRecordsResponseBody& operator=(DescribeDomainRecordsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->domainRecords_ != nullptr
        && this->pageNumber_ != nullptr && this->pageSize_ != nullptr && this->requestId_ != nullptr && this->totalCount_ != nullptr; };
    // domainRecords Field Functions 
    bool hasDomainRecords() const { return this->domainRecords_ != nullptr;};
    void deleteDomainRecords() { this->domainRecords_ = nullptr;};
    inline const DescribeDomainRecordsResponseBodyDomainRecords & domainRecords() const { DARABONBA_PTR_GET_CONST(domainRecords_, DescribeDomainRecordsResponseBodyDomainRecords) };
    inline DescribeDomainRecordsResponseBodyDomainRecords domainRecords() { DARABONBA_PTR_GET(domainRecords_, DescribeDomainRecordsResponseBodyDomainRecords) };
    inline DescribeDomainRecordsResponseBody& setDomainRecords(const DescribeDomainRecordsResponseBodyDomainRecords & domainRecords) { DARABONBA_PTR_SET_VALUE(domainRecords_, domainRecords) };
    inline DescribeDomainRecordsResponseBody& setDomainRecords(DescribeDomainRecordsResponseBodyDomainRecords && domainRecords) { DARABONBA_PTR_SET_RVALUE(domainRecords_, domainRecords) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int64_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0L) };
    inline DescribeDomainRecordsResponseBody& setPageNumber(int64_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline DescribeDomainRecordsResponseBody& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDomainRecordsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline DescribeDomainRecordsResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The returned Domain Name System (DNS) records.
    std::shared_ptr<DescribeDomainRecordsResponseBodyDomainRecords> domainRecords_ = nullptr;
    // The page number.
    std::shared_ptr<int64_t> pageNumber_ = nullptr;
    // The number of entries per page.
    std::shared_ptr<int64_t> pageSize_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The total number of entries returned.
    std::shared_ptr<int64_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
