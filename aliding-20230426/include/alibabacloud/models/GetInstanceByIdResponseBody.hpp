// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETINSTANCEBYIDRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETINSTANCEBYIDRESPONSEBODY_HPP_
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
  class GetInstanceByIdResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetInstanceByIdResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(actionExecutor, actionExecutor_);
      DARABONBA_PTR_TO_JSON(approvedResult, approvedResult_);
      DARABONBA_PTR_TO_JSON(createTimeGMT, createTimeGMT_);
      DARABONBA_ANY_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(formUuid, formUuid_);
      DARABONBA_PTR_TO_JSON(instanceStatus, instanceStatus_);
      DARABONBA_PTR_TO_JSON(modifiedTimeGMT, modifiedTimeGMT_);
      DARABONBA_PTR_TO_JSON(originator, originator_);
      DARABONBA_PTR_TO_JSON(processCode, processCode_);
      DARABONBA_PTR_TO_JSON(processInstanceId, processInstanceId_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(title, title_);
      DARABONBA_PTR_TO_JSON(vendorRequestId, vendorRequestId_);
      DARABONBA_PTR_TO_JSON(vendorType, vendorType_);
      DARABONBA_PTR_TO_JSON(version, version_);
    };
    friend void from_json(const Darabonba::Json& j, GetInstanceByIdResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(actionExecutor, actionExecutor_);
      DARABONBA_PTR_FROM_JSON(approvedResult, approvedResult_);
      DARABONBA_PTR_FROM_JSON(createTimeGMT, createTimeGMT_);
      DARABONBA_ANY_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(formUuid, formUuid_);
      DARABONBA_PTR_FROM_JSON(instanceStatus, instanceStatus_);
      DARABONBA_PTR_FROM_JSON(modifiedTimeGMT, modifiedTimeGMT_);
      DARABONBA_PTR_FROM_JSON(originator, originator_);
      DARABONBA_PTR_FROM_JSON(processCode, processCode_);
      DARABONBA_PTR_FROM_JSON(processInstanceId, processInstanceId_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(title, title_);
      DARABONBA_PTR_FROM_JSON(vendorRequestId, vendorRequestId_);
      DARABONBA_PTR_FROM_JSON(vendorType, vendorType_);
      DARABONBA_PTR_FROM_JSON(version, version_);
    };
    GetInstanceByIdResponseBody() = default ;
    GetInstanceByIdResponseBody(const GetInstanceByIdResponseBody &) = default ;
    GetInstanceByIdResponseBody(GetInstanceByIdResponseBody &&) = default ;
    GetInstanceByIdResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetInstanceByIdResponseBody() = default ;
    GetInstanceByIdResponseBody& operator=(const GetInstanceByIdResponseBody &) = default ;
    GetInstanceByIdResponseBody& operator=(GetInstanceByIdResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Originator : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Originator& obj) { 
        DARABONBA_PTR_TO_JSON(DeptName, deptName_);
        DARABONBA_PTR_TO_JSON(Email, email_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(UserId, userId_);
      };
      friend void from_json(const Darabonba::Json& j, Originator& obj) { 
        DARABONBA_PTR_FROM_JSON(DeptName, deptName_);
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

      virtual bool empty() const override { return this->deptName_ == nullptr
        && this->email_ == nullptr && this->name_ == nullptr && this->userId_ == nullptr; };
      // deptName Field Functions 
      bool hasDeptName() const { return this->deptName_ != nullptr;};
      void deleteDeptName() { this->deptName_ = nullptr;};
      inline string getDeptName() const { DARABONBA_PTR_GET_DEFAULT(deptName_, "") };
      inline Originator& setDeptName(string deptName) { DARABONBA_PTR_SET_VALUE(deptName_, deptName) };


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
      shared_ptr<string> deptName_ {};
      shared_ptr<string> email_ {};
      shared_ptr<Originator::Name> name_ {};
      shared_ptr<string> userId_ {};
    };

    class ActionExecutor : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ActionExecutor& obj) { 
        DARABONBA_PTR_TO_JSON(DeptName, deptName_);
        DARABONBA_PTR_TO_JSON(Email, email_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(UserId, userId_);
      };
      friend void from_json(const Darabonba::Json& j, ActionExecutor& obj) { 
        DARABONBA_PTR_FROM_JSON(DeptName, deptName_);
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

      virtual bool empty() const override { return this->deptName_ == nullptr
        && this->email_ == nullptr && this->name_ == nullptr && this->userId_ == nullptr; };
      // deptName Field Functions 
      bool hasDeptName() const { return this->deptName_ != nullptr;};
      void deleteDeptName() { this->deptName_ = nullptr;};
      inline string getDeptName() const { DARABONBA_PTR_GET_DEFAULT(deptName_, "") };
      inline ActionExecutor& setDeptName(string deptName) { DARABONBA_PTR_SET_VALUE(deptName_, deptName) };


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
      shared_ptr<string> deptName_ {};
      shared_ptr<string> email_ {};
      shared_ptr<ActionExecutor::Name> name_ {};
      shared_ptr<string> userId_ {};
    };

    virtual bool empty() const override { return this->actionExecutor_ == nullptr
        && this->approvedResult_ == nullptr && this->createTimeGMT_ == nullptr && this->data_ == nullptr && this->formUuid_ == nullptr && this->instanceStatus_ == nullptr
        && this->modifiedTimeGMT_ == nullptr && this->originator_ == nullptr && this->processCode_ == nullptr && this->processInstanceId_ == nullptr && this->requestId_ == nullptr
        && this->title_ == nullptr && this->vendorRequestId_ == nullptr && this->vendorType_ == nullptr && this->version_ == nullptr; };
    // actionExecutor Field Functions 
    bool hasActionExecutor() const { return this->actionExecutor_ != nullptr;};
    void deleteActionExecutor() { this->actionExecutor_ = nullptr;};
    inline const vector<GetInstanceByIdResponseBody::ActionExecutor> & getActionExecutor() const { DARABONBA_PTR_GET_CONST(actionExecutor_, vector<GetInstanceByIdResponseBody::ActionExecutor>) };
    inline vector<GetInstanceByIdResponseBody::ActionExecutor> getActionExecutor() { DARABONBA_PTR_GET(actionExecutor_, vector<GetInstanceByIdResponseBody::ActionExecutor>) };
    inline GetInstanceByIdResponseBody& setActionExecutor(const vector<GetInstanceByIdResponseBody::ActionExecutor> & actionExecutor) { DARABONBA_PTR_SET_VALUE(actionExecutor_, actionExecutor) };
    inline GetInstanceByIdResponseBody& setActionExecutor(vector<GetInstanceByIdResponseBody::ActionExecutor> && actionExecutor) { DARABONBA_PTR_SET_RVALUE(actionExecutor_, actionExecutor) };


    // approvedResult Field Functions 
    bool hasApprovedResult() const { return this->approvedResult_ != nullptr;};
    void deleteApprovedResult() { this->approvedResult_ = nullptr;};
    inline string getApprovedResult() const { DARABONBA_PTR_GET_DEFAULT(approvedResult_, "") };
    inline GetInstanceByIdResponseBody& setApprovedResult(string approvedResult) { DARABONBA_PTR_SET_VALUE(approvedResult_, approvedResult) };


    // createTimeGMT Field Functions 
    bool hasCreateTimeGMT() const { return this->createTimeGMT_ != nullptr;};
    void deleteCreateTimeGMT() { this->createTimeGMT_ = nullptr;};
    inline string getCreateTimeGMT() const { DARABONBA_PTR_GET_DEFAULT(createTimeGMT_, "") };
    inline GetInstanceByIdResponseBody& setCreateTimeGMT(string createTimeGMT) { DARABONBA_PTR_SET_VALUE(createTimeGMT_, createTimeGMT) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline     const Darabonba::Json & getData() const { DARABONBA_GET(data_) };
    Darabonba::Json & getData() { DARABONBA_GET(data_) };
    inline GetInstanceByIdResponseBody& setData(const Darabonba::Json & data) { DARABONBA_SET_VALUE(data_, data) };
    inline GetInstanceByIdResponseBody& setData(Darabonba::Json && data) { DARABONBA_SET_RVALUE(data_, data) };


    // formUuid Field Functions 
    bool hasFormUuid() const { return this->formUuid_ != nullptr;};
    void deleteFormUuid() { this->formUuid_ = nullptr;};
    inline string getFormUuid() const { DARABONBA_PTR_GET_DEFAULT(formUuid_, "") };
    inline GetInstanceByIdResponseBody& setFormUuid(string formUuid) { DARABONBA_PTR_SET_VALUE(formUuid_, formUuid) };


    // instanceStatus Field Functions 
    bool hasInstanceStatus() const { return this->instanceStatus_ != nullptr;};
    void deleteInstanceStatus() { this->instanceStatus_ = nullptr;};
    inline string getInstanceStatus() const { DARABONBA_PTR_GET_DEFAULT(instanceStatus_, "") };
    inline GetInstanceByIdResponseBody& setInstanceStatus(string instanceStatus) { DARABONBA_PTR_SET_VALUE(instanceStatus_, instanceStatus) };


    // modifiedTimeGMT Field Functions 
    bool hasModifiedTimeGMT() const { return this->modifiedTimeGMT_ != nullptr;};
    void deleteModifiedTimeGMT() { this->modifiedTimeGMT_ = nullptr;};
    inline string getModifiedTimeGMT() const { DARABONBA_PTR_GET_DEFAULT(modifiedTimeGMT_, "") };
    inline GetInstanceByIdResponseBody& setModifiedTimeGMT(string modifiedTimeGMT) { DARABONBA_PTR_SET_VALUE(modifiedTimeGMT_, modifiedTimeGMT) };


    // originator Field Functions 
    bool hasOriginator() const { return this->originator_ != nullptr;};
    void deleteOriginator() { this->originator_ = nullptr;};
    inline const GetInstanceByIdResponseBody::Originator & getOriginator() const { DARABONBA_PTR_GET_CONST(originator_, GetInstanceByIdResponseBody::Originator) };
    inline GetInstanceByIdResponseBody::Originator getOriginator() { DARABONBA_PTR_GET(originator_, GetInstanceByIdResponseBody::Originator) };
    inline GetInstanceByIdResponseBody& setOriginator(const GetInstanceByIdResponseBody::Originator & originator) { DARABONBA_PTR_SET_VALUE(originator_, originator) };
    inline GetInstanceByIdResponseBody& setOriginator(GetInstanceByIdResponseBody::Originator && originator) { DARABONBA_PTR_SET_RVALUE(originator_, originator) };


    // processCode Field Functions 
    bool hasProcessCode() const { return this->processCode_ != nullptr;};
    void deleteProcessCode() { this->processCode_ = nullptr;};
    inline string getProcessCode() const { DARABONBA_PTR_GET_DEFAULT(processCode_, "") };
    inline GetInstanceByIdResponseBody& setProcessCode(string processCode) { DARABONBA_PTR_SET_VALUE(processCode_, processCode) };


    // processInstanceId Field Functions 
    bool hasProcessInstanceId() const { return this->processInstanceId_ != nullptr;};
    void deleteProcessInstanceId() { this->processInstanceId_ = nullptr;};
    inline string getProcessInstanceId() const { DARABONBA_PTR_GET_DEFAULT(processInstanceId_, "") };
    inline GetInstanceByIdResponseBody& setProcessInstanceId(string processInstanceId) { DARABONBA_PTR_SET_VALUE(processInstanceId_, processInstanceId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetInstanceByIdResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline GetInstanceByIdResponseBody& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


    // vendorRequestId Field Functions 
    bool hasVendorRequestId() const { return this->vendorRequestId_ != nullptr;};
    void deleteVendorRequestId() { this->vendorRequestId_ = nullptr;};
    inline string getVendorRequestId() const { DARABONBA_PTR_GET_DEFAULT(vendorRequestId_, "") };
    inline GetInstanceByIdResponseBody& setVendorRequestId(string vendorRequestId) { DARABONBA_PTR_SET_VALUE(vendorRequestId_, vendorRequestId) };


    // vendorType Field Functions 
    bool hasVendorType() const { return this->vendorType_ != nullptr;};
    void deleteVendorType() { this->vendorType_ = nullptr;};
    inline string getVendorType() const { DARABONBA_PTR_GET_DEFAULT(vendorType_, "") };
    inline GetInstanceByIdResponseBody& setVendorType(string vendorType) { DARABONBA_PTR_SET_VALUE(vendorType_, vendorType) };


    // version Field Functions 
    bool hasVersion() const { return this->version_ != nullptr;};
    void deleteVersion() { this->version_ = nullptr;};
    inline int64_t getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, 0L) };
    inline GetInstanceByIdResponseBody& setVersion(int64_t version) { DARABONBA_PTR_SET_VALUE(version_, version) };


  protected:
    shared_ptr<vector<GetInstanceByIdResponseBody::ActionExecutor>> actionExecutor_ {};
    shared_ptr<string> approvedResult_ {};
    shared_ptr<string> createTimeGMT_ {};
    Darabonba::Json data_ {};
    shared_ptr<string> formUuid_ {};
    shared_ptr<string> instanceStatus_ {};
    shared_ptr<string> modifiedTimeGMT_ {};
    shared_ptr<GetInstanceByIdResponseBody::Originator> originator_ {};
    shared_ptr<string> processCode_ {};
    shared_ptr<string> processInstanceId_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<string> title_ {};
    shared_ptr<string> vendorRequestId_ {};
    shared_ptr<string> vendorType_ {};
    shared_ptr<int64_t> version_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
