// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTINSTANCESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTINSTANCESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CCC20200701
{
namespace Models
{
  class ListInstancesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListInstancesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListInstancesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListInstancesResponseBody() = default ;
    ListInstancesResponseBody(const ListInstancesResponseBody &) = default ;
    ListInstancesResponseBody(ListInstancesResponseBody &&) = default ;
    ListInstancesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListInstancesResponseBody() = default ;
    ListInstancesResponseBody& operator=(const ListInstancesResponseBody &) = default ;
    ListInstancesResponseBody& operator=(ListInstancesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(List, list_);
        DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(List, list_);
        DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
        DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
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
      class List : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const List& obj) { 
          DARABONBA_PTR_TO_JSON(AdminList, adminList_);
          DARABONBA_PTR_TO_JSON(AliyunUid, aliyunUid_);
          DARABONBA_PTR_TO_JSON(ConsoleUrl, consoleUrl_);
          DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
          DARABONBA_PTR_TO_JSON(Description, description_);
          DARABONBA_PTR_TO_JSON(DomainName, domainName_);
          DARABONBA_PTR_TO_JSON(Id, id_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(NumberList, numberList_);
          DARABONBA_PTR_TO_JSON(Status, status_);
        };
        friend void from_json(const Darabonba::Json& j, List& obj) { 
          DARABONBA_PTR_FROM_JSON(AdminList, adminList_);
          DARABONBA_PTR_FROM_JSON(AliyunUid, aliyunUid_);
          DARABONBA_PTR_FROM_JSON(ConsoleUrl, consoleUrl_);
          DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
          DARABONBA_PTR_FROM_JSON(Description, description_);
          DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
          DARABONBA_PTR_FROM_JSON(Id, id_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(NumberList, numberList_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
        };
        List() = default ;
        List(const List &) = default ;
        List(List &&) = default ;
        List(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~List() = default ;
        List& operator=(const List &) = default ;
        List& operator=(List &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class NumberList : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const NumberList& obj) { 
            DARABONBA_PTR_TO_JSON(Number, number_);
          };
          friend void from_json(const Darabonba::Json& j, NumberList& obj) { 
            DARABONBA_PTR_FROM_JSON(Number, number_);
          };
          NumberList() = default ;
          NumberList(const NumberList &) = default ;
          NumberList(NumberList &&) = default ;
          NumberList(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~NumberList() = default ;
          NumberList& operator=(const NumberList &) = default ;
          NumberList& operator=(NumberList &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->number_ == nullptr; };
          // number Field Functions 
          bool hasNumber() const { return this->number_ != nullptr;};
          void deleteNumber() { this->number_ = nullptr;};
          inline string getNumber() const { DARABONBA_PTR_GET_DEFAULT(number_, "") };
          inline NumberList& setNumber(string number) { DARABONBA_PTR_SET_VALUE(number_, number) };


        protected:
          shared_ptr<string> number_ {};
        };

        class AdminList : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const AdminList& obj) { 
            DARABONBA_PTR_TO_JSON(DisplayName, displayName_);
            DARABONBA_PTR_TO_JSON(Email, email_);
            DARABONBA_PTR_TO_JSON(Extension, extension_);
            DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
            DARABONBA_PTR_TO_JSON(LoginName, loginName_);
            DARABONBA_PTR_TO_JSON(Mobile, mobile_);
            DARABONBA_PTR_TO_JSON(RoleId, roleId_);
            DARABONBA_PTR_TO_JSON(RoleName, roleName_);
            DARABONBA_PTR_TO_JSON(UserId, userId_);
            DARABONBA_PTR_TO_JSON(WorkMode, workMode_);
          };
          friend void from_json(const Darabonba::Json& j, AdminList& obj) { 
            DARABONBA_PTR_FROM_JSON(DisplayName, displayName_);
            DARABONBA_PTR_FROM_JSON(Email, email_);
            DARABONBA_PTR_FROM_JSON(Extension, extension_);
            DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
            DARABONBA_PTR_FROM_JSON(LoginName, loginName_);
            DARABONBA_PTR_FROM_JSON(Mobile, mobile_);
            DARABONBA_PTR_FROM_JSON(RoleId, roleId_);
            DARABONBA_PTR_FROM_JSON(RoleName, roleName_);
            DARABONBA_PTR_FROM_JSON(UserId, userId_);
            DARABONBA_PTR_FROM_JSON(WorkMode, workMode_);
          };
          AdminList() = default ;
          AdminList(const AdminList &) = default ;
          AdminList(AdminList &&) = default ;
          AdminList(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~AdminList() = default ;
          AdminList& operator=(const AdminList &) = default ;
          AdminList& operator=(AdminList &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->displayName_ == nullptr
        && this->email_ == nullptr && this->extension_ == nullptr && this->instanceId_ == nullptr && this->loginName_ == nullptr && this->mobile_ == nullptr
        && this->roleId_ == nullptr && this->roleName_ == nullptr && this->userId_ == nullptr && this->workMode_ == nullptr; };
          // displayName Field Functions 
          bool hasDisplayName() const { return this->displayName_ != nullptr;};
          void deleteDisplayName() { this->displayName_ = nullptr;};
          inline string getDisplayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
          inline AdminList& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


          // email Field Functions 
          bool hasEmail() const { return this->email_ != nullptr;};
          void deleteEmail() { this->email_ = nullptr;};
          inline string getEmail() const { DARABONBA_PTR_GET_DEFAULT(email_, "") };
          inline AdminList& setEmail(string email) { DARABONBA_PTR_SET_VALUE(email_, email) };


          // extension Field Functions 
          bool hasExtension() const { return this->extension_ != nullptr;};
          void deleteExtension() { this->extension_ = nullptr;};
          inline string getExtension() const { DARABONBA_PTR_GET_DEFAULT(extension_, "") };
          inline AdminList& setExtension(string extension) { DARABONBA_PTR_SET_VALUE(extension_, extension) };


          // instanceId Field Functions 
          bool hasInstanceId() const { return this->instanceId_ != nullptr;};
          void deleteInstanceId() { this->instanceId_ = nullptr;};
          inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
          inline AdminList& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


          // loginName Field Functions 
          bool hasLoginName() const { return this->loginName_ != nullptr;};
          void deleteLoginName() { this->loginName_ = nullptr;};
          inline string getLoginName() const { DARABONBA_PTR_GET_DEFAULT(loginName_, "") };
          inline AdminList& setLoginName(string loginName) { DARABONBA_PTR_SET_VALUE(loginName_, loginName) };


          // mobile Field Functions 
          bool hasMobile() const { return this->mobile_ != nullptr;};
          void deleteMobile() { this->mobile_ = nullptr;};
          inline string getMobile() const { DARABONBA_PTR_GET_DEFAULT(mobile_, "") };
          inline AdminList& setMobile(string mobile) { DARABONBA_PTR_SET_VALUE(mobile_, mobile) };


          // roleId Field Functions 
          bool hasRoleId() const { return this->roleId_ != nullptr;};
          void deleteRoleId() { this->roleId_ = nullptr;};
          inline string getRoleId() const { DARABONBA_PTR_GET_DEFAULT(roleId_, "") };
          inline AdminList& setRoleId(string roleId) { DARABONBA_PTR_SET_VALUE(roleId_, roleId) };


          // roleName Field Functions 
          bool hasRoleName() const { return this->roleName_ != nullptr;};
          void deleteRoleName() { this->roleName_ = nullptr;};
          inline string getRoleName() const { DARABONBA_PTR_GET_DEFAULT(roleName_, "") };
          inline AdminList& setRoleName(string roleName) { DARABONBA_PTR_SET_VALUE(roleName_, roleName) };


          // userId Field Functions 
          bool hasUserId() const { return this->userId_ != nullptr;};
          void deleteUserId() { this->userId_ = nullptr;};
          inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
          inline AdminList& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


          // workMode Field Functions 
          bool hasWorkMode() const { return this->workMode_ != nullptr;};
          void deleteWorkMode() { this->workMode_ = nullptr;};
          inline string getWorkMode() const { DARABONBA_PTR_GET_DEFAULT(workMode_, "") };
          inline AdminList& setWorkMode(string workMode) { DARABONBA_PTR_SET_VALUE(workMode_, workMode) };


        protected:
          shared_ptr<string> displayName_ {};
          shared_ptr<string> email_ {};
          shared_ptr<string> extension_ {};
          shared_ptr<string> instanceId_ {};
          shared_ptr<string> loginName_ {};
          shared_ptr<string> mobile_ {};
          shared_ptr<string> roleId_ {};
          shared_ptr<string> roleName_ {};
          shared_ptr<string> userId_ {};
          shared_ptr<string> workMode_ {};
        };

        virtual bool empty() const override { return this->adminList_ == nullptr
        && this->aliyunUid_ == nullptr && this->consoleUrl_ == nullptr && this->createTime_ == nullptr && this->description_ == nullptr && this->domainName_ == nullptr
        && this->id_ == nullptr && this->name_ == nullptr && this->numberList_ == nullptr && this->status_ == nullptr; };
        // adminList Field Functions 
        bool hasAdminList() const { return this->adminList_ != nullptr;};
        void deleteAdminList() { this->adminList_ = nullptr;};
        inline const vector<List::AdminList> & getAdminList() const { DARABONBA_PTR_GET_CONST(adminList_, vector<List::AdminList>) };
        inline vector<List::AdminList> getAdminList() { DARABONBA_PTR_GET(adminList_, vector<List::AdminList>) };
        inline List& setAdminList(const vector<List::AdminList> & adminList) { DARABONBA_PTR_SET_VALUE(adminList_, adminList) };
        inline List& setAdminList(vector<List::AdminList> && adminList) { DARABONBA_PTR_SET_RVALUE(adminList_, adminList) };


        // aliyunUid Field Functions 
        bool hasAliyunUid() const { return this->aliyunUid_ != nullptr;};
        void deleteAliyunUid() { this->aliyunUid_ = nullptr;};
        inline string getAliyunUid() const { DARABONBA_PTR_GET_DEFAULT(aliyunUid_, "") };
        inline List& setAliyunUid(string aliyunUid) { DARABONBA_PTR_SET_VALUE(aliyunUid_, aliyunUid) };


        // consoleUrl Field Functions 
        bool hasConsoleUrl() const { return this->consoleUrl_ != nullptr;};
        void deleteConsoleUrl() { this->consoleUrl_ = nullptr;};
        inline string getConsoleUrl() const { DARABONBA_PTR_GET_DEFAULT(consoleUrl_, "") };
        inline List& setConsoleUrl(string consoleUrl) { DARABONBA_PTR_SET_VALUE(consoleUrl_, consoleUrl) };


        // createTime Field Functions 
        bool hasCreateTime() const { return this->createTime_ != nullptr;};
        void deleteCreateTime() { this->createTime_ = nullptr;};
        inline int64_t getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
        inline List& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline List& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // domainName Field Functions 
        bool hasDomainName() const { return this->domainName_ != nullptr;};
        void deleteDomainName() { this->domainName_ = nullptr;};
        inline string getDomainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
        inline List& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
        inline List& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline List& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // numberList Field Functions 
        bool hasNumberList() const { return this->numberList_ != nullptr;};
        void deleteNumberList() { this->numberList_ = nullptr;};
        inline const vector<List::NumberList> & getNumberList() const { DARABONBA_PTR_GET_CONST(numberList_, vector<List::NumberList>) };
        inline vector<List::NumberList> getNumberList() { DARABONBA_PTR_GET(numberList_, vector<List::NumberList>) };
        inline List& setNumberList(const vector<List::NumberList> & numberList) { DARABONBA_PTR_SET_VALUE(numberList_, numberList) };
        inline List& setNumberList(vector<List::NumberList> && numberList) { DARABONBA_PTR_SET_RVALUE(numberList_, numberList) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline List& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      protected:
        shared_ptr<vector<List::AdminList>> adminList_ {};
        shared_ptr<string> aliyunUid_ {};
        shared_ptr<string> consoleUrl_ {};
        shared_ptr<int64_t> createTime_ {};
        shared_ptr<string> description_ {};
        shared_ptr<string> domainName_ {};
        shared_ptr<string> id_ {};
        shared_ptr<string> name_ {};
        shared_ptr<vector<List::NumberList>> numberList_ {};
        shared_ptr<string> status_ {};
      };

      virtual bool empty() const override { return this->list_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->totalCount_ == nullptr; };
      // list Field Functions 
      bool hasList() const { return this->list_ != nullptr;};
      void deleteList() { this->list_ = nullptr;};
      inline const vector<Data::List> & getList() const { DARABONBA_PTR_GET_CONST(list_, vector<Data::List>) };
      inline vector<Data::List> getList() { DARABONBA_PTR_GET(list_, vector<Data::List>) };
      inline Data& setList(const vector<Data::List> & list) { DARABONBA_PTR_SET_VALUE(list_, list) };
      inline Data& setList(vector<Data::List> && list) { DARABONBA_PTR_SET_RVALUE(list_, list) };


      // pageNumber Field Functions 
      bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
      void deletePageNumber() { this->pageNumber_ = nullptr;};
      inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
      inline Data& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
      inline Data& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
      inline Data& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    protected:
      shared_ptr<vector<Data::List>> list_ {};
      shared_ptr<int32_t> pageNumber_ {};
      shared_ptr<int32_t> pageSize_ {};
      shared_ptr<int32_t> totalCount_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListInstancesResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ListInstancesResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, ListInstancesResponseBody::Data) };
    inline ListInstancesResponseBody::Data getData() { DARABONBA_PTR_GET(data_, ListInstancesResponseBody::Data) };
    inline ListInstancesResponseBody& setData(const ListInstancesResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListInstancesResponseBody& setData(ListInstancesResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline ListInstancesResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListInstancesResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListInstancesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<ListInstancesResponseBody::Data> data_ {};
    shared_ptr<int32_t> httpStatusCode_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CCC20200701
#endif
