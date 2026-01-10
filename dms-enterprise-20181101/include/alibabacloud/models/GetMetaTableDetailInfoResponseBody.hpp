// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMETATABLEDETAILINFORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETMETATABLEDETAILINFORESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class GetMetaTableDetailInfoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetMetaTableDetailInfoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DetailInfo, detailInfo_);
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetMetaTableDetailInfoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DetailInfo, detailInfo_);
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetMetaTableDetailInfoResponseBody() = default ;
    GetMetaTableDetailInfoResponseBody(const GetMetaTableDetailInfoResponseBody &) = default ;
    GetMetaTableDetailInfoResponseBody(GetMetaTableDetailInfoResponseBody &&) = default ;
    GetMetaTableDetailInfoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetMetaTableDetailInfoResponseBody() = default ;
    GetMetaTableDetailInfoResponseBody& operator=(const GetMetaTableDetailInfoResponseBody &) = default ;
    GetMetaTableDetailInfoResponseBody& operator=(GetMetaTableDetailInfoResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class DetailInfo : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DetailInfo& obj) { 
        DARABONBA_PTR_TO_JSON(ColumnList, columnList_);
        DARABONBA_PTR_TO_JSON(IndexList, indexList_);
      };
      friend void from_json(const Darabonba::Json& j, DetailInfo& obj) { 
        DARABONBA_PTR_FROM_JSON(ColumnList, columnList_);
        DARABONBA_PTR_FROM_JSON(IndexList, indexList_);
      };
      DetailInfo() = default ;
      DetailInfo(const DetailInfo &) = default ;
      DetailInfo(DetailInfo &&) = default ;
      DetailInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DetailInfo() = default ;
      DetailInfo& operator=(const DetailInfo &) = default ;
      DetailInfo& operator=(DetailInfo &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class IndexList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const IndexList& obj) { 
          DARABONBA_PTR_TO_JSON(IndexColumns, indexColumns_);
          DARABONBA_PTR_TO_JSON(IndexId, indexId_);
          DARABONBA_PTR_TO_JSON(IndexName, indexName_);
          DARABONBA_PTR_TO_JSON(IndexType, indexType_);
          DARABONBA_PTR_TO_JSON(Unique, unique_);
        };
        friend void from_json(const Darabonba::Json& j, IndexList& obj) { 
          DARABONBA_PTR_FROM_JSON(IndexColumns, indexColumns_);
          DARABONBA_PTR_FROM_JSON(IndexId, indexId_);
          DARABONBA_PTR_FROM_JSON(IndexName, indexName_);
          DARABONBA_PTR_FROM_JSON(IndexType, indexType_);
          DARABONBA_PTR_FROM_JSON(Unique, unique_);
        };
        IndexList() = default ;
        IndexList(const IndexList &) = default ;
        IndexList(IndexList &&) = default ;
        IndexList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~IndexList() = default ;
        IndexList& operator=(const IndexList &) = default ;
        IndexList& operator=(IndexList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->indexColumns_ == nullptr
        && this->indexId_ == nullptr && this->indexName_ == nullptr && this->indexType_ == nullptr && this->unique_ == nullptr; };
        // indexColumns Field Functions 
        bool hasIndexColumns() const { return this->indexColumns_ != nullptr;};
        void deleteIndexColumns() { this->indexColumns_ = nullptr;};
        inline const vector<string> & getIndexColumns() const { DARABONBA_PTR_GET_CONST(indexColumns_, vector<string>) };
        inline vector<string> getIndexColumns() { DARABONBA_PTR_GET(indexColumns_, vector<string>) };
        inline IndexList& setIndexColumns(const vector<string> & indexColumns) { DARABONBA_PTR_SET_VALUE(indexColumns_, indexColumns) };
        inline IndexList& setIndexColumns(vector<string> && indexColumns) { DARABONBA_PTR_SET_RVALUE(indexColumns_, indexColumns) };


        // indexId Field Functions 
        bool hasIndexId() const { return this->indexId_ != nullptr;};
        void deleteIndexId() { this->indexId_ = nullptr;};
        inline string getIndexId() const { DARABONBA_PTR_GET_DEFAULT(indexId_, "") };
        inline IndexList& setIndexId(string indexId) { DARABONBA_PTR_SET_VALUE(indexId_, indexId) };


        // indexName Field Functions 
        bool hasIndexName() const { return this->indexName_ != nullptr;};
        void deleteIndexName() { this->indexName_ = nullptr;};
        inline string getIndexName() const { DARABONBA_PTR_GET_DEFAULT(indexName_, "") };
        inline IndexList& setIndexName(string indexName) { DARABONBA_PTR_SET_VALUE(indexName_, indexName) };


        // indexType Field Functions 
        bool hasIndexType() const { return this->indexType_ != nullptr;};
        void deleteIndexType() { this->indexType_ = nullptr;};
        inline string getIndexType() const { DARABONBA_PTR_GET_DEFAULT(indexType_, "") };
        inline IndexList& setIndexType(string indexType) { DARABONBA_PTR_SET_VALUE(indexType_, indexType) };


        // unique Field Functions 
        bool hasUnique() const { return this->unique_ != nullptr;};
        void deleteUnique() { this->unique_ = nullptr;};
        inline bool getUnique() const { DARABONBA_PTR_GET_DEFAULT(unique_, false) };
        inline IndexList& setUnique(bool unique) { DARABONBA_PTR_SET_VALUE(unique_, unique) };


      protected:
        // The index column.
        shared_ptr<vector<string>> indexColumns_ {};
        // The ID of the index.
        shared_ptr<string> indexId_ {};
        // The name of the index.
        shared_ptr<string> indexName_ {};
        // The type of the index. Examples: Primary, Unique, and Normal.
        shared_ptr<string> indexType_ {};
        // Indicates whether the index is unique. Valid values:
        // 
        // *   true: The index is unique.
        // *   false: The index is not unique.
        shared_ptr<bool> unique_ {};
      };

      class ColumnList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ColumnList& obj) { 
          DARABONBA_PTR_TO_JSON(AutoIncrement, autoIncrement_);
          DARABONBA_PTR_TO_JSON(ColumnId, columnId_);
          DARABONBA_PTR_TO_JSON(ColumnName, columnName_);
          DARABONBA_PTR_TO_JSON(ColumnType, columnType_);
          DARABONBA_PTR_TO_JSON(DataLength, dataLength_);
          DARABONBA_PTR_TO_JSON(DataPrecision, dataPrecision_);
          DARABONBA_PTR_TO_JSON(DataScale, dataScale_);
          DARABONBA_PTR_TO_JSON(Description, description_);
          DARABONBA_PTR_TO_JSON(Nullable, nullable_);
          DARABONBA_PTR_TO_JSON(Position, position_);
        };
        friend void from_json(const Darabonba::Json& j, ColumnList& obj) { 
          DARABONBA_PTR_FROM_JSON(AutoIncrement, autoIncrement_);
          DARABONBA_PTR_FROM_JSON(ColumnId, columnId_);
          DARABONBA_PTR_FROM_JSON(ColumnName, columnName_);
          DARABONBA_PTR_FROM_JSON(ColumnType, columnType_);
          DARABONBA_PTR_FROM_JSON(DataLength, dataLength_);
          DARABONBA_PTR_FROM_JSON(DataPrecision, dataPrecision_);
          DARABONBA_PTR_FROM_JSON(DataScale, dataScale_);
          DARABONBA_PTR_FROM_JSON(Description, description_);
          DARABONBA_PTR_FROM_JSON(Nullable, nullable_);
          DARABONBA_PTR_FROM_JSON(Position, position_);
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
        virtual bool empty() const override { return this->autoIncrement_ == nullptr
        && this->columnId_ == nullptr && this->columnName_ == nullptr && this->columnType_ == nullptr && this->dataLength_ == nullptr && this->dataPrecision_ == nullptr
        && this->dataScale_ == nullptr && this->description_ == nullptr && this->nullable_ == nullptr && this->position_ == nullptr; };
        // autoIncrement Field Functions 
        bool hasAutoIncrement() const { return this->autoIncrement_ != nullptr;};
        void deleteAutoIncrement() { this->autoIncrement_ = nullptr;};
        inline bool getAutoIncrement() const { DARABONBA_PTR_GET_DEFAULT(autoIncrement_, false) };
        inline ColumnList& setAutoIncrement(bool autoIncrement) { DARABONBA_PTR_SET_VALUE(autoIncrement_, autoIncrement) };


        // columnId Field Functions 
        bool hasColumnId() const { return this->columnId_ != nullptr;};
        void deleteColumnId() { this->columnId_ = nullptr;};
        inline string getColumnId() const { DARABONBA_PTR_GET_DEFAULT(columnId_, "") };
        inline ColumnList& setColumnId(string columnId) { DARABONBA_PTR_SET_VALUE(columnId_, columnId) };


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


        // dataLength Field Functions 
        bool hasDataLength() const { return this->dataLength_ != nullptr;};
        void deleteDataLength() { this->dataLength_ = nullptr;};
        inline int64_t getDataLength() const { DARABONBA_PTR_GET_DEFAULT(dataLength_, 0L) };
        inline ColumnList& setDataLength(int64_t dataLength) { DARABONBA_PTR_SET_VALUE(dataLength_, dataLength) };


        // dataPrecision Field Functions 
        bool hasDataPrecision() const { return this->dataPrecision_ != nullptr;};
        void deleteDataPrecision() { this->dataPrecision_ = nullptr;};
        inline int32_t getDataPrecision() const { DARABONBA_PTR_GET_DEFAULT(dataPrecision_, 0) };
        inline ColumnList& setDataPrecision(int32_t dataPrecision) { DARABONBA_PTR_SET_VALUE(dataPrecision_, dataPrecision) };


        // dataScale Field Functions 
        bool hasDataScale() const { return this->dataScale_ != nullptr;};
        void deleteDataScale() { this->dataScale_ = nullptr;};
        inline int32_t getDataScale() const { DARABONBA_PTR_GET_DEFAULT(dataScale_, 0) };
        inline ColumnList& setDataScale(int32_t dataScale) { DARABONBA_PTR_SET_VALUE(dataScale_, dataScale) };


        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline ColumnList& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // nullable Field Functions 
        bool hasNullable() const { return this->nullable_ != nullptr;};
        void deleteNullable() { this->nullable_ = nullptr;};
        inline bool getNullable() const { DARABONBA_PTR_GET_DEFAULT(nullable_, false) };
        inline ColumnList& setNullable(bool nullable) { DARABONBA_PTR_SET_VALUE(nullable_, nullable) };


        // position Field Functions 
        bool hasPosition() const { return this->position_ != nullptr;};
        void deletePosition() { this->position_ = nullptr;};
        inline string getPosition() const { DARABONBA_PTR_GET_DEFAULT(position_, "") };
        inline ColumnList& setPosition(string position) { DARABONBA_PTR_SET_VALUE(position_, position) };


      protected:
        // Indicates whether the column is an auto-increment column. Valid values:
        // 
        // *   true: The column is an auto-increment column.
        // *   false: The column is not an auto-increment column.
        shared_ptr<bool> autoIncrement_ {};
        // The ID of the column.
        shared_ptr<string> columnId_ {};
        // The name of the column.
        shared_ptr<string> columnName_ {};
        // The data type of the column. Examples: Bigint, Int, and Varchar.
        shared_ptr<string> columnType_ {};
        // The length of the field.
        shared_ptr<int64_t> dataLength_ {};
        // The precision of the field.
        shared_ptr<int32_t> dataPrecision_ {};
        // The scale of the column.
        shared_ptr<int32_t> dataScale_ {};
        // The description of the column.
        shared_ptr<string> description_ {};
        // Indicates whether the column is nullable. Valid values:
        // 
        // *   true: The column is nullable.
        // *   false: The column is not nullable.
        shared_ptr<bool> nullable_ {};
        // The position of the field in the table.
        shared_ptr<string> position_ {};
      };

      virtual bool empty() const override { return this->columnList_ == nullptr
        && this->indexList_ == nullptr; };
      // columnList Field Functions 
      bool hasColumnList() const { return this->columnList_ != nullptr;};
      void deleteColumnList() { this->columnList_ = nullptr;};
      inline const vector<DetailInfo::ColumnList> & getColumnList() const { DARABONBA_PTR_GET_CONST(columnList_, vector<DetailInfo::ColumnList>) };
      inline vector<DetailInfo::ColumnList> getColumnList() { DARABONBA_PTR_GET(columnList_, vector<DetailInfo::ColumnList>) };
      inline DetailInfo& setColumnList(const vector<DetailInfo::ColumnList> & columnList) { DARABONBA_PTR_SET_VALUE(columnList_, columnList) };
      inline DetailInfo& setColumnList(vector<DetailInfo::ColumnList> && columnList) { DARABONBA_PTR_SET_RVALUE(columnList_, columnList) };


      // indexList Field Functions 
      bool hasIndexList() const { return this->indexList_ != nullptr;};
      void deleteIndexList() { this->indexList_ = nullptr;};
      inline const vector<DetailInfo::IndexList> & getIndexList() const { DARABONBA_PTR_GET_CONST(indexList_, vector<DetailInfo::IndexList>) };
      inline vector<DetailInfo::IndexList> getIndexList() { DARABONBA_PTR_GET(indexList_, vector<DetailInfo::IndexList>) };
      inline DetailInfo& setIndexList(const vector<DetailInfo::IndexList> & indexList) { DARABONBA_PTR_SET_VALUE(indexList_, indexList) };
      inline DetailInfo& setIndexList(vector<DetailInfo::IndexList> && indexList) { DARABONBA_PTR_SET_RVALUE(indexList_, indexList) };


    protected:
      // The columns in the table.
      shared_ptr<vector<DetailInfo::ColumnList>> columnList_ {};
      // The list of indexes.
      shared_ptr<vector<DetailInfo::IndexList>> indexList_ {};
    };

    virtual bool empty() const override { return this->detailInfo_ == nullptr
        && this->errorCode_ == nullptr && this->errorMessage_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // detailInfo Field Functions 
    bool hasDetailInfo() const { return this->detailInfo_ != nullptr;};
    void deleteDetailInfo() { this->detailInfo_ = nullptr;};
    inline const GetMetaTableDetailInfoResponseBody::DetailInfo & getDetailInfo() const { DARABONBA_PTR_GET_CONST(detailInfo_, GetMetaTableDetailInfoResponseBody::DetailInfo) };
    inline GetMetaTableDetailInfoResponseBody::DetailInfo getDetailInfo() { DARABONBA_PTR_GET(detailInfo_, GetMetaTableDetailInfoResponseBody::DetailInfo) };
    inline GetMetaTableDetailInfoResponseBody& setDetailInfo(const GetMetaTableDetailInfoResponseBody::DetailInfo & detailInfo) { DARABONBA_PTR_SET_VALUE(detailInfo_, detailInfo) };
    inline GetMetaTableDetailInfoResponseBody& setDetailInfo(GetMetaTableDetailInfoResponseBody::DetailInfo && detailInfo) { DARABONBA_PTR_SET_RVALUE(detailInfo_, detailInfo) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline GetMetaTableDetailInfoResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline GetMetaTableDetailInfoResponseBody& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetMetaTableDetailInfoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetMetaTableDetailInfoResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The details of the table.
    shared_ptr<GetMetaTableDetailInfoResponseBody::DetailInfo> detailInfo_ {};
    // The error code returned.
    shared_ptr<string> errorCode_ {};
    // The error message returned.
    shared_ptr<string> errorMessage_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
