// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDOHSUBDOMAINSTATISTICSSUMMARYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDOHSUBDOMAINSTATISTICSSUMMARYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDohSubDomainStatisticsSummaryResponseBodyStatistics.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class DescribeDohSubDomainStatisticsSummaryResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDohSubDomainStatisticsSummaryResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Statistics, statistics_);
      DARABONBA_PTR_TO_JSON(TotalItems, totalItems_);
      DARABONBA_PTR_TO_JSON(TotalPages, totalPages_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDohSubDomainStatisticsSummaryResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Statistics, statistics_);
      DARABONBA_PTR_FROM_JSON(TotalItems, totalItems_);
      DARABONBA_PTR_FROM_JSON(TotalPages, totalPages_);
    };
    DescribeDohSubDomainStatisticsSummaryResponseBody() = default ;
    DescribeDohSubDomainStatisticsSummaryResponseBody(const DescribeDohSubDomainStatisticsSummaryResponseBody &) = default ;
    DescribeDohSubDomainStatisticsSummaryResponseBody(DescribeDohSubDomainStatisticsSummaryResponseBody &&) = default ;
    DescribeDohSubDomainStatisticsSummaryResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDohSubDomainStatisticsSummaryResponseBody() = default ;
    DescribeDohSubDomainStatisticsSummaryResponseBody& operator=(const DescribeDohSubDomainStatisticsSummaryResponseBody &) = default ;
    DescribeDohSubDomainStatisticsSummaryResponseBody& operator=(DescribeDohSubDomainStatisticsSummaryResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->pageNumber_ != nullptr
        && this->pageSize_ != nullptr && this->requestId_ != nullptr && this->statistics_ != nullptr && this->totalItems_ != nullptr && this->totalPages_ != nullptr; };
    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeDohSubDomainStatisticsSummaryResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeDohSubDomainStatisticsSummaryResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDohSubDomainStatisticsSummaryResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // statistics Field Functions 
    bool hasStatistics() const { return this->statistics_ != nullptr;};
    void deleteStatistics() { this->statistics_ = nullptr;};
    inline const vector<DescribeDohSubDomainStatisticsSummaryResponseBodyStatistics> & statistics() const { DARABONBA_PTR_GET_CONST(statistics_, vector<DescribeDohSubDomainStatisticsSummaryResponseBodyStatistics>) };
    inline vector<DescribeDohSubDomainStatisticsSummaryResponseBodyStatistics> statistics() { DARABONBA_PTR_GET(statistics_, vector<DescribeDohSubDomainStatisticsSummaryResponseBodyStatistics>) };
    inline DescribeDohSubDomainStatisticsSummaryResponseBody& setStatistics(const vector<DescribeDohSubDomainStatisticsSummaryResponseBodyStatistics> & statistics) { DARABONBA_PTR_SET_VALUE(statistics_, statistics) };
    inline DescribeDohSubDomainStatisticsSummaryResponseBody& setStatistics(vector<DescribeDohSubDomainStatisticsSummaryResponseBodyStatistics> && statistics) { DARABONBA_PTR_SET_RVALUE(statistics_, statistics) };


    // totalItems Field Functions 
    bool hasTotalItems() const { return this->totalItems_ != nullptr;};
    void deleteTotalItems() { this->totalItems_ = nullptr;};
    inline int32_t totalItems() const { DARABONBA_PTR_GET_DEFAULT(totalItems_, 0) };
    inline DescribeDohSubDomainStatisticsSummaryResponseBody& setTotalItems(int32_t totalItems) { DARABONBA_PTR_SET_VALUE(totalItems_, totalItems) };


    // totalPages Field Functions 
    bool hasTotalPages() const { return this->totalPages_ != nullptr;};
    void deleteTotalPages() { this->totalPages_ = nullptr;};
    inline int32_t totalPages() const { DARABONBA_PTR_GET_DEFAULT(totalPages_, 0) };
    inline DescribeDohSubDomainStatisticsSummaryResponseBody& setTotalPages(int32_t totalPages) { DARABONBA_PTR_SET_VALUE(totalPages_, totalPages) };


  protected:
    // The page number of the returned page.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of entries returned per page.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The statistics list.
    std::shared_ptr<vector<DescribeDohSubDomainStatisticsSummaryResponseBodyStatistics>> statistics_ = nullptr;
    // Total number of entries returned.
    std::shared_ptr<int32_t> totalItems_ = nullptr;
    // Total number of pages returned.
    std::shared_ptr<int32_t> totalPages_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
