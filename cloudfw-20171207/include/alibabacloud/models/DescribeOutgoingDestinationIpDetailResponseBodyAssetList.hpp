// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEOUTGOINGDESTINATIONIPDETAILRESPONSEBODYASSETLIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEOUTGOINGDESTINATIONIPDETAILRESPONSEBODYASSETLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeOutgoingDestinationIPDetailResponseBodyAssetListTagList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class DescribeOutgoingDestinationIPDetailResponseBodyAssetList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeOutgoingDestinationIPDetailResponseBodyAssetList& obj) { 
      DARABONBA_PTR_TO_JSON(AclCoverage, aclCoverage_);
      DARABONBA_PTR_TO_JSON(FirstTime, firstTime_);
      DARABONBA_PTR_TO_JSON(InBytes, inBytes_);
      DARABONBA_PTR_TO_JSON(IspName, ispName_);
      DARABONBA_PTR_TO_JSON(LastTime, lastTime_);
      DARABONBA_PTR_TO_JSON(LocationName, locationName_);
      DARABONBA_PTR_TO_JSON(NatGatewayId, natGatewayId_);
      DARABONBA_PTR_TO_JSON(NatGatewayName, natGatewayName_);
      DARABONBA_PTR_TO_JSON(OutBytes, outBytes_);
      DARABONBA_PTR_TO_JSON(PrivateIP, privateIP_);
      DARABONBA_PTR_TO_JSON(PublicIP, publicIP_);
      DARABONBA_PTR_TO_JSON(RegionNo, regionNo_);
      DARABONBA_PTR_TO_JSON(ResourceInstanceId, resourceInstanceId_);
      DARABONBA_PTR_TO_JSON(ResourceInstanceName, resourceInstanceName_);
      DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_TO_JSON(RuleId, ruleId_);
      DARABONBA_PTR_TO_JSON(RuleName, ruleName_);
      DARABONBA_PTR_TO_JSON(SessionCount, sessionCount_);
      DARABONBA_PTR_TO_JSON(TagList, tagList_);
      DARABONBA_PTR_TO_JSON(TotalBytes, totalBytes_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeOutgoingDestinationIPDetailResponseBodyAssetList& obj) { 
      DARABONBA_PTR_FROM_JSON(AclCoverage, aclCoverage_);
      DARABONBA_PTR_FROM_JSON(FirstTime, firstTime_);
      DARABONBA_PTR_FROM_JSON(InBytes, inBytes_);
      DARABONBA_PTR_FROM_JSON(IspName, ispName_);
      DARABONBA_PTR_FROM_JSON(LastTime, lastTime_);
      DARABONBA_PTR_FROM_JSON(LocationName, locationName_);
      DARABONBA_PTR_FROM_JSON(NatGatewayId, natGatewayId_);
      DARABONBA_PTR_FROM_JSON(NatGatewayName, natGatewayName_);
      DARABONBA_PTR_FROM_JSON(OutBytes, outBytes_);
      DARABONBA_PTR_FROM_JSON(PrivateIP, privateIP_);
      DARABONBA_PTR_FROM_JSON(PublicIP, publicIP_);
      DARABONBA_PTR_FROM_JSON(RegionNo, regionNo_);
      DARABONBA_PTR_FROM_JSON(ResourceInstanceId, resourceInstanceId_);
      DARABONBA_PTR_FROM_JSON(ResourceInstanceName, resourceInstanceName_);
      DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_FROM_JSON(RuleId, ruleId_);
      DARABONBA_PTR_FROM_JSON(RuleName, ruleName_);
      DARABONBA_PTR_FROM_JSON(SessionCount, sessionCount_);
      DARABONBA_PTR_FROM_JSON(TagList, tagList_);
      DARABONBA_PTR_FROM_JSON(TotalBytes, totalBytes_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
    };
    DescribeOutgoingDestinationIPDetailResponseBodyAssetList() = default ;
    DescribeOutgoingDestinationIPDetailResponseBodyAssetList(const DescribeOutgoingDestinationIPDetailResponseBodyAssetList &) = default ;
    DescribeOutgoingDestinationIPDetailResponseBodyAssetList(DescribeOutgoingDestinationIPDetailResponseBodyAssetList &&) = default ;
    DescribeOutgoingDestinationIPDetailResponseBodyAssetList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeOutgoingDestinationIPDetailResponseBodyAssetList() = default ;
    DescribeOutgoingDestinationIPDetailResponseBodyAssetList& operator=(const DescribeOutgoingDestinationIPDetailResponseBodyAssetList &) = default ;
    DescribeOutgoingDestinationIPDetailResponseBodyAssetList& operator=(DescribeOutgoingDestinationIPDetailResponseBodyAssetList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->aclCoverage_ == nullptr
        && return this->firstTime_ == nullptr && return this->inBytes_ == nullptr && return this->ispName_ == nullptr && return this->lastTime_ == nullptr && return this->locationName_ == nullptr
        && return this->natGatewayId_ == nullptr && return this->natGatewayName_ == nullptr && return this->outBytes_ == nullptr && return this->privateIP_ == nullptr && return this->publicIP_ == nullptr
        && return this->regionNo_ == nullptr && return this->resourceInstanceId_ == nullptr && return this->resourceInstanceName_ == nullptr && return this->resourceType_ == nullptr && return this->ruleId_ == nullptr
        && return this->ruleName_ == nullptr && return this->sessionCount_ == nullptr && return this->tagList_ == nullptr && return this->totalBytes_ == nullptr && return this->vpcId_ == nullptr; };
    // aclCoverage Field Functions 
    bool hasAclCoverage() const { return this->aclCoverage_ != nullptr;};
    void deleteAclCoverage() { this->aclCoverage_ = nullptr;};
    inline string aclCoverage() const { DARABONBA_PTR_GET_DEFAULT(aclCoverage_, "") };
    inline DescribeOutgoingDestinationIPDetailResponseBodyAssetList& setAclCoverage(string aclCoverage) { DARABONBA_PTR_SET_VALUE(aclCoverage_, aclCoverage) };


    // firstTime Field Functions 
    bool hasFirstTime() const { return this->firstTime_ != nullptr;};
    void deleteFirstTime() { this->firstTime_ = nullptr;};
    inline int32_t firstTime() const { DARABONBA_PTR_GET_DEFAULT(firstTime_, 0) };
    inline DescribeOutgoingDestinationIPDetailResponseBodyAssetList& setFirstTime(int32_t firstTime) { DARABONBA_PTR_SET_VALUE(firstTime_, firstTime) };


    // inBytes Field Functions 
    bool hasInBytes() const { return this->inBytes_ != nullptr;};
    void deleteInBytes() { this->inBytes_ = nullptr;};
    inline int64_t inBytes() const { DARABONBA_PTR_GET_DEFAULT(inBytes_, 0L) };
    inline DescribeOutgoingDestinationIPDetailResponseBodyAssetList& setInBytes(int64_t inBytes) { DARABONBA_PTR_SET_VALUE(inBytes_, inBytes) };


    // ispName Field Functions 
    bool hasIspName() const { return this->ispName_ != nullptr;};
    void deleteIspName() { this->ispName_ = nullptr;};
    inline string ispName() const { DARABONBA_PTR_GET_DEFAULT(ispName_, "") };
    inline DescribeOutgoingDestinationIPDetailResponseBodyAssetList& setIspName(string ispName) { DARABONBA_PTR_SET_VALUE(ispName_, ispName) };


    // lastTime Field Functions 
    bool hasLastTime() const { return this->lastTime_ != nullptr;};
    void deleteLastTime() { this->lastTime_ = nullptr;};
    inline int32_t lastTime() const { DARABONBA_PTR_GET_DEFAULT(lastTime_, 0) };
    inline DescribeOutgoingDestinationIPDetailResponseBodyAssetList& setLastTime(int32_t lastTime) { DARABONBA_PTR_SET_VALUE(lastTime_, lastTime) };


    // locationName Field Functions 
    bool hasLocationName() const { return this->locationName_ != nullptr;};
    void deleteLocationName() { this->locationName_ = nullptr;};
    inline string locationName() const { DARABONBA_PTR_GET_DEFAULT(locationName_, "") };
    inline DescribeOutgoingDestinationIPDetailResponseBodyAssetList& setLocationName(string locationName) { DARABONBA_PTR_SET_VALUE(locationName_, locationName) };


    // natGatewayId Field Functions 
    bool hasNatGatewayId() const { return this->natGatewayId_ != nullptr;};
    void deleteNatGatewayId() { this->natGatewayId_ = nullptr;};
    inline string natGatewayId() const { DARABONBA_PTR_GET_DEFAULT(natGatewayId_, "") };
    inline DescribeOutgoingDestinationIPDetailResponseBodyAssetList& setNatGatewayId(string natGatewayId) { DARABONBA_PTR_SET_VALUE(natGatewayId_, natGatewayId) };


    // natGatewayName Field Functions 
    bool hasNatGatewayName() const { return this->natGatewayName_ != nullptr;};
    void deleteNatGatewayName() { this->natGatewayName_ = nullptr;};
    inline string natGatewayName() const { DARABONBA_PTR_GET_DEFAULT(natGatewayName_, "") };
    inline DescribeOutgoingDestinationIPDetailResponseBodyAssetList& setNatGatewayName(string natGatewayName) { DARABONBA_PTR_SET_VALUE(natGatewayName_, natGatewayName) };


    // outBytes Field Functions 
    bool hasOutBytes() const { return this->outBytes_ != nullptr;};
    void deleteOutBytes() { this->outBytes_ = nullptr;};
    inline int64_t outBytes() const { DARABONBA_PTR_GET_DEFAULT(outBytes_, 0L) };
    inline DescribeOutgoingDestinationIPDetailResponseBodyAssetList& setOutBytes(int64_t outBytes) { DARABONBA_PTR_SET_VALUE(outBytes_, outBytes) };


    // privateIP Field Functions 
    bool hasPrivateIP() const { return this->privateIP_ != nullptr;};
    void deletePrivateIP() { this->privateIP_ = nullptr;};
    inline string privateIP() const { DARABONBA_PTR_GET_DEFAULT(privateIP_, "") };
    inline DescribeOutgoingDestinationIPDetailResponseBodyAssetList& setPrivateIP(string privateIP) { DARABONBA_PTR_SET_VALUE(privateIP_, privateIP) };


    // publicIP Field Functions 
    bool hasPublicIP() const { return this->publicIP_ != nullptr;};
    void deletePublicIP() { this->publicIP_ = nullptr;};
    inline string publicIP() const { DARABONBA_PTR_GET_DEFAULT(publicIP_, "") };
    inline DescribeOutgoingDestinationIPDetailResponseBodyAssetList& setPublicIP(string publicIP) { DARABONBA_PTR_SET_VALUE(publicIP_, publicIP) };


    // regionNo Field Functions 
    bool hasRegionNo() const { return this->regionNo_ != nullptr;};
    void deleteRegionNo() { this->regionNo_ = nullptr;};
    inline string regionNo() const { DARABONBA_PTR_GET_DEFAULT(regionNo_, "") };
    inline DescribeOutgoingDestinationIPDetailResponseBodyAssetList& setRegionNo(string regionNo) { DARABONBA_PTR_SET_VALUE(regionNo_, regionNo) };


    // resourceInstanceId Field Functions 
    bool hasResourceInstanceId() const { return this->resourceInstanceId_ != nullptr;};
    void deleteResourceInstanceId() { this->resourceInstanceId_ = nullptr;};
    inline string resourceInstanceId() const { DARABONBA_PTR_GET_DEFAULT(resourceInstanceId_, "") };
    inline DescribeOutgoingDestinationIPDetailResponseBodyAssetList& setResourceInstanceId(string resourceInstanceId) { DARABONBA_PTR_SET_VALUE(resourceInstanceId_, resourceInstanceId) };


    // resourceInstanceName Field Functions 
    bool hasResourceInstanceName() const { return this->resourceInstanceName_ != nullptr;};
    void deleteResourceInstanceName() { this->resourceInstanceName_ = nullptr;};
    inline string resourceInstanceName() const { DARABONBA_PTR_GET_DEFAULT(resourceInstanceName_, "") };
    inline DescribeOutgoingDestinationIPDetailResponseBodyAssetList& setResourceInstanceName(string resourceInstanceName) { DARABONBA_PTR_SET_VALUE(resourceInstanceName_, resourceInstanceName) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string resourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline DescribeOutgoingDestinationIPDetailResponseBodyAssetList& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


    // ruleId Field Functions 
    bool hasRuleId() const { return this->ruleId_ != nullptr;};
    void deleteRuleId() { this->ruleId_ = nullptr;};
    inline string ruleId() const { DARABONBA_PTR_GET_DEFAULT(ruleId_, "") };
    inline DescribeOutgoingDestinationIPDetailResponseBodyAssetList& setRuleId(string ruleId) { DARABONBA_PTR_SET_VALUE(ruleId_, ruleId) };


    // ruleName Field Functions 
    bool hasRuleName() const { return this->ruleName_ != nullptr;};
    void deleteRuleName() { this->ruleName_ = nullptr;};
    inline string ruleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
    inline DescribeOutgoingDestinationIPDetailResponseBodyAssetList& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


    // sessionCount Field Functions 
    bool hasSessionCount() const { return this->sessionCount_ != nullptr;};
    void deleteSessionCount() { this->sessionCount_ = nullptr;};
    inline int64_t sessionCount() const { DARABONBA_PTR_GET_DEFAULT(sessionCount_, 0L) };
    inline DescribeOutgoingDestinationIPDetailResponseBodyAssetList& setSessionCount(int64_t sessionCount) { DARABONBA_PTR_SET_VALUE(sessionCount_, sessionCount) };


    // tagList Field Functions 
    bool hasTagList() const { return this->tagList_ != nullptr;};
    void deleteTagList() { this->tagList_ = nullptr;};
    inline const vector<Models::DescribeOutgoingDestinationIPDetailResponseBodyAssetListTagList> & tagList() const { DARABONBA_PTR_GET_CONST(tagList_, vector<Models::DescribeOutgoingDestinationIPDetailResponseBodyAssetListTagList>) };
    inline vector<Models::DescribeOutgoingDestinationIPDetailResponseBodyAssetListTagList> tagList() { DARABONBA_PTR_GET(tagList_, vector<Models::DescribeOutgoingDestinationIPDetailResponseBodyAssetListTagList>) };
    inline DescribeOutgoingDestinationIPDetailResponseBodyAssetList& setTagList(const vector<Models::DescribeOutgoingDestinationIPDetailResponseBodyAssetListTagList> & tagList) { DARABONBA_PTR_SET_VALUE(tagList_, tagList) };
    inline DescribeOutgoingDestinationIPDetailResponseBodyAssetList& setTagList(vector<Models::DescribeOutgoingDestinationIPDetailResponseBodyAssetListTagList> && tagList) { DARABONBA_PTR_SET_RVALUE(tagList_, tagList) };


    // totalBytes Field Functions 
    bool hasTotalBytes() const { return this->totalBytes_ != nullptr;};
    void deleteTotalBytes() { this->totalBytes_ = nullptr;};
    inline string totalBytes() const { DARABONBA_PTR_GET_DEFAULT(totalBytes_, "") };
    inline DescribeOutgoingDestinationIPDetailResponseBodyAssetList& setTotalBytes(string totalBytes) { DARABONBA_PTR_SET_VALUE(totalBytes_, totalBytes) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string vpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline DescribeOutgoingDestinationIPDetailResponseBodyAssetList& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


  protected:
    std::shared_ptr<string> aclCoverage_ = nullptr;
    std::shared_ptr<int32_t> firstTime_ = nullptr;
    std::shared_ptr<int64_t> inBytes_ = nullptr;
    std::shared_ptr<string> ispName_ = nullptr;
    std::shared_ptr<int32_t> lastTime_ = nullptr;
    std::shared_ptr<string> locationName_ = nullptr;
    std::shared_ptr<string> natGatewayId_ = nullptr;
    std::shared_ptr<string> natGatewayName_ = nullptr;
    std::shared_ptr<int64_t> outBytes_ = nullptr;
    std::shared_ptr<string> privateIP_ = nullptr;
    std::shared_ptr<string> publicIP_ = nullptr;
    std::shared_ptr<string> regionNo_ = nullptr;
    std::shared_ptr<string> resourceInstanceId_ = nullptr;
    std::shared_ptr<string> resourceInstanceName_ = nullptr;
    std::shared_ptr<string> resourceType_ = nullptr;
    std::shared_ptr<string> ruleId_ = nullptr;
    std::shared_ptr<string> ruleName_ = nullptr;
    std::shared_ptr<int64_t> sessionCount_ = nullptr;
    std::shared_ptr<vector<Models::DescribeOutgoingDestinationIPDetailResponseBodyAssetListTagList>> tagList_ = nullptr;
    std::shared_ptr<string> totalBytes_ = nullptr;
    std::shared_ptr<string> vpcId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
