// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDISKREPLICAGROUPSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDISKREPLICAGROUPSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDiskReplicaGroupsResponseBodyReplicaGroups.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ebs20210730
{
namespace Models
{
  class DescribeDiskReplicaGroupsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDiskReplicaGroupsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(ReplicaGroups, replicaGroups_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDiskReplicaGroupsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(ReplicaGroups, replicaGroups_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeDiskReplicaGroupsResponseBody() = default ;
    DescribeDiskReplicaGroupsResponseBody(const DescribeDiskReplicaGroupsResponseBody &) = default ;
    DescribeDiskReplicaGroupsResponseBody(DescribeDiskReplicaGroupsResponseBody &&) = default ;
    DescribeDiskReplicaGroupsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDiskReplicaGroupsResponseBody() = default ;
    DescribeDiskReplicaGroupsResponseBody& operator=(const DescribeDiskReplicaGroupsResponseBody &) = default ;
    DescribeDiskReplicaGroupsResponseBody& operator=(DescribeDiskReplicaGroupsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->nextToken_ == nullptr
        && return this->pageNumber_ == nullptr && return this->pageSize_ == nullptr && return this->replicaGroups_ == nullptr && return this->requestId_ == nullptr && return this->totalCount_ == nullptr; };
    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribeDiskReplicaGroupsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeDiskReplicaGroupsResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeDiskReplicaGroupsResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // replicaGroups Field Functions 
    bool hasReplicaGroups() const { return this->replicaGroups_ != nullptr;};
    void deleteReplicaGroups() { this->replicaGroups_ = nullptr;};
    inline const vector<DescribeDiskReplicaGroupsResponseBodyReplicaGroups> & replicaGroups() const { DARABONBA_PTR_GET_CONST(replicaGroups_, vector<DescribeDiskReplicaGroupsResponseBodyReplicaGroups>) };
    inline vector<DescribeDiskReplicaGroupsResponseBodyReplicaGroups> replicaGroups() { DARABONBA_PTR_GET(replicaGroups_, vector<DescribeDiskReplicaGroupsResponseBodyReplicaGroups>) };
    inline DescribeDiskReplicaGroupsResponseBody& setReplicaGroups(const vector<DescribeDiskReplicaGroupsResponseBodyReplicaGroups> & replicaGroups) { DARABONBA_PTR_SET_VALUE(replicaGroups_, replicaGroups) };
    inline DescribeDiskReplicaGroupsResponseBody& setReplicaGroups(vector<DescribeDiskReplicaGroupsResponseBodyReplicaGroups> && replicaGroups) { DARABONBA_PTR_SET_RVALUE(replicaGroups_, replicaGroups) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDiskReplicaGroupsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline DescribeDiskReplicaGroupsResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // A pagination token.
    std::shared_ptr<string> nextToken_ = nullptr;
    // The page number.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of entries per page.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The information about the replication pair-consistent groups.
    std::shared_ptr<vector<DescribeDiskReplicaGroupsResponseBodyReplicaGroups>> replicaGroups_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The total number of entries returned.
    std::shared_ptr<int64_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ebs20210730
#endif
