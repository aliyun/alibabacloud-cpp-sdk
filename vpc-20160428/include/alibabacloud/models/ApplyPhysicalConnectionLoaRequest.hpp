// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_APPLYPHYSICALCONNECTIONLOAREQUEST_HPP_
#define ALIBABACLOUD_MODELS_APPLYPHYSICALCONNECTIONLOAREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ApplyPhysicalConnectionLOARequestPMInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class ApplyPhysicalConnectionLOARequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ApplyPhysicalConnectionLOARequest& obj) { 
      DARABONBA_PTR_TO_JSON(Bandwidth, bandwidth_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(CompanyName, companyName_);
      DARABONBA_PTR_TO_JSON(ConstructionTime, constructionTime_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(LineType, lineType_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(PMInfo, PMInfo_);
      DARABONBA_PTR_TO_JSON(PeerLocation, peerLocation_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(Si, si_);
    };
    friend void from_json(const Darabonba::Json& j, ApplyPhysicalConnectionLOARequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Bandwidth, bandwidth_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(CompanyName, companyName_);
      DARABONBA_PTR_FROM_JSON(ConstructionTime, constructionTime_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(LineType, lineType_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(PMInfo, PMInfo_);
      DARABONBA_PTR_FROM_JSON(PeerLocation, peerLocation_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(Si, si_);
    };
    ApplyPhysicalConnectionLOARequest() = default ;
    ApplyPhysicalConnectionLOARequest(const ApplyPhysicalConnectionLOARequest &) = default ;
    ApplyPhysicalConnectionLOARequest(ApplyPhysicalConnectionLOARequest &&) = default ;
    ApplyPhysicalConnectionLOARequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ApplyPhysicalConnectionLOARequest() = default ;
    ApplyPhysicalConnectionLOARequest& operator=(const ApplyPhysicalConnectionLOARequest &) = default ;
    ApplyPhysicalConnectionLOARequest& operator=(ApplyPhysicalConnectionLOARequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bandwidth_ == nullptr
        && return this->clientToken_ == nullptr && return this->companyName_ == nullptr && return this->constructionTime_ == nullptr && return this->instanceId_ == nullptr && return this->lineType_ == nullptr
        && return this->ownerAccount_ == nullptr && return this->ownerId_ == nullptr && return this->PMInfo_ == nullptr && return this->peerLocation_ == nullptr && return this->regionId_ == nullptr
        && return this->resourceOwnerAccount_ == nullptr && return this->resourceOwnerId_ == nullptr && return this->si_ == nullptr; };
    // bandwidth Field Functions 
    bool hasBandwidth() const { return this->bandwidth_ != nullptr;};
    void deleteBandwidth() { this->bandwidth_ = nullptr;};
    inline int32_t bandwidth() const { DARABONBA_PTR_GET_DEFAULT(bandwidth_, 0) };
    inline ApplyPhysicalConnectionLOARequest& setBandwidth(int32_t bandwidth) { DARABONBA_PTR_SET_VALUE(bandwidth_, bandwidth) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string clientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline ApplyPhysicalConnectionLOARequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // companyName Field Functions 
    bool hasCompanyName() const { return this->companyName_ != nullptr;};
    void deleteCompanyName() { this->companyName_ = nullptr;};
    inline string companyName() const { DARABONBA_PTR_GET_DEFAULT(companyName_, "") };
    inline ApplyPhysicalConnectionLOARequest& setCompanyName(string companyName) { DARABONBA_PTR_SET_VALUE(companyName_, companyName) };


    // constructionTime Field Functions 
    bool hasConstructionTime() const { return this->constructionTime_ != nullptr;};
    void deleteConstructionTime() { this->constructionTime_ = nullptr;};
    inline string constructionTime() const { DARABONBA_PTR_GET_DEFAULT(constructionTime_, "") };
    inline ApplyPhysicalConnectionLOARequest& setConstructionTime(string constructionTime) { DARABONBA_PTR_SET_VALUE(constructionTime_, constructionTime) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ApplyPhysicalConnectionLOARequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // lineType Field Functions 
    bool hasLineType() const { return this->lineType_ != nullptr;};
    void deleteLineType() { this->lineType_ = nullptr;};
    inline string lineType() const { DARABONBA_PTR_GET_DEFAULT(lineType_, "") };
    inline ApplyPhysicalConnectionLOARequest& setLineType(string lineType) { DARABONBA_PTR_SET_VALUE(lineType_, lineType) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string ownerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline ApplyPhysicalConnectionLOARequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline ApplyPhysicalConnectionLOARequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // PMInfo Field Functions 
    bool hasPMInfo() const { return this->PMInfo_ != nullptr;};
    void deletePMInfo() { this->PMInfo_ = nullptr;};
    inline const vector<ApplyPhysicalConnectionLOARequestPMInfo> & PMInfo() const { DARABONBA_PTR_GET_CONST(PMInfo_, vector<ApplyPhysicalConnectionLOARequestPMInfo>) };
    inline vector<ApplyPhysicalConnectionLOARequestPMInfo> PMInfo() { DARABONBA_PTR_GET(PMInfo_, vector<ApplyPhysicalConnectionLOARequestPMInfo>) };
    inline ApplyPhysicalConnectionLOARequest& setPMInfo(const vector<ApplyPhysicalConnectionLOARequestPMInfo> & PMInfo) { DARABONBA_PTR_SET_VALUE(PMInfo_, PMInfo) };
    inline ApplyPhysicalConnectionLOARequest& setPMInfo(vector<ApplyPhysicalConnectionLOARequestPMInfo> && PMInfo) { DARABONBA_PTR_SET_RVALUE(PMInfo_, PMInfo) };


    // peerLocation Field Functions 
    bool hasPeerLocation() const { return this->peerLocation_ != nullptr;};
    void deletePeerLocation() { this->peerLocation_ = nullptr;};
    inline string peerLocation() const { DARABONBA_PTR_GET_DEFAULT(peerLocation_, "") };
    inline ApplyPhysicalConnectionLOARequest& setPeerLocation(string peerLocation) { DARABONBA_PTR_SET_VALUE(peerLocation_, peerLocation) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ApplyPhysicalConnectionLOARequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline ApplyPhysicalConnectionLOARequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline ApplyPhysicalConnectionLOARequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // si Field Functions 
    bool hasSi() const { return this->si_ != nullptr;};
    void deleteSi() { this->si_ = nullptr;};
    inline string si() const { DARABONBA_PTR_GET_DEFAULT(si_, "") };
    inline ApplyPhysicalConnectionLOARequest& setSi(string si) { DARABONBA_PTR_SET_VALUE(si_, si) };


  protected:
    // The bandwidth of the Express Connect circuit. Unit: Mbit/s.
    // 
    // Valid values: **2** to **10240**.
    std::shared_ptr<int32_t> bandwidth_ = nullptr;
    // The client token that is used to ensure the idempotence of the request.
    // 
    // You can use the client to generate the token, but you must make sure that the token is unique among different requests. The client token can contain only ASCII characters.
    // 
    // >  If you do not specify this parameter, the system automatically uses the **request ID** as the **client token**. The **request ID** may be different for each request.
    std::shared_ptr<string> clientToken_ = nullptr;
    // The name of the customer company that requires the Express Connect circuit.
    // 
    // This parameter is required.
    std::shared_ptr<string> companyName_ = nullptr;
    // The time when construction started. Specify the time in the ISO 8601 standard in the YYYY-MM-DDThh:mm:ssZ format. The time is displayed in UTC.
    // 
    // This parameter is required.
    std::shared_ptr<string> constructionTime_ = nullptr;
    // The ID of the Express Connect circuit.
    // 
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The type of the Express Connect circuit. Valid values:
    // 
    // *   **MSTP**: MSTP line
    // *   **MPLSVPN**: MPLSVPN line
    // *   **FIBRE**: fiber line
    // *   **Other**: other types
    // 
    // This parameter is required.
    std::shared_ptr<string> lineType_ = nullptr;
    std::shared_ptr<string> ownerAccount_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // The information about the construction engineer.
    std::shared_ptr<vector<ApplyPhysicalConnectionLOARequestPMInfo>> PMInfo_ = nullptr;
    // The geographic location where the Express Connect circuit is deployed.
    std::shared_ptr<string> peerLocation_ = nullptr;
    // The region ID of the Express Connect circuit.
    // 
    // You can call the [DescribeRegions](https://help.aliyun.com/document_detail/36063.html) operation to query the most recent region list.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    std::shared_ptr<string> resourceOwnerAccount_ = nullptr;
    std::shared_ptr<int64_t> resourceOwnerId_ = nullptr;
    // The construction company.
    // 
    // This parameter is required.
    std::shared_ptr<string> si_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
