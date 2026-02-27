// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDATABASESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTDATABASESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Hologram20220601
{
namespace Models
{
  class ListDatabasesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDatabasesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DatabaseList, databaseList_);
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ListDatabasesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DatabaseList, databaseList_);
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ListDatabasesResponseBody() = default ;
    ListDatabasesResponseBody(const ListDatabasesResponseBody &) = default ;
    ListDatabasesResponseBody(ListDatabasesResponseBody &&) = default ;
    ListDatabasesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDatabasesResponseBody() = default ;
    ListDatabasesResponseBody& operator=(const ListDatabasesResponseBody &) = default ;
    ListDatabasesResponseBody& operator=(ListDatabasesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class DatabaseList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DatabaseList& obj) { 
        DARABONBA_PTR_TO_JSON(External, external_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(PermissionModel, permissionModel_);
        DARABONBA_PTR_TO_JSON(Privilege, privilege_);
      };
      friend void from_json(const Darabonba::Json& j, DatabaseList& obj) { 
        DARABONBA_PTR_FROM_JSON(External, external_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(PermissionModel, permissionModel_);
        DARABONBA_PTR_FROM_JSON(Privilege, privilege_);
      };
      DatabaseList() = default ;
      DatabaseList(const DatabaseList &) = default ;
      DatabaseList(DatabaseList &&) = default ;
      DatabaseList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DatabaseList() = default ;
      DatabaseList& operator=(const DatabaseList &) = default ;
      DatabaseList& operator=(DatabaseList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->external_ == nullptr
        && this->name_ == nullptr && this->permissionModel_ == nullptr && this->privilege_ == nullptr; };
      // external Field Functions 
      bool hasExternal() const { return this->external_ != nullptr;};
      void deleteExternal() { this->external_ = nullptr;};
      inline bool getExternal() const { DARABONBA_PTR_GET_DEFAULT(external_, false) };
      inline DatabaseList& setExternal(bool external) { DARABONBA_PTR_SET_VALUE(external_, external) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline DatabaseList& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // permissionModel Field Functions 
      bool hasPermissionModel() const { return this->permissionModel_ != nullptr;};
      void deletePermissionModel() { this->permissionModel_ = nullptr;};
      inline string getPermissionModel() const { DARABONBA_PTR_GET_DEFAULT(permissionModel_, "") };
      inline DatabaseList& setPermissionModel(string permissionModel) { DARABONBA_PTR_SET_VALUE(permissionModel_, permissionModel) };


      // privilege Field Functions 
      bool hasPrivilege() const { return this->privilege_ != nullptr;};
      void deletePrivilege() { this->privilege_ = nullptr;};
      inline string getPrivilege() const { DARABONBA_PTR_GET_DEFAULT(privilege_, "") };
      inline DatabaseList& setPrivilege(string privilege) { DARABONBA_PTR_SET_VALUE(privilege_, privilege) };


    protected:
      shared_ptr<bool> external_ {};
      shared_ptr<string> name_ {};
      shared_ptr<string> permissionModel_ {};
      shared_ptr<string> privilege_ {};
    };

    virtual bool empty() const override { return this->databaseList_ == nullptr
        && this->errorCode_ == nullptr && this->errorMessage_ == nullptr && this->httpStatusCode_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // databaseList Field Functions 
    bool hasDatabaseList() const { return this->databaseList_ != nullptr;};
    void deleteDatabaseList() { this->databaseList_ = nullptr;};
    inline const vector<ListDatabasesResponseBody::DatabaseList> & getDatabaseList() const { DARABONBA_PTR_GET_CONST(databaseList_, vector<ListDatabasesResponseBody::DatabaseList>) };
    inline vector<ListDatabasesResponseBody::DatabaseList> getDatabaseList() { DARABONBA_PTR_GET(databaseList_, vector<ListDatabasesResponseBody::DatabaseList>) };
    inline ListDatabasesResponseBody& setDatabaseList(const vector<ListDatabasesResponseBody::DatabaseList> & databaseList) { DARABONBA_PTR_SET_VALUE(databaseList_, databaseList) };
    inline ListDatabasesResponseBody& setDatabaseList(vector<ListDatabasesResponseBody::DatabaseList> && databaseList) { DARABONBA_PTR_SET_RVALUE(databaseList_, databaseList) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline ListDatabasesResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline ListDatabasesResponseBody& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline string getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, "") };
    inline ListDatabasesResponseBody& setHttpStatusCode(string httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListDatabasesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline string getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, "") };
    inline ListDatabasesResponseBody& setSuccess(string success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<vector<ListDatabasesResponseBody::DatabaseList>> databaseList_ {};
    shared_ptr<string> errorCode_ {};
    shared_ptr<string> errorMessage_ {};
    shared_ptr<string> httpStatusCode_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
    shared_ptr<string> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Hologram20220601
#endif
