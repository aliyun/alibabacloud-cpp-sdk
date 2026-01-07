// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ENTERPRISEUNINVITEDADMININVITEJOINENTERPRISERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_ENTERPRISEUNINVITEDADMININVITEJOINENTERPRISERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AccountCenter20241209
{
namespace Models
{
  class EnterpriseUninvitedAdminInviteJoinEnterpriseResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const EnterpriseUninvitedAdminInviteJoinEnterpriseResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, EnterpriseUninvitedAdminInviteJoinEnterpriseResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    EnterpriseUninvitedAdminInviteJoinEnterpriseResponseBody() = default ;
    EnterpriseUninvitedAdminInviteJoinEnterpriseResponseBody(const EnterpriseUninvitedAdminInviteJoinEnterpriseResponseBody &) = default ;
    EnterpriseUninvitedAdminInviteJoinEnterpriseResponseBody(EnterpriseUninvitedAdminInviteJoinEnterpriseResponseBody &&) = default ;
    EnterpriseUninvitedAdminInviteJoinEnterpriseResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~EnterpriseUninvitedAdminInviteJoinEnterpriseResponseBody() = default ;
    EnterpriseUninvitedAdminInviteJoinEnterpriseResponseBody& operator=(const EnterpriseUninvitedAdminInviteJoinEnterpriseResponseBody &) = default ;
    EnterpriseUninvitedAdminInviteJoinEnterpriseResponseBody& operator=(EnterpriseUninvitedAdminInviteJoinEnterpriseResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(ApplicantAliyunId, applicantAliyunId_);
        DARABONBA_PTR_TO_JSON(ApplicantPk, applicantPk_);
        DARABONBA_PTR_TO_JSON(ApplyRemark, applyRemark_);
        DARABONBA_PTR_TO_JSON(ApplyTime, applyTime_);
        DARABONBA_PTR_TO_JSON(AuditorAliyunId, auditorAliyunId_);
        DARABONBA_PTR_TO_JSON(AuditorPk, auditorPk_);
        DARABONBA_PTR_TO_JSON(EcId, ecId_);
        DARABONBA_PTR_TO_JSON(LeId, leId_);
        DARABONBA_PTR_TO_JSON(LeLicenseNo, leLicenseNo_);
        DARABONBA_PTR_TO_JSON(LeName, leName_);
        DARABONBA_PTR_TO_JSON(Message, message_);
        DARABONBA_PTR_TO_JSON(NbId, nbId_);
        DARABONBA_PTR_TO_JSON(OperatedAliyunId, operatedAliyunId_);
        DARABONBA_PTR_TO_JSON(OperatedPk, operatedPk_);
        DARABONBA_PTR_TO_JSON(Success, success_);
        DARABONBA_PTR_TO_JSON(TimeoutTime, timeoutTime_);
        DARABONBA_PTR_TO_JSON(TodoId, todoId_);
        DARABONBA_PTR_TO_JSON(TodoType, todoType_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(ApplicantAliyunId, applicantAliyunId_);
        DARABONBA_PTR_FROM_JSON(ApplicantPk, applicantPk_);
        DARABONBA_PTR_FROM_JSON(ApplyRemark, applyRemark_);
        DARABONBA_PTR_FROM_JSON(ApplyTime, applyTime_);
        DARABONBA_PTR_FROM_JSON(AuditorAliyunId, auditorAliyunId_);
        DARABONBA_PTR_FROM_JSON(AuditorPk, auditorPk_);
        DARABONBA_PTR_FROM_JSON(EcId, ecId_);
        DARABONBA_PTR_FROM_JSON(LeId, leId_);
        DARABONBA_PTR_FROM_JSON(LeLicenseNo, leLicenseNo_);
        DARABONBA_PTR_FROM_JSON(LeName, leName_);
        DARABONBA_PTR_FROM_JSON(Message, message_);
        DARABONBA_PTR_FROM_JSON(NbId, nbId_);
        DARABONBA_PTR_FROM_JSON(OperatedAliyunId, operatedAliyunId_);
        DARABONBA_PTR_FROM_JSON(OperatedPk, operatedPk_);
        DARABONBA_PTR_FROM_JSON(Success, success_);
        DARABONBA_PTR_FROM_JSON(TimeoutTime, timeoutTime_);
        DARABONBA_PTR_FROM_JSON(TodoId, todoId_);
        DARABONBA_PTR_FROM_JSON(TodoType, todoType_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->applicantAliyunId_ == nullptr
        && this->applicantPk_ == nullptr && this->applyRemark_ == nullptr && this->applyTime_ == nullptr && this->auditorAliyunId_ == nullptr && this->auditorPk_ == nullptr
        && this->ecId_ == nullptr && this->leId_ == nullptr && this->leLicenseNo_ == nullptr && this->leName_ == nullptr && this->message_ == nullptr
        && this->nbId_ == nullptr && this->operatedAliyunId_ == nullptr && this->operatedPk_ == nullptr && this->success_ == nullptr && this->timeoutTime_ == nullptr
        && this->todoId_ == nullptr && this->todoType_ == nullptr; };
      // applicantAliyunId Field Functions 
      bool hasApplicantAliyunId() const { return this->applicantAliyunId_ != nullptr;};
      void deleteApplicantAliyunId() { this->applicantAliyunId_ = nullptr;};
      inline string getApplicantAliyunId() const { DARABONBA_PTR_GET_DEFAULT(applicantAliyunId_, "") };
      inline Data& setApplicantAliyunId(string applicantAliyunId) { DARABONBA_PTR_SET_VALUE(applicantAliyunId_, applicantAliyunId) };


      // applicantPk Field Functions 
      bool hasApplicantPk() const { return this->applicantPk_ != nullptr;};
      void deleteApplicantPk() { this->applicantPk_ = nullptr;};
      inline string getApplicantPk() const { DARABONBA_PTR_GET_DEFAULT(applicantPk_, "") };
      inline Data& setApplicantPk(string applicantPk) { DARABONBA_PTR_SET_VALUE(applicantPk_, applicantPk) };


      // applyRemark Field Functions 
      bool hasApplyRemark() const { return this->applyRemark_ != nullptr;};
      void deleteApplyRemark() { this->applyRemark_ = nullptr;};
      inline string getApplyRemark() const { DARABONBA_PTR_GET_DEFAULT(applyRemark_, "") };
      inline Data& setApplyRemark(string applyRemark) { DARABONBA_PTR_SET_VALUE(applyRemark_, applyRemark) };


      // applyTime Field Functions 
      bool hasApplyTime() const { return this->applyTime_ != nullptr;};
      void deleteApplyTime() { this->applyTime_ = nullptr;};
      inline int64_t getApplyTime() const { DARABONBA_PTR_GET_DEFAULT(applyTime_, 0L) };
      inline Data& setApplyTime(int64_t applyTime) { DARABONBA_PTR_SET_VALUE(applyTime_, applyTime) };


      // auditorAliyunId Field Functions 
      bool hasAuditorAliyunId() const { return this->auditorAliyunId_ != nullptr;};
      void deleteAuditorAliyunId() { this->auditorAliyunId_ = nullptr;};
      inline string getAuditorAliyunId() const { DARABONBA_PTR_GET_DEFAULT(auditorAliyunId_, "") };
      inline Data& setAuditorAliyunId(string auditorAliyunId) { DARABONBA_PTR_SET_VALUE(auditorAliyunId_, auditorAliyunId) };


      // auditorPk Field Functions 
      bool hasAuditorPk() const { return this->auditorPk_ != nullptr;};
      void deleteAuditorPk() { this->auditorPk_ = nullptr;};
      inline string getAuditorPk() const { DARABONBA_PTR_GET_DEFAULT(auditorPk_, "") };
      inline Data& setAuditorPk(string auditorPk) { DARABONBA_PTR_SET_VALUE(auditorPk_, auditorPk) };


      // ecId Field Functions 
      bool hasEcId() const { return this->ecId_ != nullptr;};
      void deleteEcId() { this->ecId_ = nullptr;};
      inline string getEcId() const { DARABONBA_PTR_GET_DEFAULT(ecId_, "") };
      inline Data& setEcId(string ecId) { DARABONBA_PTR_SET_VALUE(ecId_, ecId) };


      // leId Field Functions 
      bool hasLeId() const { return this->leId_ != nullptr;};
      void deleteLeId() { this->leId_ = nullptr;};
      inline string getLeId() const { DARABONBA_PTR_GET_DEFAULT(leId_, "") };
      inline Data& setLeId(string leId) { DARABONBA_PTR_SET_VALUE(leId_, leId) };


      // leLicenseNo Field Functions 
      bool hasLeLicenseNo() const { return this->leLicenseNo_ != nullptr;};
      void deleteLeLicenseNo() { this->leLicenseNo_ = nullptr;};
      inline string getLeLicenseNo() const { DARABONBA_PTR_GET_DEFAULT(leLicenseNo_, "") };
      inline Data& setLeLicenseNo(string leLicenseNo) { DARABONBA_PTR_SET_VALUE(leLicenseNo_, leLicenseNo) };


      // leName Field Functions 
      bool hasLeName() const { return this->leName_ != nullptr;};
      void deleteLeName() { this->leName_ = nullptr;};
      inline string getLeName() const { DARABONBA_PTR_GET_DEFAULT(leName_, "") };
      inline Data& setLeName(string leName) { DARABONBA_PTR_SET_VALUE(leName_, leName) };


      // message Field Functions 
      bool hasMessage() const { return this->message_ != nullptr;};
      void deleteMessage() { this->message_ = nullptr;};
      inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
      inline Data& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


      // nbId Field Functions 
      bool hasNbId() const { return this->nbId_ != nullptr;};
      void deleteNbId() { this->nbId_ = nullptr;};
      inline string getNbId() const { DARABONBA_PTR_GET_DEFAULT(nbId_, "") };
      inline Data& setNbId(string nbId) { DARABONBA_PTR_SET_VALUE(nbId_, nbId) };


      // operatedAliyunId Field Functions 
      bool hasOperatedAliyunId() const { return this->operatedAliyunId_ != nullptr;};
      void deleteOperatedAliyunId() { this->operatedAliyunId_ = nullptr;};
      inline string getOperatedAliyunId() const { DARABONBA_PTR_GET_DEFAULT(operatedAliyunId_, "") };
      inline Data& setOperatedAliyunId(string operatedAliyunId) { DARABONBA_PTR_SET_VALUE(operatedAliyunId_, operatedAliyunId) };


      // operatedPk Field Functions 
      bool hasOperatedPk() const { return this->operatedPk_ != nullptr;};
      void deleteOperatedPk() { this->operatedPk_ = nullptr;};
      inline string getOperatedPk() const { DARABONBA_PTR_GET_DEFAULT(operatedPk_, "") };
      inline Data& setOperatedPk(string operatedPk) { DARABONBA_PTR_SET_VALUE(operatedPk_, operatedPk) };


      // success Field Functions 
      bool hasSuccess() const { return this->success_ != nullptr;};
      void deleteSuccess() { this->success_ = nullptr;};
      inline string getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, "") };
      inline Data& setSuccess(string success) { DARABONBA_PTR_SET_VALUE(success_, success) };


      // timeoutTime Field Functions 
      bool hasTimeoutTime() const { return this->timeoutTime_ != nullptr;};
      void deleteTimeoutTime() { this->timeoutTime_ = nullptr;};
      inline int64_t getTimeoutTime() const { DARABONBA_PTR_GET_DEFAULT(timeoutTime_, 0L) };
      inline Data& setTimeoutTime(int64_t timeoutTime) { DARABONBA_PTR_SET_VALUE(timeoutTime_, timeoutTime) };


      // todoId Field Functions 
      bool hasTodoId() const { return this->todoId_ != nullptr;};
      void deleteTodoId() { this->todoId_ = nullptr;};
      inline string getTodoId() const { DARABONBA_PTR_GET_DEFAULT(todoId_, "") };
      inline Data& setTodoId(string todoId) { DARABONBA_PTR_SET_VALUE(todoId_, todoId) };


      // todoType Field Functions 
      bool hasTodoType() const { return this->todoType_ != nullptr;};
      void deleteTodoType() { this->todoType_ = nullptr;};
      inline string getTodoType() const { DARABONBA_PTR_GET_DEFAULT(todoType_, "") };
      inline Data& setTodoType(string todoType) { DARABONBA_PTR_SET_VALUE(todoType_, todoType) };


    protected:
      shared_ptr<string> applicantAliyunId_ {};
      shared_ptr<string> applicantPk_ {};
      shared_ptr<string> applyRemark_ {};
      shared_ptr<int64_t> applyTime_ {};
      shared_ptr<string> auditorAliyunId_ {};
      shared_ptr<string> auditorPk_ {};
      shared_ptr<string> ecId_ {};
      shared_ptr<string> leId_ {};
      shared_ptr<string> leLicenseNo_ {};
      shared_ptr<string> leName_ {};
      shared_ptr<string> message_ {};
      shared_ptr<string> nbId_ {};
      shared_ptr<string> operatedAliyunId_ {};
      shared_ptr<string> operatedPk_ {};
      shared_ptr<string> success_ {};
      shared_ptr<int64_t> timeoutTime_ {};
      shared_ptr<string> todoId_ {};
      shared_ptr<string> todoType_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline EnterpriseUninvitedAdminInviteJoinEnterpriseResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<EnterpriseUninvitedAdminInviteJoinEnterpriseResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<EnterpriseUninvitedAdminInviteJoinEnterpriseResponseBody::Data>) };
    inline vector<EnterpriseUninvitedAdminInviteJoinEnterpriseResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<EnterpriseUninvitedAdminInviteJoinEnterpriseResponseBody::Data>) };
    inline EnterpriseUninvitedAdminInviteJoinEnterpriseResponseBody& setData(const vector<EnterpriseUninvitedAdminInviteJoinEnterpriseResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline EnterpriseUninvitedAdminInviteJoinEnterpriseResponseBody& setData(vector<EnterpriseUninvitedAdminInviteJoinEnterpriseResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline EnterpriseUninvitedAdminInviteJoinEnterpriseResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline EnterpriseUninvitedAdminInviteJoinEnterpriseResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline EnterpriseUninvitedAdminInviteJoinEnterpriseResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<vector<EnterpriseUninvitedAdminInviteJoinEnterpriseResponseBody::Data>> data_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AccountCenter20241209
#endif
