// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SECONDAPPLYPHYSICALCONNECTIONLOAREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SECONDAPPLYPHYSICALCONNECTIONLOAREQUEST_HPP_
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
  class SecondApplyPhysicalConnectionLOARequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SecondApplyPhysicalConnectionLOARequest& obj) { 
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
    friend void from_json(const Darabonba::Json& j, SecondApplyPhysicalConnectionLOARequest& obj) { 
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
    SecondApplyPhysicalConnectionLOARequest() = default ;
    SecondApplyPhysicalConnectionLOARequest(const SecondApplyPhysicalConnectionLOARequest &) = default ;
    SecondApplyPhysicalConnectionLOARequest(SecondApplyPhysicalConnectionLOARequest &&) = default ;
    SecondApplyPhysicalConnectionLOARequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SecondApplyPhysicalConnectionLOARequest() = default ;
    SecondApplyPhysicalConnectionLOARequest& operator=(const SecondApplyPhysicalConnectionLOARequest &) = default ;
    SecondApplyPhysicalConnectionLOARequest& operator=(SecondApplyPhysicalConnectionLOARequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class PMInfo : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PMInfo& obj) { 
        DARABONBA_PTR_TO_JSON(PMCertificateNo, PMCertificateNo_);
        DARABONBA_PTR_TO_JSON(PMCertificateType, PMCertificateType_);
        DARABONBA_PTR_TO_JSON(PMContactInfo, PMContactInfo_);
        DARABONBA_PTR_TO_JSON(PMGender, PMGender_);
        DARABONBA_PTR_TO_JSON(PMName, PMName_);
      };
      friend void from_json(const Darabonba::Json& j, PMInfo& obj) { 
        DARABONBA_PTR_FROM_JSON(PMCertificateNo, PMCertificateNo_);
        DARABONBA_PTR_FROM_JSON(PMCertificateType, PMCertificateType_);
        DARABONBA_PTR_FROM_JSON(PMContactInfo, PMContactInfo_);
        DARABONBA_PTR_FROM_JSON(PMGender, PMGender_);
        DARABONBA_PTR_FROM_JSON(PMName, PMName_);
      };
      PMInfo() = default ;
      PMInfo(const PMInfo &) = default ;
      PMInfo(PMInfo &&) = default ;
      PMInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~PMInfo() = default ;
      PMInfo& operator=(const PMInfo &) = default ;
      PMInfo& operator=(PMInfo &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->PMCertificateNo_ == nullptr
        && this->PMCertificateType_ == nullptr && this->PMContactInfo_ == nullptr && this->PMGender_ == nullptr && this->PMName_ == nullptr; };
      // PMCertificateNo Field Functions 
      bool hasPMCertificateNo() const { return this->PMCertificateNo_ != nullptr;};
      void deletePMCertificateNo() { this->PMCertificateNo_ = nullptr;};
      inline string getPMCertificateNo() const { DARABONBA_PTR_GET_DEFAULT(PMCertificateNo_, "") };
      inline PMInfo& setPMCertificateNo(string PMCertificateNo) { DARABONBA_PTR_SET_VALUE(PMCertificateNo_, PMCertificateNo) };


      // PMCertificateType Field Functions 
      bool hasPMCertificateType() const { return this->PMCertificateType_ != nullptr;};
      void deletePMCertificateType() { this->PMCertificateType_ = nullptr;};
      inline string getPMCertificateType() const { DARABONBA_PTR_GET_DEFAULT(PMCertificateType_, "") };
      inline PMInfo& setPMCertificateType(string PMCertificateType) { DARABONBA_PTR_SET_VALUE(PMCertificateType_, PMCertificateType) };


      // PMContactInfo Field Functions 
      bool hasPMContactInfo() const { return this->PMContactInfo_ != nullptr;};
      void deletePMContactInfo() { this->PMContactInfo_ = nullptr;};
      inline string getPMContactInfo() const { DARABONBA_PTR_GET_DEFAULT(PMContactInfo_, "") };
      inline PMInfo& setPMContactInfo(string PMContactInfo) { DARABONBA_PTR_SET_VALUE(PMContactInfo_, PMContactInfo) };


      // PMGender Field Functions 
      bool hasPMGender() const { return this->PMGender_ != nullptr;};
      void deletePMGender() { this->PMGender_ = nullptr;};
      inline string getPMGender() const { DARABONBA_PTR_GET_DEFAULT(PMGender_, "") };
      inline PMInfo& setPMGender(string PMGender) { DARABONBA_PTR_SET_VALUE(PMGender_, PMGender) };


      // PMName Field Functions 
      bool hasPMName() const { return this->PMName_ != nullptr;};
      void deletePMName() { this->PMName_ = nullptr;};
      inline string getPMName() const { DARABONBA_PTR_GET_DEFAULT(PMName_, "") };
      inline PMInfo& setPMName(string PMName) { DARABONBA_PTR_SET_VALUE(PMName_, PMName) };


    protected:
      // The ID number of the construction engineer. You can specify the ID number of an ID card or an international passport.
      // 
      // You can configure information for up to 16 construction engineers.
      shared_ptr<string> PMCertificateNo_ {};
      // The type of the identity document of the construction engineer. Valid values:
      // 
      // *   **IDCard**
      // *   **Passport**
      shared_ptr<string> PMCertificateType_ {};
      // The contact information about the construction engineer.
      shared_ptr<string> PMContactInfo_ {};
      // The gender of the construction engineer.
      shared_ptr<string> PMGender_ {};
      // The name of the construction engineer.
      shared_ptr<string> PMName_ {};
    };

    virtual bool empty() const override { return this->bandwidth_ == nullptr
        && this->clientToken_ == nullptr && this->companyName_ == nullptr && this->constructionTime_ == nullptr && this->instanceId_ == nullptr && this->lineType_ == nullptr
        && this->ownerAccount_ == nullptr && this->ownerId_ == nullptr && this->PMInfo_ == nullptr && this->peerLocation_ == nullptr && this->regionId_ == nullptr
        && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr && this->si_ == nullptr; };
    // bandwidth Field Functions 
    bool hasBandwidth() const { return this->bandwidth_ != nullptr;};
    void deleteBandwidth() { this->bandwidth_ = nullptr;};
    inline int32_t getBandwidth() const { DARABONBA_PTR_GET_DEFAULT(bandwidth_, 0) };
    inline SecondApplyPhysicalConnectionLOARequest& setBandwidth(int32_t bandwidth) { DARABONBA_PTR_SET_VALUE(bandwidth_, bandwidth) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline SecondApplyPhysicalConnectionLOARequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // companyName Field Functions 
    bool hasCompanyName() const { return this->companyName_ != nullptr;};
    void deleteCompanyName() { this->companyName_ = nullptr;};
    inline string getCompanyName() const { DARABONBA_PTR_GET_DEFAULT(companyName_, "") };
    inline SecondApplyPhysicalConnectionLOARequest& setCompanyName(string companyName) { DARABONBA_PTR_SET_VALUE(companyName_, companyName) };


    // constructionTime Field Functions 
    bool hasConstructionTime() const { return this->constructionTime_ != nullptr;};
    void deleteConstructionTime() { this->constructionTime_ = nullptr;};
    inline string getConstructionTime() const { DARABONBA_PTR_GET_DEFAULT(constructionTime_, "") };
    inline SecondApplyPhysicalConnectionLOARequest& setConstructionTime(string constructionTime) { DARABONBA_PTR_SET_VALUE(constructionTime_, constructionTime) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline SecondApplyPhysicalConnectionLOARequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // lineType Field Functions 
    bool hasLineType() const { return this->lineType_ != nullptr;};
    void deleteLineType() { this->lineType_ = nullptr;};
    inline string getLineType() const { DARABONBA_PTR_GET_DEFAULT(lineType_, "") };
    inline SecondApplyPhysicalConnectionLOARequest& setLineType(string lineType) { DARABONBA_PTR_SET_VALUE(lineType_, lineType) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string getOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline SecondApplyPhysicalConnectionLOARequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline SecondApplyPhysicalConnectionLOARequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // PMInfo Field Functions 
    bool hasPMInfo() const { return this->PMInfo_ != nullptr;};
    void deletePMInfo() { this->PMInfo_ = nullptr;};
    inline const vector<SecondApplyPhysicalConnectionLOARequest::PMInfo> & getPMInfo() const { DARABONBA_PTR_GET_CONST(PMInfo_, vector<SecondApplyPhysicalConnectionLOARequest::PMInfo>) };
    inline vector<SecondApplyPhysicalConnectionLOARequest::PMInfo> getPMInfo() { DARABONBA_PTR_GET(PMInfo_, vector<SecondApplyPhysicalConnectionLOARequest::PMInfo>) };
    inline SecondApplyPhysicalConnectionLOARequest& setPMInfo(const vector<SecondApplyPhysicalConnectionLOARequest::PMInfo> & pMInfo) { DARABONBA_PTR_SET_VALUE(PMInfo_, pMInfo) };
    inline SecondApplyPhysicalConnectionLOARequest& setPMInfo(vector<SecondApplyPhysicalConnectionLOARequest::PMInfo> && pMInfo) { DARABONBA_PTR_SET_RVALUE(PMInfo_, pMInfo) };


    // peerLocation Field Functions 
    bool hasPeerLocation() const { return this->peerLocation_ != nullptr;};
    void deletePeerLocation() { this->peerLocation_ = nullptr;};
    inline string getPeerLocation() const { DARABONBA_PTR_GET_DEFAULT(peerLocation_, "") };
    inline SecondApplyPhysicalConnectionLOARequest& setPeerLocation(string peerLocation) { DARABONBA_PTR_SET_VALUE(peerLocation_, peerLocation) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline SecondApplyPhysicalConnectionLOARequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline SecondApplyPhysicalConnectionLOARequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline SecondApplyPhysicalConnectionLOARequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // si Field Functions 
    bool hasSi() const { return this->si_ != nullptr;};
    void deleteSi() { this->si_ = nullptr;};
    inline string getSi() const { DARABONBA_PTR_GET_DEFAULT(si_, "") };
    inline SecondApplyPhysicalConnectionLOARequest& setSi(string si) { DARABONBA_PTR_SET_VALUE(si_, si) };


  protected:
    // The bandwidth of the Express Connect circuit. Unit: Mbit/s.
    // 
    // Valid values: **2** to **10240**.
    shared_ptr<int32_t> bandwidth_ {};
    // The client token that is used to ensure the idempotence of the request.
    // 
    // You can use the client to generate the token, but you must make sure that the token is unique among different requests.
    // 
    // >  If you do not specify this parameter, the system automatically uses the request ID as the client token. The request ID may be different for each request.
    shared_ptr<string> clientToken_ {};
    // The name of the customer company that requires the Express Connect circuit.
    // 
    // This parameter is required.
    shared_ptr<string> companyName_ {};
    // The time when construction started. Specify the time in the ISO 8601 standard in the YYYY-MM-DDThh:mm:ssZ format. The time is displayed in UTC.
    // 
    // This parameter is required.
    shared_ptr<string> constructionTime_ {};
    // The ID of the Express Connect circuit.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // The type of Express Connect circuit. Valid values:
    // 
    // *   **MSTP**
    // *   **MPLSVPN**
    // *   **FIBRE**
    // *   **Other**
    // 
    // This parameter is required.
    shared_ptr<string> lineType_ {};
    shared_ptr<string> ownerAccount_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The information about the construction engineer.
    shared_ptr<vector<SecondApplyPhysicalConnectionLOARequest::PMInfo>> PMInfo_ {};
    // The geographic location where the Express Connect circuit is deployed.
    shared_ptr<string> peerLocation_ {};
    // The region where the Express Connect circuit is deployed. You can call the [DescribeRegions](https://help.aliyun.com/document_detail/36063.html) operation to query the most recent region list.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    // The construction company.
    // 
    // This parameter is required.
    shared_ptr<string> si_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
