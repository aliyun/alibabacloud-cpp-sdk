// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSERVICEINSTANCESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTSERVICEINSTANCESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eas20210701
{
namespace Models
{
  class ListServiceInstancesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListServiceInstancesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Filter, filter_);
      DARABONBA_PTR_TO_JSON(HostIP, hostIP_);
      DARABONBA_PTR_TO_JSON(InstanceIP, instanceIP_);
      DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_TO_JSON(InstanceStatus, instanceStatus_);
      DARABONBA_PTR_TO_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_TO_JSON(IsSpot, isSpot_);
      DARABONBA_PTR_TO_JSON(ListReplica, listReplica_);
      DARABONBA_PTR_TO_JSON(MemberType, memberType_);
      DARABONBA_PTR_TO_JSON(Order, order_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(QuotaId, quotaId_);
      DARABONBA_PTR_TO_JSON(ReplicaName, replicaName_);
      DARABONBA_PTR_TO_JSON(Resource, resource_);
      DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_TO_JSON(Role, role_);
      DARABONBA_PTR_TO_JSON(Sort, sort_);
    };
    friend void from_json(const Darabonba::Json& j, ListServiceInstancesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Filter, filter_);
      DARABONBA_PTR_FROM_JSON(HostIP, hostIP_);
      DARABONBA_PTR_FROM_JSON(InstanceIP, instanceIP_);
      DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_FROM_JSON(InstanceStatus, instanceStatus_);
      DARABONBA_PTR_FROM_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_FROM_JSON(IsSpot, isSpot_);
      DARABONBA_PTR_FROM_JSON(ListReplica, listReplica_);
      DARABONBA_PTR_FROM_JSON(MemberType, memberType_);
      DARABONBA_PTR_FROM_JSON(Order, order_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(QuotaId, quotaId_);
      DARABONBA_PTR_FROM_JSON(ReplicaName, replicaName_);
      DARABONBA_PTR_FROM_JSON(Resource, resource_);
      DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_FROM_JSON(Role, role_);
      DARABONBA_PTR_FROM_JSON(Sort, sort_);
    };
    ListServiceInstancesRequest() = default ;
    ListServiceInstancesRequest(const ListServiceInstancesRequest &) = default ;
    ListServiceInstancesRequest(ListServiceInstancesRequest &&) = default ;
    ListServiceInstancesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListServiceInstancesRequest() = default ;
    ListServiceInstancesRequest& operator=(const ListServiceInstancesRequest &) = default ;
    ListServiceInstancesRequest& operator=(ListServiceInstancesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->filter_ == nullptr
        && this->hostIP_ == nullptr && this->instanceIP_ == nullptr && this->instanceName_ == nullptr && this->instanceStatus_ == nullptr && this->instanceType_ == nullptr
        && this->isSpot_ == nullptr && this->listReplica_ == nullptr && this->memberType_ == nullptr && this->order_ == nullptr && this->pageNumber_ == nullptr
        && this->pageSize_ == nullptr && this->quotaId_ == nullptr && this->replicaName_ == nullptr && this->resource_ == nullptr && this->resourceType_ == nullptr
        && this->role_ == nullptr && this->sort_ == nullptr; };
    // filter Field Functions 
    bool hasFilter() const { return this->filter_ != nullptr;};
    void deleteFilter() { this->filter_ = nullptr;};
    inline string getFilter() const { DARABONBA_PTR_GET_DEFAULT(filter_, "") };
    inline ListServiceInstancesRequest& setFilter(string filter) { DARABONBA_PTR_SET_VALUE(filter_, filter) };


    // hostIP Field Functions 
    bool hasHostIP() const { return this->hostIP_ != nullptr;};
    void deleteHostIP() { this->hostIP_ = nullptr;};
    inline string getHostIP() const { DARABONBA_PTR_GET_DEFAULT(hostIP_, "") };
    inline ListServiceInstancesRequest& setHostIP(string hostIP) { DARABONBA_PTR_SET_VALUE(hostIP_, hostIP) };


    // instanceIP Field Functions 
    bool hasInstanceIP() const { return this->instanceIP_ != nullptr;};
    void deleteInstanceIP() { this->instanceIP_ = nullptr;};
    inline string getInstanceIP() const { DARABONBA_PTR_GET_DEFAULT(instanceIP_, "") };
    inline ListServiceInstancesRequest& setInstanceIP(string instanceIP) { DARABONBA_PTR_SET_VALUE(instanceIP_, instanceIP) };


    // instanceName Field Functions 
    bool hasInstanceName() const { return this->instanceName_ != nullptr;};
    void deleteInstanceName() { this->instanceName_ = nullptr;};
    inline string getInstanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
    inline ListServiceInstancesRequest& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


    // instanceStatus Field Functions 
    bool hasInstanceStatus() const { return this->instanceStatus_ != nullptr;};
    void deleteInstanceStatus() { this->instanceStatus_ = nullptr;};
    inline string getInstanceStatus() const { DARABONBA_PTR_GET_DEFAULT(instanceStatus_, "") };
    inline ListServiceInstancesRequest& setInstanceStatus(string instanceStatus) { DARABONBA_PTR_SET_VALUE(instanceStatus_, instanceStatus) };


    // instanceType Field Functions 
    bool hasInstanceType() const { return this->instanceType_ != nullptr;};
    void deleteInstanceType() { this->instanceType_ = nullptr;};
    inline string getInstanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
    inline ListServiceInstancesRequest& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


    // isSpot Field Functions 
    bool hasIsSpot() const { return this->isSpot_ != nullptr;};
    void deleteIsSpot() { this->isSpot_ = nullptr;};
    inline bool getIsSpot() const { DARABONBA_PTR_GET_DEFAULT(isSpot_, false) };
    inline ListServiceInstancesRequest& setIsSpot(bool isSpot) { DARABONBA_PTR_SET_VALUE(isSpot_, isSpot) };


    // listReplica Field Functions 
    bool hasListReplica() const { return this->listReplica_ != nullptr;};
    void deleteListReplica() { this->listReplica_ = nullptr;};
    inline bool getListReplica() const { DARABONBA_PTR_GET_DEFAULT(listReplica_, false) };
    inline ListServiceInstancesRequest& setListReplica(bool listReplica) { DARABONBA_PTR_SET_VALUE(listReplica_, listReplica) };


    // memberType Field Functions 
    bool hasMemberType() const { return this->memberType_ != nullptr;};
    void deleteMemberType() { this->memberType_ = nullptr;};
    inline string getMemberType() const { DARABONBA_PTR_GET_DEFAULT(memberType_, "") };
    inline ListServiceInstancesRequest& setMemberType(string memberType) { DARABONBA_PTR_SET_VALUE(memberType_, memberType) };


    // order Field Functions 
    bool hasOrder() const { return this->order_ != nullptr;};
    void deleteOrder() { this->order_ = nullptr;};
    inline string getOrder() const { DARABONBA_PTR_GET_DEFAULT(order_, "") };
    inline ListServiceInstancesRequest& setOrder(string order) { DARABONBA_PTR_SET_VALUE(order_, order) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListServiceInstancesRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListServiceInstancesRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // quotaId Field Functions 
    bool hasQuotaId() const { return this->quotaId_ != nullptr;};
    void deleteQuotaId() { this->quotaId_ = nullptr;};
    inline string getQuotaId() const { DARABONBA_PTR_GET_DEFAULT(quotaId_, "") };
    inline ListServiceInstancesRequest& setQuotaId(string quotaId) { DARABONBA_PTR_SET_VALUE(quotaId_, quotaId) };


    // replicaName Field Functions 
    bool hasReplicaName() const { return this->replicaName_ != nullptr;};
    void deleteReplicaName() { this->replicaName_ = nullptr;};
    inline string getReplicaName() const { DARABONBA_PTR_GET_DEFAULT(replicaName_, "") };
    inline ListServiceInstancesRequest& setReplicaName(string replicaName) { DARABONBA_PTR_SET_VALUE(replicaName_, replicaName) };


    // resource Field Functions 
    bool hasResource() const { return this->resource_ != nullptr;};
    void deleteResource() { this->resource_ = nullptr;};
    inline string getResource() const { DARABONBA_PTR_GET_DEFAULT(resource_, "") };
    inline ListServiceInstancesRequest& setResource(string resource) { DARABONBA_PTR_SET_VALUE(resource_, resource) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string getResourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline ListServiceInstancesRequest& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


    // role Field Functions 
    bool hasRole() const { return this->role_ != nullptr;};
    void deleteRole() { this->role_ = nullptr;};
    inline string getRole() const { DARABONBA_PTR_GET_DEFAULT(role_, "") };
    inline ListServiceInstancesRequest& setRole(string role) { DARABONBA_PTR_SET_VALUE(role_, role) };


    // sort Field Functions 
    bool hasSort() const { return this->sort_ != nullptr;};
    void deleteSort() { this->sort_ = nullptr;};
    inline string getSort() const { DARABONBA_PTR_GET_DEFAULT(sort_, "") };
    inline ListServiceInstancesRequest& setSort(string sort) { DARABONBA_PTR_SET_VALUE(sort_, sort) };


  protected:
    // The keyword used to query instances. Instances can be queried based on instance name, instance IP address, IP address of the server where the instance resides, and instance type.
    shared_ptr<string> filter_ {};
    // The IP address of the server where the instance resides.
    shared_ptr<string> hostIP_ {};
    // The IP address of the instance.
    shared_ptr<string> instanceIP_ {};
    // The instance name.
    shared_ptr<string> instanceName_ {};
    // The instance state.
    shared_ptr<string> instanceStatus_ {};
    // The instance type.
    shared_ptr<string> instanceType_ {};
    // Specifies whether the instance is a preemptible instance.
    shared_ptr<bool> isSpot_ {};
    shared_ptr<bool> listReplica_ {};
    shared_ptr<string> memberType_ {};
    // The sorting order.
    // 
    // Valid values:
    // 
    // *   asc
    // 
    //     <!-- -->
    // 
    //     :
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    //     The instances are sorted in ascending order.
    // 
    // *   desc
    // 
    //     <!-- -->
    // 
    //     :
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    //     The instances are sorted in descending order.
    shared_ptr<string> order_ {};
    // The page number. Default value: 1.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries per page. Default value: 100.
    shared_ptr<int32_t> pageSize_ {};
    shared_ptr<string> quotaId_ {};
    shared_ptr<string> replicaName_ {};
    shared_ptr<string> resource_ {};
    // The type of the resource group to which the instance belongs.
    // 
    // Valid values:
    // 
    // *   PublicResource
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    // *   DedicatedResource
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    shared_ptr<string> resourceType_ {};
    // The service role.
    // 
    // Valid values:
    // 
    // *   DataSet
    // 
    //     <!-- -->
    // 
    //     :
    // 
    //     <!-- -->
    // 
    //     dataset service
    // 
    //     <!-- -->
    // 
    //     .
    // 
    // *   SDProxy
    // 
    //     <!-- -->
    // 
    //     :
    // 
    //     <!-- -->
    // 
    //     Stable-Diffusion proxy service
    // 
    //     <!-- -->
    // 
    //     .
    // 
    // *   Standard
    // 
    //     <!-- -->
    // 
    //     :
    // 
    //     <!-- -->
    // 
    //     standard service
    // 
    //     <!-- -->
    // 
    //     .
    // 
    // *   Queue
    // 
    //     <!-- -->
    // 
    //     :
    // 
    //     <!-- -->
    // 
    //     queue service
    // 
    //     <!-- -->
    // 
    //     .
    shared_ptr<string> role_ {};
    // The field that you use to sort the query results.
    // 
    // *   Set the value to StartTime.
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    //     The value specifies that the query results are sorted based on the time when the instances were created
    // 
    //     <!-- -->
    // 
    //     .
    shared_ptr<string> sort_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eas20210701
#endif
