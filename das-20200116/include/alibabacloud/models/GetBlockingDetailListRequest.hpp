// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETBLOCKINGDETAILLISTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETBLOCKINGDETAILLISTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DAS20200116
{
namespace Models
{
  class GetBlockingDetailListRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetBlockingDetailListRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DbNameList, dbNameList_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(PageNo, pageNo_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(QueryHash, queryHash_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, GetBlockingDetailListRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DbNameList, dbNameList_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(PageNo, pageNo_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(QueryHash, queryHash_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
    };
    GetBlockingDetailListRequest() = default ;
    GetBlockingDetailListRequest(const GetBlockingDetailListRequest &) = default ;
    GetBlockingDetailListRequest(GetBlockingDetailListRequest &&) = default ;
    GetBlockingDetailListRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetBlockingDetailListRequest() = default ;
    GetBlockingDetailListRequest& operator=(const GetBlockingDetailListRequest &) = default ;
    GetBlockingDetailListRequest& operator=(GetBlockingDetailListRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dbNameList_ == nullptr
        && this->endTime_ == nullptr && this->instanceId_ == nullptr && this->pageNo_ == nullptr && this->pageSize_ == nullptr && this->queryHash_ == nullptr
        && this->startTime_ == nullptr; };
    // dbNameList Field Functions 
    bool hasDbNameList() const { return this->dbNameList_ != nullptr;};
    void deleteDbNameList() { this->dbNameList_ = nullptr;};
    inline string getDbNameList() const { DARABONBA_PTR_GET_DEFAULT(dbNameList_, "") };
    inline GetBlockingDetailListRequest& setDbNameList(string dbNameList) { DARABONBA_PTR_SET_VALUE(dbNameList_, dbNameList) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline GetBlockingDetailListRequest& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline GetBlockingDetailListRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // pageNo Field Functions 
    bool hasPageNo() const { return this->pageNo_ != nullptr;};
    void deletePageNo() { this->pageNo_ = nullptr;};
    inline string getPageNo() const { DARABONBA_PTR_GET_DEFAULT(pageNo_, "") };
    inline GetBlockingDetailListRequest& setPageNo(string pageNo) { DARABONBA_PTR_SET_VALUE(pageNo_, pageNo) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline string getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, "") };
    inline GetBlockingDetailListRequest& setPageSize(string pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // queryHash Field Functions 
    bool hasQueryHash() const { return this->queryHash_ != nullptr;};
    void deleteQueryHash() { this->queryHash_ = nullptr;};
    inline string getQueryHash() const { DARABONBA_PTR_GET_DEFAULT(queryHash_, "") };
    inline GetBlockingDetailListRequest& setQueryHash(string queryHash) { DARABONBA_PTR_SET_VALUE(queryHash_, queryHash) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline GetBlockingDetailListRequest& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    // The name of the database. Separate multiple database names with commas (,).
    shared_ptr<string> dbNameList_ {};
    // The end of the time range to query. Set this parameter to a UNIX timestamp representing the number of milliseconds that have elapsed since January 1, 1970, 00:00:00 UTC.
    // 
    // This parameter is required.
    shared_ptr<string> endTime_ {};
    // The ID of the database instance.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // The page number. The value must be an integer that is greater than 0. Default value: 1.
    shared_ptr<string> pageNo_ {};
    // The number of entries per page. The value must be an integer that is greater than 0. Default value: 10.
    shared_ptr<string> pageSize_ {};
    // The hash value of the SQL statement. The hash values of SQL statements of the same type are the same.
    shared_ptr<string> queryHash_ {};
    // The beginning of the time range to query. This value is a UNIX timestamp representing the number of milliseconds that have elapsed since January 1, 1970, 00:00:00 UTC.
    // 
    // This parameter is required.
    shared_ptr<string> startTime_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DAS20200116
#endif
