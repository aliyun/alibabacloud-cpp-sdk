// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTUSERLEVELSOFSKILLGROUPRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTUSERLEVELSOFSKILLGROUPRESPONSEBODY_HPP_
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
  class ListUserLevelsOfSkillGroupResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListUserLevelsOfSkillGroupResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListUserLevelsOfSkillGroupResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListUserLevelsOfSkillGroupResponseBody() = default ;
    ListUserLevelsOfSkillGroupResponseBody(const ListUserLevelsOfSkillGroupResponseBody &) = default ;
    ListUserLevelsOfSkillGroupResponseBody(ListUserLevelsOfSkillGroupResponseBody &&) = default ;
    ListUserLevelsOfSkillGroupResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListUserLevelsOfSkillGroupResponseBody() = default ;
    ListUserLevelsOfSkillGroupResponseBody& operator=(const ListUserLevelsOfSkillGroupResponseBody &) = default ;
    ListUserLevelsOfSkillGroupResponseBody& operator=(ListUserLevelsOfSkillGroupResponseBody &&) = default ;
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
          DARABONBA_PTR_TO_JSON(DisplayName, displayName_);
          DARABONBA_PTR_TO_JSON(LoginName, loginName_);
          DARABONBA_PTR_TO_JSON(RamId, ramId_);
          DARABONBA_PTR_TO_JSON(RoleId, roleId_);
          DARABONBA_PTR_TO_JSON(RoleName, roleName_);
          DARABONBA_PTR_TO_JSON(SkillGroupId, skillGroupId_);
          DARABONBA_PTR_TO_JSON(SkillGroupName, skillGroupName_);
          DARABONBA_PTR_TO_JSON(SkillLevel, skillLevel_);
          DARABONBA_PTR_TO_JSON(UserId, userId_);
        };
        friend void from_json(const Darabonba::Json& j, List& obj) { 
          DARABONBA_PTR_FROM_JSON(DisplayName, displayName_);
          DARABONBA_PTR_FROM_JSON(LoginName, loginName_);
          DARABONBA_PTR_FROM_JSON(RamId, ramId_);
          DARABONBA_PTR_FROM_JSON(RoleId, roleId_);
          DARABONBA_PTR_FROM_JSON(RoleName, roleName_);
          DARABONBA_PTR_FROM_JSON(SkillGroupId, skillGroupId_);
          DARABONBA_PTR_FROM_JSON(SkillGroupName, skillGroupName_);
          DARABONBA_PTR_FROM_JSON(SkillLevel, skillLevel_);
          DARABONBA_PTR_FROM_JSON(UserId, userId_);
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
        virtual bool empty() const override { return this->displayName_ == nullptr
        && this->loginName_ == nullptr && this->ramId_ == nullptr && this->roleId_ == nullptr && this->roleName_ == nullptr && this->skillGroupId_ == nullptr
        && this->skillGroupName_ == nullptr && this->skillLevel_ == nullptr && this->userId_ == nullptr; };
        // displayName Field Functions 
        bool hasDisplayName() const { return this->displayName_ != nullptr;};
        void deleteDisplayName() { this->displayName_ = nullptr;};
        inline string getDisplayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
        inline List& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


        // loginName Field Functions 
        bool hasLoginName() const { return this->loginName_ != nullptr;};
        void deleteLoginName() { this->loginName_ = nullptr;};
        inline string getLoginName() const { DARABONBA_PTR_GET_DEFAULT(loginName_, "") };
        inline List& setLoginName(string loginName) { DARABONBA_PTR_SET_VALUE(loginName_, loginName) };


        // ramId Field Functions 
        bool hasRamId() const { return this->ramId_ != nullptr;};
        void deleteRamId() { this->ramId_ = nullptr;};
        inline string getRamId() const { DARABONBA_PTR_GET_DEFAULT(ramId_, "") };
        inline List& setRamId(string ramId) { DARABONBA_PTR_SET_VALUE(ramId_, ramId) };


        // roleId Field Functions 
        bool hasRoleId() const { return this->roleId_ != nullptr;};
        void deleteRoleId() { this->roleId_ = nullptr;};
        inline string getRoleId() const { DARABONBA_PTR_GET_DEFAULT(roleId_, "") };
        inline List& setRoleId(string roleId) { DARABONBA_PTR_SET_VALUE(roleId_, roleId) };


        // roleName Field Functions 
        bool hasRoleName() const { return this->roleName_ != nullptr;};
        void deleteRoleName() { this->roleName_ = nullptr;};
        inline string getRoleName() const { DARABONBA_PTR_GET_DEFAULT(roleName_, "") };
        inline List& setRoleName(string roleName) { DARABONBA_PTR_SET_VALUE(roleName_, roleName) };


        // skillGroupId Field Functions 
        bool hasSkillGroupId() const { return this->skillGroupId_ != nullptr;};
        void deleteSkillGroupId() { this->skillGroupId_ = nullptr;};
        inline string getSkillGroupId() const { DARABONBA_PTR_GET_DEFAULT(skillGroupId_, "") };
        inline List& setSkillGroupId(string skillGroupId) { DARABONBA_PTR_SET_VALUE(skillGroupId_, skillGroupId) };


        // skillGroupName Field Functions 
        bool hasSkillGroupName() const { return this->skillGroupName_ != nullptr;};
        void deleteSkillGroupName() { this->skillGroupName_ = nullptr;};
        inline string getSkillGroupName() const { DARABONBA_PTR_GET_DEFAULT(skillGroupName_, "") };
        inline List& setSkillGroupName(string skillGroupName) { DARABONBA_PTR_SET_VALUE(skillGroupName_, skillGroupName) };


        // skillLevel Field Functions 
        bool hasSkillLevel() const { return this->skillLevel_ != nullptr;};
        void deleteSkillLevel() { this->skillLevel_ = nullptr;};
        inline int32_t getSkillLevel() const { DARABONBA_PTR_GET_DEFAULT(skillLevel_, 0) };
        inline List& setSkillLevel(int32_t skillLevel) { DARABONBA_PTR_SET_VALUE(skillLevel_, skillLevel) };


        // userId Field Functions 
        bool hasUserId() const { return this->userId_ != nullptr;};
        void deleteUserId() { this->userId_ = nullptr;};
        inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
        inline List& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


      protected:
        shared_ptr<string> displayName_ {};
        shared_ptr<string> loginName_ {};
        shared_ptr<string> ramId_ {};
        shared_ptr<string> roleId_ {};
        shared_ptr<string> roleName_ {};
        shared_ptr<string> skillGroupId_ {};
        shared_ptr<string> skillGroupName_ {};
        shared_ptr<int32_t> skillLevel_ {};
        shared_ptr<string> userId_ {};
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
    inline ListUserLevelsOfSkillGroupResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ListUserLevelsOfSkillGroupResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, ListUserLevelsOfSkillGroupResponseBody::Data) };
    inline ListUserLevelsOfSkillGroupResponseBody::Data getData() { DARABONBA_PTR_GET(data_, ListUserLevelsOfSkillGroupResponseBody::Data) };
    inline ListUserLevelsOfSkillGroupResponseBody& setData(const ListUserLevelsOfSkillGroupResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListUserLevelsOfSkillGroupResponseBody& setData(ListUserLevelsOfSkillGroupResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline ListUserLevelsOfSkillGroupResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListUserLevelsOfSkillGroupResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListUserLevelsOfSkillGroupResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<ListUserLevelsOfSkillGroupResponseBody::Data> data_ {};
    shared_ptr<int32_t> httpStatusCode_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CCC20200701
#endif
