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
      DARABONBA_PTR_TO_JSON(nodepool_id, nodepoolId_);
      DARABONBA_PTR_TO_JSON(pageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(pageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(state, state_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeClusterNodesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(instanceIds, instanceIds_);
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
    virtual bool empty() const override { this->instanceIds_ != nullptr
        && this->nodepoolId_ != nullptr && this->pageNumber_ != nullptr && this->pageSize_ != nullptr && this->state_ != nullptr; };
    // instanceIds Field Functions 
    bool hasInstanceIds() const { return this->instanceIds_ != nullptr;};
    void deleteInstanceIds() { this->instanceIds_ = nullptr;};
    inline string instanceIds() const { DARABONBA_PTR_GET_DEFAULT(instanceIds_, "") };
    inline DescribeClusterNodesRequest& setInstanceIds(string instanceIds) { DARABONBA_PTR_SET_VALUE(instanceIds_, instanceIds) };


    // nodepoolId Field Functions 
    bool hasNodepoolId() const { return this->nodepoolId_ != nullptr;};
    void deleteNodepoolId() { this->nodepoolId_ = nullptr;};
    inline string nodepoolId() const { DARABONBA_PTR_GET_DEFAULT(nodepoolId_, "") };
    inline DescribeClusterNodesRequest& setNodepoolId(string nodepoolId) { DARABONBA_PTR_SET_VALUE(nodepoolId_, nodepoolId) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline string pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, "") };
    inline DescribeClusterNodesRequest& setPageNumber(string pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline string pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, "") };
    inline DescribeClusterNodesRequest& setPageSize(string pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // state Field Functions 
    bool hasState() const { return this->state_ != nullptr;};
    void deleteState() { this->state_ = nullptr;};
    inline string state() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
    inline DescribeClusterNodesRequest& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


  protected:
    // The IDs of the nodes that you want to query. Separate multiple node IDs with commas (,).
    std::shared_ptr<string> instanceIds_ = nullptr;
    // The node pool ID.
    std::shared_ptr<string> nodepoolId_ = nullptr;
    // The page number.
    // 
    // Default value: 1.
    std::shared_ptr<string> pageNumber_ = nullptr;
    // The number of entries per page. Valid values: 1 to 100.
    // 
    // Default value: 10.
    std::shared_ptr<string> pageSize_ = nullptr;
    // The node state that you want to use to filter nodes. Valid values:
    // 
    // *   `all`: query nodes in the following four states.
    // *   `running`: query nodes in the running state.
    // *   `removing`: query nodes that are being removed.
    // *   `initial`: query nodes that are being initialized.
    // *   `failed`: query nodes that fail to be created.
    // 
    // Default value: `all`.
    std::shared_ptr<string> state_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CS20151215
#endif
