// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETLISTENERATTRIBUTERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETLISTENERATTRIBUTERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gwlb20240415
{
namespace Models
{
  class GetListenerAttributeResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetListenerAttributeResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ListenerDescription, listenerDescription_);
      DARABONBA_PTR_TO_JSON(ListenerId, listenerId_);
      DARABONBA_PTR_TO_JSON(ListenerStatus, listenerStatus_);
      DARABONBA_PTR_TO_JSON(LoadBalancerId, loadBalancerId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ServerGroupId, serverGroupId_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
      DARABONBA_PTR_TO_JSON(TcpIdleTimeout, tcpIdleTimeout_);
    };
    friend void from_json(const Darabonba::Json& j, GetListenerAttributeResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ListenerDescription, listenerDescription_);
      DARABONBA_PTR_FROM_JSON(ListenerId, listenerId_);
      DARABONBA_PTR_FROM_JSON(ListenerStatus, listenerStatus_);
      DARABONBA_PTR_FROM_JSON(LoadBalancerId, loadBalancerId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ServerGroupId, serverGroupId_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
      DARABONBA_PTR_FROM_JSON(TcpIdleTimeout, tcpIdleTimeout_);
    };
    GetListenerAttributeResponseBody() = default ;
    GetListenerAttributeResponseBody(const GetListenerAttributeResponseBody &) = default ;
    GetListenerAttributeResponseBody(GetListenerAttributeResponseBody &&) = default ;
    GetListenerAttributeResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetListenerAttributeResponseBody() = default ;
    GetListenerAttributeResponseBody& operator=(const GetListenerAttributeResponseBody &) = default ;
    GetListenerAttributeResponseBody& operator=(GetListenerAttributeResponseBody &&) = default ;
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
      // The tag key. The tag key cannot be an empty string. The tag key can be up to 128 characters in length, and cannot start with `acs: `or `aliyun`. The tag key cannot contain `http://` or `https://`.
      shared_ptr<string> key_ {};
      // The tag value. The tag value can be up to 256 characters in length and cannot contain `http://` or `https://`.
      shared_ptr<string> value_ {};
    };

    virtual bool empty() const override { return this->listenerDescription_ == nullptr
        && this->listenerId_ == nullptr && this->listenerStatus_ == nullptr && this->loadBalancerId_ == nullptr && this->regionId_ == nullptr && this->requestId_ == nullptr
        && this->serverGroupId_ == nullptr && this->tags_ == nullptr && this->tcpIdleTimeout_ == nullptr; };
    // listenerDescription Field Functions 
    bool hasListenerDescription() const { return this->listenerDescription_ != nullptr;};
    void deleteListenerDescription() { this->listenerDescription_ = nullptr;};
    inline string getListenerDescription() const { DARABONBA_PTR_GET_DEFAULT(listenerDescription_, "") };
    inline GetListenerAttributeResponseBody& setListenerDescription(string listenerDescription) { DARABONBA_PTR_SET_VALUE(listenerDescription_, listenerDescription) };


    // listenerId Field Functions 
    bool hasListenerId() const { return this->listenerId_ != nullptr;};
    void deleteListenerId() { this->listenerId_ = nullptr;};
    inline string getListenerId() const { DARABONBA_PTR_GET_DEFAULT(listenerId_, "") };
    inline GetListenerAttributeResponseBody& setListenerId(string listenerId) { DARABONBA_PTR_SET_VALUE(listenerId_, listenerId) };


    // listenerStatus Field Functions 
    bool hasListenerStatus() const { return this->listenerStatus_ != nullptr;};
    void deleteListenerStatus() { this->listenerStatus_ = nullptr;};
    inline string getListenerStatus() const { DARABONBA_PTR_GET_DEFAULT(listenerStatus_, "") };
    inline GetListenerAttributeResponseBody& setListenerStatus(string listenerStatus) { DARABONBA_PTR_SET_VALUE(listenerStatus_, listenerStatus) };


    // loadBalancerId Field Functions 
    bool hasLoadBalancerId() const { return this->loadBalancerId_ != nullptr;};
    void deleteLoadBalancerId() { this->loadBalancerId_ = nullptr;};
    inline string getLoadBalancerId() const { DARABONBA_PTR_GET_DEFAULT(loadBalancerId_, "") };
    inline GetListenerAttributeResponseBody& setLoadBalancerId(string loadBalancerId) { DARABONBA_PTR_SET_VALUE(loadBalancerId_, loadBalancerId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline GetListenerAttributeResponseBody& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetListenerAttributeResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // serverGroupId Field Functions 
    bool hasServerGroupId() const { return this->serverGroupId_ != nullptr;};
    void deleteServerGroupId() { this->serverGroupId_ = nullptr;};
    inline string getServerGroupId() const { DARABONBA_PTR_GET_DEFAULT(serverGroupId_, "") };
    inline GetListenerAttributeResponseBody& setServerGroupId(string serverGroupId) { DARABONBA_PTR_SET_VALUE(serverGroupId_, serverGroupId) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<GetListenerAttributeResponseBody::Tags> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<GetListenerAttributeResponseBody::Tags>) };
    inline vector<GetListenerAttributeResponseBody::Tags> getTags() { DARABONBA_PTR_GET(tags_, vector<GetListenerAttributeResponseBody::Tags>) };
    inline GetListenerAttributeResponseBody& setTags(const vector<GetListenerAttributeResponseBody::Tags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline GetListenerAttributeResponseBody& setTags(vector<GetListenerAttributeResponseBody::Tags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // tcpIdleTimeout Field Functions 
    bool hasTcpIdleTimeout() const { return this->tcpIdleTimeout_ != nullptr;};
    void deleteTcpIdleTimeout() { this->tcpIdleTimeout_ = nullptr;};
    inline int32_t getTcpIdleTimeout() const { DARABONBA_PTR_GET_DEFAULT(tcpIdleTimeout_, 0) };
    inline GetListenerAttributeResponseBody& setTcpIdleTimeout(int32_t tcpIdleTimeout) { DARABONBA_PTR_SET_VALUE(tcpIdleTimeout_, tcpIdleTimeout) };


  protected:
    // The listener description.
    // 
    // The description must be 2 to 256 characters in length, and can contain letters, digits, commas (,), periods (.), semicolons (;), forward slashes (/), at signs (@), underscores (_), and hyphens (-).
    shared_ptr<string> listenerDescription_ {};
    // The listener ID.
    shared_ptr<string> listenerId_ {};
    // The listener status. Valid values:
    // 
    // *   **Provisioning**: The listener is being created.
    // *   **Running**: The listener is running.
    // *   **Configuring**: The listener is being configured.
    // *   **Deleting**: The listener is being deleted.
    shared_ptr<string> listenerStatus_ {};
    // The GWLB instance ID.
    shared_ptr<string> loadBalancerId_ {};
    // The region ID of the GWLB instance.
    shared_ptr<string> regionId_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The server group ID.
    shared_ptr<string> serverGroupId_ {};
    // The tags.
    shared_ptr<vector<GetListenerAttributeResponseBody::Tags>> tags_ {};
    // The timeout period of an idle TCP connection. Unit: seconds.
    shared_ptr<int32_t> tcpIdleTimeout_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gwlb20240415
#endif
