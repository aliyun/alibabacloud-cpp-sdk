// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ANALYZESQLLINEAGERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_ANALYZESQLLINEAGERESPONSEBODY_HPP_
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
  class AnalyzeSQLLineageResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AnalyzeSQLLineageResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(LineageResult, lineageResult_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, AnalyzeSQLLineageResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(LineageResult, lineageResult_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    AnalyzeSQLLineageResponseBody() = default ;
    AnalyzeSQLLineageResponseBody(const AnalyzeSQLLineageResponseBody &) = default ;
    AnalyzeSQLLineageResponseBody(AnalyzeSQLLineageResponseBody &&) = default ;
    AnalyzeSQLLineageResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AnalyzeSQLLineageResponseBody() = default ;
    AnalyzeSQLLineageResponseBody& operator=(const AnalyzeSQLLineageResponseBody &) = default ;
    AnalyzeSQLLineageResponseBody& operator=(AnalyzeSQLLineageResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class LineageResult : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const LineageResult& obj) { 
        DARABONBA_PTR_TO_JSON(Lineages, lineages_);
        DARABONBA_PTR_TO_JSON(ObjectMetadata, objectMetadata_);
      };
      friend void from_json(const Darabonba::Json& j, LineageResult& obj) { 
        DARABONBA_PTR_FROM_JSON(Lineages, lineages_);
        DARABONBA_PTR_FROM_JSON(ObjectMetadata, objectMetadata_);
      };
      LineageResult() = default ;
      LineageResult(const LineageResult &) = default ;
      LineageResult(LineageResult &&) = default ;
      LineageResult(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~LineageResult() = default ;
      LineageResult& operator=(const LineageResult &) = default ;
      LineageResult& operator=(LineageResult &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class ObjectMetadata : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ObjectMetadata& obj) { 
          DARABONBA_PTR_TO_JSON(Fields, fields_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(Source, source_);
          DARABONBA_PTR_TO_JSON(Type, type_);
        };
        friend void from_json(const Darabonba::Json& j, ObjectMetadata& obj) { 
          DARABONBA_PTR_FROM_JSON(Fields, fields_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(Source, source_);
          DARABONBA_PTR_FROM_JSON(Type, type_);
        };
        ObjectMetadata() = default ;
        ObjectMetadata(const ObjectMetadata &) = default ;
        ObjectMetadata(ObjectMetadata &&) = default ;
        ObjectMetadata(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ObjectMetadata() = default ;
        ObjectMetadata& operator=(const ObjectMetadata &) = default ;
        ObjectMetadata& operator=(ObjectMetadata &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Fields : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Fields& obj) { 
            DARABONBA_PTR_TO_JSON(Name, name_);
          };
          friend void from_json(const Darabonba::Json& j, Fields& obj) { 
            DARABONBA_PTR_FROM_JSON(Name, name_);
          };
          Fields() = default ;
          Fields(const Fields &) = default ;
          Fields(Fields &&) = default ;
          Fields(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Fields() = default ;
          Fields& operator=(const Fields &) = default ;
          Fields& operator=(Fields &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->name_ == nullptr; };
          // name Field Functions 
          bool hasName() const { return this->name_ != nullptr;};
          void deleteName() { this->name_ = nullptr;};
          inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
          inline Fields& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        protected:
          // The name of the field.
          shared_ptr<string> name_ {};
        };

        virtual bool empty() const override { return this->fields_ == nullptr
        && this->name_ == nullptr && this->source_ == nullptr && this->type_ == nullptr; };
        // fields Field Functions 
        bool hasFields() const { return this->fields_ != nullptr;};
        void deleteFields() { this->fields_ = nullptr;};
        inline const vector<ObjectMetadata::Fields> & getFields() const { DARABONBA_PTR_GET_CONST(fields_, vector<ObjectMetadata::Fields>) };
        inline vector<ObjectMetadata::Fields> getFields() { DARABONBA_PTR_GET(fields_, vector<ObjectMetadata::Fields>) };
        inline ObjectMetadata& setFields(const vector<ObjectMetadata::Fields> & fields) { DARABONBA_PTR_SET_VALUE(fields_, fields) };
        inline ObjectMetadata& setFields(vector<ObjectMetadata::Fields> && fields) { DARABONBA_PTR_SET_RVALUE(fields_, fields) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline ObjectMetadata& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // source Field Functions 
        bool hasSource() const { return this->source_ != nullptr;};
        void deleteSource() { this->source_ = nullptr;};
        inline string getSource() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
        inline ObjectMetadata& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline ObjectMetadata& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      protected:
        // The fields in the metatable.
        shared_ptr<vector<ObjectMetadata::Fields>> fields_ {};
        // The object name.
        shared_ptr<string> name_ {};
        // The source of metadata. Valid values:
        // 
        // *   **DDL**: The metadata comes from parsed SQL statements or definition of databases and tables collected by DMS.
        // *   **LINEAGE**: The metadata comes from lineage analysis results.
        shared_ptr<string> source_ {};
        // The object type. Valid values:
        // 
        // *   **TABLE**
        // *   **VIEW**
        // *   **TMP_TABLE**
        shared_ptr<string> type_ {};
      };

      class Lineages : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Lineages& obj) { 
          DARABONBA_PTR_TO_JSON(Dst, dst_);
          DARABONBA_PTR_TO_JSON(LineageType, lineageType_);
          DARABONBA_PTR_TO_JSON(OperType, operType_);
          DARABONBA_PTR_TO_JSON(ProcessDetail, processDetail_);
          DARABONBA_PTR_TO_JSON(Src, src_);
        };
        friend void from_json(const Darabonba::Json& j, Lineages& obj) { 
          DARABONBA_PTR_FROM_JSON(Dst, dst_);
          DARABONBA_PTR_FROM_JSON(LineageType, lineageType_);
          DARABONBA_PTR_FROM_JSON(OperType, operType_);
          DARABONBA_PTR_FROM_JSON(ProcessDetail, processDetail_);
          DARABONBA_PTR_FROM_JSON(Src, src_);
        };
        Lineages() = default ;
        Lineages(const Lineages &) = default ;
        Lineages(Lineages &&) = default ;
        Lineages(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Lineages() = default ;
        Lineages& operator=(const Lineages &) = default ;
        Lineages& operator=(Lineages &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class ProcessDetail : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const ProcessDetail& obj) { 
            DARABONBA_PTR_TO_JSON(CalWay, calWay_);
            DARABONBA_PTR_TO_JSON(Code, code_);
          };
          friend void from_json(const Darabonba::Json& j, ProcessDetail& obj) { 
            DARABONBA_PTR_FROM_JSON(CalWay, calWay_);
            DARABONBA_PTR_FROM_JSON(Code, code_);
          };
          ProcessDetail() = default ;
          ProcessDetail(const ProcessDetail &) = default ;
          ProcessDetail(ProcessDetail &&) = default ;
          ProcessDetail(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~ProcessDetail() = default ;
          ProcessDetail& operator=(const ProcessDetail &) = default ;
          ProcessDetail& operator=(ProcessDetail &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->calWay_ == nullptr
        && this->code_ == nullptr; };
          // calWay Field Functions 
          bool hasCalWay() const { return this->calWay_ != nullptr;};
          void deleteCalWay() { this->calWay_ = nullptr;};
          inline string getCalWay() const { DARABONBA_PTR_GET_DEFAULT(calWay_, "") };
          inline ProcessDetail& setCalWay(string calWay) { DARABONBA_PTR_SET_VALUE(calWay_, calWay) };


          // code Field Functions 
          bool hasCode() const { return this->code_ != nullptr;};
          void deleteCode() { this->code_ = nullptr;};
          inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
          inline ProcessDetail& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


        protected:
          // The calculating method. Valid values:
          // 
          // *   **DIRECT**: No function or expression is used.
          // *   **EXPR**: A function or expression is used.
          shared_ptr<string> calWay_ {};
          // The SQL code snippet for field processing.
          shared_ptr<string> code_ {};
        };

        virtual bool empty() const override { return this->dst_ == nullptr
        && this->lineageType_ == nullptr && this->operType_ == nullptr && this->processDetail_ == nullptr && this->src_ == nullptr; };
        // dst Field Functions 
        bool hasDst() const { return this->dst_ != nullptr;};
        void deleteDst() { this->dst_ = nullptr;};
        inline string getDst() const { DARABONBA_PTR_GET_DEFAULT(dst_, "") };
        inline Lineages& setDst(string dst) { DARABONBA_PTR_SET_VALUE(dst_, dst) };


        // lineageType Field Functions 
        bool hasLineageType() const { return this->lineageType_ != nullptr;};
        void deleteLineageType() { this->lineageType_ = nullptr;};
        inline string getLineageType() const { DARABONBA_PTR_GET_DEFAULT(lineageType_, "") };
        inline Lineages& setLineageType(string lineageType) { DARABONBA_PTR_SET_VALUE(lineageType_, lineageType) };


        // operType Field Functions 
        bool hasOperType() const { return this->operType_ != nullptr;};
        void deleteOperType() { this->operType_ = nullptr;};
        inline string getOperType() const { DARABONBA_PTR_GET_DEFAULT(operType_, "") };
        inline Lineages& setOperType(string operType) { DARABONBA_PTR_SET_VALUE(operType_, operType) };


        // processDetail Field Functions 
        bool hasProcessDetail() const { return this->processDetail_ != nullptr;};
        void deleteProcessDetail() { this->processDetail_ = nullptr;};
        inline const Lineages::ProcessDetail & getProcessDetail() const { DARABONBA_PTR_GET_CONST(processDetail_, Lineages::ProcessDetail) };
        inline Lineages::ProcessDetail getProcessDetail() { DARABONBA_PTR_GET(processDetail_, Lineages::ProcessDetail) };
        inline Lineages& setProcessDetail(const Lineages::ProcessDetail & processDetail) { DARABONBA_PTR_SET_VALUE(processDetail_, processDetail) };
        inline Lineages& setProcessDetail(Lineages::ProcessDetail && processDetail) { DARABONBA_PTR_SET_RVALUE(processDetail_, processDetail) };


        // src Field Functions 
        bool hasSrc() const { return this->src_ != nullptr;};
        void deleteSrc() { this->src_ = nullptr;};
        inline string getSrc() const { DARABONBA_PTR_GET_DEFAULT(src_, "") };
        inline Lineages& setSrc(string src) { DARABONBA_PTR_SET_VALUE(src_, src) };


      protected:
        // The target.
        shared_ptr<string> dst_ {};
        // The type of the lineage. Valid values:
        // 
        // *   **FIELD_DEPEND_FIELD**: Fields depend on fields.
        // *   **TABLE_DEPEND_TABLE**: Tables depend on tables.
        // *   **FIELD_INFLU_TABLE**: Fields influence tables.
        // *   **FIELD_INFLU_FIELD**: Fields influence fields.
        // *   **FIELD_INFLU_TABLE**: Tables influence fields.
        // *   **FIELD_JOIN_FIELD**: Fields are associated with fields.
        shared_ptr<string> lineageType_ {};
        // The operation type of the SQL statement in which the data lineage is generated. For example, if the operation type is SELECT, the data lineage is generated from a SELECT statement.
        // 
        // >  This field is an extended field which has no practical use.
        shared_ptr<string> operType_ {};
        // The handling details. This parameter is returned only when LineageType is FIELD_DEPEND_FIELD.
        shared_ptr<Lineages::ProcessDetail> processDetail_ {};
        // The source.
        shared_ptr<string> src_ {};
      };

      virtual bool empty() const override { return this->lineages_ == nullptr
        && this->objectMetadata_ == nullptr; };
      // lineages Field Functions 
      bool hasLineages() const { return this->lineages_ != nullptr;};
      void deleteLineages() { this->lineages_ = nullptr;};
      inline const vector<LineageResult::Lineages> & getLineages() const { DARABONBA_PTR_GET_CONST(lineages_, vector<LineageResult::Lineages>) };
      inline vector<LineageResult::Lineages> getLineages() { DARABONBA_PTR_GET(lineages_, vector<LineageResult::Lineages>) };
      inline LineageResult& setLineages(const vector<LineageResult::Lineages> & lineages) { DARABONBA_PTR_SET_VALUE(lineages_, lineages) };
      inline LineageResult& setLineages(vector<LineageResult::Lineages> && lineages) { DARABONBA_PTR_SET_RVALUE(lineages_, lineages) };


      // objectMetadata Field Functions 
      bool hasObjectMetadata() const { return this->objectMetadata_ != nullptr;};
      void deleteObjectMetadata() { this->objectMetadata_ = nullptr;};
      inline const vector<LineageResult::ObjectMetadata> & getObjectMetadata() const { DARABONBA_PTR_GET_CONST(objectMetadata_, vector<LineageResult::ObjectMetadata>) };
      inline vector<LineageResult::ObjectMetadata> getObjectMetadata() { DARABONBA_PTR_GET(objectMetadata_, vector<LineageResult::ObjectMetadata>) };
      inline LineageResult& setObjectMetadata(const vector<LineageResult::ObjectMetadata> & objectMetadata) { DARABONBA_PTR_SET_VALUE(objectMetadata_, objectMetadata) };
      inline LineageResult& setObjectMetadata(vector<LineageResult::ObjectMetadata> && objectMetadata) { DARABONBA_PTR_SET_RVALUE(objectMetadata_, objectMetadata) };


    protected:
      // The details about the lineage.
      shared_ptr<vector<LineageResult::Lineages>> lineages_ {};
      // The table and field metadata information.
      shared_ptr<vector<LineageResult::ObjectMetadata>> objectMetadata_ {};
    };

    virtual bool empty() const override { return this->errorCode_ == nullptr
        && this->errorMessage_ == nullptr && this->lineageResult_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline AnalyzeSQLLineageResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline AnalyzeSQLLineageResponseBody& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // lineageResult Field Functions 
    bool hasLineageResult() const { return this->lineageResult_ != nullptr;};
    void deleteLineageResult() { this->lineageResult_ = nullptr;};
    inline const AnalyzeSQLLineageResponseBody::LineageResult & getLineageResult() const { DARABONBA_PTR_GET_CONST(lineageResult_, AnalyzeSQLLineageResponseBody::LineageResult) };
    inline AnalyzeSQLLineageResponseBody::LineageResult getLineageResult() { DARABONBA_PTR_GET(lineageResult_, AnalyzeSQLLineageResponseBody::LineageResult) };
    inline AnalyzeSQLLineageResponseBody& setLineageResult(const AnalyzeSQLLineageResponseBody::LineageResult & lineageResult) { DARABONBA_PTR_SET_VALUE(lineageResult_, lineageResult) };
    inline AnalyzeSQLLineageResponseBody& setLineageResult(AnalyzeSQLLineageResponseBody::LineageResult && lineageResult) { DARABONBA_PTR_SET_RVALUE(lineageResult_, lineageResult) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline AnalyzeSQLLineageResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline AnalyzeSQLLineageResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The error code returned.
    shared_ptr<string> errorCode_ {};
    // The error message returned if the request failed.
    shared_ptr<string> errorMessage_ {};
    // Returned data set of SQL lineage.
    shared_ptr<AnalyzeSQLLineageResponseBody::LineageResult> lineageResult_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful. Valid values:
    // 
    // *   **true**
    // *   **false**
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
