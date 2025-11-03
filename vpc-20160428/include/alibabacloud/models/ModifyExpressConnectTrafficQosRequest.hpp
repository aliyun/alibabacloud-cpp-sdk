// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYEXPRESSCONNECTTRAFFICQOSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYEXPRESSCONNECTTRAFFICQOSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ModifyExpressConnectTrafficQosRequestAddInstanceList.hpp>
#include <alibabacloud/models/ModifyExpressConnectTrafficQosRequestRemoveInstanceList.hpp>
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
    virtual bool empty() const override { return this->addInstanceList_ == nullptr
        && return this->clientToken_ == nullptr && return this->ownerAccount_ == nullptr && return this->ownerId_ == nullptr && return this->qosDescription_ == nullptr && return this->qosId_ == nullptr
        && return this->qosName_ == nullptr && return this->regionId_ == nullptr && return this->removeInstanceList_ == nullptr && return this->resourceOwnerAccount_ == nullptr; };
    // addInstanceList Field Functions 
    bool hasAddInstanceList() const { return this->addInstanceList_ != nullptr;};
    void deleteAddInstanceList() { this->addInstanceList_ = nullptr;};
    inline const vector<ModifyExpressConnectTrafficQosRequestAddInstanceList> & addInstanceList() const { DARABONBA_PTR_GET_CONST(addInstanceList_, vector<ModifyExpressConnectTrafficQosRequestAddInstanceList>) };
    inline vector<ModifyExpressConnectTrafficQosRequestAddInstanceList> addInstanceList() { DARABONBA_PTR_GET(addInstanceList_, vector<ModifyExpressConnectTrafficQosRequestAddInstanceList>) };
    inline ModifyExpressConnectTrafficQosRequest& setAddInstanceList(const vector<ModifyExpressConnectTrafficQosRequestAddInstanceList> & addInstanceList) { DARABONBA_PTR_SET_VALUE(addInstanceList_, addInstanceList) };
    inline ModifyExpressConnectTrafficQosRequest& setAddInstanceList(vector<ModifyExpressConnectTrafficQosRequestAddInstanceList> && addInstanceList) { DARABONBA_PTR_SET_RVALUE(addInstanceList_, addInstanceList) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string clientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline ModifyExpressConnectTrafficQosRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string ownerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline ModifyExpressConnectTrafficQosRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline ModifyExpressConnectTrafficQosRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // qosDescription Field Functions 
    bool hasQosDescription() const { return this->qosDescription_ != nullptr;};
    void deleteQosDescription() { this->qosDescription_ = nullptr;};
    inline string qosDescription() const { DARABONBA_PTR_GET_DEFAULT(qosDescription_, "") };
    inline ModifyExpressConnectTrafficQosRequest& setQosDescription(string qosDescription) { DARABONBA_PTR_SET_VALUE(qosDescription_, qosDescription) };


    // qosId Field Functions 
    bool hasQosId() const { return this->qosId_ != nullptr;};
    void deleteQosId() { this->qosId_ = nullptr;};
    inline string qosId() const { DARABONBA_PTR_GET_DEFAULT(qosId_, "") };
    inline ModifyExpressConnectTrafficQosRequest& setQosId(string qosId) { DARABONBA_PTR_SET_VALUE(qosId_, qosId) };


    // qosName Field Functions 
    bool hasQosName() const { return this->qosName_ != nullptr;};
    void deleteQosName() { this->qosName_ = nullptr;};
    inline string qosName() const { DARABONBA_PTR_GET_DEFAULT(qosName_, "") };
    inline ModifyExpressConnectTrafficQosRequest& setQosName(string qosName) { DARABONBA_PTR_SET_VALUE(qosName_, qosName) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ModifyExpressConnectTrafficQosRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // removeInstanceList Field Functions 
    bool hasRemoveInstanceList() const { return this->removeInstanceList_ != nullptr;};
    void deleteRemoveInstanceList() { this->removeInstanceList_ = nullptr;};
    inline const vector<ModifyExpressConnectTrafficQosRequestRemoveInstanceList> & removeInstanceList() const { DARABONBA_PTR_GET_CONST(removeInstanceList_, vector<ModifyExpressConnectTrafficQosRequestRemoveInstanceList>) };
    inline vector<ModifyExpressConnectTrafficQosRequestRemoveInstanceList> removeInstanceList() { DARABONBA_PTR_GET(removeInstanceList_, vector<ModifyExpressConnectTrafficQosRequestRemoveInstanceList>) };
    inline ModifyExpressConnectTrafficQosRequest& setRemoveInstanceList(const vector<ModifyExpressConnectTrafficQosRequestRemoveInstanceList> & removeInstanceList) { DARABONBA_PTR_SET_VALUE(removeInstanceList_, removeInstanceList) };
    inline ModifyExpressConnectTrafficQosRequest& setRemoveInstanceList(vector<ModifyExpressConnectTrafficQosRequestRemoveInstanceList> && removeInstanceList) { DARABONBA_PTR_SET_RVALUE(removeInstanceList_, removeInstanceList) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline ModifyExpressConnectTrafficQosRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


  protected:
    // The instances to be added. Ignore this parameter if no instances are to be added.
    std::shared_ptr<vector<ModifyExpressConnectTrafficQosRequestAddInstanceList>> addInstanceList_ = nullptr;
    // The client token that is used to ensure the idempotence of the request.
    // 
    // You can use the client to generate the token, but you must make sure that the token is unique among different requests. The token can contain only ASCII characters.
    // 
    // >  If you do not specify this parameter, the system automatically uses the **request ID** as the **client token**. The **request ID** may be different for each request.
    std::shared_ptr<string> clientToken_ = nullptr;
    std::shared_ptr<string> ownerAccount_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // The description of the QoS policy.
    std::shared_ptr<string> qosDescription_ = nullptr;
    // The ID of the QoS policy.
    // 
    // This parameter is required.
    std::shared_ptr<string> qosId_ = nullptr;
    // The name of the QoS policy.
    std::shared_ptr<string> qosName_ = nullptr;
    // The region ID of the resource.
    // 
    // You can call the [DescribeRegions](https://help.aliyun.com/document_detail/36063.html) operation to query the most recent region list.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    // The instances to be removed. Ignore this parameter if no instances are to be removed.
    std::shared_ptr<vector<ModifyExpressConnectTrafficQosRequestRemoveInstanceList>> removeInstanceList_ = nullptr;
    std::shared_ptr<string> resourceOwnerAccount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
