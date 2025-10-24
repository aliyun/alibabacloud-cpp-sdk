// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECLOUDPHONENODESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECLOUDPHONENODESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeCloudPhoneNodesResponseBodyNodeModel.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EdsAic20230930
{
namespace Models
{
  class DescribeCloudPhoneNodesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCloudPhoneNodesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(NodeModel, nodeModel_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCloudPhoneNodesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(NodeModel, nodeModel_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeCloudPhoneNodesResponseBody() = default ;
    DescribeCloudPhoneNodesResponseBody(const DescribeCloudPhoneNodesResponseBody &) = default ;
    DescribeCloudPhoneNodesResponseBody(DescribeCloudPhoneNodesResponseBody &&) = default ;
    DescribeCloudPhoneNodesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCloudPhoneNodesResponseBody() = default ;
    DescribeCloudPhoneNodesResponseBody& operator=(const DescribeCloudPhoneNodesResponseBody &) = default ;
    DescribeCloudPhoneNodesResponseBody& operator=(DescribeCloudPhoneNodesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->maxResults_ == nullptr
        && return this->nextToken_ == nullptr && return this->nodeModel_ == nullptr && return this->requestId_ == nullptr && return this->totalCount_ == nullptr; };
    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline DescribeCloudPhoneNodesResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribeCloudPhoneNodesResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // nodeModel Field Functions 
    bool hasNodeModel() const { return this->nodeModel_ != nullptr;};
    void deleteNodeModel() { this->nodeModel_ = nullptr;};
    inline const vector<DescribeCloudPhoneNodesResponseBodyNodeModel> & nodeModel() const { DARABONBA_PTR_GET_CONST(nodeModel_, vector<DescribeCloudPhoneNodesResponseBodyNodeModel>) };
    inline vector<DescribeCloudPhoneNodesResponseBodyNodeModel> nodeModel() { DARABONBA_PTR_GET(nodeModel_, vector<DescribeCloudPhoneNodesResponseBodyNodeModel>) };
    inline DescribeCloudPhoneNodesResponseBody& setNodeModel(const vector<DescribeCloudPhoneNodesResponseBodyNodeModel> & nodeModel) { DARABONBA_PTR_SET_VALUE(nodeModel_, nodeModel) };
    inline DescribeCloudPhoneNodesResponseBody& setNodeModel(vector<DescribeCloudPhoneNodesResponseBodyNodeModel> && nodeModel) { DARABONBA_PTR_SET_RVALUE(nodeModel_, nodeModel) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeCloudPhoneNodesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeCloudPhoneNodesResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The maximum number of entries per page.
    std::shared_ptr<int32_t> maxResults_ = nullptr;
    // A pagination token. It can be used in the next request to retrieve a new page of results. Valid values:
    // 
    // *   If **NextToken** is empty, no next page exists.
    // *   ****
    std::shared_ptr<string> nextToken_ = nullptr;
    // The matrixes.
    std::shared_ptr<vector<DescribeCloudPhoneNodesResponseBodyNodeModel>> nodeModel_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The total number of cloud phone instances.
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EdsAic20230930
#endif
