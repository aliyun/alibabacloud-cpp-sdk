// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECLUSTERNODESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECLUSTERNODESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CS20151215
{
namespace Models
{
  class DescribeClusterNodesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeClusterNodesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(instanceIds, instanceIds_);
      DARABONBA_PTR_TO_JSON(nodeIps, nodeIps_);
      DARABONBA_PTR_TO_JSON(nodeLabels, nodeLabels_);
      DARABONBA_PTR_TO_JSON(nodeNames, nodeNames_);
      DARABONBA_PTR_TO_JSON(nodepool_id, nodepoolId_);
      DARABONBA_PTR_TO_JSON(pageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(pageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(state, state_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeClusterNodesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(instanceIds, instanceIds_);
      DARABONBA_PTR_FROM_JSON(nodeIps, nodeIps_);
      DARABONBA_PTR_FROM_JSON(nodeLabels, nodeLabels_);
      DARABONBA_PTR_FROM_JSON(nodeNames, nodeNames_);
      DARABONBA_PTR_FROM_JSON(nodepool_id, nodepoolId_);
      DARABONBA_PTR_FROM_JSON(pageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(pageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(state, state_);
    };
    DescribeClusterNodesRequest() = default ;
    DescribeClusterNodesRequest(const DescribeClusterNodesRequest &) = default ;
    DescribeClusterNodesRequest(DescribeClusterNodesRequest &&) = default ;
    DescribeClusterNodesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeClusterNodesRequest() = default ;
    DescribeClusterNodesRequest& operator=(const DescribeClusterNodesRequest &) = default ;
    DescribeClusterNodesRequest& operator=(DescribeClusterNodesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceIds_ == nullptr
        && this->nodeIps_ == nullptr && this->nodeLabels_ == nullptr && this->nodeNames_ == nullptr && this->nodepoolId_ == nullptr && this->pageNumber_ == nullptr
        && this->pageSize_ == nullptr && this->state_ == nullptr; };
    // instanceIds Field Functions 
    bool hasInstanceIds() const { return this->instanceIds_ != nullptr;};
    void deleteInstanceIds() { this->instanceIds_ = nullptr;};
    inline string getInstanceIds() const { DARABONBA_PTR_GET_DEFAULT(instanceIds_, "") };
    inline DescribeClusterNodesRequest& setInstanceIds(string instanceIds) { DARABONBA_PTR_SET_VALUE(instanceIds_, instanceIds) };


    // nodeIps Field Functions 
    bool hasNodeIps() const { return this->nodeIps_ != nullptr;};
    void deleteNodeIps() { this->nodeIps_ = nullptr;};
    inline string getNodeIps() const { DARABONBA_PTR_GET_DEFAULT(nodeIps_, "") };
    inline DescribeClusterNodesRequest& setNodeIps(string nodeIps) { DARABONBA_PTR_SET_VALUE(nodeIps_, nodeIps) };


    // nodeLabels Field Functions 
    bool hasNodeLabels() const { return this->nodeLabels_ != nullptr;};
    void deleteNodeLabels() { this->nodeLabels_ = nullptr;};
    inline string getNodeLabels() const { DARABONBA_PTR_GET_DEFAULT(nodeLabels_, "") };
    inline DescribeClusterNodesRequest& setNodeLabels(string nodeLabels) { DARABONBA_PTR_SET_VALUE(nodeLabels_, nodeLabels) };


    // nodeNames Field Functions 
    bool hasNodeNames() const { return this->nodeNames_ != nullptr;};
    void deleteNodeNames() { this->nodeNames_ = nullptr;};
    inline string getNodeNames() const { DARABONBA_PTR_GET_DEFAULT(nodeNames_, "") };
    inline DescribeClusterNodesRequest& setNodeNames(string nodeNames) { DARABONBA_PTR_SET_VALUE(nodeNames_, nodeNames) };


    // nodepoolId Field Functions 
    bool hasNodepoolId() const { return this->nodepoolId_ != nullptr;};
    void deleteNodepoolId() { this->nodepoolId_ = nullptr;};
    inline string getNodepoolId() const { DARABONBA_PTR_GET_DEFAULT(nodepoolId_, "") };
    inline DescribeClusterNodesRequest& setNodepoolId(string nodepoolId) { DARABONBA_PTR_SET_VALUE(nodepoolId_, nodepoolId) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline string getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, "") };
    inline DescribeClusterNodesRequest& setPageNumber(string pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline string getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, "") };
    inline DescribeClusterNodesRequest& setPageSize(string pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // state Field Functions 
    bool hasState() const { return this->state_ != nullptr;};
    void deleteState() { this->state_ = nullptr;};
    inline string getState() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
    inline DescribeClusterNodesRequest& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


  protected:
    // The instance IDs of nodes. Separate multiple IDs with commas (,).
    shared_ptr<string> instanceIds_ {};
    shared_ptr<string> nodeIps_ {};
    shared_ptr<string> nodeLabels_ {};
    shared_ptr<string> nodeNames_ {};
    // The node pool ID.
    shared_ptr<string> nodepoolId_ {};
    // The page number of the current query.
    // 
    // Default value: 1.
    shared_ptr<string> pageNumber_ {};
    // The maximum number of records that can be displayed on each page. Valid values: [1, 100].
    // 
    // Default value: 10.
    shared_ptr<string> pageSize_ {};
    // The status of cluster nodes. Used to filter by node running status. Valid values:
    // 
    // - `all`: does not filter by running status. All nodes are returned.
    // - `running`: running nodes.
    // - `removing`: nodes that are being removed.
    // - `initial`: nodes that are being initialized.
    // - `failed`: nodes that failed to be created.
    // 
    // Default value: `all`.
    shared_ptr<string> state_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CS20151215
#endif
