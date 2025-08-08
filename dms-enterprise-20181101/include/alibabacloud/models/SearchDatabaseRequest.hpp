// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SEARCHDATABASEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SEARCHDATABASEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class SearchDatabaseRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SearchDatabaseRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DbType, dbType_);
      DARABONBA_PTR_TO_JSON(EnvType, envType_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RealLoginUserUid, realLoginUserUid_);
      DARABONBA_PTR_TO_JSON(SearchKey, searchKey_);
      DARABONBA_PTR_TO_JSON(SearchRange, searchRange_);
      DARABONBA_PTR_TO_JSON(SearchTarget, searchTarget_);
      DARABONBA_PTR_TO_JSON(Tid, tid_);
    };
    friend void from_json(const Darabonba::Json& j, SearchDatabaseRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DbType, dbType_);
      DARABONBA_PTR_FROM_JSON(EnvType, envType_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RealLoginUserUid, realLoginUserUid_);
      DARABONBA_PTR_FROM_JSON(SearchKey, searchKey_);
      DARABONBA_PTR_FROM_JSON(SearchRange, searchRange_);
      DARABONBA_PTR_FROM_JSON(SearchTarget, searchTarget_);
      DARABONBA_PTR_FROM_JSON(Tid, tid_);
    };
    SearchDatabaseRequest() = default ;
    SearchDatabaseRequest(const SearchDatabaseRequest &) = default ;
    SearchDatabaseRequest(SearchDatabaseRequest &&) = default ;
    SearchDatabaseRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SearchDatabaseRequest() = default ;
    SearchDatabaseRequest& operator=(const SearchDatabaseRequest &) = default ;
    SearchDatabaseRequest& operator=(SearchDatabaseRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->dbType_ != nullptr
        && this->envType_ != nullptr && this->pageNumber_ != nullptr && this->pageSize_ != nullptr && this->realLoginUserUid_ != nullptr && this->searchKey_ != nullptr
        && this->searchRange_ != nullptr && this->searchTarget_ != nullptr && this->tid_ != nullptr; };
    // dbType Field Functions 
    bool hasDbType() const { return this->dbType_ != nullptr;};
    void deleteDbType() { this->dbType_ = nullptr;};
    inline string dbType() const { DARABONBA_PTR_GET_DEFAULT(dbType_, "") };
    inline SearchDatabaseRequest& setDbType(string dbType) { DARABONBA_PTR_SET_VALUE(dbType_, dbType) };


    // envType Field Functions 
    bool hasEnvType() const { return this->envType_ != nullptr;};
    void deleteEnvType() { this->envType_ = nullptr;};
    inline string envType() const { DARABONBA_PTR_GET_DEFAULT(envType_, "") };
    inline SearchDatabaseRequest& setEnvType(string envType) { DARABONBA_PTR_SET_VALUE(envType_, envType) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline SearchDatabaseRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline SearchDatabaseRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // realLoginUserUid Field Functions 
    bool hasRealLoginUserUid() const { return this->realLoginUserUid_ != nullptr;};
    void deleteRealLoginUserUid() { this->realLoginUserUid_ = nullptr;};
    inline string realLoginUserUid() const { DARABONBA_PTR_GET_DEFAULT(realLoginUserUid_, "") };
    inline SearchDatabaseRequest& setRealLoginUserUid(string realLoginUserUid) { DARABONBA_PTR_SET_VALUE(realLoginUserUid_, realLoginUserUid) };


    // searchKey Field Functions 
    bool hasSearchKey() const { return this->searchKey_ != nullptr;};
    void deleteSearchKey() { this->searchKey_ = nullptr;};
    inline string searchKey() const { DARABONBA_PTR_GET_DEFAULT(searchKey_, "") };
    inline SearchDatabaseRequest& setSearchKey(string searchKey) { DARABONBA_PTR_SET_VALUE(searchKey_, searchKey) };


    // searchRange Field Functions 
    bool hasSearchRange() const { return this->searchRange_ != nullptr;};
    void deleteSearchRange() { this->searchRange_ = nullptr;};
    inline string searchRange() const { DARABONBA_PTR_GET_DEFAULT(searchRange_, "") };
    inline SearchDatabaseRequest& setSearchRange(string searchRange) { DARABONBA_PTR_SET_VALUE(searchRange_, searchRange) };


    // searchTarget Field Functions 
    bool hasSearchTarget() const { return this->searchTarget_ != nullptr;};
    void deleteSearchTarget() { this->searchTarget_ = nullptr;};
    inline string searchTarget() const { DARABONBA_PTR_GET_DEFAULT(searchTarget_, "") };
    inline SearchDatabaseRequest& setSearchTarget(string searchTarget) { DARABONBA_PTR_SET_VALUE(searchTarget_, searchTarget) };


    // tid Field Functions 
    bool hasTid() const { return this->tid_ != nullptr;};
    void deleteTid() { this->tid_ = nullptr;};
    inline int64_t tid() const { DARABONBA_PTR_GET_DEFAULT(tid_, 0L) };
    inline SearchDatabaseRequest& setTid(int64_t tid) { DARABONBA_PTR_SET_VALUE(tid_, tid) };


  protected:
    // The type of the database. For more information about the valid values of this parameter, see [DbType parameter](https://help.aliyun.com/document_detail/198106.html).
    std::shared_ptr<string> dbType_ = nullptr;
    // The environment type of the database. For more information, see [Change the environment type of an instance](https://help.aliyun.com/document_detail/163309.html).
    std::shared_ptr<string> envType_ = nullptr;
    // The number of the page to return.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of entries to return on each page.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    std::shared_ptr<string> realLoginUserUid_ = nullptr;
    // The keyword that is used to search for databases.
    std::shared_ptr<string> searchKey_ = nullptr;
    // The query range based on permissions. Valid values:
    // 
    // *   **HAS_PERMSSION**: searches for databases on which the current user has permissions.
    // *   **OWNER**: searches for databases owned by the current user.
    // *   **MY_FOCUS**: searches for databases that the current user follows.
    // *   **UNKNOWN**: searches for all databases.
    std::shared_ptr<string> searchRange_ = nullptr;
    // The category of the database. Valid values:
    // 
    // *   **DB**: single database or logical database.
    // *   **SINGLE_DB**: single database.
    // *   **LOGIC_DB**: logical database.
    std::shared_ptr<string> searchTarget_ = nullptr;
    // The ID of the tenant. You can call the [GetUserActiveTenant](https://help.aliyun.com/document_detail/198073.html) operation to query the tenant ID.
    std::shared_ptr<int64_t> tid_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
