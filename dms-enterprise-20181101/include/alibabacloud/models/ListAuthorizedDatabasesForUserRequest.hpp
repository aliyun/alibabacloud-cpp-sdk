// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAUTHORIZEDDATABASESFORUSERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTAUTHORIZEDDATABASESFORUSERREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class ListAuthorizedDatabasesForUserRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAuthorizedDatabasesForUserRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DbType, dbType_);
      DARABONBA_PTR_TO_JSON(EnvType, envType_);
      DARABONBA_PTR_TO_JSON(Logic, logic_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(SearchKey, searchKey_);
      DARABONBA_PTR_TO_JSON(Tid, tid_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
    };
    friend void from_json(const Darabonba::Json& j, ListAuthorizedDatabasesForUserRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DbType, dbType_);
      DARABONBA_PTR_FROM_JSON(EnvType, envType_);
      DARABONBA_PTR_FROM_JSON(Logic, logic_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(SearchKey, searchKey_);
      DARABONBA_PTR_FROM_JSON(Tid, tid_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
    };
    ListAuthorizedDatabasesForUserRequest() = default ;
    ListAuthorizedDatabasesForUserRequest(const ListAuthorizedDatabasesForUserRequest &) = default ;
    ListAuthorizedDatabasesForUserRequest(ListAuthorizedDatabasesForUserRequest &&) = default ;
    ListAuthorizedDatabasesForUserRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAuthorizedDatabasesForUserRequest() = default ;
    ListAuthorizedDatabasesForUserRequest& operator=(const ListAuthorizedDatabasesForUserRequest &) = default ;
    ListAuthorizedDatabasesForUserRequest& operator=(ListAuthorizedDatabasesForUserRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dbType_ == nullptr
        && this->envType_ == nullptr && this->logic_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->searchKey_ == nullptr
        && this->tid_ == nullptr && this->userId_ == nullptr; };
    // dbType Field Functions 
    bool hasDbType() const { return this->dbType_ != nullptr;};
    void deleteDbType() { this->dbType_ = nullptr;};
    inline string getDbType() const { DARABONBA_PTR_GET_DEFAULT(dbType_, "") };
    inline ListAuthorizedDatabasesForUserRequest& setDbType(string dbType) { DARABONBA_PTR_SET_VALUE(dbType_, dbType) };


    // envType Field Functions 
    bool hasEnvType() const { return this->envType_ != nullptr;};
    void deleteEnvType() { this->envType_ = nullptr;};
    inline string getEnvType() const { DARABONBA_PTR_GET_DEFAULT(envType_, "") };
    inline ListAuthorizedDatabasesForUserRequest& setEnvType(string envType) { DARABONBA_PTR_SET_VALUE(envType_, envType) };


    // logic Field Functions 
    bool hasLogic() const { return this->logic_ != nullptr;};
    void deleteLogic() { this->logic_ = nullptr;};
    inline bool getLogic() const { DARABONBA_PTR_GET_DEFAULT(logic_, false) };
    inline ListAuthorizedDatabasesForUserRequest& setLogic(bool logic) { DARABONBA_PTR_SET_VALUE(logic_, logic) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline string getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, "") };
    inline ListAuthorizedDatabasesForUserRequest& setPageNumber(string pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline string getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, "") };
    inline ListAuthorizedDatabasesForUserRequest& setPageSize(string pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // searchKey Field Functions 
    bool hasSearchKey() const { return this->searchKey_ != nullptr;};
    void deleteSearchKey() { this->searchKey_ = nullptr;};
    inline string getSearchKey() const { DARABONBA_PTR_GET_DEFAULT(searchKey_, "") };
    inline ListAuthorizedDatabasesForUserRequest& setSearchKey(string searchKey) { DARABONBA_PTR_SET_VALUE(searchKey_, searchKey) };


    // tid Field Functions 
    bool hasTid() const { return this->tid_ != nullptr;};
    void deleteTid() { this->tid_ = nullptr;};
    inline int64_t getTid() const { DARABONBA_PTR_GET_DEFAULT(tid_, 0L) };
    inline ListAuthorizedDatabasesForUserRequest& setTid(int64_t tid) { DARABONBA_PTR_SET_VALUE(tid_, tid) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline ListAuthorizedDatabasesForUserRequest& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


  protected:
    // The type of databases. Valid values:
    // 
    // *   **MySQL**
    // *   **SQLServer**
    // *   **PostgreSQL**
    // *   **Oracle**
    // *   **DRDS**
    // *   **OceanBase**
    // *   **Mongo**
    // *   **Redis**
    shared_ptr<string> dbType_ {};
    // The type of the environment in which the database instance is deployed. Valid values:
    // 
    // *   **product**: production environment.
    // *   **dev**: development environment.
    // *   **pre**: pre-release environment.
    // *   **test**: test environment.
    // *   **sit**: system integration testing (SIT) environment.
    // *   **uat**: user acceptance testing (UAT) environment.
    // *   **pet**: stress testing environment.
    // *   **stag**: staging environment.
    shared_ptr<string> envType_ {};
    // Specifies whether the database is a logical database. Valid values:
    // 
    // *   **true.**: The database is a logical database
    // *   **false**: The database is a physical database.
    shared_ptr<bool> logic_ {};
    // The page number.
    shared_ptr<string> pageNumber_ {};
    // The number of entries to return on each page.
    shared_ptr<string> pageSize_ {};
    // The search keyword.
    shared_ptr<string> searchKey_ {};
    // The ID of the tenant.
    shared_ptr<int64_t> tid_ {};
    // The ID of the user. You can call the [GetUser](https://help.aliyun.com/document_detail/465816.html) operation to query the user ID.
    // 
    // This parameter is required.
    shared_ptr<string> userId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
