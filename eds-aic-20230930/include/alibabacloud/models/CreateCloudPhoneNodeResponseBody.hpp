// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECLOUDPHONENODERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATECLOUDPHONENODERESPONSEBODY_HPP_
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
  class CreateCloudPhoneNodeResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateCloudPhoneNodeResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(NetworkPackageOrderModel, networkPackageOrderModel_);
      DARABONBA_PTR_TO_JSON(NodeInfos, nodeInfos_);
      DARABONBA_PTR_TO_JSON(OrderId, orderId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateCloudPhoneNodeResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(NetworkPackageOrderModel, networkPackageOrderModel_);
      DARABONBA_PTR_FROM_JSON(NodeInfos, nodeInfos_);
      DARABONBA_PTR_FROM_JSON(OrderId, orderId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CreateCloudPhoneNodeResponseBody() = default ;
    CreateCloudPhoneNodeResponseBody(const CreateCloudPhoneNodeResponseBody &) = default ;
    CreateCloudPhoneNodeResponseBody(CreateCloudPhoneNodeResponseBody &&) = default ;
    CreateCloudPhoneNodeResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateCloudPhoneNodeResponseBody() = default ;
    CreateCloudPhoneNodeResponseBody& operator=(const CreateCloudPhoneNodeResponseBody &) = default ;
    CreateCloudPhoneNodeResponseBody& operator=(CreateCloudPhoneNodeResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class NodeInfos : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const NodeInfos& obj) { 
        DARABONBA_PTR_TO_JSON(InstanceIds, instanceIds_);
        DARABONBA_PTR_TO_JSON(NodeId, nodeId_);
      };
      friend void from_json(const Darabonba::Json& j, NodeInfos& obj) { 
        DARABONBA_PTR_FROM_JSON(InstanceIds, instanceIds_);
        DARABONBA_PTR_FROM_JSON(NodeId, nodeId_);
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
      virtual bool empty() const override { return this->instanceIds_ == nullptr
        && this->nodeId_ == nullptr; };
      // instanceIds Field Functions 
      bool hasInstanceIds() const { return this->instanceIds_ != nullptr;};
      void deleteInstanceIds() { this->instanceIds_ = nullptr;};
      inline const vector<string> & getInstanceIds() const { DARABONBA_PTR_GET_CONST(instanceIds_, vector<string>) };
      inline vector<string> getInstanceIds() { DARABONBA_PTR_GET(instanceIds_, vector<string>) };
      inline NodeInfos& setInstanceIds(const vector<string> & instanceIds) { DARABONBA_PTR_SET_VALUE(instanceIds_, instanceIds) };
      inline NodeInfos& setInstanceIds(vector<string> && instanceIds) { DARABONBA_PTR_SET_RVALUE(instanceIds_, instanceIds) };


      // nodeId Field Functions 
      bool hasNodeId() const { return this->nodeId_ != nullptr;};
      void deleteNodeId() { this->nodeId_ = nullptr;};
      inline string getNodeId() const { DARABONBA_PTR_GET_DEFAULT(nodeId_, "") };
      inline NodeInfos& setNodeId(string nodeId) { DARABONBA_PTR_SET_VALUE(nodeId_, nodeId) };


    protected:
      // The IDs of the cloud phone instances.
      shared_ptr<vector<string>> instanceIds_ {};
      // The ID of the cloud phone matrix.
      shared_ptr<string> nodeId_ {};
    };

    class NetworkPackageOrderModel : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const NetworkPackageOrderModel& obj) { 
        DARABONBA_PTR_TO_JSON(BandwidthPackageId, bandwidthPackageId_);
        DARABONBA_PTR_TO_JSON(BandwidthPackageOrderId, bandwidthPackageOrderId_);
      };
      friend void from_json(const Darabonba::Json& j, NetworkPackageOrderModel& obj) { 
        DARABONBA_PTR_FROM_JSON(BandwidthPackageId, bandwidthPackageId_);
        DARABONBA_PTR_FROM_JSON(BandwidthPackageOrderId, bandwidthPackageOrderId_);
      };
      NetworkPackageOrderModel() = default ;
      NetworkPackageOrderModel(const NetworkPackageOrderModel &) = default ;
      NetworkPackageOrderModel(NetworkPackageOrderModel &&) = default ;
      NetworkPackageOrderModel(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~NetworkPackageOrderModel() = default ;
      NetworkPackageOrderModel& operator=(const NetworkPackageOrderModel &) = default ;
      NetworkPackageOrderModel& operator=(NetworkPackageOrderModel &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->bandwidthPackageId_ == nullptr
        && this->bandwidthPackageOrderId_ == nullptr; };
      // bandwidthPackageId Field Functions 
      bool hasBandwidthPackageId() const { return this->bandwidthPackageId_ != nullptr;};
      void deleteBandwidthPackageId() { this->bandwidthPackageId_ = nullptr;};
      inline string getBandwidthPackageId() const { DARABONBA_PTR_GET_DEFAULT(bandwidthPackageId_, "") };
      inline NetworkPackageOrderModel& setBandwidthPackageId(string bandwidthPackageId) { DARABONBA_PTR_SET_VALUE(bandwidthPackageId_, bandwidthPackageId) };


      // bandwidthPackageOrderId Field Functions 
      bool hasBandwidthPackageOrderId() const { return this->bandwidthPackageOrderId_ != nullptr;};
      void deleteBandwidthPackageOrderId() { this->bandwidthPackageOrderId_ = nullptr;};
      inline string getBandwidthPackageOrderId() const { DARABONBA_PTR_GET_DEFAULT(bandwidthPackageOrderId_, "") };
      inline NetworkPackageOrderModel& setBandwidthPackageOrderId(string bandwidthPackageOrderId) { DARABONBA_PTR_SET_VALUE(bandwidthPackageOrderId_, bandwidthPackageOrderId) };


    protected:
      shared_ptr<string> bandwidthPackageId_ {};
      shared_ptr<string> bandwidthPackageOrderId_ {};
    };

    virtual bool empty() const override { return this->networkPackageOrderModel_ == nullptr
        && this->nodeInfos_ == nullptr && this->orderId_ == nullptr && this->requestId_ == nullptr; };
    // networkPackageOrderModel Field Functions 
    bool hasNetworkPackageOrderModel() const { return this->networkPackageOrderModel_ != nullptr;};
    void deleteNetworkPackageOrderModel() { this->networkPackageOrderModel_ = nullptr;};
    inline const CreateCloudPhoneNodeResponseBody::NetworkPackageOrderModel & getNetworkPackageOrderModel() const { DARABONBA_PTR_GET_CONST(networkPackageOrderModel_, CreateCloudPhoneNodeResponseBody::NetworkPackageOrderModel) };
    inline CreateCloudPhoneNodeResponseBody::NetworkPackageOrderModel getNetworkPackageOrderModel() { DARABONBA_PTR_GET(networkPackageOrderModel_, CreateCloudPhoneNodeResponseBody::NetworkPackageOrderModel) };
    inline CreateCloudPhoneNodeResponseBody& setNetworkPackageOrderModel(const CreateCloudPhoneNodeResponseBody::NetworkPackageOrderModel & networkPackageOrderModel) { DARABONBA_PTR_SET_VALUE(networkPackageOrderModel_, networkPackageOrderModel) };
    inline CreateCloudPhoneNodeResponseBody& setNetworkPackageOrderModel(CreateCloudPhoneNodeResponseBody::NetworkPackageOrderModel && networkPackageOrderModel) { DARABONBA_PTR_SET_RVALUE(networkPackageOrderModel_, networkPackageOrderModel) };


    // nodeInfos Field Functions 
    bool hasNodeInfos() const { return this->nodeInfos_ != nullptr;};
    void deleteNodeInfos() { this->nodeInfos_ = nullptr;};
    inline const vector<CreateCloudPhoneNodeResponseBody::NodeInfos> & getNodeInfos() const { DARABONBA_PTR_GET_CONST(nodeInfos_, vector<CreateCloudPhoneNodeResponseBody::NodeInfos>) };
    inline vector<CreateCloudPhoneNodeResponseBody::NodeInfos> getNodeInfos() { DARABONBA_PTR_GET(nodeInfos_, vector<CreateCloudPhoneNodeResponseBody::NodeInfos>) };
    inline CreateCloudPhoneNodeResponseBody& setNodeInfos(const vector<CreateCloudPhoneNodeResponseBody::NodeInfos> & nodeInfos) { DARABONBA_PTR_SET_VALUE(nodeInfos_, nodeInfos) };
    inline CreateCloudPhoneNodeResponseBody& setNodeInfos(vector<CreateCloudPhoneNodeResponseBody::NodeInfos> && nodeInfos) { DARABONBA_PTR_SET_RVALUE(nodeInfos_, nodeInfos) };


    // orderId Field Functions 
    bool hasOrderId() const { return this->orderId_ != nullptr;};
    void deleteOrderId() { this->orderId_ = nullptr;};
    inline string getOrderId() const { DARABONBA_PTR_GET_DEFAULT(orderId_, "") };
    inline CreateCloudPhoneNodeResponseBody& setOrderId(string orderId) { DARABONBA_PTR_SET_VALUE(orderId_, orderId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateCloudPhoneNodeResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<CreateCloudPhoneNodeResponseBody::NetworkPackageOrderModel> networkPackageOrderModel_ {};
    // The cloud phone matrixes.
    shared_ptr<vector<CreateCloudPhoneNodeResponseBody::NodeInfos>> nodeInfos_ {};
    // The order ID.
    shared_ptr<string> orderId_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EdsAic20230930
#endif
