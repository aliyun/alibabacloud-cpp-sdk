// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEOUTGOINGDESTINATIONIPDETAILRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEOUTGOINGDESTINATIONIPDETAILRESPONSEBODY_HPP_
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
  class DescribeOutgoingDestinationIPDetailResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeOutgoingDestinationIPDetailResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AssetList, assetList_);
      DARABONBA_PTR_TO_JSON(IspName, ispName_);
      DARABONBA_PTR_TO_JSON(LocationName, locationName_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeOutgoingDestinationIPDetailResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AssetList, assetList_);
      DARABONBA_PTR_FROM_JSON(IspName, ispName_);
      DARABONBA_PTR_FROM_JSON(LocationName, locationName_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeOutgoingDestinationIPDetailResponseBody() = default ;
    DescribeOutgoingDestinationIPDetailResponseBody(const DescribeOutgoingDestinationIPDetailResponseBody &) = default ;
    DescribeOutgoingDestinationIPDetailResponseBody(DescribeOutgoingDestinationIPDetailResponseBody &&) = default ;
    DescribeOutgoingDestinationIPDetailResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeOutgoingDestinationIPDetailResponseBody() = default ;
    DescribeOutgoingDestinationIPDetailResponseBody& operator=(const DescribeOutgoingDestinationIPDetailResponseBody &) = default ;
    DescribeOutgoingDestinationIPDetailResponseBody& operator=(DescribeOutgoingDestinationIPDetailResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class AssetList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AssetList& obj) { 
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
      friend void from_json(const Darabonba::Json& j, AssetList& obj) { 
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
      class TagList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const TagList& obj) { 
          DARABONBA_PTR_TO_JSON(ClassId, classId_);
          DARABONBA_PTR_TO_JSON(RiskLevel, riskLevel_);
          DARABONBA_PTR_TO_JSON(TagDescribe, tagDescribe_);
          DARABONBA_PTR_TO_JSON(TagId, tagId_);
          DARABONBA_PTR_TO_JSON(TagName, tagName_);
        };
        friend void from_json(const Darabonba::Json& j, TagList& obj) { 
          DARABONBA_PTR_FROM_JSON(ClassId, classId_);
          DARABONBA_PTR_FROM_JSON(RiskLevel, riskLevel_);
          DARABONBA_PTR_FROM_JSON(TagDescribe, tagDescribe_);
          DARABONBA_PTR_FROM_JSON(TagId, tagId_);
          DARABONBA_PTR_FROM_JSON(TagName, tagName_);
        };
        TagList() = default ;
        TagList(const TagList &) = default ;
        TagList(TagList &&) = default ;
        TagList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~TagList() = default ;
        TagList& operator=(const TagList &) = default ;
        TagList& operator=(TagList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->classId_ == nullptr
        && this->riskLevel_ == nullptr && this->tagDescribe_ == nullptr && this->tagId_ == nullptr && this->tagName_ == nullptr; };
        // classId Field Functions 
        bool hasClassId() const { return this->classId_ != nullptr;};
        void deleteClassId() { this->classId_ = nullptr;};
        inline string getClassId() const { DARABONBA_PTR_GET_DEFAULT(classId_, "") };
        inline TagList& setClassId(string classId) { DARABONBA_PTR_SET_VALUE(classId_, classId) };


        // riskLevel Field Functions 
        bool hasRiskLevel() const { return this->riskLevel_ != nullptr;};
        void deleteRiskLevel() { this->riskLevel_ = nullptr;};
        inline int32_t getRiskLevel() const { DARABONBA_PTR_GET_DEFAULT(riskLevel_, 0) };
        inline TagList& setRiskLevel(int32_t riskLevel) { DARABONBA_PTR_SET_VALUE(riskLevel_, riskLevel) };


        // tagDescribe Field Functions 
        bool hasTagDescribe() const { return this->tagDescribe_ != nullptr;};
        void deleteTagDescribe() { this->tagDescribe_ = nullptr;};
        inline string getTagDescribe() const { DARABONBA_PTR_GET_DEFAULT(tagDescribe_, "") };
        inline TagList& setTagDescribe(string tagDescribe) { DARABONBA_PTR_SET_VALUE(tagDescribe_, tagDescribe) };


        // tagId Field Functions 
        bool hasTagId() const { return this->tagId_ != nullptr;};
        void deleteTagId() { this->tagId_ = nullptr;};
        inline string getTagId() const { DARABONBA_PTR_GET_DEFAULT(tagId_, "") };
        inline TagList& setTagId(string tagId) { DARABONBA_PTR_SET_VALUE(tagId_, tagId) };


        // tagName Field Functions 
        bool hasTagName() const { return this->tagName_ != nullptr;};
        void deleteTagName() { this->tagName_ = nullptr;};
        inline string getTagName() const { DARABONBA_PTR_GET_DEFAULT(tagName_, "") };
        inline TagList& setTagName(string tagName) { DARABONBA_PTR_SET_VALUE(tagName_, tagName) };


      protected:
        shared_ptr<string> classId_ {};
        shared_ptr<int32_t> riskLevel_ {};
        shared_ptr<string> tagDescribe_ {};
        shared_ptr<string> tagId_ {};
        shared_ptr<string> tagName_ {};
      };

      virtual bool empty() const override { return this->aclCoverage_ == nullptr
        && this->firstTime_ == nullptr && this->inBytes_ == nullptr && this->ispName_ == nullptr && this->lastTime_ == nullptr && this->locationName_ == nullptr
        && this->natGatewayId_ == nullptr && this->natGatewayName_ == nullptr && this->outBytes_ == nullptr && this->privateIP_ == nullptr && this->publicIP_ == nullptr
        && this->regionNo_ == nullptr && this->resourceInstanceId_ == nullptr && this->resourceInstanceName_ == nullptr && this->resourceType_ == nullptr && this->ruleId_ == nullptr
        && this->ruleName_ == nullptr && this->sessionCount_ == nullptr && this->tagList_ == nullptr && this->totalBytes_ == nullptr && this->vpcId_ == nullptr; };
      // aclCoverage Field Functions 
      bool hasAclCoverage() const { return this->aclCoverage_ != nullptr;};
      void deleteAclCoverage() { this->aclCoverage_ = nullptr;};
      inline string getAclCoverage() const { DARABONBA_PTR_GET_DEFAULT(aclCoverage_, "") };
      inline AssetList& setAclCoverage(string aclCoverage) { DARABONBA_PTR_SET_VALUE(aclCoverage_, aclCoverage) };


      // firstTime Field Functions 
      bool hasFirstTime() const { return this->firstTime_ != nullptr;};
      void deleteFirstTime() { this->firstTime_ = nullptr;};
      inline int32_t getFirstTime() const { DARABONBA_PTR_GET_DEFAULT(firstTime_, 0) };
      inline AssetList& setFirstTime(int32_t firstTime) { DARABONBA_PTR_SET_VALUE(firstTime_, firstTime) };


      // inBytes Field Functions 
      bool hasInBytes() const { return this->inBytes_ != nullptr;};
      void deleteInBytes() { this->inBytes_ = nullptr;};
      inline int64_t getInBytes() const { DARABONBA_PTR_GET_DEFAULT(inBytes_, 0L) };
      inline AssetList& setInBytes(int64_t inBytes) { DARABONBA_PTR_SET_VALUE(inBytes_, inBytes) };


      // ispName Field Functions 
      bool hasIspName() const { return this->ispName_ != nullptr;};
      void deleteIspName() { this->ispName_ = nullptr;};
      inline string getIspName() const { DARABONBA_PTR_GET_DEFAULT(ispName_, "") };
      inline AssetList& setIspName(string ispName) { DARABONBA_PTR_SET_VALUE(ispName_, ispName) };


      // lastTime Field Functions 
      bool hasLastTime() const { return this->lastTime_ != nullptr;};
      void deleteLastTime() { this->lastTime_ = nullptr;};
      inline int32_t getLastTime() const { DARABONBA_PTR_GET_DEFAULT(lastTime_, 0) };
      inline AssetList& setLastTime(int32_t lastTime) { DARABONBA_PTR_SET_VALUE(lastTime_, lastTime) };


      // locationName Field Functions 
      bool hasLocationName() const { return this->locationName_ != nullptr;};
      void deleteLocationName() { this->locationName_ = nullptr;};
      inline string getLocationName() const { DARABONBA_PTR_GET_DEFAULT(locationName_, "") };
      inline AssetList& setLocationName(string locationName) { DARABONBA_PTR_SET_VALUE(locationName_, locationName) };


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


      // privateIP Field Functions 
      bool hasPrivateIP() const { return this->privateIP_ != nullptr;};
      void deletePrivateIP() { this->privateIP_ = nullptr;};
      inline string getPrivateIP() const { DARABONBA_PTR_GET_DEFAULT(privateIP_, "") };
      inline AssetList& setPrivateIP(string privateIP) { DARABONBA_PTR_SET_VALUE(privateIP_, privateIP) };


      // publicIP Field Functions 
      bool hasPublicIP() const { return this->publicIP_ != nullptr;};
      void deletePublicIP() { this->publicIP_ = nullptr;};
      inline string getPublicIP() const { DARABONBA_PTR_GET_DEFAULT(publicIP_, "") };
      inline AssetList& setPublicIP(string publicIP) { DARABONBA_PTR_SET_VALUE(publicIP_, publicIP) };


      // regionNo Field Functions 
      bool hasRegionNo() const { return this->regionNo_ != nullptr;};
      void deleteRegionNo() { this->regionNo_ = nullptr;};
      inline string getRegionNo() const { DARABONBA_PTR_GET_DEFAULT(regionNo_, "") };
      inline AssetList& setRegionNo(string regionNo) { DARABONBA_PTR_SET_VALUE(regionNo_, regionNo) };


      // resourceInstanceId Field Functions 
      bool hasResourceInstanceId() const { return this->resourceInstanceId_ != nullptr;};
      void deleteResourceInstanceId() { this->resourceInstanceId_ = nullptr;};
      inline string getResourceInstanceId() const { DARABONBA_PTR_GET_DEFAULT(resourceInstanceId_, "") };
      inline AssetList& setResourceInstanceId(string resourceInstanceId) { DARABONBA_PTR_SET_VALUE(resourceInstanceId_, resourceInstanceId) };


      // resourceInstanceName Field Functions 
      bool hasResourceInstanceName() const { return this->resourceInstanceName_ != nullptr;};
      void deleteResourceInstanceName() { this->resourceInstanceName_ = nullptr;};
      inline string getResourceInstanceName() const { DARABONBA_PTR_GET_DEFAULT(resourceInstanceName_, "") };
      inline AssetList& setResourceInstanceName(string resourceInstanceName) { DARABONBA_PTR_SET_VALUE(resourceInstanceName_, resourceInstanceName) };


      // resourceType Field Functions 
      bool hasResourceType() const { return this->resourceType_ != nullptr;};
      void deleteResourceType() { this->resourceType_ = nullptr;};
      inline string getResourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
      inline AssetList& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


      // ruleId Field Functions 
      bool hasRuleId() const { return this->ruleId_ != nullptr;};
      void deleteRuleId() { this->ruleId_ = nullptr;};
      inline string getRuleId() const { DARABONBA_PTR_GET_DEFAULT(ruleId_, "") };
      inline AssetList& setRuleId(string ruleId) { DARABONBA_PTR_SET_VALUE(ruleId_, ruleId) };


      // ruleName Field Functions 
      bool hasRuleName() const { return this->ruleName_ != nullptr;};
      void deleteRuleName() { this->ruleName_ = nullptr;};
      inline string getRuleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
      inline AssetList& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


      // sessionCount Field Functions 
      bool hasSessionCount() const { return this->sessionCount_ != nullptr;};
      void deleteSessionCount() { this->sessionCount_ = nullptr;};
      inline int64_t getSessionCount() const { DARABONBA_PTR_GET_DEFAULT(sessionCount_, 0L) };
      inline AssetList& setSessionCount(int64_t sessionCount) { DARABONBA_PTR_SET_VALUE(sessionCount_, sessionCount) };


      // tagList Field Functions 
      bool hasTagList() const { return this->tagList_ != nullptr;};
      void deleteTagList() { this->tagList_ = nullptr;};
      inline const vector<AssetList::TagList> & getTagList() const { DARABONBA_PTR_GET_CONST(tagList_, vector<AssetList::TagList>) };
      inline vector<AssetList::TagList> getTagList() { DARABONBA_PTR_GET(tagList_, vector<AssetList::TagList>) };
      inline AssetList& setTagList(const vector<AssetList::TagList> & tagList) { DARABONBA_PTR_SET_VALUE(tagList_, tagList) };
      inline AssetList& setTagList(vector<AssetList::TagList> && tagList) { DARABONBA_PTR_SET_RVALUE(tagList_, tagList) };


      // totalBytes Field Functions 
      bool hasTotalBytes() const { return this->totalBytes_ != nullptr;};
      void deleteTotalBytes() { this->totalBytes_ = nullptr;};
      inline string getTotalBytes() const { DARABONBA_PTR_GET_DEFAULT(totalBytes_, "") };
      inline AssetList& setTotalBytes(string totalBytes) { DARABONBA_PTR_SET_VALUE(totalBytes_, totalBytes) };


      // vpcId Field Functions 
      bool hasVpcId() const { return this->vpcId_ != nullptr;};
      void deleteVpcId() { this->vpcId_ = nullptr;};
      inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
      inline AssetList& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


    protected:
      shared_ptr<string> aclCoverage_ {};
      shared_ptr<int32_t> firstTime_ {};
      shared_ptr<int64_t> inBytes_ {};
      shared_ptr<string> ispName_ {};
      shared_ptr<int32_t> lastTime_ {};
      shared_ptr<string> locationName_ {};
      shared_ptr<string> natGatewayId_ {};
      shared_ptr<string> natGatewayName_ {};
      shared_ptr<int64_t> outBytes_ {};
      shared_ptr<string> privateIP_ {};
      shared_ptr<string> publicIP_ {};
      shared_ptr<string> regionNo_ {};
      shared_ptr<string> resourceInstanceId_ {};
      shared_ptr<string> resourceInstanceName_ {};
      shared_ptr<string> resourceType_ {};
      shared_ptr<string> ruleId_ {};
      shared_ptr<string> ruleName_ {};
      shared_ptr<int64_t> sessionCount_ {};
      shared_ptr<vector<AssetList::TagList>> tagList_ {};
      shared_ptr<string> totalBytes_ {};
      shared_ptr<string> vpcId_ {};
    };

    virtual bool empty() const override { return this->assetList_ == nullptr
        && this->ispName_ == nullptr && this->locationName_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // assetList Field Functions 
    bool hasAssetList() const { return this->assetList_ != nullptr;};
    void deleteAssetList() { this->assetList_ = nullptr;};
    inline const vector<DescribeOutgoingDestinationIPDetailResponseBody::AssetList> & getAssetList() const { DARABONBA_PTR_GET_CONST(assetList_, vector<DescribeOutgoingDestinationIPDetailResponseBody::AssetList>) };
    inline vector<DescribeOutgoingDestinationIPDetailResponseBody::AssetList> getAssetList() { DARABONBA_PTR_GET(assetList_, vector<DescribeOutgoingDestinationIPDetailResponseBody::AssetList>) };
    inline DescribeOutgoingDestinationIPDetailResponseBody& setAssetList(const vector<DescribeOutgoingDestinationIPDetailResponseBody::AssetList> & assetList) { DARABONBA_PTR_SET_VALUE(assetList_, assetList) };
    inline DescribeOutgoingDestinationIPDetailResponseBody& setAssetList(vector<DescribeOutgoingDestinationIPDetailResponseBody::AssetList> && assetList) { DARABONBA_PTR_SET_RVALUE(assetList_, assetList) };


    // ispName Field Functions 
    bool hasIspName() const { return this->ispName_ != nullptr;};
    void deleteIspName() { this->ispName_ = nullptr;};
    inline string getIspName() const { DARABONBA_PTR_GET_DEFAULT(ispName_, "") };
    inline DescribeOutgoingDestinationIPDetailResponseBody& setIspName(string ispName) { DARABONBA_PTR_SET_VALUE(ispName_, ispName) };


    // locationName Field Functions 
    bool hasLocationName() const { return this->locationName_ != nullptr;};
    void deleteLocationName() { this->locationName_ = nullptr;};
    inline string getLocationName() const { DARABONBA_PTR_GET_DEFAULT(locationName_, "") };
    inline DescribeOutgoingDestinationIPDetailResponseBody& setLocationName(string locationName) { DARABONBA_PTR_SET_VALUE(locationName_, locationName) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeOutgoingDestinationIPDetailResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeOutgoingDestinationIPDetailResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    shared_ptr<vector<DescribeOutgoingDestinationIPDetailResponseBody::AssetList>> assetList_ {};
    shared_ptr<string> ispName_ {};
    shared_ptr<string> locationName_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
