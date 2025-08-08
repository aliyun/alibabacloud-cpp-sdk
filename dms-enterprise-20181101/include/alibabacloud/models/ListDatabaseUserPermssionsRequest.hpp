// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDATABASEUSERPERMSSIONSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTDATABASEUSERPERMSSIONSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class ListDatabaseUserPermssionsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDatabaseUserPermssionsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DbId, dbId_);
      DARABONBA_PTR_TO_JSON(Logic, logic_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(PermType, permType_);
      DARABONBA_PTR_TO_JSON(Tid, tid_);
      DARABONBA_PTR_TO_JSON(UserName, userName_);
    };
    friend void from_json(const Darabonba::Json& j, ListDatabaseUserPermssionsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DbId, dbId_);
      DARABONBA_PTR_FROM_JSON(Logic, logic_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(PermType, permType_);
      DARABONBA_PTR_FROM_JSON(Tid, tid_);
      DARABONBA_PTR_FROM_JSON(UserName, userName_);
    };
    ListDatabaseUserPermssionsRequest() = default ;
    ListDatabaseUserPermssionsRequest(const ListDatabaseUserPermssionsRequest &) = default ;
    ListDatabaseUserPermssionsRequest(ListDatabaseUserPermssionsRequest &&) = default ;
    ListDatabaseUserPermssionsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDatabaseUserPermssionsRequest() = default ;
    ListDatabaseUserPermssionsRequest& operator=(const ListDatabaseUserPermssionsRequest &) = default ;
    ListDatabaseUserPermssionsRequest& operator=(ListDatabaseUserPermssionsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->dbId_ != nullptr
        && this->logic_ != nullptr && this->pageNumber_ != nullptr && this->pageSize_ != nullptr && this->permType_ != nullptr && this->tid_ != nullptr
        && this->userName_ != nullptr; };
    // dbId Field Functions 
    bool hasDbId() const { return this->dbId_ != nullptr;};
    void deleteDbId() { this->dbId_ = nullptr;};
    inline string dbId() const { DARABONBA_PTR_GET_DEFAULT(dbId_, "") };
    inline ListDatabaseUserPermssionsRequest& setDbId(string dbId) { DARABONBA_PTR_SET_VALUE(dbId_, dbId) };


    // logic Field Functions 
    bool hasLogic() const { return this->logic_ != nullptr;};
    void deleteLogic() { this->logic_ = nullptr;};
    inline bool logic() const { DARABONBA_PTR_GET_DEFAULT(logic_, false) };
    inline ListDatabaseUserPermssionsRequest& setLogic(bool logic) { DARABONBA_PTR_SET_VALUE(logic_, logic) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListDatabaseUserPermssionsRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListDatabaseUserPermssionsRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // permType Field Functions 
    bool hasPermType() const { return this->permType_ != nullptr;};
    void deletePermType() { this->permType_ = nullptr;};
    inline string permType() const { DARABONBA_PTR_GET_DEFAULT(permType_, "") };
    inline ListDatabaseUserPermssionsRequest& setPermType(string permType) { DARABONBA_PTR_SET_VALUE(permType_, permType) };


    // tid Field Functions 
    bool hasTid() const { return this->tid_ != nullptr;};
    void deleteTid() { this->tid_ = nullptr;};
    inline int64_t tid() const { DARABONBA_PTR_GET_DEFAULT(tid_, 0L) };
    inline ListDatabaseUserPermssionsRequest& setTid(int64_t tid) { DARABONBA_PTR_SET_VALUE(tid_, tid) };


    // userName Field Functions 
    bool hasUserName() const { return this->userName_ != nullptr;};
    void deleteUserName() { this->userName_ = nullptr;};
    inline string userName() const { DARABONBA_PTR_GET_DEFAULT(userName_, "") };
    inline ListDatabaseUserPermssionsRequest& setUserName(string userName) { DARABONBA_PTR_SET_VALUE(userName_, userName) };


  protected:
    // The ID of the database.
    // 
    // This parameter is required.
    std::shared_ptr<string> dbId_ = nullptr;
    // Specifies whether the database is a logical database.
    std::shared_ptr<bool> logic_ = nullptr;
    // The number of the page to return.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of entries to return on each page.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The type of the permission. Valid values:
    // 
    // *   DATABASE: permissions on databases
    // *   TABLE: permissions on tables
    // *   COLUMN: permissions on fields
    // 
    // This parameter is required.
    std::shared_ptr<string> permType_ = nullptr;
    // The ID of the tenant.
    // 
    // > : To view the ID of the tenant, log on to the Data Management (DMS) console and move the pointer over the profile picture in the upper-right corner. For more information, see [Manage DMS tenants](https://help.aliyun.com/document_detail/181330.html).
    std::shared_ptr<int64_t> tid_ = nullptr;
    // The nickname of the user.
    std::shared_ptr<string> userName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
