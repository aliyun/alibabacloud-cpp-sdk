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
      DARABONBA_PTR_TO_JSON(Order, order_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
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
      DARABONBA_PTR_FROM_JSON(Order, order_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
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
    virtual bool empty() const override { this->filter_ != nullptr
        && this->hostIP_ != nullptr && this->instanceIP_ != nullptr && this->instanceName_ != nullptr && this->instanceStatus_ != nullptr && this->instanceType_ != nullptr
        && this->isSpot_ != nullptr && this->order_ != nullptr && this->pageNumber_ != nullptr && this->pageSize_ != nullptr && this->resourceType_ != nullptr
        && this->role_ != nullptr && this->sort_ != nullptr; };
    // filter Field Functions 
    bool hasFilter() const { return this->filter_ != nullptr;};
    void deleteFilter() { this->filter_ = nullptr;};
    inline string filter() const { DARABONBA_PTR_GET_DEFAULT(filter_, "") };
    inline ListServiceInstancesRequest& setFilter(string filter) { DARABONBA_PTR_SET_VALUE(filter_, filter) };


    // hostIP Field Functions 
    bool hasHostIP() const { return this->hostIP_ != nullptr;};
    void deleteHostIP() { this->hostIP_ = nullptr;};
    inline string hostIP() const { DARABONBA_PTR_GET_DEFAULT(hostIP_, "") };
    inline ListServiceInstancesRequest& setHostIP(string hostIP) { DARABONBA_PTR_SET_VALUE(hostIP_, hostIP) };


    // instanceIP Field Functions 
    bool hasInstanceIP() const { return this->instanceIP_ != nullptr;};
    void deleteInstanceIP() { this->instanceIP_ = nullptr;};
    inline string instanceIP() const { DARABONBA_PTR_GET_DEFAULT(instanceIP_, "") };
    inline ListServiceInstancesRequest& setInstanceIP(string instanceIP) { DARABONBA_PTR_SET_VALUE(instanceIP_, instanceIP) };


    // instanceName Field Functions 
    bool hasInstanceName() const { return this->instanceName_ != nullptr;};
    void deleteInstanceName() { this->instanceName_ = nullptr;};
    inline string instanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
    inline ListServiceInstancesRequest& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


    // instanceStatus Field Functions 
    bool hasInstanceStatus() const { return this->instanceStatus_ != nullptr;};
    void deleteInstanceStatus() { this->instanceStatus_ = nullptr;};
    inline string instanceStatus() const { DARABONBA_PTR_GET_DEFAULT(instanceStatus_, "") };
    inline ListServiceInstancesRequest& setInstanceStatus(string instanceStatus) { DARABONBA_PTR_SET_VALUE(instanceStatus_, instanceStatus) };


    // instanceType Field Functions 
    bool hasInstanceType() const { return this->instanceType_ != nullptr;};
    void deleteInstanceType() { this->instanceType_ = nullptr;};
    inline string instanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
    inline ListServiceInstancesRequest& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


    // isSpot Field Functions 
    bool hasIsSpot() const { return this->isSpot_ != nullptr;};
    void deleteIsSpot() { this->isSpot_ = nullptr;};
    inline bool isSpot() const { DARABONBA_PTR_GET_DEFAULT(isSpot_, false) };
    inline ListServiceInstancesRequest& setIsSpot(bool isSpot) { DARABONBA_PTR_SET_VALUE(isSpot_, isSpot) };


    // order Field Functions 
    bool hasOrder() const { return this->order_ != nullptr;};
    void deleteOrder() { this->order_ = nullptr;};
    inline string order() const { DARABONBA_PTR_GET_DEFAULT(order_, "") };
    inline ListServiceInstancesRequest& setOrder(string order) { DARABONBA_PTR_SET_VALUE(order_, order) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListServiceInstancesRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListServiceInstancesRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string resourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline ListServiceInstancesRequest& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


    // role Field Functions 
    bool hasRole() const { return this->role_ != nullptr;};
    void deleteRole() { this->role_ = nullptr;};
    inline string role() const { DARABONBA_PTR_GET_DEFAULT(role_, "") };
    inline ListServiceInstancesRequest& setRole(string role) { DARABONBA_PTR_SET_VALUE(role_, role) };


    // sort Field Functions 
    bool hasSort() const { return this->sort_ != nullptr;};
    void deleteSort() { this->sort_ = nullptr;};
    inline string sort() const { DARABONBA_PTR_GET_DEFAULT(sort_, "") };
    inline ListServiceInstancesRequest& setSort(string sort) { DARABONBA_PTR_SET_VALUE(sort_, sort) };


  protected:
    // The keyword used to query instances. Instances can be queried based on instance name, instance IP address, IP address of the server where the instance resides, and instance type.
    std::shared_ptr<string> filter_ = nullptr;
    // The IP address of the server where the instance resides.
    std::shared_ptr<string> hostIP_ = nullptr;
    // The IP address of the instance.
    std::shared_ptr<string> instanceIP_ = nullptr;
    // The instance name.
    std::shared_ptr<string> instanceName_ = nullptr;
    // The instance state.
    std::shared_ptr<string> instanceStatus_ = nullptr;
    // The instance type.
    std::shared_ptr<string> instanceType_ = nullptr;
    // Specifies whether the instance is a preemptible instance.
    std::shared_ptr<bool> isSpot_ = nullptr;
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
    std::shared_ptr<string> order_ = nullptr;
    // The page number. Default value: 1.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of entries per page. Default value: 100.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
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
    std::shared_ptr<string> resourceType_ = nullptr;
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
    std::shared_ptr<string> role_ = nullptr;
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
    std::shared_ptr<string> sort_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eas20210701
#endif
