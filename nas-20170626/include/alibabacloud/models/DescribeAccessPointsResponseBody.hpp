// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEACCESSPOINTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEACCESSPOINTSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeAccessPointsResponseBodyAccessPoints.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace NAS20170626
{
namespace Models
{
  class DescribeAccessPointsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAccessPointsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccessPoints, accessPoints_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAccessPointsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessPoints, accessPoints_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeAccessPointsResponseBody() = default ;
    DescribeAccessPointsResponseBody(const DescribeAccessPointsResponseBody &) = default ;
    DescribeAccessPointsResponseBody(DescribeAccessPointsResponseBody &&) = default ;
    DescribeAccessPointsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAccessPointsResponseBody() = default ;
    DescribeAccessPointsResponseBody& operator=(const DescribeAccessPointsResponseBody &) = default ;
    DescribeAccessPointsResponseBody& operator=(DescribeAccessPointsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->accessPoints_ != nullptr
        && this->nextToken_ != nullptr && this->requestId_ != nullptr && this->totalCount_ != nullptr; };
    // accessPoints Field Functions 
    bool hasAccessPoints() const { return this->accessPoints_ != nullptr;};
    void deleteAccessPoints() { this->accessPoints_ = nullptr;};
    inline const vector<DescribeAccessPointsResponseBodyAccessPoints> & accessPoints() const { DARABONBA_PTR_GET_CONST(accessPoints_, vector<DescribeAccessPointsResponseBodyAccessPoints>) };
    inline vector<DescribeAccessPointsResponseBodyAccessPoints> accessPoints() { DARABONBA_PTR_GET(accessPoints_, vector<DescribeAccessPointsResponseBodyAccessPoints>) };
    inline DescribeAccessPointsResponseBody& setAccessPoints(const vector<DescribeAccessPointsResponseBodyAccessPoints> & accessPoints) { DARABONBA_PTR_SET_VALUE(accessPoints_, accessPoints) };
    inline DescribeAccessPointsResponseBody& setAccessPoints(vector<DescribeAccessPointsResponseBodyAccessPoints> && accessPoints) { DARABONBA_PTR_SET_RVALUE(accessPoints_, accessPoints) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribeAccessPointsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeAccessPointsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeAccessPointsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The information about the access point.
    std::shared_ptr<vector<DescribeAccessPointsResponseBodyAccessPoints>> accessPoints_ = nullptr;
    // The pagination token that is used in the next request to retrieve a new page of results. You do not need to specify this parameter for the first request. You must specify the token that is obtained from the previous query as the value of NextToken.
    std::shared_ptr<string> nextToken_ = nullptr;
    // The request ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> requestId_ = nullptr;
    // The total number of access points.
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace NAS20170626
#endif
