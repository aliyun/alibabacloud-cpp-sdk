// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDEADLOCKDETAILLISTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETDEADLOCKDETAILLISTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DAS20200116
{
namespace Models
{
  class GetDeadLockDetailListRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDeadLockDetailListRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DbNameList, dbNameList_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(PageNo, pageNo_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, GetDeadLockDetailListRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DbNameList, dbNameList_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(PageNo, pageNo_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
    };
    GetDeadLockDetailListRequest() = default ;
    GetDeadLockDetailListRequest(const GetDeadLockDetailListRequest &) = default ;
    GetDeadLockDetailListRequest(GetDeadLockDetailListRequest &&) = default ;
    GetDeadLockDetailListRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDeadLockDetailListRequest() = default ;
    GetDeadLockDetailListRequest& operator=(const GetDeadLockDetailListRequest &) = default ;
    GetDeadLockDetailListRequest& operator=(GetDeadLockDetailListRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dbNameList_ == nullptr
        && return this->endTime_ == nullptr && return this->instanceId_ == nullptr && return this->pageNo_ == nullptr && return this->pageSize_ == nullptr && return this->startTime_ == nullptr; };
    // dbNameList Field Functions 
    bool hasDbNameList() const { return this->dbNameList_ != nullptr;};
    void deleteDbNameList() { this->dbNameList_ = nullptr;};
    inline string dbNameList() const { DARABONBA_PTR_GET_DEFAULT(dbNameList_, "") };
    inline GetDeadLockDetailListRequest& setDbNameList(string dbNameList) { DARABONBA_PTR_SET_VALUE(dbNameList_, dbNameList) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline GetDeadLockDetailListRequest& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline GetDeadLockDetailListRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // pageNo Field Functions 
    bool hasPageNo() const { return this->pageNo_ != nullptr;};
    void deletePageNo() { this->pageNo_ = nullptr;};
    inline string pageNo() const { DARABONBA_PTR_GET_DEFAULT(pageNo_, "") };
    inline GetDeadLockDetailListRequest& setPageNo(string pageNo) { DARABONBA_PTR_SET_VALUE(pageNo_, pageNo) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline string pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, "") };
    inline GetDeadLockDetailListRequest& setPageSize(string pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline GetDeadLockDetailListRequest& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    // The name of the database. When you specify multiple databases, you must separate the database names with commas (,).
    std::shared_ptr<string> dbNameList_ = nullptr;
    // The end of the time range to query. Set this parameter to a UNIX timestamp representing the number of milliseconds that have elapsed since January 1, 1970, 00:00:00 UTC.
    // 
    // This parameter is required.
    std::shared_ptr<string> endTime_ = nullptr;
    // The ID of the database instance.
    // 
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The page number. The value must be an integer that is greater than 0. Default value: 1.
    std::shared_ptr<string> pageNo_ = nullptr;
    // The number of entries per page. Default value: 10.
    std::shared_ptr<string> pageSize_ = nullptr;
    // The beginning of the time range to query. Set this parameter to a UNIX timestamp representing the number of milliseconds that have elapsed since January 1, 1970, 00:00:00 UTC.
    // 
    // This parameter is required.
    std::shared_ptr<string> startTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DAS20200116
#endif
