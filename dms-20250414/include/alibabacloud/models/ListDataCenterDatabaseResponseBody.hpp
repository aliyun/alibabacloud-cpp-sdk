// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDATACENTERDATABASERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTDATACENTERDATABASERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dms20250414
{
namespace Models
{
  class ListDataCenterDatabaseResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDataCenterDatabaseResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ListDataCenterDatabaseResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ListDataCenterDatabaseResponseBody() = default ;
    ListDataCenterDatabaseResponseBody(const ListDataCenterDatabaseResponseBody &) = default ;
    ListDataCenterDatabaseResponseBody(ListDataCenterDatabaseResponseBody &&) = default ;
    ListDataCenterDatabaseResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDataCenterDatabaseResponseBody() = default ;
    ListDataCenterDatabaseResponseBody& operator=(const ListDataCenterDatabaseResponseBody &) = default ;
    ListDataCenterDatabaseResponseBody& operator=(ListDataCenterDatabaseResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(DatabaseDesc, databaseDesc_);
        DARABONBA_PTR_TO_JSON(DatabaseName, databaseName_);
        DARABONBA_PTR_TO_JSON(DbId, dbId_);
        DARABONBA_PTR_TO_JSON(DbType, dbType_);
        DARABONBA_PTR_TO_JSON(DescUpdateTime, descUpdateTime_);
        DARABONBA_PTR_TO_JSON(DmsDbId, dmsDbId_);
        DARABONBA_PTR_TO_JSON(DmsInstanceId, dmsInstanceId_);
        DARABONBA_PTR_TO_JSON(GmtCreated, gmtCreated_);
        DARABONBA_PTR_TO_JSON(ImportType, importType_);
        DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
        DARABONBA_PTR_TO_JSON(IsInternal, isInternal_);
        DARABONBA_PTR_TO_JSON(Size, size_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(DatabaseDesc, databaseDesc_);
        DARABONBA_PTR_FROM_JSON(DatabaseName, databaseName_);
        DARABONBA_PTR_FROM_JSON(DbId, dbId_);
        DARABONBA_PTR_FROM_JSON(DbType, dbType_);
        DARABONBA_PTR_FROM_JSON(DescUpdateTime, descUpdateTime_);
        DARABONBA_PTR_FROM_JSON(DmsDbId, dmsDbId_);
        DARABONBA_PTR_FROM_JSON(DmsInstanceId, dmsInstanceId_);
        DARABONBA_PTR_FROM_JSON(GmtCreated, gmtCreated_);
        DARABONBA_PTR_FROM_JSON(ImportType, importType_);
        DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
        DARABONBA_PTR_FROM_JSON(IsInternal, isInternal_);
        DARABONBA_PTR_FROM_JSON(Size, size_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->databaseDesc_ == nullptr
        && this->databaseName_ == nullptr && this->dbId_ == nullptr && this->dbType_ == nullptr && this->descUpdateTime_ == nullptr && this->dmsDbId_ == nullptr
        && this->dmsInstanceId_ == nullptr && this->gmtCreated_ == nullptr && this->importType_ == nullptr && this->instanceName_ == nullptr && this->isInternal_ == nullptr
        && this->size_ == nullptr; };
      // databaseDesc Field Functions 
      bool hasDatabaseDesc() const { return this->databaseDesc_ != nullptr;};
      void deleteDatabaseDesc() { this->databaseDesc_ = nullptr;};
      inline string getDatabaseDesc() const { DARABONBA_PTR_GET_DEFAULT(databaseDesc_, "") };
      inline Data& setDatabaseDesc(string databaseDesc) { DARABONBA_PTR_SET_VALUE(databaseDesc_, databaseDesc) };


      // databaseName Field Functions 
      bool hasDatabaseName() const { return this->databaseName_ != nullptr;};
      void deleteDatabaseName() { this->databaseName_ = nullptr;};
      inline string getDatabaseName() const { DARABONBA_PTR_GET_DEFAULT(databaseName_, "") };
      inline Data& setDatabaseName(string databaseName) { DARABONBA_PTR_SET_VALUE(databaseName_, databaseName) };


      // dbId Field Functions 
      bool hasDbId() const { return this->dbId_ != nullptr;};
      void deleteDbId() { this->dbId_ = nullptr;};
      inline string getDbId() const { DARABONBA_PTR_GET_DEFAULT(dbId_, "") };
      inline Data& setDbId(string dbId) { DARABONBA_PTR_SET_VALUE(dbId_, dbId) };


      // dbType Field Functions 
      bool hasDbType() const { return this->dbType_ != nullptr;};
      void deleteDbType() { this->dbType_ = nullptr;};
      inline string getDbType() const { DARABONBA_PTR_GET_DEFAULT(dbType_, "") };
      inline Data& setDbType(string dbType) { DARABONBA_PTR_SET_VALUE(dbType_, dbType) };


      // descUpdateTime Field Functions 
      bool hasDescUpdateTime() const { return this->descUpdateTime_ != nullptr;};
      void deleteDescUpdateTime() { this->descUpdateTime_ = nullptr;};
      inline string getDescUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(descUpdateTime_, "") };
      inline Data& setDescUpdateTime(string descUpdateTime) { DARABONBA_PTR_SET_VALUE(descUpdateTime_, descUpdateTime) };


      // dmsDbId Field Functions 
      bool hasDmsDbId() const { return this->dmsDbId_ != nullptr;};
      void deleteDmsDbId() { this->dmsDbId_ = nullptr;};
      inline int64_t getDmsDbId() const { DARABONBA_PTR_GET_DEFAULT(dmsDbId_, 0L) };
      inline Data& setDmsDbId(int64_t dmsDbId) { DARABONBA_PTR_SET_VALUE(dmsDbId_, dmsDbId) };


      // dmsInstanceId Field Functions 
      bool hasDmsInstanceId() const { return this->dmsInstanceId_ != nullptr;};
      void deleteDmsInstanceId() { this->dmsInstanceId_ = nullptr;};
      inline int64_t getDmsInstanceId() const { DARABONBA_PTR_GET_DEFAULT(dmsInstanceId_, 0L) };
      inline Data& setDmsInstanceId(int64_t dmsInstanceId) { DARABONBA_PTR_SET_VALUE(dmsInstanceId_, dmsInstanceId) };


      // gmtCreated Field Functions 
      bool hasGmtCreated() const { return this->gmtCreated_ != nullptr;};
      void deleteGmtCreated() { this->gmtCreated_ = nullptr;};
      inline string getGmtCreated() const { DARABONBA_PTR_GET_DEFAULT(gmtCreated_, "") };
      inline Data& setGmtCreated(string gmtCreated) { DARABONBA_PTR_SET_VALUE(gmtCreated_, gmtCreated) };


      // importType Field Functions 
      bool hasImportType() const { return this->importType_ != nullptr;};
      void deleteImportType() { this->importType_ = nullptr;};
      inline string getImportType() const { DARABONBA_PTR_GET_DEFAULT(importType_, "") };
      inline Data& setImportType(string importType) { DARABONBA_PTR_SET_VALUE(importType_, importType) };


      // instanceName Field Functions 
      bool hasInstanceName() const { return this->instanceName_ != nullptr;};
      void deleteInstanceName() { this->instanceName_ = nullptr;};
      inline string getInstanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
      inline Data& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


      // isInternal Field Functions 
      bool hasIsInternal() const { return this->isInternal_ != nullptr;};
      void deleteIsInternal() { this->isInternal_ = nullptr;};
      inline string getIsInternal() const { DARABONBA_PTR_GET_DEFAULT(isInternal_, "") };
      inline Data& setIsInternal(string isInternal) { DARABONBA_PTR_SET_VALUE(isInternal_, isInternal) };


      // size Field Functions 
      bool hasSize() const { return this->size_ != nullptr;};
      void deleteSize() { this->size_ = nullptr;};
      inline int64_t getSize() const { DARABONBA_PTR_GET_DEFAULT(size_, 0L) };
      inline Data& setSize(int64_t size) { DARABONBA_PTR_SET_VALUE(size_, size) };


    protected:
      shared_ptr<string> databaseDesc_ {};
      shared_ptr<string> databaseName_ {};
      shared_ptr<string> dbId_ {};
      shared_ptr<string> dbType_ {};
      shared_ptr<string> descUpdateTime_ {};
      shared_ptr<int64_t> dmsDbId_ {};
      shared_ptr<int64_t> dmsInstanceId_ {};
      shared_ptr<string> gmtCreated_ {};
      shared_ptr<string> importType_ {};
      shared_ptr<string> instanceName_ {};
      shared_ptr<string> isInternal_ {};
      shared_ptr<int64_t> size_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->errorCode_ == nullptr && this->errorMessage_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<ListDataCenterDatabaseResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<ListDataCenterDatabaseResponseBody::Data>) };
    inline vector<ListDataCenterDatabaseResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<ListDataCenterDatabaseResponseBody::Data>) };
    inline ListDataCenterDatabaseResponseBody& setData(const vector<ListDataCenterDatabaseResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListDataCenterDatabaseResponseBody& setData(vector<ListDataCenterDatabaseResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline ListDataCenterDatabaseResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline ListDataCenterDatabaseResponseBody& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListDataCenterDatabaseResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListDataCenterDatabaseResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<vector<ListDataCenterDatabaseResponseBody::Data>> data_ {};
    shared_ptr<string> errorCode_ {};
    shared_ptr<string> errorMessage_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dms20250414
#endif
