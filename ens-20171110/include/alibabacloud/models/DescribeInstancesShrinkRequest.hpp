// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINSTANCESSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINSTANCESSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class DescribeInstancesShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInstancesShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EipAddresses, eipAddressesShrink_);
      DARABONBA_PTR_TO_JSON(EnsRegionId, ensRegionId_);
      DARABONBA_PTR_TO_JSON(EnsRegionIds, ensRegionIds_);
      DARABONBA_PTR_TO_JSON(EnsServiceId, ensServiceId_);
      DARABONBA_PTR_TO_JSON(ImageId, imageId_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(InstanceIds, instanceIds_);
      DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_TO_JSON(InstanceResourceType, instanceResourceType_);
      DARABONBA_PTR_TO_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_TO_JSON(IntranetIp, intranetIp_);
      DARABONBA_PTR_TO_JSON(NetworkId, networkId_);
      DARABONBA_PTR_TO_JSON(OrderByParams, orderByParams_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(SearchKey, searchKey_);
      DARABONBA_PTR_TO_JSON(SecurityGroupId, securityGroupId_);
      DARABONBA_PTR_TO_JSON(ServiceStatus, serviceStatusShrink_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Tags, tagsShrink_);
      DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInstancesShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EipAddresses, eipAddressesShrink_);
      DARABONBA_PTR_FROM_JSON(EnsRegionId, ensRegionId_);
      DARABONBA_PTR_FROM_JSON(EnsRegionIds, ensRegionIds_);
      DARABONBA_PTR_FROM_JSON(EnsServiceId, ensServiceId_);
      DARABONBA_PTR_FROM_JSON(ImageId, imageId_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(InstanceIds, instanceIds_);
      DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_FROM_JSON(InstanceResourceType, instanceResourceType_);
      DARABONBA_PTR_FROM_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_FROM_JSON(IntranetIp, intranetIp_);
      DARABONBA_PTR_FROM_JSON(NetworkId, networkId_);
      DARABONBA_PTR_FROM_JSON(OrderByParams, orderByParams_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(SearchKey, searchKey_);
      DARABONBA_PTR_FROM_JSON(SecurityGroupId, securityGroupId_);
      DARABONBA_PTR_FROM_JSON(ServiceStatus, serviceStatusShrink_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Tags, tagsShrink_);
      DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
    };
    DescribeInstancesShrinkRequest() = default ;
    DescribeInstancesShrinkRequest(const DescribeInstancesShrinkRequest &) = default ;
    DescribeInstancesShrinkRequest(DescribeInstancesShrinkRequest &&) = default ;
    DescribeInstancesShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInstancesShrinkRequest() = default ;
    DescribeInstancesShrinkRequest& operator=(const DescribeInstancesShrinkRequest &) = default ;
    DescribeInstancesShrinkRequest& operator=(DescribeInstancesShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->eipAddressesShrink_ == nullptr
        && this->ensRegionId_ == nullptr && this->ensRegionIds_ == nullptr && this->ensServiceId_ == nullptr && this->imageId_ == nullptr && this->instanceId_ == nullptr
        && this->instanceIds_ == nullptr && this->instanceName_ == nullptr && this->instanceResourceType_ == nullptr && this->instanceType_ == nullptr && this->intranetIp_ == nullptr
        && this->networkId_ == nullptr && this->orderByParams_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->searchKey_ == nullptr
        && this->securityGroupId_ == nullptr && this->serviceStatusShrink_ == nullptr && this->status_ == nullptr && this->tagsShrink_ == nullptr && this->vSwitchId_ == nullptr; };
    // eipAddressesShrink Field Functions 
    bool hasEipAddressesShrink() const { return this->eipAddressesShrink_ != nullptr;};
    void deleteEipAddressesShrink() { this->eipAddressesShrink_ = nullptr;};
    inline string getEipAddressesShrink() const { DARABONBA_PTR_GET_DEFAULT(eipAddressesShrink_, "") };
    inline DescribeInstancesShrinkRequest& setEipAddressesShrink(string eipAddressesShrink) { DARABONBA_PTR_SET_VALUE(eipAddressesShrink_, eipAddressesShrink) };


    // ensRegionId Field Functions 
    bool hasEnsRegionId() const { return this->ensRegionId_ != nullptr;};
    void deleteEnsRegionId() { this->ensRegionId_ = nullptr;};
    inline string getEnsRegionId() const { DARABONBA_PTR_GET_DEFAULT(ensRegionId_, "") };
    inline DescribeInstancesShrinkRequest& setEnsRegionId(string ensRegionId) { DARABONBA_PTR_SET_VALUE(ensRegionId_, ensRegionId) };


    // ensRegionIds Field Functions 
    bool hasEnsRegionIds() const { return this->ensRegionIds_ != nullptr;};
    void deleteEnsRegionIds() { this->ensRegionIds_ = nullptr;};
    inline string getEnsRegionIds() const { DARABONBA_PTR_GET_DEFAULT(ensRegionIds_, "") };
    inline DescribeInstancesShrinkRequest& setEnsRegionIds(string ensRegionIds) { DARABONBA_PTR_SET_VALUE(ensRegionIds_, ensRegionIds) };


    // ensServiceId Field Functions 
    bool hasEnsServiceId() const { return this->ensServiceId_ != nullptr;};
    void deleteEnsServiceId() { this->ensServiceId_ = nullptr;};
    inline string getEnsServiceId() const { DARABONBA_PTR_GET_DEFAULT(ensServiceId_, "") };
    inline DescribeInstancesShrinkRequest& setEnsServiceId(string ensServiceId) { DARABONBA_PTR_SET_VALUE(ensServiceId_, ensServiceId) };


    // imageId Field Functions 
    bool hasImageId() const { return this->imageId_ != nullptr;};
    void deleteImageId() { this->imageId_ = nullptr;};
    inline string getImageId() const { DARABONBA_PTR_GET_DEFAULT(imageId_, "") };
    inline DescribeInstancesShrinkRequest& setImageId(string imageId) { DARABONBA_PTR_SET_VALUE(imageId_, imageId) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribeInstancesShrinkRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // instanceIds Field Functions 
    bool hasInstanceIds() const { return this->instanceIds_ != nullptr;};
    void deleteInstanceIds() { this->instanceIds_ = nullptr;};
    inline string getInstanceIds() const { DARABONBA_PTR_GET_DEFAULT(instanceIds_, "") };
    inline DescribeInstancesShrinkRequest& setInstanceIds(string instanceIds) { DARABONBA_PTR_SET_VALUE(instanceIds_, instanceIds) };


    // instanceName Field Functions 
    bool hasInstanceName() const { return this->instanceName_ != nullptr;};
    void deleteInstanceName() { this->instanceName_ = nullptr;};
    inline string getInstanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
    inline DescribeInstancesShrinkRequest& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


    // instanceResourceType Field Functions 
    bool hasInstanceResourceType() const { return this->instanceResourceType_ != nullptr;};
    void deleteInstanceResourceType() { this->instanceResourceType_ = nullptr;};
    inline string getInstanceResourceType() const { DARABONBA_PTR_GET_DEFAULT(instanceResourceType_, "") };
    inline DescribeInstancesShrinkRequest& setInstanceResourceType(string instanceResourceType) { DARABONBA_PTR_SET_VALUE(instanceResourceType_, instanceResourceType) };


    // instanceType Field Functions 
    bool hasInstanceType() const { return this->instanceType_ != nullptr;};
    void deleteInstanceType() { this->instanceType_ = nullptr;};
    inline string getInstanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
    inline DescribeInstancesShrinkRequest& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


    // intranetIp Field Functions 
    bool hasIntranetIp() const { return this->intranetIp_ != nullptr;};
    void deleteIntranetIp() { this->intranetIp_ = nullptr;};
    inline string getIntranetIp() const { DARABONBA_PTR_GET_DEFAULT(intranetIp_, "") };
    inline DescribeInstancesShrinkRequest& setIntranetIp(string intranetIp) { DARABONBA_PTR_SET_VALUE(intranetIp_, intranetIp) };


    // networkId Field Functions 
    bool hasNetworkId() const { return this->networkId_ != nullptr;};
    void deleteNetworkId() { this->networkId_ = nullptr;};
    inline string getNetworkId() const { DARABONBA_PTR_GET_DEFAULT(networkId_, "") };
    inline DescribeInstancesShrinkRequest& setNetworkId(string networkId) { DARABONBA_PTR_SET_VALUE(networkId_, networkId) };


    // orderByParams Field Functions 
    bool hasOrderByParams() const { return this->orderByParams_ != nullptr;};
    void deleteOrderByParams() { this->orderByParams_ = nullptr;};
    inline string getOrderByParams() const { DARABONBA_PTR_GET_DEFAULT(orderByParams_, "") };
    inline DescribeInstancesShrinkRequest& setOrderByParams(string orderByParams) { DARABONBA_PTR_SET_VALUE(orderByParams_, orderByParams) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeInstancesShrinkRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline string getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, "") };
    inline DescribeInstancesShrinkRequest& setPageSize(string pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // searchKey Field Functions 
    bool hasSearchKey() const { return this->searchKey_ != nullptr;};
    void deleteSearchKey() { this->searchKey_ = nullptr;};
    inline string getSearchKey() const { DARABONBA_PTR_GET_DEFAULT(searchKey_, "") };
    inline DescribeInstancesShrinkRequest& setSearchKey(string searchKey) { DARABONBA_PTR_SET_VALUE(searchKey_, searchKey) };


    // securityGroupId Field Functions 
    bool hasSecurityGroupId() const { return this->securityGroupId_ != nullptr;};
    void deleteSecurityGroupId() { this->securityGroupId_ = nullptr;};
    inline string getSecurityGroupId() const { DARABONBA_PTR_GET_DEFAULT(securityGroupId_, "") };
    inline DescribeInstancesShrinkRequest& setSecurityGroupId(string securityGroupId) { DARABONBA_PTR_SET_VALUE(securityGroupId_, securityGroupId) };


    // serviceStatusShrink Field Functions 
    bool hasServiceStatusShrink() const { return this->serviceStatusShrink_ != nullptr;};
    void deleteServiceStatusShrink() { this->serviceStatusShrink_ = nullptr;};
    inline string getServiceStatusShrink() const { DARABONBA_PTR_GET_DEFAULT(serviceStatusShrink_, "") };
    inline DescribeInstancesShrinkRequest& setServiceStatusShrink(string serviceStatusShrink) { DARABONBA_PTR_SET_VALUE(serviceStatusShrink_, serviceStatusShrink) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeInstancesShrinkRequest& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // tagsShrink Field Functions 
    bool hasTagsShrink() const { return this->tagsShrink_ != nullptr;};
    void deleteTagsShrink() { this->tagsShrink_ = nullptr;};
    inline string getTagsShrink() const { DARABONBA_PTR_GET_DEFAULT(tagsShrink_, "") };
    inline DescribeInstancesShrinkRequest& setTagsShrink(string tagsShrink) { DARABONBA_PTR_SET_VALUE(tagsShrink_, tagsShrink) };


    // vSwitchId Field Functions 
    bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
    void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
    inline string getVSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
    inline DescribeInstancesShrinkRequest& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


  protected:
    shared_ptr<string> eipAddressesShrink_ {};
    // The region ID.
    shared_ptr<string> ensRegionId_ {};
    // The IDs of the regions. The value is a JSON array that consists of up to 100 IDs. Separate multiple IDs with commas (,).
    shared_ptr<string> ensRegionIds_ {};
    // The ID of the edge service. You can use the ID to query information about the instances that are created in the edge service.
    shared_ptr<string> ensServiceId_ {};
    // The ID of the image.
    shared_ptr<string> imageId_ {};
    // The ID of the instance.
    shared_ptr<string> instanceId_ {};
    // The IDs of the instances. The value is a JSON array that consists of up to 100 IDs. Separate IDs with commas (,).
    shared_ptr<string> instanceIds_ {};
    // The name of the instance.
    shared_ptr<string> instanceName_ {};
    // The condition that you want to use to filter instances by category. Valid values:
    // 
    // *   EnsInstance: ENS instances that you purchase.
    // *   EnsService: ENS instances that belong to edge services.
    // *   BuildMachine: ENS instances that are configured with image builders.
    // *   EnsPostPaidInstance: Pay-as-you-go ENS instances that you purchase.
    shared_ptr<string> instanceResourceType_ {};
    // The instance type.
    shared_ptr<string> instanceType_ {};
    // The internal IP address of the instance.
    shared_ptr<string> intranetIp_ {};
    // The ID of the network.
    shared_ptr<string> networkId_ {};
    // The method that you want to use to sort instances. The value of this parameter is in the JSON format.
    // 
    // You can sort instances by name, expiration time, node ID, or creation time. You can specify one or more methods.
    shared_ptr<string> orderByParams_ {};
    // The page number. Pages start from page **1**.
    // 
    // Default value: **1**.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries to return on each page. The maximum value is **100**.
    // 
    // Default value: **10**.
    shared_ptr<string> pageSize_ {};
    // The keyword that you use to query the logs of the service. You can specify the values of parameters such as **ip**, **InstanceName**, and **InstanceId** as the keyword.
    shared_ptr<string> searchKey_ {};
    // The ID of the security group.
    shared_ptr<string> securityGroupId_ {};
    // The status of the service. Valid values.
    shared_ptr<string> serviceStatusShrink_ {};
    // The status of the instance. Valid values:
    // 
    // *   Running
    // *   Stopped
    // *   Expired
    shared_ptr<string> status_ {};
    // The tags that are added to the resource. This operation does not return tag information. You can call this operation in combination with the tag-related operations.
    shared_ptr<string> tagsShrink_ {};
    // The ID of the vSwitch.
    shared_ptr<string> vSwitchId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
