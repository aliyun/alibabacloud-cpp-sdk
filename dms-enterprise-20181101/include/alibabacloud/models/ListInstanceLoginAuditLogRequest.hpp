// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTINSTANCELOGINAUDITLOGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTINSTANCELOGINAUDITLOGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class ListInstanceLoginAuditLogRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListInstanceLoginAuditLogRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(OpUserName, opUserName_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(SearchName, searchName_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(Tid, tid_);
    };
    friend void from_json(const Darabonba::Json& j, ListInstanceLoginAuditLogRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(OpUserName, opUserName_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(SearchName, searchName_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(Tid, tid_);
    };
    ListInstanceLoginAuditLogRequest() = default ;
    ListInstanceLoginAuditLogRequest(const ListInstanceLoginAuditLogRequest &) = default ;
    ListInstanceLoginAuditLogRequest(ListInstanceLoginAuditLogRequest &&) = default ;
    ListInstanceLoginAuditLogRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListInstanceLoginAuditLogRequest() = default ;
    ListInstanceLoginAuditLogRequest& operator=(const ListInstanceLoginAuditLogRequest &) = default ;
    ListInstanceLoginAuditLogRequest& operator=(ListInstanceLoginAuditLogRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->endTime_ != nullptr
        && this->opUserName_ != nullptr && this->pageNumber_ != nullptr && this->pageSize_ != nullptr && this->searchName_ != nullptr && this->startTime_ != nullptr
        && this->tid_ != nullptr; };
    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline ListInstanceLoginAuditLogRequest& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // opUserName Field Functions 
    bool hasOpUserName() const { return this->opUserName_ != nullptr;};
    void deleteOpUserName() { this->opUserName_ = nullptr;};
    inline string opUserName() const { DARABONBA_PTR_GET_DEFAULT(opUserName_, "") };
    inline ListInstanceLoginAuditLogRequest& setOpUserName(string opUserName) { DARABONBA_PTR_SET_VALUE(opUserName_, opUserName) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListInstanceLoginAuditLogRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListInstanceLoginAuditLogRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // searchName Field Functions 
    bool hasSearchName() const { return this->searchName_ != nullptr;};
    void deleteSearchName() { this->searchName_ = nullptr;};
    inline string searchName() const { DARABONBA_PTR_GET_DEFAULT(searchName_, "") };
    inline ListInstanceLoginAuditLogRequest& setSearchName(string searchName) { DARABONBA_PTR_SET_VALUE(searchName_, searchName) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline ListInstanceLoginAuditLogRequest& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // tid Field Functions 
    bool hasTid() const { return this->tid_ != nullptr;};
    void deleteTid() { this->tid_ = nullptr;};
    inline int64_t tid() const { DARABONBA_PTR_GET_DEFAULT(tid_, 0L) };
    inline ListInstanceLoginAuditLogRequest& setTid(int64_t tid) { DARABONBA_PTR_SET_VALUE(tid_, tid) };


  protected:
    // The end of the time range to query.
    // 
    // >  The end time supports fuzzy match. Specify the time in the YYYY-MM-DD hh:mm:ss format. We recommend that you use the StartTime and EndTime parameters to specify a time range that does not exceed one day. This way, the returned entries can be displayed by page to increase query efficiency.
    // 
    // This parameter is required.
    std::shared_ptr<string> endTime_ = nullptr;
    // The alias of the user.
    std::shared_ptr<string> opUserName_ = nullptr;
    // The number of the page to return.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of entries to return on each page. Maximum value: 100.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The name of the database or instance whose logon records you want to query.
    // 
    // >  If SQL statements are executed at the instance level, you can set this parameter to an instance name. If SQL statements are executed at the database level, you can set this parameter to a database name.
    std::shared_ptr<string> searchName_ = nullptr;
    // The beginning of the time range to query.
    // 
    // >  The start time supports fuzzy match. Specify the time in the YYYY-MM-DD hh:mm:ss format.
    // 
    // This parameter is required.
    std::shared_ptr<string> startTime_ = nullptr;
    // The ID of the tenant. You can call the [GetUserActiveTenant](https://help.aliyun.com/document_detail/198073.html) operation to query the tenant ID.
    std::shared_ptr<int64_t> tid_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
