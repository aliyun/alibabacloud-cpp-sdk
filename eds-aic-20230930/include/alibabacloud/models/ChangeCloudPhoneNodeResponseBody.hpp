// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHANGECLOUDPHONENODERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CHANGECLOUDPHONENODERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EdsAic20230930
{
namespace Models
{
  class ChangeCloudPhoneNodeResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ChangeCloudPhoneNodeResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(NodeInfos, nodeInfos_);
      DARABONBA_PTR_TO_JSON(OrderId, orderId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ChangeCloudPhoneNodeResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(NodeInfos, nodeInfos_);
      DARABONBA_PTR_FROM_JSON(OrderId, orderId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ChangeCloudPhoneNodeResponseBody() = default ;
    ChangeCloudPhoneNodeResponseBody(const ChangeCloudPhoneNodeResponseBody &) = default ;
    ChangeCloudPhoneNodeResponseBody(ChangeCloudPhoneNodeResponseBody &&) = default ;
    ChangeCloudPhoneNodeResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ChangeCloudPhoneNodeResponseBody() = default ;
    ChangeCloudPhoneNodeResponseBody& operator=(const ChangeCloudPhoneNodeResponseBody &) = default ;
    ChangeCloudPhoneNodeResponseBody& operator=(ChangeCloudPhoneNodeResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class NodeInfos : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const NodeInfos& obj) { 
        DARABONBA_PTR_TO_JSON(InstanceInfos, instanceInfos_);
        DARABONBA_PTR_TO_JSON(NodeId, nodeId_);
        DARABONBA_PTR_TO_JSON(ShareDataVolume, shareDataVolume_);
      };
      friend void from_json(const Darabonba::Json& j, NodeInfos& obj) { 
        DARABONBA_PTR_FROM_JSON(InstanceInfos, instanceInfos_);
        DARABONBA_PTR_FROM_JSON(NodeId, nodeId_);
        DARABONBA_PTR_FROM_JSON(ShareDataVolume, shareDataVolume_);
      };
      NodeInfos() = default ;
      NodeInfos(const NodeInfos &) = default ;
      NodeInfos(NodeInfos &&) = default ;
      NodeInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~NodeInfos() = default ;
      NodeInfos& operator=(const NodeInfos &) = default ;
      NodeInfos& operator=(NodeInfos &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class InstanceInfos : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const InstanceInfos& obj) { 
          DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_TO_JSON(PhoneDataVolume, phoneDataVolume_);
        };
        friend void from_json(const Darabonba::Json& j, InstanceInfos& obj) { 
          DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_FROM_JSON(PhoneDataVolume, phoneDataVolume_);
        };
        InstanceInfos() = default ;
        InstanceInfos(const InstanceInfos &) = default ;
        InstanceInfos(InstanceInfos &&) = default ;
        InstanceInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~InstanceInfos() = default ;
        InstanceInfos& operator=(const InstanceInfos &) = default ;
        InstanceInfos& operator=(InstanceInfos &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->instanceId_ == nullptr
        && this->phoneDataVolume_ == nullptr; };
        // instanceId Field Functions 
        bool hasInstanceId() const { return this->instanceId_ != nullptr;};
        void deleteInstanceId() { this->instanceId_ = nullptr;};
        inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
        inline InstanceInfos& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


        // phoneDataVolume Field Functions 
        bool hasPhoneDataVolume() const { return this->phoneDataVolume_ != nullptr;};
        void deletePhoneDataVolume() { this->phoneDataVolume_ = nullptr;};
        inline int32_t getPhoneDataVolume() const { DARABONBA_PTR_GET_DEFAULT(phoneDataVolume_, 0) };
        inline InstanceInfos& setPhoneDataVolume(int32_t phoneDataVolume) { DARABONBA_PTR_SET_VALUE(phoneDataVolume_, phoneDataVolume) };


      protected:
        shared_ptr<string> instanceId_ {};
        shared_ptr<int32_t> phoneDataVolume_ {};
      };

      virtual bool empty() const override { return this->instanceInfos_ == nullptr
        && this->nodeId_ == nullptr && this->shareDataVolume_ == nullptr; };
      // instanceInfos Field Functions 
      bool hasInstanceInfos() const { return this->instanceInfos_ != nullptr;};
      void deleteInstanceInfos() { this->instanceInfos_ = nullptr;};
      inline const vector<NodeInfos::InstanceInfos> & getInstanceInfos() const { DARABONBA_PTR_GET_CONST(instanceInfos_, vector<NodeInfos::InstanceInfos>) };
      inline vector<NodeInfos::InstanceInfos> getInstanceInfos() { DARABONBA_PTR_GET(instanceInfos_, vector<NodeInfos::InstanceInfos>) };
      inline NodeInfos& setInstanceInfos(const vector<NodeInfos::InstanceInfos> & instanceInfos) { DARABONBA_PTR_SET_VALUE(instanceInfos_, instanceInfos) };
      inline NodeInfos& setInstanceInfos(vector<NodeInfos::InstanceInfos> && instanceInfos) { DARABONBA_PTR_SET_RVALUE(instanceInfos_, instanceInfos) };


      // nodeId Field Functions 
      bool hasNodeId() const { return this->nodeId_ != nullptr;};
      void deleteNodeId() { this->nodeId_ = nullptr;};
      inline string getNodeId() const { DARABONBA_PTR_GET_DEFAULT(nodeId_, "") };
      inline NodeInfos& setNodeId(string nodeId) { DARABONBA_PTR_SET_VALUE(nodeId_, nodeId) };


      // shareDataVolume Field Functions 
      bool hasShareDataVolume() const { return this->shareDataVolume_ != nullptr;};
      void deleteShareDataVolume() { this->shareDataVolume_ = nullptr;};
      inline int32_t getShareDataVolume() const { DARABONBA_PTR_GET_DEFAULT(shareDataVolume_, 0) };
      inline NodeInfos& setShareDataVolume(int32_t shareDataVolume) { DARABONBA_PTR_SET_VALUE(shareDataVolume_, shareDataVolume) };


    protected:
      shared_ptr<vector<NodeInfos::InstanceInfos>> instanceInfos_ {};
      shared_ptr<string> nodeId_ {};
      shared_ptr<int32_t> shareDataVolume_ {};
    };

    virtual bool empty() const override { return this->nodeInfos_ == nullptr
        && this->orderId_ == nullptr && this->requestId_ == nullptr; };
    // nodeInfos Field Functions 
    bool hasNodeInfos() const { return this->nodeInfos_ != nullptr;};
    void deleteNodeInfos() { this->nodeInfos_ = nullptr;};
    inline const vector<ChangeCloudPhoneNodeResponseBody::NodeInfos> & getNodeInfos() const { DARABONBA_PTR_GET_CONST(nodeInfos_, vector<ChangeCloudPhoneNodeResponseBody::NodeInfos>) };
    inline vector<ChangeCloudPhoneNodeResponseBody::NodeInfos> getNodeInfos() { DARABONBA_PTR_GET(nodeInfos_, vector<ChangeCloudPhoneNodeResponseBody::NodeInfos>) };
    inline ChangeCloudPhoneNodeResponseBody& setNodeInfos(const vector<ChangeCloudPhoneNodeResponseBody::NodeInfos> & nodeInfos) { DARABONBA_PTR_SET_VALUE(nodeInfos_, nodeInfos) };
    inline ChangeCloudPhoneNodeResponseBody& setNodeInfos(vector<ChangeCloudPhoneNodeResponseBody::NodeInfos> && nodeInfos) { DARABONBA_PTR_SET_RVALUE(nodeInfos_, nodeInfos) };


    // orderId Field Functions 
    bool hasOrderId() const { return this->orderId_ != nullptr;};
    void deleteOrderId() { this->orderId_ = nullptr;};
    inline string getOrderId() const { DARABONBA_PTR_GET_DEFAULT(orderId_, "") };
    inline ChangeCloudPhoneNodeResponseBody& setOrderId(string orderId) { DARABONBA_PTR_SET_VALUE(orderId_, orderId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ChangeCloudPhoneNodeResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<vector<ChangeCloudPhoneNodeResponseBody::NodeInfos>> nodeInfos_ {};
    shared_ptr<string> orderId_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EdsAic20230930
#endif
