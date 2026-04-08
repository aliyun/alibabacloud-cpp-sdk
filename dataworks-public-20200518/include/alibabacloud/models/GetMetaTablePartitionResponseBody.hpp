// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMETATABLEPARTITIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETMETATABLEPARTITIONRESPONSEBODY_HPP_
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
  class GetMetaTablePartitionResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetMetaTablePartitionResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetMetaTablePartitionResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetMetaTablePartitionResponseBody() = default ;
    GetMetaTablePartitionResponseBody(const GetMetaTablePartitionResponseBody &) = default ;
    GetMetaTablePartitionResponseBody(GetMetaTablePartitionResponseBody &&) = default ;
    GetMetaTablePartitionResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetMetaTablePartitionResponseBody() = default ;
    GetMetaTablePartitionResponseBody& operator=(const GetMetaTablePartitionResponseBody &) = default ;
    GetMetaTablePartitionResponseBody& operator=(GetMetaTablePartitionResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(DataEntityList, dataEntityList_);
        DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(DataEntityList, dataEntityList_);
        DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
        DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
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
          DARABONBA_PTR_TO_JSON(Comment, comment_);
          DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
          DARABONBA_PTR_TO_JSON(DataSize, dataSize_);
          DARABONBA_PTR_TO_JSON(ModifiedTime, modifiedTime_);
          DARABONBA_PTR_TO_JSON(PartitionGuid, partitionGuid_);
          DARABONBA_PTR_TO_JSON(PartitionLocation, partitionLocation_);
          DARABONBA_PTR_TO_JSON(PartitionName, partitionName_);
          DARABONBA_PTR_TO_JSON(PartitionPath, partitionPath_);
          DARABONBA_PTR_TO_JSON(PartitionType, partitionType_);
          DARABONBA_PTR_TO_JSON(RecordCount, recordCount_);
          DARABONBA_PTR_TO_JSON(TableGuid, tableGuid_);
        };
        friend void from_json(const Darabonba::Json& j, DataEntityList& obj) { 
          DARABONBA_PTR_FROM_JSON(Comment, comment_);
          DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
          DARABONBA_PTR_FROM_JSON(DataSize, dataSize_);
          DARABONBA_PTR_FROM_JSON(ModifiedTime, modifiedTime_);
          DARABONBA_PTR_FROM_JSON(PartitionGuid, partitionGuid_);
          DARABONBA_PTR_FROM_JSON(PartitionLocation, partitionLocation_);
          DARABONBA_PTR_FROM_JSON(PartitionName, partitionName_);
          DARABONBA_PTR_FROM_JSON(PartitionPath, partitionPath_);
          DARABONBA_PTR_FROM_JSON(PartitionType, partitionType_);
          DARABONBA_PTR_FROM_JSON(RecordCount, recordCount_);
          DARABONBA_PTR_FROM_JSON(TableGuid, tableGuid_);
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
        virtual bool empty() const override { return this->comment_ == nullptr
        && this->createTime_ == nullptr && this->dataSize_ == nullptr && this->modifiedTime_ == nullptr && this->partitionGuid_ == nullptr && this->partitionLocation_ == nullptr
        && this->partitionName_ == nullptr && this->partitionPath_ == nullptr && this->partitionType_ == nullptr && this->recordCount_ == nullptr && this->tableGuid_ == nullptr; };
        // comment Field Functions 
        bool hasComment() const { return this->comment_ != nullptr;};
        void deleteComment() { this->comment_ = nullptr;};
        inline string getComment() const { DARABONBA_PTR_GET_DEFAULT(comment_, "") };
        inline DataEntityList& setComment(string comment) { DARABONBA_PTR_SET_VALUE(comment_, comment) };


        // createTime Field Functions 
        bool hasCreateTime() const { return this->createTime_ != nullptr;};
        void deleteCreateTime() { this->createTime_ = nullptr;};
        inline int64_t getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
        inline DataEntityList& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


        // dataSize Field Functions 
        bool hasDataSize() const { return this->dataSize_ != nullptr;};
        void deleteDataSize() { this->dataSize_ = nullptr;};
        inline int64_t getDataSize() const { DARABONBA_PTR_GET_DEFAULT(dataSize_, 0L) };
        inline DataEntityList& setDataSize(int64_t dataSize) { DARABONBA_PTR_SET_VALUE(dataSize_, dataSize) };


        // modifiedTime Field Functions 
        bool hasModifiedTime() const { return this->modifiedTime_ != nullptr;};
        void deleteModifiedTime() { this->modifiedTime_ = nullptr;};
        inline int64_t getModifiedTime() const { DARABONBA_PTR_GET_DEFAULT(modifiedTime_, 0L) };
        inline DataEntityList& setModifiedTime(int64_t modifiedTime) { DARABONBA_PTR_SET_VALUE(modifiedTime_, modifiedTime) };


        // partitionGuid Field Functions 
        bool hasPartitionGuid() const { return this->partitionGuid_ != nullptr;};
        void deletePartitionGuid() { this->partitionGuid_ = nullptr;};
        inline string getPartitionGuid() const { DARABONBA_PTR_GET_DEFAULT(partitionGuid_, "") };
        inline DataEntityList& setPartitionGuid(string partitionGuid) { DARABONBA_PTR_SET_VALUE(partitionGuid_, partitionGuid) };


        // partitionLocation Field Functions 
        bool hasPartitionLocation() const { return this->partitionLocation_ != nullptr;};
        void deletePartitionLocation() { this->partitionLocation_ = nullptr;};
        inline string getPartitionLocation() const { DARABONBA_PTR_GET_DEFAULT(partitionLocation_, "") };
        inline DataEntityList& setPartitionLocation(string partitionLocation) { DARABONBA_PTR_SET_VALUE(partitionLocation_, partitionLocation) };


        // partitionName Field Functions 
        bool hasPartitionName() const { return this->partitionName_ != nullptr;};
        void deletePartitionName() { this->partitionName_ = nullptr;};
        inline string getPartitionName() const { DARABONBA_PTR_GET_DEFAULT(partitionName_, "") };
        inline DataEntityList& setPartitionName(string partitionName) { DARABONBA_PTR_SET_VALUE(partitionName_, partitionName) };


        // partitionPath Field Functions 
        bool hasPartitionPath() const { return this->partitionPath_ != nullptr;};
        void deletePartitionPath() { this->partitionPath_ = nullptr;};
        inline string getPartitionPath() const { DARABONBA_PTR_GET_DEFAULT(partitionPath_, "") };
        inline DataEntityList& setPartitionPath(string partitionPath) { DARABONBA_PTR_SET_VALUE(partitionPath_, partitionPath) };


        // partitionType Field Functions 
        bool hasPartitionType() const { return this->partitionType_ != nullptr;};
        void deletePartitionType() { this->partitionType_ = nullptr;};
        inline string getPartitionType() const { DARABONBA_PTR_GET_DEFAULT(partitionType_, "") };
        inline DataEntityList& setPartitionType(string partitionType) { DARABONBA_PTR_SET_VALUE(partitionType_, partitionType) };


        // recordCount Field Functions 
        bool hasRecordCount() const { return this->recordCount_ != nullptr;};
        void deleteRecordCount() { this->recordCount_ = nullptr;};
        inline int64_t getRecordCount() const { DARABONBA_PTR_GET_DEFAULT(recordCount_, 0L) };
        inline DataEntityList& setRecordCount(int64_t recordCount) { DARABONBA_PTR_SET_VALUE(recordCount_, recordCount) };


        // tableGuid Field Functions 
        bool hasTableGuid() const { return this->tableGuid_ != nullptr;};
        void deleteTableGuid() { this->tableGuid_ = nullptr;};
        inline string getTableGuid() const { DARABONBA_PTR_GET_DEFAULT(tableGuid_, "") };
        inline DataEntityList& setTableGuid(string tableGuid) { DARABONBA_PTR_SET_VALUE(tableGuid_, tableGuid) };


      protected:
        // The comment.
        shared_ptr<string> comment_ {};
        // The time when the partition was created. This value is a UNIX timestamp representing the number of milliseconds that have elapsed since the epoch time January 1, 1970, 00:00:00 UTC.
        shared_ptr<int64_t> createTime_ {};
        // The size of the partition. Unit: bytes.
        shared_ptr<int64_t> dataSize_ {};
        // The time when the partition was modified. This value is a UNIX timestamp representing the number of milliseconds that have elapsed since the epoch time January 1, 1970, 00:00:00 UTC.
        shared_ptr<int64_t> modifiedTime_ {};
        // The GUID of the partition.
        shared_ptr<string> partitionGuid_ {};
        // The location of the Hive partition.
        shared_ptr<string> partitionLocation_ {};
        // The name of the partition.
        shared_ptr<string> partitionName_ {};
        // The path of the partition.
        shared_ptr<string> partitionPath_ {};
        // The type of the partition.
        shared_ptr<string> partitionType_ {};
        // The number of entries in the partition.
        shared_ptr<int64_t> recordCount_ {};
        // The unique identifier of the metatable.
        shared_ptr<string> tableGuid_ {};
      };

      virtual bool empty() const override { return this->dataEntityList_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->totalCount_ == nullptr; };
      // dataEntityList Field Functions 
      bool hasDataEntityList() const { return this->dataEntityList_ != nullptr;};
      void deleteDataEntityList() { this->dataEntityList_ = nullptr;};
      inline const vector<Data::DataEntityList> & getDataEntityList() const { DARABONBA_PTR_GET_CONST(dataEntityList_, vector<Data::DataEntityList>) };
      inline vector<Data::DataEntityList> getDataEntityList() { DARABONBA_PTR_GET(dataEntityList_, vector<Data::DataEntityList>) };
      inline Data& setDataEntityList(const vector<Data::DataEntityList> & dataEntityList) { DARABONBA_PTR_SET_VALUE(dataEntityList_, dataEntityList) };
      inline Data& setDataEntityList(vector<Data::DataEntityList> && dataEntityList) { DARABONBA_PTR_SET_RVALUE(dataEntityList_, dataEntityList) };


      // pageNumber Field Functions 
      bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
      void deletePageNumber() { this->pageNumber_ = nullptr;};
      inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
      inline Data& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
      inline Data& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
      inline Data& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    protected:
      // The list of partitions.
      shared_ptr<vector<Data::DataEntityList>> dataEntityList_ {};
      // The page number.
      shared_ptr<int32_t> pageNumber_ {};
      // The number of entries per page. Default value: 10. Maximum value: 100.
      shared_ptr<int32_t> pageSize_ {};
      // The total number of partitions.
      shared_ptr<int64_t> totalCount_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->errorCode_ == nullptr && this->errorMessage_ == nullptr && this->httpStatusCode_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetMetaTablePartitionResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetMetaTablePartitionResponseBody::Data) };
    inline GetMetaTablePartitionResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetMetaTablePartitionResponseBody::Data) };
    inline GetMetaTablePartitionResponseBody& setData(const GetMetaTablePartitionResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetMetaTablePartitionResponseBody& setData(GetMetaTablePartitionResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline GetMetaTablePartitionResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline GetMetaTablePartitionResponseBody& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline GetMetaTablePartitionResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetMetaTablePartitionResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetMetaTablePartitionResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The returned result.
    shared_ptr<GetMetaTablePartitionResponseBody::Data> data_ {};
    // The error code returned.
    shared_ptr<string> errorCode_ {};
    // The error message returned.
    shared_ptr<string> errorMessage_ {};
    // The HTTP status code returned.
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
