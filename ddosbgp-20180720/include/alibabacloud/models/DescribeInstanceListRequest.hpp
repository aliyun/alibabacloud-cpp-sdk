// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINSTANCELISTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINSTANCELISTREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddosbgp20180720
{
namespace Models
{
  class DescribeInstanceListRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInstanceListRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceIdList, instanceIdList_);
      DARABONBA_PTR_TO_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_TO_JSON(InstanceTypeList, instanceTypeList_);
      DARABONBA_PTR_TO_JSON(Ip, ip_);
      DARABONBA_PTR_TO_JSON(IpVersion, ipVersion_);
      DARABONBA_PTR_TO_JSON(Orderby, orderby_);
      DARABONBA_PTR_TO_JSON(Orderdire, orderdire_);
      DARABONBA_PTR_TO_JSON(PageNo, pageNo_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(Remark, remark_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInstanceListRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceIdList, instanceIdList_);
      DARABONBA_PTR_FROM_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_FROM_JSON(InstanceTypeList, instanceTypeList_);
      DARABONBA_PTR_FROM_JSON(Ip, ip_);
      DARABONBA_PTR_FROM_JSON(IpVersion, ipVersion_);
      DARABONBA_PTR_FROM_JSON(Orderby, orderby_);
      DARABONBA_PTR_FROM_JSON(Orderdire, orderdire_);
      DARABONBA_PTR_FROM_JSON(PageNo, pageNo_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(Remark, remark_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
    };
    DescribeInstanceListRequest() = default ;
    DescribeInstanceListRequest(const DescribeInstanceListRequest &) = default ;
    DescribeInstanceListRequest(DescribeInstanceListRequest &&) = default ;
    DescribeInstanceListRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInstanceListRequest() = default ;
    DescribeInstanceListRequest& operator=(const DescribeInstanceListRequest &) = default ;
    DescribeInstanceListRequest& operator=(DescribeInstanceListRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Tag : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Tag& obj) { 
        DARABONBA_PTR_TO_JSON(Key, key_);
        DARABONBA_PTR_TO_JSON(Value, value_);
      };
      friend void from_json(const Darabonba::Json& j, Tag& obj) { 
        DARABONBA_PTR_FROM_JSON(Key, key_);
        DARABONBA_PTR_FROM_JSON(Value, value_);
      };
      Tag() = default ;
      Tag(const Tag &) = default ;
      Tag(Tag &&) = default ;
      Tag(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Tag() = default ;
      Tag& operator=(const Tag &) = default ;
      Tag& operator=(Tag &&) = default ;
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
      inline Tag& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


      // value Field Functions 
      bool hasValue() const { return this->value_ != nullptr;};
      void deleteValue() { this->value_ = nullptr;};
      inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
      inline Tag& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    protected:
      // The key of the tag bound to the Anti-DDoS Origin instance to query.
      shared_ptr<string> key_ {};
      // The value of the tag bound to the Anti-DDoS Origin instance to query.
      shared_ptr<string> value_ {};
    };

    virtual bool empty() const override { return this->instanceIdList_ == nullptr
        && this->instanceType_ == nullptr && this->instanceTypeList_ == nullptr && this->ip_ == nullptr && this->ipVersion_ == nullptr && this->orderby_ == nullptr
        && this->orderdire_ == nullptr && this->pageNo_ == nullptr && this->pageSize_ == nullptr && this->regionId_ == nullptr && this->remark_ == nullptr
        && this->resourceGroupId_ == nullptr && this->tag_ == nullptr; };
    // instanceIdList Field Functions 
    bool hasInstanceIdList() const { return this->instanceIdList_ != nullptr;};
    void deleteInstanceIdList() { this->instanceIdList_ = nullptr;};
    inline string getInstanceIdList() const { DARABONBA_PTR_GET_DEFAULT(instanceIdList_, "") };
    inline DescribeInstanceListRequest& setInstanceIdList(string instanceIdList) { DARABONBA_PTR_SET_VALUE(instanceIdList_, instanceIdList) };


    // instanceType Field Functions 
    bool hasInstanceType() const { return this->instanceType_ != nullptr;};
    void deleteInstanceType() { this->instanceType_ = nullptr;};
    inline string getInstanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
    inline DescribeInstanceListRequest& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


    // instanceTypeList Field Functions 
    bool hasInstanceTypeList() const { return this->instanceTypeList_ != nullptr;};
    void deleteInstanceTypeList() { this->instanceTypeList_ = nullptr;};
    inline const vector<string> & getInstanceTypeList() const { DARABONBA_PTR_GET_CONST(instanceTypeList_, vector<string>) };
    inline vector<string> getInstanceTypeList() { DARABONBA_PTR_GET(instanceTypeList_, vector<string>) };
    inline DescribeInstanceListRequest& setInstanceTypeList(const vector<string> & instanceTypeList) { DARABONBA_PTR_SET_VALUE(instanceTypeList_, instanceTypeList) };
    inline DescribeInstanceListRequest& setInstanceTypeList(vector<string> && instanceTypeList) { DARABONBA_PTR_SET_RVALUE(instanceTypeList_, instanceTypeList) };


    // ip Field Functions 
    bool hasIp() const { return this->ip_ != nullptr;};
    void deleteIp() { this->ip_ = nullptr;};
    inline string getIp() const { DARABONBA_PTR_GET_DEFAULT(ip_, "") };
    inline DescribeInstanceListRequest& setIp(string ip) { DARABONBA_PTR_SET_VALUE(ip_, ip) };


    // ipVersion Field Functions 
    bool hasIpVersion() const { return this->ipVersion_ != nullptr;};
    void deleteIpVersion() { this->ipVersion_ = nullptr;};
    inline string getIpVersion() const { DARABONBA_PTR_GET_DEFAULT(ipVersion_, "") };
    inline DescribeInstanceListRequest& setIpVersion(string ipVersion) { DARABONBA_PTR_SET_VALUE(ipVersion_, ipVersion) };


    // orderby Field Functions 
    bool hasOrderby() const { return this->orderby_ != nullptr;};
    void deleteOrderby() { this->orderby_ = nullptr;};
    inline string getOrderby() const { DARABONBA_PTR_GET_DEFAULT(orderby_, "") };
    inline DescribeInstanceListRequest& setOrderby(string orderby) { DARABONBA_PTR_SET_VALUE(orderby_, orderby) };


    // orderdire Field Functions 
    bool hasOrderdire() const { return this->orderdire_ != nullptr;};
    void deleteOrderdire() { this->orderdire_ = nullptr;};
    inline string getOrderdire() const { DARABONBA_PTR_GET_DEFAULT(orderdire_, "") };
    inline DescribeInstanceListRequest& setOrderdire(string orderdire) { DARABONBA_PTR_SET_VALUE(orderdire_, orderdire) };


    // pageNo Field Functions 
    bool hasPageNo() const { return this->pageNo_ != nullptr;};
    void deletePageNo() { this->pageNo_ = nullptr;};
    inline int32_t getPageNo() const { DARABONBA_PTR_GET_DEFAULT(pageNo_, 0) };
    inline DescribeInstanceListRequest& setPageNo(int32_t pageNo) { DARABONBA_PTR_SET_VALUE(pageNo_, pageNo) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeInstanceListRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeInstanceListRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // remark Field Functions 
    bool hasRemark() const { return this->remark_ != nullptr;};
    void deleteRemark() { this->remark_ = nullptr;};
    inline string getRemark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
    inline DescribeInstanceListRequest& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline DescribeInstanceListRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<DescribeInstanceListRequest::Tag> & getTag() const { DARABONBA_PTR_GET_CONST(tag_, vector<DescribeInstanceListRequest::Tag>) };
    inline vector<DescribeInstanceListRequest::Tag> getTag() { DARABONBA_PTR_GET(tag_, vector<DescribeInstanceListRequest::Tag>) };
    inline DescribeInstanceListRequest& setTag(const vector<DescribeInstanceListRequest::Tag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline DescribeInstanceListRequest& setTag(vector<DescribeInstanceListRequest::Tag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


  protected:
    // The IDs of the Anti-DDoS Origin instances to query. Specify the value in the `["<Instance ID 1>","<Instance ID 2>",……]` format.
    shared_ptr<string> instanceIdList_ {};
    // The mitigation plan type of the Anti-DDoS Origin instance to query. Valid values:
    // 
    // - **0**: Professional.
    // - **1**: Enterprise.
    shared_ptr<string> instanceType_ {};
    // The mitigation plan types of the Anti-DDoS Origin instances to query.
    shared_ptr<vector<string>> instanceTypeList_ {};
    // The IP address of the protected object for the Anti-DDoS Origin instance to query.
    shared_ptr<string> ip_ {};
    // The protocol type of the IP assets protected by the Anti-DDoS Origin instance to query. Valid values:
    // 
    // - **IPv4**: IPv4 protocol.
    // - **IPv6**: IPv6 protocol.
    shared_ptr<string> ipVersion_ {};
    // The field used to sort the Anti-DDoS Origin instance list. The value is fixed as **expireTime**, which indicates that instances are sorted by expiration time.
    // 
    // You can use the **Orderdire** parameter to specify the sort order.
    shared_ptr<string> orderby_ {};
    // The sort order. Valid values:
    // 
    // - **desc** (default): descending order by expiration time.
    // - **asc**: ascending order by expiration time.
    shared_ptr<string> orderdire_ {};
    // The number of the page to return when paging is used.
    // 
    // This parameter is required.
    shared_ptr<int32_t> pageNo_ {};
    // The number of instances on each page when paging is used.
    // 
    // This parameter is required.
    shared_ptr<int32_t> pageSize_ {};
    // The region ID of the Anti-DDoS Origin instance to query.
    // 
    // > You can call [DescribeRegions](https://help.aliyun.com/document_detail/118703.html) to query all region IDs supported by Anti-DDoS Origin.
    shared_ptr<string> regionId_ {};
    // The remark of the Anti-DDoS Origin instance to query. Fuzzy match is supported.
    shared_ptr<string> remark_ {};
    // The ID of the resource group to which the Anti-DDoS Origin instance belongs in Resource Management.
    // 
    // If you do not specify this parameter, the instance belongs to the default resource group.
    shared_ptr<string> resourceGroupId_ {};
    // The tags bound to the Anti-DDoS Origin instance to query.
    shared_ptr<vector<DescribeInstanceListRequest::Tag>> tag_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddosbgp20180720
#endif
