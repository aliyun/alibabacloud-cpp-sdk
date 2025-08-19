// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECLUSTERNODESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECLUSTERNODESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeClusterNodesResponseBodyNodes.hpp>
#include <alibabacloud/models/DescribeClusterNodesResponseBodyPage.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CS20151215
{
namespace Models
{
  class DescribeClusterNodesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeClusterNodesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(nodes, nodes_);
      DARABONBA_PTR_TO_JSON(page, page_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeClusterNodesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(nodes, nodes_);
      DARABONBA_PTR_FROM_JSON(page, page_);
    };
    DescribeClusterNodesResponseBody() = default ;
    DescribeClusterNodesResponseBody(const DescribeClusterNodesResponseBody &) = default ;
    DescribeClusterNodesResponseBody(DescribeClusterNodesResponseBody &&) = default ;
    DescribeClusterNodesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeClusterNodesResponseBody() = default ;
    DescribeClusterNodesResponseBody& operator=(const DescribeClusterNodesResponseBody &) = default ;
    DescribeClusterNodesResponseBody& operator=(DescribeClusterNodesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->nodes_ != nullptr
        && this->page_ != nullptr; };
    // nodes Field Functions 
    bool hasNodes() const { return this->nodes_ != nullptr;};
    void deleteNodes() { this->nodes_ = nullptr;};
    inline const vector<DescribeClusterNodesResponseBodyNodes> & nodes() const { DARABONBA_PTR_GET_CONST(nodes_, vector<DescribeClusterNodesResponseBodyNodes>) };
    inline vector<DescribeClusterNodesResponseBodyNodes> nodes() { DARABONBA_PTR_GET(nodes_, vector<DescribeClusterNodesResponseBodyNodes>) };
    inline DescribeClusterNodesResponseBody& setNodes(const vector<DescribeClusterNodesResponseBodyNodes> & nodes) { DARABONBA_PTR_SET_VALUE(nodes_, nodes) };
    inline DescribeClusterNodesResponseBody& setNodes(vector<DescribeClusterNodesResponseBodyNodes> && nodes) { DARABONBA_PTR_SET_RVALUE(nodes_, nodes) };


    // page Field Functions 
    bool hasPage() const { return this->page_ != nullptr;};
    void deletePage() { this->page_ = nullptr;};
    inline const DescribeClusterNodesResponseBodyPage & page() const { DARABONBA_PTR_GET_CONST(page_, DescribeClusterNodesResponseBodyPage) };
    inline DescribeClusterNodesResponseBodyPage page() { DARABONBA_PTR_GET(page_, DescribeClusterNodesResponseBodyPage) };
    inline DescribeClusterNodesResponseBody& setPage(const DescribeClusterNodesResponseBodyPage & page) { DARABONBA_PTR_SET_VALUE(page_, page) };
    inline DescribeClusterNodesResponseBody& setPage(DescribeClusterNodesResponseBodyPage && page) { DARABONBA_PTR_SET_RVALUE(page_, page) };


  protected:
    // The details of the nodes in the cluster.
    std::shared_ptr<vector<DescribeClusterNodesResponseBodyNodes>> nodes_ = nullptr;
    // The pagination information.
    std::shared_ptr<DescribeClusterNodesResponseBodyPage> page_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CS20151215
#endif
