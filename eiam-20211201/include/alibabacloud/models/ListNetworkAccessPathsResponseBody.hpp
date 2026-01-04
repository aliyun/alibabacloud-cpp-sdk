// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTNETWORKACCESSPATHSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTNETWORKACCESSPATHSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class ListNetworkAccessPathsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListNetworkAccessPathsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(NetworkAccessPaths, networkAccessPaths_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListNetworkAccessPathsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(NetworkAccessPaths, networkAccessPaths_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListNetworkAccessPathsResponseBody() = default ;
    ListNetworkAccessPathsResponseBody(const ListNetworkAccessPathsResponseBody &) = default ;
    ListNetworkAccessPathsResponseBody(ListNetworkAccessPathsResponseBody &&) = default ;
    ListNetworkAccessPathsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListNetworkAccessPathsResponseBody() = default ;
    ListNetworkAccessPathsResponseBody& operator=(const ListNetworkAccessPathsResponseBody &) = default ;
    ListNetworkAccessPathsResponseBody& operator=(ListNetworkAccessPathsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class NetworkAccessPaths : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const NetworkAccessPaths& obj) { 
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
      friend void from_json(const Darabonba::Json& j, NetworkAccessPaths& obj) { 
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
      NetworkAccessPaths() = default ;
      NetworkAccessPaths(const NetworkAccessPaths &) = default ;
      NetworkAccessPaths(NetworkAccessPaths &&) = default ;
      NetworkAccessPaths(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~NetworkAccessPaths() = default ;
      NetworkAccessPaths& operator=(const NetworkAccessPaths &) = default ;
      NetworkAccessPaths& operator=(NetworkAccessPaths &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->createTime_ == nullptr
        && this->instanceId_ == nullptr && this->networkAccessEndpointId_ == nullptr && this->networkAccessPathId_ == nullptr && this->networkInterfaceId_ == nullptr && this->privateIpAddress_ == nullptr
        && this->status_ == nullptr && this->updateTime_ == nullptr && this->vSwitchId_ == nullptr; };
      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline int64_t getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
      inline NetworkAccessPaths& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline NetworkAccessPaths& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // networkAccessEndpointId Field Functions 
      bool hasNetworkAccessEndpointId() const { return this->networkAccessEndpointId_ != nullptr;};
      void deleteNetworkAccessEndpointId() { this->networkAccessEndpointId_ = nullptr;};
      inline string getNetworkAccessEndpointId() const { DARABONBA_PTR_GET_DEFAULT(networkAccessEndpointId_, "") };
      inline NetworkAccessPaths& setNetworkAccessEndpointId(string networkAccessEndpointId) { DARABONBA_PTR_SET_VALUE(networkAccessEndpointId_, networkAccessEndpointId) };


      // networkAccessPathId Field Functions 
      bool hasNetworkAccessPathId() const { return this->networkAccessPathId_ != nullptr;};
      void deleteNetworkAccessPathId() { this->networkAccessPathId_ = nullptr;};
      inline string getNetworkAccessPathId() const { DARABONBA_PTR_GET_DEFAULT(networkAccessPathId_, "") };
      inline NetworkAccessPaths& setNetworkAccessPathId(string networkAccessPathId) { DARABONBA_PTR_SET_VALUE(networkAccessPathId_, networkAccessPathId) };


      // networkInterfaceId Field Functions 
      bool hasNetworkInterfaceId() const { return this->networkInterfaceId_ != nullptr;};
      void deleteNetworkInterfaceId() { this->networkInterfaceId_ = nullptr;};
      inline string getNetworkInterfaceId() const { DARABONBA_PTR_GET_DEFAULT(networkInterfaceId_, "") };
      inline NetworkAccessPaths& setNetworkInterfaceId(string networkInterfaceId) { DARABONBA_PTR_SET_VALUE(networkInterfaceId_, networkInterfaceId) };


      // privateIpAddress Field Functions 
      bool hasPrivateIpAddress() const { return this->privateIpAddress_ != nullptr;};
      void deletePrivateIpAddress() { this->privateIpAddress_ = nullptr;};
      inline string getPrivateIpAddress() const { DARABONBA_PTR_GET_DEFAULT(privateIpAddress_, "") };
      inline NetworkAccessPaths& setPrivateIpAddress(string privateIpAddress) { DARABONBA_PTR_SET_VALUE(privateIpAddress_, privateIpAddress) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline NetworkAccessPaths& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // updateTime Field Functions 
      bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
      void deleteUpdateTime() { this->updateTime_ = nullptr;};
      inline int64_t getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, 0L) };
      inline NetworkAccessPaths& setUpdateTime(int64_t updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


      // vSwitchId Field Functions 
      bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
      void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
      inline string getVSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
      inline NetworkAccessPaths& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


    protected:
      // The creation time.
      shared_ptr<int64_t> createTime_ {};
      // The instance ID.
      shared_ptr<string> instanceId_ {};
      // Network access endpoint ID.
      shared_ptr<string> networkAccessEndpointId_ {};
      // Network access path ID
      shared_ptr<string> networkAccessPathId_ {};
      // Network interface ID
      shared_ptr<string> networkInterfaceId_ {};
      // The private IP address.
      shared_ptr<string> privateIpAddress_ {};
      // Network access path status
      shared_ptr<string> status_ {};
      // The update time.
      shared_ptr<int64_t> updateTime_ {};
      // The ID of a vSwitch.
      shared_ptr<string> vSwitchId_ {};
    };

    virtual bool empty() const override { return this->networkAccessPaths_ == nullptr
        && this->requestId_ == nullptr; };
    // networkAccessPaths Field Functions 
    bool hasNetworkAccessPaths() const { return this->networkAccessPaths_ != nullptr;};
    void deleteNetworkAccessPaths() { this->networkAccessPaths_ = nullptr;};
    inline const vector<ListNetworkAccessPathsResponseBody::NetworkAccessPaths> & getNetworkAccessPaths() const { DARABONBA_PTR_GET_CONST(networkAccessPaths_, vector<ListNetworkAccessPathsResponseBody::NetworkAccessPaths>) };
    inline vector<ListNetworkAccessPathsResponseBody::NetworkAccessPaths> getNetworkAccessPaths() { DARABONBA_PTR_GET(networkAccessPaths_, vector<ListNetworkAccessPathsResponseBody::NetworkAccessPaths>) };
    inline ListNetworkAccessPathsResponseBody& setNetworkAccessPaths(const vector<ListNetworkAccessPathsResponseBody::NetworkAccessPaths> & networkAccessPaths) { DARABONBA_PTR_SET_VALUE(networkAccessPaths_, networkAccessPaths) };
    inline ListNetworkAccessPathsResponseBody& setNetworkAccessPaths(vector<ListNetworkAccessPathsResponseBody::NetworkAccessPaths> && networkAccessPaths) { DARABONBA_PTR_SET_RVALUE(networkAccessPaths_, networkAccessPaths) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListNetworkAccessPathsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // Network access paths
    shared_ptr<vector<ListNetworkAccessPathsResponseBody::NetworkAccessPaths>> networkAccessPaths_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
