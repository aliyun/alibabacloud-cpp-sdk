// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RECORDCALLCENTEREVENTFORPARTNERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_RECORDCALLCENTEREVENTFORPARTNERREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Companyreg20200306
{
namespace Models
{
  class RecordCallCenterEventForPartnerRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RecordCallCenterEventForPartnerRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BizId, bizId_);
      DARABONBA_PTR_TO_JSON(BizType, bizType_);
      DARABONBA_PTR_TO_JSON(CallAction, callAction_);
      DARABONBA_PTR_TO_JSON(Callee, callee_);
      DARABONBA_PTR_TO_JSON(Caller, caller_);
      DARABONBA_PTR_TO_JSON(ConnId, connId_);
      DARABONBA_PTR_TO_JSON(ContactId, contactId_);
      DARABONBA_PTR_TO_JSON(EmployeeCode, employeeCode_);
      DARABONBA_PTR_TO_JSON(JobId, jobId_);
      DARABONBA_PTR_TO_JSON(RelatedId, relatedId_);
      DARABONBA_PTR_TO_JSON(SecretMobile, secretMobile_);
      DARABONBA_PTR_TO_JSON(SkillType, skillType_);
      DARABONBA_PTR_TO_JSON(TenantId, tenantId_);
    };
    friend void from_json(const Darabonba::Json& j, RecordCallCenterEventForPartnerRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BizId, bizId_);
      DARABONBA_PTR_FROM_JSON(BizType, bizType_);
      DARABONBA_PTR_FROM_JSON(CallAction, callAction_);
      DARABONBA_PTR_FROM_JSON(Callee, callee_);
      DARABONBA_PTR_FROM_JSON(Caller, caller_);
      DARABONBA_PTR_FROM_JSON(ConnId, connId_);
      DARABONBA_PTR_FROM_JSON(ContactId, contactId_);
      DARABONBA_PTR_FROM_JSON(EmployeeCode, employeeCode_);
      DARABONBA_PTR_FROM_JSON(JobId, jobId_);
      DARABONBA_PTR_FROM_JSON(RelatedId, relatedId_);
      DARABONBA_PTR_FROM_JSON(SecretMobile, secretMobile_);
      DARABONBA_PTR_FROM_JSON(SkillType, skillType_);
      DARABONBA_PTR_FROM_JSON(TenantId, tenantId_);
    };
    RecordCallCenterEventForPartnerRequest() = default ;
    RecordCallCenterEventForPartnerRequest(const RecordCallCenterEventForPartnerRequest &) = default ;
    RecordCallCenterEventForPartnerRequest(RecordCallCenterEventForPartnerRequest &&) = default ;
    RecordCallCenterEventForPartnerRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RecordCallCenterEventForPartnerRequest() = default ;
    RecordCallCenterEventForPartnerRequest& operator=(const RecordCallCenterEventForPartnerRequest &) = default ;
    RecordCallCenterEventForPartnerRequest& operator=(RecordCallCenterEventForPartnerRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bizId_ == nullptr
        && this->bizType_ == nullptr && this->callAction_ == nullptr && this->callee_ == nullptr && this->caller_ == nullptr && this->connId_ == nullptr
        && this->contactId_ == nullptr && this->employeeCode_ == nullptr && this->jobId_ == nullptr && this->relatedId_ == nullptr && this->secretMobile_ == nullptr
        && this->skillType_ == nullptr && this->tenantId_ == nullptr; };
    // bizId Field Functions 
    bool hasBizId() const { return this->bizId_ != nullptr;};
    void deleteBizId() { this->bizId_ = nullptr;};
    inline string getBizId() const { DARABONBA_PTR_GET_DEFAULT(bizId_, "") };
    inline RecordCallCenterEventForPartnerRequest& setBizId(string bizId) { DARABONBA_PTR_SET_VALUE(bizId_, bizId) };


    // bizType Field Functions 
    bool hasBizType() const { return this->bizType_ != nullptr;};
    void deleteBizType() { this->bizType_ = nullptr;};
    inline string getBizType() const { DARABONBA_PTR_GET_DEFAULT(bizType_, "") };
    inline RecordCallCenterEventForPartnerRequest& setBizType(string bizType) { DARABONBA_PTR_SET_VALUE(bizType_, bizType) };


    // callAction Field Functions 
    bool hasCallAction() const { return this->callAction_ != nullptr;};
    void deleteCallAction() { this->callAction_ = nullptr;};
    inline string getCallAction() const { DARABONBA_PTR_GET_DEFAULT(callAction_, "") };
    inline RecordCallCenterEventForPartnerRequest& setCallAction(string callAction) { DARABONBA_PTR_SET_VALUE(callAction_, callAction) };


    // callee Field Functions 
    bool hasCallee() const { return this->callee_ != nullptr;};
    void deleteCallee() { this->callee_ = nullptr;};
    inline string getCallee() const { DARABONBA_PTR_GET_DEFAULT(callee_, "") };
    inline RecordCallCenterEventForPartnerRequest& setCallee(string callee) { DARABONBA_PTR_SET_VALUE(callee_, callee) };


    // caller Field Functions 
    bool hasCaller() const { return this->caller_ != nullptr;};
    void deleteCaller() { this->caller_ = nullptr;};
    inline string getCaller() const { DARABONBA_PTR_GET_DEFAULT(caller_, "") };
    inline RecordCallCenterEventForPartnerRequest& setCaller(string caller) { DARABONBA_PTR_SET_VALUE(caller_, caller) };


    // connId Field Functions 
    bool hasConnId() const { return this->connId_ != nullptr;};
    void deleteConnId() { this->connId_ = nullptr;};
    inline string getConnId() const { DARABONBA_PTR_GET_DEFAULT(connId_, "") };
    inline RecordCallCenterEventForPartnerRequest& setConnId(string connId) { DARABONBA_PTR_SET_VALUE(connId_, connId) };


    // contactId Field Functions 
    bool hasContactId() const { return this->contactId_ != nullptr;};
    void deleteContactId() { this->contactId_ = nullptr;};
    inline string getContactId() const { DARABONBA_PTR_GET_DEFAULT(contactId_, "") };
    inline RecordCallCenterEventForPartnerRequest& setContactId(string contactId) { DARABONBA_PTR_SET_VALUE(contactId_, contactId) };


    // employeeCode Field Functions 
    bool hasEmployeeCode() const { return this->employeeCode_ != nullptr;};
    void deleteEmployeeCode() { this->employeeCode_ = nullptr;};
    inline string getEmployeeCode() const { DARABONBA_PTR_GET_DEFAULT(employeeCode_, "") };
    inline RecordCallCenterEventForPartnerRequest& setEmployeeCode(string employeeCode) { DARABONBA_PTR_SET_VALUE(employeeCode_, employeeCode) };


    // jobId Field Functions 
    bool hasJobId() const { return this->jobId_ != nullptr;};
    void deleteJobId() { this->jobId_ = nullptr;};
    inline string getJobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
    inline RecordCallCenterEventForPartnerRequest& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


    // relatedId Field Functions 
    bool hasRelatedId() const { return this->relatedId_ != nullptr;};
    void deleteRelatedId() { this->relatedId_ = nullptr;};
    inline int64_t getRelatedId() const { DARABONBA_PTR_GET_DEFAULT(relatedId_, 0L) };
    inline RecordCallCenterEventForPartnerRequest& setRelatedId(int64_t relatedId) { DARABONBA_PTR_SET_VALUE(relatedId_, relatedId) };


    // secretMobile Field Functions 
    bool hasSecretMobile() const { return this->secretMobile_ != nullptr;};
    void deleteSecretMobile() { this->secretMobile_ = nullptr;};
    inline string getSecretMobile() const { DARABONBA_PTR_GET_DEFAULT(secretMobile_, "") };
    inline RecordCallCenterEventForPartnerRequest& setSecretMobile(string secretMobile) { DARABONBA_PTR_SET_VALUE(secretMobile_, secretMobile) };


    // skillType Field Functions 
    bool hasSkillType() const { return this->skillType_ != nullptr;};
    void deleteSkillType() { this->skillType_ = nullptr;};
    inline int32_t getSkillType() const { DARABONBA_PTR_GET_DEFAULT(skillType_, 0) };
    inline RecordCallCenterEventForPartnerRequest& setSkillType(int32_t skillType) { DARABONBA_PTR_SET_VALUE(skillType_, skillType) };


    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline string getTenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
    inline RecordCallCenterEventForPartnerRequest& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


  protected:
    shared_ptr<string> bizId_ {};
    shared_ptr<string> bizType_ {};
    shared_ptr<string> callAction_ {};
    shared_ptr<string> callee_ {};
    shared_ptr<string> caller_ {};
    shared_ptr<string> connId_ {};
    shared_ptr<string> contactId_ {};
    shared_ptr<string> employeeCode_ {};
    shared_ptr<string> jobId_ {};
    // RequestId
    shared_ptr<int64_t> relatedId_ {};
    shared_ptr<string> secretMobile_ {};
    shared_ptr<int32_t> skillType_ {};
    shared_ptr<string> tenantId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Companyreg20200306
#endif
