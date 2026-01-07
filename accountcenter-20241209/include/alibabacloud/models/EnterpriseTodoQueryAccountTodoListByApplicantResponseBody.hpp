// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ENTERPRISETODOQUERYACCOUNTTODOLISTBYAPPLICANTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_ENTERPRISETODOQUERYACCOUNTTODOLISTBYAPPLICANTRESPONSEBODY_HPP_
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
  class EnterpriseTodoQueryAccountTodoListByApplicantResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const EnterpriseTodoQueryAccountTodoListByApplicantResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, EnterpriseTodoQueryAccountTodoListByApplicantResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    EnterpriseTodoQueryAccountTodoListByApplicantResponseBody() = default ;
    EnterpriseTodoQueryAccountTodoListByApplicantResponseBody(const EnterpriseTodoQueryAccountTodoListByApplicantResponseBody &) = default ;
    EnterpriseTodoQueryAccountTodoListByApplicantResponseBody(EnterpriseTodoQueryAccountTodoListByApplicantResponseBody &&) = default ;
    EnterpriseTodoQueryAccountTodoListByApplicantResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~EnterpriseTodoQueryAccountTodoListByApplicantResponseBody() = default ;
    EnterpriseTodoQueryAccountTodoListByApplicantResponseBody& operator=(const EnterpriseTodoQueryAccountTodoListByApplicantResponseBody &) = default ;
    EnterpriseTodoQueryAccountTodoListByApplicantResponseBody& operator=(EnterpriseTodoQueryAccountTodoListByApplicantResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(Count, count_);
        DARABONBA_PTR_TO_JSON(TodoList, todoList_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(Count, count_);
        DARABONBA_PTR_FROM_JSON(TodoList, todoList_);
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
      class TodoList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const TodoList& obj) { 
          DARABONBA_PTR_TO_JSON(AliyunId, aliyunId_);
          DARABONBA_PTR_TO_JSON(ApplicantAliyunId, applicantAliyunId_);
          DARABONBA_PTR_TO_JSON(ApplicantPk, applicantPk_);
          DARABONBA_PTR_TO_JSON(ApplyRemark, applyRemark_);
          DARABONBA_PTR_TO_JSON(ApplyTime, applyTime_);
          DARABONBA_PTR_TO_JSON(AuditorAliyunId, auditorAliyunId_);
          DARABONBA_PTR_TO_JSON(AuditorPk, auditorPk_);
          DARABONBA_PTR_TO_JSON(AuditorStatus, auditorStatus_);
          DARABONBA_PTR_TO_JSON(CanceledTime, canceledTime_);
          DARABONBA_PTR_TO_JSON(Closed, closed_);
          DARABONBA_PTR_TO_JSON(CurrAuditor, currAuditor_);
          DARABONBA_PTR_TO_JSON(FromLe, fromLe_);
          DARABONBA_PTR_TO_JSON(Pk, pk_);
          DARABONBA_PTR_TO_JSON(ProcessList, processList_);
          DARABONBA_PTR_TO_JSON(Status, status_);
          DARABONBA_PTR_TO_JSON(TimeoutTime, timeoutTime_);
          DARABONBA_PTR_TO_JSON(ToLe, toLe_);
          DARABONBA_PTR_TO_JSON(ToLeAudit, toLeAudit_);
          DARABONBA_PTR_TO_JSON(TodoId, todoId_);
          DARABONBA_PTR_TO_JSON(TodoType, todoType_);
          DARABONBA_PTR_TO_JSON(TodoView, todoView_);
        };
        friend void from_json(const Darabonba::Json& j, TodoList& obj) { 
          DARABONBA_PTR_FROM_JSON(AliyunId, aliyunId_);
          DARABONBA_PTR_FROM_JSON(ApplicantAliyunId, applicantAliyunId_);
          DARABONBA_PTR_FROM_JSON(ApplicantPk, applicantPk_);
          DARABONBA_PTR_FROM_JSON(ApplyRemark, applyRemark_);
          DARABONBA_PTR_FROM_JSON(ApplyTime, applyTime_);
          DARABONBA_PTR_FROM_JSON(AuditorAliyunId, auditorAliyunId_);
          DARABONBA_PTR_FROM_JSON(AuditorPk, auditorPk_);
          DARABONBA_PTR_FROM_JSON(AuditorStatus, auditorStatus_);
          DARABONBA_PTR_FROM_JSON(CanceledTime, canceledTime_);
          DARABONBA_PTR_FROM_JSON(Closed, closed_);
          DARABONBA_PTR_FROM_JSON(CurrAuditor, currAuditor_);
          DARABONBA_PTR_FROM_JSON(FromLe, fromLe_);
          DARABONBA_PTR_FROM_JSON(Pk, pk_);
          DARABONBA_PTR_FROM_JSON(ProcessList, processList_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
          DARABONBA_PTR_FROM_JSON(TimeoutTime, timeoutTime_);
          DARABONBA_PTR_FROM_JSON(ToLe, toLe_);
          DARABONBA_PTR_FROM_JSON(ToLeAudit, toLeAudit_);
          DARABONBA_PTR_FROM_JSON(TodoId, todoId_);
          DARABONBA_PTR_FROM_JSON(TodoType, todoType_);
          DARABONBA_PTR_FROM_JSON(TodoView, todoView_);
        };
        TodoList() = default ;
        TodoList(const TodoList &) = default ;
        TodoList(TodoList &&) = default ;
        TodoList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~TodoList() = default ;
        TodoList& operator=(const TodoList &) = default ;
        TodoList& operator=(TodoList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class ToLe : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const ToLe& obj) { 
            DARABONBA_PTR_TO_JSON(EcId, ecId_);
            DARABONBA_PTR_TO_JSON(LeId, leId_);
            DARABONBA_PTR_TO_JSON(LicenseNumber, licenseNumber_);
            DARABONBA_PTR_TO_JSON(ManageableAccountCount, manageableAccountCount_);
            DARABONBA_PTR_TO_JSON(ManagedAccountCount, managedAccountCount_);
            DARABONBA_PTR_TO_JSON(ManagerList, managerList_);
            DARABONBA_PTR_TO_JSON(NbId, nbId_);
            DARABONBA_PTR_TO_JSON(SubjectName, subjectName_);
            DARABONBA_PTR_TO_JSON(SubjectType, subjectType_);
          };
          friend void from_json(const Darabonba::Json& j, ToLe& obj) { 
            DARABONBA_PTR_FROM_JSON(EcId, ecId_);
            DARABONBA_PTR_FROM_JSON(LeId, leId_);
            DARABONBA_PTR_FROM_JSON(LicenseNumber, licenseNumber_);
            DARABONBA_PTR_FROM_JSON(ManageableAccountCount, manageableAccountCount_);
            DARABONBA_PTR_FROM_JSON(ManagedAccountCount, managedAccountCount_);
            DARABONBA_PTR_FROM_JSON(ManagerList, managerList_);
            DARABONBA_PTR_FROM_JSON(NbId, nbId_);
            DARABONBA_PTR_FROM_JSON(SubjectName, subjectName_);
            DARABONBA_PTR_FROM_JSON(SubjectType, subjectType_);
          };
          ToLe() = default ;
          ToLe(const ToLe &) = default ;
          ToLe(ToLe &&) = default ;
          ToLe(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~ToLe() = default ;
          ToLe& operator=(const ToLe &) = default ;
          ToLe& operator=(ToLe &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class ManagerList : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const ManagerList& obj) { 
              DARABONBA_PTR_TO_JSON(AliyunId, aliyunId_);
              DARABONBA_PTR_TO_JSON(Pk, pk_);
              DARABONBA_PTR_TO_JSON(PkEncoded, pkEncoded_);
              DARABONBA_PTR_TO_JSON(Role, role_);
            };
            friend void from_json(const Darabonba::Json& j, ManagerList& obj) { 
              DARABONBA_PTR_FROM_JSON(AliyunId, aliyunId_);
              DARABONBA_PTR_FROM_JSON(Pk, pk_);
              DARABONBA_PTR_FROM_JSON(PkEncoded, pkEncoded_);
              DARABONBA_PTR_FROM_JSON(Role, role_);
            };
            ManagerList() = default ;
            ManagerList(const ManagerList &) = default ;
            ManagerList(ManagerList &&) = default ;
            ManagerList(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~ManagerList() = default ;
            ManagerList& operator=(const ManagerList &) = default ;
            ManagerList& operator=(ManagerList &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->aliyunId_ == nullptr
        && this->pk_ == nullptr && this->pkEncoded_ == nullptr && this->role_ == nullptr; };
            // aliyunId Field Functions 
            bool hasAliyunId() const { return this->aliyunId_ != nullptr;};
            void deleteAliyunId() { this->aliyunId_ = nullptr;};
            inline string getAliyunId() const { DARABONBA_PTR_GET_DEFAULT(aliyunId_, "") };
            inline ManagerList& setAliyunId(string aliyunId) { DARABONBA_PTR_SET_VALUE(aliyunId_, aliyunId) };


            // pk Field Functions 
            bool hasPk() const { return this->pk_ != nullptr;};
            void deletePk() { this->pk_ = nullptr;};
            inline string getPk() const { DARABONBA_PTR_GET_DEFAULT(pk_, "") };
            inline ManagerList& setPk(string pk) { DARABONBA_PTR_SET_VALUE(pk_, pk) };


            // pkEncoded Field Functions 
            bool hasPkEncoded() const { return this->pkEncoded_ != nullptr;};
            void deletePkEncoded() { this->pkEncoded_ = nullptr;};
            inline string getPkEncoded() const { DARABONBA_PTR_GET_DEFAULT(pkEncoded_, "") };
            inline ManagerList& setPkEncoded(string pkEncoded) { DARABONBA_PTR_SET_VALUE(pkEncoded_, pkEncoded) };


            // role Field Functions 
            bool hasRole() const { return this->role_ != nullptr;};
            void deleteRole() { this->role_ = nullptr;};
            inline string getRole() const { DARABONBA_PTR_GET_DEFAULT(role_, "") };
            inline ManagerList& setRole(string role) { DARABONBA_PTR_SET_VALUE(role_, role) };


          protected:
            shared_ptr<string> aliyunId_ {};
            shared_ptr<string> pk_ {};
            shared_ptr<string> pkEncoded_ {};
            shared_ptr<string> role_ {};
          };

          virtual bool empty() const override { return this->ecId_ == nullptr
        && this->leId_ == nullptr && this->licenseNumber_ == nullptr && this->manageableAccountCount_ == nullptr && this->managedAccountCount_ == nullptr && this->managerList_ == nullptr
        && this->nbId_ == nullptr && this->subjectName_ == nullptr && this->subjectType_ == nullptr; };
          // ecId Field Functions 
          bool hasEcId() const { return this->ecId_ != nullptr;};
          void deleteEcId() { this->ecId_ = nullptr;};
          inline string getEcId() const { DARABONBA_PTR_GET_DEFAULT(ecId_, "") };
          inline ToLe& setEcId(string ecId) { DARABONBA_PTR_SET_VALUE(ecId_, ecId) };


          // leId Field Functions 
          bool hasLeId() const { return this->leId_ != nullptr;};
          void deleteLeId() { this->leId_ = nullptr;};
          inline string getLeId() const { DARABONBA_PTR_GET_DEFAULT(leId_, "") };
          inline ToLe& setLeId(string leId) { DARABONBA_PTR_SET_VALUE(leId_, leId) };


          // licenseNumber Field Functions 
          bool hasLicenseNumber() const { return this->licenseNumber_ != nullptr;};
          void deleteLicenseNumber() { this->licenseNumber_ = nullptr;};
          inline string getLicenseNumber() const { DARABONBA_PTR_GET_DEFAULT(licenseNumber_, "") };
          inline ToLe& setLicenseNumber(string licenseNumber) { DARABONBA_PTR_SET_VALUE(licenseNumber_, licenseNumber) };


          // manageableAccountCount Field Functions 
          bool hasManageableAccountCount() const { return this->manageableAccountCount_ != nullptr;};
          void deleteManageableAccountCount() { this->manageableAccountCount_ = nullptr;};
          inline int64_t getManageableAccountCount() const { DARABONBA_PTR_GET_DEFAULT(manageableAccountCount_, 0L) };
          inline ToLe& setManageableAccountCount(int64_t manageableAccountCount) { DARABONBA_PTR_SET_VALUE(manageableAccountCount_, manageableAccountCount) };


          // managedAccountCount Field Functions 
          bool hasManagedAccountCount() const { return this->managedAccountCount_ != nullptr;};
          void deleteManagedAccountCount() { this->managedAccountCount_ = nullptr;};
          inline int64_t getManagedAccountCount() const { DARABONBA_PTR_GET_DEFAULT(managedAccountCount_, 0L) };
          inline ToLe& setManagedAccountCount(int64_t managedAccountCount) { DARABONBA_PTR_SET_VALUE(managedAccountCount_, managedAccountCount) };


          // managerList Field Functions 
          bool hasManagerList() const { return this->managerList_ != nullptr;};
          void deleteManagerList() { this->managerList_ = nullptr;};
          inline const vector<ToLe::ManagerList> & getManagerList() const { DARABONBA_PTR_GET_CONST(managerList_, vector<ToLe::ManagerList>) };
          inline vector<ToLe::ManagerList> getManagerList() { DARABONBA_PTR_GET(managerList_, vector<ToLe::ManagerList>) };
          inline ToLe& setManagerList(const vector<ToLe::ManagerList> & managerList) { DARABONBA_PTR_SET_VALUE(managerList_, managerList) };
          inline ToLe& setManagerList(vector<ToLe::ManagerList> && managerList) { DARABONBA_PTR_SET_RVALUE(managerList_, managerList) };


          // nbId Field Functions 
          bool hasNbId() const { return this->nbId_ != nullptr;};
          void deleteNbId() { this->nbId_ = nullptr;};
          inline string getNbId() const { DARABONBA_PTR_GET_DEFAULT(nbId_, "") };
          inline ToLe& setNbId(string nbId) { DARABONBA_PTR_SET_VALUE(nbId_, nbId) };


          // subjectName Field Functions 
          bool hasSubjectName() const { return this->subjectName_ != nullptr;};
          void deleteSubjectName() { this->subjectName_ = nullptr;};
          inline string getSubjectName() const { DARABONBA_PTR_GET_DEFAULT(subjectName_, "") };
          inline ToLe& setSubjectName(string subjectName) { DARABONBA_PTR_SET_VALUE(subjectName_, subjectName) };


          // subjectType Field Functions 
          bool hasSubjectType() const { return this->subjectType_ != nullptr;};
          void deleteSubjectType() { this->subjectType_ = nullptr;};
          inline string getSubjectType() const { DARABONBA_PTR_GET_DEFAULT(subjectType_, "") };
          inline ToLe& setSubjectType(string subjectType) { DARABONBA_PTR_SET_VALUE(subjectType_, subjectType) };


        protected:
          shared_ptr<string> ecId_ {};
          shared_ptr<string> leId_ {};
          shared_ptr<string> licenseNumber_ {};
          shared_ptr<int64_t> manageableAccountCount_ {};
          shared_ptr<int64_t> managedAccountCount_ {};
          shared_ptr<vector<ToLe::ManagerList>> managerList_ {};
          shared_ptr<string> nbId_ {};
          shared_ptr<string> subjectName_ {};
          shared_ptr<string> subjectType_ {};
        };

        class ProcessList : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const ProcessList& obj) { 
            DARABONBA_PTR_TO_JSON(AliyunId, aliyunId_);
            DARABONBA_PTR_TO_JSON(AuditTime, auditTime_);
            DARABONBA_PTR_TO_JSON(EcId, ecId_);
            DARABONBA_PTR_TO_JSON(LeId, leId_);
            DARABONBA_PTR_TO_JSON(NbId, nbId_);
            DARABONBA_PTR_TO_JSON(Pk, pk_);
            DARABONBA_PTR_TO_JSON(Remark, remark_);
            DARABONBA_PTR_TO_JSON(Status, status_);
          };
          friend void from_json(const Darabonba::Json& j, ProcessList& obj) { 
            DARABONBA_PTR_FROM_JSON(AliyunId, aliyunId_);
            DARABONBA_PTR_FROM_JSON(AuditTime, auditTime_);
            DARABONBA_PTR_FROM_JSON(EcId, ecId_);
            DARABONBA_PTR_FROM_JSON(LeId, leId_);
            DARABONBA_PTR_FROM_JSON(NbId, nbId_);
            DARABONBA_PTR_FROM_JSON(Pk, pk_);
            DARABONBA_PTR_FROM_JSON(Remark, remark_);
            DARABONBA_PTR_FROM_JSON(Status, status_);
          };
          ProcessList() = default ;
          ProcessList(const ProcessList &) = default ;
          ProcessList(ProcessList &&) = default ;
          ProcessList(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~ProcessList() = default ;
          ProcessList& operator=(const ProcessList &) = default ;
          ProcessList& operator=(ProcessList &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->aliyunId_ == nullptr
        && this->auditTime_ == nullptr && this->ecId_ == nullptr && this->leId_ == nullptr && this->nbId_ == nullptr && this->pk_ == nullptr
        && this->remark_ == nullptr && this->status_ == nullptr; };
          // aliyunId Field Functions 
          bool hasAliyunId() const { return this->aliyunId_ != nullptr;};
          void deleteAliyunId() { this->aliyunId_ = nullptr;};
          inline string getAliyunId() const { DARABONBA_PTR_GET_DEFAULT(aliyunId_, "") };
          inline ProcessList& setAliyunId(string aliyunId) { DARABONBA_PTR_SET_VALUE(aliyunId_, aliyunId) };


          // auditTime Field Functions 
          bool hasAuditTime() const { return this->auditTime_ != nullptr;};
          void deleteAuditTime() { this->auditTime_ = nullptr;};
          inline int64_t getAuditTime() const { DARABONBA_PTR_GET_DEFAULT(auditTime_, 0L) };
          inline ProcessList& setAuditTime(int64_t auditTime) { DARABONBA_PTR_SET_VALUE(auditTime_, auditTime) };


          // ecId Field Functions 
          bool hasEcId() const { return this->ecId_ != nullptr;};
          void deleteEcId() { this->ecId_ = nullptr;};
          inline string getEcId() const { DARABONBA_PTR_GET_DEFAULT(ecId_, "") };
          inline ProcessList& setEcId(string ecId) { DARABONBA_PTR_SET_VALUE(ecId_, ecId) };


          // leId Field Functions 
          bool hasLeId() const { return this->leId_ != nullptr;};
          void deleteLeId() { this->leId_ = nullptr;};
          inline string getLeId() const { DARABONBA_PTR_GET_DEFAULT(leId_, "") };
          inline ProcessList& setLeId(string leId) { DARABONBA_PTR_SET_VALUE(leId_, leId) };


          // nbId Field Functions 
          bool hasNbId() const { return this->nbId_ != nullptr;};
          void deleteNbId() { this->nbId_ = nullptr;};
          inline string getNbId() const { DARABONBA_PTR_GET_DEFAULT(nbId_, "") };
          inline ProcessList& setNbId(string nbId) { DARABONBA_PTR_SET_VALUE(nbId_, nbId) };


          // pk Field Functions 
          bool hasPk() const { return this->pk_ != nullptr;};
          void deletePk() { this->pk_ = nullptr;};
          inline string getPk() const { DARABONBA_PTR_GET_DEFAULT(pk_, "") };
          inline ProcessList& setPk(string pk) { DARABONBA_PTR_SET_VALUE(pk_, pk) };


          // remark Field Functions 
          bool hasRemark() const { return this->remark_ != nullptr;};
          void deleteRemark() { this->remark_ = nullptr;};
          inline string getRemark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
          inline ProcessList& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


          // status Field Functions 
          bool hasStatus() const { return this->status_ != nullptr;};
          void deleteStatus() { this->status_ = nullptr;};
          inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
          inline ProcessList& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        protected:
          shared_ptr<string> aliyunId_ {};
          shared_ptr<int64_t> auditTime_ {};
          shared_ptr<string> ecId_ {};
          shared_ptr<string> leId_ {};
          shared_ptr<string> nbId_ {};
          shared_ptr<string> pk_ {};
          shared_ptr<string> remark_ {};
          shared_ptr<string> status_ {};
        };

        class FromLe : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const FromLe& obj) { 
            DARABONBA_PTR_TO_JSON(EcId, ecId_);
            DARABONBA_PTR_TO_JSON(LeId, leId_);
            DARABONBA_PTR_TO_JSON(LicenseNumber, licenseNumber_);
            DARABONBA_PTR_TO_JSON(ManageableAccountCount, manageableAccountCount_);
            DARABONBA_PTR_TO_JSON(ManagedAccountCount, managedAccountCount_);
            DARABONBA_PTR_TO_JSON(ManagerList, managerList_);
            DARABONBA_PTR_TO_JSON(NbId, nbId_);
            DARABONBA_PTR_TO_JSON(SubjectName, subjectName_);
            DARABONBA_PTR_TO_JSON(SubjectType, subjectType_);
          };
          friend void from_json(const Darabonba::Json& j, FromLe& obj) { 
            DARABONBA_PTR_FROM_JSON(EcId, ecId_);
            DARABONBA_PTR_FROM_JSON(LeId, leId_);
            DARABONBA_PTR_FROM_JSON(LicenseNumber, licenseNumber_);
            DARABONBA_PTR_FROM_JSON(ManageableAccountCount, manageableAccountCount_);
            DARABONBA_PTR_FROM_JSON(ManagedAccountCount, managedAccountCount_);
            DARABONBA_PTR_FROM_JSON(ManagerList, managerList_);
            DARABONBA_PTR_FROM_JSON(NbId, nbId_);
            DARABONBA_PTR_FROM_JSON(SubjectName, subjectName_);
            DARABONBA_PTR_FROM_JSON(SubjectType, subjectType_);
          };
          FromLe() = default ;
          FromLe(const FromLe &) = default ;
          FromLe(FromLe &&) = default ;
          FromLe(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~FromLe() = default ;
          FromLe& operator=(const FromLe &) = default ;
          FromLe& operator=(FromLe &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class ManagerList : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const ManagerList& obj) { 
              DARABONBA_PTR_TO_JSON(AliyunId, aliyunId_);
              DARABONBA_PTR_TO_JSON(Pk, pk_);
              DARABONBA_PTR_TO_JSON(PkEncoded, pkEncoded_);
              DARABONBA_PTR_TO_JSON(Role, role_);
            };
            friend void from_json(const Darabonba::Json& j, ManagerList& obj) { 
              DARABONBA_PTR_FROM_JSON(AliyunId, aliyunId_);
              DARABONBA_PTR_FROM_JSON(Pk, pk_);
              DARABONBA_PTR_FROM_JSON(PkEncoded, pkEncoded_);
              DARABONBA_PTR_FROM_JSON(Role, role_);
            };
            ManagerList() = default ;
            ManagerList(const ManagerList &) = default ;
            ManagerList(ManagerList &&) = default ;
            ManagerList(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~ManagerList() = default ;
            ManagerList& operator=(const ManagerList &) = default ;
            ManagerList& operator=(ManagerList &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->aliyunId_ == nullptr
        && this->pk_ == nullptr && this->pkEncoded_ == nullptr && this->role_ == nullptr; };
            // aliyunId Field Functions 
            bool hasAliyunId() const { return this->aliyunId_ != nullptr;};
            void deleteAliyunId() { this->aliyunId_ = nullptr;};
            inline string getAliyunId() const { DARABONBA_PTR_GET_DEFAULT(aliyunId_, "") };
            inline ManagerList& setAliyunId(string aliyunId) { DARABONBA_PTR_SET_VALUE(aliyunId_, aliyunId) };


            // pk Field Functions 
            bool hasPk() const { return this->pk_ != nullptr;};
            void deletePk() { this->pk_ = nullptr;};
            inline string getPk() const { DARABONBA_PTR_GET_DEFAULT(pk_, "") };
            inline ManagerList& setPk(string pk) { DARABONBA_PTR_SET_VALUE(pk_, pk) };


            // pkEncoded Field Functions 
            bool hasPkEncoded() const { return this->pkEncoded_ != nullptr;};
            void deletePkEncoded() { this->pkEncoded_ = nullptr;};
            inline string getPkEncoded() const { DARABONBA_PTR_GET_DEFAULT(pkEncoded_, "") };
            inline ManagerList& setPkEncoded(string pkEncoded) { DARABONBA_PTR_SET_VALUE(pkEncoded_, pkEncoded) };


            // role Field Functions 
            bool hasRole() const { return this->role_ != nullptr;};
            void deleteRole() { this->role_ = nullptr;};
            inline string getRole() const { DARABONBA_PTR_GET_DEFAULT(role_, "") };
            inline ManagerList& setRole(string role) { DARABONBA_PTR_SET_VALUE(role_, role) };


          protected:
            shared_ptr<string> aliyunId_ {};
            shared_ptr<string> pk_ {};
            shared_ptr<string> pkEncoded_ {};
            shared_ptr<string> role_ {};
          };

          virtual bool empty() const override { return this->ecId_ == nullptr
        && this->leId_ == nullptr && this->licenseNumber_ == nullptr && this->manageableAccountCount_ == nullptr && this->managedAccountCount_ == nullptr && this->managerList_ == nullptr
        && this->nbId_ == nullptr && this->subjectName_ == nullptr && this->subjectType_ == nullptr; };
          // ecId Field Functions 
          bool hasEcId() const { return this->ecId_ != nullptr;};
          void deleteEcId() { this->ecId_ = nullptr;};
          inline string getEcId() const { DARABONBA_PTR_GET_DEFAULT(ecId_, "") };
          inline FromLe& setEcId(string ecId) { DARABONBA_PTR_SET_VALUE(ecId_, ecId) };


          // leId Field Functions 
          bool hasLeId() const { return this->leId_ != nullptr;};
          void deleteLeId() { this->leId_ = nullptr;};
          inline string getLeId() const { DARABONBA_PTR_GET_DEFAULT(leId_, "") };
          inline FromLe& setLeId(string leId) { DARABONBA_PTR_SET_VALUE(leId_, leId) };


          // licenseNumber Field Functions 
          bool hasLicenseNumber() const { return this->licenseNumber_ != nullptr;};
          void deleteLicenseNumber() { this->licenseNumber_ = nullptr;};
          inline string getLicenseNumber() const { DARABONBA_PTR_GET_DEFAULT(licenseNumber_, "") };
          inline FromLe& setLicenseNumber(string licenseNumber) { DARABONBA_PTR_SET_VALUE(licenseNumber_, licenseNumber) };


          // manageableAccountCount Field Functions 
          bool hasManageableAccountCount() const { return this->manageableAccountCount_ != nullptr;};
          void deleteManageableAccountCount() { this->manageableAccountCount_ = nullptr;};
          inline int64_t getManageableAccountCount() const { DARABONBA_PTR_GET_DEFAULT(manageableAccountCount_, 0L) };
          inline FromLe& setManageableAccountCount(int64_t manageableAccountCount) { DARABONBA_PTR_SET_VALUE(manageableAccountCount_, manageableAccountCount) };


          // managedAccountCount Field Functions 
          bool hasManagedAccountCount() const { return this->managedAccountCount_ != nullptr;};
          void deleteManagedAccountCount() { this->managedAccountCount_ = nullptr;};
          inline int64_t getManagedAccountCount() const { DARABONBA_PTR_GET_DEFAULT(managedAccountCount_, 0L) };
          inline FromLe& setManagedAccountCount(int64_t managedAccountCount) { DARABONBA_PTR_SET_VALUE(managedAccountCount_, managedAccountCount) };


          // managerList Field Functions 
          bool hasManagerList() const { return this->managerList_ != nullptr;};
          void deleteManagerList() { this->managerList_ = nullptr;};
          inline const vector<FromLe::ManagerList> & getManagerList() const { DARABONBA_PTR_GET_CONST(managerList_, vector<FromLe::ManagerList>) };
          inline vector<FromLe::ManagerList> getManagerList() { DARABONBA_PTR_GET(managerList_, vector<FromLe::ManagerList>) };
          inline FromLe& setManagerList(const vector<FromLe::ManagerList> & managerList) { DARABONBA_PTR_SET_VALUE(managerList_, managerList) };
          inline FromLe& setManagerList(vector<FromLe::ManagerList> && managerList) { DARABONBA_PTR_SET_RVALUE(managerList_, managerList) };


          // nbId Field Functions 
          bool hasNbId() const { return this->nbId_ != nullptr;};
          void deleteNbId() { this->nbId_ = nullptr;};
          inline string getNbId() const { DARABONBA_PTR_GET_DEFAULT(nbId_, "") };
          inline FromLe& setNbId(string nbId) { DARABONBA_PTR_SET_VALUE(nbId_, nbId) };


          // subjectName Field Functions 
          bool hasSubjectName() const { return this->subjectName_ != nullptr;};
          void deleteSubjectName() { this->subjectName_ = nullptr;};
          inline string getSubjectName() const { DARABONBA_PTR_GET_DEFAULT(subjectName_, "") };
          inline FromLe& setSubjectName(string subjectName) { DARABONBA_PTR_SET_VALUE(subjectName_, subjectName) };


          // subjectType Field Functions 
          bool hasSubjectType() const { return this->subjectType_ != nullptr;};
          void deleteSubjectType() { this->subjectType_ = nullptr;};
          inline string getSubjectType() const { DARABONBA_PTR_GET_DEFAULT(subjectType_, "") };
          inline FromLe& setSubjectType(string subjectType) { DARABONBA_PTR_SET_VALUE(subjectType_, subjectType) };


        protected:
          shared_ptr<string> ecId_ {};
          shared_ptr<string> leId_ {};
          shared_ptr<string> licenseNumber_ {};
          shared_ptr<int64_t> manageableAccountCount_ {};
          shared_ptr<int64_t> managedAccountCount_ {};
          shared_ptr<vector<FromLe::ManagerList>> managerList_ {};
          shared_ptr<string> nbId_ {};
          shared_ptr<string> subjectName_ {};
          shared_ptr<string> subjectType_ {};
        };

        virtual bool empty() const override { return this->aliyunId_ == nullptr
        && this->applicantAliyunId_ == nullptr && this->applicantPk_ == nullptr && this->applyRemark_ == nullptr && this->applyTime_ == nullptr && this->auditorAliyunId_ == nullptr
        && this->auditorPk_ == nullptr && this->auditorStatus_ == nullptr && this->canceledTime_ == nullptr && this->closed_ == nullptr && this->currAuditor_ == nullptr
        && this->fromLe_ == nullptr && this->pk_ == nullptr && this->processList_ == nullptr && this->status_ == nullptr && this->timeoutTime_ == nullptr
        && this->toLe_ == nullptr && this->toLeAudit_ == nullptr && this->todoId_ == nullptr && this->todoType_ == nullptr && this->todoView_ == nullptr; };
        // aliyunId Field Functions 
        bool hasAliyunId() const { return this->aliyunId_ != nullptr;};
        void deleteAliyunId() { this->aliyunId_ = nullptr;};
        inline string getAliyunId() const { DARABONBA_PTR_GET_DEFAULT(aliyunId_, "") };
        inline TodoList& setAliyunId(string aliyunId) { DARABONBA_PTR_SET_VALUE(aliyunId_, aliyunId) };


        // applicantAliyunId Field Functions 
        bool hasApplicantAliyunId() const { return this->applicantAliyunId_ != nullptr;};
        void deleteApplicantAliyunId() { this->applicantAliyunId_ = nullptr;};
        inline string getApplicantAliyunId() const { DARABONBA_PTR_GET_DEFAULT(applicantAliyunId_, "") };
        inline TodoList& setApplicantAliyunId(string applicantAliyunId) { DARABONBA_PTR_SET_VALUE(applicantAliyunId_, applicantAliyunId) };


        // applicantPk Field Functions 
        bool hasApplicantPk() const { return this->applicantPk_ != nullptr;};
        void deleteApplicantPk() { this->applicantPk_ = nullptr;};
        inline string getApplicantPk() const { DARABONBA_PTR_GET_DEFAULT(applicantPk_, "") };
        inline TodoList& setApplicantPk(string applicantPk) { DARABONBA_PTR_SET_VALUE(applicantPk_, applicantPk) };


        // applyRemark Field Functions 
        bool hasApplyRemark() const { return this->applyRemark_ != nullptr;};
        void deleteApplyRemark() { this->applyRemark_ = nullptr;};
        inline string getApplyRemark() const { DARABONBA_PTR_GET_DEFAULT(applyRemark_, "") };
        inline TodoList& setApplyRemark(string applyRemark) { DARABONBA_PTR_SET_VALUE(applyRemark_, applyRemark) };


        // applyTime Field Functions 
        bool hasApplyTime() const { return this->applyTime_ != nullptr;};
        void deleteApplyTime() { this->applyTime_ = nullptr;};
        inline int64_t getApplyTime() const { DARABONBA_PTR_GET_DEFAULT(applyTime_, 0L) };
        inline TodoList& setApplyTime(int64_t applyTime) { DARABONBA_PTR_SET_VALUE(applyTime_, applyTime) };


        // auditorAliyunId Field Functions 
        bool hasAuditorAliyunId() const { return this->auditorAliyunId_ != nullptr;};
        void deleteAuditorAliyunId() { this->auditorAliyunId_ = nullptr;};
        inline string getAuditorAliyunId() const { DARABONBA_PTR_GET_DEFAULT(auditorAliyunId_, "") };
        inline TodoList& setAuditorAliyunId(string auditorAliyunId) { DARABONBA_PTR_SET_VALUE(auditorAliyunId_, auditorAliyunId) };


        // auditorPk Field Functions 
        bool hasAuditorPk() const { return this->auditorPk_ != nullptr;};
        void deleteAuditorPk() { this->auditorPk_ = nullptr;};
        inline string getAuditorPk() const { DARABONBA_PTR_GET_DEFAULT(auditorPk_, "") };
        inline TodoList& setAuditorPk(string auditorPk) { DARABONBA_PTR_SET_VALUE(auditorPk_, auditorPk) };


        // auditorStatus Field Functions 
        bool hasAuditorStatus() const { return this->auditorStatus_ != nullptr;};
        void deleteAuditorStatus() { this->auditorStatus_ = nullptr;};
        inline string getAuditorStatus() const { DARABONBA_PTR_GET_DEFAULT(auditorStatus_, "") };
        inline TodoList& setAuditorStatus(string auditorStatus) { DARABONBA_PTR_SET_VALUE(auditorStatus_, auditorStatus) };


        // canceledTime Field Functions 
        bool hasCanceledTime() const { return this->canceledTime_ != nullptr;};
        void deleteCanceledTime() { this->canceledTime_ = nullptr;};
        inline int64_t getCanceledTime() const { DARABONBA_PTR_GET_DEFAULT(canceledTime_, 0L) };
        inline TodoList& setCanceledTime(int64_t canceledTime) { DARABONBA_PTR_SET_VALUE(canceledTime_, canceledTime) };


        // closed Field Functions 
        bool hasClosed() const { return this->closed_ != nullptr;};
        void deleteClosed() { this->closed_ = nullptr;};
        inline bool getClosed() const { DARABONBA_PTR_GET_DEFAULT(closed_, false) };
        inline TodoList& setClosed(bool closed) { DARABONBA_PTR_SET_VALUE(closed_, closed) };


        // currAuditor Field Functions 
        bool hasCurrAuditor() const { return this->currAuditor_ != nullptr;};
        void deleteCurrAuditor() { this->currAuditor_ = nullptr;};
        inline bool getCurrAuditor() const { DARABONBA_PTR_GET_DEFAULT(currAuditor_, false) };
        inline TodoList& setCurrAuditor(bool currAuditor) { DARABONBA_PTR_SET_VALUE(currAuditor_, currAuditor) };


        // fromLe Field Functions 
        bool hasFromLe() const { return this->fromLe_ != nullptr;};
        void deleteFromLe() { this->fromLe_ = nullptr;};
        inline const TodoList::FromLe & getFromLe() const { DARABONBA_PTR_GET_CONST(fromLe_, TodoList::FromLe) };
        inline TodoList::FromLe getFromLe() { DARABONBA_PTR_GET(fromLe_, TodoList::FromLe) };
        inline TodoList& setFromLe(const TodoList::FromLe & fromLe) { DARABONBA_PTR_SET_VALUE(fromLe_, fromLe) };
        inline TodoList& setFromLe(TodoList::FromLe && fromLe) { DARABONBA_PTR_SET_RVALUE(fromLe_, fromLe) };


        // pk Field Functions 
        bool hasPk() const { return this->pk_ != nullptr;};
        void deletePk() { this->pk_ = nullptr;};
        inline string getPk() const { DARABONBA_PTR_GET_DEFAULT(pk_, "") };
        inline TodoList& setPk(string pk) { DARABONBA_PTR_SET_VALUE(pk_, pk) };


        // processList Field Functions 
        bool hasProcessList() const { return this->processList_ != nullptr;};
        void deleteProcessList() { this->processList_ = nullptr;};
        inline const vector<TodoList::ProcessList> & getProcessList() const { DARABONBA_PTR_GET_CONST(processList_, vector<TodoList::ProcessList>) };
        inline vector<TodoList::ProcessList> getProcessList() { DARABONBA_PTR_GET(processList_, vector<TodoList::ProcessList>) };
        inline TodoList& setProcessList(const vector<TodoList::ProcessList> & processList) { DARABONBA_PTR_SET_VALUE(processList_, processList) };
        inline TodoList& setProcessList(vector<TodoList::ProcessList> && processList) { DARABONBA_PTR_SET_RVALUE(processList_, processList) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline TodoList& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // timeoutTime Field Functions 
        bool hasTimeoutTime() const { return this->timeoutTime_ != nullptr;};
        void deleteTimeoutTime() { this->timeoutTime_ = nullptr;};
        inline int64_t getTimeoutTime() const { DARABONBA_PTR_GET_DEFAULT(timeoutTime_, 0L) };
        inline TodoList& setTimeoutTime(int64_t timeoutTime) { DARABONBA_PTR_SET_VALUE(timeoutTime_, timeoutTime) };


        // toLe Field Functions 
        bool hasToLe() const { return this->toLe_ != nullptr;};
        void deleteToLe() { this->toLe_ = nullptr;};
        inline const TodoList::ToLe & getToLe() const { DARABONBA_PTR_GET_CONST(toLe_, TodoList::ToLe) };
        inline TodoList::ToLe getToLe() { DARABONBA_PTR_GET(toLe_, TodoList::ToLe) };
        inline TodoList& setToLe(const TodoList::ToLe & toLe) { DARABONBA_PTR_SET_VALUE(toLe_, toLe) };
        inline TodoList& setToLe(TodoList::ToLe && toLe) { DARABONBA_PTR_SET_RVALUE(toLe_, toLe) };


        // toLeAudit Field Functions 
        bool hasToLeAudit() const { return this->toLeAudit_ != nullptr;};
        void deleteToLeAudit() { this->toLeAudit_ = nullptr;};
        inline bool getToLeAudit() const { DARABONBA_PTR_GET_DEFAULT(toLeAudit_, false) };
        inline TodoList& setToLeAudit(bool toLeAudit) { DARABONBA_PTR_SET_VALUE(toLeAudit_, toLeAudit) };


        // todoId Field Functions 
        bool hasTodoId() const { return this->todoId_ != nullptr;};
        void deleteTodoId() { this->todoId_ = nullptr;};
        inline string getTodoId() const { DARABONBA_PTR_GET_DEFAULT(todoId_, "") };
        inline TodoList& setTodoId(string todoId) { DARABONBA_PTR_SET_VALUE(todoId_, todoId) };


        // todoType Field Functions 
        bool hasTodoType() const { return this->todoType_ != nullptr;};
        void deleteTodoType() { this->todoType_ = nullptr;};
        inline string getTodoType() const { DARABONBA_PTR_GET_DEFAULT(todoType_, "") };
        inline TodoList& setTodoType(string todoType) { DARABONBA_PTR_SET_VALUE(todoType_, todoType) };


        // todoView Field Functions 
        bool hasTodoView() const { return this->todoView_ != nullptr;};
        void deleteTodoView() { this->todoView_ = nullptr;};
        inline string getTodoView() const { DARABONBA_PTR_GET_DEFAULT(todoView_, "") };
        inline TodoList& setTodoView(string todoView) { DARABONBA_PTR_SET_VALUE(todoView_, todoView) };


      protected:
        shared_ptr<string> aliyunId_ {};
        shared_ptr<string> applicantAliyunId_ {};
        shared_ptr<string> applicantPk_ {};
        shared_ptr<string> applyRemark_ {};
        shared_ptr<int64_t> applyTime_ {};
        shared_ptr<string> auditorAliyunId_ {};
        shared_ptr<string> auditorPk_ {};
        shared_ptr<string> auditorStatus_ {};
        shared_ptr<int64_t> canceledTime_ {};
        shared_ptr<bool> closed_ {};
        shared_ptr<bool> currAuditor_ {};
        shared_ptr<TodoList::FromLe> fromLe_ {};
        shared_ptr<string> pk_ {};
        shared_ptr<vector<TodoList::ProcessList>> processList_ {};
        shared_ptr<string> status_ {};
        shared_ptr<int64_t> timeoutTime_ {};
        shared_ptr<TodoList::ToLe> toLe_ {};
        shared_ptr<bool> toLeAudit_ {};
        shared_ptr<string> todoId_ {};
        shared_ptr<string> todoType_ {};
        shared_ptr<string> todoView_ {};
      };

      virtual bool empty() const override { return this->count_ == nullptr
        && this->todoList_ == nullptr; };
      // count Field Functions 
      bool hasCount() const { return this->count_ != nullptr;};
      void deleteCount() { this->count_ = nullptr;};
      inline int32_t getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, 0) };
      inline Data& setCount(int32_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


      // todoList Field Functions 
      bool hasTodoList() const { return this->todoList_ != nullptr;};
      void deleteTodoList() { this->todoList_ = nullptr;};
      inline const vector<Data::TodoList> & getTodoList() const { DARABONBA_PTR_GET_CONST(todoList_, vector<Data::TodoList>) };
      inline vector<Data::TodoList> getTodoList() { DARABONBA_PTR_GET(todoList_, vector<Data::TodoList>) };
      inline Data& setTodoList(const vector<Data::TodoList> & todoList) { DARABONBA_PTR_SET_VALUE(todoList_, todoList) };
      inline Data& setTodoList(vector<Data::TodoList> && todoList) { DARABONBA_PTR_SET_RVALUE(todoList_, todoList) };


    protected:
      shared_ptr<int32_t> count_ {};
      shared_ptr<vector<Data::TodoList>> todoList_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->maxResults_ == nullptr && this->message_ == nullptr && this->nextToken_ == nullptr && this->requestId_ == nullptr
        && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline EnterpriseTodoQueryAccountTodoListByApplicantResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const EnterpriseTodoQueryAccountTodoListByApplicantResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, EnterpriseTodoQueryAccountTodoListByApplicantResponseBody::Data) };
    inline EnterpriseTodoQueryAccountTodoListByApplicantResponseBody::Data getData() { DARABONBA_PTR_GET(data_, EnterpriseTodoQueryAccountTodoListByApplicantResponseBody::Data) };
    inline EnterpriseTodoQueryAccountTodoListByApplicantResponseBody& setData(const EnterpriseTodoQueryAccountTodoListByApplicantResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline EnterpriseTodoQueryAccountTodoListByApplicantResponseBody& setData(EnterpriseTodoQueryAccountTodoListByApplicantResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline EnterpriseTodoQueryAccountTodoListByApplicantResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline EnterpriseTodoQueryAccountTodoListByApplicantResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline EnterpriseTodoQueryAccountTodoListByApplicantResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline EnterpriseTodoQueryAccountTodoListByApplicantResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline EnterpriseTodoQueryAccountTodoListByApplicantResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<EnterpriseTodoQueryAccountTodoListByApplicantResponseBody::Data> data_ {};
    shared_ptr<int32_t> maxResults_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> nextToken_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AccountCenter20241209
#endif
