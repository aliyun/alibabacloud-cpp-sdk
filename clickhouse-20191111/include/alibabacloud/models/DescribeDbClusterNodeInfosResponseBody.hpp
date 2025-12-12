// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDBCLUSTERNODEINFOSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDBCLUSTERNODEINFOSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDBClusterNodeInfosResponseBodyNodeInfos.hpp>
#include <alibabacloud/models/DescribeDBClusterNodeInfosResponseBodyZkNodeInfos.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Clickhouse20191111
{
namespace Models
{
  class DescribeDBClusterNodeInfosResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDBClusterNodeInfosResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(NodeInfos, nodeInfos_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalNodeCount, totalNodeCount_);
      DARABONBA_PTR_TO_JSON(ZkNodeInfos, zkNodeInfos_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDBClusterNodeInfosResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(NodeInfos, nodeInfos_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalNodeCount, totalNodeCount_);
      DARABONBA_PTR_FROM_JSON(ZkNodeInfos, zkNodeInfos_);
    };
    DescribeDBClusterNodeInfosResponseBody() = default ;
    DescribeDBClusterNodeInfosResponseBody(const DescribeDBClusterNodeInfosResponseBody &) = default ;
    DescribeDBClusterNodeInfosResponseBody(DescribeDBClusterNodeInfosResponseBody &&) = default ;
    DescribeDBClusterNodeInfosResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDBClusterNodeInfosResponseBody() = default ;
    DescribeDBClusterNodeInfosResponseBody& operator=(const DescribeDBClusterNodeInfosResponseBody &) = default ;
    DescribeDBClusterNodeInfosResponseBody& operator=(DescribeDBClusterNodeInfosResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->nodeInfos_ == nullptr
        && return this->pageNumber_ == nullptr && return this->pageSize_ == nullptr && return this->requestId_ == nullptr && return this->totalNodeCount_ == nullptr && return this->zkNodeInfos_ == nullptr; };
    // nodeInfos Field Functions 
    bool hasNodeInfos() const { return this->nodeInfos_ != nullptr;};
    void deleteNodeInfos() { this->nodeInfos_ = nullptr;};
    inline const vector<DescribeDBClusterNodeInfosResponseBodyNodeInfos> & nodeInfos() const { DARABONBA_PTR_GET_CONST(nodeInfos_, vector<DescribeDBClusterNodeInfosResponseBodyNodeInfos>) };
    inline vector<DescribeDBClusterNodeInfosResponseBodyNodeInfos> nodeInfos() { DARABONBA_PTR_GET(nodeInfos_, vector<DescribeDBClusterNodeInfosResponseBodyNodeInfos>) };
    inline DescribeDBClusterNodeInfosResponseBody& setNodeInfos(const vector<DescribeDBClusterNodeInfosResponseBodyNodeInfos> & nodeInfos) { DARABONBA_PTR_SET_VALUE(nodeInfos_, nodeInfos) };
    inline DescribeDBClusterNodeInfosResponseBody& setNodeInfos(vector<DescribeDBClusterNodeInfosResponseBodyNodeInfos> && nodeInfos) { DARABONBA_PTR_SET_RVALUE(nodeInfos_, nodeInfos) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeDBClusterNodeInfosResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeDBClusterNodeInfosResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDBClusterNodeInfosResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalNodeCount Field Functions 
    bool hasTotalNodeCount() const { return this->totalNodeCount_ != nullptr;};
    void deleteTotalNodeCount() { this->totalNodeCount_ = nullptr;};
    inline int32_t totalNodeCount() const { DARABONBA_PTR_GET_DEFAULT(totalNodeCount_, 0) };
    inline DescribeDBClusterNodeInfosResponseBody& setTotalNodeCount(int32_t totalNodeCount) { DARABONBA_PTR_SET_VALUE(totalNodeCount_, totalNodeCount) };


    // zkNodeInfos Field Functions 
    bool hasZkNodeInfos() const { return this->zkNodeInfos_ != nullptr;};
    void deleteZkNodeInfos() { this->zkNodeInfos_ = nullptr;};
    inline const vector<DescribeDBClusterNodeInfosResponseBodyZkNodeInfos> & zkNodeInfos() const { DARABONBA_PTR_GET_CONST(zkNodeInfos_, vector<DescribeDBClusterNodeInfosResponseBodyZkNodeInfos>) };
    inline vector<DescribeDBClusterNodeInfosResponseBodyZkNodeInfos> zkNodeInfos() { DARABONBA_PTR_GET(zkNodeInfos_, vector<DescribeDBClusterNodeInfosResponseBodyZkNodeInfos>) };
    inline DescribeDBClusterNodeInfosResponseBody& setZkNodeInfos(const vector<DescribeDBClusterNodeInfosResponseBodyZkNodeInfos> & zkNodeInfos) { DARABONBA_PTR_SET_VALUE(zkNodeInfos_, zkNodeInfos) };
    inline DescribeDBClusterNodeInfosResponseBody& setZkNodeInfos(vector<DescribeDBClusterNodeInfosResponseBodyZkNodeInfos> && zkNodeInfos) { DARABONBA_PTR_SET_RVALUE(zkNodeInfos_, zkNodeInfos) };


  protected:
    std::shared_ptr<vector<DescribeDBClusterNodeInfosResponseBodyNodeInfos>> nodeInfos_ = nullptr;
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<int32_t> totalNodeCount_ = nullptr;
    std::shared_ptr<vector<DescribeDBClusterNodeInfosResponseBodyZkNodeInfos>> zkNodeInfos_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Clickhouse20191111
#endif
