// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMETATABLECOLUMNRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETMETATABLECOLUMNRESPONSEBODY_HPP_
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
  class GetMetaTableColumnResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetMetaTableColumnResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetMetaTableColumnResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetMetaTableColumnResponseBody() = default ;
    GetMetaTableColumnResponseBody(const GetMetaTableColumnResponseBody &) = default ;
    GetMetaTableColumnResponseBody(GetMetaTableColumnResponseBody &&) = default ;
    GetMetaTableColumnResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetMetaTableColumnResponseBody() = default ;
    GetMetaTableColumnResponseBody& operator=(const GetMetaTableColumnResponseBody &) = default ;
    GetMetaTableColumnResponseBody& operator=(GetMetaTableColumnResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(ColumnList, columnList_);
        DARABONBA_PTR_TO_JSON(PageNum, pageNum_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(ColumnList, columnList_);
        DARABONBA_PTR_FROM_JSON(PageNum, pageNum_);
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
      class ColumnList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ColumnList& obj) { 
          DARABONBA_PTR_TO_JSON(Caption, caption_);
          DARABONBA_PTR_TO_JSON(ColumnGuid, columnGuid_);
          DARABONBA_PTR_TO_JSON(ColumnName, columnName_);
          DARABONBA_PTR_TO_JSON(ColumnType, columnType_);
          DARABONBA_PTR_TO_JSON(Comment, comment_);
          DARABONBA_PTR_TO_JSON(IsForeignKey, isForeignKey_);
          DARABONBA_PTR_TO_JSON(IsPartitionColumn, isPartitionColumn_);
          DARABONBA_PTR_TO_JSON(IsPrimaryKey, isPrimaryKey_);
          DARABONBA_PTR_TO_JSON(Position, position_);
          DARABONBA_PTR_TO_JSON(RelationCount, relationCount_);
        };
        friend void from_json(const Darabonba::Json& j, ColumnList& obj) { 
          DARABONBA_PTR_FROM_JSON(Caption, caption_);
          DARABONBA_PTR_FROM_JSON(ColumnGuid, columnGuid_);
          DARABONBA_PTR_FROM_JSON(ColumnName, columnName_);
          DARABONBA_PTR_FROM_JSON(ColumnType, columnType_);
          DARABONBA_PTR_FROM_JSON(Comment, comment_);
          DARABONBA_PTR_FROM_JSON(IsForeignKey, isForeignKey_);
          DARABONBA_PTR_FROM_JSON(IsPartitionColumn, isPartitionColumn_);
          DARABONBA_PTR_FROM_JSON(IsPrimaryKey, isPrimaryKey_);
          DARABONBA_PTR_FROM_JSON(Position, position_);
          DARABONBA_PTR_FROM_JSON(RelationCount, relationCount_);
        };
        ColumnList() = default ;
        ColumnList(const ColumnList &) = default ;
        ColumnList(ColumnList &&) = default ;
        ColumnList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ColumnList() = default ;
        ColumnList& operator=(const ColumnList &) = default ;
        ColumnList& operator=(ColumnList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->caption_ == nullptr
        && this->columnGuid_ == nullptr && this->columnName_ == nullptr && this->columnType_ == nullptr && this->comment_ == nullptr && this->isForeignKey_ == nullptr
        && this->isPartitionColumn_ == nullptr && this->isPrimaryKey_ == nullptr && this->position_ == nullptr && this->relationCount_ == nullptr; };
        // caption Field Functions 
        bool hasCaption() const { return this->caption_ != nullptr;};
        void deleteCaption() { this->caption_ = nullptr;};
        inline string getCaption() const { DARABONBA_PTR_GET_DEFAULT(caption_, "") };
        inline ColumnList& setCaption(string caption) { DARABONBA_PTR_SET_VALUE(caption_, caption) };


        // columnGuid Field Functions 
        bool hasColumnGuid() const { return this->columnGuid_ != nullptr;};
        void deleteColumnGuid() { this->columnGuid_ = nullptr;};
        inline string getColumnGuid() const { DARABONBA_PTR_GET_DEFAULT(columnGuid_, "") };
        inline ColumnList& setColumnGuid(string columnGuid) { DARABONBA_PTR_SET_VALUE(columnGuid_, columnGuid) };


        // columnName Field Functions 
        bool hasColumnName() const { return this->columnName_ != nullptr;};
        void deleteColumnName() { this->columnName_ = nullptr;};
        inline string getColumnName() const { DARABONBA_PTR_GET_DEFAULT(columnName_, "") };
        inline ColumnList& setColumnName(string columnName) { DARABONBA_PTR_SET_VALUE(columnName_, columnName) };


        // columnType Field Functions 
        bool hasColumnType() const { return this->columnType_ != nullptr;};
        void deleteColumnType() { this->columnType_ = nullptr;};
        inline string getColumnType() const { DARABONBA_PTR_GET_DEFAULT(columnType_, "") };
        inline ColumnList& setColumnType(string columnType) { DARABONBA_PTR_SET_VALUE(columnType_, columnType) };


        // comment Field Functions 
        bool hasComment() const { return this->comment_ != nullptr;};
        void deleteComment() { this->comment_ = nullptr;};
        inline string getComment() const { DARABONBA_PTR_GET_DEFAULT(comment_, "") };
        inline ColumnList& setComment(string comment) { DARABONBA_PTR_SET_VALUE(comment_, comment) };


        // isForeignKey Field Functions 
        bool hasIsForeignKey() const { return this->isForeignKey_ != nullptr;};
        void deleteIsForeignKey() { this->isForeignKey_ = nullptr;};
        inline bool getIsForeignKey() const { DARABONBA_PTR_GET_DEFAULT(isForeignKey_, false) };
        inline ColumnList& setIsForeignKey(bool isForeignKey) { DARABONBA_PTR_SET_VALUE(isForeignKey_, isForeignKey) };


        // isPartitionColumn Field Functions 
        bool hasIsPartitionColumn() const { return this->isPartitionColumn_ != nullptr;};
        void deleteIsPartitionColumn() { this->isPartitionColumn_ = nullptr;};
        inline bool getIsPartitionColumn() const { DARABONBA_PTR_GET_DEFAULT(isPartitionColumn_, false) };
        inline ColumnList& setIsPartitionColumn(bool isPartitionColumn) { DARABONBA_PTR_SET_VALUE(isPartitionColumn_, isPartitionColumn) };


        // isPrimaryKey Field Functions 
        bool hasIsPrimaryKey() const { return this->isPrimaryKey_ != nullptr;};
        void deleteIsPrimaryKey() { this->isPrimaryKey_ = nullptr;};
        inline bool getIsPrimaryKey() const { DARABONBA_PTR_GET_DEFAULT(isPrimaryKey_, false) };
        inline ColumnList& setIsPrimaryKey(bool isPrimaryKey) { DARABONBA_PTR_SET_VALUE(isPrimaryKey_, isPrimaryKey) };


        // position Field Functions 
        bool hasPosition() const { return this->position_ != nullptr;};
        void deletePosition() { this->position_ = nullptr;};
        inline int32_t getPosition() const { DARABONBA_PTR_GET_DEFAULT(position_, 0) };
        inline ColumnList& setPosition(int32_t position) { DARABONBA_PTR_SET_VALUE(position_, position) };


        // relationCount Field Functions 
        bool hasRelationCount() const { return this->relationCount_ != nullptr;};
        void deleteRelationCount() { this->relationCount_ = nullptr;};
        inline int64_t getRelationCount() const { DARABONBA_PTR_GET_DEFAULT(relationCount_, 0L) };
        inline ColumnList& setRelationCount(int64_t relationCount) { DARABONBA_PTR_SET_VALUE(relationCount_, relationCount) };


      protected:
        // The description of the field.
        shared_ptr<string> caption_ {};
        // The GUID of the field.
        shared_ptr<string> columnGuid_ {};
        // The name of the field.
        shared_ptr<string> columnName_ {};
        // The data type of the field.
        shared_ptr<string> columnType_ {};
        // The remarks of the field.
        shared_ptr<string> comment_ {};
        // Indicates whether the field is a foreign key. Valid values:
        // 
        // *   true
        // *   false
        shared_ptr<bool> isForeignKey_ {};
        // Indicates whether the field is a partition field. Valid values:
        // 
        // *   true
        // *   false
        shared_ptr<bool> isPartitionColumn_ {};
        // Indicates whether the field is a primary key. Valid values:
        // 
        // *   true
        // *   false
        shared_ptr<bool> isPrimaryKey_ {};
        // The sequence number of the field.
        shared_ptr<int32_t> position_ {};
        // The number of times the field is read.
        shared_ptr<int64_t> relationCount_ {};
      };

      virtual bool empty() const override { return this->columnList_ == nullptr
        && this->pageNum_ == nullptr && this->pageSize_ == nullptr && this->totalCount_ == nullptr; };
      // columnList Field Functions 
      bool hasColumnList() const { return this->columnList_ != nullptr;};
      void deleteColumnList() { this->columnList_ = nullptr;};
      inline const vector<Data::ColumnList> & getColumnList() const { DARABONBA_PTR_GET_CONST(columnList_, vector<Data::ColumnList>) };
      inline vector<Data::ColumnList> getColumnList() { DARABONBA_PTR_GET(columnList_, vector<Data::ColumnList>) };
      inline Data& setColumnList(const vector<Data::ColumnList> & columnList) { DARABONBA_PTR_SET_VALUE(columnList_, columnList) };
      inline Data& setColumnList(vector<Data::ColumnList> && columnList) { DARABONBA_PTR_SET_RVALUE(columnList_, columnList) };


      // pageNum Field Functions 
      bool hasPageNum() const { return this->pageNum_ != nullptr;};
      void deletePageNum() { this->pageNum_ = nullptr;};
      inline int32_t getPageNum() const { DARABONBA_PTR_GET_DEFAULT(pageNum_, 0) };
      inline Data& setPageNum(int32_t pageNum) { DARABONBA_PTR_SET_VALUE(pageNum_, pageNum) };


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
      // The information about fields.
      shared_ptr<vector<Data::ColumnList>> columnList_ {};
      // The page number.
      shared_ptr<int32_t> pageNum_ {};
      // The number of entries per page. Default value: 10. Maximum value: 100.
      shared_ptr<int32_t> pageSize_ {};
      // The total number of fields.
      shared_ptr<int64_t> totalCount_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->errorCode_ == nullptr && this->errorMessage_ == nullptr && this->httpStatusCode_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetMetaTableColumnResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetMetaTableColumnResponseBody::Data) };
    inline GetMetaTableColumnResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetMetaTableColumnResponseBody::Data) };
    inline GetMetaTableColumnResponseBody& setData(const GetMetaTableColumnResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetMetaTableColumnResponseBody& setData(GetMetaTableColumnResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline GetMetaTableColumnResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline GetMetaTableColumnResponseBody& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline GetMetaTableColumnResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetMetaTableColumnResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetMetaTableColumnResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The business data.
    shared_ptr<GetMetaTableColumnResponseBody::Data> data_ {};
    // The error code.
    shared_ptr<string> errorCode_ {};
    // The error message.
    shared_ptr<string> errorMessage_ {};
    // The HTTP status code.
    shared_ptr<int32_t> httpStatusCode_ {};
    // The request ID. You can locate logs and troubleshoot issues based on the ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
