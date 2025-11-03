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
        && return this->finishWork_ == nullptr && return this->instanceId_ == nullptr && return this->lineCode_ == nullptr && return this->lineLabel_ == nullptr && return this->lineSPContactInfo_ == nullptr
        && return this->lineServiceProvider_ == nullptr && return this->ownerAccount_ == nullptr && return this->ownerId_ == nullptr && return this->regionId_ == nullptr && return this->resourceOwnerAccount_ == nullptr
        && return this->resourceOwnerId_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string clientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CompletePhysicalConnectionLOARequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // finishWork Field Functions 
    bool hasFinishWork() const { return this->finishWork_ != nullptr;};
    void deleteFinishWork() { this->finishWork_ = nullptr;};
    inline bool finishWork() const { DARABONBA_PTR_GET_DEFAULT(finishWork_, false) };
    inline CompletePhysicalConnectionLOARequest& setFinishWork(bool finishWork) { DARABONBA_PTR_SET_VALUE(finishWork_, finishWork) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline CompletePhysicalConnectionLOARequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // lineCode Field Functions 
    bool hasLineCode() const { return this->lineCode_ != nullptr;};
    void deleteLineCode() { this->lineCode_ = nullptr;};
    inline string lineCode() const { DARABONBA_PTR_GET_DEFAULT(lineCode_, "") };
    inline CompletePhysicalConnectionLOARequest& setLineCode(string lineCode) { DARABONBA_PTR_SET_VALUE(lineCode_, lineCode) };


    // lineLabel Field Functions 
    bool hasLineLabel() const { return this->lineLabel_ != nullptr;};
    void deleteLineLabel() { this->lineLabel_ = nullptr;};
    inline string lineLabel() const { DARABONBA_PTR_GET_DEFAULT(lineLabel_, "") };
    inline CompletePhysicalConnectionLOARequest& setLineLabel(string lineLabel) { DARABONBA_PTR_SET_VALUE(lineLabel_, lineLabel) };


    // lineSPContactInfo Field Functions 
    bool hasLineSPContactInfo() const { return this->lineSPContactInfo_ != nullptr;};
    void deleteLineSPContactInfo() { this->lineSPContactInfo_ = nullptr;};
    inline string lineSPContactInfo() const { DARABONBA_PTR_GET_DEFAULT(lineSPContactInfo_, "") };
    inline CompletePhysicalConnectionLOARequest& setLineSPContactInfo(string lineSPContactInfo) { DARABONBA_PTR_SET_VALUE(lineSPContactInfo_, lineSPContactInfo) };


    // lineServiceProvider Field Functions 
    bool hasLineServiceProvider() const { return this->lineServiceProvider_ != nullptr;};
    void deleteLineServiceProvider() { this->lineServiceProvider_ = nullptr;};
    inline string lineServiceProvider() const { DARABONBA_PTR_GET_DEFAULT(lineServiceProvider_, "") };
    inline CompletePhysicalConnectionLOARequest& setLineServiceProvider(string lineServiceProvider) { DARABONBA_PTR_SET_VALUE(lineServiceProvider_, lineServiceProvider) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string ownerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline CompletePhysicalConnectionLOARequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline CompletePhysicalConnectionLOARequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CompletePhysicalConnectionLOARequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline CompletePhysicalConnectionLOARequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline CompletePhysicalConnectionLOARequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


  protected:
    // The client token that is used to ensure the idempotence of the request.
    // 
    // You can use the client to generate the value, but you must ensure that it is unique among different requests.
    // 
    // >  If you do not set this parameter, the system automatically uses **RequestId** as **ClientToken**. **RequestId** of each API request may be different.
    std::shared_ptr<string> clientToken_ = nullptr;
    // Specifies whether the construction is completed. Valid values:
    // 
    // *   **true**
    // *   **false**
    std::shared_ptr<bool> finishWork_ = nullptr;
    // The ID of the Express Connect circuit.
    // 
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The circuit code provided by the connectivity provider.
    std::shared_ptr<string> lineCode_ = nullptr;
    // The label of the cable in the data center.
    std::shared_ptr<string> lineLabel_ = nullptr;
    // The contact information about line O\\&M.
    std::shared_ptr<string> lineSPContactInfo_ = nullptr;
    // The ISP. Valid values:
    // 
    // *   **China Telecom**
    // *   **China Unicom**
    // *   **China Mobile**
    // *   **Other ISPs in China**
    std::shared_ptr<string> lineServiceProvider_ = nullptr;
    std::shared_ptr<string> ownerAccount_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // The region ID of the Express Connect circuit.
    // 
    // You can call the [DescribeRegions](https://help.aliyun.com/document_detail/36063.html) operation to query the most recent region list.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    std::shared_ptr<string> resourceOwnerAccount_ = nullptr;
    std::shared_ptr<int64_t> resourceOwnerId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
