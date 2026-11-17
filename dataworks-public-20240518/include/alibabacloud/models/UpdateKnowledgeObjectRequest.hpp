// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEKNOWLEDGEOBJECTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEKNOWLEDGEOBJECTREQUEST_HPP_
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
  class UpdateKnowledgeObjectRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateKnowledgeObjectRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(Content, content_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(ExpectedModifyTime, expectedModifyTime_);
      DARABONBA_PTR_TO_JSON(KnowledgeBaseId, knowledgeBaseId_);
      DARABONBA_PTR_TO_JSON(KnowledgeObjectId, knowledgeObjectId_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(UploadId, uploadId_);
      DARABONBA_PTR_TO_JSON(VersionNo, versionNo_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateKnowledgeObjectRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(Content, content_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(ExpectedModifyTime, expectedModifyTime_);
      DARABONBA_PTR_FROM_JSON(KnowledgeBaseId, knowledgeBaseId_);
      DARABONBA_PTR_FROM_JSON(KnowledgeObjectId, knowledgeObjectId_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(UploadId, uploadId_);
      DARABONBA_PTR_FROM_JSON(VersionNo, versionNo_);
    };
    UpdateKnowledgeObjectRequest() = default ;
    UpdateKnowledgeObjectRequest(const UpdateKnowledgeObjectRequest &) = default ;
    UpdateKnowledgeObjectRequest(UpdateKnowledgeObjectRequest &&) = default ;
    UpdateKnowledgeObjectRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateKnowledgeObjectRequest() = default ;
    UpdateKnowledgeObjectRequest& operator=(const UpdateKnowledgeObjectRequest &) = default ;
    UpdateKnowledgeObjectRequest& operator=(UpdateKnowledgeObjectRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
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
            // The field name in FromDataset.Fields.
            shared_ptr<string> fromField_ {};
            // The field name in ToDataset.Fields.
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
          // The name of the source SemanticDataset.
          shared_ptr<string> fromDataset_ {};
          // The equi-join key pairs for the fields at both ends. At least one item is required. Composite joins are listed item by item.
          shared_ptr<vector<Relationships::JoinKeys>> joinKeys_ {};
          // The name of the relationship within the model.
          shared_ptr<string> name_ {};
          // The name of the target SemanticDataset.
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
              // The non-empty calculation expression in the specified dialect. This is not a complete query statement.
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
            // The expressions for the same metric in different SQL dialects. At least one item is required. Dialects cannot be duplicated.
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
          // The name of the associated SemanticDataset. This must be locatable within the Datasets of this model.
          shared_ptr<string> datasetName_ {};
          // The description of the metric calculation logic. This parameter is optional.
          shared_ptr<string> description_ {};
          // The executable expression. This must include at least one dialect version and is not auto-generated by the model.
          shared_ptr<Metrics::Expression> expression_ {};
          // The name of the metric.
          shared_ptr<string> name_ {};
          // The explicitly declared unit of the metric. This parameter is optional and is not returned if no reliable source is available.
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
            // The data type of the field. This parameter is required for publicly available model fields and is not inferred by the server.
            shared_ptr<string> dataType_ {};
            // The business description of the field. This parameter is optional.
            shared_ptr<string> description_ {};
            // The name of the field.
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
          // The business description of the dataset. This parameter is optional.
          shared_ptr<string> description_ {};
          // The DataWorks Data Map table entity ID. This field is returned when a reliable association exists. If the ID is omitted for an existing dataset of the same name, the existing ID is retained. Submitted values are processed according to the semantic layer rules for saving data.
          shared_ptr<string> entityId_ {};
          // The defined and publicly available fields of the dataset. This is an empty array if no field definitions are provided.
          shared_ptr<vector<Datasets::Fields>> fields_ {};
          // The name of the dataset within the model, used for relationship positioning within the model.
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
        // The logical datasets contained in the model. This is an empty array if no public datasets are available.
        shared_ptr<vector<SemanticModel::Datasets>> datasets_ {};
        // The executable metrics in the model. This is an empty array if no metrics are available. Metrics with only candidate formulas are not included.
        shared_ptr<vector<SemanticModel::Metrics>> metrics_ {};
        // The defined relationships in the model expressed by field pairs. This is an empty array if no relationships are available. Relationships are not inferred from graph paths.
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
      // The document content. This property exists only when Type is set to DOCUMENT.
      shared_ptr<Content::Document> document_ {};
      // The semantic model content. This property exists only when Type is set to SEMANTIC_MODEL.
      shared_ptr<Content::SemanticModel> semanticModel_ {};
    };

    virtual bool empty() const override { return this->clientToken_ == nullptr
        && this->content_ == nullptr && this->description_ == nullptr && this->expectedModifyTime_ == nullptr && this->knowledgeBaseId_ == nullptr && this->knowledgeObjectId_ == nullptr
        && this->name_ == nullptr && this->uploadId_ == nullptr && this->versionNo_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline UpdateKnowledgeObjectRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline const UpdateKnowledgeObjectRequest::Content & getContent() const { DARABONBA_PTR_GET_CONST(content_, UpdateKnowledgeObjectRequest::Content) };
    inline UpdateKnowledgeObjectRequest::Content getContent() { DARABONBA_PTR_GET(content_, UpdateKnowledgeObjectRequest::Content) };
    inline UpdateKnowledgeObjectRequest& setContent(const UpdateKnowledgeObjectRequest::Content & content) { DARABONBA_PTR_SET_VALUE(content_, content) };
    inline UpdateKnowledgeObjectRequest& setContent(UpdateKnowledgeObjectRequest::Content && content) { DARABONBA_PTR_SET_RVALUE(content_, content) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline UpdateKnowledgeObjectRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // expectedModifyTime Field Functions 
    bool hasExpectedModifyTime() const { return this->expectedModifyTime_ != nullptr;};
    void deleteExpectedModifyTime() { this->expectedModifyTime_ = nullptr;};
    inline int64_t getExpectedModifyTime() const { DARABONBA_PTR_GET_DEFAULT(expectedModifyTime_, 0L) };
    inline UpdateKnowledgeObjectRequest& setExpectedModifyTime(int64_t expectedModifyTime) { DARABONBA_PTR_SET_VALUE(expectedModifyTime_, expectedModifyTime) };


    // knowledgeBaseId Field Functions 
    bool hasKnowledgeBaseId() const { return this->knowledgeBaseId_ != nullptr;};
    void deleteKnowledgeBaseId() { this->knowledgeBaseId_ = nullptr;};
    inline string getKnowledgeBaseId() const { DARABONBA_PTR_GET_DEFAULT(knowledgeBaseId_, "") };
    inline UpdateKnowledgeObjectRequest& setKnowledgeBaseId(string knowledgeBaseId) { DARABONBA_PTR_SET_VALUE(knowledgeBaseId_, knowledgeBaseId) };


    // knowledgeObjectId Field Functions 
    bool hasKnowledgeObjectId() const { return this->knowledgeObjectId_ != nullptr;};
    void deleteKnowledgeObjectId() { this->knowledgeObjectId_ = nullptr;};
    inline string getKnowledgeObjectId() const { DARABONBA_PTR_GET_DEFAULT(knowledgeObjectId_, "") };
    inline UpdateKnowledgeObjectRequest& setKnowledgeObjectId(string knowledgeObjectId) { DARABONBA_PTR_SET_VALUE(knowledgeObjectId_, knowledgeObjectId) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline UpdateKnowledgeObjectRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // uploadId Field Functions 
    bool hasUploadId() const { return this->uploadId_ != nullptr;};
    void deleteUploadId() { this->uploadId_ = nullptr;};
    inline string getUploadId() const { DARABONBA_PTR_GET_DEFAULT(uploadId_, "") };
    inline UpdateKnowledgeObjectRequest& setUploadId(string uploadId) { DARABONBA_PTR_SET_VALUE(uploadId_, uploadId) };


    // versionNo Field Functions 
    bool hasVersionNo() const { return this->versionNo_ != nullptr;};
    void deleteVersionNo() { this->versionNo_ = nullptr;};
    inline int64_t getVersionNo() const { DARABONBA_PTR_GET_DEFAULT(versionNo_, 0L) };
    inline UpdateKnowledgeObjectRequest& setVersionNo(int64_t versionNo) { DARABONBA_PTR_SET_VALUE(versionNo_, versionNo) };


  protected:
    // The client token. This parameter is supported only for DOCUMENT. Model updates do not guarantee exactly-once remote save notifications.
    shared_ptr<string> clientToken_ {};
    // The typed content update. Object properties are submitted as needed. Arrays are replaced in their entirety when submitted. Unspecified properties are retained.
    shared_ptr<UpdateKnowledgeObjectRequest::Content> content_ {};
    // The new description. An empty string clears the description. If this parameter is not specified, the original value is retained.
    shared_ptr<string> description_ {};
    // The expected modification time. This parameter is supported only for DOCUMENT. It is required when modifying the body text and optional when modifying metadata.
    shared_ptr<int64_t> expectedModifyTime_ {};
    // The ID of the knowledge base to which the object belongs.
    // 
    // This parameter is required.
    shared_ptr<string> knowledgeBaseId_ {};
    // The stable knowledge object ID returned by the Get or List operation.
    // 
    // This parameter is required.
    shared_ptr<string> knowledgeObjectId_ {};
    // The new name. This parameter cannot be empty. If this parameter is not specified, the original value is retained.
    shared_ptr<string> name_ {};
    // The upload ID. This parameter is supported only for SEMANTIC_MODEL. It replaces the public model content with a complete YAML file and is mutually exclusive with Content.
    shared_ptr<string> uploadId_ {};
    // The version number. This parameter is required when updating Content or UploadId for SEMANTIC_MODEL. Use the VersionNo returned by the Get operation. This is not an optimistic lock.
    shared_ptr<int64_t> versionNo_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
