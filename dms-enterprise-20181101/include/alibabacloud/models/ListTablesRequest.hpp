// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTABLESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTTABLESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class ListTablesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTablesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DatabaseId, databaseId_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RealLoginUserUid, realLoginUserUid_);
      DARABONBA_PTR_TO_JSON(ReturnGuid, returnGuid_);
      DARABONBA_PTR_TO_JSON(SearchName, searchName_);
      DARABONBA_PTR_TO_JSON(Tid, tid_);
    };
    friend void from_json(const Darabonba::Json& j, ListTablesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DatabaseId, databaseId_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RealLoginUserUid, realLoginUserUid_);
      DARABONBA_PTR_FROM_JSON(ReturnGuid, returnGuid_);
      DARABONBA_PTR_FROM_JSON(SearchName, searchName_);
      DARABONBA_PTR_FROM_JSON(Tid, tid_);
    };
    ListTablesRequest() = default ;
    ListTablesRequest(const ListTablesRequest &) = default ;
    ListTablesRequest(ListTablesRequest &&) = default ;
    ListTablesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTablesRequest() = default ;
    ListTablesRequest& operator=(const ListTablesRequest &) = default ;
    ListTablesRequest& operator=(ListTablesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->databaseId_ != nullptr
        && this->pageNumber_ != nullptr && this->pageSize_ != nullptr && this->realLoginUserUid_ != nullptr && this->returnGuid_ != nullptr && this->searchName_ != nullptr
        && this->tid_ != nullptr; };
    // databaseId Field Functions 
    bool hasDatabaseId() const { return this->databaseId_ != nullptr;};
    void deleteDatabaseId() { this->databaseId_ = nullptr;};
    inline string databaseId() const { DARABONBA_PTR_GET_DEFAULT(databaseId_, "") };
    inline ListTablesRequest& setDatabaseId(string databaseId) { DARABONBA_PTR_SET_VALUE(databaseId_, databaseId) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListTablesRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListTablesRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // realLoginUserUid Field Functions 
    bool hasRealLoginUserUid() const { return this->realLoginUserUid_ != nullptr;};
    void deleteRealLoginUserUid() { this->realLoginUserUid_ = nullptr;};
    inline string realLoginUserUid() const { DARABONBA_PTR_GET_DEFAULT(realLoginUserUid_, "") };
    inline ListTablesRequest& setRealLoginUserUid(string realLoginUserUid) { DARABONBA_PTR_SET_VALUE(realLoginUserUid_, realLoginUserUid) };


    // returnGuid Field Functions 
    bool hasReturnGuid() const { return this->returnGuid_ != nullptr;};
    void deleteReturnGuid() { this->returnGuid_ = nullptr;};
    inline bool returnGuid() const { DARABONBA_PTR_GET_DEFAULT(returnGuid_, false) };
    inline ListTablesRequest& setReturnGuid(bool returnGuid) { DARABONBA_PTR_SET_VALUE(returnGuid_, returnGuid) };


    // searchName Field Functions 
    bool hasSearchName() const { return this->searchName_ != nullptr;};
    void deleteSearchName() { this->searchName_ = nullptr;};
    inline string searchName() const { DARABONBA_PTR_GET_DEFAULT(searchName_, "") };
    inline ListTablesRequest& setSearchName(string searchName) { DARABONBA_PTR_SET_VALUE(searchName_, searchName) };


    // tid Field Functions 
    bool hasTid() const { return this->tid_ != nullptr;};
    void deleteTid() { this->tid_ = nullptr;};
    inline int64_t tid() const { DARABONBA_PTR_GET_DEFAULT(tid_, 0L) };
    inline ListTablesRequest& setTid(int64_t tid) { DARABONBA_PTR_SET_VALUE(tid_, tid) };


  protected:
    // The ID of the physical database. You can call the [ListDatabases](https://help.aliyun.com/document_detail/141873.html) or [SearchDatabase](https://help.aliyun.com/document_detail/141876.html) operation to obtain the ID of the physical database.
    // 
    // This parameter is required.
    std::shared_ptr<string> databaseId_ = nullptr;
    // The number of the page to return.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of entries to return on each page.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    std::shared_ptr<string> realLoginUserUid_ = nullptr;
    // Specifies whether to return the GUID of a table. Valid values:
    // 
    // *   **true**: returns the GUID of a table.
    // *   **false**: does not return the GUID of a table.
    std::shared_ptr<bool> returnGuid_ = nullptr;
    // The name used to search for tables. Fuzzy search is supported.
    std::shared_ptr<string> searchName_ = nullptr;
    // The ID of the tenant. You can call the [GetUserActiveTenant](https://help.aliyun.com/document_detail/198073.html) or [ListUserTenants](https://help.aliyun.com/document_detail/198074.html) operation to query the tenant ID.
    std::shared_ptr<int64_t> tid_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
