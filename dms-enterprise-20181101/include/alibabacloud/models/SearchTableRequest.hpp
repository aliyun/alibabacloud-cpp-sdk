// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SEARCHTABLEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SEARCHTABLEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class SearchTableRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SearchTableRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DbType, dbType_);
      DARABONBA_PTR_TO_JSON(EnvType, envType_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(ReturnGuid, returnGuid_);
      DARABONBA_PTR_TO_JSON(SearchKey, searchKey_);
      DARABONBA_PTR_TO_JSON(SearchRange, searchRange_);
      DARABONBA_PTR_TO_JSON(SearchTarget, searchTarget_);
      DARABONBA_PTR_TO_JSON(Tid, tid_);
    };
    friend void from_json(const Darabonba::Json& j, SearchTableRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DbType, dbType_);
      DARABONBA_PTR_FROM_JSON(EnvType, envType_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(ReturnGuid, returnGuid_);
      DARABONBA_PTR_FROM_JSON(SearchKey, searchKey_);
      DARABONBA_PTR_FROM_JSON(SearchRange, searchRange_);
      DARABONBA_PTR_FROM_JSON(SearchTarget, searchTarget_);
      DARABONBA_PTR_FROM_JSON(Tid, tid_);
    };
    SearchTableRequest() = default ;
    SearchTableRequest(const SearchTableRequest &) = default ;
    SearchTableRequest(SearchTableRequest &&) = default ;
    SearchTableRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SearchTableRequest() = default ;
    SearchTableRequest& operator=(const SearchTableRequest &) = default ;
    SearchTableRequest& operator=(SearchTableRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dbType_ == nullptr
        && return this->envType_ == nullptr && return this->pageNumber_ == nullptr && return this->pageSize_ == nullptr && return this->returnGuid_ == nullptr && return this->searchKey_ == nullptr
        && return this->searchRange_ == nullptr && return this->searchTarget_ == nullptr && return this->tid_ == nullptr; };
    // dbType Field Functions 
    bool hasDbType() const { return this->dbType_ != nullptr;};
    void deleteDbType() { this->dbType_ = nullptr;};
    inline string dbType() const { DARABONBA_PTR_GET_DEFAULT(dbType_, "") };
    inline SearchTableRequest& setDbType(string dbType) { DARABONBA_PTR_SET_VALUE(dbType_, dbType) };


    // envType Field Functions 
    bool hasEnvType() const { return this->envType_ != nullptr;};
    void deleteEnvType() { this->envType_ = nullptr;};
    inline string envType() const { DARABONBA_PTR_GET_DEFAULT(envType_, "") };
    inline SearchTableRequest& setEnvType(string envType) { DARABONBA_PTR_SET_VALUE(envType_, envType) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline SearchTableRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline SearchTableRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // returnGuid Field Functions 
    bool hasReturnGuid() const { return this->returnGuid_ != nullptr;};
    void deleteReturnGuid() { this->returnGuid_ = nullptr;};
    inline bool returnGuid() const { DARABONBA_PTR_GET_DEFAULT(returnGuid_, false) };
    inline SearchTableRequest& setReturnGuid(bool returnGuid) { DARABONBA_PTR_SET_VALUE(returnGuid_, returnGuid) };


    // searchKey Field Functions 
    bool hasSearchKey() const { return this->searchKey_ != nullptr;};
    void deleteSearchKey() { this->searchKey_ = nullptr;};
    inline string searchKey() const { DARABONBA_PTR_GET_DEFAULT(searchKey_, "") };
    inline SearchTableRequest& setSearchKey(string searchKey) { DARABONBA_PTR_SET_VALUE(searchKey_, searchKey) };


    // searchRange Field Functions 
    bool hasSearchRange() const { return this->searchRange_ != nullptr;};
    void deleteSearchRange() { this->searchRange_ = nullptr;};
    inline string searchRange() const { DARABONBA_PTR_GET_DEFAULT(searchRange_, "") };
    inline SearchTableRequest& setSearchRange(string searchRange) { DARABONBA_PTR_SET_VALUE(searchRange_, searchRange) };


    // searchTarget Field Functions 
    bool hasSearchTarget() const { return this->searchTarget_ != nullptr;};
    void deleteSearchTarget() { this->searchTarget_ = nullptr;};
    inline string searchTarget() const { DARABONBA_PTR_GET_DEFAULT(searchTarget_, "") };
    inline SearchTableRequest& setSearchTarget(string searchTarget) { DARABONBA_PTR_SET_VALUE(searchTarget_, searchTarget) };


    // tid Field Functions 
    bool hasTid() const { return this->tid_ != nullptr;};
    void deleteTid() { this->tid_ = nullptr;};
    inline int64_t tid() const { DARABONBA_PTR_GET_DEFAULT(tid_, 0L) };
    inline SearchTableRequest& setTid(int64_t tid) { DARABONBA_PTR_SET_VALUE(tid_, tid) };


  protected:
    // The type of database. Valid values:
    // 
    // *   **MySQL**
    // *   **SQLServer**
    // *   **PostgreSQL**
    // *   **Oracle**
    // *   **DRDS**
    // *   **OceanBase**
    // *   **Mongo**
    // *   **Redis**
    std::shared_ptr<string> dbType_ = nullptr;
    // The type of the environment to which databases belong. For more information, see [Change the environment type of an instance](https://help.aliyun.com/document_detail/163309.html).
    std::shared_ptr<string> envType_ = nullptr;
    // The number of the page to return.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of entries to return on each page.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // Specifies whether to return the GUID of each table.
    std::shared_ptr<bool> returnGuid_ = nullptr;
    // The keyword that is used to query tables.
    std::shared_ptr<string> searchKey_ = nullptr;
    // The scope of tables that you want to query. Valid values:
    // 
    // *   **HAS_PERMSSION**: the tables on which the current account has permissions.
    // *   **OWNER**: the tables owned by the current account.
    // *   **MY_FOCUS**: the tables that the current account follows.
    // *   **UNKNOWN**: all tables.
    std::shared_ptr<string> searchRange_ = nullptr;
    // The type of table that you want to query. Valid values:
    // 
    // *   **TABLE**: physical and logical tables
    // *   **SINGLE_TABLE**: physical tables
    // *   **LOGIC_TABLE**: logical tables
    std::shared_ptr<string> searchTarget_ = nullptr;
    // The ID of the tenant.
    // 
    // > To view the tenant ID, move the pointer over the profile picture in the upper-right corner of the Data Management (DMS) console. For more information, see the [View information about the current tenant](https://help.aliyun.com/document_detail/181330.html) section of the "Manage DMS tenants" topic.
    std::shared_ptr<int64_t> tid_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
