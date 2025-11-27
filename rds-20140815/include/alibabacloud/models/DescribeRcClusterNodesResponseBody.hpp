// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERCCLUSTERNODESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERCCLUSTERNODESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeRCClusterNodesResponseBodyNodes.hpp>
#include <alibabacloud/models/DescribeRCClusterNodesResponseBodyPage.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class DescribeRCClusterNodesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRCClusterNodesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Nodes, nodes_);
      DARABONBA_PTR_TO_JSON(Page, page_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRCClusterNodesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Nodes, nodes_);
      DARABONBA_PTR_FROM_JSON(Page, page_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeRCClusterNodesResponseBody() = default ;
    DescribeRCClusterNodesResponseBody(const DescribeRCClusterNodesResponseBody &) = default ;
    DescribeRCClusterNodesResponseBody(DescribeRCClusterNodesResponseBody &&) = default ;
    DescribeRCClusterNodesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRCClusterNodesResponseBody() = default ;
    DescribeRCClusterNodesResponseBody& operator=(const DescribeRCClusterNodesResponseBody &) = default ;
    DescribeRCClusterNodesResponseBody& operator=(DescribeRCClusterNodesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->nodes_ == nullptr
        && return this->page_ == nullptr && return this->requestId_ == nullptr; };
    // nodes Field Functions 
    bool hasNodes() const { return this->nodes_ != nullptr;};
    void deleteNodes() { this->nodes_ = nullptr;};
    inline const vector<DescribeRCClusterNodesResponseBodyNodes> & nodes() const { DARABONBA_PTR_GET_CONST(nodes_, vector<DescribeRCClusterNodesResponseBodyNodes>) };
    inline vector<DescribeRCClusterNodesResponseBodyNodes> nodes() { DARABONBA_PTR_GET(nodes_, vector<DescribeRCClusterNodesResponseBodyNodes>) };
    inline DescribeRCClusterNodesResponseBody& setNodes(const vector<DescribeRCClusterNodesResponseBodyNodes> & nodes) { DARABONBA_PTR_SET_VALUE(nodes_, nodes) };
    inline DescribeRCClusterNodesResponseBody& setNodes(vector<DescribeRCClusterNodesResponseBodyNodes> && nodes) { DARABONBA_PTR_SET_RVALUE(nodes_, nodes) };


    // page Field Functions 
    bool hasPage() const { return this->page_ != nullptr;};
    void deletePage() { this->page_ = nullptr;};
    inline const DescribeRCClusterNodesResponseBodyPage & page() const { DARABONBA_PTR_GET_CONST(page_, DescribeRCClusterNodesResponseBodyPage) };
    inline DescribeRCClusterNodesResponseBodyPage page() { DARABONBA_PTR_GET(page_, DescribeRCClusterNodesResponseBodyPage) };
    inline DescribeRCClusterNodesResponseBody& setPage(const DescribeRCClusterNodesResponseBodyPage & page) { DARABONBA_PTR_SET_VALUE(page_, page) };
    inline DescribeRCClusterNodesResponseBody& setPage(DescribeRCClusterNodesResponseBodyPage && page) { DARABONBA_PTR_SET_RVALUE(page_, page) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeRCClusterNodesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The details of the nodes.
    std::shared_ptr<vector<DescribeRCClusterNodesResponseBodyNodes>> nodes_ = nullptr;
    // The pagination information.
    std::shared_ptr<DescribeRCClusterNodesResponseBodyPage> page_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
