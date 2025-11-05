// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEREPLICAGROUPDRILLSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEREPLICAGROUPDRILLSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeReplicaGroupDrillsResponseBodyDrills.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ebs20210730
{
namespace Models
{
  class DescribeReplicaGroupDrillsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeReplicaGroupDrillsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Drills, drills_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeReplicaGroupDrillsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Drills, drills_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeReplicaGroupDrillsResponseBody() = default ;
    DescribeReplicaGroupDrillsResponseBody(const DescribeReplicaGroupDrillsResponseBody &) = default ;
    DescribeReplicaGroupDrillsResponseBody(DescribeReplicaGroupDrillsResponseBody &&) = default ;
    DescribeReplicaGroupDrillsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeReplicaGroupDrillsResponseBody() = default ;
    DescribeReplicaGroupDrillsResponseBody& operator=(const DescribeReplicaGroupDrillsResponseBody &) = default ;
    DescribeReplicaGroupDrillsResponseBody& operator=(DescribeReplicaGroupDrillsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->drills_ == nullptr
        && return this->nextToken_ == nullptr && return this->pageNumber_ == nullptr && return this->pageSize_ == nullptr && return this->requestId_ == nullptr && return this->totalCount_ == nullptr; };
    // drills Field Functions 
    bool hasDrills() const { return this->drills_ != nullptr;};
    void deleteDrills() { this->drills_ = nullptr;};
    inline const vector<DescribeReplicaGroupDrillsResponseBodyDrills> & drills() const { DARABONBA_PTR_GET_CONST(drills_, vector<DescribeReplicaGroupDrillsResponseBodyDrills>) };
    inline vector<DescribeReplicaGroupDrillsResponseBodyDrills> drills() { DARABONBA_PTR_GET(drills_, vector<DescribeReplicaGroupDrillsResponseBodyDrills>) };
    inline DescribeReplicaGroupDrillsResponseBody& setDrills(const vector<DescribeReplicaGroupDrillsResponseBodyDrills> & drills) { DARABONBA_PTR_SET_VALUE(drills_, drills) };
    inline DescribeReplicaGroupDrillsResponseBody& setDrills(vector<DescribeReplicaGroupDrillsResponseBodyDrills> && drills) { DARABONBA_PTR_SET_RVALUE(drills_, drills) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribeReplicaGroupDrillsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeReplicaGroupDrillsResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeReplicaGroupDrillsResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeReplicaGroupDrillsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline DescribeReplicaGroupDrillsResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The information of disaster recovery drills that were performed on the replication pair-consistent group.
    std::shared_ptr<vector<DescribeReplicaGroupDrillsResponseBodyDrills>> drills_ = nullptr;
    // A pagination token. It can be used in the next request to retrieve a new page of results. If NextToken is empty, no next page exists.
    std::shared_ptr<string> nextToken_ = nullptr;
    // The page number.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of entries per page.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The total number of entries returned.
    std::shared_ptr<int64_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ebs20210730
#endif
