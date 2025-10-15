// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTNETWORKACCESSPATHSRESPONSEBODYNETWORKACCESSPATHS_HPP_
#define ALIBABACLOUD_MODELS_LISTNETWORKACCESSPATHSRESPONSEBODYNETWORKACCESSPATHS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class ListNetworkAccessPathsResponseBodyNetworkAccessPaths : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListNetworkAccessPathsResponseBodyNetworkAccessPaths& obj) { 
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(NetworkAccessEndpointId, networkAccessEndpointId_);
      DARABONBA_PTR_TO_JSON(NetworkAccessPathId, networkAccessPathId_);
      DARABONBA_PTR_TO_JSON(NetworkInterfaceId, networkInterfaceId_);
      DARABONBA_PTR_TO_JSON(PrivateIpAddress, privateIpAddress_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
      DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
    };
    friend void from_json(const Darabonba::Json& j, ListNetworkAccessPathsResponseBodyNetworkAccessPaths& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(NetworkAccessEndpointId, networkAccessEndpointId_);
      DARABONBA_PTR_FROM_JSON(NetworkAccessPathId, networkAccessPathId_);
      DARABONBA_PTR_FROM_JSON(NetworkInterfaceId, networkInterfaceId_);
      DARABONBA_PTR_FROM_JSON(PrivateIpAddress, privateIpAddress_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
      DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
    };
    ListNetworkAccessPathsResponseBodyNetworkAccessPaths() = default ;
    ListNetworkAccessPathsResponseBodyNetworkAccessPaths(const ListNetworkAccessPathsResponseBodyNetworkAccessPaths &) = default ;
    ListNetworkAccessPathsResponseBodyNetworkAccessPaths(ListNetworkAccessPathsResponseBodyNetworkAccessPaths &&) = default ;
    ListNetworkAccessPathsResponseBodyNetworkAccessPaths(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListNetworkAccessPathsResponseBodyNetworkAccessPaths() = default ;
    ListNetworkAccessPathsResponseBodyNetworkAccessPaths& operator=(const ListNetworkAccessPathsResponseBodyNetworkAccessPaths &) = default ;
    ListNetworkAccessPathsResponseBodyNetworkAccessPaths& operator=(ListNetworkAccessPathsResponseBodyNetworkAccessPaths &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->createTime_ == nullptr
        && return this->instanceId_ == nullptr && return this->networkAccessEndpointId_ == nullptr && return this->networkAccessPathId_ == nullptr && return this->networkInterfaceId_ == nullptr && return this->privateIpAddress_ == nullptr
        && return this->status_ == nullptr && return this->updateTime_ == nullptr && return this->vSwitchId_ == nullptr; };
    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline int64_t createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
    inline ListNetworkAccessPathsResponseBodyNetworkAccessPaths& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ListNetworkAccessPathsResponseBodyNetworkAccessPaths& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // networkAccessEndpointId Field Functions 
    bool hasNetworkAccessEndpointId() const { return this->networkAccessEndpointId_ != nullptr;};
    void deleteNetworkAccessEndpointId() { this->networkAccessEndpointId_ = nullptr;};
    inline string networkAccessEndpointId() const { DARABONBA_PTR_GET_DEFAULT(networkAccessEndpointId_, "") };
    inline ListNetworkAccessPathsResponseBodyNetworkAccessPaths& setNetworkAccessEndpointId(string networkAccessEndpointId) { DARABONBA_PTR_SET_VALUE(networkAccessEndpointId_, networkAccessEndpointId) };


    // networkAccessPathId Field Functions 
    bool hasNetworkAccessPathId() const { return this->networkAccessPathId_ != nullptr;};
    void deleteNetworkAccessPathId() { this->networkAccessPathId_ = nullptr;};
    inline string networkAccessPathId() const { DARABONBA_PTR_GET_DEFAULT(networkAccessPathId_, "") };
    inline ListNetworkAccessPathsResponseBodyNetworkAccessPaths& setNetworkAccessPathId(string networkAccessPathId) { DARABONBA_PTR_SET_VALUE(networkAccessPathId_, networkAccessPathId) };


    // networkInterfaceId Field Functions 
    bool hasNetworkInterfaceId() const { return this->networkInterfaceId_ != nullptr;};
    void deleteNetworkInterfaceId() { this->networkInterfaceId_ = nullptr;};
    inline string networkInterfaceId() const { DARABONBA_PTR_GET_DEFAULT(networkInterfaceId_, "") };
    inline ListNetworkAccessPathsResponseBodyNetworkAccessPaths& setNetworkInterfaceId(string networkInterfaceId) { DARABONBA_PTR_SET_VALUE(networkInterfaceId_, networkInterfaceId) };


    // privateIpAddress Field Functions 
    bool hasPrivateIpAddress() const { return this->privateIpAddress_ != nullptr;};
    void deletePrivateIpAddress() { this->privateIpAddress_ = nullptr;};
    inline string privateIpAddress() const { DARABONBA_PTR_GET_DEFAULT(privateIpAddress_, "") };
    inline ListNetworkAccessPathsResponseBodyNetworkAccessPaths& setPrivateIpAddress(string privateIpAddress) { DARABONBA_PTR_SET_VALUE(privateIpAddress_, privateIpAddress) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListNetworkAccessPathsResponseBodyNetworkAccessPaths& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline int64_t updateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, 0L) };
    inline ListNetworkAccessPathsResponseBodyNetworkAccessPaths& setUpdateTime(int64_t updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


    // vSwitchId Field Functions 
    bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
    void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
    inline string vSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
    inline ListNetworkAccessPathsResponseBodyNetworkAccessPaths& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


  protected:
    // The creation time.
    std::shared_ptr<int64_t> createTime_ = nullptr;
    // The instance ID.
    std::shared_ptr<string> instanceId_ = nullptr;
    // Network access endpoint ID.
    std::shared_ptr<string> networkAccessEndpointId_ = nullptr;
    // Network access path ID
    std::shared_ptr<string> networkAccessPathId_ = nullptr;
    // Network interface ID
    std::shared_ptr<string> networkInterfaceId_ = nullptr;
    // The private IP address.
    std::shared_ptr<string> privateIpAddress_ = nullptr;
    // Network access path status
    std::shared_ptr<string> status_ = nullptr;
    // The update time.
    std::shared_ptr<int64_t> updateTime_ = nullptr;
    // The ID of a vSwitch.
    std::shared_ptr<string> vSwitchId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
