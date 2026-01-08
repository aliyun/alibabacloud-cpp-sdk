// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEOUTGOINGASSETLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEOUTGOINGASSETLISTRESPONSEBODY_HPP_
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
  class DescribeOutgoingAssetListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeOutgoingAssetListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AssetList, assetList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeOutgoingAssetListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AssetList, assetList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeOutgoingAssetListResponseBody() = default ;
    DescribeOutgoingAssetListResponseBody(const DescribeOutgoingAssetListResponseBody &) = default ;
    DescribeOutgoingAssetListResponseBody(DescribeOutgoingAssetListResponseBody &&) = default ;
    DescribeOutgoingAssetListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeOutgoingAssetListResponseBody() = default ;
    DescribeOutgoingAssetListResponseBody& operator=(const DescribeOutgoingAssetListResponseBody &) = default ;
    DescribeOutgoingAssetListResponseBody& operator=(DescribeOutgoingAssetListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class AssetList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AssetList& obj) { 
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
      friend void from_json(const Darabonba::Json& j, AssetList& obj) { 
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
      AssetList() = default ;
      AssetList(const AssetList &) = default ;
      AssetList(AssetList &&) = default ;
      AssetList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AssetList() = default ;
      AssetList& operator=(const AssetList &) = default ;
      AssetList& operator=(AssetList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->assetInstanceId_ == nullptr
        && this->assetInstanceName_ == nullptr && this->assetsRegion_ == nullptr && this->groupName_ == nullptr && this->inBytes_ == nullptr && this->ipsHitCnt_ == nullptr
        && this->natGatewayId_ == nullptr && this->natGatewayName_ == nullptr && this->outBytes_ == nullptr && this->outgoingDomainCnt_ == nullptr && this->outgoingDstIPCnt_ == nullptr
        && this->privateIP_ == nullptr && this->privateIPList_ == nullptr && this->publicIP_ == nullptr && this->resourceType_ == nullptr && this->securityRisk_ == nullptr
        && this->sessionCount_ == nullptr && this->totalBytes_ == nullptr; };
      // assetInstanceId Field Functions 
      bool hasAssetInstanceId() const { return this->assetInstanceId_ != nullptr;};
      void deleteAssetInstanceId() { this->assetInstanceId_ = nullptr;};
      inline string getAssetInstanceId() const { DARABONBA_PTR_GET_DEFAULT(assetInstanceId_, "") };
      inline AssetList& setAssetInstanceId(string assetInstanceId) { DARABONBA_PTR_SET_VALUE(assetInstanceId_, assetInstanceId) };


      // assetInstanceName Field Functions 
      bool hasAssetInstanceName() const { return this->assetInstanceName_ != nullptr;};
      void deleteAssetInstanceName() { this->assetInstanceName_ = nullptr;};
      inline string getAssetInstanceName() const { DARABONBA_PTR_GET_DEFAULT(assetInstanceName_, "") };
      inline AssetList& setAssetInstanceName(string assetInstanceName) { DARABONBA_PTR_SET_VALUE(assetInstanceName_, assetInstanceName) };


      // assetsRegion Field Functions 
      bool hasAssetsRegion() const { return this->assetsRegion_ != nullptr;};
      void deleteAssetsRegion() { this->assetsRegion_ = nullptr;};
      inline string getAssetsRegion() const { DARABONBA_PTR_GET_DEFAULT(assetsRegion_, "") };
      inline AssetList& setAssetsRegion(string assetsRegion) { DARABONBA_PTR_SET_VALUE(assetsRegion_, assetsRegion) };


      // groupName Field Functions 
      bool hasGroupName() const { return this->groupName_ != nullptr;};
      void deleteGroupName() { this->groupName_ = nullptr;};
      inline string getGroupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
      inline AssetList& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


      // inBytes Field Functions 
      bool hasInBytes() const { return this->inBytes_ != nullptr;};
      void deleteInBytes() { this->inBytes_ = nullptr;};
      inline int64_t getInBytes() const { DARABONBA_PTR_GET_DEFAULT(inBytes_, 0L) };
      inline AssetList& setInBytes(int64_t inBytes) { DARABONBA_PTR_SET_VALUE(inBytes_, inBytes) };


      // ipsHitCnt Field Functions 
      bool hasIpsHitCnt() const { return this->ipsHitCnt_ != nullptr;};
      void deleteIpsHitCnt() { this->ipsHitCnt_ = nullptr;};
      inline int64_t getIpsHitCnt() const { DARABONBA_PTR_GET_DEFAULT(ipsHitCnt_, 0L) };
      inline AssetList& setIpsHitCnt(int64_t ipsHitCnt) { DARABONBA_PTR_SET_VALUE(ipsHitCnt_, ipsHitCnt) };


      // natGatewayId Field Functions 
      bool hasNatGatewayId() const { return this->natGatewayId_ != nullptr;};
      void deleteNatGatewayId() { this->natGatewayId_ = nullptr;};
      inline string getNatGatewayId() const { DARABONBA_PTR_GET_DEFAULT(natGatewayId_, "") };
      inline AssetList& setNatGatewayId(string natGatewayId) { DARABONBA_PTR_SET_VALUE(natGatewayId_, natGatewayId) };


      // natGatewayName Field Functions 
      bool hasNatGatewayName() const { return this->natGatewayName_ != nullptr;};
      void deleteNatGatewayName() { this->natGatewayName_ = nullptr;};
      inline string getNatGatewayName() const { DARABONBA_PTR_GET_DEFAULT(natGatewayName_, "") };
      inline AssetList& setNatGatewayName(string natGatewayName) { DARABONBA_PTR_SET_VALUE(natGatewayName_, natGatewayName) };


      // outBytes Field Functions 
      bool hasOutBytes() const { return this->outBytes_ != nullptr;};
      void deleteOutBytes() { this->outBytes_ = nullptr;};
      inline int64_t getOutBytes() const { DARABONBA_PTR_GET_DEFAULT(outBytes_, 0L) };
      inline AssetList& setOutBytes(int64_t outBytes) { DARABONBA_PTR_SET_VALUE(outBytes_, outBytes) };


      // outgoingDomainCnt Field Functions 
      bool hasOutgoingDomainCnt() const { return this->outgoingDomainCnt_ != nullptr;};
      void deleteOutgoingDomainCnt() { this->outgoingDomainCnt_ = nullptr;};
      inline int64_t getOutgoingDomainCnt() const { DARABONBA_PTR_GET_DEFAULT(outgoingDomainCnt_, 0L) };
      inline AssetList& setOutgoingDomainCnt(int64_t outgoingDomainCnt) { DARABONBA_PTR_SET_VALUE(outgoingDomainCnt_, outgoingDomainCnt) };


      // outgoingDstIPCnt Field Functions 
      bool hasOutgoingDstIPCnt() const { return this->outgoingDstIPCnt_ != nullptr;};
      void deleteOutgoingDstIPCnt() { this->outgoingDstIPCnt_ = nullptr;};
      inline int64_t getOutgoingDstIPCnt() const { DARABONBA_PTR_GET_DEFAULT(outgoingDstIPCnt_, 0L) };
      inline AssetList& setOutgoingDstIPCnt(int64_t outgoingDstIPCnt) { DARABONBA_PTR_SET_VALUE(outgoingDstIPCnt_, outgoingDstIPCnt) };


      // privateIP Field Functions 
      bool hasPrivateIP() const { return this->privateIP_ != nullptr;};
      void deletePrivateIP() { this->privateIP_ = nullptr;};
      inline string getPrivateIP() const { DARABONBA_PTR_GET_DEFAULT(privateIP_, "") };
      inline AssetList& setPrivateIP(string privateIP) { DARABONBA_PTR_SET_VALUE(privateIP_, privateIP) };


      // privateIPList Field Functions 
      bool hasPrivateIPList() const { return this->privateIPList_ != nullptr;};
      void deletePrivateIPList() { this->privateIPList_ = nullptr;};
      inline const vector<string> & getPrivateIPList() const { DARABONBA_PTR_GET_CONST(privateIPList_, vector<string>) };
      inline vector<string> getPrivateIPList() { DARABONBA_PTR_GET(privateIPList_, vector<string>) };
      inline AssetList& setPrivateIPList(const vector<string> & privateIPList) { DARABONBA_PTR_SET_VALUE(privateIPList_, privateIPList) };
      inline AssetList& setPrivateIPList(vector<string> && privateIPList) { DARABONBA_PTR_SET_RVALUE(privateIPList_, privateIPList) };


      // publicIP Field Functions 
      bool hasPublicIP() const { return this->publicIP_ != nullptr;};
      void deletePublicIP() { this->publicIP_ = nullptr;};
      inline string getPublicIP() const { DARABONBA_PTR_GET_DEFAULT(publicIP_, "") };
      inline AssetList& setPublicIP(string publicIP) { DARABONBA_PTR_SET_VALUE(publicIP_, publicIP) };


      // resourceType Field Functions 
      bool hasResourceType() const { return this->resourceType_ != nullptr;};
      void deleteResourceType() { this->resourceType_ = nullptr;};
      inline string getResourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
      inline AssetList& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


      // securityRisk Field Functions 
      bool hasSecurityRisk() const { return this->securityRisk_ != nullptr;};
      void deleteSecurityRisk() { this->securityRisk_ = nullptr;};
      inline string getSecurityRisk() const { DARABONBA_PTR_GET_DEFAULT(securityRisk_, "") };
      inline AssetList& setSecurityRisk(string securityRisk) { DARABONBA_PTR_SET_VALUE(securityRisk_, securityRisk) };


      // sessionCount Field Functions 
      bool hasSessionCount() const { return this->sessionCount_ != nullptr;};
      void deleteSessionCount() { this->sessionCount_ = nullptr;};
      inline int64_t getSessionCount() const { DARABONBA_PTR_GET_DEFAULT(sessionCount_, 0L) };
      inline AssetList& setSessionCount(int64_t sessionCount) { DARABONBA_PTR_SET_VALUE(sessionCount_, sessionCount) };


      // totalBytes Field Functions 
      bool hasTotalBytes() const { return this->totalBytes_ != nullptr;};
      void deleteTotalBytes() { this->totalBytes_ = nullptr;};
      inline int64_t getTotalBytes() const { DARABONBA_PTR_GET_DEFAULT(totalBytes_, 0L) };
      inline AssetList& setTotalBytes(int64_t totalBytes) { DARABONBA_PTR_SET_VALUE(totalBytes_, totalBytes) };


    protected:
      shared_ptr<string> assetInstanceId_ {};
      shared_ptr<string> assetInstanceName_ {};
      shared_ptr<string> assetsRegion_ {};
      shared_ptr<string> groupName_ {};
      shared_ptr<int64_t> inBytes_ {};
      shared_ptr<int64_t> ipsHitCnt_ {};
      shared_ptr<string> natGatewayId_ {};
      shared_ptr<string> natGatewayName_ {};
      shared_ptr<int64_t> outBytes_ {};
      shared_ptr<int64_t> outgoingDomainCnt_ {};
      shared_ptr<int64_t> outgoingDstIPCnt_ {};
      shared_ptr<string> privateIP_ {};
      shared_ptr<vector<string>> privateIPList_ {};
      shared_ptr<string> publicIP_ {};
      shared_ptr<string> resourceType_ {};
      shared_ptr<string> securityRisk_ {};
      shared_ptr<int64_t> sessionCount_ {};
      shared_ptr<int64_t> totalBytes_ {};
    };

    virtual bool empty() const override { return this->assetList_ == nullptr
        && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // assetList Field Functions 
    bool hasAssetList() const { return this->assetList_ != nullptr;};
    void deleteAssetList() { this->assetList_ = nullptr;};
    inline const vector<DescribeOutgoingAssetListResponseBody::AssetList> & getAssetList() const { DARABONBA_PTR_GET_CONST(assetList_, vector<DescribeOutgoingAssetListResponseBody::AssetList>) };
    inline vector<DescribeOutgoingAssetListResponseBody::AssetList> getAssetList() { DARABONBA_PTR_GET(assetList_, vector<DescribeOutgoingAssetListResponseBody::AssetList>) };
    inline DescribeOutgoingAssetListResponseBody& setAssetList(const vector<DescribeOutgoingAssetListResponseBody::AssetList> & assetList) { DARABONBA_PTR_SET_VALUE(assetList_, assetList) };
    inline DescribeOutgoingAssetListResponseBody& setAssetList(vector<DescribeOutgoingAssetListResponseBody::AssetList> && assetList) { DARABONBA_PTR_SET_RVALUE(assetList_, assetList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeOutgoingAssetListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeOutgoingAssetListResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    shared_ptr<vector<DescribeOutgoingAssetListResponseBody::AssetList>> assetList_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
