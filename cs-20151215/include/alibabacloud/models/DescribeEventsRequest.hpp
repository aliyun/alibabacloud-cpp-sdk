// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEEVENTSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEEVENTSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CS20151215
{
namespace Models
{
  class DescribeEventsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeEventsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(cluster_id, clusterId_);
      DARABONBA_PTR_TO_JSON(max_results, maxResults_);
      DARABONBA_PTR_TO_JSON(next_token, nextToken_);
      DARABONBA_PTR_TO_JSON(page_number, pageNumber_);
      DARABONBA_PTR_TO_JSON(page_size, pageSize_);
      DARABONBA_PTR_TO_JSON(type, type_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeEventsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(cluster_id, clusterId_);
      DARABONBA_PTR_FROM_JSON(max_results, maxResults_);
      DARABONBA_PTR_FROM_JSON(next_token, nextToken_);
      DARABONBA_PTR_FROM_JSON(page_number, pageNumber_);
      DARABONBA_PTR_FROM_JSON(page_size, pageSize_);
      DARABONBA_PTR_FROM_JSON(type, type_);
    };
    DescribeEventsRequest() = default ;
    DescribeEventsRequest(const DescribeEventsRequest &) = default ;
    DescribeEventsRequest(DescribeEventsRequest &&) = default ;
    DescribeEventsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeEventsRequest() = default ;
    DescribeEventsRequest& operator=(const DescribeEventsRequest &) = default ;
    DescribeEventsRequest& operator=(DescribeEventsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clusterId_ == nullptr
        && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->type_ == nullptr; };
    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string getClusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline DescribeEventsRequest& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline DescribeEventsRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribeEventsRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int64_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0L) };
    inline DescribeEventsRequest& setPageNumber(int64_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline DescribeEventsRequest& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline DescribeEventsRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The cluster ID.
    shared_ptr<string> clusterId_ {};
    // The maximum number of results to return.
    shared_ptr<int32_t> maxResults_ {};
    // The pagination token. Set this parameter to the value of `NextToken` returned by the previous API call.
    shared_ptr<string> nextToken_ {};
    // The number of the page to return.
    shared_ptr<int64_t> pageNumber_ {};
    // The maximum number of results per page.
    // 
    // Valid values: [1,100].
    // 
    // Default: 50.
    shared_ptr<int64_t> pageSize_ {};
    // The event type. If you do not specify this parameter, events of all types are returned. Valid values:
    // 
    // - `cluster_create`: Create a cluster.
    // 
    // - `cluster_scaleout`: Scale out a cluster.
    // 
    // - `cluster_attach`: Attach an existing node.
    // 
    // - `cluster_delete`: Delete a cluster.
    // 
    // - `cluster_upgrade`: Upgrade a cluster.
    // 
    // - `cluster_migrate`: Migrate a cluster.
    // 
    // - `cluster_node_delete`: Remove a node.
    // 
    // - `cluster_node_drain`: Drain a node.
    // 
    // - `cluster_modify`: Modify a cluster.
    // 
    // - `cluster_configuration_modify`: Modify the control plane configuration of a cluster.
    // 
    // - `cluster_addon_install`: Install an add-on.
    // 
    // - `cluster_addon_upgrade`: Upgrade an add-on.
    // 
    // - `cluster_addon_uninstall`: Uninstall an add-on.
    // 
    // - `runtime_upgrade`: Upgrade the runtime.
    // 
    // - `nodepool_upgrade`: Upgrade a node pool.
    // 
    // - `nodepool_update`: Update a node pool.
    shared_ptr<string> type_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CS20151215
#endif
