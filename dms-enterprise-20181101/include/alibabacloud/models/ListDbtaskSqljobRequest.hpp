// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDBTASKSQLJOBREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTDBTASKSQLJOBREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class ListDBTaskSQLJobRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDBTaskSQLJobRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DBTaskGroupId, DBTaskGroupId_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(Tid, tid_);
    };
    friend void from_json(const Darabonba::Json& j, ListDBTaskSQLJobRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DBTaskGroupId, DBTaskGroupId_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(Tid, tid_);
    };
    ListDBTaskSQLJobRequest() = default ;
    ListDBTaskSQLJobRequest(const ListDBTaskSQLJobRequest &) = default ;
    ListDBTaskSQLJobRequest(ListDBTaskSQLJobRequest &&) = default ;
    ListDBTaskSQLJobRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDBTaskSQLJobRequest() = default ;
    ListDBTaskSQLJobRequest& operator=(const ListDBTaskSQLJobRequest &) = default ;
    ListDBTaskSQLJobRequest& operator=(ListDBTaskSQLJobRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->DBTaskGroupId_ != nullptr
        && this->pageNumber_ != nullptr && this->pageSize_ != nullptr && this->tid_ != nullptr; };
    // DBTaskGroupId Field Functions 
    bool hasDBTaskGroupId() const { return this->DBTaskGroupId_ != nullptr;};
    void deleteDBTaskGroupId() { this->DBTaskGroupId_ = nullptr;};
    inline int64_t DBTaskGroupId() const { DARABONBA_PTR_GET_DEFAULT(DBTaskGroupId_, 0L) };
    inline ListDBTaskSQLJobRequest& setDBTaskGroupId(int64_t DBTaskGroupId) { DARABONBA_PTR_SET_VALUE(DBTaskGroupId_, DBTaskGroupId) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int64_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0L) };
    inline ListDBTaskSQLJobRequest& setPageNumber(int64_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline ListDBTaskSQLJobRequest& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // tid Field Functions 
    bool hasTid() const { return this->tid_ != nullptr;};
    void deleteTid() { this->tid_ = nullptr;};
    inline int64_t tid() const { DARABONBA_PTR_GET_DEFAULT(tid_, 0L) };
    inline ListDBTaskSQLJobRequest& setTid(int64_t tid) { DARABONBA_PTR_SET_VALUE(tid_, tid) };


  protected:
    // The ID of the SQL task group. You can call the [GetStructSyncJobDetail](https://help.aliyun.com/document_detail/206160.html) operation to obtain this parameter.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> DBTaskGroupId_ = nullptr;
    // The number of the page to return.
    std::shared_ptr<int64_t> pageNumber_ = nullptr;
    // The number of entries to return on each page.
    std::shared_ptr<int64_t> pageSize_ = nullptr;
    // The ID of the tenant.
    // 
    // > : To view the ID of the tenant, log on to the Data Management (DMS) console and move the pointer over the profile picture in the upper-right corner. For more information, see [Manage DMS tenants](https://help.aliyun.com/document_detail/181330.html).
    std::shared_ptr<int64_t> tid_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
