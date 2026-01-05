// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEANDROIDINSTANCEGROUPRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEANDROIDINSTANCEGROUPRESPONSEBODY_HPP_
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
  class CreateAndroidInstanceGroupResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateAndroidInstanceGroupResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceGroupIds, instanceGroupIds_);
      DARABONBA_PTR_TO_JSON(InstanceGroupInfos, instanceGroupInfos_);
      DARABONBA_PTR_TO_JSON(NetworkPackageOrderModel, networkPackageOrderModel_);
      DARABONBA_PTR_TO_JSON(OrderId, orderId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateAndroidInstanceGroupResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceGroupIds, instanceGroupIds_);
      DARABONBA_PTR_FROM_JSON(InstanceGroupInfos, instanceGroupInfos_);
      DARABONBA_PTR_FROM_JSON(NetworkPackageOrderModel, networkPackageOrderModel_);
      DARABONBA_PTR_FROM_JSON(OrderId, orderId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CreateAndroidInstanceGroupResponseBody() = default ;
    CreateAndroidInstanceGroupResponseBody(const CreateAndroidInstanceGroupResponseBody &) = default ;
    CreateAndroidInstanceGroupResponseBody(CreateAndroidInstanceGroupResponseBody &&) = default ;
    CreateAndroidInstanceGroupResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateAndroidInstanceGroupResponseBody() = default ;
    CreateAndroidInstanceGroupResponseBody& operator=(const CreateAndroidInstanceGroupResponseBody &) = default ;
    CreateAndroidInstanceGroupResponseBody& operator=(CreateAndroidInstanceGroupResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
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

    class InstanceGroupInfos : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const InstanceGroupInfos& obj) { 
        DARABONBA_PTR_TO_JSON(InstanceGroupId, instanceGroupId_);
        DARABONBA_PTR_TO_JSON(InstanceIds, instanceIds_);
      };
      friend void from_json(const Darabonba::Json& j, InstanceGroupInfos& obj) { 
        DARABONBA_PTR_FROM_JSON(InstanceGroupId, instanceGroupId_);
        DARABONBA_PTR_FROM_JSON(InstanceIds, instanceIds_);
      };
      InstanceGroupInfos() = default ;
      InstanceGroupInfos(const InstanceGroupInfos &) = default ;
      InstanceGroupInfos(InstanceGroupInfos &&) = default ;
      InstanceGroupInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~InstanceGroupInfos() = default ;
      InstanceGroupInfos& operator=(const InstanceGroupInfos &) = default ;
      InstanceGroupInfos& operator=(InstanceGroupInfos &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->instanceGroupId_ == nullptr
        && this->instanceIds_ == nullptr; };
      // instanceGroupId Field Functions 
      bool hasInstanceGroupId() const { return this->instanceGroupId_ != nullptr;};
      void deleteInstanceGroupId() { this->instanceGroupId_ = nullptr;};
      inline string getInstanceGroupId() const { DARABONBA_PTR_GET_DEFAULT(instanceGroupId_, "") };
      inline InstanceGroupInfos& setInstanceGroupId(string instanceGroupId) { DARABONBA_PTR_SET_VALUE(instanceGroupId_, instanceGroupId) };


      // instanceIds Field Functions 
      bool hasInstanceIds() const { return this->instanceIds_ != nullptr;};
      void deleteInstanceIds() { this->instanceIds_ = nullptr;};
      inline const vector<string> & getInstanceIds() const { DARABONBA_PTR_GET_CONST(instanceIds_, vector<string>) };
      inline vector<string> getInstanceIds() { DARABONBA_PTR_GET(instanceIds_, vector<string>) };
      inline InstanceGroupInfos& setInstanceIds(const vector<string> & instanceIds) { DARABONBA_PTR_SET_VALUE(instanceIds_, instanceIds) };
      inline InstanceGroupInfos& setInstanceIds(vector<string> && instanceIds) { DARABONBA_PTR_SET_RVALUE(instanceIds_, instanceIds) };


    protected:
      // The ID of the instance group.
      shared_ptr<string> instanceGroupId_ {};
      // The IDs of the instances.
      shared_ptr<vector<string>> instanceIds_ {};
    };

    virtual bool empty() const override { return this->instanceGroupIds_ == nullptr
        && this->instanceGroupInfos_ == nullptr && this->networkPackageOrderModel_ == nullptr && this->orderId_ == nullptr && this->requestId_ == nullptr; };
    // instanceGroupIds Field Functions 
    bool hasInstanceGroupIds() const { return this->instanceGroupIds_ != nullptr;};
    void deleteInstanceGroupIds() { this->instanceGroupIds_ = nullptr;};
    inline const vector<string> & getInstanceGroupIds() const { DARABONBA_PTR_GET_CONST(instanceGroupIds_, vector<string>) };
    inline vector<string> getInstanceGroupIds() { DARABONBA_PTR_GET(instanceGroupIds_, vector<string>) };
    inline CreateAndroidInstanceGroupResponseBody& setInstanceGroupIds(const vector<string> & instanceGroupIds) { DARABONBA_PTR_SET_VALUE(instanceGroupIds_, instanceGroupIds) };
    inline CreateAndroidInstanceGroupResponseBody& setInstanceGroupIds(vector<string> && instanceGroupIds) { DARABONBA_PTR_SET_RVALUE(instanceGroupIds_, instanceGroupIds) };


    // instanceGroupInfos Field Functions 
    bool hasInstanceGroupInfos() const { return this->instanceGroupInfos_ != nullptr;};
    void deleteInstanceGroupInfos() { this->instanceGroupInfos_ = nullptr;};
    inline const vector<CreateAndroidInstanceGroupResponseBody::InstanceGroupInfos> & getInstanceGroupInfos() const { DARABONBA_PTR_GET_CONST(instanceGroupInfos_, vector<CreateAndroidInstanceGroupResponseBody::InstanceGroupInfos>) };
    inline vector<CreateAndroidInstanceGroupResponseBody::InstanceGroupInfos> getInstanceGroupInfos() { DARABONBA_PTR_GET(instanceGroupInfos_, vector<CreateAndroidInstanceGroupResponseBody::InstanceGroupInfos>) };
    inline CreateAndroidInstanceGroupResponseBody& setInstanceGroupInfos(const vector<CreateAndroidInstanceGroupResponseBody::InstanceGroupInfos> & instanceGroupInfos) { DARABONBA_PTR_SET_VALUE(instanceGroupInfos_, instanceGroupInfos) };
    inline CreateAndroidInstanceGroupResponseBody& setInstanceGroupInfos(vector<CreateAndroidInstanceGroupResponseBody::InstanceGroupInfos> && instanceGroupInfos) { DARABONBA_PTR_SET_RVALUE(instanceGroupInfos_, instanceGroupInfos) };


    // networkPackageOrderModel Field Functions 
    bool hasNetworkPackageOrderModel() const { return this->networkPackageOrderModel_ != nullptr;};
    void deleteNetworkPackageOrderModel() { this->networkPackageOrderModel_ = nullptr;};
    inline const CreateAndroidInstanceGroupResponseBody::NetworkPackageOrderModel & getNetworkPackageOrderModel() const { DARABONBA_PTR_GET_CONST(networkPackageOrderModel_, CreateAndroidInstanceGroupResponseBody::NetworkPackageOrderModel) };
    inline CreateAndroidInstanceGroupResponseBody::NetworkPackageOrderModel getNetworkPackageOrderModel() { DARABONBA_PTR_GET(networkPackageOrderModel_, CreateAndroidInstanceGroupResponseBody::NetworkPackageOrderModel) };
    inline CreateAndroidInstanceGroupResponseBody& setNetworkPackageOrderModel(const CreateAndroidInstanceGroupResponseBody::NetworkPackageOrderModel & networkPackageOrderModel) { DARABONBA_PTR_SET_VALUE(networkPackageOrderModel_, networkPackageOrderModel) };
    inline CreateAndroidInstanceGroupResponseBody& setNetworkPackageOrderModel(CreateAndroidInstanceGroupResponseBody::NetworkPackageOrderModel && networkPackageOrderModel) { DARABONBA_PTR_SET_RVALUE(networkPackageOrderModel_, networkPackageOrderModel) };


    // orderId Field Functions 
    bool hasOrderId() const { return this->orderId_ != nullptr;};
    void deleteOrderId() { this->orderId_ = nullptr;};
    inline string getOrderId() const { DARABONBA_PTR_GET_DEFAULT(orderId_, "") };
    inline CreateAndroidInstanceGroupResponseBody& setOrderId(string orderId) { DARABONBA_PTR_SET_VALUE(orderId_, orderId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateAndroidInstanceGroupResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The IDs of the instance groups.
    shared_ptr<vector<string>> instanceGroupIds_ {};
    // The instance groups.
    shared_ptr<vector<CreateAndroidInstanceGroupResponseBody::InstanceGroupInfos>> instanceGroupInfos_ {};
    shared_ptr<CreateAndroidInstanceGroupResponseBody::NetworkPackageOrderModel> networkPackageOrderModel_ {};
    // The ID of the order.
    shared_ptr<string> orderId_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EdsAic20230930
#endif
