// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECENCHILDINSTANCEROUTEENTRIESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECENCHILDINSTANCEROUTEENTRIESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeCenChildInstanceRouteEntriesResponseBodyCenRouteEntries.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cbn20170912
{
namespace Models
{
  class DescribeCenChildInstanceRouteEntriesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCenChildInstanceRouteEntriesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CenRouteEntries, cenRouteEntries_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCenChildInstanceRouteEntriesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CenRouteEntries, cenRouteEntries_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeCenChildInstanceRouteEntriesResponseBody() = default ;
    DescribeCenChildInstanceRouteEntriesResponseBody(const DescribeCenChildInstanceRouteEntriesResponseBody &) = default ;
    DescribeCenChildInstanceRouteEntriesResponseBody(DescribeCenChildInstanceRouteEntriesResponseBody &&) = default ;
    DescribeCenChildInstanceRouteEntriesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCenChildInstanceRouteEntriesResponseBody() = default ;
    DescribeCenChildInstanceRouteEntriesResponseBody& operator=(const DescribeCenChildInstanceRouteEntriesResponseBody &) = default ;
    DescribeCenChildInstanceRouteEntriesResponseBody& operator=(DescribeCenChildInstanceRouteEntriesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->cenRouteEntries_ != nullptr
        && this->pageNumber_ != nullptr && this->pageSize_ != nullptr && this->requestId_ != nullptr && this->totalCount_ != nullptr; };
    // cenRouteEntries Field Functions 
    bool hasCenRouteEntries() const { return this->cenRouteEntries_ != nullptr;};
    void deleteCenRouteEntries() { this->cenRouteEntries_ = nullptr;};
    inline const DescribeCenChildInstanceRouteEntriesResponseBodyCenRouteEntries & cenRouteEntries() const { DARABONBA_PTR_GET_CONST(cenRouteEntries_, DescribeCenChildInstanceRouteEntriesResponseBodyCenRouteEntries) };
    inline DescribeCenChildInstanceRouteEntriesResponseBodyCenRouteEntries cenRouteEntries() { DARABONBA_PTR_GET(cenRouteEntries_, DescribeCenChildInstanceRouteEntriesResponseBodyCenRouteEntries) };
    inline DescribeCenChildInstanceRouteEntriesResponseBody& setCenRouteEntries(const DescribeCenChildInstanceRouteEntriesResponseBodyCenRouteEntries & cenRouteEntries) { DARABONBA_PTR_SET_VALUE(cenRouteEntries_, cenRouteEntries) };
    inline DescribeCenChildInstanceRouteEntriesResponseBody& setCenRouteEntries(DescribeCenChildInstanceRouteEntriesResponseBodyCenRouteEntries && cenRouteEntries) { DARABONBA_PTR_SET_RVALUE(cenRouteEntries_, cenRouteEntries) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeCenChildInstanceRouteEntriesResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeCenChildInstanceRouteEntriesResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeCenChildInstanceRouteEntriesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeCenChildInstanceRouteEntriesResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The information about the route.
    std::shared_ptr<DescribeCenChildInstanceRouteEntriesResponseBodyCenRouteEntries> cenRouteEntries_ = nullptr;
    // The page number of the returned page.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of entries returned per page.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The total number of entries returned.
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cbn20170912
#endif
