// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTNODESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTNODESREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EHPC20240730
{
namespace Models
{
  class ListNodesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListNodesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(Hostnames, hostnames_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(PrivateIpAddress, privateIpAddress_);
      DARABONBA_PTR_TO_JSON(QueueNames, queueNames_);
      DARABONBA_PTR_TO_JSON(Sequence, sequence_);
      DARABONBA_PTR_TO_JSON(SortBy, sortBy_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, ListNodesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(Hostnames, hostnames_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(PrivateIpAddress, privateIpAddress_);
      DARABONBA_PTR_FROM_JSON(QueueNames, queueNames_);
      DARABONBA_PTR_FROM_JSON(Sequence, sequence_);
      DARABONBA_PTR_FROM_JSON(SortBy, sortBy_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    ListNodesRequest() = default ;
    ListNodesRequest(const ListNodesRequest &) = default ;
    ListNodesRequest(ListNodesRequest &&) = default ;
    ListNodesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListNodesRequest() = default ;
    ListNodesRequest& operator=(const ListNodesRequest &) = default ;
    ListNodesRequest& operator=(ListNodesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clusterId_ == nullptr
        && this->hostnames_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->privateIpAddress_ == nullptr && this->queueNames_ == nullptr
        && this->sequence_ == nullptr && this->sortBy_ == nullptr && this->status_ == nullptr; };
    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string getClusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline ListNodesRequest& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // hostnames Field Functions 
    bool hasHostnames() const { return this->hostnames_ != nullptr;};
    void deleteHostnames() { this->hostnames_ = nullptr;};
    inline const vector<string> & getHostnames() const { DARABONBA_PTR_GET_CONST(hostnames_, vector<string>) };
    inline vector<string> getHostnames() { DARABONBA_PTR_GET(hostnames_, vector<string>) };
    inline ListNodesRequest& setHostnames(const vector<string> & hostnames) { DARABONBA_PTR_SET_VALUE(hostnames_, hostnames) };
    inline ListNodesRequest& setHostnames(vector<string> && hostnames) { DARABONBA_PTR_SET_RVALUE(hostnames_, hostnames) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListNodesRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListNodesRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // privateIpAddress Field Functions 
    bool hasPrivateIpAddress() const { return this->privateIpAddress_ != nullptr;};
    void deletePrivateIpAddress() { this->privateIpAddress_ = nullptr;};
    inline const vector<string> & getPrivateIpAddress() const { DARABONBA_PTR_GET_CONST(privateIpAddress_, vector<string>) };
    inline vector<string> getPrivateIpAddress() { DARABONBA_PTR_GET(privateIpAddress_, vector<string>) };
    inline ListNodesRequest& setPrivateIpAddress(const vector<string> & privateIpAddress) { DARABONBA_PTR_SET_VALUE(privateIpAddress_, privateIpAddress) };
    inline ListNodesRequest& setPrivateIpAddress(vector<string> && privateIpAddress) { DARABONBA_PTR_SET_RVALUE(privateIpAddress_, privateIpAddress) };


    // queueNames Field Functions 
    bool hasQueueNames() const { return this->queueNames_ != nullptr;};
    void deleteQueueNames() { this->queueNames_ = nullptr;};
    inline const vector<string> & getQueueNames() const { DARABONBA_PTR_GET_CONST(queueNames_, vector<string>) };
    inline vector<string> getQueueNames() { DARABONBA_PTR_GET(queueNames_, vector<string>) };
    inline ListNodesRequest& setQueueNames(const vector<string> & queueNames) { DARABONBA_PTR_SET_VALUE(queueNames_, queueNames) };
    inline ListNodesRequest& setQueueNames(vector<string> && queueNames) { DARABONBA_PTR_SET_RVALUE(queueNames_, queueNames) };


    // sequence Field Functions 
    bool hasSequence() const { return this->sequence_ != nullptr;};
    void deleteSequence() { this->sequence_ = nullptr;};
    inline string getSequence() const { DARABONBA_PTR_GET_DEFAULT(sequence_, "") };
    inline ListNodesRequest& setSequence(string sequence) { DARABONBA_PTR_SET_VALUE(sequence_, sequence) };


    // sortBy Field Functions 
    bool hasSortBy() const { return this->sortBy_ != nullptr;};
    void deleteSortBy() { this->sortBy_ = nullptr;};
    inline string getSortBy() const { DARABONBA_PTR_GET_DEFAULT(sortBy_, "") };
    inline ListNodesRequest& setSortBy(string sortBy) { DARABONBA_PTR_SET_VALUE(sortBy_, sortBy) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline const vector<string> & getStatus() const { DARABONBA_PTR_GET_CONST(status_, vector<string>) };
    inline vector<string> getStatus() { DARABONBA_PTR_GET(status_, vector<string>) };
    inline ListNodesRequest& setStatus(const vector<string> & status) { DARABONBA_PTR_SET_VALUE(status_, status) };
    inline ListNodesRequest& setStatus(vector<string> && status) { DARABONBA_PTR_SET_RVALUE(status_, status) };


  protected:
    // The cluster ID. You can call the [ListClusters](https://help.aliyun.com/document_detail/87116.html) operation to query the cluster ID.
    shared_ptr<string> clusterId_ {};
    // The hostnames of the compute nodes that you want to query.
    shared_ptr<vector<string>> hostnames_ {};
    // The page number of the page to return.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries per page.
    shared_ptr<int32_t> pageSize_ {};
    // The IP addresses of the compute nodes that you want to query.
    shared_ptr<vector<string>> privateIpAddress_ {};
    // The queues to which the nodes belong.
    shared_ptr<vector<string>> queueNames_ {};
    // Specifies whether the results are sorted in ascending or descending order. Valid values:
    // 
    // *   Forward: ascending
    // *   Backward: descending
    // 
    // Default value: Forward.
    shared_ptr<string> sequence_ {};
    // The sorting method of the node list. Valid values:
    // 
    // *   AddedTime: sorts the nodes by the time that they were added.
    // *   HostName: sorts the nodes by their hostnames.
    // 
    // Default value: addedtime.
    shared_ptr<string> sortBy_ {};
    // The states of the compute nodes to be queried.
    shared_ptr<vector<string>> status_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EHPC20240730
#endif
