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
    virtual bool empty() const override { this->dataType_ != nullptr
        && this->endTime_ != nullptr && this->marker_ != nullptr && this->ownerId_ != nullptr && this->pageSize_ != nullptr && this->startTime_ != nullptr
        && this->table_ != nullptr; };
    // dataType Field Functions 
    bool hasDataType() const { return this->dataType_ != nullptr;};
    void deleteDataType() { this->dataType_ = nullptr;};
    inline string dataType() const { DARABONBA_PTR_GET_DEFAULT(dataType_, "") };
    inline QueryUserOmsDataRequest& setDataType(string dataType) { DARABONBA_PTR_SET_VALUE(dataType_, dataType) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline QueryUserOmsDataRequest& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // marker Field Functions 
    bool hasMarker() const { return this->marker_ != nullptr;};
    void deleteMarker() { this->marker_ = nullptr;};
    inline string marker() const { DARABONBA_PTR_GET_DEFAULT(marker_, "") };
    inline QueryUserOmsDataRequest& setMarker(string marker) { DARABONBA_PTR_SET_VALUE(marker_, marker) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline QueryUserOmsDataRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline QueryUserOmsDataRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline QueryUserOmsDataRequest& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // table Field Functions 
    bool hasTable() const { return this->table_ != nullptr;};
    void deleteTable() { this->table_ = nullptr;};
    inline string table() const { DARABONBA_PTR_GET_DEFAULT(table_, "") };
    inline QueryUserOmsDataRequest& setTable(string table) { DARABONBA_PTR_SET_VALUE(table_, table) };


  protected:
    // The time type of the usage data. Set the parameter based on the description in the documentation of the specified service. Valid values:
    // 
    // *   Raw
    // *   Hour
    // *   Day
    // *   Month
    // 
    // This parameter is required.
    std::shared_ptr<string> dataType_ = nullptr;
    // The end of the time range to query.
    // 
    // Specify the time in the ISO 8601 standard in the yyyy-MM-ddTHH:mm:ssZ format. The time must be in UTC.
    // 
    // This parameter is required.
    std::shared_ptr<string> endTime_ = nullptr;
    // The name of the record from which the usage data starts to return. The usage data records whose names are alphabetically after the value of the Marker parameter are returned. By default, the usage data starts to return from the earliest record.
    std::shared_ptr<string> marker_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // The number of entries to return on each page. Valid values: 1 to 200. Default value: 100.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The beginning of the time range to query.
    // 
    // Specify the time in the ISO 8601 standard in the yyyy-MM-ddTHH:mm:ssZ format. The time must be in UTC.
    // 
    // This parameter is required.
    std::shared_ptr<string> startTime_ = nullptr;
    // The service whose usage data you want to query and the details of the usage data. The parameter value is usually set to the code of a service. Various usage models are provided for different services.
    // 
    // This parameter is required.
    std::shared_ptr<string> table_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20171214
#endif
