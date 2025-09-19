// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSASCONTAINERWEBDEFENSERULERESPONSEBODYCONTAINERWEBDEFENSERULELIST_HPP_
#define ALIBABACLOUD_MODELS_LISTSASCONTAINERWEBDEFENSERULERESPONSEBODYCONTAINERWEBDEFENSERULELIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListSasContainerWebDefenseRuleResponseBodyContainerWebDefenseRuleListPathConfDTOList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ListSasContainerWebDefenseRuleResponseBodyContainerWebDefenseRuleList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSasContainerWebDefenseRuleResponseBodyContainerWebDefenseRuleList& obj) { 
      DARABONBA_PTR_TO_JSON(AliUid, aliUid_);
      DARABONBA_PTR_TO_JSON(ApptotalCount, apptotalCount_);
      DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(PathConfDTOList, pathConfDTOList_);
      DARABONBA_PTR_TO_JSON(RuleName, ruleName_);
      DARABONBA_PTR_TO_JSON(RuleStatus, ruleStatus_);
    };
    friend void from_json(const Darabonba::Json& j, ListSasContainerWebDefenseRuleResponseBodyContainerWebDefenseRuleList& obj) { 
      DARABONBA_PTR_FROM_JSON(AliUid, aliUid_);
      DARABONBA_PTR_FROM_JSON(ApptotalCount, apptotalCount_);
      DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(PathConfDTOList, pathConfDTOList_);
      DARABONBA_PTR_FROM_JSON(RuleName, ruleName_);
      DARABONBA_PTR_FROM_JSON(RuleStatus, ruleStatus_);
    };
    ListSasContainerWebDefenseRuleResponseBodyContainerWebDefenseRuleList() = default ;
    ListSasContainerWebDefenseRuleResponseBodyContainerWebDefenseRuleList(const ListSasContainerWebDefenseRuleResponseBodyContainerWebDefenseRuleList &) = default ;
    ListSasContainerWebDefenseRuleResponseBodyContainerWebDefenseRuleList(ListSasContainerWebDefenseRuleResponseBodyContainerWebDefenseRuleList &&) = default ;
    ListSasContainerWebDefenseRuleResponseBodyContainerWebDefenseRuleList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSasContainerWebDefenseRuleResponseBodyContainerWebDefenseRuleList() = default ;
    ListSasContainerWebDefenseRuleResponseBodyContainerWebDefenseRuleList& operator=(const ListSasContainerWebDefenseRuleResponseBodyContainerWebDefenseRuleList &) = default ;
    ListSasContainerWebDefenseRuleResponseBodyContainerWebDefenseRuleList& operator=(ListSasContainerWebDefenseRuleResponseBodyContainerWebDefenseRuleList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->aliUid_ != nullptr
        && this->apptotalCount_ != nullptr && this->gmtCreate_ != nullptr && this->gmtModified_ != nullptr && this->id_ != nullptr && this->pathConfDTOList_ != nullptr
        && this->ruleName_ != nullptr && this->ruleStatus_ != nullptr; };
    // aliUid Field Functions 
    bool hasAliUid() const { return this->aliUid_ != nullptr;};
    void deleteAliUid() { this->aliUid_ = nullptr;};
    inline int64_t aliUid() const { DARABONBA_PTR_GET_DEFAULT(aliUid_, 0L) };
    inline ListSasContainerWebDefenseRuleResponseBodyContainerWebDefenseRuleList& setAliUid(int64_t aliUid) { DARABONBA_PTR_SET_VALUE(aliUid_, aliUid) };


    // apptotalCount Field Functions 
    bool hasApptotalCount() const { return this->apptotalCount_ != nullptr;};
    void deleteApptotalCount() { this->apptotalCount_ = nullptr;};
    inline int32_t apptotalCount() const { DARABONBA_PTR_GET_DEFAULT(apptotalCount_, 0) };
    inline ListSasContainerWebDefenseRuleResponseBodyContainerWebDefenseRuleList& setApptotalCount(int32_t apptotalCount) { DARABONBA_PTR_SET_VALUE(apptotalCount_, apptotalCount) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline int64_t gmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, 0L) };
    inline ListSasContainerWebDefenseRuleResponseBodyContainerWebDefenseRuleList& setGmtCreate(int64_t gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline int64_t gmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, 0L) };
    inline ListSasContainerWebDefenseRuleResponseBodyContainerWebDefenseRuleList& setGmtModified(int64_t gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline ListSasContainerWebDefenseRuleResponseBodyContainerWebDefenseRuleList& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // pathConfDTOList Field Functions 
    bool hasPathConfDTOList() const { return this->pathConfDTOList_ != nullptr;};
    void deletePathConfDTOList() { this->pathConfDTOList_ = nullptr;};
    inline const vector<Models::ListSasContainerWebDefenseRuleResponseBodyContainerWebDefenseRuleListPathConfDTOList> & pathConfDTOList() const { DARABONBA_PTR_GET_CONST(pathConfDTOList_, vector<Models::ListSasContainerWebDefenseRuleResponseBodyContainerWebDefenseRuleListPathConfDTOList>) };
    inline vector<Models::ListSasContainerWebDefenseRuleResponseBodyContainerWebDefenseRuleListPathConfDTOList> pathConfDTOList() { DARABONBA_PTR_GET(pathConfDTOList_, vector<Models::ListSasContainerWebDefenseRuleResponseBodyContainerWebDefenseRuleListPathConfDTOList>) };
    inline ListSasContainerWebDefenseRuleResponseBodyContainerWebDefenseRuleList& setPathConfDTOList(const vector<Models::ListSasContainerWebDefenseRuleResponseBodyContainerWebDefenseRuleListPathConfDTOList> & pathConfDTOList) { DARABONBA_PTR_SET_VALUE(pathConfDTOList_, pathConfDTOList) };
    inline ListSasContainerWebDefenseRuleResponseBodyContainerWebDefenseRuleList& setPathConfDTOList(vector<Models::ListSasContainerWebDefenseRuleResponseBodyContainerWebDefenseRuleListPathConfDTOList> && pathConfDTOList) { DARABONBA_PTR_SET_RVALUE(pathConfDTOList_, pathConfDTOList) };


    // ruleName Field Functions 
    bool hasRuleName() const { return this->ruleName_ != nullptr;};
    void deleteRuleName() { this->ruleName_ = nullptr;};
    inline string ruleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
    inline ListSasContainerWebDefenseRuleResponseBodyContainerWebDefenseRuleList& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


    // ruleStatus Field Functions 
    bool hasRuleStatus() const { return this->ruleStatus_ != nullptr;};
    void deleteRuleStatus() { this->ruleStatus_ = nullptr;};
    inline int32_t ruleStatus() const { DARABONBA_PTR_GET_DEFAULT(ruleStatus_, 0) };
    inline ListSasContainerWebDefenseRuleResponseBodyContainerWebDefenseRuleList& setRuleStatus(int32_t ruleStatus) { DARABONBA_PTR_SET_VALUE(ruleStatus_, ruleStatus) };


  protected:
    // The user ID.
    std::shared_ptr<int64_t> aliUid_ = nullptr;
    // The number of the applications.
    std::shared_ptr<int32_t> apptotalCount_ = nullptr;
    // The creation time. Unit: milliseconds.
    std::shared_ptr<int64_t> gmtCreate_ = nullptr;
    // The timestamp when the alert event was last modified. Unit: milliseconds.
    std::shared_ptr<int64_t> gmtModified_ = nullptr;
    // The ID of the rule.
    std::shared_ptr<int64_t> id_ = nullptr;
    // The paths that are protected.
    std::shared_ptr<vector<Models::ListSasContainerWebDefenseRuleResponseBodyContainerWebDefenseRuleListPathConfDTOList>> pathConfDTOList_ = nullptr;
    // The name of the rule.
    std::shared_ptr<string> ruleName_ = nullptr;
    // The status of the rule. Valid values:
    // 
    // *   **1**: enabled
    // *   **0**: disabled
    std::shared_ptr<int32_t> ruleStatus_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
