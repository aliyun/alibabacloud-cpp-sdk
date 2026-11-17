// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEKNOWLEDGEOBJECTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEKNOWLEDGEOBJECTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class CreateKnowledgeObjectResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateKnowledgeObjectResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, CreateKnowledgeObjectResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    CreateKnowledgeObjectResponseBody() = default ;
    CreateKnowledgeObjectResponseBody(const CreateKnowledgeObjectResponseBody &) = default ;
    CreateKnowledgeObjectResponseBody(CreateKnowledgeObjectResponseBody &&) = default ;
    CreateKnowledgeObjectResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateKnowledgeObjectResponseBody() = default ;
    CreateKnowledgeObjectResponseBody& operator=(const CreateKnowledgeObjectResponseBody &) = default ;
    CreateKnowledgeObjectResponseBody& operator=(CreateKnowledgeObjectResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(Content, content_);
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(DownloadFiles, downloadFiles_);
        DARABONBA_PTR_TO_JSON(DownloadUrl, downloadUrl_);
        DARABONBA_PTR_TO_JSON(Editable, editable_);
        DARABONBA_PTR_TO_JSON(ExpiresIn, expiresIn_);
        DARABONBA_PTR_TO_JSON(FileName, fileName_);
        DARABONBA_PTR_TO_JSON(KnowledgeBaseId, knowledgeBaseId_);
        DARABONBA_PTR_TO_JSON(KnowledgeObjectId, knowledgeObjectId_);
        DARABONBA_PTR_TO_JSON(ModifyTime, modifyTime_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(SizeBytes, sizeBytes_);
        DARABONBA_PTR_TO_JSON(SourceReferences, sourceReferences_);
        DARABONBA_PTR_TO_JSON(Type, type_);
        DARABONBA_PTR_TO_JSON(VersionNo, versionNo_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(Content, content_);
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(DownloadFiles, downloadFiles_);
        DARABONBA_PTR_FROM_JSON(DownloadUrl, downloadUrl_);
        DARABONBA_PTR_FROM_JSON(Editable, editable_);
        DARABONBA_PTR_FROM_JSON(ExpiresIn, expiresIn_);
        DARABONBA_PTR_FROM_JSON(FileName, fileName_);
        DARABONBA_PTR_FROM_JSON(KnowledgeBaseId, knowledgeBaseId_);
        DARABONBA_PTR_FROM_JSON(KnowledgeObjectId, knowledgeObjectId_);
        DARABONBA_PTR_FROM_JSON(ModifyTime, modifyTime_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(SizeBytes, sizeBytes_);
        DARABONBA_PTR_FROM_JSON(SourceReferences, sourceReferences_);
        DARABONBA_PTR_FROM_JSON(Type, type_);
        DARABONBA_PTR_FROM_JSON(VersionNo, versionNo_);
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
      class SourceReferences : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const SourceReferences& obj) { 
          DARABONBA_PTR_TO_JSON(SourceId, sourceId_);
          DARABONBA_PTR_TO_JSON(Type, type_);
        };
        friend void from_json(const Darabonba::Json& j, SourceReferences& obj) { 
          DARABONBA_PTR_FROM_JSON(SourceId, sourceId_);
          DARABONBA_PTR_FROM_JSON(Type, type_);
        };
        SourceReferences() = default ;
        SourceReferences(const SourceReferences &) = default ;
        SourceReferences(SourceReferences &&) = default ;
        SourceReferences(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~SourceReferences() = default ;
        SourceReferences& operator=(const SourceReferences &) = default ;
        SourceReferences& operator=(SourceReferences &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->sourceId_ == nullptr
        && this->type_ == nullptr; };
        // sourceId Field Functions 
        bool hasSourceId() const { return this->sourceId_ != nullptr;};
        void deleteSourceId() { this->sourceId_ = nullptr;};
        inline string getSourceId() const { DARABONBA_PTR_GET_DEFAULT(sourceId_, "") };
        inline SourceReferences& setSourceId(string sourceId) { DARABONBA_PTR_SET_VALUE(sourceId_, sourceId) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline SourceReferences& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      protected:
        // The source ID. This field exists only when the type is KNOWLEDGE_SOURCE. It represents the SourceId of the KnowledgeSource registered in the current knowledge base.
        shared_ptr<string> sourceId_ {};
        // The category of the source reference. The structure retains KNOWLEDGE_SOURCE. Currently, SourceReferences is an empty array.
        shared_ptr<string> type_ {};
      };

      class DownloadFiles : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const DownloadFiles& obj) { 
          DARABONBA_PTR_TO_JSON(DownloadUrl, downloadUrl_);
          DARABONBA_PTR_TO_JSON(FileName, fileName_);
        };
        friend void from_json(const Darabonba::Json& j, DownloadFiles& obj) { 
          DARABONBA_PTR_FROM_JSON(DownloadUrl, downloadUrl_);
          DARABONBA_PTR_FROM_JSON(FileName, fileName_);
        };
        DownloadFiles() = default ;
        DownloadFiles(const DownloadFiles &) = default ;
        DownloadFiles(DownloadFiles &&) = default ;
        DownloadFiles(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~DownloadFiles() = default ;
        DownloadFiles& operator=(const DownloadFiles &) = default ;
        DownloadFiles& operator=(DownloadFiles &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->downloadUrl_ == nullptr
        && this->fileName_ == nullptr; };
        // downloadUrl Field Functions 
        bool hasDownloadUrl() const { return this->downloadUrl_ != nullptr;};
        void deleteDownloadUrl() { this->downloadUrl_ = nullptr;};
        inline string getDownloadUrl() const { DARABONBA_PTR_GET_DEFAULT(downloadUrl_, "") };
        inline DownloadFiles& setDownloadUrl(string downloadUrl) { DARABONBA_PTR_SET_VALUE(downloadUrl_, downloadUrl) };


        // fileName Field Functions 
        bool hasFileName() const { return this->fileName_ != nullptr;};
        void deleteFileName() { this->fileName_ = nullptr;};
        inline string getFileName() const { DARABONBA_PTR_GET_DEFAULT(fileName_, "") };
        inline DownloadFiles& setFileName(string fileName) { DARABONBA_PTR_SET_VALUE(fileName_, fileName) };


      protected:
        // The temporary download URL for the specification YAML file. The validity period is specified by ExpiresIn.
        shared_ptr<string> downloadUrl_ {};
        // The original file name of the uploaded document. This field is read-only. Renaming the object does not change this value. This field is not returned for external documents and semantic models.
        shared_ptr<string> fileName_ {};
      };

      class Content : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Content& obj) { 
          DARABONBA_PTR_TO_JSON(Document, document_);
          DARABONBA_PTR_TO_JSON(SemanticModel, semanticModel_);
        };
        friend void from_json(const Darabonba::Json& j, Content& obj) { 
          DARABONBA_PTR_FROM_JSON(Document, document_);
          DARABONBA_PTR_FROM_JSON(SemanticModel, semanticModel_);
        };
        Content() = default ;
        Content(const Content &) = default ;
        Content(Content &&) = default ;
        Content(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Content() = default ;
        Content& operator=(const Content &) = default ;
        Content& operator=(Content &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class SemanticModel : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const SemanticModel& obj) { 
            DARABONBA_PTR_TO_JSON(Datasets, datasets_);
            DARABONBA_PTR_TO_JSON(Metrics, metrics_);
            DARABONBA_PTR_TO_JSON(Relationships, relationships_);
          };
          friend void from_json(const Darabonba::Json& j, SemanticModel& obj) { 
            DARABONBA_PTR_FROM_JSON(Datasets, datasets_);
            DARABONBA_PTR_FROM_JSON(Metrics, metrics_);
            DARABONBA_PTR_FROM_JSON(Relationships, relationships_);
          };
          SemanticModel() = default ;
          SemanticModel(const SemanticModel &) = default ;
          SemanticModel(SemanticModel &&) = default ;
          SemanticModel(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~SemanticModel() = default ;
          SemanticModel& operator=(const SemanticModel &) = default ;
          SemanticModel& operator=(SemanticModel &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class Relationships : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const Relationships& obj) { 
              DARABONBA_PTR_TO_JSON(FromDataset, fromDataset_);
              DARABONBA_PTR_TO_JSON(JoinKeys, joinKeys_);
              DARABONBA_PTR_TO_JSON(Name, name_);
              DARABONBA_PTR_TO_JSON(ToDataset, toDataset_);
            };
            friend void from_json(const Darabonba::Json& j, Relationships& obj) { 
              DARABONBA_PTR_FROM_JSON(FromDataset, fromDataset_);
              DARABONBA_PTR_FROM_JSON(JoinKeys, joinKeys_);
              DARABONBA_PTR_FROM_JSON(Name, name_);
              DARABONBA_PTR_FROM_JSON(ToDataset, toDataset_);
            };
            Relationships() = default ;
            Relationships(const Relationships &) = default ;
            Relationships(Relationships &&) = default ;
            Relationships(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~Relationships() = default ;
            Relationships& operator=(const Relationships &) = default ;
            Relationships& operator=(Relationships &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            class JoinKeys : public Darabonba::Model {
            public:
              friend void to_json(Darabonba::Json& j, const JoinKeys& obj) { 
                DARABONBA_PTR_TO_JSON(FromField, fromField_);
                DARABONBA_PTR_TO_JSON(ToField, toField_);
              };
              friend void from_json(const Darabonba::Json& j, JoinKeys& obj) { 
                DARABONBA_PTR_FROM_JSON(FromField, fromField_);
                DARABONBA_PTR_FROM_JSON(ToField, toField_);
              };
              JoinKeys() = default ;
              JoinKeys(const JoinKeys &) = default ;
              JoinKeys(JoinKeys &&) = default ;
              JoinKeys(const Darabonba::Json & obj) { from_json(obj, *this); };
              virtual ~JoinKeys() = default ;
              JoinKeys& operator=(const JoinKeys &) = default ;
              JoinKeys& operator=(JoinKeys &&) = default ;
              virtual void validate() const override {
              };
              virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
              virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
              virtual bool empty() const override { return this->fromField_ == nullptr
        && this->toField_ == nullptr; };
              // fromField Field Functions 
              bool hasFromField() const { return this->fromField_ != nullptr;};
              void deleteFromField() { this->fromField_ = nullptr;};
              inline string getFromField() const { DARABONBA_PTR_GET_DEFAULT(fromField_, "") };
              inline JoinKeys& setFromField(string fromField) { DARABONBA_PTR_SET_VALUE(fromField_, fromField) };


              // toField Field Functions 
              bool hasToField() const { return this->toField_ != nullptr;};
              void deleteToField() { this->toField_ = nullptr;};
              inline string getToField() const { DARABONBA_PTR_GET_DEFAULT(toField_, "") };
              inline JoinKeys& setToField(string toField) { DARABONBA_PTR_SET_VALUE(toField_, toField) };


            protected:
              // The name of the field in the starting dataset that participates in the relationship. It must be defined in the Fields of the dataset corresponding to FromDataset.
              shared_ptr<string> fromField_ {};
              // The name of the field in the ending dataset that participates in the relationship. It must be defined in the Fields of the dataset corresponding to ToDataset.
              shared_ptr<string> toField_ {};
            };

            virtual bool empty() const override { return this->fromDataset_ == nullptr
        && this->joinKeys_ == nullptr && this->name_ == nullptr && this->toDataset_ == nullptr; };
            // fromDataset Field Functions 
            bool hasFromDataset() const { return this->fromDataset_ != nullptr;};
            void deleteFromDataset() { this->fromDataset_ = nullptr;};
            inline string getFromDataset() const { DARABONBA_PTR_GET_DEFAULT(fromDataset_, "") };
            inline Relationships& setFromDataset(string fromDataset) { DARABONBA_PTR_SET_VALUE(fromDataset_, fromDataset) };


            // joinKeys Field Functions 
            bool hasJoinKeys() const { return this->joinKeys_ != nullptr;};
            void deleteJoinKeys() { this->joinKeys_ = nullptr;};
            inline const vector<Relationships::JoinKeys> & getJoinKeys() const { DARABONBA_PTR_GET_CONST(joinKeys_, vector<Relationships::JoinKeys>) };
            inline vector<Relationships::JoinKeys> getJoinKeys() { DARABONBA_PTR_GET(joinKeys_, vector<Relationships::JoinKeys>) };
            inline Relationships& setJoinKeys(const vector<Relationships::JoinKeys> & joinKeys) { DARABONBA_PTR_SET_VALUE(joinKeys_, joinKeys) };
            inline Relationships& setJoinKeys(vector<Relationships::JoinKeys> && joinKeys) { DARABONBA_PTR_SET_RVALUE(joinKeys_, joinKeys) };


            // name Field Functions 
            bool hasName() const { return this->name_ != nullptr;};
            void deleteName() { this->name_ = nullptr;};
            inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
            inline Relationships& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


            // toDataset Field Functions 
            bool hasToDataset() const { return this->toDataset_ != nullptr;};
            void deleteToDataset() { this->toDataset_ = nullptr;};
            inline string getToDataset() const { DARABONBA_PTR_GET_DEFAULT(toDataset_, "") };
            inline Relationships& setToDataset(string toDataset) { DARABONBA_PTR_SET_VALUE(toDataset_, toDataset) };


          protected:
            // The SemanticDataset.Name of the starting point.
            shared_ptr<string> fromDataset_ {};
            // The equi-join pairs of fields at both ends of the relationship. For composite relationships, fields are paired item by item.
            shared_ptr<vector<Relationships::JoinKeys>> joinKeys_ {};
            // The user-facing name. This field is editable. Renaming the object does not change the KnowledgeObjectId.
            shared_ptr<string> name_ {};
            // The SemanticDataset.Name of the ending point.
            shared_ptr<string> toDataset_ {};
          };

          class Metrics : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const Metrics& obj) { 
              DARABONBA_PTR_TO_JSON(DatasetName, datasetName_);
              DARABONBA_PTR_TO_JSON(Description, description_);
              DARABONBA_PTR_TO_JSON(Expression, expression_);
              DARABONBA_PTR_TO_JSON(Name, name_);
              DARABONBA_PTR_TO_JSON(Unit, unit_);
            };
            friend void from_json(const Darabonba::Json& j, Metrics& obj) { 
              DARABONBA_PTR_FROM_JSON(DatasetName, datasetName_);
              DARABONBA_PTR_FROM_JSON(Description, description_);
              DARABONBA_PTR_FROM_JSON(Expression, expression_);
              DARABONBA_PTR_FROM_JSON(Name, name_);
              DARABONBA_PTR_FROM_JSON(Unit, unit_);
            };
            Metrics() = default ;
            Metrics(const Metrics &) = default ;
            Metrics(Metrics &&) = default ;
            Metrics(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~Metrics() = default ;
            Metrics& operator=(const Metrics &) = default ;
            Metrics& operator=(Metrics &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            class Expression : public Darabonba::Model {
            public:
              friend void to_json(Darabonba::Json& j, const Expression& obj) { 
                DARABONBA_PTR_TO_JSON(Dialects, dialects_);
              };
              friend void from_json(const Darabonba::Json& j, Expression& obj) { 
                DARABONBA_PTR_FROM_JSON(Dialects, dialects_);
              };
              Expression() = default ;
              Expression(const Expression &) = default ;
              Expression(Expression &&) = default ;
              Expression(const Darabonba::Json & obj) { from_json(obj, *this); };
              virtual ~Expression() = default ;
              Expression& operator=(const Expression &) = default ;
              Expression& operator=(Expression &&) = default ;
              virtual void validate() const override {
              };
              virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
              virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
              class Dialects : public Darabonba::Model {
              public:
                friend void to_json(Darabonba::Json& j, const Dialects& obj) { 
                  DARABONBA_PTR_TO_JSON(Dialect, dialect_);
                  DARABONBA_PTR_TO_JSON(Sql, sql_);
                };
                friend void from_json(const Darabonba::Json& j, Dialects& obj) { 
                  DARABONBA_PTR_FROM_JSON(Dialect, dialect_);
                  DARABONBA_PTR_FROM_JSON(Sql, sql_);
                };
                Dialects() = default ;
                Dialects(const Dialects &) = default ;
                Dialects(Dialects &&) = default ;
                Dialects(const Darabonba::Json & obj) { from_json(obj, *this); };
                virtual ~Dialects() = default ;
                Dialects& operator=(const Dialects &) = default ;
                Dialects& operator=(Dialects &&) = default ;
                virtual void validate() const override {
                };
                virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
                virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
                virtual bool empty() const override { return this->dialect_ == nullptr
        && this->sql_ == nullptr; };
                // dialect Field Functions 
                bool hasDialect() const { return this->dialect_ != nullptr;};
                void deleteDialect() { this->dialect_ = nullptr;};
                inline string getDialect() const { DARABONBA_PTR_GET_DEFAULT(dialect_, "") };
                inline Dialects& setDialect(string dialect) { DARABONBA_PTR_SET_VALUE(dialect_, dialect) };


                // sql Field Functions 
                bool hasSql() const { return this->sql_ != nullptr;};
                void deleteSql() { this->sql_ = nullptr;};
                inline string getSql() const { DARABONBA_PTR_GET_DEFAULT(sql_, "") };
                inline Dialects& setSql(string sql) { DARABONBA_PTR_SET_VALUE(sql_, sql) };


              protected:
                // The SQL dialect, such as MaxCompute or ANSI_SQL.
                shared_ptr<string> dialect_ {};
                // The non-empty calculation expression in the specified dialect. It is not a complete query statement.
                shared_ptr<string> sql_ {};
              };

              virtual bool empty() const override { return this->dialects_ == nullptr; };
              // dialects Field Functions 
              bool hasDialects() const { return this->dialects_ != nullptr;};
              void deleteDialects() { this->dialects_ = nullptr;};
              inline const vector<Expression::Dialects> & getDialects() const { DARABONBA_PTR_GET_CONST(dialects_, vector<Expression::Dialects>) };
              inline vector<Expression::Dialects> getDialects() { DARABONBA_PTR_GET(dialects_, vector<Expression::Dialects>) };
              inline Expression& setDialects(const vector<Expression::Dialects> & dialects) { DARABONBA_PTR_SET_VALUE(dialects_, dialects) };
              inline Expression& setDialects(vector<Expression::Dialects> && dialects) { DARABONBA_PTR_SET_RVALUE(dialects_, dialects) };


            protected:
              // The expressions of the same metric in different SQL dialects. At least one item is required. The same dialect is not repeated.
              shared_ptr<vector<Expression::Dialects>> dialects_ {};
            };

            virtual bool empty() const override { return this->datasetName_ == nullptr
        && this->description_ == nullptr && this->expression_ == nullptr && this->name_ == nullptr && this->unit_ == nullptr; };
            // datasetName Field Functions 
            bool hasDatasetName() const { return this->datasetName_ != nullptr;};
            void deleteDatasetName() { this->datasetName_ = nullptr;};
            inline string getDatasetName() const { DARABONBA_PTR_GET_DEFAULT(datasetName_, "") };
            inline Metrics& setDatasetName(string datasetName) { DARABONBA_PTR_SET_VALUE(datasetName_, datasetName) };


            // description Field Functions 
            bool hasDescription() const { return this->description_ != nullptr;};
            void deleteDescription() { this->description_ = nullptr;};
            inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
            inline Metrics& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


            // expression Field Functions 
            bool hasExpression() const { return this->expression_ != nullptr;};
            void deleteExpression() { this->expression_ = nullptr;};
            inline const Metrics::Expression & getExpression() const { DARABONBA_PTR_GET_CONST(expression_, Metrics::Expression) };
            inline Metrics::Expression getExpression() { DARABONBA_PTR_GET(expression_, Metrics::Expression) };
            inline Metrics& setExpression(const Metrics::Expression & expression) { DARABONBA_PTR_SET_VALUE(expression_, expression) };
            inline Metrics& setExpression(Metrics::Expression && expression) { DARABONBA_PTR_SET_RVALUE(expression_, expression) };


            // name Field Functions 
            bool hasName() const { return this->name_ != nullptr;};
            void deleteName() { this->name_ = nullptr;};
            inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
            inline Metrics& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


            // unit Field Functions 
            bool hasUnit() const { return this->unit_ != nullptr;};
            void deleteUnit() { this->unit_ = nullptr;};
            inline string getUnit() const { DARABONBA_PTR_GET_DEFAULT(unit_, "") };
            inline Metrics& setUnit(string unit) { DARABONBA_PTR_SET_VALUE(unit_, unit) };


          protected:
            // The SemanticDataset.Name to which the metric belongs. It must be locatable in the Datasets of this model.
            shared_ptr<string> datasetName_ {};
            // The description. This field is editable. Pass an empty string to clear the description.
            shared_ptr<string> description_ {};
            // The executable expression. It must include at least one dialect version and is not auto-completed by the model.
            shared_ptr<Metrics::Expression> expression_ {};
            // The user-facing name. This field is editable. Renaming the object does not change the KnowledgeObjectId.
            shared_ptr<string> name_ {};
            // The explicitly declared unit of the metric. This parameter is optional. It is not returned when no reliable source is available.
            shared_ptr<string> unit_ {};
          };

          class Datasets : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const Datasets& obj) { 
              DARABONBA_PTR_TO_JSON(Description, description_);
              DARABONBA_PTR_TO_JSON(EntityId, entityId_);
              DARABONBA_PTR_TO_JSON(Fields, fields_);
              DARABONBA_PTR_TO_JSON(Name, name_);
              DARABONBA_PTR_TO_JSON(PrimaryKey, primaryKey_);
            };
            friend void from_json(const Darabonba::Json& j, Datasets& obj) { 
              DARABONBA_PTR_FROM_JSON(Description, description_);
              DARABONBA_PTR_FROM_JSON(EntityId, entityId_);
              DARABONBA_PTR_FROM_JSON(Fields, fields_);
              DARABONBA_PTR_FROM_JSON(Name, name_);
              DARABONBA_PTR_FROM_JSON(PrimaryKey, primaryKey_);
            };
            Datasets() = default ;
            Datasets(const Datasets &) = default ;
            Datasets(Datasets &&) = default ;
            Datasets(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~Datasets() = default ;
            Datasets& operator=(const Datasets &) = default ;
            Datasets& operator=(Datasets &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            class Fields : public Darabonba::Model {
            public:
              friend void to_json(Darabonba::Json& j, const Fields& obj) { 
                DARABONBA_PTR_TO_JSON(DataType, dataType_);
                DARABONBA_PTR_TO_JSON(Description, description_);
                DARABONBA_PTR_TO_JSON(Name, name_);
              };
              friend void from_json(const Darabonba::Json& j, Fields& obj) { 
                DARABONBA_PTR_FROM_JSON(DataType, dataType_);
                DARABONBA_PTR_FROM_JSON(Description, description_);
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
              virtual bool empty() const override { return this->dataType_ == nullptr
        && this->description_ == nullptr && this->name_ == nullptr; };
              // dataType Field Functions 
              bool hasDataType() const { return this->dataType_ != nullptr;};
              void deleteDataType() { this->dataType_ = nullptr;};
              inline string getDataType() const { DARABONBA_PTR_GET_DEFAULT(dataType_, "") };
              inline Fields& setDataType(string dataType) { DARABONBA_PTR_SET_VALUE(dataType_, dataType) };


              // description Field Functions 
              bool hasDescription() const { return this->description_ != nullptr;};
              void deleteDescription() { this->description_ = nullptr;};
              inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
              inline Fields& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


              // name Field Functions 
              bool hasName() const { return this->name_ != nullptr;};
              void deleteName() { this->name_ = nullptr;};
              inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
              inline Fields& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


            protected:
              // The data type of the field. This must be provided for publicly available model fields and is not guessed by the server.
              shared_ptr<string> dataType_ {};
              // The description. This field is editable. Pass an empty string to clear the description.
              shared_ptr<string> description_ {};
              // The user-facing name. This field is editable. Renaming the object does not change the KnowledgeObjectId.
              shared_ptr<string> name_ {};
            };

            virtual bool empty() const override { return this->description_ == nullptr
        && this->entityId_ == nullptr && this->fields_ == nullptr && this->name_ == nullptr && this->primaryKey_ == nullptr; };
            // description Field Functions 
            bool hasDescription() const { return this->description_ != nullptr;};
            void deleteDescription() { this->description_ = nullptr;};
            inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
            inline Datasets& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


            // entityId Field Functions 
            bool hasEntityId() const { return this->entityId_ != nullptr;};
            void deleteEntityId() { this->entityId_ = nullptr;};
            inline string getEntityId() const { DARABONBA_PTR_GET_DEFAULT(entityId_, "") };
            inline Datasets& setEntityId(string entityId) { DARABONBA_PTR_SET_VALUE(entityId_, entityId) };


            // fields Field Functions 
            bool hasFields() const { return this->fields_ != nullptr;};
            void deleteFields() { this->fields_ = nullptr;};
            inline const vector<Datasets::Fields> & getFields() const { DARABONBA_PTR_GET_CONST(fields_, vector<Datasets::Fields>) };
            inline vector<Datasets::Fields> getFields() { DARABONBA_PTR_GET(fields_, vector<Datasets::Fields>) };
            inline Datasets& setFields(const vector<Datasets::Fields> & fields) { DARABONBA_PTR_SET_VALUE(fields_, fields) };
            inline Datasets& setFields(vector<Datasets::Fields> && fields) { DARABONBA_PTR_SET_RVALUE(fields_, fields) };


            // name Field Functions 
            bool hasName() const { return this->name_ != nullptr;};
            void deleteName() { this->name_ = nullptr;};
            inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
            inline Datasets& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


            // primaryKey Field Functions 
            bool hasPrimaryKey() const { return this->primaryKey_ != nullptr;};
            void deletePrimaryKey() { this->primaryKey_ = nullptr;};
            inline const vector<string> & getPrimaryKey() const { DARABONBA_PTR_GET_CONST(primaryKey_, vector<string>) };
            inline vector<string> getPrimaryKey() { DARABONBA_PTR_GET(primaryKey_, vector<string>) };
            inline Datasets& setPrimaryKey(const vector<string> & primaryKey) { DARABONBA_PTR_SET_VALUE(primaryKey_, primaryKey) };
            inline Datasets& setPrimaryKey(vector<string> && primaryKey) { DARABONBA_PTR_SET_RVALUE(primaryKey_, primaryKey) };


          protected:
            // The description. This field is editable. Pass an empty string to clear the description.
            shared_ptr<string> description_ {};
            // The metadata entity ID returned by Data Map. The client passes this ID as-is without concatenating it.
            shared_ptr<string> entityId_ {};
            // The defined and publicly available fields of the dataset. If no field definitions are provided, this is an empty array.
            shared_ptr<vector<Datasets::Fields>> fields_ {};
            // The user-facing name. This field is editable. Renaming the object does not change the KnowledgeObjectId.
            shared_ptr<string> name_ {};
            // The explicitly declared primary key field name. This parameter is optional. Each item must exist in the Fields of this dataset.
            shared_ptr<vector<string>> primaryKey_ {};
          };

          virtual bool empty() const override { return this->datasets_ == nullptr
        && this->metrics_ == nullptr && this->relationships_ == nullptr; };
          // datasets Field Functions 
          bool hasDatasets() const { return this->datasets_ != nullptr;};
          void deleteDatasets() { this->datasets_ = nullptr;};
          inline const vector<SemanticModel::Datasets> & getDatasets() const { DARABONBA_PTR_GET_CONST(datasets_, vector<SemanticModel::Datasets>) };
          inline vector<SemanticModel::Datasets> getDatasets() { DARABONBA_PTR_GET(datasets_, vector<SemanticModel::Datasets>) };
          inline SemanticModel& setDatasets(const vector<SemanticModel::Datasets> & datasets) { DARABONBA_PTR_SET_VALUE(datasets_, datasets) };
          inline SemanticModel& setDatasets(vector<SemanticModel::Datasets> && datasets) { DARABONBA_PTR_SET_RVALUE(datasets_, datasets) };


          // metrics Field Functions 
          bool hasMetrics() const { return this->metrics_ != nullptr;};
          void deleteMetrics() { this->metrics_ = nullptr;};
          inline const vector<SemanticModel::Metrics> & getMetrics() const { DARABONBA_PTR_GET_CONST(metrics_, vector<SemanticModel::Metrics>) };
          inline vector<SemanticModel::Metrics> getMetrics() { DARABONBA_PTR_GET(metrics_, vector<SemanticModel::Metrics>) };
          inline SemanticModel& setMetrics(const vector<SemanticModel::Metrics> & metrics) { DARABONBA_PTR_SET_VALUE(metrics_, metrics) };
          inline SemanticModel& setMetrics(vector<SemanticModel::Metrics> && metrics) { DARABONBA_PTR_SET_RVALUE(metrics_, metrics) };


          // relationships Field Functions 
          bool hasRelationships() const { return this->relationships_ != nullptr;};
          void deleteRelationships() { this->relationships_ = nullptr;};
          inline const vector<SemanticModel::Relationships> & getRelationships() const { DARABONBA_PTR_GET_CONST(relationships_, vector<SemanticModel::Relationships>) };
          inline vector<SemanticModel::Relationships> getRelationships() { DARABONBA_PTR_GET(relationships_, vector<SemanticModel::Relationships>) };
          inline SemanticModel& setRelationships(const vector<SemanticModel::Relationships> & relationships) { DARABONBA_PTR_SET_VALUE(relationships_, relationships) };
          inline SemanticModel& setRelationships(vector<SemanticModel::Relationships> && relationships) { DARABONBA_PTR_SET_RVALUE(relationships_, relationships) };


        protected:
          // The logical datasets included in the model. An empty array is returned if no public datasets are available.
          shared_ptr<vector<SemanticModel::Datasets>> datasets_ {};
          // The executable metrics in the model. If no metrics exist, this is an empty array. Metrics with only candidate formulas are not included.
          shared_ptr<vector<SemanticModel::Metrics>> metrics_ {};
          // The defined relationships in the model expressed by field pairs. If no relationships exist, this is an empty array. Relationships are not guessed from graph paths.
          shared_ptr<vector<SemanticModel::Relationships>> relationships_ {};
        };

        class Document : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Document& obj) { 
            DARABONBA_PTR_TO_JSON(ContentFormat, contentFormat_);
            DARABONBA_PTR_TO_JSON(Text, text_);
          };
          friend void from_json(const Darabonba::Json& j, Document& obj) { 
            DARABONBA_PTR_FROM_JSON(ContentFormat, contentFormat_);
            DARABONBA_PTR_FROM_JSON(Text, text_);
          };
          Document() = default ;
          Document(const Document &) = default ;
          Document(Document &&) = default ;
          Document(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Document() = default ;
          Document& operator=(const Document &) = default ;
          Document& operator=(Document &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->contentFormat_ == nullptr
        && this->text_ == nullptr; };
          // contentFormat Field Functions 
          bool hasContentFormat() const { return this->contentFormat_ != nullptr;};
          void deleteContentFormat() { this->contentFormat_ = nullptr;};
          inline string getContentFormat() const { DARABONBA_PTR_GET_DEFAULT(contentFormat_, "") };
          inline Document& setContentFormat(string contentFormat) { DARABONBA_PTR_SET_VALUE(contentFormat_, contentFormat) };


          // text Field Functions 
          bool hasText() const { return this->text_ != nullptr;};
          void deleteText() { this->text_ = nullptr;};
          inline string getText() const { DARABONBA_PTR_GET_DEFAULT(text_, "") };
          inline Document& setText(string text) { DARABONBA_PTR_SET_VALUE(text_, text) };


        protected:
          // The content format. This field is required when Text is provided. Initially, the supported values are MARKDOWN and TEXT.
          shared_ptr<string> contentFormat_ {};
          // The current document body that can be provided to the caller. This field is optional. It is omitted if parsing is incomplete, access is not authorized, or the full document cannot be provided securely. A single retrieved snippet does not stand in for the entire document.
          shared_ptr<string> text_ {};
        };

        virtual bool empty() const override { return this->document_ == nullptr
        && this->semanticModel_ == nullptr; };
        // document Field Functions 
        bool hasDocument() const { return this->document_ != nullptr;};
        void deleteDocument() { this->document_ = nullptr;};
        inline const Content::Document & getDocument() const { DARABONBA_PTR_GET_CONST(document_, Content::Document) };
        inline Content::Document getDocument() { DARABONBA_PTR_GET(document_, Content::Document) };
        inline Content& setDocument(const Content::Document & document) { DARABONBA_PTR_SET_VALUE(document_, document) };
        inline Content& setDocument(Content::Document && document) { DARABONBA_PTR_SET_RVALUE(document_, document) };


        // semanticModel Field Functions 
        bool hasSemanticModel() const { return this->semanticModel_ != nullptr;};
        void deleteSemanticModel() { this->semanticModel_ = nullptr;};
        inline const Content::SemanticModel & getSemanticModel() const { DARABONBA_PTR_GET_CONST(semanticModel_, Content::SemanticModel) };
        inline Content::SemanticModel getSemanticModel() { DARABONBA_PTR_GET(semanticModel_, Content::SemanticModel) };
        inline Content& setSemanticModel(const Content::SemanticModel & semanticModel) { DARABONBA_PTR_SET_VALUE(semanticModel_, semanticModel) };
        inline Content& setSemanticModel(Content::SemanticModel && semanticModel) { DARABONBA_PTR_SET_RVALUE(semanticModel_, semanticModel) };


      protected:
        // This operation returns only the document content.
        shared_ptr<Content::Document> document_ {};
        // The semantic model. This field exists only when Type is set to SEMANTIC_MODEL.
        shared_ptr<Content::SemanticModel> semanticModel_ {};
      };

      virtual bool empty() const override { return this->content_ == nullptr
        && this->createTime_ == nullptr && this->description_ == nullptr && this->downloadFiles_ == nullptr && this->downloadUrl_ == nullptr && this->editable_ == nullptr
        && this->expiresIn_ == nullptr && this->fileName_ == nullptr && this->knowledgeBaseId_ == nullptr && this->knowledgeObjectId_ == nullptr && this->modifyTime_ == nullptr
        && this->name_ == nullptr && this->sizeBytes_ == nullptr && this->sourceReferences_ == nullptr && this->type_ == nullptr && this->versionNo_ == nullptr; };
      // content Field Functions 
      bool hasContent() const { return this->content_ != nullptr;};
      void deleteContent() { this->content_ = nullptr;};
      inline const Data::Content & getContent() const { DARABONBA_PTR_GET_CONST(content_, Data::Content) };
      inline Data::Content getContent() { DARABONBA_PTR_GET(content_, Data::Content) };
      inline Data& setContent(const Data::Content & content) { DARABONBA_PTR_SET_VALUE(content_, content) };
      inline Data& setContent(Data::Content && content) { DARABONBA_PTR_SET_RVALUE(content_, content) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline int64_t getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
      inline Data& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline Data& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // downloadFiles Field Functions 
      bool hasDownloadFiles() const { return this->downloadFiles_ != nullptr;};
      void deleteDownloadFiles() { this->downloadFiles_ = nullptr;};
      inline const vector<Data::DownloadFiles> & getDownloadFiles() const { DARABONBA_PTR_GET_CONST(downloadFiles_, vector<Data::DownloadFiles>) };
      inline vector<Data::DownloadFiles> getDownloadFiles() { DARABONBA_PTR_GET(downloadFiles_, vector<Data::DownloadFiles>) };
      inline Data& setDownloadFiles(const vector<Data::DownloadFiles> & downloadFiles) { DARABONBA_PTR_SET_VALUE(downloadFiles_, downloadFiles) };
      inline Data& setDownloadFiles(vector<Data::DownloadFiles> && downloadFiles) { DARABONBA_PTR_SET_RVALUE(downloadFiles_, downloadFiles) };


      // downloadUrl Field Functions 
      bool hasDownloadUrl() const { return this->downloadUrl_ != nullptr;};
      void deleteDownloadUrl() { this->downloadUrl_ = nullptr;};
      inline string getDownloadUrl() const { DARABONBA_PTR_GET_DEFAULT(downloadUrl_, "") };
      inline Data& setDownloadUrl(string downloadUrl) { DARABONBA_PTR_SET_VALUE(downloadUrl_, downloadUrl) };


      // editable Field Functions 
      bool hasEditable() const { return this->editable_ != nullptr;};
      void deleteEditable() { this->editable_ = nullptr;};
      inline bool getEditable() const { DARABONBA_PTR_GET_DEFAULT(editable_, false) };
      inline Data& setEditable(bool editable) { DARABONBA_PTR_SET_VALUE(editable_, editable) };


      // expiresIn Field Functions 
      bool hasExpiresIn() const { return this->expiresIn_ != nullptr;};
      void deleteExpiresIn() { this->expiresIn_ = nullptr;};
      inline int32_t getExpiresIn() const { DARABONBA_PTR_GET_DEFAULT(expiresIn_, 0) };
      inline Data& setExpiresIn(int32_t expiresIn) { DARABONBA_PTR_SET_VALUE(expiresIn_, expiresIn) };


      // fileName Field Functions 
      bool hasFileName() const { return this->fileName_ != nullptr;};
      void deleteFileName() { this->fileName_ = nullptr;};
      inline string getFileName() const { DARABONBA_PTR_GET_DEFAULT(fileName_, "") };
      inline Data& setFileName(string fileName) { DARABONBA_PTR_SET_VALUE(fileName_, fileName) };


      // knowledgeBaseId Field Functions 
      bool hasKnowledgeBaseId() const { return this->knowledgeBaseId_ != nullptr;};
      void deleteKnowledgeBaseId() { this->knowledgeBaseId_ = nullptr;};
      inline string getKnowledgeBaseId() const { DARABONBA_PTR_GET_DEFAULT(knowledgeBaseId_, "") };
      inline Data& setKnowledgeBaseId(string knowledgeBaseId) { DARABONBA_PTR_SET_VALUE(knowledgeBaseId_, knowledgeBaseId) };


      // knowledgeObjectId Field Functions 
      bool hasKnowledgeObjectId() const { return this->knowledgeObjectId_ != nullptr;};
      void deleteKnowledgeObjectId() { this->knowledgeObjectId_ = nullptr;};
      inline string getKnowledgeObjectId() const { DARABONBA_PTR_GET_DEFAULT(knowledgeObjectId_, "") };
      inline Data& setKnowledgeObjectId(string knowledgeObjectId) { DARABONBA_PTR_SET_VALUE(knowledgeObjectId_, knowledgeObjectId) };


      // modifyTime Field Functions 
      bool hasModifyTime() const { return this->modifyTime_ != nullptr;};
      void deleteModifyTime() { this->modifyTime_ = nullptr;};
      inline int64_t getModifyTime() const { DARABONBA_PTR_GET_DEFAULT(modifyTime_, 0L) };
      inline Data& setModifyTime(int64_t modifyTime) { DARABONBA_PTR_SET_VALUE(modifyTime_, modifyTime) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Data& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // sizeBytes Field Functions 
      bool hasSizeBytes() const { return this->sizeBytes_ != nullptr;};
      void deleteSizeBytes() { this->sizeBytes_ = nullptr;};
      inline int64_t getSizeBytes() const { DARABONBA_PTR_GET_DEFAULT(sizeBytes_, 0L) };
      inline Data& setSizeBytes(int64_t sizeBytes) { DARABONBA_PTR_SET_VALUE(sizeBytes_, sizeBytes) };


      // sourceReferences Field Functions 
      bool hasSourceReferences() const { return this->sourceReferences_ != nullptr;};
      void deleteSourceReferences() { this->sourceReferences_ = nullptr;};
      inline const vector<Data::SourceReferences> & getSourceReferences() const { DARABONBA_PTR_GET_CONST(sourceReferences_, vector<Data::SourceReferences>) };
      inline vector<Data::SourceReferences> getSourceReferences() { DARABONBA_PTR_GET(sourceReferences_, vector<Data::SourceReferences>) };
      inline Data& setSourceReferences(const vector<Data::SourceReferences> & sourceReferences) { DARABONBA_PTR_SET_VALUE(sourceReferences_, sourceReferences) };
      inline Data& setSourceReferences(vector<Data::SourceReferences> && sourceReferences) { DARABONBA_PTR_SET_RVALUE(sourceReferences_, sourceReferences) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline Data& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      // versionNo Field Functions 
      bool hasVersionNo() const { return this->versionNo_ != nullptr;};
      void deleteVersionNo() { this->versionNo_ = nullptr;};
      inline int64_t getVersionNo() const { DARABONBA_PTR_GET_DEFAULT(versionNo_, 0L) };
      inline Data& setVersionNo(int64_t versionNo) { DARABONBA_PTR_SET_VALUE(versionNo_, versionNo) };


    protected:
      // The current valid typed knowledge content. Returns the document or semantic model structure based on the Type.
      shared_ptr<Data::Content> content_ {};
      // The time when the object was first created.
      shared_ptr<int64_t> createTime_ {};
      // The description. This field is editable. Pass an empty string to clear the description.
      shared_ptr<string> description_ {};
      // The download items for multi-file specification YAMLs, including file names and temporary download URLs.
      shared_ptr<vector<Data::DownloadFiles>> downloadFiles_ {};
      // The temporary download URL for the original uploaded file of the DOCUMENT or the current specification YAML of the SEMANTIC_MODEL returned by GetKnowledgeObject. This is not a persistent property.
      shared_ptr<string> downloadUrl_ {};
      // Indicates whether the current caller has full content editing permissions. The value is true for OWNER and ADMIN and false for VIEWER. Authorization is checked again for write operations.
      shared_ptr<bool> editable_ {};
      // The validity period of the download URL, in seconds. This field is returned together with DownloadUrl.
      shared_ptr<int32_t> expiresIn_ {};
      // The original file name of the uploaded document. This field is read-only. Renaming the object does not change this value. This field is not returned for external documents and semantic models.
      shared_ptr<string> fileName_ {};
      // The ID of the knowledge base to which the object belongs.
      shared_ptr<string> knowledgeBaseId_ {};
      // The ID of the knowledge object. For semantic models, use the model ID from the semantic layer. For documents, use the stable ID from the local document table. Callers must treat the ID as opaque and must not use a retrieval ID in its place.
      shared_ptr<string> knowledgeObjectId_ {};
      // The time when the object was last modified, in milliseconds. This value is used for conditional updates of the DOCUMENT body. This field does not indicate that optimistic locking updates are supported for semantic models.
      shared_ptr<int64_t> modifyTime_ {};
      // The user-facing name. This field is editable. Renaming the object does not change the KnowledgeObjectId.
      shared_ptr<string> name_ {};
      // The size of the uploaded original file in bytes. This field is read-only and does not represent the length of the edited body.
      shared_ptr<int64_t> sizeBytes_ {};
      // The array of source references. Currently, an empty array is returned.
      shared_ptr<vector<Data::SourceReferences>> sourceReferences_ {};
      // The object type. The value is fixed to DOCUMENT.
      shared_ptr<string> type_ {};
      // The current version of the SEMANTIC_MODEL being read. Pass this value when updating the content to edit the version in place.
      shared_ptr<int64_t> versionNo_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline CreateKnowledgeObjectResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const CreateKnowledgeObjectResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, CreateKnowledgeObjectResponseBody::Data) };
    inline CreateKnowledgeObjectResponseBody::Data getData() { DARABONBA_PTR_GET(data_, CreateKnowledgeObjectResponseBody::Data) };
    inline CreateKnowledgeObjectResponseBody& setData(const CreateKnowledgeObjectResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline CreateKnowledgeObjectResponseBody& setData(CreateKnowledgeObjectResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline CreateKnowledgeObjectResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateKnowledgeObjectResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline CreateKnowledgeObjectResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The business error code. You can use this code to determine the error type when a request fails.
    shared_ptr<string> code_ {};
    // The business data returned when the request is successful.
    shared_ptr<CreateKnowledgeObjectResponseBody::Data> data_ {};
    // The error message returned when the request fails.
    shared_ptr<string> message_ {};
    // The unique identifier of the request. You can use this ID to troubleshoot issues.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request is successful.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
