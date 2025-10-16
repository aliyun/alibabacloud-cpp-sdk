// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEOUTGOINGASSETLISTRESPONSEBODYASSETLIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEOUTGOINGASSETLISTRESPONSEBODYASSETLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class DescribeOutgoingAssetListResponseBodyAssetList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeOutgoingAssetListResponseBodyAssetList& obj) { 
      DARABONBA_PTR_TO_JSON(AssetInstanceId, assetInstanceId_);
      DARABONBA_PTR_TO_JSON(AssetInstanceName, assetInstanceName_);
      DARABONBA_PTR_TO_JSON(AssetsRegion, assetsRegion_);
      DARABONBA_PTR_TO_JSON(GroupName, groupName_);
      DARABONBA_PTR_TO_JSON(InBytes, inBytes_);
      DARABONBA_PTR_TO_JSON(IpsHitCnt, ipsHitCnt_);
      DARABONBA_PTR_TO_JSON(NatGatewayId, natGatewayId_);
      DARABONBA_PTR_TO_JSON(NatGatewayName, natGatewayName_);
      DARABONBA_PTR_TO_JSON(OutBytes, outBytes_);
      DARABONBA_PTR_TO_JSON(OutgoingDomainCnt, outgoingDomainCnt_);
      DARABONBA_PTR_TO_JSON(OutgoingDstIPCnt, outgoingDstIPCnt_);
      DARABONBA_PTR_TO_JSON(PrivateIP, privateIP_);
      DARABONBA_PTR_TO_JSON(PrivateIPList, privateIPList_);
      DARABONBA_PTR_TO_JSON(PublicIP, publicIP_);
      DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_TO_JSON(SecurityRisk, securityRisk_);
      DARABONBA_PTR_TO_JSON(SessionCount, sessionCount_);
      DARABONBA_PTR_TO_JSON(TotalBytes, totalBytes_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeOutgoingAssetListResponseBodyAssetList& obj) { 
      DARABONBA_PTR_FROM_JSON(AssetInstanceId, assetInstanceId_);
      DARABONBA_PTR_FROM_JSON(AssetInstanceName, assetInstanceName_);
      DARABONBA_PTR_FROM_JSON(AssetsRegion, assetsRegion_);
      DARABONBA_PTR_FROM_JSON(GroupName, groupName_);
      DARABONBA_PTR_FROM_JSON(InBytes, inBytes_);
      DARABONBA_PTR_FROM_JSON(IpsHitCnt, ipsHitCnt_);
      DARABONBA_PTR_FROM_JSON(NatGatewayId, natGatewayId_);
      DARABONBA_PTR_FROM_JSON(NatGatewayName, natGatewayName_);
      DARABONBA_PTR_FROM_JSON(OutBytes, outBytes_);
      DARABONBA_PTR_FROM_JSON(OutgoingDomainCnt, outgoingDomainCnt_);
      DARABONBA_PTR_FROM_JSON(OutgoingDstIPCnt, outgoingDstIPCnt_);
      DARABONBA_PTR_FROM_JSON(PrivateIP, privateIP_);
      DARABONBA_PTR_FROM_JSON(PrivateIPList, privateIPList_);
      DARABONBA_PTR_FROM_JSON(PublicIP, publicIP_);
      DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_FROM_JSON(SecurityRisk, securityRisk_);
      DARABONBA_PTR_FROM_JSON(SessionCount, sessionCount_);
      DARABONBA_PTR_FROM_JSON(TotalBytes, totalBytes_);
    };
    DescribeOutgoingAssetListResponseBodyAssetList() = default ;
    DescribeOutgoingAssetListResponseBodyAssetList(const DescribeOutgoingAssetListResponseBodyAssetList &) = default ;
    DescribeOutgoingAssetListResponseBodyAssetList(DescribeOutgoingAssetListResponseBodyAssetList &&) = default ;
    DescribeOutgoingAssetListResponseBodyAssetList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeOutgoingAssetListResponseBodyAssetList() = default ;
    DescribeOutgoingAssetListResponseBodyAssetList& operator=(const DescribeOutgoingAssetListResponseBodyAssetList &) = default ;
    DescribeOutgoingAssetListResponseBodyAssetList& operator=(DescribeOutgoingAssetListResponseBodyAssetList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->assetInstanceId_ == nullptr
        && return this->assetInstanceName_ == nullptr && return this->assetsRegion_ == nullptr && return this->groupName_ == nullptr && return this->inBytes_ == nullptr && return this->ipsHitCnt_ == nullptr
        && return this->natGatewayId_ == nullptr && return this->natGatewayName_ == nullptr && return this->outBytes_ == nullptr && return this->outgoingDomainCnt_ == nullptr && return this->outgoingDstIPCnt_ == nullptr
        && return this->privateIP_ == nullptr && return this->privateIPList_ == nullptr && return this->publicIP_ == nullptr && return this->resourceType_ == nullptr && return this->securityRisk_ == nullptr
        && return this->sessionCount_ == nullptr && return this->totalBytes_ == nullptr; };
    // assetInstanceId Field Functions 
    bool hasAssetInstanceId() const { return this->assetInstanceId_ != nullptr;};
    void deleteAssetInstanceId() { this->assetInstanceId_ = nullptr;};
    inline string assetInstanceId() const { DARABONBA_PTR_GET_DEFAULT(assetInstanceId_, "") };
    inline DescribeOutgoingAssetListResponseBodyAssetList& setAssetInstanceId(string assetInstanceId) { DARABONBA_PTR_SET_VALUE(assetInstanceId_, assetInstanceId) };


    // assetInstanceName Field Functions 
    bool hasAssetInstanceName() const { return this->assetInstanceName_ != nullptr;};
    void deleteAssetInstanceName() { this->assetInstanceName_ = nullptr;};
    inline string assetInstanceName() const { DARABONBA_PTR_GET_DEFAULT(assetInstanceName_, "") };
    inline DescribeOutgoingAssetListResponseBodyAssetList& setAssetInstanceName(string assetInstanceName) { DARABONBA_PTR_SET_VALUE(assetInstanceName_, assetInstanceName) };


    // assetsRegion Field Functions 
    bool hasAssetsRegion() const { return this->assetsRegion_ != nullptr;};
    void deleteAssetsRegion() { this->assetsRegion_ = nullptr;};
    inline string assetsRegion() const { DARABONBA_PTR_GET_DEFAULT(assetsRegion_, "") };
    inline DescribeOutgoingAssetListResponseBodyAssetList& setAssetsRegion(string assetsRegion) { DARABONBA_PTR_SET_VALUE(assetsRegion_, assetsRegion) };


    // groupName Field Functions 
    bool hasGroupName() const { return this->groupName_ != nullptr;};
    void deleteGroupName() { this->groupName_ = nullptr;};
    inline string groupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
    inline DescribeOutgoingAssetListResponseBodyAssetList& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


    // inBytes Field Functions 
    bool hasInBytes() const { return this->inBytes_ != nullptr;};
    void deleteInBytes() { this->inBytes_ = nullptr;};
    inline int64_t inBytes() const { DARABONBA_PTR_GET_DEFAULT(inBytes_, 0L) };
    inline DescribeOutgoingAssetListResponseBodyAssetList& setInBytes(int64_t inBytes) { DARABONBA_PTR_SET_VALUE(inBytes_, inBytes) };


    // ipsHitCnt Field Functions 
    bool hasIpsHitCnt() const { return this->ipsHitCnt_ != nullptr;};
    void deleteIpsHitCnt() { this->ipsHitCnt_ = nullptr;};
    inline int64_t ipsHitCnt() const { DARABONBA_PTR_GET_DEFAULT(ipsHitCnt_, 0L) };
    inline DescribeOutgoingAssetListResponseBodyAssetList& setIpsHitCnt(int64_t ipsHitCnt) { DARABONBA_PTR_SET_VALUE(ipsHitCnt_, ipsHitCnt) };


    // natGatewayId Field Functions 
    bool hasNatGatewayId() const { return this->natGatewayId_ != nullptr;};
    void deleteNatGatewayId() { this->natGatewayId_ = nullptr;};
    inline string natGatewayId() const { DARABONBA_PTR_GET_DEFAULT(natGatewayId_, "") };
    inline DescribeOutgoingAssetListResponseBodyAssetList& setNatGatewayId(string natGatewayId) { DARABONBA_PTR_SET_VALUE(natGatewayId_, natGatewayId) };


    // natGatewayName Field Functions 
    bool hasNatGatewayName() const { return this->natGatewayName_ != nullptr;};
    void deleteNatGatewayName() { this->natGatewayName_ = nullptr;};
    inline string natGatewayName() const { DARABONBA_PTR_GET_DEFAULT(natGatewayName_, "") };
    inline DescribeOutgoingAssetListResponseBodyAssetList& setNatGatewayName(string natGatewayName) { DARABONBA_PTR_SET_VALUE(natGatewayName_, natGatewayName) };


    // outBytes Field Functions 
    bool hasOutBytes() const { return this->outBytes_ != nullptr;};
    void deleteOutBytes() { this->outBytes_ = nullptr;};
    inline int64_t outBytes() const { DARABONBA_PTR_GET_DEFAULT(outBytes_, 0L) };
    inline DescribeOutgoingAssetListResponseBodyAssetList& setOutBytes(int64_t outBytes) { DARABONBA_PTR_SET_VALUE(outBytes_, outBytes) };


    // outgoingDomainCnt Field Functions 
    bool hasOutgoingDomainCnt() const { return this->outgoingDomainCnt_ != nullptr;};
    void deleteOutgoingDomainCnt() { this->outgoingDomainCnt_ = nullptr;};
    inline int64_t outgoingDomainCnt() const { DARABONBA_PTR_GET_DEFAULT(outgoingDomainCnt_, 0L) };
    inline DescribeOutgoingAssetListResponseBodyAssetList& setOutgoingDomainCnt(int64_t outgoingDomainCnt) { DARABONBA_PTR_SET_VALUE(outgoingDomainCnt_, outgoingDomainCnt) };


    // outgoingDstIPCnt Field Functions 
    bool hasOutgoingDstIPCnt() const { return this->outgoingDstIPCnt_ != nullptr;};
    void deleteOutgoingDstIPCnt() { this->outgoingDstIPCnt_ = nullptr;};
    inline int64_t outgoingDstIPCnt() const { DARABONBA_PTR_GET_DEFAULT(outgoingDstIPCnt_, 0L) };
    inline DescribeOutgoingAssetListResponseBodyAssetList& setOutgoingDstIPCnt(int64_t outgoingDstIPCnt) { DARABONBA_PTR_SET_VALUE(outgoingDstIPCnt_, outgoingDstIPCnt) };


    // privateIP Field Functions 
    bool hasPrivateIP() const { return this->privateIP_ != nullptr;};
    void deletePrivateIP() { this->privateIP_ = nullptr;};
    inline string privateIP() const { DARABONBA_PTR_GET_DEFAULT(privateIP_, "") };
    inline DescribeOutgoingAssetListResponseBodyAssetList& setPrivateIP(string privateIP) { DARABONBA_PTR_SET_VALUE(privateIP_, privateIP) };


    // privateIPList Field Functions 
    bool hasPrivateIPList() const { return this->privateIPList_ != nullptr;};
    void deletePrivateIPList() { this->privateIPList_ = nullptr;};
    inline const vector<string> & privateIPList() const { DARABONBA_PTR_GET_CONST(privateIPList_, vector<string>) };
    inline vector<string> privateIPList() { DARABONBA_PTR_GET(privateIPList_, vector<string>) };
    inline DescribeOutgoingAssetListResponseBodyAssetList& setPrivateIPList(const vector<string> & privateIPList) { DARABONBA_PTR_SET_VALUE(privateIPList_, privateIPList) };
    inline DescribeOutgoingAssetListResponseBodyAssetList& setPrivateIPList(vector<string> && privateIPList) { DARABONBA_PTR_SET_RVALUE(privateIPList_, privateIPList) };


    // publicIP Field Functions 
    bool hasPublicIP() const { return this->publicIP_ != nullptr;};
    void deletePublicIP() { this->publicIP_ = nullptr;};
    inline string publicIP() const { DARABONBA_PTR_GET_DEFAULT(publicIP_, "") };
    inline DescribeOutgoingAssetListResponseBodyAssetList& setPublicIP(string publicIP) { DARABONBA_PTR_SET_VALUE(publicIP_, publicIP) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string resourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline DescribeOutgoingAssetListResponseBodyAssetList& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


    // securityRisk Field Functions 
    bool hasSecurityRisk() const { return this->securityRisk_ != nullptr;};
    void deleteSecurityRisk() { this->securityRisk_ = nullptr;};
    inline string securityRisk() const { DARABONBA_PTR_GET_DEFAULT(securityRisk_, "") };
    inline DescribeOutgoingAssetListResponseBodyAssetList& setSecurityRisk(string securityRisk) { DARABONBA_PTR_SET_VALUE(securityRisk_, securityRisk) };


    // sessionCount Field Functions 
    bool hasSessionCount() const { return this->sessionCount_ != nullptr;};
    void deleteSessionCount() { this->sessionCount_ = nullptr;};
    inline int64_t sessionCount() const { DARABONBA_PTR_GET_DEFAULT(sessionCount_, 0L) };
    inline DescribeOutgoingAssetListResponseBodyAssetList& setSessionCount(int64_t sessionCount) { DARABONBA_PTR_SET_VALUE(sessionCount_, sessionCount) };


    // totalBytes Field Functions 
    bool hasTotalBytes() const { return this->totalBytes_ != nullptr;};
    void deleteTotalBytes() { this->totalBytes_ = nullptr;};
    inline int64_t totalBytes() const { DARABONBA_PTR_GET_DEFAULT(totalBytes_, 0L) };
    inline DescribeOutgoingAssetListResponseBodyAssetList& setTotalBytes(int64_t totalBytes) { DARABONBA_PTR_SET_VALUE(totalBytes_, totalBytes) };


  protected:
    std::shared_ptr<string> assetInstanceId_ = nullptr;
    std::shared_ptr<string> assetInstanceName_ = nullptr;
    std::shared_ptr<string> assetsRegion_ = nullptr;
    std::shared_ptr<string> groupName_ = nullptr;
    std::shared_ptr<int64_t> inBytes_ = nullptr;
    std::shared_ptr<int64_t> ipsHitCnt_ = nullptr;
    std::shared_ptr<string> natGatewayId_ = nullptr;
    std::shared_ptr<string> natGatewayName_ = nullptr;
    std::shared_ptr<int64_t> outBytes_ = nullptr;
    std::shared_ptr<int64_t> outgoingDomainCnt_ = nullptr;
    std::shared_ptr<int64_t> outgoingDstIPCnt_ = nullptr;
    std::shared_ptr<string> privateIP_ = nullptr;
    std::shared_ptr<vector<string>> privateIPList_ = nullptr;
    std::shared_ptr<string> publicIP_ = nullptr;
    std::shared_ptr<string> resourceType_ = nullptr;
    std::shared_ptr<string> securityRisk_ = nullptr;
    std::shared_ptr<int64_t> sessionCount_ = nullptr;
    std::shared_ptr<int64_t> totalBytes_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
