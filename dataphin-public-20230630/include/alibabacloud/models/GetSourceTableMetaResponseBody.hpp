// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSOURCETABLEMETARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETSOURCETABLEMETARESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class GetSourceTableMetaResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSourceTableMetaResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetSourceTableMetaResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetSourceTableMetaResponseBody() = default ;
    GetSourceTableMetaResponseBody(const GetSourceTableMetaResponseBody &) = default ;
    GetSourceTableMetaResponseBody(GetSourceTableMetaResponseBody &&) = default ;
    GetSourceTableMetaResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSourceTableMetaResponseBody() = default ;
    GetSourceTableMetaResponseBody& operator=(const GetSourceTableMetaResponseBody &) = default ;
    GetSourceTableMetaResponseBody& operator=(GetSourceTableMetaResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(Columns, columns_);
        DARABONBA_PTR_TO_JSON(Guid, guid_);
        DARABONBA_PTR_TO_JSON(TableComment, tableComment_);
        DARABONBA_PTR_TO_JSON(TableName, tableName_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(Columns, columns_);
        DARABONBA_PTR_FROM_JSON(Guid, guid_);
        DARABONBA_PTR_FROM_JSON(TableComment, tableComment_);
        DARABONBA_PTR_FROM_JSON(TableName, tableName_);
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
      class Columns : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Columns& obj) { 
          DARABONBA_PTR_TO_JSON(Comment, comment_);
          DARABONBA_PTR_TO_JSON(DataType, dataType_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(Pk, pk_);
          DARABONBA_PTR_TO_JSON(Pt, pt_);
          DARABONBA_PTR_TO_JSON(RawDataType, rawDataType_);
          DARABONBA_PTR_TO_JSON(SeqNumber, seqNumber_);
        };
        friend void from_json(const Darabonba::Json& j, Columns& obj) { 
          DARABONBA_PTR_FROM_JSON(Comment, comment_);
          DARABONBA_PTR_FROM_JSON(DataType, dataType_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(Pk, pk_);
          DARABONBA_PTR_FROM_JSON(Pt, pt_);
          DARABONBA_PTR_FROM_JSON(RawDataType, rawDataType_);
          DARABONBA_PTR_FROM_JSON(SeqNumber, seqNumber_);
        };
        Columns() = default ;
        Columns(const Columns &) = default ;
        Columns(Columns &&) = default ;
        Columns(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Columns() = default ;
        Columns& operator=(const Columns &) = default ;
        Columns& operator=(Columns &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->comment_ == nullptr
        && this->dataType_ == nullptr && this->name_ == nullptr && this->pk_ == nullptr && this->pt_ == nullptr && this->rawDataType_ == nullptr
        && this->seqNumber_ == nullptr; };
        // comment Field Functions 
        bool hasComment() const { return this->comment_ != nullptr;};
        void deleteComment() { this->comment_ = nullptr;};
        inline string getComment() const { DARABONBA_PTR_GET_DEFAULT(comment_, "") };
        inline Columns& setComment(string comment) { DARABONBA_PTR_SET_VALUE(comment_, comment) };


        // dataType Field Functions 
        bool hasDataType() const { return this->dataType_ != nullptr;};
        void deleteDataType() { this->dataType_ = nullptr;};
        inline string getDataType() const { DARABONBA_PTR_GET_DEFAULT(dataType_, "") };
        inline Columns& setDataType(string dataType) { DARABONBA_PTR_SET_VALUE(dataType_, dataType) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline Columns& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // pk Field Functions 
        bool hasPk() const { return this->pk_ != nullptr;};
        void deletePk() { this->pk_ = nullptr;};
        inline bool getPk() const { DARABONBA_PTR_GET_DEFAULT(pk_, false) };
        inline Columns& setPk(bool pk) { DARABONBA_PTR_SET_VALUE(pk_, pk) };


        // pt Field Functions 
        bool hasPt() const { return this->pt_ != nullptr;};
        void deletePt() { this->pt_ = nullptr;};
        inline bool getPt() const { DARABONBA_PTR_GET_DEFAULT(pt_, false) };
        inline Columns& setPt(bool pt) { DARABONBA_PTR_SET_VALUE(pt_, pt) };


        // rawDataType Field Functions 
        bool hasRawDataType() const { return this->rawDataType_ != nullptr;};
        void deleteRawDataType() { this->rawDataType_ = nullptr;};
        inline string getRawDataType() const { DARABONBA_PTR_GET_DEFAULT(rawDataType_, "") };
        inline Columns& setRawDataType(string rawDataType) { DARABONBA_PTR_SET_VALUE(rawDataType_, rawDataType) };


        // seqNumber Field Functions 
        bool hasSeqNumber() const { return this->seqNumber_ != nullptr;};
        void deleteSeqNumber() { this->seqNumber_ = nullptr;};
        inline int32_t getSeqNumber() const { DARABONBA_PTR_GET_DEFAULT(seqNumber_, 0) };
        inline Columns& setSeqNumber(int32_t seqNumber) { DARABONBA_PTR_SET_VALUE(seqNumber_, seqNumber) };


      protected:
        shared_ptr<string> comment_ {};
        shared_ptr<string> dataType_ {};
        shared_ptr<string> name_ {};
        shared_ptr<bool> pk_ {};
        shared_ptr<bool> pt_ {};
        shared_ptr<string> rawDataType_ {};
        shared_ptr<int32_t> seqNumber_ {};
      };

      virtual bool empty() const override { return this->columns_ == nullptr
        && this->guid_ == nullptr && this->tableComment_ == nullptr && this->tableName_ == nullptr; };
      // columns Field Functions 
      bool hasColumns() const { return this->columns_ != nullptr;};
      void deleteColumns() { this->columns_ = nullptr;};
      inline const vector<Data::Columns> & getColumns() const { DARABONBA_PTR_GET_CONST(columns_, vector<Data::Columns>) };
      inline vector<Data::Columns> getColumns() { DARABONBA_PTR_GET(columns_, vector<Data::Columns>) };
      inline Data& setColumns(const vector<Data::Columns> & columns) { DARABONBA_PTR_SET_VALUE(columns_, columns) };
      inline Data& setColumns(vector<Data::Columns> && columns) { DARABONBA_PTR_SET_RVALUE(columns_, columns) };


      // guid Field Functions 
      bool hasGuid() const { return this->guid_ != nullptr;};
      void deleteGuid() { this->guid_ = nullptr;};
      inline string getGuid() const { DARABONBA_PTR_GET_DEFAULT(guid_, "") };
      inline Data& setGuid(string guid) { DARABONBA_PTR_SET_VALUE(guid_, guid) };


      // tableComment Field Functions 
      bool hasTableComment() const { return this->tableComment_ != nullptr;};
      void deleteTableComment() { this->tableComment_ = nullptr;};
      inline string getTableComment() const { DARABONBA_PTR_GET_DEFAULT(tableComment_, "") };
      inline Data& setTableComment(string tableComment) { DARABONBA_PTR_SET_VALUE(tableComment_, tableComment) };


      // tableName Field Functions 
      bool hasTableName() const { return this->tableName_ != nullptr;};
      void deleteTableName() { this->tableName_ = nullptr;};
      inline string getTableName() const { DARABONBA_PTR_GET_DEFAULT(tableName_, "") };
      inline Data& setTableName(string tableName) { DARABONBA_PTR_SET_VALUE(tableName_, tableName) };


    protected:
      shared_ptr<vector<Data::Columns>> columns_ {};
      shared_ptr<string> guid_ {};
      shared_ptr<string> tableComment_ {};
      shared_ptr<string> tableName_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetSourceTableMetaResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetSourceTableMetaResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetSourceTableMetaResponseBody::Data) };
    inline GetSourceTableMetaResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetSourceTableMetaResponseBody::Data) };
    inline GetSourceTableMetaResponseBody& setData(const GetSourceTableMetaResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetSourceTableMetaResponseBody& setData(GetSourceTableMetaResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline GetSourceTableMetaResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetSourceTableMetaResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetSourceTableMetaResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetSourceTableMetaResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<GetSourceTableMetaResponseBody::Data> data_ {};
    shared_ptr<int32_t> httpStatusCode_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
