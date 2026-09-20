// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMETATABLECHANGELOGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETMETATABLECHANGELOGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class GetMetaTableChangeLogRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetMetaTableChangeLogRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ChangeType, changeType_);
      DARABONBA_PTR_TO_JSON(EndDate, endDate_);
      DARABONBA_PTR_TO_JSON(ObjectType, objectType_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(StartDate, startDate_);
      DARABONBA_PTR_TO_JSON(TableGuid, tableGuid_);
    };
    friend void from_json(const Darabonba::Json& j, GetMetaTableChangeLogRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ChangeType, changeType_);
      DARABONBA_PTR_FROM_JSON(EndDate, endDate_);
      DARABONBA_PTR_FROM_JSON(ObjectType, objectType_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(StartDate, startDate_);
      DARABONBA_PTR_FROM_JSON(TableGuid, tableGuid_);
    };
    GetMetaTableChangeLogRequest() = default ;
    GetMetaTableChangeLogRequest(const GetMetaTableChangeLogRequest &) = default ;
    GetMetaTableChangeLogRequest(GetMetaTableChangeLogRequest &&) = default ;
    GetMetaTableChangeLogRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetMetaTableChangeLogRequest() = default ;
    GetMetaTableChangeLogRequest& operator=(const GetMetaTableChangeLogRequest &) = default ;
    GetMetaTableChangeLogRequest& operator=(GetMetaTableChangeLogRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->changeType_ == nullptr
        && this->endDate_ == nullptr && this->objectType_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->startDate_ == nullptr
        && this->tableGuid_ == nullptr; };
    // changeType Field Functions 
    bool hasChangeType() const { return this->changeType_ != nullptr;};
    void deleteChangeType() { this->changeType_ = nullptr;};
    inline string getChangeType() const { DARABONBA_PTR_GET_DEFAULT(changeType_, "") };
    inline GetMetaTableChangeLogRequest& setChangeType(string changeType) { DARABONBA_PTR_SET_VALUE(changeType_, changeType) };


    // endDate Field Functions 
    bool hasEndDate() const { return this->endDate_ != nullptr;};
    void deleteEndDate() { this->endDate_ = nullptr;};
    inline string getEndDate() const { DARABONBA_PTR_GET_DEFAULT(endDate_, "") };
    inline GetMetaTableChangeLogRequest& setEndDate(string endDate) { DARABONBA_PTR_SET_VALUE(endDate_, endDate) };


    // objectType Field Functions 
    bool hasObjectType() const { return this->objectType_ != nullptr;};
    void deleteObjectType() { this->objectType_ = nullptr;};
    inline string getObjectType() const { DARABONBA_PTR_GET_DEFAULT(objectType_, "") };
    inline GetMetaTableChangeLogRequest& setObjectType(string objectType) { DARABONBA_PTR_SET_VALUE(objectType_, objectType) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline GetMetaTableChangeLogRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline GetMetaTableChangeLogRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // startDate Field Functions 
    bool hasStartDate() const { return this->startDate_ != nullptr;};
    void deleteStartDate() { this->startDate_ = nullptr;};
    inline string getStartDate() const { DARABONBA_PTR_GET_DEFAULT(startDate_, "") };
    inline GetMetaTableChangeLogRequest& setStartDate(string startDate) { DARABONBA_PTR_SET_VALUE(startDate_, startDate) };


    // tableGuid Field Functions 
    bool hasTableGuid() const { return this->tableGuid_ != nullptr;};
    void deleteTableGuid() { this->tableGuid_ = nullptr;};
    inline string getTableGuid() const { DARABONBA_PTR_GET_DEFAULT(tableGuid_, "") };
    inline GetMetaTableChangeLogRequest& setTableGuid(string tableGuid) { DARABONBA_PTR_SET_VALUE(tableGuid_, tableGuid) };


  protected:
    // The type of change. Valid values: CREATE_TABLE, ALTER_TABLE, DROP_TABLE, ADD_PARTITION, and DROP_PARTITION.
    shared_ptr<string> changeType_ {};
    // The end date of the table change. Format: yyyy-MM-dd HH:mm:ss.
    // - If the date validation fails, the system uses the current time as the end date by default.
    // - If both the start date and end date fail validation, the system automatically retrieves the table change records from the last 30 days.
    shared_ptr<string> endDate_ {};
    // The type of the changed object. Valid values: TABLE and PARTITION.
    shared_ptr<string> objectType_ {};
    // The page number. Used for pagination.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries per page. Default value: 10. Maximum value: 100.
    shared_ptr<int32_t> pageSize_ {};
    // The start date of the table change. Format: yyyy-MM-dd HH:mm:ss.
    // - If the date validation fails, the system uses the current time as the start date by default.
    // - If both the start date and end date fail validation, the system automatically retrieves the table change records from the last 30 days.
    shared_ptr<string> startDate_ {};
    // The globally unique identifier (GUID) of the table. Format: odps.projectName.tableName. You can call [GetMetaDBTableList](https://help.aliyun.com/document_detail/2780086.html) to obtain the GUID of the table.
    // > Currently, you can call [GetMetaTableChangeLog](https://help.aliyun.com/document_detail/2780094.html) to retrieve the change log of only MaxCompute tables.
    // 
    // This parameter is required.
    shared_ptr<string> tableGuid_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
