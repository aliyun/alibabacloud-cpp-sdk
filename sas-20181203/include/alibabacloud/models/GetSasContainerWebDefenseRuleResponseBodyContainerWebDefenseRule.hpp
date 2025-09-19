// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSASCONTAINERWEBDEFENSERULERESPONSEBODYCONTAINERWEBDEFENSERULE_HPP_
#define ALIBABACLOUD_MODELS_GETSASCONTAINERWEBDEFENSERULERESPONSEBODYCONTAINERWEBDEFENSERULE_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetSasContainerWebDefenseRuleResponseBodyContainerWebDefenseRulePathConfDTOList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class GetSasContainerWebDefenseRuleResponseBodyContainerWebDefenseRule : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSasContainerWebDefenseRuleResponseBodyContainerWebDefenseRule& obj) { 
      DARABONBA_PTR_TO_JSON(AliUid, aliUid_);
      DARABONBA_PTR_TO_JSON(AppTotalCount, appTotalCount_);
      DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(PathConfDTOList, pathConfDTOList_);
      DARABONBA_PTR_TO_JSON(RuleName, ruleName_);
      DARABONBA_PTR_TO_JSON(RuleStatus, ruleStatus_);
    };
    friend void from_json(const Darabonba::Json& j, GetSasContainerWebDefenseRuleResponseBodyContainerWebDefenseRule& obj) { 
      DARABONBA_PTR_FROM_JSON(AliUid, aliUid_);
      DARABONBA_PTR_FROM_JSON(AppTotalCount, appTotalCount_);
      DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(PathConfDTOList, pathConfDTOList_);
      DARABONBA_PTR_FROM_JSON(RuleName, ruleName_);
      DARABONBA_PTR_FROM_JSON(RuleStatus, ruleStatus_);
    };
    GetSasContainerWebDefenseRuleResponseBodyContainerWebDefenseRule() = default ;
    GetSasContainerWebDefenseRuleResponseBodyContainerWebDefenseRule(const GetSasContainerWebDefenseRuleResponseBodyContainerWebDefenseRule &) = default ;
    GetSasContainerWebDefenseRuleResponseBodyContainerWebDefenseRule(GetSasContainerWebDefenseRuleResponseBodyContainerWebDefenseRule &&) = default ;
    GetSasContainerWebDefenseRuleResponseBodyContainerWebDefenseRule(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSasContainerWebDefenseRuleResponseBodyContainerWebDefenseRule() = default ;
    GetSasContainerWebDefenseRuleResponseBodyContainerWebDefenseRule& operator=(const GetSasContainerWebDefenseRuleResponseBodyContainerWebDefenseRule &) = default ;
    GetSasContainerWebDefenseRuleResponseBodyContainerWebDefenseRule& operator=(GetSasContainerWebDefenseRuleResponseBodyContainerWebDefenseRule &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->aliUid_ != nullptr
        && this->appTotalCount_ != nullptr && this->gmtCreate_ != nullptr && this->gmtModified_ != nullptr && this->id_ != nullptr && this->pathConfDTOList_ != nullptr
        && this->ruleName_ != nullptr && this->ruleStatus_ != nullptr; };
    // aliUid Field Functions 
    bool hasAliUid() const { return this->aliUid_ != nullptr;};
    void deleteAliUid() { this->aliUid_ = nullptr;};
    inline int64_t aliUid() const { DARABONBA_PTR_GET_DEFAULT(aliUid_, 0L) };
    inline GetSasContainerWebDefenseRuleResponseBodyContainerWebDefenseRule& setAliUid(int64_t aliUid) { DARABONBA_PTR_SET_VALUE(aliUid_, aliUid) };


    // appTotalCount Field Functions 
    bool hasAppTotalCount() const { return this->appTotalCount_ != nullptr;};
    void deleteAppTotalCount() { this->appTotalCount_ = nullptr;};
    inline int32_t appTotalCount() const { DARABONBA_PTR_GET_DEFAULT(appTotalCount_, 0) };
    inline GetSasContainerWebDefenseRuleResponseBodyContainerWebDefenseRule& setAppTotalCount(int32_t appTotalCount) { DARABONBA_PTR_SET_VALUE(appTotalCount_, appTotalCount) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline int64_t gmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, 0L) };
    inline GetSasContainerWebDefenseRuleResponseBodyContainerWebDefenseRule& setGmtCreate(int64_t gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline int64_t gmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, 0L) };
    inline GetSasContainerWebDefenseRuleResponseBodyContainerWebDefenseRule& setGmtModified(int64_t gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline GetSasContainerWebDefenseRuleResponseBodyContainerWebDefenseRule& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // pathConfDTOList Field Functions 
    bool hasPathConfDTOList() const { return this->pathConfDTOList_ != nullptr;};
    void deletePathConfDTOList() { this->pathConfDTOList_ = nullptr;};
    inline const vector<Models::GetSasContainerWebDefenseRuleResponseBodyContainerWebDefenseRulePathConfDTOList> & pathConfDTOList() const { DARABONBA_PTR_GET_CONST(pathConfDTOList_, vector<Models::GetSasContainerWebDefenseRuleResponseBodyContainerWebDefenseRulePathConfDTOList>) };
    inline vector<Models::GetSasContainerWebDefenseRuleResponseBodyContainerWebDefenseRulePathConfDTOList> pathConfDTOList() { DARABONBA_PTR_GET(pathConfDTOList_, vector<Models::GetSasContainerWebDefenseRuleResponseBodyContainerWebDefenseRulePathConfDTOList>) };
    inline GetSasContainerWebDefenseRuleResponseBodyContainerWebDefenseRule& setPathConfDTOList(const vector<Models::GetSasContainerWebDefenseRuleResponseBodyContainerWebDefenseRulePathConfDTOList> & pathConfDTOList) { DARABONBA_PTR_SET_VALUE(pathConfDTOList_, pathConfDTOList) };
    inline GetSasContainerWebDefenseRuleResponseBodyContainerWebDefenseRule& setPathConfDTOList(vector<Models::GetSasContainerWebDefenseRuleResponseBodyContainerWebDefenseRulePathConfDTOList> && pathConfDTOList) { DARABONBA_PTR_SET_RVALUE(pathConfDTOList_, pathConfDTOList) };


    // ruleName Field Functions 
    bool hasRuleName() const { return this->ruleName_ != nullptr;};
    void deleteRuleName() { this->ruleName_ = nullptr;};
    inline string ruleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
    inline GetSasContainerWebDefenseRuleResponseBodyContainerWebDefenseRule& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


    // ruleStatus Field Functions 
    bool hasRuleStatus() const { return this->ruleStatus_ != nullptr;};
    void deleteRuleStatus() { this->ruleStatus_ = nullptr;};
    inline int32_t ruleStatus() const { DARABONBA_PTR_GET_DEFAULT(ruleStatus_, 0) };
    inline GetSasContainerWebDefenseRuleResponseBodyContainerWebDefenseRule& setRuleStatus(int32_t ruleStatus) { DARABONBA_PTR_SET_VALUE(ruleStatus_, ruleStatus) };


  protected:
    // User ID.
    std::shared_ptr<int64_t> aliUid_ = nullptr;
    // Total number of applications.
    std::shared_ptr<int32_t> appTotalCount_ = nullptr;
    // Timestamp when the rule was created. Unit: milliseconds.
    std::shared_ptr<int64_t> gmtCreate_ = nullptr;
    // Timestamp when the rule was last modified. Unit: milliseconds.
    std::shared_ptr<int64_t> gmtModified_ = nullptr;
    // Rule ID.
    std::shared_ptr<int64_t> id_ = nullptr;
    // List of configured file paths.
    std::shared_ptr<vector<Models::GetSasContainerWebDefenseRuleResponseBodyContainerWebDefenseRulePathConfDTOList>> pathConfDTOList_ = nullptr;
    // Rule name.
    std::shared_ptr<string> ruleName_ = nullptr;
    // Rule status. The value descriptions are as follows:
    // 
    // - **1**: Enabled
    // - **0**: Disabled
    std::shared_ptr<int32_t> ruleStatus_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
