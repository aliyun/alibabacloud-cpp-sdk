// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTRESOURCEINSTANCESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTRESOURCEINSTANCESREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <map>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eas20210701
{
namespace Models
{
  class ListResourceInstancesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListResourceInstancesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ChargeType, chargeType_);
      DARABONBA_PTR_TO_JSON(Filter, filter_);
      DARABONBA_PTR_TO_JSON(InstanceIP, instanceIP_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_TO_JSON(InstanceStatus, instanceStatus_);
      DARABONBA_PTR_TO_JSON(Label, label_);
      DARABONBA_PTR_TO_JSON(Order, order_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(Sort, sort_);
      DARABONBA_PTR_TO_JSON(Zone, zone_);
    };
    friend void from_json(const Darabonba::Json& j, ListResourceInstancesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ChargeType, chargeType_);
      DARABONBA_PTR_FROM_JSON(Filter, filter_);
      DARABONBA_PTR_FROM_JSON(InstanceIP, instanceIP_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_FROM_JSON(InstanceStatus, instanceStatus_);
      DARABONBA_PTR_FROM_JSON(Label, label_);
      DARABONBA_PTR_FROM_JSON(Order, order_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(Sort, sort_);
      DARABONBA_PTR_FROM_JSON(Zone, zone_);
    };
    ListResourceInstancesRequest() = default ;
    ListResourceInstancesRequest(const ListResourceInstancesRequest &) = default ;
    ListResourceInstancesRequest(ListResourceInstancesRequest &&) = default ;
    ListResourceInstancesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListResourceInstancesRequest() = default ;
    ListResourceInstancesRequest& operator=(const ListResourceInstancesRequest &) = default ;
    ListResourceInstancesRequest& operator=(ListResourceInstancesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->chargeType_ == nullptr
        && this->filter_ == nullptr && this->instanceIP_ == nullptr && this->instanceId_ == nullptr && this->instanceName_ == nullptr && this->instanceStatus_ == nullptr
        && this->label_ == nullptr && this->order_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->sort_ == nullptr
        && this->zone_ == nullptr; };
    // chargeType Field Functions 
    bool hasChargeType() const { return this->chargeType_ != nullptr;};
    void deleteChargeType() { this->chargeType_ = nullptr;};
    inline string getChargeType() const { DARABONBA_PTR_GET_DEFAULT(chargeType_, "") };
    inline ListResourceInstancesRequest& setChargeType(string chargeType) { DARABONBA_PTR_SET_VALUE(chargeType_, chargeType) };


    // filter Field Functions 
    bool hasFilter() const { return this->filter_ != nullptr;};
    void deleteFilter() { this->filter_ = nullptr;};
    inline string getFilter() const { DARABONBA_PTR_GET_DEFAULT(filter_, "") };
    inline ListResourceInstancesRequest& setFilter(string filter) { DARABONBA_PTR_SET_VALUE(filter_, filter) };


    // instanceIP Field Functions 
    bool hasInstanceIP() const { return this->instanceIP_ != nullptr;};
    void deleteInstanceIP() { this->instanceIP_ = nullptr;};
    inline string getInstanceIP() const { DARABONBA_PTR_GET_DEFAULT(instanceIP_, "") };
    inline ListResourceInstancesRequest& setInstanceIP(string instanceIP) { DARABONBA_PTR_SET_VALUE(instanceIP_, instanceIP) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ListResourceInstancesRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // instanceName Field Functions 
    bool hasInstanceName() const { return this->instanceName_ != nullptr;};
    void deleteInstanceName() { this->instanceName_ = nullptr;};
    inline string getInstanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
    inline ListResourceInstancesRequest& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


    // instanceStatus Field Functions 
    bool hasInstanceStatus() const { return this->instanceStatus_ != nullptr;};
    void deleteInstanceStatus() { this->instanceStatus_ = nullptr;};
    inline string getInstanceStatus() const { DARABONBA_PTR_GET_DEFAULT(instanceStatus_, "") };
    inline ListResourceInstancesRequest& setInstanceStatus(string instanceStatus) { DARABONBA_PTR_SET_VALUE(instanceStatus_, instanceStatus) };


    // label Field Functions 
    bool hasLabel() const { return this->label_ != nullptr;};
    void deleteLabel() { this->label_ = nullptr;};
    inline const map<string, string> & getLabel() const { DARABONBA_PTR_GET_CONST(label_, map<string, string>) };
    inline map<string, string> getLabel() { DARABONBA_PTR_GET(label_, map<string, string>) };
    inline ListResourceInstancesRequest& setLabel(const map<string, string> & label) { DARABONBA_PTR_SET_VALUE(label_, label) };
    inline ListResourceInstancesRequest& setLabel(map<string, string> && label) { DARABONBA_PTR_SET_RVALUE(label_, label) };


    // order Field Functions 
    bool hasOrder() const { return this->order_ != nullptr;};
    void deleteOrder() { this->order_ = nullptr;};
    inline string getOrder() const { DARABONBA_PTR_GET_DEFAULT(order_, "") };
    inline ListResourceInstancesRequest& setOrder(string order) { DARABONBA_PTR_SET_VALUE(order_, order) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListResourceInstancesRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListResourceInstancesRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // sort Field Functions 
    bool hasSort() const { return this->sort_ != nullptr;};
    void deleteSort() { this->sort_ = nullptr;};
    inline string getSort() const { DARABONBA_PTR_GET_DEFAULT(sort_, "") };
    inline ListResourceInstancesRequest& setSort(string sort) { DARABONBA_PTR_SET_VALUE(sort_, sort) };


    // zone Field Functions 
    bool hasZone() const { return this->zone_ != nullptr;};
    void deleteZone() { this->zone_ = nullptr;};
    inline string getZone() const { DARABONBA_PTR_GET_DEFAULT(zone_, "") };
    inline ListResourceInstancesRequest& setZone(string zone) { DARABONBA_PTR_SET_VALUE(zone_, zone) };


  protected:
    // The billing method of the instance. Valid values:
    // 
    // *   PrePaid: subscription.
    // *   PostPaid: pay-as-you-go.
    shared_ptr<string> chargeType_ {};
    // The keyword used to query instances. Instances can be queried by instance ID or instance IP address.
    shared_ptr<string> filter_ {};
    // The IP address of the instance.
    shared_ptr<string> instanceIP_ {};
    // The instance ID. For more information about how to query the instance ID, see [ListResourceInstances](https://help.aliyun.com/document_detail/412129.html).
    shared_ptr<string> instanceId_ {};
    // The instance name.
    shared_ptr<string> instanceName_ {};
    // The instance state.
    // 
    // Valid values:
    // 
    // *   Ready-SchedulingDisabled
    // 
    //     <!-- -->
    // 
    //     :
    // 
    //     <!-- -->
    // 
    //     The instance is available but unschedulable
    // 
    //     <!-- -->
    // 
    //     .
    // 
    // *   Ready
    // 
    //     <!-- -->
    // 
    //     : The instance
    // 
    //     <!-- -->
    // 
    //     is running
    // 
    //     <!-- -->
    // 
    //     .
    // 
    // *   NotReady
    // 
    //     <!-- -->
    // 
    //     : The instance is unready.
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    // *   Stopped
    // 
    //     <!-- -->
    // 
    //     : The instance has stopped.
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    // *   NotReady-SchedulingDisabled
    // 
    //     <!-- -->
    // 
    //     :
    // 
    //     <!-- -->
    // 
    //     The instance is unavailable and unschedulable
    // 
    //     <!-- -->
    // 
    //     .
    // 
    // *   Attaching
    // 
    //     <!-- -->
    // 
    //     : The instance
    // 
    //     <!-- -->
    // 
    //     is starting
    // 
    //     <!-- -->
    // 
    //     .
    // 
    // *   Deleting
    // 
    //     <!-- -->
    // 
    //     : The instance is being deleted.
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    // *   CreateFailed: The instance failed to be created.
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    shared_ptr<string> instanceStatus_ {};
    // The tag.
    shared_ptr<map<string, string>> label_ {};
    // The sorting order.
    // 
    // Valid values:
    // 
    // *   asc: The instances are sorted in ascending order.
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    // *   desc
    // 
    //     <!-- -->
    // 
    //     : The instances are sorted in descending order.
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    shared_ptr<string> order_ {};
    // The page number. Pages start from page 1. Default value: 1.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries per page. Default value: 100.
    shared_ptr<int32_t> pageSize_ {};
    // The field that you use to sort the query results.
    // 
    // Valid values:
    // 
    // *   CreateTime
    // 
    //     <!-- -->
    // 
    //     : The instances are sorted based on the time when the instances were created.
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    // *   MemoryUsed
    // 
    //     <!-- -->
    // 
    //     :
    // 
    //     <!-- -->
    // 
    //     The instances are sorted based on the memory usage of the instances
    // 
    //     <!-- -->
    // 
    //     .
    // 
    // *   GpuUsed
    // 
    //     <!-- -->
    // 
    //     : The instances are sorted based on the
    // 
    //     <!-- -->
    // 
    //     GPU usage of the instances.
    // 
    //     <!-- -->
    // 
    // *   ExpireTime: The instances are sorted based on the time when the instances expired.
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    // *   CpuUsed
    // 
    //     <!-- -->
    // 
    //     :
    // 
    //     <!-- -->
    // 
    //     The instances are sorted based on the CPU utilization of the instances.
    // 
    //     <!-- -->
    shared_ptr<string> sort_ {};
    shared_ptr<string> zone_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eas20210701
#endif
