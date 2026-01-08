// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVFWIPSCONFIGLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVFWIPSCONFIGLISTRESPONSEBODY_HPP_
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
  class DescribeVfwIPSConfigListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVfwIPSConfigListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PageNo, pageNo_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_TO_JSON(VfwIpsSwitchConfigList, vfwIpsSwitchConfigList_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVfwIPSConfigListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PageNo, pageNo_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_FROM_JSON(VfwIpsSwitchConfigList, vfwIpsSwitchConfigList_);
    };
    DescribeVfwIPSConfigListResponseBody() = default ;
    DescribeVfwIPSConfigListResponseBody(const DescribeVfwIPSConfigListResponseBody &) = default ;
    DescribeVfwIPSConfigListResponseBody(DescribeVfwIPSConfigListResponseBody &&) = default ;
    DescribeVfwIPSConfigListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVfwIPSConfigListResponseBody() = default ;
    DescribeVfwIPSConfigListResponseBody& operator=(const DescribeVfwIPSConfigListResponseBody &) = default ;
    DescribeVfwIPSConfigListResponseBody& operator=(DescribeVfwIPSConfigListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class VfwIpsSwitchConfigList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const VfwIpsSwitchConfigList& obj) { 
        DARABONBA_PTR_TO_JSON(BasicRules, basicRules_);
        DARABONBA_PTR_TO_JSON(MemberUid, memberUid_);
        DARABONBA_PTR_TO_JSON(PatchRules, patchRules_);
        DARABONBA_PTR_TO_JSON(RuleClass, ruleClass_);
        DARABONBA_PTR_TO_JSON(RunMode, runMode_);
        DARABONBA_PTR_TO_JSON(VpcFirewallId, vpcFirewallId_);
        DARABONBA_PTR_TO_JSON(VpcFirewallIdList, vpcFirewallIdList_);
        DARABONBA_PTR_TO_JSON(VpcFirewallName, vpcFirewallName_);
      };
      friend void from_json(const Darabonba::Json& j, VfwIpsSwitchConfigList& obj) { 
        DARABONBA_PTR_FROM_JSON(BasicRules, basicRules_);
        DARABONBA_PTR_FROM_JSON(MemberUid, memberUid_);
        DARABONBA_PTR_FROM_JSON(PatchRules, patchRules_);
        DARABONBA_PTR_FROM_JSON(RuleClass, ruleClass_);
        DARABONBA_PTR_FROM_JSON(RunMode, runMode_);
        DARABONBA_PTR_FROM_JSON(VpcFirewallId, vpcFirewallId_);
        DARABONBA_PTR_FROM_JSON(VpcFirewallIdList, vpcFirewallIdList_);
        DARABONBA_PTR_FROM_JSON(VpcFirewallName, vpcFirewallName_);
      };
      VfwIpsSwitchConfigList() = default ;
      VfwIpsSwitchConfigList(const VfwIpsSwitchConfigList &) = default ;
      VfwIpsSwitchConfigList(VfwIpsSwitchConfigList &&) = default ;
      VfwIpsSwitchConfigList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~VfwIpsSwitchConfigList() = default ;
      VfwIpsSwitchConfigList& operator=(const VfwIpsSwitchConfigList &) = default ;
      VfwIpsSwitchConfigList& operator=(VfwIpsSwitchConfigList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->basicRules_ == nullptr
        && this->memberUid_ == nullptr && this->patchRules_ == nullptr && this->ruleClass_ == nullptr && this->runMode_ == nullptr && this->vpcFirewallId_ == nullptr
        && this->vpcFirewallIdList_ == nullptr && this->vpcFirewallName_ == nullptr; };
      // basicRules Field Functions 
      bool hasBasicRules() const { return this->basicRules_ != nullptr;};
      void deleteBasicRules() { this->basicRules_ = nullptr;};
      inline int32_t getBasicRules() const { DARABONBA_PTR_GET_DEFAULT(basicRules_, 0) };
      inline VfwIpsSwitchConfigList& setBasicRules(int32_t basicRules) { DARABONBA_PTR_SET_VALUE(basicRules_, basicRules) };


      // memberUid Field Functions 
      bool hasMemberUid() const { return this->memberUid_ != nullptr;};
      void deleteMemberUid() { this->memberUid_ = nullptr;};
      inline string getMemberUid() const { DARABONBA_PTR_GET_DEFAULT(memberUid_, "") };
      inline VfwIpsSwitchConfigList& setMemberUid(string memberUid) { DARABONBA_PTR_SET_VALUE(memberUid_, memberUid) };


      // patchRules Field Functions 
      bool hasPatchRules() const { return this->patchRules_ != nullptr;};
      void deletePatchRules() { this->patchRules_ = nullptr;};
      inline int32_t getPatchRules() const { DARABONBA_PTR_GET_DEFAULT(patchRules_, 0) };
      inline VfwIpsSwitchConfigList& setPatchRules(int32_t patchRules) { DARABONBA_PTR_SET_VALUE(patchRules_, patchRules) };


      // ruleClass Field Functions 
      bool hasRuleClass() const { return this->ruleClass_ != nullptr;};
      void deleteRuleClass() { this->ruleClass_ = nullptr;};
      inline int32_t getRuleClass() const { DARABONBA_PTR_GET_DEFAULT(ruleClass_, 0) };
      inline VfwIpsSwitchConfigList& setRuleClass(int32_t ruleClass) { DARABONBA_PTR_SET_VALUE(ruleClass_, ruleClass) };


      // runMode Field Functions 
      bool hasRunMode() const { return this->runMode_ != nullptr;};
      void deleteRunMode() { this->runMode_ = nullptr;};
      inline int32_t getRunMode() const { DARABONBA_PTR_GET_DEFAULT(runMode_, 0) };
      inline VfwIpsSwitchConfigList& setRunMode(int32_t runMode) { DARABONBA_PTR_SET_VALUE(runMode_, runMode) };


      // vpcFirewallId Field Functions 
      bool hasVpcFirewallId() const { return this->vpcFirewallId_ != nullptr;};
      void deleteVpcFirewallId() { this->vpcFirewallId_ = nullptr;};
      inline string getVpcFirewallId() const { DARABONBA_PTR_GET_DEFAULT(vpcFirewallId_, "") };
      inline VfwIpsSwitchConfigList& setVpcFirewallId(string vpcFirewallId) { DARABONBA_PTR_SET_VALUE(vpcFirewallId_, vpcFirewallId) };


      // vpcFirewallIdList Field Functions 
      bool hasVpcFirewallIdList() const { return this->vpcFirewallIdList_ != nullptr;};
      void deleteVpcFirewallIdList() { this->vpcFirewallIdList_ = nullptr;};
      inline const vector<string> & getVpcFirewallIdList() const { DARABONBA_PTR_GET_CONST(vpcFirewallIdList_, vector<string>) };
      inline vector<string> getVpcFirewallIdList() { DARABONBA_PTR_GET(vpcFirewallIdList_, vector<string>) };
      inline VfwIpsSwitchConfigList& setVpcFirewallIdList(const vector<string> & vpcFirewallIdList) { DARABONBA_PTR_SET_VALUE(vpcFirewallIdList_, vpcFirewallIdList) };
      inline VfwIpsSwitchConfigList& setVpcFirewallIdList(vector<string> && vpcFirewallIdList) { DARABONBA_PTR_SET_RVALUE(vpcFirewallIdList_, vpcFirewallIdList) };


      // vpcFirewallName Field Functions 
      bool hasVpcFirewallName() const { return this->vpcFirewallName_ != nullptr;};
      void deleteVpcFirewallName() { this->vpcFirewallName_ = nullptr;};
      inline string getVpcFirewallName() const { DARABONBA_PTR_GET_DEFAULT(vpcFirewallName_, "") };
      inline VfwIpsSwitchConfigList& setVpcFirewallName(string vpcFirewallName) { DARABONBA_PTR_SET_VALUE(vpcFirewallName_, vpcFirewallName) };


    protected:
      shared_ptr<int32_t> basicRules_ {};
      shared_ptr<string> memberUid_ {};
      shared_ptr<int32_t> patchRules_ {};
      shared_ptr<int32_t> ruleClass_ {};
      shared_ptr<int32_t> runMode_ {};
      shared_ptr<string> vpcFirewallId_ {};
      shared_ptr<vector<string>> vpcFirewallIdList_ {};
      shared_ptr<string> vpcFirewallName_ {};
    };

    virtual bool empty() const override { return this->pageNo_ == nullptr
        && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr && this->vfwIpsSwitchConfigList_ == nullptr; };
    // pageNo Field Functions 
    bool hasPageNo() const { return this->pageNo_ != nullptr;};
    void deletePageNo() { this->pageNo_ = nullptr;};
    inline int32_t getPageNo() const { DARABONBA_PTR_GET_DEFAULT(pageNo_, 0) };
    inline DescribeVfwIPSConfigListResponseBody& setPageNo(int32_t pageNo) { DARABONBA_PTR_SET_VALUE(pageNo_, pageNo) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeVfwIPSConfigListResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeVfwIPSConfigListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeVfwIPSConfigListResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    // vfwIpsSwitchConfigList Field Functions 
    bool hasVfwIpsSwitchConfigList() const { return this->vfwIpsSwitchConfigList_ != nullptr;};
    void deleteVfwIpsSwitchConfigList() { this->vfwIpsSwitchConfigList_ = nullptr;};
    inline const vector<DescribeVfwIPSConfigListResponseBody::VfwIpsSwitchConfigList> & getVfwIpsSwitchConfigList() const { DARABONBA_PTR_GET_CONST(vfwIpsSwitchConfigList_, vector<DescribeVfwIPSConfigListResponseBody::VfwIpsSwitchConfigList>) };
    inline vector<DescribeVfwIPSConfigListResponseBody::VfwIpsSwitchConfigList> getVfwIpsSwitchConfigList() { DARABONBA_PTR_GET(vfwIpsSwitchConfigList_, vector<DescribeVfwIPSConfigListResponseBody::VfwIpsSwitchConfigList>) };
    inline DescribeVfwIPSConfigListResponseBody& setVfwIpsSwitchConfigList(const vector<DescribeVfwIPSConfigListResponseBody::VfwIpsSwitchConfigList> & vfwIpsSwitchConfigList) { DARABONBA_PTR_SET_VALUE(vfwIpsSwitchConfigList_, vfwIpsSwitchConfigList) };
    inline DescribeVfwIPSConfigListResponseBody& setVfwIpsSwitchConfigList(vector<DescribeVfwIPSConfigListResponseBody::VfwIpsSwitchConfigList> && vfwIpsSwitchConfigList) { DARABONBA_PTR_SET_RVALUE(vfwIpsSwitchConfigList_, vfwIpsSwitchConfigList) };


  protected:
    shared_ptr<int32_t> pageNo_ {};
    shared_ptr<int32_t> pageSize_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<int32_t> totalCount_ {};
    shared_ptr<vector<DescribeVfwIPSConfigListResponseBody::VfwIpsSwitchConfigList>> vfwIpsSwitchConfigList_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
