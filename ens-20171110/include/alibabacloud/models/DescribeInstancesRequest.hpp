// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINSTANCESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINSTANCESREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class DescribeInstancesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInstancesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EipAddresses, eipAddresses_);
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
      DARABONBA_PTR_TO_JSON(ServiceStatus, serviceStatus_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
      DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_TO_JSON(VpdId, vpdId_);
      DARABONBA_PTR_TO_JSON(VpdVSwitchId, vpdVSwitchId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInstancesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EipAddresses, eipAddresses_);
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
      DARABONBA_PTR_FROM_JSON(ServiceStatus, serviceStatus_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
      DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_FROM_JSON(VpdId, vpdId_);
      DARABONBA_PTR_FROM_JSON(VpdVSwitchId, vpdVSwitchId_);
    };
    DescribeInstancesRequest() = default ;
    DescribeInstancesRequest(const DescribeInstancesRequest &) = default ;
    DescribeInstancesRequest(DescribeInstancesRequest &&) = default ;
    DescribeInstancesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInstancesRequest() = default ;
    DescribeInstancesRequest& operator=(const DescribeInstancesRequest &) = default ;
    DescribeInstancesRequest& operator=(DescribeInstancesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Tags : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Tags& obj) { 
        DARABONBA_PTR_TO_JSON(Key, key_);
        DARABONBA_PTR_TO_JSON(Value, value_);
      };
      friend void from_json(const Darabonba::Json& j, Tags& obj) { 
        DARABONBA_PTR_FROM_JSON(Key, key_);
        DARABONBA_PTR_FROM_JSON(Value, value_);
      };
      Tags() = default ;
      Tags(const Tags &) = default ;
      Tags(Tags &&) = default ;
      Tags(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Tags() = default ;
      Tags& operator=(const Tags &) = default ;
      Tags& operator=(Tags &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->key_ == nullptr
        && this->value_ == nullptr; };
      // key Field Functions 
      bool hasKey() const { return this->key_ != nullptr;};
      void deleteKey() { this->key_ = nullptr;};
      inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
      inline Tags& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


      // value Field Functions 
      bool hasValue() const { return this->value_ != nullptr;};
      void deleteValue() { this->value_ = nullptr;};
      inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
      inline Tags& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    protected:
      // The tag key of the instance. Valid values of N: 1 to 20.
      shared_ptr<string> key_ {};
      // The tag value of the instance. Valid values of N: 1 to 20.
      shared_ptr<string> value_ {};
    };

    virtual bool empty() const override { return this->eipAddresses_ == nullptr
        && this->ensRegionId_ == nullptr && this->ensRegionIds_ == nullptr && this->ensServiceId_ == nullptr && this->imageId_ == nullptr && this->instanceId_ == nullptr
        && this->instanceIds_ == nullptr && this->instanceName_ == nullptr && this->instanceResourceType_ == nullptr && this->instanceType_ == nullptr && this->intranetIp_ == nullptr
        && this->networkId_ == nullptr && this->orderByParams_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->searchKey_ == nullptr
        && this->securityGroupId_ == nullptr && this->serviceStatus_ == nullptr && this->status_ == nullptr && this->tags_ == nullptr && this->vSwitchId_ == nullptr
        && this->vpdId_ == nullptr && this->vpdVSwitchId_ == nullptr; };
    // eipAddresses Field Functions 
    bool hasEipAddresses() const { return this->eipAddresses_ != nullptr;};
    void deleteEipAddresses() { this->eipAddresses_ = nullptr;};
    inline const vector<string> & getEipAddresses() const { DARABONBA_PTR_GET_CONST(eipAddresses_, vector<string>) };
    inline vector<string> getEipAddresses() { DARABONBA_PTR_GET(eipAddresses_, vector<string>) };
    inline DescribeInstancesRequest& setEipAddresses(const vector<string> & eipAddresses) { DARABONBA_PTR_SET_VALUE(eipAddresses_, eipAddresses) };
    inline DescribeInstancesRequest& setEipAddresses(vector<string> && eipAddresses) { DARABONBA_PTR_SET_RVALUE(eipAddresses_, eipAddresses) };


    // ensRegionId Field Functions 
    bool hasEnsRegionId() const { return this->ensRegionId_ != nullptr;};
    void deleteEnsRegionId() { this->ensRegionId_ = nullptr;};
    inline string getEnsRegionId() const { DARABONBA_PTR_GET_DEFAULT(ensRegionId_, "") };
    inline DescribeInstancesRequest& setEnsRegionId(string ensRegionId) { DARABONBA_PTR_SET_VALUE(ensRegionId_, ensRegionId) };


    // ensRegionIds Field Functions 
    bool hasEnsRegionIds() const { return this->ensRegionIds_ != nullptr;};
    void deleteEnsRegionIds() { this->ensRegionIds_ = nullptr;};
    inline string getEnsRegionIds() const { DARABONBA_PTR_GET_DEFAULT(ensRegionIds_, "") };
    inline DescribeInstancesRequest& setEnsRegionIds(string ensRegionIds) { DARABONBA_PTR_SET_VALUE(ensRegionIds_, ensRegionIds) };


    // ensServiceId Field Functions 
    bool hasEnsServiceId() const { return this->ensServiceId_ != nullptr;};
    void deleteEnsServiceId() { this->ensServiceId_ = nullptr;};
    inline string getEnsServiceId() const { DARABONBA_PTR_GET_DEFAULT(ensServiceId_, "") };
    inline DescribeInstancesRequest& setEnsServiceId(string ensServiceId) { DARABONBA_PTR_SET_VALUE(ensServiceId_, ensServiceId) };


    // imageId Field Functions 
    bool hasImageId() const { return this->imageId_ != nullptr;};
    void deleteImageId() { this->imageId_ = nullptr;};
    inline string getImageId() const { DARABONBA_PTR_GET_DEFAULT(imageId_, "") };
    inline DescribeInstancesRequest& setImageId(string imageId) { DARABONBA_PTR_SET_VALUE(imageId_, imageId) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribeInstancesRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // instanceIds Field Functions 
    bool hasInstanceIds() const { return this->instanceIds_ != nullptr;};
    void deleteInstanceIds() { this->instanceIds_ = nullptr;};
    inline string getInstanceIds() const { DARABONBA_PTR_GET_DEFAULT(instanceIds_, "") };
    inline DescribeInstancesRequest& setInstanceIds(string instanceIds) { DARABONBA_PTR_SET_VALUE(instanceIds_, instanceIds) };


    // instanceName Field Functions 
    bool hasInstanceName() const { return this->instanceName_ != nullptr;};
    void deleteInstanceName() { this->instanceName_ = nullptr;};
    inline string getInstanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
    inline DescribeInstancesRequest& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


    // instanceResourceType Field Functions 
    bool hasInstanceResourceType() const { return this->instanceResourceType_ != nullptr;};
    void deleteInstanceResourceType() { this->instanceResourceType_ = nullptr;};
    inline string getInstanceResourceType() const { DARABONBA_PTR_GET_DEFAULT(instanceResourceType_, "") };
    inline DescribeInstancesRequest& setInstanceResourceType(string instanceResourceType) { DARABONBA_PTR_SET_VALUE(instanceResourceType_, instanceResourceType) };


    // instanceType Field Functions 
    bool hasInstanceType() const { return this->instanceType_ != nullptr;};
    void deleteInstanceType() { this->instanceType_ = nullptr;};
    inline string getInstanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
    inline DescribeInstancesRequest& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


    // intranetIp Field Functions 
    bool hasIntranetIp() const { return this->intranetIp_ != nullptr;};
    void deleteIntranetIp() { this->intranetIp_ = nullptr;};
    inline string getIntranetIp() const { DARABONBA_PTR_GET_DEFAULT(intranetIp_, "") };
    inline DescribeInstancesRequest& setIntranetIp(string intranetIp) { DARABONBA_PTR_SET_VALUE(intranetIp_, intranetIp) };


    // networkId Field Functions 
    bool hasNetworkId() const { return this->networkId_ != nullptr;};
    void deleteNetworkId() { this->networkId_ = nullptr;};
    inline string getNetworkId() const { DARABONBA_PTR_GET_DEFAULT(networkId_, "") };
    inline DescribeInstancesRequest& setNetworkId(string networkId) { DARABONBA_PTR_SET_VALUE(networkId_, networkId) };


    // orderByParams Field Functions 
    bool hasOrderByParams() const { return this->orderByParams_ != nullptr;};
    void deleteOrderByParams() { this->orderByParams_ = nullptr;};
    inline string getOrderByParams() const { DARABONBA_PTR_GET_DEFAULT(orderByParams_, "") };
    inline DescribeInstancesRequest& setOrderByParams(string orderByParams) { DARABONBA_PTR_SET_VALUE(orderByParams_, orderByParams) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeInstancesRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline string getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, "") };
    inline DescribeInstancesRequest& setPageSize(string pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // searchKey Field Functions 
    bool hasSearchKey() const { return this->searchKey_ != nullptr;};
    void deleteSearchKey() { this->searchKey_ = nullptr;};
    inline string getSearchKey() const { DARABONBA_PTR_GET_DEFAULT(searchKey_, "") };
    inline DescribeInstancesRequest& setSearchKey(string searchKey) { DARABONBA_PTR_SET_VALUE(searchKey_, searchKey) };


    // securityGroupId Field Functions 
    bool hasSecurityGroupId() const { return this->securityGroupId_ != nullptr;};
    void deleteSecurityGroupId() { this->securityGroupId_ = nullptr;};
    inline string getSecurityGroupId() const { DARABONBA_PTR_GET_DEFAULT(securityGroupId_, "") };
    inline DescribeInstancesRequest& setSecurityGroupId(string securityGroupId) { DARABONBA_PTR_SET_VALUE(securityGroupId_, securityGroupId) };


    // serviceStatus Field Functions 
    bool hasServiceStatus() const { return this->serviceStatus_ != nullptr;};
    void deleteServiceStatus() { this->serviceStatus_ = nullptr;};
    inline const vector<string> & getServiceStatus() const { DARABONBA_PTR_GET_CONST(serviceStatus_, vector<string>) };
    inline vector<string> getServiceStatus() { DARABONBA_PTR_GET(serviceStatus_, vector<string>) };
    inline DescribeInstancesRequest& setServiceStatus(const vector<string> & serviceStatus) { DARABONBA_PTR_SET_VALUE(serviceStatus_, serviceStatus) };
    inline DescribeInstancesRequest& setServiceStatus(vector<string> && serviceStatus) { DARABONBA_PTR_SET_RVALUE(serviceStatus_, serviceStatus) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeInstancesRequest& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<DescribeInstancesRequest::Tags> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<DescribeInstancesRequest::Tags>) };
    inline vector<DescribeInstancesRequest::Tags> getTags() { DARABONBA_PTR_GET(tags_, vector<DescribeInstancesRequest::Tags>) };
    inline DescribeInstancesRequest& setTags(const vector<DescribeInstancesRequest::Tags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline DescribeInstancesRequest& setTags(vector<DescribeInstancesRequest::Tags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // vSwitchId Field Functions 
    bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
    void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
    inline string getVSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
    inline DescribeInstancesRequest& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


    // vpdId Field Functions 
    bool hasVpdId() const { return this->vpdId_ != nullptr;};
    void deleteVpdId() { this->vpdId_ = nullptr;};
    inline string getVpdId() const { DARABONBA_PTR_GET_DEFAULT(vpdId_, "") };
    inline DescribeInstancesRequest& setVpdId(string vpdId) { DARABONBA_PTR_SET_VALUE(vpdId_, vpdId) };


    // vpdVSwitchId Field Functions 
    bool hasVpdVSwitchId() const { return this->vpdVSwitchId_ != nullptr;};
    void deleteVpdVSwitchId() { this->vpdVSwitchId_ = nullptr;};
    inline string getVpdVSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vpdVSwitchId_, "") };
    inline DescribeInstancesRequest& setVpdVSwitchId(string vpdVSwitchId) { DARABONBA_PTR_SET_VALUE(vpdVSwitchId_, vpdVSwitchId) };


  protected:
    // The list of EIP addresses used to filter instances.
    shared_ptr<vector<string>> eipAddresses_ {};
    // The region ID.
    shared_ptr<string> ensRegionId_ {};
    // The list of edge zone IDs. This parameter is a formatted JSON array that contains up to 100 IDs separated by commas (,).
    shared_ptr<string> ensRegionIds_ {};
    // The Edge Node Service ID. You can use this ID to query the instances created under the edge service.
    shared_ptr<string> ensServiceId_ {};
    // The image ID.
    shared_ptr<string> imageId_ {};
    // The instance ID.
    shared_ptr<string> instanceId_ {};
    // The list of instance IDs. This parameter is a formatted JSON array that contains up to 100 IDs separated by commas (,).
    shared_ptr<string> instanceIds_ {};
    // The instance name.
    shared_ptr<string> instanceName_ {};
    // The filter type. Valid values:
    shared_ptr<string> instanceResourceType_ {};
    // The instance type.
    shared_ptr<string> instanceType_ {};
    // The internal IP address.
    shared_ptr<string> intranetIp_ {};
    // The network ID.
    shared_ptr<string> networkId_ {};
    // The sorting parameter in JSON format.
    shared_ptr<string> orderByParams_ {};
    // The page number of the instance status list. The value starts from **1**.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries per page for a paged query. Maximum value: **100**.
    shared_ptr<string> pageSize_ {};
    // The search keyword. Supports parameters such as **ip**, **InstanceName**, and **InstanceId**.
    shared_ptr<string> searchKey_ {};
    // The security group ID.
    shared_ptr<string> securityGroupId_ {};
    // The business status of the instance, which does not represent the actual running status of the instance.
    shared_ptr<vector<string>> serviceStatus_ {};
    // The instance status. Valid values:
    // 
    // - Running: Running.
    // - Stopped: Stopped.
    // - Expired: Expired.
    shared_ptr<string> status_ {};
    // The resource tags. This operation does not return tag information. Use this parameter in combination with the APIs in the tag category.
    shared_ptr<vector<DescribeInstancesRequest::Tags>> tags_ {};
    // The vSwitch ID.
    shared_ptr<string> vSwitchId_ {};
    // The VPD network ID.
    shared_ptr<string> vpdId_ {};
    // The VPD vSwitch ID.
    shared_ptr<string> vpdVSwitchId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
