// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETINSTANCELISTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETINSTANCELISTREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alikafka20190916
{
namespace Models
{
  class GetInstanceListRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetInstanceListRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(OrderId, orderId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(Series, series_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
    };
    friend void from_json(const Darabonba::Json& j, GetInstanceListRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(OrderId, orderId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(Series, series_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
    };
    GetInstanceListRequest() = default ;
    GetInstanceListRequest(const GetInstanceListRequest &) = default ;
    GetInstanceListRequest(GetInstanceListRequest &&) = default ;
    GetInstanceListRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetInstanceListRequest() = default ;
    GetInstanceListRequest& operator=(const GetInstanceListRequest &) = default ;
    GetInstanceListRequest& operator=(GetInstanceListRequest &&) = default ;
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
      // The tag key of the resource.
      // 
      // - If this parameter is left empty, all tag keys are matched.
      // 
      // - The tag key can be up to 128 characters in length. It cannot start with aliyun or acs:, and cannot contain `http://` or `https://`.
      shared_ptr<string> key_ {};
      // The tag value of the resource.
      // 
      // - If the tag key is empty, this parameter must be empty. If this parameter is left empty, all tag values are matched.
      // 
      // - The tag value can be up to 128 characters in length. It cannot start with aliyun or acs:, and cannot contain `http://` or `https://`.
      shared_ptr<string> value_ {};
    };

    virtual bool empty() const override { return this->instanceId_ == nullptr
        && this->orderId_ == nullptr && this->regionId_ == nullptr && this->resourceGroupId_ == nullptr && this->series_ == nullptr && this->tag_ == nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline const vector<string> & getInstanceId() const { DARABONBA_PTR_GET_CONST(instanceId_, vector<string>) };
    inline vector<string> getInstanceId() { DARABONBA_PTR_GET(instanceId_, vector<string>) };
    inline GetInstanceListRequest& setInstanceId(const vector<string> & instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };
    inline GetInstanceListRequest& setInstanceId(vector<string> && instanceId) { DARABONBA_PTR_SET_RVALUE(instanceId_, instanceId) };


    // orderId Field Functions 
    bool hasOrderId() const { return this->orderId_ != nullptr;};
    void deleteOrderId() { this->orderId_ = nullptr;};
    inline string getOrderId() const { DARABONBA_PTR_GET_DEFAULT(orderId_, "") };
    inline GetInstanceListRequest& setOrderId(string orderId) { DARABONBA_PTR_SET_VALUE(orderId_, orderId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline GetInstanceListRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline GetInstanceListRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // series Field Functions 
    bool hasSeries() const { return this->series_ != nullptr;};
    void deleteSeries() { this->series_ = nullptr;};
    inline string getSeries() const { DARABONBA_PTR_GET_DEFAULT(series_, "") };
    inline GetInstanceListRequest& setSeries(string series) { DARABONBA_PTR_SET_VALUE(series_, series) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<GetInstanceListRequest::Tag> & getTag() const { DARABONBA_PTR_GET_CONST(tag_, vector<GetInstanceListRequest::Tag>) };
    inline vector<GetInstanceListRequest::Tag> getTag() { DARABONBA_PTR_GET(tag_, vector<GetInstanceListRequest::Tag>) };
    inline GetInstanceListRequest& setTag(const vector<GetInstanceListRequest::Tag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline GetInstanceListRequest& setTag(vector<GetInstanceListRequest::Tag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


  protected:
    // The list of instance IDs.
    shared_ptr<vector<string>> instanceId_ {};
    // The order ID. You can obtain the order ID from <props="china">[Orders](https://usercenter2.aliyun.com/order/list?pageIndex=1&pageSize=20)<props="intl">[Order Management](https://usercenter2-intl.aliyun.com/order/list?pageIndex=1&pageSize=20&spm=5176.12818093.top-nav.ditem-ord.36f016d0OQFmJa) in Alibaba Cloud Expenses and Costs.>Notice: Serverless instances do not support querying by order ID.
    shared_ptr<string> orderId_ {};
    // The region ID of the instance.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // The resource group ID. You can query the ID in the Resource Management console.
    shared_ptr<string> resourceGroupId_ {};
    // The instance edition identity. You can filter instances of different editions based on the edition number. Valid values:
    // - v2
    // - v3
    // - confluent
    shared_ptr<string> series_ {};
    // The list of tags.
    shared_ptr<vector<GetInstanceListRequest::Tag>> tag_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alikafka20190916
#endif
