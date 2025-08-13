// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERULEPAGELISTRESPONSEBODYRESULTOBJECTCONSOLEAUDIT_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERULEPAGELISTRESPONSEBODYRESULTOBJECTCONSOLEAUDIT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Xtee20210910
{
namespace Models
{
  class DescribeRulePageListResponseBodyResultObjectConsoleAudit : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRulePageListResponseBodyResultObjectConsoleAudit& obj) { 
      DARABONBA_PTR_TO_JSON(applyUserId, applyUserId_);
      DARABONBA_PTR_TO_JSON(applyUserName, applyUserName_);
      DARABONBA_PTR_TO_JSON(auditMsg, auditMsg_);
      DARABONBA_PTR_TO_JSON(auditRealUserId, auditRealUserId_);
      DARABONBA_PTR_TO_JSON(auditRealUserName, auditRealUserName_);
      DARABONBA_PTR_TO_JSON(auditRemark, auditRemark_);
      DARABONBA_PTR_TO_JSON(auditStatus, auditStatus_);
      DARABONBA_PTR_TO_JSON(auditTime, auditTime_);
      DARABONBA_PTR_TO_JSON(auditUserId, auditUserId_);
      DARABONBA_PTR_TO_JSON(auditUserName, auditUserName_);
      DARABONBA_PTR_TO_JSON(gmtCreate, gmtCreate_);
      DARABONBA_PTR_TO_JSON(id, id_);
      DARABONBA_PTR_TO_JSON(relationExt, relationExt_);
      DARABONBA_PTR_TO_JSON(relationId, relationId_);
      DARABONBA_PTR_TO_JSON(relationName, relationName_);
      DARABONBA_PTR_TO_JSON(relationType, relationType_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRulePageListResponseBodyResultObjectConsoleAudit& obj) { 
      DARABONBA_PTR_FROM_JSON(applyUserId, applyUserId_);
      DARABONBA_PTR_FROM_JSON(applyUserName, applyUserName_);
      DARABONBA_PTR_FROM_JSON(auditMsg, auditMsg_);
      DARABONBA_PTR_FROM_JSON(auditRealUserId, auditRealUserId_);
      DARABONBA_PTR_FROM_JSON(auditRealUserName, auditRealUserName_);
      DARABONBA_PTR_FROM_JSON(auditRemark, auditRemark_);
      DARABONBA_PTR_FROM_JSON(auditStatus, auditStatus_);
      DARABONBA_PTR_FROM_JSON(auditTime, auditTime_);
      DARABONBA_PTR_FROM_JSON(auditUserId, auditUserId_);
      DARABONBA_PTR_FROM_JSON(auditUserName, auditUserName_);
      DARABONBA_PTR_FROM_JSON(gmtCreate, gmtCreate_);
      DARABONBA_PTR_FROM_JSON(id, id_);
      DARABONBA_PTR_FROM_JSON(relationExt, relationExt_);
      DARABONBA_PTR_FROM_JSON(relationId, relationId_);
      DARABONBA_PTR_FROM_JSON(relationName, relationName_);
      DARABONBA_PTR_FROM_JSON(relationType, relationType_);
    };
    DescribeRulePageListResponseBodyResultObjectConsoleAudit() = default ;
    DescribeRulePageListResponseBodyResultObjectConsoleAudit(const DescribeRulePageListResponseBodyResultObjectConsoleAudit &) = default ;
    DescribeRulePageListResponseBodyResultObjectConsoleAudit(DescribeRulePageListResponseBodyResultObjectConsoleAudit &&) = default ;
    DescribeRulePageListResponseBodyResultObjectConsoleAudit(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRulePageListResponseBodyResultObjectConsoleAudit() = default ;
    DescribeRulePageListResponseBodyResultObjectConsoleAudit& operator=(const DescribeRulePageListResponseBodyResultObjectConsoleAudit &) = default ;
    DescribeRulePageListResponseBodyResultObjectConsoleAudit& operator=(DescribeRulePageListResponseBodyResultObjectConsoleAudit &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->applyUserId_ != nullptr
        && this->applyUserName_ != nullptr && this->auditMsg_ != nullptr && this->auditRealUserId_ != nullptr && this->auditRealUserName_ != nullptr && this->auditRemark_ != nullptr
        && this->auditStatus_ != nullptr && this->auditTime_ != nullptr && this->auditUserId_ != nullptr && this->auditUserName_ != nullptr && this->gmtCreate_ != nullptr
        && this->id_ != nullptr && this->relationExt_ != nullptr && this->relationId_ != nullptr && this->relationName_ != nullptr && this->relationType_ != nullptr; };
    // applyUserId Field Functions 
    bool hasApplyUserId() const { return this->applyUserId_ != nullptr;};
    void deleteApplyUserId() { this->applyUserId_ = nullptr;};
    inline string applyUserId() const { DARABONBA_PTR_GET_DEFAULT(applyUserId_, "") };
    inline DescribeRulePageListResponseBodyResultObjectConsoleAudit& setApplyUserId(string applyUserId) { DARABONBA_PTR_SET_VALUE(applyUserId_, applyUserId) };


    // applyUserName Field Functions 
    bool hasApplyUserName() const { return this->applyUserName_ != nullptr;};
    void deleteApplyUserName() { this->applyUserName_ = nullptr;};
    inline string applyUserName() const { DARABONBA_PTR_GET_DEFAULT(applyUserName_, "") };
    inline DescribeRulePageListResponseBodyResultObjectConsoleAudit& setApplyUserName(string applyUserName) { DARABONBA_PTR_SET_VALUE(applyUserName_, applyUserName) };


    // auditMsg Field Functions 
    bool hasAuditMsg() const { return this->auditMsg_ != nullptr;};
    void deleteAuditMsg() { this->auditMsg_ = nullptr;};
    inline string auditMsg() const { DARABONBA_PTR_GET_DEFAULT(auditMsg_, "") };
    inline DescribeRulePageListResponseBodyResultObjectConsoleAudit& setAuditMsg(string auditMsg) { DARABONBA_PTR_SET_VALUE(auditMsg_, auditMsg) };


    // auditRealUserId Field Functions 
    bool hasAuditRealUserId() const { return this->auditRealUserId_ != nullptr;};
    void deleteAuditRealUserId() { this->auditRealUserId_ = nullptr;};
    inline string auditRealUserId() const { DARABONBA_PTR_GET_DEFAULT(auditRealUserId_, "") };
    inline DescribeRulePageListResponseBodyResultObjectConsoleAudit& setAuditRealUserId(string auditRealUserId) { DARABONBA_PTR_SET_VALUE(auditRealUserId_, auditRealUserId) };


    // auditRealUserName Field Functions 
    bool hasAuditRealUserName() const { return this->auditRealUserName_ != nullptr;};
    void deleteAuditRealUserName() { this->auditRealUserName_ = nullptr;};
    inline string auditRealUserName() const { DARABONBA_PTR_GET_DEFAULT(auditRealUserName_, "") };
    inline DescribeRulePageListResponseBodyResultObjectConsoleAudit& setAuditRealUserName(string auditRealUserName) { DARABONBA_PTR_SET_VALUE(auditRealUserName_, auditRealUserName) };


    // auditRemark Field Functions 
    bool hasAuditRemark() const { return this->auditRemark_ != nullptr;};
    void deleteAuditRemark() { this->auditRemark_ = nullptr;};
    inline string auditRemark() const { DARABONBA_PTR_GET_DEFAULT(auditRemark_, "") };
    inline DescribeRulePageListResponseBodyResultObjectConsoleAudit& setAuditRemark(string auditRemark) { DARABONBA_PTR_SET_VALUE(auditRemark_, auditRemark) };


    // auditStatus Field Functions 
    bool hasAuditStatus() const { return this->auditStatus_ != nullptr;};
    void deleteAuditStatus() { this->auditStatus_ = nullptr;};
    inline string auditStatus() const { DARABONBA_PTR_GET_DEFAULT(auditStatus_, "") };
    inline DescribeRulePageListResponseBodyResultObjectConsoleAudit& setAuditStatus(string auditStatus) { DARABONBA_PTR_SET_VALUE(auditStatus_, auditStatus) };


    // auditTime Field Functions 
    bool hasAuditTime() const { return this->auditTime_ != nullptr;};
    void deleteAuditTime() { this->auditTime_ = nullptr;};
    inline int64_t auditTime() const { DARABONBA_PTR_GET_DEFAULT(auditTime_, 0L) };
    inline DescribeRulePageListResponseBodyResultObjectConsoleAudit& setAuditTime(int64_t auditTime) { DARABONBA_PTR_SET_VALUE(auditTime_, auditTime) };


    // auditUserId Field Functions 
    bool hasAuditUserId() const { return this->auditUserId_ != nullptr;};
    void deleteAuditUserId() { this->auditUserId_ = nullptr;};
    inline string auditUserId() const { DARABONBA_PTR_GET_DEFAULT(auditUserId_, "") };
    inline DescribeRulePageListResponseBodyResultObjectConsoleAudit& setAuditUserId(string auditUserId) { DARABONBA_PTR_SET_VALUE(auditUserId_, auditUserId) };


    // auditUserName Field Functions 
    bool hasAuditUserName() const { return this->auditUserName_ != nullptr;};
    void deleteAuditUserName() { this->auditUserName_ = nullptr;};
    inline string auditUserName() const { DARABONBA_PTR_GET_DEFAULT(auditUserName_, "") };
    inline DescribeRulePageListResponseBodyResultObjectConsoleAudit& setAuditUserName(string auditUserName) { DARABONBA_PTR_SET_VALUE(auditUserName_, auditUserName) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline int64_t gmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, 0L) };
    inline DescribeRulePageListResponseBodyResultObjectConsoleAudit& setGmtCreate(int64_t gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline DescribeRulePageListResponseBodyResultObjectConsoleAudit& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // relationExt Field Functions 
    bool hasRelationExt() const { return this->relationExt_ != nullptr;};
    void deleteRelationExt() { this->relationExt_ = nullptr;};
    inline string relationExt() const { DARABONBA_PTR_GET_DEFAULT(relationExt_, "") };
    inline DescribeRulePageListResponseBodyResultObjectConsoleAudit& setRelationExt(string relationExt) { DARABONBA_PTR_SET_VALUE(relationExt_, relationExt) };


    // relationId Field Functions 
    bool hasRelationId() const { return this->relationId_ != nullptr;};
    void deleteRelationId() { this->relationId_ = nullptr;};
    inline int64_t relationId() const { DARABONBA_PTR_GET_DEFAULT(relationId_, 0L) };
    inline DescribeRulePageListResponseBodyResultObjectConsoleAudit& setRelationId(int64_t relationId) { DARABONBA_PTR_SET_VALUE(relationId_, relationId) };


    // relationName Field Functions 
    bool hasRelationName() const { return this->relationName_ != nullptr;};
    void deleteRelationName() { this->relationName_ = nullptr;};
    inline string relationName() const { DARABONBA_PTR_GET_DEFAULT(relationName_, "") };
    inline DescribeRulePageListResponseBodyResultObjectConsoleAudit& setRelationName(string relationName) { DARABONBA_PTR_SET_VALUE(relationName_, relationName) };


    // relationType Field Functions 
    bool hasRelationType() const { return this->relationType_ != nullptr;};
    void deleteRelationType() { this->relationType_ = nullptr;};
    inline string relationType() const { DARABONBA_PTR_GET_DEFAULT(relationType_, "") };
    inline DescribeRulePageListResponseBodyResultObjectConsoleAudit& setRelationType(string relationType) { DARABONBA_PTR_SET_VALUE(relationType_, relationType) };


  protected:
    // UID of the user who passed the audit
    std::shared_ptr<string> applyUserId_ = nullptr;
    // Name of the user who passed the audit
    std::shared_ptr<string> applyUserName_ = nullptr;
    // Approval comments
    std::shared_ptr<string> auditMsg_ = nullptr;
    // UID of the final auditor
    std::shared_ptr<string> auditRealUserId_ = nullptr;
    // Name of the final auditor
    std::shared_ptr<string> auditRealUserName_ = nullptr;
    // Remarks by the approver.
    std::shared_ptr<string> auditRemark_ = nullptr;
    // Application audit status
    std::shared_ptr<string> auditStatus_ = nullptr;
    // Approval time
    std::shared_ptr<int64_t> auditTime_ = nullptr;
    // UID of the auditor
    std::shared_ptr<string> auditUserId_ = nullptr;
    // Name of the auditor
    std::shared_ptr<string> auditUserName_ = nullptr;
    // Creation time.
    std::shared_ptr<int64_t> gmtCreate_ = nullptr;
    // Primary key ID
    std::shared_ptr<int64_t> id_ = nullptr;
    // Information of other related parties (in JSON format)
    std::shared_ptr<string> relationExt_ = nullptr;
    // ID of the related transaction for the approval
    std::shared_ptr<int64_t> relationId_ = nullptr;
    // Name of the related transaction for the approval (can be null)
    std::shared_ptr<string> relationName_ = nullptr;
    // Type of the approval (e.g., `rule` represents the approval of a rule)
    std::shared_ptr<string> relationType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Xtee20210910
#endif
