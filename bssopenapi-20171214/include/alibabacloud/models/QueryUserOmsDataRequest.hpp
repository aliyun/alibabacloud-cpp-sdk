// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYUSEROMSDATAREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYUSEROMSDATAREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BssOpenApi20171214
{
namespace Models
{
  class QueryUserOmsDataRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryUserOmsDataRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DataType, dataType_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(Marker, marker_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(Table, table_);
    };
    friend void from_json(const Darabonba::Json& j, QueryUserOmsDataRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DataType, dataType_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(Marker, marker_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(Table, table_);
    };
    QueryUserOmsDataRequest() = default ;
    QueryUserOmsDataRequest(const QueryUserOmsDataRequest &) = default ;
    QueryUserOmsDataRequest(QueryUserOmsDataRequest &&) = default ;
    QueryUserOmsDataRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryUserOmsDataRequest() = default ;
    QueryUserOmsDataRequest& operator=(const QueryUserOmsDataRequest &) = default ;
    QueryUserOmsDataRequest& operator=(QueryUserOmsDataRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dataType_ == nullptr
        && this->endTime_ == nullptr && this->marker_ == nullptr && this->ownerId_ == nullptr && this->pageSize_ == nullptr && this->startTime_ == nullptr
        && this->table_ == nullptr; };
    // dataType Field Functions 
    bool hasDataType() const { return this->dataType_ != nullptr;};
    void deleteDataType() { this->dataType_ = nullptr;};
    inline string getDataType() const { DARABONBA_PTR_GET_DEFAULT(dataType_, "") };
    inline QueryUserOmsDataRequest& setDataType(string dataType) { DARABONBA_PTR_SET_VALUE(dataType_, dataType) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline QueryUserOmsDataRequest& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // marker Field Functions 
    bool hasMarker() const { return this->marker_ != nullptr;};
    void deleteMarker() { this->marker_ = nullptr;};
    inline string getMarker() const { DARABONBA_PTR_GET_DEFAULT(marker_, "") };
    inline QueryUserOmsDataRequest& setMarker(string marker) { DARABONBA_PTR_SET_VALUE(marker_, marker) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline QueryUserOmsDataRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline QueryUserOmsDataRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline QueryUserOmsDataRequest& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // table Field Functions 
    bool hasTable() const { return this->table_ != nullptr;};
    void deleteTable() { this->table_ = nullptr;};
    inline string getTable() const { DARABONBA_PTR_GET_DEFAULT(table_, "") };
    inline QueryUserOmsDataRequest& setTable(string table) { DARABONBA_PTR_SET_VALUE(table_, table) };


  protected:
    // The data timestamp type of the metering data. Refer to the specific service documentation for details. Valid values:
    // - Raw: hourly
    // - Hour: hourly
    // - Day: daily
    // - Month: monthly
    // 
    // This parameter is required.
    shared_ptr<string> dataType_ {};
    // The end time of the request.
    // 
    // The date format must comply with the ISO 8601 standard and use UTC time. Format: yyyy-mm-ddThh:mm:ssZ.
    // 
    // This parameter is required.
    shared_ptr<string> endTime_ {};
    // The marker that specifies the starting point for returning results in alphabetical order after the NextToken. By default, results are returned from the beginning.
    shared_ptr<string> marker_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The number of rows per page for paging in a paged query. Valid values: 1 to 200. Default value: 100.
    shared_ptr<int32_t> pageSize_ {};
    // The start time of the request.
    // 
    // The date format must comply with the ISO 8601 standard and use UTC time. Format: yyyy-mm-ddThh:mm:ssZ.
    // 
    // This parameter is required.
    shared_ptr<string> startTime_ {};
    // The product and detail information for the usage data, which is typically the ProductCode. Different services support multiple metering models.
    // 
    // This parameter is required.
    shared_ptr<string> table_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20171214
#endif
