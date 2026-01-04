// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_COMPLETEPHYSICALCONNECTIONLOAREQUEST_HPP_
#define ALIBABACLOUD_MODELS_COMPLETEPHYSICALCONNECTIONLOAREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class CompletePhysicalConnectionLOARequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CompletePhysicalConnectionLOARequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(FinishWork, finishWork_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(LineCode, lineCode_);
      DARABONBA_PTR_TO_JSON(LineLabel, lineLabel_);
      DARABONBA_PTR_TO_JSON(LineSPContactInfo, lineSPContactInfo_);
      DARABONBA_PTR_TO_JSON(LineServiceProvider, lineServiceProvider_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    friend void from_json(const Darabonba::Json& j, CompletePhysicalConnectionLOARequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(FinishWork, finishWork_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(LineCode, lineCode_);
      DARABONBA_PTR_FROM_JSON(LineLabel, lineLabel_);
      DARABONBA_PTR_FROM_JSON(LineSPContactInfo, lineSPContactInfo_);
      DARABONBA_PTR_FROM_JSON(LineServiceProvider, lineServiceProvider_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    CompletePhysicalConnectionLOARequest() = default ;
    CompletePhysicalConnectionLOARequest(const CompletePhysicalConnectionLOARequest &) = default ;
    CompletePhysicalConnectionLOARequest(CompletePhysicalConnectionLOARequest &&) = default ;
    CompletePhysicalConnectionLOARequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CompletePhysicalConnectionLOARequest() = default ;
    CompletePhysicalConnectionLOARequest& operator=(const CompletePhysicalConnectionLOARequest &) = default ;
    CompletePhysicalConnectionLOARequest& operator=(CompletePhysicalConnectionLOARequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clientToken_ == nullptr
        && this->finishWork_ == nullptr && this->instanceId_ == nullptr && this->lineCode_ == nullptr && this->lineLabel_ == nullptr && this->lineSPContactInfo_ == nullptr
        && this->lineServiceProvider_ == nullptr && this->ownerAccount_ == nullptr && this->ownerId_ == nullptr && this->regionId_ == nullptr && this->resourceOwnerAccount_ == nullptr
        && this->resourceOwnerId_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CompletePhysicalConnectionLOARequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // finishWork Field Functions 
    bool hasFinishWork() const { return this->finishWork_ != nullptr;};
    void deleteFinishWork() { this->finishWork_ = nullptr;};
    inline bool getFinishWork() const { DARABONBA_PTR_GET_DEFAULT(finishWork_, false) };
    inline CompletePhysicalConnectionLOARequest& setFinishWork(bool finishWork) { DARABONBA_PTR_SET_VALUE(finishWork_, finishWork) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline CompletePhysicalConnectionLOARequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // lineCode Field Functions 
    bool hasLineCode() const { return this->lineCode_ != nullptr;};
    void deleteLineCode() { this->lineCode_ = nullptr;};
    inline string getLineCode() const { DARABONBA_PTR_GET_DEFAULT(lineCode_, "") };
    inline CompletePhysicalConnectionLOARequest& setLineCode(string lineCode) { DARABONBA_PTR_SET_VALUE(lineCode_, lineCode) };


    // lineLabel Field Functions 
    bool hasLineLabel() const { return this->lineLabel_ != nullptr;};
    void deleteLineLabel() { this->lineLabel_ = nullptr;};
    inline string getLineLabel() const { DARABONBA_PTR_GET_DEFAULT(lineLabel_, "") };
    inline CompletePhysicalConnectionLOARequest& setLineLabel(string lineLabel) { DARABONBA_PTR_SET_VALUE(lineLabel_, lineLabel) };


    // lineSPContactInfo Field Functions 
    bool hasLineSPContactInfo() const { return this->lineSPContactInfo_ != nullptr;};
    void deleteLineSPContactInfo() { this->lineSPContactInfo_ = nullptr;};
    inline string getLineSPContactInfo() const { DARABONBA_PTR_GET_DEFAULT(lineSPContactInfo_, "") };
    inline CompletePhysicalConnectionLOARequest& setLineSPContactInfo(string lineSPContactInfo) { DARABONBA_PTR_SET_VALUE(lineSPContactInfo_, lineSPContactInfo) };


    // lineServiceProvider Field Functions 
    bool hasLineServiceProvider() const { return this->lineServiceProvider_ != nullptr;};
    void deleteLineServiceProvider() { this->lineServiceProvider_ = nullptr;};
    inline string getLineServiceProvider() const { DARABONBA_PTR_GET_DEFAULT(lineServiceProvider_, "") };
    inline CompletePhysicalConnectionLOARequest& setLineServiceProvider(string lineServiceProvider) { DARABONBA_PTR_SET_VALUE(lineServiceProvider_, lineServiceProvider) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string getOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline CompletePhysicalConnectionLOARequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline CompletePhysicalConnectionLOARequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CompletePhysicalConnectionLOARequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline CompletePhysicalConnectionLOARequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline CompletePhysicalConnectionLOARequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


  protected:
    // The client token that is used to ensure the idempotence of the request.
    // 
    // You can use the client to generate the value, but you must ensure that it is unique among different requests.
    // 
    // >  If you do not set this parameter, the system automatically uses **RequestId** as **ClientToken**. **RequestId** of each API request may be different.
    shared_ptr<string> clientToken_ {};
    // Specifies whether the construction is completed. Valid values:
    // 
    // *   **true**
    // *   **false**
    shared_ptr<bool> finishWork_ {};
    // The ID of the Express Connect circuit.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // The circuit code provided by the connectivity provider.
    shared_ptr<string> lineCode_ {};
    // The label of the cable in the data center.
    shared_ptr<string> lineLabel_ {};
    // The contact information about line O\\&M.
    shared_ptr<string> lineSPContactInfo_ {};
    // The ISP. Valid values:
    // 
    // *   **China Telecom**
    // *   **China Unicom**
    // *   **China Mobile**
    // *   **Other ISPs in China**
    shared_ptr<string> lineServiceProvider_ {};
    shared_ptr<string> ownerAccount_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The region ID of the Express Connect circuit.
    // 
    // You can call the [DescribeRegions](https://help.aliyun.com/document_detail/36063.html) operation to query the most recent region list.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
