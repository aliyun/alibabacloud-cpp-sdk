// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETINSTANCESBYIDLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETINSTANCESBYIDLISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class GetInstancesByIdListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetInstancesByIdListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(result, result_);
      DARABONBA_PTR_TO_JSON(vendorRequestId, vendorRequestId_);
      DARABONBA_PTR_TO_JSON(vendorType, vendorType_);
    };
    friend void from_json(const Darabonba::Json& j, GetInstancesByIdListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(result, result_);
      DARABONBA_PTR_FROM_JSON(vendorRequestId, vendorRequestId_);
      DARABONBA_PTR_FROM_JSON(vendorType, vendorType_);
    };
    GetInstancesByIdListResponseBody() = default ;
    GetInstancesByIdListResponseBody(const GetInstancesByIdListResponseBody &) = default ;
    GetInstancesByIdListResponseBody(GetInstancesByIdListResponseBody &&) = default ;
    GetInstancesByIdListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetInstancesByIdListResponseBody() = default ;
    GetInstancesByIdListResponseBody& operator=(const GetInstancesByIdListResponseBody &) = default ;
    GetInstancesByIdListResponseBody& operator=(GetInstancesByIdListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Result : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Result& obj) { 
        DARABONBA_PTR_TO_JSON(ActionExecutor, actionExecutor_);
        DARABONBA_PTR_TO_JSON(ApprovedResult, approvedResult_);
        DARABONBA_ANY_TO_JSON(Data, data_);
        DARABONBA_PTR_TO_JSON(FormUuid, formUuid_);
        DARABONBA_PTR_TO_JSON(InstanceStatus, instanceStatus_);
        DARABONBA_PTR_TO_JSON(Originator, originator_);
        DARABONBA_PTR_TO_JSON(ProcessCode, processCode_);
        DARABONBA_PTR_TO_JSON(ProcessInstanceId, processInstanceId_);
        DARABONBA_PTR_TO_JSON(Title, title_);
      };
      friend void from_json(const Darabonba::Json& j, Result& obj) { 
        DARABONBA_PTR_FROM_JSON(ActionExecutor, actionExecutor_);
        DARABONBA_PTR_FROM_JSON(ApprovedResult, approvedResult_);
        DARABONBA_ANY_FROM_JSON(Data, data_);
        DARABONBA_PTR_FROM_JSON(FormUuid, formUuid_);
        DARABONBA_PTR_FROM_JSON(InstanceStatus, instanceStatus_);
        DARABONBA_PTR_FROM_JSON(Originator, originator_);
        DARABONBA_PTR_FROM_JSON(ProcessCode, processCode_);
        DARABONBA_PTR_FROM_JSON(ProcessInstanceId, processInstanceId_);
        DARABONBA_PTR_FROM_JSON(Title, title_);
      };
      Result() = default ;
      Result(const Result &) = default ;
      Result(Result &&) = default ;
      Result(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Result() = default ;
      Result& operator=(const Result &) = default ;
      Result& operator=(Result &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Originator : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Originator& obj) { 
          DARABONBA_PTR_TO_JSON(DepartmentName, departmentName_);
          DARABONBA_PTR_TO_JSON(Email, email_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(UserId, userId_);
        };
        friend void from_json(const Darabonba::Json& j, Originator& obj) { 
          DARABONBA_PTR_FROM_JSON(DepartmentName, departmentName_);
          DARABONBA_PTR_FROM_JSON(Email, email_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(UserId, userId_);
        };
        Originator() = default ;
        Originator(const Originator &) = default ;
        Originator(Originator &&) = default ;
        Originator(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Originator() = default ;
        Originator& operator=(const Originator &) = default ;
        Originator& operator=(Originator &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Name : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Name& obj) { 
            DARABONBA_PTR_TO_JSON(NameInChinese, nameInChinese_);
            DARABONBA_PTR_TO_JSON(NameInEnglish, nameInEnglish_);
            DARABONBA_PTR_TO_JSON(Type, type_);
          };
          friend void from_json(const Darabonba::Json& j, Name& obj) { 
            DARABONBA_PTR_FROM_JSON(NameInChinese, nameInChinese_);
            DARABONBA_PTR_FROM_JSON(NameInEnglish, nameInEnglish_);
            DARABONBA_PTR_FROM_JSON(Type, type_);
          };
          Name() = default ;
          Name(const Name &) = default ;
          Name(Name &&) = default ;
          Name(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Name() = default ;
          Name& operator=(const Name &) = default ;
          Name& operator=(Name &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->nameInChinese_ == nullptr
        && this->nameInEnglish_ == nullptr && this->type_ == nullptr; };
          // nameInChinese Field Functions 
          bool hasNameInChinese() const { return this->nameInChinese_ != nullptr;};
          void deleteNameInChinese() { this->nameInChinese_ = nullptr;};
          inline string getNameInChinese() const { DARABONBA_PTR_GET_DEFAULT(nameInChinese_, "") };
          inline Name& setNameInChinese(string nameInChinese) { DARABONBA_PTR_SET_VALUE(nameInChinese_, nameInChinese) };


          // nameInEnglish Field Functions 
          bool hasNameInEnglish() const { return this->nameInEnglish_ != nullptr;};
          void deleteNameInEnglish() { this->nameInEnglish_ = nullptr;};
          inline string getNameInEnglish() const { DARABONBA_PTR_GET_DEFAULT(nameInEnglish_, "") };
          inline Name& setNameInEnglish(string nameInEnglish) { DARABONBA_PTR_SET_VALUE(nameInEnglish_, nameInEnglish) };


          // type Field Functions 
          bool hasType() const { return this->type_ != nullptr;};
          void deleteType() { this->type_ = nullptr;};
          inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
          inline Name& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


        protected:
          shared_ptr<string> nameInChinese_ {};
          shared_ptr<string> nameInEnglish_ {};
          shared_ptr<string> type_ {};
        };

        virtual bool empty() const override { return this->departmentName_ == nullptr
        && this->email_ == nullptr && this->name_ == nullptr && this->userId_ == nullptr; };
        // departmentName Field Functions 
        bool hasDepartmentName() const { return this->departmentName_ != nullptr;};
        void deleteDepartmentName() { this->departmentName_ = nullptr;};
        inline string getDepartmentName() const { DARABONBA_PTR_GET_DEFAULT(departmentName_, "") };
        inline Originator& setDepartmentName(string departmentName) { DARABONBA_PTR_SET_VALUE(departmentName_, departmentName) };


        // email Field Functions 
        bool hasEmail() const { return this->email_ != nullptr;};
        void deleteEmail() { this->email_ = nullptr;};
        inline string getEmail() const { DARABONBA_PTR_GET_DEFAULT(email_, "") };
        inline Originator& setEmail(string email) { DARABONBA_PTR_SET_VALUE(email_, email) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline const Originator::Name & getName() const { DARABONBA_PTR_GET_CONST(name_, Originator::Name) };
        inline Originator::Name getName() { DARABONBA_PTR_GET(name_, Originator::Name) };
        inline Originator& setName(const Originator::Name & name) { DARABONBA_PTR_SET_VALUE(name_, name) };
        inline Originator& setName(Originator::Name && name) { DARABONBA_PTR_SET_RVALUE(name_, name) };


        // userId Field Functions 
        bool hasUserId() const { return this->userId_ != nullptr;};
        void deleteUserId() { this->userId_ = nullptr;};
        inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
        inline Originator& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


      protected:
        shared_ptr<string> departmentName_ {};
        shared_ptr<string> email_ {};
        shared_ptr<Originator::Name> name_ {};
        shared_ptr<string> userId_ {};
      };

      class ActionExecutor : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ActionExecutor& obj) { 
          DARABONBA_PTR_TO_JSON(DepartmentName, departmentName_);
          DARABONBA_PTR_TO_JSON(Email, email_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(UserId, userId_);
        };
        friend void from_json(const Darabonba::Json& j, ActionExecutor& obj) { 
          DARABONBA_PTR_FROM_JSON(DepartmentName, departmentName_);
          DARABONBA_PTR_FROM_JSON(Email, email_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(UserId, userId_);
        };
        ActionExecutor() = default ;
        ActionExecutor(const ActionExecutor &) = default ;
        ActionExecutor(ActionExecutor &&) = default ;
        ActionExecutor(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ActionExecutor() = default ;
        ActionExecutor& operator=(const ActionExecutor &) = default ;
        ActionExecutor& operator=(ActionExecutor &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Name : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Name& obj) { 
            DARABONBA_PTR_TO_JSON(NameInChinese, nameInChinese_);
            DARABONBA_PTR_TO_JSON(NameInEnglish, nameInEnglish_);
            DARABONBA_PTR_TO_JSON(Type, type_);
          };
          friend void from_json(const Darabonba::Json& j, Name& obj) { 
            DARABONBA_PTR_FROM_JSON(NameInChinese, nameInChinese_);
            DARABONBA_PTR_FROM_JSON(NameInEnglish, nameInEnglish_);
            DARABONBA_PTR_FROM_JSON(Type, type_);
          };
          Name() = default ;
          Name(const Name &) = default ;
          Name(Name &&) = default ;
          Name(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Name() = default ;
          Name& operator=(const Name &) = default ;
          Name& operator=(Name &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->nameInChinese_ == nullptr
        && this->nameInEnglish_ == nullptr && this->type_ == nullptr; };
          // nameInChinese Field Functions 
          bool hasNameInChinese() const { return this->nameInChinese_ != nullptr;};
          void deleteNameInChinese() { this->nameInChinese_ = nullptr;};
          inline string getNameInChinese() const { DARABONBA_PTR_GET_DEFAULT(nameInChinese_, "") };
          inline Name& setNameInChinese(string nameInChinese) { DARABONBA_PTR_SET_VALUE(nameInChinese_, nameInChinese) };


          // nameInEnglish Field Functions 
          bool hasNameInEnglish() const { return this->nameInEnglish_ != nullptr;};
          void deleteNameInEnglish() { this->nameInEnglish_ = nullptr;};
          inline string getNameInEnglish() const { DARABONBA_PTR_GET_DEFAULT(nameInEnglish_, "") };
          inline Name& setNameInEnglish(string nameInEnglish) { DARABONBA_PTR_SET_VALUE(nameInEnglish_, nameInEnglish) };


          // type Field Functions 
          bool hasType() const { return this->type_ != nullptr;};
          void deleteType() { this->type_ = nullptr;};
          inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
          inline Name& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


        protected:
          shared_ptr<string> nameInChinese_ {};
          shared_ptr<string> nameInEnglish_ {};
          shared_ptr<string> type_ {};
        };

        virtual bool empty() const override { return this->departmentName_ == nullptr
        && this->email_ == nullptr && this->name_ == nullptr && this->userId_ == nullptr; };
        // departmentName Field Functions 
        bool hasDepartmentName() const { return this->departmentName_ != nullptr;};
        void deleteDepartmentName() { this->departmentName_ = nullptr;};
        inline string getDepartmentName() const { DARABONBA_PTR_GET_DEFAULT(departmentName_, "") };
        inline ActionExecutor& setDepartmentName(string departmentName) { DARABONBA_PTR_SET_VALUE(departmentName_, departmentName) };


        // email Field Functions 
        bool hasEmail() const { return this->email_ != nullptr;};
        void deleteEmail() { this->email_ = nullptr;};
        inline string getEmail() const { DARABONBA_PTR_GET_DEFAULT(email_, "") };
        inline ActionExecutor& setEmail(string email) { DARABONBA_PTR_SET_VALUE(email_, email) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline const ActionExecutor::Name & getName() const { DARABONBA_PTR_GET_CONST(name_, ActionExecutor::Name) };
        inline ActionExecutor::Name getName() { DARABONBA_PTR_GET(name_, ActionExecutor::Name) };
        inline ActionExecutor& setName(const ActionExecutor::Name & name) { DARABONBA_PTR_SET_VALUE(name_, name) };
        inline ActionExecutor& setName(ActionExecutor::Name && name) { DARABONBA_PTR_SET_RVALUE(name_, name) };


        // userId Field Functions 
        bool hasUserId() const { return this->userId_ != nullptr;};
        void deleteUserId() { this->userId_ = nullptr;};
        inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
        inline ActionExecutor& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


      protected:
        shared_ptr<string> departmentName_ {};
        shared_ptr<string> email_ {};
        shared_ptr<ActionExecutor::Name> name_ {};
        shared_ptr<string> userId_ {};
      };

      virtual bool empty() const override { return this->actionExecutor_ == nullptr
        && this->approvedResult_ == nullptr && this->data_ == nullptr && this->formUuid_ == nullptr && this->instanceStatus_ == nullptr && this->originator_ == nullptr
        && this->processCode_ == nullptr && this->processInstanceId_ == nullptr && this->title_ == nullptr; };
      // actionExecutor Field Functions 
      bool hasActionExecutor() const { return this->actionExecutor_ != nullptr;};
      void deleteActionExecutor() { this->actionExecutor_ = nullptr;};
      inline const vector<Result::ActionExecutor> & getActionExecutor() const { DARABONBA_PTR_GET_CONST(actionExecutor_, vector<Result::ActionExecutor>) };
      inline vector<Result::ActionExecutor> getActionExecutor() { DARABONBA_PTR_GET(actionExecutor_, vector<Result::ActionExecutor>) };
      inline Result& setActionExecutor(const vector<Result::ActionExecutor> & actionExecutor) { DARABONBA_PTR_SET_VALUE(actionExecutor_, actionExecutor) };
      inline Result& setActionExecutor(vector<Result::ActionExecutor> && actionExecutor) { DARABONBA_PTR_SET_RVALUE(actionExecutor_, actionExecutor) };


      // approvedResult Field Functions 
      bool hasApprovedResult() const { return this->approvedResult_ != nullptr;};
      void deleteApprovedResult() { this->approvedResult_ = nullptr;};
      inline string getApprovedResult() const { DARABONBA_PTR_GET_DEFAULT(approvedResult_, "") };
      inline Result& setApprovedResult(string approvedResult) { DARABONBA_PTR_SET_VALUE(approvedResult_, approvedResult) };


      // data Field Functions 
      bool hasData() const { return this->data_ != nullptr;};
      void deleteData() { this->data_ = nullptr;};
      inline       const Darabonba::Json & getData() const { DARABONBA_GET(data_) };
      Darabonba::Json & getData() { DARABONBA_GET(data_) };
      inline Result& setData(const Darabonba::Json & data) { DARABONBA_SET_VALUE(data_, data) };
      inline Result& setData(Darabonba::Json && data) { DARABONBA_SET_RVALUE(data_, data) };


      // formUuid Field Functions 
      bool hasFormUuid() const { return this->formUuid_ != nullptr;};
      void deleteFormUuid() { this->formUuid_ = nullptr;};
      inline string getFormUuid() const { DARABONBA_PTR_GET_DEFAULT(formUuid_, "") };
      inline Result& setFormUuid(string formUuid) { DARABONBA_PTR_SET_VALUE(formUuid_, formUuid) };


      // instanceStatus Field Functions 
      bool hasInstanceStatus() const { return this->instanceStatus_ != nullptr;};
      void deleteInstanceStatus() { this->instanceStatus_ = nullptr;};
      inline string getInstanceStatus() const { DARABONBA_PTR_GET_DEFAULT(instanceStatus_, "") };
      inline Result& setInstanceStatus(string instanceStatus) { DARABONBA_PTR_SET_VALUE(instanceStatus_, instanceStatus) };


      // originator Field Functions 
      bool hasOriginator() const { return this->originator_ != nullptr;};
      void deleteOriginator() { this->originator_ = nullptr;};
      inline const Result::Originator & getOriginator() const { DARABONBA_PTR_GET_CONST(originator_, Result::Originator) };
      inline Result::Originator getOriginator() { DARABONBA_PTR_GET(originator_, Result::Originator) };
      inline Result& setOriginator(const Result::Originator & originator) { DARABONBA_PTR_SET_VALUE(originator_, originator) };
      inline Result& setOriginator(Result::Originator && originator) { DARABONBA_PTR_SET_RVALUE(originator_, originator) };


      // processCode Field Functions 
      bool hasProcessCode() const { return this->processCode_ != nullptr;};
      void deleteProcessCode() { this->processCode_ = nullptr;};
      inline string getProcessCode() const { DARABONBA_PTR_GET_DEFAULT(processCode_, "") };
      inline Result& setProcessCode(string processCode) { DARABONBA_PTR_SET_VALUE(processCode_, processCode) };


      // processInstanceId Field Functions 
      bool hasProcessInstanceId() const { return this->processInstanceId_ != nullptr;};
      void deleteProcessInstanceId() { this->processInstanceId_ = nullptr;};
      inline string getProcessInstanceId() const { DARABONBA_PTR_GET_DEFAULT(processInstanceId_, "") };
      inline Result& setProcessInstanceId(string processInstanceId) { DARABONBA_PTR_SET_VALUE(processInstanceId_, processInstanceId) };


      // title Field Functions 
      bool hasTitle() const { return this->title_ != nullptr;};
      void deleteTitle() { this->title_ = nullptr;};
      inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
      inline Result& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


    protected:
      shared_ptr<vector<Result::ActionExecutor>> actionExecutor_ {};
      shared_ptr<string> approvedResult_ {};
      Darabonba::Json data_ {};
      shared_ptr<string> formUuid_ {};
      shared_ptr<string> instanceStatus_ {};
      shared_ptr<Result::Originator> originator_ {};
      shared_ptr<string> processCode_ {};
      shared_ptr<string> processInstanceId_ {};
      shared_ptr<string> title_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->result_ == nullptr && this->vendorRequestId_ == nullptr && this->vendorType_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetInstancesByIdListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const vector<GetInstancesByIdListResponseBody::Result> & getResult() const { DARABONBA_PTR_GET_CONST(result_, vector<GetInstancesByIdListResponseBody::Result>) };
    inline vector<GetInstancesByIdListResponseBody::Result> getResult() { DARABONBA_PTR_GET(result_, vector<GetInstancesByIdListResponseBody::Result>) };
    inline GetInstancesByIdListResponseBody& setResult(const vector<GetInstancesByIdListResponseBody::Result> & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline GetInstancesByIdListResponseBody& setResult(vector<GetInstancesByIdListResponseBody::Result> && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


    // vendorRequestId Field Functions 
    bool hasVendorRequestId() const { return this->vendorRequestId_ != nullptr;};
    void deleteVendorRequestId() { this->vendorRequestId_ = nullptr;};
    inline string getVendorRequestId() const { DARABONBA_PTR_GET_DEFAULT(vendorRequestId_, "") };
    inline GetInstancesByIdListResponseBody& setVendorRequestId(string vendorRequestId) { DARABONBA_PTR_SET_VALUE(vendorRequestId_, vendorRequestId) };


    // vendorType Field Functions 
    bool hasVendorType() const { return this->vendorType_ != nullptr;};
    void deleteVendorType() { this->vendorType_ = nullptr;};
    inline string getVendorType() const { DARABONBA_PTR_GET_DEFAULT(vendorType_, "") };
    inline GetInstancesByIdListResponseBody& setVendorType(string vendorType) { DARABONBA_PTR_SET_VALUE(vendorType_, vendorType) };


  protected:
    shared_ptr<string> requestId_ {};
    shared_ptr<vector<GetInstancesByIdListResponseBody::Result>> result_ {};
    shared_ptr<string> vendorRequestId_ {};
    shared_ptr<string> vendorType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
