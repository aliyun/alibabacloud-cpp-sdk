// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMETATABLELINEAGERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETMETATABLELINEAGERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class GetMetaTableLineageResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetMetaTableLineageResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetMetaTableLineageResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetMetaTableLineageResponseBody() = default ;
    GetMetaTableLineageResponseBody(const GetMetaTableLineageResponseBody &) = default ;
    GetMetaTableLineageResponseBody(GetMetaTableLineageResponseBody &&) = default ;
    GetMetaTableLineageResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetMetaTableLineageResponseBody() = default ;
    GetMetaTableLineageResponseBody& operator=(const GetMetaTableLineageResponseBody &) = default ;
    GetMetaTableLineageResponseBody& operator=(GetMetaTableLineageResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(DataEntityList, dataEntityList_);
        DARABONBA_PTR_TO_JSON(HasNext, hasNext_);
        DARABONBA_PTR_TO_JSON(NextPrimaryKey, nextPrimaryKey_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(DataEntityList, dataEntityList_);
        DARABONBA_PTR_FROM_JSON(HasNext, hasNext_);
        DARABONBA_PTR_FROM_JSON(NextPrimaryKey, nextPrimaryKey_);
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
      class DataEntityList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const DataEntityList& obj) { 
          DARABONBA_PTR_TO_JSON(CreateTimestamp, createTimestamp_);
          DARABONBA_PTR_TO_JSON(DatabaseName, databaseName_);
          DARABONBA_PTR_TO_JSON(TableGuid, tableGuid_);
          DARABONBA_PTR_TO_JSON(TableName, tableName_);
        };
        friend void from_json(const Darabonba::Json& j, DataEntityList& obj) { 
          DARABONBA_PTR_FROM_JSON(CreateTimestamp, createTimestamp_);
          DARABONBA_PTR_FROM_JSON(DatabaseName, databaseName_);
          DARABONBA_PTR_FROM_JSON(TableGuid, tableGuid_);
          DARABONBA_PTR_FROM_JSON(TableName, tableName_);
        };
        DataEntityList() = default ;
        DataEntityList(const DataEntityList &) = default ;
        DataEntityList(DataEntityList &&) = default ;
        DataEntityList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~DataEntityList() = default ;
        DataEntityList& operator=(const DataEntityList &) = default ;
        DataEntityList& operator=(DataEntityList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->createTimestamp_ == nullptr
        && this->databaseName_ == nullptr && this->tableGuid_ == nullptr && this->tableName_ == nullptr; };
        // createTimestamp Field Functions 
        bool hasCreateTimestamp() const { return this->createTimestamp_ != nullptr;};
        void deleteCreateTimestamp() { this->createTimestamp_ = nullptr;};
        inline int64_t getCreateTimestamp() const { DARABONBA_PTR_GET_DEFAULT(createTimestamp_, 0L) };
        inline DataEntityList& setCreateTimestamp(int64_t createTimestamp) { DARABONBA_PTR_SET_VALUE(createTimestamp_, createTimestamp) };


        // databaseName Field Functions 
        bool hasDatabaseName() const { return this->databaseName_ != nullptr;};
        void deleteDatabaseName() { this->databaseName_ = nullptr;};
        inline string getDatabaseName() const { DARABONBA_PTR_GET_DEFAULT(databaseName_, "") };
        inline DataEntityList& setDatabaseName(string databaseName) { DARABONBA_PTR_SET_VALUE(databaseName_, databaseName) };


        // tableGuid Field Functions 
        bool hasTableGuid() const { return this->tableGuid_ != nullptr;};
        void deleteTableGuid() { this->tableGuid_ = nullptr;};
        inline string getTableGuid() const { DARABONBA_PTR_GET_DEFAULT(tableGuid_, "") };
        inline DataEntityList& setTableGuid(string tableGuid) { DARABONBA_PTR_SET_VALUE(tableGuid_, tableGuid) };


        // tableName Field Functions 
        bool hasTableName() const { return this->tableName_ != nullptr;};
        void deleteTableName() { this->tableName_ = nullptr;};
        inline string getTableName() const { DARABONBA_PTR_GET_DEFAULT(tableName_, "") };
        inline DataEntityList& setTableName(string tableName) { DARABONBA_PTR_SET_VALUE(tableName_, tableName) };


      protected:
        // The time when the table was created.
        shared_ptr<int64_t> createTimestamp_ {};
        // The name of the database.
        shared_ptr<string> databaseName_ {};
        // The unique identifier of the table.
        shared_ptr<string> tableGuid_ {};
        // The name of the table.
        shared_ptr<string> tableName_ {};
      };

      virtual bool empty() const override { return this->dataEntityList_ == nullptr
        && this->hasNext_ == nullptr && this->nextPrimaryKey_ == nullptr; };
      // dataEntityList Field Functions 
      bool hasDataEntityList() const { return this->dataEntityList_ != nullptr;};
      void deleteDataEntityList() { this->dataEntityList_ = nullptr;};
      inline const vector<Data::DataEntityList> & getDataEntityList() const { DARABONBA_PTR_GET_CONST(dataEntityList_, vector<Data::DataEntityList>) };
      inline vector<Data::DataEntityList> getDataEntityList() { DARABONBA_PTR_GET(dataEntityList_, vector<Data::DataEntityList>) };
      inline Data& setDataEntityList(const vector<Data::DataEntityList> & dataEntityList) { DARABONBA_PTR_SET_VALUE(dataEntityList_, dataEntityList) };
      inline Data& setDataEntityList(vector<Data::DataEntityList> && dataEntityList) { DARABONBA_PTR_SET_RVALUE(dataEntityList_, dataEntityList) };


      // hasNext Field Functions 
      bool hasHasNext() const { return this->hasNext_ != nullptr;};
      void deleteHasNext() { this->hasNext_ = nullptr;};
      inline bool getHasNext() const { DARABONBA_PTR_GET_DEFAULT(hasNext_, false) };
      inline Data& setHasNext(bool hasNext) { DARABONBA_PTR_SET_VALUE(hasNext_, hasNext) };


      // nextPrimaryKey Field Functions 
      bool hasNextPrimaryKey() const { return this->nextPrimaryKey_ != nullptr;};
      void deleteNextPrimaryKey() { this->nextPrimaryKey_ = nullptr;};
      inline string getNextPrimaryKey() const { DARABONBA_PTR_GET_DEFAULT(nextPrimaryKey_, "") };
      inline Data& setNextPrimaryKey(string nextPrimaryKey) { DARABONBA_PTR_SET_VALUE(nextPrimaryKey_, nextPrimaryKey) };


    protected:
      // The information about the table.
      shared_ptr<vector<Data::DataEntityList>> dataEntityList_ {};
      // Indicates whether the next page exists.
      shared_ptr<bool> hasNext_ {};
      // The logic of paging. If the value true is returned for the HasNext parameter and a value is returned for the NextPrimaryKey parameter in the response of the previous request, you must use the value of the NextPrimaryKey parameter for the next request.
      shared_ptr<string> nextPrimaryKey_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->errorCode_ == nullptr && this->errorMessage_ == nullptr && this->httpStatusCode_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetMetaTableLineageResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetMetaTableLineageResponseBody::Data) };
    inline GetMetaTableLineageResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetMetaTableLineageResponseBody::Data) };
    inline GetMetaTableLineageResponseBody& setData(const GetMetaTableLineageResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetMetaTableLineageResponseBody& setData(GetMetaTableLineageResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline GetMetaTableLineageResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline GetMetaTableLineageResponseBody& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline GetMetaTableLineageResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetMetaTableLineageResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetMetaTableLineageResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The business data.
    shared_ptr<GetMetaTableLineageResponseBody::Data> data_ {};
    // The error code.
    shared_ptr<string> errorCode_ {};
    // The error message.
    shared_ptr<string> errorMessage_ {};
    // The HTTP status code.
    shared_ptr<int32_t> httpStatusCode_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
