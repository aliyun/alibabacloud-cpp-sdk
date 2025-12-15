// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTNODESSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTNODESSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EHPC20240730
{
namespace Models
{
  class ListNodesShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListNodesShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(Hostnames, hostnamesShrink_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(PrivateIpAddress, privateIpAddressShrink_);
      DARABONBA_PTR_TO_JSON(QueueNames, queueNamesShrink_);
      DARABONBA_PTR_TO_JSON(Sequence, sequence_);
      DARABONBA_PTR_TO_JSON(SortBy, sortBy_);
      DARABONBA_PTR_TO_JSON(Status, statusShrink_);
    };
    friend void from_json(const Darabonba::Json& j, ListNodesShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(Hostnames, hostnamesShrink_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(PrivateIpAddress, privateIpAddressShrink_);
      DARABONBA_PTR_FROM_JSON(QueueNames, queueNamesShrink_);
      DARABONBA_PTR_FROM_JSON(Sequence, sequence_);
      DARABONBA_PTR_FROM_JSON(SortBy, sortBy_);
      DARABONBA_PTR_FROM_JSON(Status, statusShrink_);
    };
    ListNodesShrinkRequest() = default ;
    ListNodesShrinkRequest(const ListNodesShrinkRequest &) = default ;
    ListNodesShrinkRequest(ListNodesShrinkRequest &&) = default ;
    ListNodesShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListNodesShrinkRequest() = default ;
    ListNodesShrinkRequest& operator=(const ListNodesShrinkRequest &) = default ;
    ListNodesShrinkRequest& operator=(ListNodesShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clusterId_ == nullptr
        && return this->hostnamesShrink_ == nullptr && return this->pageNumber_ == nullptr && return this->pageSize_ == nullptr && return this->privateIpAddressShrink_ == nullptr && return this->queueNamesShrink_ == nullptr
        && return this->sequence_ == nullptr && return this->sortBy_ == nullptr && return this->statusShrink_ == nullptr; };
    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string clusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline ListNodesShrinkRequest& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // hostnamesShrink Field Functions 
    bool hasHostnamesShrink() const { return this->hostnamesShrink_ != nullptr;};
    void deleteHostnamesShrink() { this->hostnamesShrink_ = nullptr;};
    inline string hostnamesShrink() const { DARABONBA_PTR_GET_DEFAULT(hostnamesShrink_, "") };
    inline ListNodesShrinkRequest& setHostnamesShrink(string hostnamesShrink) { DARABONBA_PTR_SET_VALUE(hostnamesShrink_, hostnamesShrink) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListNodesShrinkRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListNodesShrinkRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // privateIpAddressShrink Field Functions 
    bool hasPrivateIpAddressShrink() const { return this->privateIpAddressShrink_ != nullptr;};
    void deletePrivateIpAddressShrink() { this->privateIpAddressShrink_ = nullptr;};
    inline string privateIpAddressShrink() const { DARABONBA_PTR_GET_DEFAULT(privateIpAddressShrink_, "") };
    inline ListNodesShrinkRequest& setPrivateIpAddressShrink(string privateIpAddressShrink) { DARABONBA_PTR_SET_VALUE(privateIpAddressShrink_, privateIpAddressShrink) };


    // queueNamesShrink Field Functions 
    bool hasQueueNamesShrink() const { return this->queueNamesShrink_ != nullptr;};
    void deleteQueueNamesShrink() { this->queueNamesShrink_ = nullptr;};
    inline string queueNamesShrink() const { DARABONBA_PTR_GET_DEFAULT(queueNamesShrink_, "") };
    inline ListNodesShrinkRequest& setQueueNamesShrink(string queueNamesShrink) { DARABONBA_PTR_SET_VALUE(queueNamesShrink_, queueNamesShrink) };


    // sequence Field Functions 
    bool hasSequence() const { return this->sequence_ != nullptr;};
    void deleteSequence() { this->sequence_ = nullptr;};
    inline string sequence() const { DARABONBA_PTR_GET_DEFAULT(sequence_, "") };
    inline ListNodesShrinkRequest& setSequence(string sequence) { DARABONBA_PTR_SET_VALUE(sequence_, sequence) };


    // sortBy Field Functions 
    bool hasSortBy() const { return this->sortBy_ != nullptr;};
    void deleteSortBy() { this->sortBy_ = nullptr;};
    inline string sortBy() const { DARABONBA_PTR_GET_DEFAULT(sortBy_, "") };
    inline ListNodesShrinkRequest& setSortBy(string sortBy) { DARABONBA_PTR_SET_VALUE(sortBy_, sortBy) };


    // statusShrink Field Functions 
    bool hasStatusShrink() const { return this->statusShrink_ != nullptr;};
    void deleteStatusShrink() { this->statusShrink_ = nullptr;};
    inline string statusShrink() const { DARABONBA_PTR_GET_DEFAULT(statusShrink_, "") };
    inline ListNodesShrinkRequest& setStatusShrink(string statusShrink) { DARABONBA_PTR_SET_VALUE(statusShrink_, statusShrink) };


  protected:
    // The cluster ID. You can call the [ListClusters](https://help.aliyun.com/document_detail/87116.html) operation to query the cluster ID.
    std::shared_ptr<string> clusterId_ = nullptr;
    // The hostnames of the compute nodes that you want to query.
    std::shared_ptr<string> hostnamesShrink_ = nullptr;
    // The page number of the page to return.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of entries per page.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The IP addresses of the compute nodes that you want to query.
    std::shared_ptr<string> privateIpAddressShrink_ = nullptr;
    // The queues to which the nodes belong.
    std::shared_ptr<string> queueNamesShrink_ = nullptr;
    // Specifies whether the results are sorted in ascending or descending order. Valid values:
    // 
    // *   Forward: ascending
    // *   Backward: descending
    // 
    // Default value: Forward.
    std::shared_ptr<string> sequence_ = nullptr;
    // The sorting method of the node list. Valid values:
    // 
    // *   AddedTime: sorts the nodes by the time that they were added.
    // *   HostName: sorts the nodes by their hostnames.
    // 
    // Default value: addedtime.
    std::shared_ptr<string> sortBy_ = nullptr;
    // The states of the compute nodes to be queried.
    std::shared_ptr<string> statusShrink_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EHPC20240730
#endif
