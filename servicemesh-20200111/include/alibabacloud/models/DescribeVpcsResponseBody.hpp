// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVPCSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVPCSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeVpcsResponseBodyVpcs.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Servicemesh20200111
{
namespace Models
{
  class DescribeVpcsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVpcsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_TO_JSON(Vpcs, vpcs_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVpcsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_FROM_JSON(Vpcs, vpcs_);
    };
    DescribeVpcsResponseBody() = default ;
    DescribeVpcsResponseBody(const DescribeVpcsResponseBody &) = default ;
    DescribeVpcsResponseBody(DescribeVpcsResponseBody &&) = default ;
    DescribeVpcsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVpcsResponseBody() = default ;
    DescribeVpcsResponseBody& operator=(const DescribeVpcsResponseBody &) = default ;
    DescribeVpcsResponseBody& operator=(DescribeVpcsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->maxResults_ == nullptr
        && return this->nextToken_ == nullptr && return this->requestId_ == nullptr && return this->totalCount_ == nullptr && return this->vpcs_ == nullptr; };
    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline DescribeVpcsResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribeVpcsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeVpcsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeVpcsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    // vpcs Field Functions 
    bool hasVpcs() const { return this->vpcs_ != nullptr;};
    void deleteVpcs() { this->vpcs_ = nullptr;};
    inline const vector<DescribeVpcsResponseBodyVpcs> & vpcs() const { DARABONBA_PTR_GET_CONST(vpcs_, vector<DescribeVpcsResponseBodyVpcs>) };
    inline vector<DescribeVpcsResponseBodyVpcs> vpcs() { DARABONBA_PTR_GET(vpcs_, vector<DescribeVpcsResponseBodyVpcs>) };
    inline DescribeVpcsResponseBody& setVpcs(const vector<DescribeVpcsResponseBodyVpcs> & vpcs) { DARABONBA_PTR_SET_VALUE(vpcs_, vpcs) };
    inline DescribeVpcsResponseBody& setVpcs(vector<DescribeVpcsResponseBodyVpcs> && vpcs) { DARABONBA_PTR_SET_RVALUE(vpcs_, vpcs) };


  protected:
    // The maximum number of entries returned on a single page.
    std::shared_ptr<int32_t> maxResults_ = nullptr;
    // The token that marks the end of the current returned page. If this parameter is empty, it indicates that you have retrieved all the data.
    // 
    // This parameter is required.
    std::shared_ptr<string> nextToken_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The total number of entries returned. By default, this parameter is not returned.
    std::shared_ptr<int32_t> totalCount_ = nullptr;
    // The list of VPCs that are available in the specified region.
    std::shared_ptr<vector<DescribeVpcsResponseBodyVpcs>> vpcs_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Servicemesh20200111
#endif
