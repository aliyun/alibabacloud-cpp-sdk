// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDATALEVELPERMISSIONWHITELISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTDATALEVELPERMISSIONWHITELISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QuickbiPublic20220101
{
namespace Models
{
  class ListDataLevelPermissionWhiteListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDataLevelPermissionWhiteListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Result, result_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ListDataLevelPermissionWhiteListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ListDataLevelPermissionWhiteListResponseBody() = default ;
    ListDataLevelPermissionWhiteListResponseBody(const ListDataLevelPermissionWhiteListResponseBody &) = default ;
    ListDataLevelPermissionWhiteListResponseBody(ListDataLevelPermissionWhiteListResponseBody &&) = default ;
    ListDataLevelPermissionWhiteListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDataLevelPermissionWhiteListResponseBody() = default ;
    ListDataLevelPermissionWhiteListResponseBody& operator=(const ListDataLevelPermissionWhiteListResponseBody &) = default ;
    ListDataLevelPermissionWhiteListResponseBody& operator=(ListDataLevelPermissionWhiteListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Result : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Result& obj) { 
        DARABONBA_PTR_TO_JSON(CubeId, cubeId_);
        DARABONBA_PTR_TO_JSON(RuleType, ruleType_);
        DARABONBA_PTR_TO_JSON(UsersModel, usersModel_);
      };
      friend void from_json(const Darabonba::Json& j, Result& obj) { 
        DARABONBA_PTR_FROM_JSON(CubeId, cubeId_);
        DARABONBA_PTR_FROM_JSON(RuleType, ruleType_);
        DARABONBA_PTR_FROM_JSON(UsersModel, usersModel_);
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
      class UsersModel : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const UsersModel& obj) { 
          DARABONBA_PTR_TO_JSON(UserGroups, userGroups_);
          DARABONBA_PTR_TO_JSON(Users, users_);
        };
        friend void from_json(const Darabonba::Json& j, UsersModel& obj) { 
          DARABONBA_PTR_FROM_JSON(UserGroups, userGroups_);
          DARABONBA_PTR_FROM_JSON(Users, users_);
        };
        UsersModel() = default ;
        UsersModel(const UsersModel &) = default ;
        UsersModel(UsersModel &&) = default ;
        UsersModel(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~UsersModel() = default ;
        UsersModel& operator=(const UsersModel &) = default ;
        UsersModel& operator=(UsersModel &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->userGroups_ == nullptr
        && this->users_ == nullptr; };
        // userGroups Field Functions 
        bool hasUserGroups() const { return this->userGroups_ != nullptr;};
        void deleteUserGroups() { this->userGroups_ = nullptr;};
        inline const vector<string> & getUserGroups() const { DARABONBA_PTR_GET_CONST(userGroups_, vector<string>) };
        inline vector<string> getUserGroups() { DARABONBA_PTR_GET(userGroups_, vector<string>) };
        inline UsersModel& setUserGroups(const vector<string> & userGroups) { DARABONBA_PTR_SET_VALUE(userGroups_, userGroups) };
        inline UsersModel& setUserGroups(vector<string> && userGroups) { DARABONBA_PTR_SET_RVALUE(userGroups_, userGroups) };


        // users Field Functions 
        bool hasUsers() const { return this->users_ != nullptr;};
        void deleteUsers() { this->users_ = nullptr;};
        inline const vector<string> & getUsers() const { DARABONBA_PTR_GET_CONST(users_, vector<string>) };
        inline vector<string> getUsers() { DARABONBA_PTR_GET(users_, vector<string>) };
        inline UsersModel& setUsers(const vector<string> & users) { DARABONBA_PTR_SET_VALUE(users_, users) };
        inline UsersModel& setUsers(vector<string> && users) { DARABONBA_PTR_SET_RVALUE(users_, users) };


      protected:
        // UserGroups.
        shared_ptr<vector<string>> userGroups_ {};
        // Users.
        shared_ptr<vector<string>> users_ {};
      };

      virtual bool empty() const override { return this->cubeId_ == nullptr
        && this->ruleType_ == nullptr && this->usersModel_ == nullptr; };
      // cubeId Field Functions 
      bool hasCubeId() const { return this->cubeId_ != nullptr;};
      void deleteCubeId() { this->cubeId_ = nullptr;};
      inline string getCubeId() const { DARABONBA_PTR_GET_DEFAULT(cubeId_, "") };
      inline Result& setCubeId(string cubeId) { DARABONBA_PTR_SET_VALUE(cubeId_, cubeId) };


      // ruleType Field Functions 
      bool hasRuleType() const { return this->ruleType_ != nullptr;};
      void deleteRuleType() { this->ruleType_ = nullptr;};
      inline string getRuleType() const { DARABONBA_PTR_GET_DEFAULT(ruleType_, "") };
      inline Result& setRuleType(string ruleType) { DARABONBA_PTR_SET_VALUE(ruleType_, ruleType) };


      // usersModel Field Functions 
      bool hasUsersModel() const { return this->usersModel_ != nullptr;};
      void deleteUsersModel() { this->usersModel_ = nullptr;};
      inline const Result::UsersModel & getUsersModel() const { DARABONBA_PTR_GET_CONST(usersModel_, Result::UsersModel) };
      inline Result::UsersModel getUsersModel() { DARABONBA_PTR_GET(usersModel_, Result::UsersModel) };
      inline Result& setUsersModel(const Result::UsersModel & usersModel) { DARABONBA_PTR_SET_VALUE(usersModel_, usersModel) };
      inline Result& setUsersModel(Result::UsersModel && usersModel) { DARABONBA_PTR_SET_RVALUE(usersModel_, usersModel) };


    protected:
      // Dataset ID.
      shared_ptr<string> cubeId_ {};
      // Type of dataset row and column permissions. Possible values:
      // 
      // - ROW_LEVEL: Row-level permission
      // - COLUMN_LEVEL: Column-level permission
      shared_ptr<string> ruleType_ {};
      // Whitelist information.
      shared_ptr<Result::UsersModel> usersModel_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->result_ == nullptr && this->success_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListDataLevelPermissionWhiteListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const ListDataLevelPermissionWhiteListResponseBody::Result & getResult() const { DARABONBA_PTR_GET_CONST(result_, ListDataLevelPermissionWhiteListResponseBody::Result) };
    inline ListDataLevelPermissionWhiteListResponseBody::Result getResult() { DARABONBA_PTR_GET(result_, ListDataLevelPermissionWhiteListResponseBody::Result) };
    inline ListDataLevelPermissionWhiteListResponseBody& setResult(const ListDataLevelPermissionWhiteListResponseBody::Result & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline ListDataLevelPermissionWhiteListResponseBody& setResult(ListDataLevelPermissionWhiteListResponseBody::Result && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListDataLevelPermissionWhiteListResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // Request ID.
    shared_ptr<string> requestId_ {};
    // Whitelist for the specified row-level permission type.
    shared_ptr<ListDataLevelPermissionWhiteListResponseBody::Result> result_ {};
    // Indicates whether the request was successful. Possible values:
    // 
    // - true: Request succeeded
    // - false: Request failed
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuickbiPublic20220101
#endif
