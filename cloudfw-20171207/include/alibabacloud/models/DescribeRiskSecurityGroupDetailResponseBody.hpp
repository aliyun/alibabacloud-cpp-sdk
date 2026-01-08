// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERISKSECURITYGROUPDETAILRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERISKSECURITYGROUPDETAILRESPONSEBODY_HPP_
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
  class DescribeRiskSecurityGroupDetailResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRiskSecurityGroupDetailResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PageNo, pageNo_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(RiskSgDetail, riskSgDetail_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRiskSecurityGroupDetailResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PageNo, pageNo_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(RiskSgDetail, riskSgDetail_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeRiskSecurityGroupDetailResponseBody() = default ;
    DescribeRiskSecurityGroupDetailResponseBody(const DescribeRiskSecurityGroupDetailResponseBody &) = default ;
    DescribeRiskSecurityGroupDetailResponseBody(DescribeRiskSecurityGroupDetailResponseBody &&) = default ;
    DescribeRiskSecurityGroupDetailResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRiskSecurityGroupDetailResponseBody() = default ;
    DescribeRiskSecurityGroupDetailResponseBody& operator=(const DescribeRiskSecurityGroupDetailResponseBody &) = default ;
    DescribeRiskSecurityGroupDetailResponseBody& operator=(DescribeRiskSecurityGroupDetailResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class RiskSgDetail : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const RiskSgDetail& obj) { 
        DARABONBA_PTR_TO_JSON(EcsCount, ecsCount_);
        DARABONBA_PTR_TO_JSON(EcsInfo, ecsInfo_);
        DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
        DARABONBA_PTR_TO_JSON(RegionNo, regionNo_);
        DARABONBA_PTR_TO_JSON(RiskLevel, riskLevel_);
        DARABONBA_PTR_TO_JSON(RuleInfo, ruleInfo_);
        DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
      };
      friend void from_json(const Darabonba::Json& j, RiskSgDetail& obj) { 
        DARABONBA_PTR_FROM_JSON(EcsCount, ecsCount_);
        DARABONBA_PTR_FROM_JSON(EcsInfo, ecsInfo_);
        DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
        DARABONBA_PTR_FROM_JSON(RegionNo, regionNo_);
        DARABONBA_PTR_FROM_JSON(RiskLevel, riskLevel_);
        DARABONBA_PTR_FROM_JSON(RuleInfo, ruleInfo_);
        DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
      };
      RiskSgDetail() = default ;
      RiskSgDetail(const RiskSgDetail &) = default ;
      RiskSgDetail(RiskSgDetail &&) = default ;
      RiskSgDetail(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~RiskSgDetail() = default ;
      RiskSgDetail& operator=(const RiskSgDetail &) = default ;
      RiskSgDetail& operator=(RiskSgDetail &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class RuleInfo : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const RuleInfo& obj) { 
          DARABONBA_PTR_TO_JSON(Description, description_);
          DARABONBA_PTR_TO_JSON(RiskLevel, riskLevel_);
          DARABONBA_PTR_TO_JSON(RuleName, ruleName_);
          DARABONBA_PTR_TO_JSON(RuleStatus, ruleStatus_);
          DARABONBA_PTR_TO_JSON(RuleUuid, ruleUuid_);
          DARABONBA_PTR_TO_JSON(Suggestion, suggestion_);
        };
        friend void from_json(const Darabonba::Json& j, RuleInfo& obj) { 
          DARABONBA_PTR_FROM_JSON(Description, description_);
          DARABONBA_PTR_FROM_JSON(RiskLevel, riskLevel_);
          DARABONBA_PTR_FROM_JSON(RuleName, ruleName_);
          DARABONBA_PTR_FROM_JSON(RuleStatus, ruleStatus_);
          DARABONBA_PTR_FROM_JSON(RuleUuid, ruleUuid_);
          DARABONBA_PTR_FROM_JSON(Suggestion, suggestion_);
        };
        RuleInfo() = default ;
        RuleInfo(const RuleInfo &) = default ;
        RuleInfo(RuleInfo &&) = default ;
        RuleInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~RuleInfo() = default ;
        RuleInfo& operator=(const RuleInfo &) = default ;
        RuleInfo& operator=(RuleInfo &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->description_ == nullptr
        && this->riskLevel_ == nullptr && this->ruleName_ == nullptr && this->ruleStatus_ == nullptr && this->ruleUuid_ == nullptr && this->suggestion_ == nullptr; };
        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline RuleInfo& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // riskLevel Field Functions 
        bool hasRiskLevel() const { return this->riskLevel_ != nullptr;};
        void deleteRiskLevel() { this->riskLevel_ = nullptr;};
        inline string getRiskLevel() const { DARABONBA_PTR_GET_DEFAULT(riskLevel_, "") };
        inline RuleInfo& setRiskLevel(string riskLevel) { DARABONBA_PTR_SET_VALUE(riskLevel_, riskLevel) };


        // ruleName Field Functions 
        bool hasRuleName() const { return this->ruleName_ != nullptr;};
        void deleteRuleName() { this->ruleName_ = nullptr;};
        inline string getRuleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
        inline RuleInfo& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


        // ruleStatus Field Functions 
        bool hasRuleStatus() const { return this->ruleStatus_ != nullptr;};
        void deleteRuleStatus() { this->ruleStatus_ = nullptr;};
        inline string getRuleStatus() const { DARABONBA_PTR_GET_DEFAULT(ruleStatus_, "") };
        inline RuleInfo& setRuleStatus(string ruleStatus) { DARABONBA_PTR_SET_VALUE(ruleStatus_, ruleStatus) };


        // ruleUuid Field Functions 
        bool hasRuleUuid() const { return this->ruleUuid_ != nullptr;};
        void deleteRuleUuid() { this->ruleUuid_ = nullptr;};
        inline string getRuleUuid() const { DARABONBA_PTR_GET_DEFAULT(ruleUuid_, "") };
        inline RuleInfo& setRuleUuid(string ruleUuid) { DARABONBA_PTR_SET_VALUE(ruleUuid_, ruleUuid) };


        // suggestion Field Functions 
        bool hasSuggestion() const { return this->suggestion_ != nullptr;};
        void deleteSuggestion() { this->suggestion_ = nullptr;};
        inline string getSuggestion() const { DARABONBA_PTR_GET_DEFAULT(suggestion_, "") };
        inline RuleInfo& setSuggestion(string suggestion) { DARABONBA_PTR_SET_VALUE(suggestion_, suggestion) };


      protected:
        shared_ptr<string> description_ {};
        shared_ptr<string> riskLevel_ {};
        shared_ptr<string> ruleName_ {};
        shared_ptr<string> ruleStatus_ {};
        shared_ptr<string> ruleUuid_ {};
        shared_ptr<string> suggestion_ {};
      };

      class EcsInfo : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const EcsInfo& obj) { 
          DARABONBA_PTR_TO_JSON(EcsInstanceId, ecsInstanceId_);
          DARABONBA_PTR_TO_JSON(EcsInstanceName, ecsInstanceName_);
          DARABONBA_PTR_TO_JSON(PrivateIp, privateIp_);
          DARABONBA_PTR_TO_JSON(PublicIp, publicIp_);
        };
        friend void from_json(const Darabonba::Json& j, EcsInfo& obj) { 
          DARABONBA_PTR_FROM_JSON(EcsInstanceId, ecsInstanceId_);
          DARABONBA_PTR_FROM_JSON(EcsInstanceName, ecsInstanceName_);
          DARABONBA_PTR_FROM_JSON(PrivateIp, privateIp_);
          DARABONBA_PTR_FROM_JSON(PublicIp, publicIp_);
        };
        EcsInfo() = default ;
        EcsInfo(const EcsInfo &) = default ;
        EcsInfo(EcsInfo &&) = default ;
        EcsInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~EcsInfo() = default ;
        EcsInfo& operator=(const EcsInfo &) = default ;
        EcsInfo& operator=(EcsInfo &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->ecsInstanceId_ == nullptr
        && this->ecsInstanceName_ == nullptr && this->privateIp_ == nullptr && this->publicIp_ == nullptr; };
        // ecsInstanceId Field Functions 
        bool hasEcsInstanceId() const { return this->ecsInstanceId_ != nullptr;};
        void deleteEcsInstanceId() { this->ecsInstanceId_ = nullptr;};
        inline string getEcsInstanceId() const { DARABONBA_PTR_GET_DEFAULT(ecsInstanceId_, "") };
        inline EcsInfo& setEcsInstanceId(string ecsInstanceId) { DARABONBA_PTR_SET_VALUE(ecsInstanceId_, ecsInstanceId) };


        // ecsInstanceName Field Functions 
        bool hasEcsInstanceName() const { return this->ecsInstanceName_ != nullptr;};
        void deleteEcsInstanceName() { this->ecsInstanceName_ = nullptr;};
        inline string getEcsInstanceName() const { DARABONBA_PTR_GET_DEFAULT(ecsInstanceName_, "") };
        inline EcsInfo& setEcsInstanceName(string ecsInstanceName) { DARABONBA_PTR_SET_VALUE(ecsInstanceName_, ecsInstanceName) };


        // privateIp Field Functions 
        bool hasPrivateIp() const { return this->privateIp_ != nullptr;};
        void deletePrivateIp() { this->privateIp_ = nullptr;};
        inline string getPrivateIp() const { DARABONBA_PTR_GET_DEFAULT(privateIp_, "") };
        inline EcsInfo& setPrivateIp(string privateIp) { DARABONBA_PTR_SET_VALUE(privateIp_, privateIp) };


        // publicIp Field Functions 
        bool hasPublicIp() const { return this->publicIp_ != nullptr;};
        void deletePublicIp() { this->publicIp_ = nullptr;};
        inline string getPublicIp() const { DARABONBA_PTR_GET_DEFAULT(publicIp_, "") };
        inline EcsInfo& setPublicIp(string publicIp) { DARABONBA_PTR_SET_VALUE(publicIp_, publicIp) };


      protected:
        shared_ptr<string> ecsInstanceId_ {};
        shared_ptr<string> ecsInstanceName_ {};
        shared_ptr<string> privateIp_ {};
        shared_ptr<string> publicIp_ {};
      };

      virtual bool empty() const override { return this->ecsCount_ == nullptr
        && this->ecsInfo_ == nullptr && this->instanceId_ == nullptr && this->instanceName_ == nullptr && this->regionNo_ == nullptr && this->riskLevel_ == nullptr
        && this->ruleInfo_ == nullptr && this->vpcId_ == nullptr; };
      // ecsCount Field Functions 
      bool hasEcsCount() const { return this->ecsCount_ != nullptr;};
      void deleteEcsCount() { this->ecsCount_ = nullptr;};
      inline int32_t getEcsCount() const { DARABONBA_PTR_GET_DEFAULT(ecsCount_, 0) };
      inline RiskSgDetail& setEcsCount(int32_t ecsCount) { DARABONBA_PTR_SET_VALUE(ecsCount_, ecsCount) };


      // ecsInfo Field Functions 
      bool hasEcsInfo() const { return this->ecsInfo_ != nullptr;};
      void deleteEcsInfo() { this->ecsInfo_ = nullptr;};
      inline const vector<RiskSgDetail::EcsInfo> & getEcsInfo() const { DARABONBA_PTR_GET_CONST(ecsInfo_, vector<RiskSgDetail::EcsInfo>) };
      inline vector<RiskSgDetail::EcsInfo> getEcsInfo() { DARABONBA_PTR_GET(ecsInfo_, vector<RiskSgDetail::EcsInfo>) };
      inline RiskSgDetail& setEcsInfo(const vector<RiskSgDetail::EcsInfo> & ecsInfo) { DARABONBA_PTR_SET_VALUE(ecsInfo_, ecsInfo) };
      inline RiskSgDetail& setEcsInfo(vector<RiskSgDetail::EcsInfo> && ecsInfo) { DARABONBA_PTR_SET_RVALUE(ecsInfo_, ecsInfo) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline RiskSgDetail& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // instanceName Field Functions 
      bool hasInstanceName() const { return this->instanceName_ != nullptr;};
      void deleteInstanceName() { this->instanceName_ = nullptr;};
      inline string getInstanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
      inline RiskSgDetail& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


      // regionNo Field Functions 
      bool hasRegionNo() const { return this->regionNo_ != nullptr;};
      void deleteRegionNo() { this->regionNo_ = nullptr;};
      inline string getRegionNo() const { DARABONBA_PTR_GET_DEFAULT(regionNo_, "") };
      inline RiskSgDetail& setRegionNo(string regionNo) { DARABONBA_PTR_SET_VALUE(regionNo_, regionNo) };


      // riskLevel Field Functions 
      bool hasRiskLevel() const { return this->riskLevel_ != nullptr;};
      void deleteRiskLevel() { this->riskLevel_ = nullptr;};
      inline string getRiskLevel() const { DARABONBA_PTR_GET_DEFAULT(riskLevel_, "") };
      inline RiskSgDetail& setRiskLevel(string riskLevel) { DARABONBA_PTR_SET_VALUE(riskLevel_, riskLevel) };


      // ruleInfo Field Functions 
      bool hasRuleInfo() const { return this->ruleInfo_ != nullptr;};
      void deleteRuleInfo() { this->ruleInfo_ = nullptr;};
      inline const vector<RiskSgDetail::RuleInfo> & getRuleInfo() const { DARABONBA_PTR_GET_CONST(ruleInfo_, vector<RiskSgDetail::RuleInfo>) };
      inline vector<RiskSgDetail::RuleInfo> getRuleInfo() { DARABONBA_PTR_GET(ruleInfo_, vector<RiskSgDetail::RuleInfo>) };
      inline RiskSgDetail& setRuleInfo(const vector<RiskSgDetail::RuleInfo> & ruleInfo) { DARABONBA_PTR_SET_VALUE(ruleInfo_, ruleInfo) };
      inline RiskSgDetail& setRuleInfo(vector<RiskSgDetail::RuleInfo> && ruleInfo) { DARABONBA_PTR_SET_RVALUE(ruleInfo_, ruleInfo) };


      // vpcId Field Functions 
      bool hasVpcId() const { return this->vpcId_ != nullptr;};
      void deleteVpcId() { this->vpcId_ = nullptr;};
      inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
      inline RiskSgDetail& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


    protected:
      shared_ptr<int32_t> ecsCount_ {};
      shared_ptr<vector<RiskSgDetail::EcsInfo>> ecsInfo_ {};
      shared_ptr<string> instanceId_ {};
      shared_ptr<string> instanceName_ {};
      shared_ptr<string> regionNo_ {};
      shared_ptr<string> riskLevel_ {};
      shared_ptr<vector<RiskSgDetail::RuleInfo>> ruleInfo_ {};
      shared_ptr<string> vpcId_ {};
    };

    virtual bool empty() const override { return this->pageNo_ == nullptr
        && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->riskSgDetail_ == nullptr && this->totalCount_ == nullptr; };
    // pageNo Field Functions 
    bool hasPageNo() const { return this->pageNo_ != nullptr;};
    void deletePageNo() { this->pageNo_ = nullptr;};
    inline int32_t getPageNo() const { DARABONBA_PTR_GET_DEFAULT(pageNo_, 0) };
    inline DescribeRiskSecurityGroupDetailResponseBody& setPageNo(int32_t pageNo) { DARABONBA_PTR_SET_VALUE(pageNo_, pageNo) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeRiskSecurityGroupDetailResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeRiskSecurityGroupDetailResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // riskSgDetail Field Functions 
    bool hasRiskSgDetail() const { return this->riskSgDetail_ != nullptr;};
    void deleteRiskSgDetail() { this->riskSgDetail_ = nullptr;};
    inline const vector<DescribeRiskSecurityGroupDetailResponseBody::RiskSgDetail> & getRiskSgDetail() const { DARABONBA_PTR_GET_CONST(riskSgDetail_, vector<DescribeRiskSecurityGroupDetailResponseBody::RiskSgDetail>) };
    inline vector<DescribeRiskSecurityGroupDetailResponseBody::RiskSgDetail> getRiskSgDetail() { DARABONBA_PTR_GET(riskSgDetail_, vector<DescribeRiskSecurityGroupDetailResponseBody::RiskSgDetail>) };
    inline DescribeRiskSecurityGroupDetailResponseBody& setRiskSgDetail(const vector<DescribeRiskSecurityGroupDetailResponseBody::RiskSgDetail> & riskSgDetail) { DARABONBA_PTR_SET_VALUE(riskSgDetail_, riskSgDetail) };
    inline DescribeRiskSecurityGroupDetailResponseBody& setRiskSgDetail(vector<DescribeRiskSecurityGroupDetailResponseBody::RiskSgDetail> && riskSgDetail) { DARABONBA_PTR_SET_RVALUE(riskSgDetail_, riskSgDetail) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeRiskSecurityGroupDetailResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    shared_ptr<int32_t> pageNo_ {};
    shared_ptr<int32_t> pageSize_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<vector<DescribeRiskSecurityGroupDetailResponseBody::RiskSgDetail>> riskSgDetail_ {};
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
