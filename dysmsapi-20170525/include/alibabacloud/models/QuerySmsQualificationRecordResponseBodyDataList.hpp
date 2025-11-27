// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYSMSQUALIFICATIONRECORDRESPONSEBODYDATALIST_HPP_
#define ALIBABACLOUD_MODELS_QUERYSMSQUALIFICATIONRECORDRESPONSEBODYDATALIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dysmsapi20170525
{
namespace Models
{
  class QuerySmsQualificationRecordResponseBodyDataList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QuerySmsQualificationRecordResponseBodyDataList& obj) { 
      DARABONBA_PTR_TO_JSON(AuditRemark, auditRemark_);
      DARABONBA_PTR_TO_JSON(AuditTime, auditTime_);
      DARABONBA_PTR_TO_JSON(CompanyName, companyName_);
      DARABONBA_PTR_TO_JSON(CreateDate, createDate_);
      DARABONBA_PTR_TO_JSON(GroupId, groupId_);
      DARABONBA_PTR_TO_JSON(LegalPersonName, legalPersonName_);
      DARABONBA_PTR_TO_JSON(QualificationGroupName, qualificationGroupName_);
      DARABONBA_PTR_TO_JSON(StateName, stateName_);
      DARABONBA_PTR_TO_JSON(UseBySelf, useBySelf_);
      DARABONBA_PTR_TO_JSON(WorkOrderId, workOrderId_);
    };
    friend void from_json(const Darabonba::Json& j, QuerySmsQualificationRecordResponseBodyDataList& obj) { 
      DARABONBA_PTR_FROM_JSON(AuditRemark, auditRemark_);
      DARABONBA_PTR_FROM_JSON(AuditTime, auditTime_);
      DARABONBA_PTR_FROM_JSON(CompanyName, companyName_);
      DARABONBA_PTR_FROM_JSON(CreateDate, createDate_);
      DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
      DARABONBA_PTR_FROM_JSON(LegalPersonName, legalPersonName_);
      DARABONBA_PTR_FROM_JSON(QualificationGroupName, qualificationGroupName_);
      DARABONBA_PTR_FROM_JSON(StateName, stateName_);
      DARABONBA_PTR_FROM_JSON(UseBySelf, useBySelf_);
      DARABONBA_PTR_FROM_JSON(WorkOrderId, workOrderId_);
    };
    QuerySmsQualificationRecordResponseBodyDataList() = default ;
    QuerySmsQualificationRecordResponseBodyDataList(const QuerySmsQualificationRecordResponseBodyDataList &) = default ;
    QuerySmsQualificationRecordResponseBodyDataList(QuerySmsQualificationRecordResponseBodyDataList &&) = default ;
    QuerySmsQualificationRecordResponseBodyDataList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QuerySmsQualificationRecordResponseBodyDataList() = default ;
    QuerySmsQualificationRecordResponseBodyDataList& operator=(const QuerySmsQualificationRecordResponseBodyDataList &) = default ;
    QuerySmsQualificationRecordResponseBodyDataList& operator=(QuerySmsQualificationRecordResponseBodyDataList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->auditRemark_ == nullptr
        && return this->auditTime_ == nullptr && return this->companyName_ == nullptr && return this->createDate_ == nullptr && return this->groupId_ == nullptr && return this->legalPersonName_ == nullptr
        && return this->qualificationGroupName_ == nullptr && return this->stateName_ == nullptr && return this->useBySelf_ == nullptr && return this->workOrderId_ == nullptr; };
    // auditRemark Field Functions 
    bool hasAuditRemark() const { return this->auditRemark_ != nullptr;};
    void deleteAuditRemark() { this->auditRemark_ = nullptr;};
    inline string auditRemark() const { DARABONBA_PTR_GET_DEFAULT(auditRemark_, "") };
    inline QuerySmsQualificationRecordResponseBodyDataList& setAuditRemark(string auditRemark) { DARABONBA_PTR_SET_VALUE(auditRemark_, auditRemark) };


    // auditTime Field Functions 
    bool hasAuditTime() const { return this->auditTime_ != nullptr;};
    void deleteAuditTime() { this->auditTime_ = nullptr;};
    inline string auditTime() const { DARABONBA_PTR_GET_DEFAULT(auditTime_, "") };
    inline QuerySmsQualificationRecordResponseBodyDataList& setAuditTime(string auditTime) { DARABONBA_PTR_SET_VALUE(auditTime_, auditTime) };


    // companyName Field Functions 
    bool hasCompanyName() const { return this->companyName_ != nullptr;};
    void deleteCompanyName() { this->companyName_ = nullptr;};
    inline string companyName() const { DARABONBA_PTR_GET_DEFAULT(companyName_, "") };
    inline QuerySmsQualificationRecordResponseBodyDataList& setCompanyName(string companyName) { DARABONBA_PTR_SET_VALUE(companyName_, companyName) };


    // createDate Field Functions 
    bool hasCreateDate() const { return this->createDate_ != nullptr;};
    void deleteCreateDate() { this->createDate_ = nullptr;};
    inline string createDate() const { DARABONBA_PTR_GET_DEFAULT(createDate_, "") };
    inline QuerySmsQualificationRecordResponseBodyDataList& setCreateDate(string createDate) { DARABONBA_PTR_SET_VALUE(createDate_, createDate) };


    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline int64_t groupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, 0L) };
    inline QuerySmsQualificationRecordResponseBodyDataList& setGroupId(int64_t groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // legalPersonName Field Functions 
    bool hasLegalPersonName() const { return this->legalPersonName_ != nullptr;};
    void deleteLegalPersonName() { this->legalPersonName_ = nullptr;};
    inline string legalPersonName() const { DARABONBA_PTR_GET_DEFAULT(legalPersonName_, "") };
    inline QuerySmsQualificationRecordResponseBodyDataList& setLegalPersonName(string legalPersonName) { DARABONBA_PTR_SET_VALUE(legalPersonName_, legalPersonName) };


    // qualificationGroupName Field Functions 
    bool hasQualificationGroupName() const { return this->qualificationGroupName_ != nullptr;};
    void deleteQualificationGroupName() { this->qualificationGroupName_ = nullptr;};
    inline string qualificationGroupName() const { DARABONBA_PTR_GET_DEFAULT(qualificationGroupName_, "") };
    inline QuerySmsQualificationRecordResponseBodyDataList& setQualificationGroupName(string qualificationGroupName) { DARABONBA_PTR_SET_VALUE(qualificationGroupName_, qualificationGroupName) };


    // stateName Field Functions 
    bool hasStateName() const { return this->stateName_ != nullptr;};
    void deleteStateName() { this->stateName_ = nullptr;};
    inline string stateName() const { DARABONBA_PTR_GET_DEFAULT(stateName_, "") };
    inline QuerySmsQualificationRecordResponseBodyDataList& setStateName(string stateName) { DARABONBA_PTR_SET_VALUE(stateName_, stateName) };


    // useBySelf Field Functions 
    bool hasUseBySelf() const { return this->useBySelf_ != nullptr;};
    void deleteUseBySelf() { this->useBySelf_ = nullptr;};
    inline string useBySelf() const { DARABONBA_PTR_GET_DEFAULT(useBySelf_, "") };
    inline QuerySmsQualificationRecordResponseBodyDataList& setUseBySelf(string useBySelf) { DARABONBA_PTR_SET_VALUE(useBySelf_, useBySelf) };


    // workOrderId Field Functions 
    bool hasWorkOrderId() const { return this->workOrderId_ != nullptr;};
    void deleteWorkOrderId() { this->workOrderId_ = nullptr;};
    inline int64_t workOrderId() const { DARABONBA_PTR_GET_DEFAULT(workOrderId_, 0L) };
    inline QuerySmsQualificationRecordResponseBodyDataList& setWorkOrderId(int64_t workOrderId) { DARABONBA_PTR_SET_VALUE(workOrderId_, workOrderId) };


  protected:
    // 审核备注
    std::shared_ptr<string> auditRemark_ = nullptr;
    // 审核时间
    std::shared_ptr<string> auditTime_ = nullptr;
    // 公司名称或实人认证姓名
    std::shared_ptr<string> companyName_ = nullptr;
    // 创建时间
    std::shared_ptr<string> createDate_ = nullptr;
    // 资质组ID
    std::shared_ptr<int64_t> groupId_ = nullptr;
    // 法人名称
    std::shared_ptr<string> legalPersonName_ = nullptr;
    // 资质组名称
    std::shared_ptr<string> qualificationGroupName_ = nullptr;
    // 审核状态名
    std::shared_ptr<string> stateName_ = nullptr;
    // 是否自用
    std::shared_ptr<string> useBySelf_ = nullptr;
    // 工单ID
    std::shared_ptr<int64_t> workOrderId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dysmsapi20170525
#endif
