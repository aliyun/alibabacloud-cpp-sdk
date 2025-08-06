// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECAPACITYRESERVATIONINSTANCESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECAPACITYRESERVATIONINSTANCESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeCapacityReservationInstancesResponseBodyCapacityReservationItem.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribeCapacityReservationInstancesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCapacityReservationInstancesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CapacityReservationItem, capacityReservationItem_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCapacityReservationInstancesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CapacityReservationItem, capacityReservationItem_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeCapacityReservationInstancesResponseBody() = default ;
    DescribeCapacityReservationInstancesResponseBody(const DescribeCapacityReservationInstancesResponseBody &) = default ;
    DescribeCapacityReservationInstancesResponseBody(DescribeCapacityReservationInstancesResponseBody &&) = default ;
    DescribeCapacityReservationInstancesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCapacityReservationInstancesResponseBody() = default ;
    DescribeCapacityReservationInstancesResponseBody& operator=(const DescribeCapacityReservationInstancesResponseBody &) = default ;
    DescribeCapacityReservationInstancesResponseBody& operator=(DescribeCapacityReservationInstancesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->capacityReservationItem_ != nullptr
        && this->maxResults_ != nullptr && this->nextToken_ != nullptr && this->requestId_ != nullptr && this->totalCount_ != nullptr; };
    // capacityReservationItem Field Functions 
    bool hasCapacityReservationItem() const { return this->capacityReservationItem_ != nullptr;};
    void deleteCapacityReservationItem() { this->capacityReservationItem_ = nullptr;};
    inline const DescribeCapacityReservationInstancesResponseBodyCapacityReservationItem & capacityReservationItem() const { DARABONBA_PTR_GET_CONST(capacityReservationItem_, DescribeCapacityReservationInstancesResponseBodyCapacityReservationItem) };
    inline DescribeCapacityReservationInstancesResponseBodyCapacityReservationItem capacityReservationItem() { DARABONBA_PTR_GET(capacityReservationItem_, DescribeCapacityReservationInstancesResponseBodyCapacityReservationItem) };
    inline DescribeCapacityReservationInstancesResponseBody& setCapacityReservationItem(const DescribeCapacityReservationInstancesResponseBodyCapacityReservationItem & capacityReservationItem) { DARABONBA_PTR_SET_VALUE(capacityReservationItem_, capacityReservationItem) };
    inline DescribeCapacityReservationInstancesResponseBody& setCapacityReservationItem(DescribeCapacityReservationInstancesResponseBodyCapacityReservationItem && capacityReservationItem) { DARABONBA_PTR_SET_RVALUE(capacityReservationItem_, capacityReservationItem) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline DescribeCapacityReservationInstancesResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribeCapacityReservationInstancesResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeCapacityReservationInstancesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeCapacityReservationInstancesResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // Details about the instances that match the capacity reservation.
    std::shared_ptr<DescribeCapacityReservationInstancesResponseBodyCapacityReservationItem> capacityReservationItem_ = nullptr;
    // The maximum number of entries per page.
    std::shared_ptr<int32_t> maxResults_ = nullptr;
    // A pagination token. It can be used in the next request to retrieve a new page of results.
    std::shared_ptr<string> nextToken_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The total number of entries returned.
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
