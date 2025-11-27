// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETINSTANCELISTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETINSTANCELISTREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetInstanceListRequestTag.hpp>
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
    virtual bool empty() const override { return this->instanceId_ == nullptr
        && return this->orderId_ == nullptr && return this->regionId_ == nullptr && return this->resourceGroupId_ == nullptr && return this->series_ == nullptr && return this->tag_ == nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline const vector<string> & instanceId() const { DARABONBA_PTR_GET_CONST(instanceId_, vector<string>) };
    inline vector<string> instanceId() { DARABONBA_PTR_GET(instanceId_, vector<string>) };
    inline GetInstanceListRequest& setInstanceId(const vector<string> & instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };
    inline GetInstanceListRequest& setInstanceId(vector<string> && instanceId) { DARABONBA_PTR_SET_RVALUE(instanceId_, instanceId) };


    // orderId Field Functions 
    bool hasOrderId() const { return this->orderId_ != nullptr;};
    void deleteOrderId() { this->orderId_ = nullptr;};
    inline string orderId() const { DARABONBA_PTR_GET_DEFAULT(orderId_, "") };
    inline GetInstanceListRequest& setOrderId(string orderId) { DARABONBA_PTR_SET_VALUE(orderId_, orderId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline GetInstanceListRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline GetInstanceListRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // series Field Functions 
    bool hasSeries() const { return this->series_ != nullptr;};
    void deleteSeries() { this->series_ = nullptr;};
    inline string series() const { DARABONBA_PTR_GET_DEFAULT(series_, "") };
    inline GetInstanceListRequest& setSeries(string series) { DARABONBA_PTR_SET_VALUE(series_, series) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<GetInstanceListRequestTag> & tag() const { DARABONBA_PTR_GET_CONST(tag_, vector<GetInstanceListRequestTag>) };
    inline vector<GetInstanceListRequestTag> tag() { DARABONBA_PTR_GET(tag_, vector<GetInstanceListRequestTag>) };
    inline GetInstanceListRequest& setTag(const vector<GetInstanceListRequestTag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline GetInstanceListRequest& setTag(vector<GetInstanceListRequestTag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


  protected:
    // The IDs of instances.
    std::shared_ptr<vector<string>> instanceId_ = nullptr;
    // The ID of the order. You can obtain the order ID on the [Orders](https://usercenter2-intl.aliyun.com/order/list?pageIndex=1\\&pageSize=20\\&spm=5176.12818093.top-nav.ditem-ord.36f016d0OQFmJa) page in Alibaba Cloud User Center.
    std::shared_ptr<string> orderId_ = nullptr;
    // The ID of the region where the instance resides.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    // The ID of the resource group. You can obtain this ID on the Resource Group page in the Resource Management console.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // The instance version. You can use instance versions to filter different versions of instances. Valid values:
    // 
    // *   v2
    // *   v3
    // *   confluent
    std::shared_ptr<string> series_ = nullptr;
    // The tags.
    std::shared_ptr<vector<GetInstanceListRequestTag>> tag_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alikafka20190916
#endif
