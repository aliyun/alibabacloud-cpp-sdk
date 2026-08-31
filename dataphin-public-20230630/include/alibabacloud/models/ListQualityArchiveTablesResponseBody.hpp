// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTQUALITYARCHIVETABLESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTQUALITYARCHIVETABLESRESPONSEBODY_HPP_
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
  class ListQualityArchiveTablesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListQualityArchiveTablesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ListQualityArchiveTablesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ListQualityArchiveTablesResponseBody() = default ;
    ListQualityArchiveTablesResponseBody(const ListQualityArchiveTablesResponseBody &) = default ;
    ListQualityArchiveTablesResponseBody(ListQualityArchiveTablesResponseBody &&) = default ;
    ListQualityArchiveTablesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListQualityArchiveTablesResponseBody() = default ;
    ListQualityArchiveTablesResponseBody& operator=(const ListQualityArchiveTablesResponseBody &) = default ;
    ListQualityArchiveTablesResponseBody& operator=(ListQualityArchiveTablesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(ArchiveTableList, archiveTableList_);
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(ArchiveTableList, archiveTableList_);
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
      class ArchiveTableList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ArchiveTableList& obj) { 
          DARABONBA_PTR_TO_JSON(ArchiveTableId, archiveTableId_);
          DARABONBA_PTR_TO_JSON(ArchiveTableName, archiveTableName_);
          DARABONBA_PTR_TO_JSON(Ddl, ddl_);
          DARABONBA_PTR_TO_JSON(IsDefault, isDefault_);
          DARABONBA_PTR_TO_JSON(Lifecycle, lifecycle_);
          DARABONBA_PTR_TO_JSON(MaxArchiveCount, maxArchiveCount_);
        };
        friend void from_json(const Darabonba::Json& j, ArchiveTableList& obj) { 
          DARABONBA_PTR_FROM_JSON(ArchiveTableId, archiveTableId_);
          DARABONBA_PTR_FROM_JSON(ArchiveTableName, archiveTableName_);
          DARABONBA_PTR_FROM_JSON(Ddl, ddl_);
          DARABONBA_PTR_FROM_JSON(IsDefault, isDefault_);
          DARABONBA_PTR_FROM_JSON(Lifecycle, lifecycle_);
          DARABONBA_PTR_FROM_JSON(MaxArchiveCount, maxArchiveCount_);
        };
        ArchiveTableList() = default ;
        ArchiveTableList(const ArchiveTableList &) = default ;
        ArchiveTableList(ArchiveTableList &&) = default ;
        ArchiveTableList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ArchiveTableList() = default ;
        ArchiveTableList& operator=(const ArchiveTableList &) = default ;
        ArchiveTableList& operator=(ArchiveTableList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->archiveTableId_ == nullptr
        && this->archiveTableName_ == nullptr && this->ddl_ == nullptr && this->isDefault_ == nullptr && this->lifecycle_ == nullptr && this->maxArchiveCount_ == nullptr; };
        // archiveTableId Field Functions 
        bool hasArchiveTableId() const { return this->archiveTableId_ != nullptr;};
        void deleteArchiveTableId() { this->archiveTableId_ = nullptr;};
        inline int64_t getArchiveTableId() const { DARABONBA_PTR_GET_DEFAULT(archiveTableId_, 0L) };
        inline ArchiveTableList& setArchiveTableId(int64_t archiveTableId) { DARABONBA_PTR_SET_VALUE(archiveTableId_, archiveTableId) };


        // archiveTableName Field Functions 
        bool hasArchiveTableName() const { return this->archiveTableName_ != nullptr;};
        void deleteArchiveTableName() { this->archiveTableName_ = nullptr;};
        inline string getArchiveTableName() const { DARABONBA_PTR_GET_DEFAULT(archiveTableName_, "") };
        inline ArchiveTableList& setArchiveTableName(string archiveTableName) { DARABONBA_PTR_SET_VALUE(archiveTableName_, archiveTableName) };


        // ddl Field Functions 
        bool hasDdl() const { return this->ddl_ != nullptr;};
        void deleteDdl() { this->ddl_ = nullptr;};
        inline string getDdl() const { DARABONBA_PTR_GET_DEFAULT(ddl_, "") };
        inline ArchiveTableList& setDdl(string ddl) { DARABONBA_PTR_SET_VALUE(ddl_, ddl) };


        // isDefault Field Functions 
        bool hasIsDefault() const { return this->isDefault_ != nullptr;};
        void deleteIsDefault() { this->isDefault_ = nullptr;};
        inline bool getIsDefault() const { DARABONBA_PTR_GET_DEFAULT(isDefault_, false) };
        inline ArchiveTableList& setIsDefault(bool isDefault) { DARABONBA_PTR_SET_VALUE(isDefault_, isDefault) };


        // lifecycle Field Functions 
        bool hasLifecycle() const { return this->lifecycle_ != nullptr;};
        void deleteLifecycle() { this->lifecycle_ = nullptr;};
        inline int32_t getLifecycle() const { DARABONBA_PTR_GET_DEFAULT(lifecycle_, 0) };
        inline ArchiveTableList& setLifecycle(int32_t lifecycle) { DARABONBA_PTR_SET_VALUE(lifecycle_, lifecycle) };


        // maxArchiveCount Field Functions 
        bool hasMaxArchiveCount() const { return this->maxArchiveCount_ != nullptr;};
        void deleteMaxArchiveCount() { this->maxArchiveCount_ = nullptr;};
        inline int64_t getMaxArchiveCount() const { DARABONBA_PTR_GET_DEFAULT(maxArchiveCount_, 0L) };
        inline ArchiveTableList& setMaxArchiveCount(int64_t maxArchiveCount) { DARABONBA_PTR_SET_VALUE(maxArchiveCount_, maxArchiveCount) };


      protected:
        // The ID of the archived table. This ID is used when you update, switch to active, or delete the archived table.
        shared_ptr<int64_t> archiveTableId_ {};
        // The full table name in the format of project_name.table_name.
        shared_ptr<string> archiveTableName_ {};
        // The DDL statement for creating the archived table, which includes dataphin_quality_* system fields and the dataphin_quality_validate_date partition field definition.
        shared_ptr<string> ddl_ {};
        // Indicates whether this is the active archived table. At least one active archived table must exist under the same monitored object.
        shared_ptr<bool> isDefault_ {};
        // The lifecycle in days. An empty value indicates no lifecycle is configured.
        shared_ptr<int32_t> lifecycle_ {};
        // The maximum number of records to archive per validation. A value of -1 indicates full archiving.
        shared_ptr<int64_t> maxArchiveCount_ {};
      };

      virtual bool empty() const override { return this->archiveTableList_ == nullptr
        && this->totalCount_ == nullptr; };
      // archiveTableList Field Functions 
      bool hasArchiveTableList() const { return this->archiveTableList_ != nullptr;};
      void deleteArchiveTableList() { this->archiveTableList_ = nullptr;};
      inline const vector<Data::ArchiveTableList> & getArchiveTableList() const { DARABONBA_PTR_GET_CONST(archiveTableList_, vector<Data::ArchiveTableList>) };
      inline vector<Data::ArchiveTableList> getArchiveTableList() { DARABONBA_PTR_GET(archiveTableList_, vector<Data::ArchiveTableList>) };
      inline Data& setArchiveTableList(const vector<Data::ArchiveTableList> & archiveTableList) { DARABONBA_PTR_SET_VALUE(archiveTableList_, archiveTableList) };
      inline Data& setArchiveTableList(vector<Data::ArchiveTableList> && archiveTableList) { DARABONBA_PTR_SET_RVALUE(archiveTableList_, archiveTableList) };


      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
      inline Data& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    protected:
      // The list of anomaly archived tables.
      shared_ptr<vector<Data::ArchiveTableList>> archiveTableList_ {};
      // The number of custom anomaly archived tables.
      shared_ptr<int64_t> totalCount_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListQualityArchiveTablesResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ListQualityArchiveTablesResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, ListQualityArchiveTablesResponseBody::Data) };
    inline ListQualityArchiveTablesResponseBody::Data getData() { DARABONBA_PTR_GET(data_, ListQualityArchiveTablesResponseBody::Data) };
    inline ListQualityArchiveTablesResponseBody& setData(const ListQualityArchiveTablesResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListQualityArchiveTablesResponseBody& setData(ListQualityArchiveTablesResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline ListQualityArchiveTablesResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListQualityArchiveTablesResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListQualityArchiveTablesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListQualityArchiveTablesResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The backend response code.
    shared_ptr<string> code_ {};
    // The result of querying the anomaly archived table list.
    shared_ptr<ListQualityArchiveTablesResponseBody::Data> data_ {};
    // The HTTP status code.
    shared_ptr<int32_t> httpStatusCode_ {};
    // The backend exception details.
    shared_ptr<string> message_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
