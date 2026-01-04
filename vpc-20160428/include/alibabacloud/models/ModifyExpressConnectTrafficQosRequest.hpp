// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYEXPRESSCONNECTTRAFFICQOSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYEXPRESSCONNECTTRAFFICQOSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class ModifyExpressConnectTrafficQosRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyExpressConnectTrafficQosRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AddInstanceList, addInstanceList_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(QosDescription, qosDescription_);
      DARABONBA_PTR_TO_JSON(QosId, qosId_);
      DARABONBA_PTR_TO_JSON(QosName, qosName_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RemoveInstanceList, removeInstanceList_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyExpressConnectTrafficQosRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AddInstanceList, addInstanceList_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(QosDescription, qosDescription_);
      DARABONBA_PTR_FROM_JSON(QosId, qosId_);
      DARABONBA_PTR_FROM_JSON(QosName, qosName_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RemoveInstanceList, removeInstanceList_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
    };
    ModifyExpressConnectTrafficQosRequest() = default ;
    ModifyExpressConnectTrafficQosRequest(const ModifyExpressConnectTrafficQosRequest &) = default ;
    ModifyExpressConnectTrafficQosRequest(ModifyExpressConnectTrafficQosRequest &&) = default ;
    ModifyExpressConnectTrafficQosRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyExpressConnectTrafficQosRequest() = default ;
    ModifyExpressConnectTrafficQosRequest& operator=(const ModifyExpressConnectTrafficQosRequest &) = default ;
    ModifyExpressConnectTrafficQosRequest& operator=(ModifyExpressConnectTrafficQosRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class RemoveInstanceList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const RemoveInstanceList& obj) { 
        DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(InstanceType, instanceType_);
      };
      friend void from_json(const Darabonba::Json& j, RemoveInstanceList& obj) { 
        DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(InstanceType, instanceType_);
      };
      RemoveInstanceList() = default ;
      RemoveInstanceList(const RemoveInstanceList &) = default ;
      RemoveInstanceList(RemoveInstanceList &&) = default ;
      RemoveInstanceList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~RemoveInstanceList() = default ;
      RemoveInstanceList& operator=(const RemoveInstanceList &) = default ;
      RemoveInstanceList& operator=(RemoveInstanceList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->instanceId_ == nullptr
        && this->instanceType_ == nullptr; };
      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline RemoveInstanceList& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // instanceType Field Functions 
      bool hasInstanceType() const { return this->instanceType_ != nullptr;};
      void deleteInstanceType() { this->instanceType_ = nullptr;};
      inline string getInstanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
      inline RemoveInstanceList& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


    protected:
      // The ID of the associated instance.
      shared_ptr<string> instanceId_ {};
      // The type of the associated instance. Set the value to **PHYSICALCONNECTION**.
      shared_ptr<string> instanceType_ {};
    };

    class AddInstanceList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AddInstanceList& obj) { 
        DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(InstanceType, instanceType_);
      };
      friend void from_json(const Darabonba::Json& j, AddInstanceList& obj) { 
        DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(InstanceType, instanceType_);
      };
      AddInstanceList() = default ;
      AddInstanceList(const AddInstanceList &) = default ;
      AddInstanceList(AddInstanceList &&) = default ;
      AddInstanceList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AddInstanceList() = default ;
      AddInstanceList& operator=(const AddInstanceList &) = default ;
      AddInstanceList& operator=(AddInstanceList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->instanceId_ == nullptr
        && this->instanceType_ == nullptr; };
      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline AddInstanceList& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // instanceType Field Functions 
      bool hasInstanceType() const { return this->instanceType_ != nullptr;};
      void deleteInstanceType() { this->instanceType_ = nullptr;};
      inline string getInstanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
      inline AddInstanceList& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


    protected:
      // The ID of the instance to be associated.
      shared_ptr<string> instanceId_ {};
      // The type of instance to be associated. Set the value to **PHYSICALCONNECTION**.
      shared_ptr<string> instanceType_ {};
    };

    virtual bool empty() const override { return this->addInstanceList_ == nullptr
        && this->clientToken_ == nullptr && this->ownerAccount_ == nullptr && this->ownerId_ == nullptr && this->qosDescription_ == nullptr && this->qosId_ == nullptr
        && this->qosName_ == nullptr && this->regionId_ == nullptr && this->removeInstanceList_ == nullptr && this->resourceOwnerAccount_ == nullptr; };
    // addInstanceList Field Functions 
    bool hasAddInstanceList() const { return this->addInstanceList_ != nullptr;};
    void deleteAddInstanceList() { this->addInstanceList_ = nullptr;};
    inline const vector<ModifyExpressConnectTrafficQosRequest::AddInstanceList> & getAddInstanceList() const { DARABONBA_PTR_GET_CONST(addInstanceList_, vector<ModifyExpressConnectTrafficQosRequest::AddInstanceList>) };
    inline vector<ModifyExpressConnectTrafficQosRequest::AddInstanceList> getAddInstanceList() { DARABONBA_PTR_GET(addInstanceList_, vector<ModifyExpressConnectTrafficQosRequest::AddInstanceList>) };
    inline ModifyExpressConnectTrafficQosRequest& setAddInstanceList(const vector<ModifyExpressConnectTrafficQosRequest::AddInstanceList> & addInstanceList) { DARABONBA_PTR_SET_VALUE(addInstanceList_, addInstanceList) };
    inline ModifyExpressConnectTrafficQosRequest& setAddInstanceList(vector<ModifyExpressConnectTrafficQosRequest::AddInstanceList> && addInstanceList) { DARABONBA_PTR_SET_RVALUE(addInstanceList_, addInstanceList) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline ModifyExpressConnectTrafficQosRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string getOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline ModifyExpressConnectTrafficQosRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline ModifyExpressConnectTrafficQosRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // qosDescription Field Functions 
    bool hasQosDescription() const { return this->qosDescription_ != nullptr;};
    void deleteQosDescription() { this->qosDescription_ = nullptr;};
    inline string getQosDescription() const { DARABONBA_PTR_GET_DEFAULT(qosDescription_, "") };
    inline ModifyExpressConnectTrafficQosRequest& setQosDescription(string qosDescription) { DARABONBA_PTR_SET_VALUE(qosDescription_, qosDescription) };


    // qosId Field Functions 
    bool hasQosId() const { return this->qosId_ != nullptr;};
    void deleteQosId() { this->qosId_ = nullptr;};
    inline string getQosId() const { DARABONBA_PTR_GET_DEFAULT(qosId_, "") };
    inline ModifyExpressConnectTrafficQosRequest& setQosId(string qosId) { DARABONBA_PTR_SET_VALUE(qosId_, qosId) };


    // qosName Field Functions 
    bool hasQosName() const { return this->qosName_ != nullptr;};
    void deleteQosName() { this->qosName_ = nullptr;};
    inline string getQosName() const { DARABONBA_PTR_GET_DEFAULT(qosName_, "") };
    inline ModifyExpressConnectTrafficQosRequest& setQosName(string qosName) { DARABONBA_PTR_SET_VALUE(qosName_, qosName) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ModifyExpressConnectTrafficQosRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // removeInstanceList Field Functions 
    bool hasRemoveInstanceList() const { return this->removeInstanceList_ != nullptr;};
    void deleteRemoveInstanceList() { this->removeInstanceList_ = nullptr;};
    inline const vector<ModifyExpressConnectTrafficQosRequest::RemoveInstanceList> & getRemoveInstanceList() const { DARABONBA_PTR_GET_CONST(removeInstanceList_, vector<ModifyExpressConnectTrafficQosRequest::RemoveInstanceList>) };
    inline vector<ModifyExpressConnectTrafficQosRequest::RemoveInstanceList> getRemoveInstanceList() { DARABONBA_PTR_GET(removeInstanceList_, vector<ModifyExpressConnectTrafficQosRequest::RemoveInstanceList>) };
    inline ModifyExpressConnectTrafficQosRequest& setRemoveInstanceList(const vector<ModifyExpressConnectTrafficQosRequest::RemoveInstanceList> & removeInstanceList) { DARABONBA_PTR_SET_VALUE(removeInstanceList_, removeInstanceList) };
    inline ModifyExpressConnectTrafficQosRequest& setRemoveInstanceList(vector<ModifyExpressConnectTrafficQosRequest::RemoveInstanceList> && removeInstanceList) { DARABONBA_PTR_SET_RVALUE(removeInstanceList_, removeInstanceList) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline ModifyExpressConnectTrafficQosRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


  protected:
    // The instances to be added. Ignore this parameter if no instances are to be added.
    shared_ptr<vector<ModifyExpressConnectTrafficQosRequest::AddInstanceList>> addInstanceList_ {};
    // The client token that is used to ensure the idempotence of the request.
    // 
    // You can use the client to generate the token, but you must make sure that the token is unique among different requests. The token can contain only ASCII characters.
    // 
    // >  If you do not specify this parameter, the system automatically uses the **request ID** as the **client token**. The **request ID** may be different for each request.
    shared_ptr<string> clientToken_ {};
    shared_ptr<string> ownerAccount_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The description of the QoS policy.
    shared_ptr<string> qosDescription_ {};
    // The ID of the QoS policy.
    // 
    // This parameter is required.
    shared_ptr<string> qosId_ {};
    // The name of the QoS policy.
    shared_ptr<string> qosName_ {};
    // The region ID of the resource.
    // 
    // You can call the [DescribeRegions](https://help.aliyun.com/document_detail/36063.html) operation to query the most recent region list.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // The instances to be removed. Ignore this parameter if no instances are to be removed.
    shared_ptr<vector<ModifyExpressConnectTrafficQosRequest::RemoveInstanceList>> removeInstanceList_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
