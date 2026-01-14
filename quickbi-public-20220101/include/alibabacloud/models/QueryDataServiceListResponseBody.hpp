// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYDATASERVICELISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYDATASERVICELISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QuickbiPublic20220101
{
namespace Models
{
  class QueryDataServiceListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryDataServiceListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Result, result_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, QueryDataServiceListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    QueryDataServiceListResponseBody() = default ;
    QueryDataServiceListResponseBody(const QueryDataServiceListResponseBody &) = default ;
    QueryDataServiceListResponseBody(QueryDataServiceListResponseBody &&) = default ;
    QueryDataServiceListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryDataServiceListResponseBody() = default ;
    QueryDataServiceListResponseBody& operator=(const QueryDataServiceListResponseBody &) = default ;
    QueryDataServiceListResponseBody& operator=(QueryDataServiceListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Result : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Result& obj) { 
        DARABONBA_PTR_TO_JSON(Data, data_);
        DARABONBA_PTR_TO_JSON(PageNum, pageNum_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(TotalNum, totalNum_);
        DARABONBA_PTR_TO_JSON(TotalPages, totalPages_);
      };
      friend void from_json(const Darabonba::Json& j, Result& obj) { 
        DARABONBA_PTR_FROM_JSON(Data, data_);
        DARABONBA_PTR_FROM_JSON(PageNum, pageNum_);
        DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(TotalNum, totalNum_);
        DARABONBA_PTR_FROM_JSON(TotalPages, totalPages_);
      };
      Result() = default ;
      Result(const Result &) = default ;
      Result(Result &&) = default ;
      Result(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Result() = default ;
      Result& operator=(const Result &) = default ;
      Result& operator=(Result &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Data : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Data& obj) { 
          DARABONBA_PTR_TO_JSON(Content, content_);
          DARABONBA_PTR_TO_JSON(CreatorId, creatorId_);
          DARABONBA_PTR_TO_JSON(CreatorName, creatorName_);
          DARABONBA_PTR_TO_JSON(CubeId, cubeId_);
          DARABONBA_PTR_TO_JSON(CubeName, cubeName_);
          DARABONBA_PTR_TO_JSON(Desc, desc_);
          DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
          DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
          DARABONBA_PTR_TO_JSON(ModifierId, modifierId_);
          DARABONBA_PTR_TO_JSON(ModifierName, modifierName_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
          DARABONBA_PTR_TO_JSON(OwnerName, ownerName_);
          DARABONBA_PTR_TO_JSON(Sid, sid_);
          DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
          DARABONBA_PTR_TO_JSON(WorkspaceName, workspaceName_);
        };
        friend void from_json(const Darabonba::Json& j, Data& obj) { 
          DARABONBA_PTR_FROM_JSON(Content, content_);
          DARABONBA_PTR_FROM_JSON(CreatorId, creatorId_);
          DARABONBA_PTR_FROM_JSON(CreatorName, creatorName_);
          DARABONBA_PTR_FROM_JSON(CubeId, cubeId_);
          DARABONBA_PTR_FROM_JSON(CubeName, cubeName_);
          DARABONBA_PTR_FROM_JSON(Desc, desc_);
          DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
          DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
          DARABONBA_PTR_FROM_JSON(ModifierId, modifierId_);
          DARABONBA_PTR_FROM_JSON(ModifierName, modifierName_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
          DARABONBA_PTR_FROM_JSON(OwnerName, ownerName_);
          DARABONBA_PTR_FROM_JSON(Sid, sid_);
          DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
          DARABONBA_PTR_FROM_JSON(WorkspaceName, workspaceName_);
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
        class Content : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Content& obj) { 
            DARABONBA_PTR_TO_JSON(CubeId, cubeId_);
            DARABONBA_PTR_TO_JSON(CubeName, cubeName_);
            DARABONBA_PTR_TO_JSON(Detail, detail_);
            DARABONBA_PTR_TO_JSON(Filter, filter_);
            DARABONBA_PTR_TO_JSON(ReturnFields, returnFields_);
          };
          friend void from_json(const Darabonba::Json& j, Content& obj) { 
            DARABONBA_PTR_FROM_JSON(CubeId, cubeId_);
            DARABONBA_PTR_FROM_JSON(CubeName, cubeName_);
            DARABONBA_PTR_FROM_JSON(Detail, detail_);
            DARABONBA_PTR_FROM_JSON(Filter, filter_);
            DARABONBA_PTR_FROM_JSON(ReturnFields, returnFields_);
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
          class ReturnFields : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const ReturnFields& obj) { 
              DARABONBA_PTR_TO_JSON(Aggregator, aggregator_);
              DARABONBA_PTR_TO_JSON(Alias, alias_);
              DARABONBA_PTR_TO_JSON(Desc, desc_);
              DARABONBA_PTR_TO_JSON(Field, field_);
              DARABONBA_PTR_TO_JSON(Orderby, orderby_);
            };
            friend void from_json(const Darabonba::Json& j, ReturnFields& obj) { 
              DARABONBA_PTR_FROM_JSON(Aggregator, aggregator_);
              DARABONBA_PTR_FROM_JSON(Alias, alias_);
              DARABONBA_PTR_FROM_JSON(Desc, desc_);
              DARABONBA_PTR_FROM_JSON(Field, field_);
              DARABONBA_PTR_FROM_JSON(Orderby, orderby_);
            };
            ReturnFields() = default ;
            ReturnFields(const ReturnFields &) = default ;
            ReturnFields(ReturnFields &&) = default ;
            ReturnFields(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~ReturnFields() = default ;
            ReturnFields& operator=(const ReturnFields &) = default ;
            ReturnFields& operator=(ReturnFields &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            class Field : public Darabonba::Model {
            public:
              friend void to_json(Darabonba::Json& j, const Field& obj) { 
                DARABONBA_PTR_TO_JSON(Caption, caption_);
                DARABONBA_PTR_TO_JSON(Column, column_);
                DARABONBA_PTR_TO_JSON(DataType, dataType_);
                DARABONBA_PTR_TO_JSON(Fid, fid_);
                DARABONBA_PTR_TO_JSON(Granularity, granularity_);
                DARABONBA_PTR_TO_JSON(Name, name_);
                DARABONBA_PTR_TO_JSON(Type, type_);
              };
              friend void from_json(const Darabonba::Json& j, Field& obj) { 
                DARABONBA_PTR_FROM_JSON(Caption, caption_);
                DARABONBA_PTR_FROM_JSON(Column, column_);
                DARABONBA_PTR_FROM_JSON(DataType, dataType_);
                DARABONBA_PTR_FROM_JSON(Fid, fid_);
                DARABONBA_PTR_FROM_JSON(Granularity, granularity_);
                DARABONBA_PTR_FROM_JSON(Name, name_);
                DARABONBA_PTR_FROM_JSON(Type, type_);
              };
              Field() = default ;
              Field(const Field &) = default ;
              Field(Field &&) = default ;
              Field(const Darabonba::Json & obj) { from_json(obj, *this); };
              virtual ~Field() = default ;
              Field& operator=(const Field &) = default ;
              Field& operator=(Field &&) = default ;
              virtual void validate() const override {
              };
              virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
              virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
              virtual bool empty() const override { return this->caption_ == nullptr
        && this->column_ == nullptr && this->dataType_ == nullptr && this->fid_ == nullptr && this->granularity_ == nullptr && this->name_ == nullptr
        && this->type_ == nullptr; };
              // caption Field Functions 
              bool hasCaption() const { return this->caption_ != nullptr;};
              void deleteCaption() { this->caption_ = nullptr;};
              inline string getCaption() const { DARABONBA_PTR_GET_DEFAULT(caption_, "") };
              inline Field& setCaption(string caption) { DARABONBA_PTR_SET_VALUE(caption_, caption) };


              // column Field Functions 
              bool hasColumn() const { return this->column_ != nullptr;};
              void deleteColumn() { this->column_ = nullptr;};
              inline string getColumn() const { DARABONBA_PTR_GET_DEFAULT(column_, "") };
              inline Field& setColumn(string column) { DARABONBA_PTR_SET_VALUE(column_, column) };


              // dataType Field Functions 
              bool hasDataType() const { return this->dataType_ != nullptr;};
              void deleteDataType() { this->dataType_ = nullptr;};
              inline string getDataType() const { DARABONBA_PTR_GET_DEFAULT(dataType_, "") };
              inline Field& setDataType(string dataType) { DARABONBA_PTR_SET_VALUE(dataType_, dataType) };


              // fid Field Functions 
              bool hasFid() const { return this->fid_ != nullptr;};
              void deleteFid() { this->fid_ = nullptr;};
              inline string getFid() const { DARABONBA_PTR_GET_DEFAULT(fid_, "") };
              inline Field& setFid(string fid) { DARABONBA_PTR_SET_VALUE(fid_, fid) };


              // granularity Field Functions 
              bool hasGranularity() const { return this->granularity_ != nullptr;};
              void deleteGranularity() { this->granularity_ = nullptr;};
              inline string getGranularity() const { DARABONBA_PTR_GET_DEFAULT(granularity_, "") };
              inline Field& setGranularity(string granularity) { DARABONBA_PTR_SET_VALUE(granularity_, granularity) };


              // name Field Functions 
              bool hasName() const { return this->name_ != nullptr;};
              void deleteName() { this->name_ = nullptr;};
              inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
              inline Field& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


              // type Field Functions 
              bool hasType() const { return this->type_ != nullptr;};
              void deleteType() { this->type_ = nullptr;};
              inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
              inline Field& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


            protected:
              // Display name in the cube model (can be in Chinese or English).
              shared_ptr<string> caption_ {};
              // The corresponding physical field name.
              shared_ptr<string> column_ {};
              // Data type.
              // 
              // - number: numeric
              // - string: string
              // - date: date
              // - datetime: datetime
              // - time: time
              // - geographic: geographic
              // - boolean: boolean
              // - url: URL
              shared_ptr<string> dataType_ {};
              // Unique identifier for the original field.
              shared_ptr<string> fid_ {};
              // This attribute is included for date and geographic dimensions, indicating the supported granularity.
              shared_ptr<string> granularity_ {};
              // Unique name of the cube field, mainly used for unique positioning in the returned result.
              shared_ptr<string> name_ {};
              // Type.
              // 
              // - Dimension: Dimension
              // - Measure: Measure
              shared_ptr<string> type_ {};
            };

            virtual bool empty() const override { return this->aggregator_ == nullptr
        && this->alias_ == nullptr && this->desc_ == nullptr && this->field_ == nullptr && this->orderby_ == nullptr; };
            // aggregator Field Functions 
            bool hasAggregator() const { return this->aggregator_ != nullptr;};
            void deleteAggregator() { this->aggregator_ = nullptr;};
            inline string getAggregator() const { DARABONBA_PTR_GET_DEFAULT(aggregator_, "") };
            inline ReturnFields& setAggregator(string aggregator) { DARABONBA_PTR_SET_VALUE(aggregator_, aggregator) };


            // alias Field Functions 
            bool hasAlias() const { return this->alias_ != nullptr;};
            void deleteAlias() { this->alias_ = nullptr;};
            inline string getAlias() const { DARABONBA_PTR_GET_DEFAULT(alias_, "") };
            inline ReturnFields& setAlias(string alias) { DARABONBA_PTR_SET_VALUE(alias_, alias) };


            // desc Field Functions 
            bool hasDesc() const { return this->desc_ != nullptr;};
            void deleteDesc() { this->desc_ = nullptr;};
            inline string getDesc() const { DARABONBA_PTR_GET_DEFAULT(desc_, "") };
            inline ReturnFields& setDesc(string desc) { DARABONBA_PTR_SET_VALUE(desc_, desc) };


            // field Field Functions 
            bool hasField() const { return this->field_ != nullptr;};
            void deleteField() { this->field_ = nullptr;};
            inline const ReturnFields::Field & getField() const { DARABONBA_PTR_GET_CONST(field_, ReturnFields::Field) };
            inline ReturnFields::Field getField() { DARABONBA_PTR_GET(field_, ReturnFields::Field) };
            inline ReturnFields& setField(const ReturnFields::Field & field) { DARABONBA_PTR_SET_VALUE(field_, field) };
            inline ReturnFields& setField(ReturnFields::Field && field) { DARABONBA_PTR_SET_RVALUE(field_, field) };


            // orderby Field Functions 
            bool hasOrderby() const { return this->orderby_ != nullptr;};
            void deleteOrderby() { this->orderby_ = nullptr;};
            inline string getOrderby() const { DARABONBA_PTR_GET_DEFAULT(orderby_, "") };
            inline ReturnFields& setOrderby(string orderby) { DARABONBA_PTR_SET_VALUE(orderby_, orderby) };


          protected:
            // Aggregation operator. For example, SUM, AVG, and MAX.
            shared_ptr<string> aggregator_ {};
            // Field parameter name.
            shared_ptr<string> alias_ {};
            // Remark for the returned field.
            shared_ptr<string> desc_ {};
            // Corresponding cube field information.
            shared_ptr<ReturnFields::Field> field_ {};
            // Sorting.
            // 
            // - asc: Ascending
            // - desc: Descending
            // - no: No sorting
            shared_ptr<string> orderby_ {};
          };

          class Filter : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const Filter& obj) { 
              DARABONBA_PTR_TO_JSON(Filters, filters_);
              DARABONBA_PTR_TO_JSON(LogicalOperator, logicalOperator_);
              DARABONBA_PTR_TO_JSON(Type, type_);
            };
            friend void from_json(const Darabonba::Json& j, Filter& obj) { 
              DARABONBA_PTR_FROM_JSON(Filters, filters_);
              DARABONBA_PTR_FROM_JSON(LogicalOperator, logicalOperator_);
              DARABONBA_PTR_FROM_JSON(Type, type_);
            };
            Filter() = default ;
            Filter(const Filter &) = default ;
            Filter(Filter &&) = default ;
            Filter(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~Filter() = default ;
            Filter& operator=(const Filter &) = default ;
            Filter& operator=(Filter &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->filters_ == nullptr
        && this->logicalOperator_ == nullptr && this->type_ == nullptr; };
            // filters Field Functions 
            bool hasFilters() const { return this->filters_ != nullptr;};
            void deleteFilters() { this->filters_ = nullptr;};
            inline const vector<Darabonba::Json> & getFilters() const { DARABONBA_PTR_GET_CONST(filters_, vector<Darabonba::Json>) };
            inline vector<Darabonba::Json> getFilters() { DARABONBA_PTR_GET(filters_, vector<Darabonba::Json>) };
            inline Filter& setFilters(const vector<Darabonba::Json> & filters) { DARABONBA_PTR_SET_VALUE(filters_, filters) };
            inline Filter& setFilters(vector<Darabonba::Json> && filters) { DARABONBA_PTR_SET_RVALUE(filters_, filters) };


            // logicalOperator Field Functions 
            bool hasLogicalOperator() const { return this->logicalOperator_ != nullptr;};
            void deleteLogicalOperator() { this->logicalOperator_ = nullptr;};
            inline string getLogicalOperator() const { DARABONBA_PTR_GET_DEFAULT(logicalOperator_, "") };
            inline Filter& setLogicalOperator(string logicalOperator) { DARABONBA_PTR_SET_VALUE(logicalOperator_, logicalOperator) };


            // type Field Functions 
            bool hasType() const { return this->type_ != nullptr;};
            void deleteType() { this->type_ = nullptr;};
            inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
            inline Filter& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


          protected:
            // Combined conditions.
            shared_ptr<vector<Darabonba::Json>> filters_ {};
            // Logical relationship between multiple SQL text keywords.
            // 
            // - **or**: or
            // - **and**: and
            shared_ptr<string> logicalOperator_ {};
            // Type.
            // 
            // - basic: basic
            // - combined: complex
            shared_ptr<string> type_ {};
          };

          virtual bool empty() const override { return this->cubeId_ == nullptr
        && this->cubeName_ == nullptr && this->detail_ == nullptr && this->filter_ == nullptr && this->returnFields_ == nullptr; };
          // cubeId Field Functions 
          bool hasCubeId() const { return this->cubeId_ != nullptr;};
          void deleteCubeId() { this->cubeId_ = nullptr;};
          inline string getCubeId() const { DARABONBA_PTR_GET_DEFAULT(cubeId_, "") };
          inline Content& setCubeId(string cubeId) { DARABONBA_PTR_SET_VALUE(cubeId_, cubeId) };


          // cubeName Field Functions 
          bool hasCubeName() const { return this->cubeName_ != nullptr;};
          void deleteCubeName() { this->cubeName_ = nullptr;};
          inline string getCubeName() const { DARABONBA_PTR_GET_DEFAULT(cubeName_, "") };
          inline Content& setCubeName(string cubeName) { DARABONBA_PTR_SET_VALUE(cubeName_, cubeName) };


          // detail Field Functions 
          bool hasDetail() const { return this->detail_ != nullptr;};
          void deleteDetail() { this->detail_ = nullptr;};
          inline bool getDetail() const { DARABONBA_PTR_GET_DEFAULT(detail_, false) };
          inline Content& setDetail(bool detail) { DARABONBA_PTR_SET_VALUE(detail_, detail) };


          // filter Field Functions 
          bool hasFilter() const { return this->filter_ != nullptr;};
          void deleteFilter() { this->filter_ = nullptr;};
          inline const Content::Filter & getFilter() const { DARABONBA_PTR_GET_CONST(filter_, Content::Filter) };
          inline Content::Filter getFilter() { DARABONBA_PTR_GET(filter_, Content::Filter) };
          inline Content& setFilter(const Content::Filter & filter) { DARABONBA_PTR_SET_VALUE(filter_, filter) };
          inline Content& setFilter(Content::Filter && filter) { DARABONBA_PTR_SET_RVALUE(filter_, filter) };


          // returnFields Field Functions 
          bool hasReturnFields() const { return this->returnFields_ != nullptr;};
          void deleteReturnFields() { this->returnFields_ = nullptr;};
          inline const vector<Content::ReturnFields> & getReturnFields() const { DARABONBA_PTR_GET_CONST(returnFields_, vector<Content::ReturnFields>) };
          inline vector<Content::ReturnFields> getReturnFields() { DARABONBA_PTR_GET(returnFields_, vector<Content::ReturnFields>) };
          inline Content& setReturnFields(const vector<Content::ReturnFields> & returnFields) { DARABONBA_PTR_SET_VALUE(returnFields_, returnFields) };
          inline Content& setReturnFields(vector<Content::ReturnFields> && returnFields) { DARABONBA_PTR_SET_RVALUE(returnFields_, returnFields) };


        protected:
          // Cube identifier ID.
          shared_ptr<string> cubeId_ {};
          // Dataset name.
          shared_ptr<string> cubeName_ {};
          // Detail or Summary
          shared_ptr<bool> detail_ {};
          // Request parameter information.
          shared_ptr<Content::Filter> filter_ {};
          // Return information.
          shared_ptr<vector<Content::ReturnFields>> returnFields_ {};
        };

        virtual bool empty() const override { return this->content_ == nullptr
        && this->creatorId_ == nullptr && this->creatorName_ == nullptr && this->cubeId_ == nullptr && this->cubeName_ == nullptr && this->desc_ == nullptr
        && this->gmtCreate_ == nullptr && this->gmtModified_ == nullptr && this->modifierId_ == nullptr && this->modifierName_ == nullptr && this->name_ == nullptr
        && this->ownerId_ == nullptr && this->ownerName_ == nullptr && this->sid_ == nullptr && this->workspaceId_ == nullptr && this->workspaceName_ == nullptr; };
        // content Field Functions 
        bool hasContent() const { return this->content_ != nullptr;};
        void deleteContent() { this->content_ = nullptr;};
        inline const Data::Content & getContent() const { DARABONBA_PTR_GET_CONST(content_, Data::Content) };
        inline Data::Content getContent() { DARABONBA_PTR_GET(content_, Data::Content) };
        inline Data& setContent(const Data::Content & content) { DARABONBA_PTR_SET_VALUE(content_, content) };
        inline Data& setContent(Data::Content && content) { DARABONBA_PTR_SET_RVALUE(content_, content) };


        // creatorId Field Functions 
        bool hasCreatorId() const { return this->creatorId_ != nullptr;};
        void deleteCreatorId() { this->creatorId_ = nullptr;};
        inline string getCreatorId() const { DARABONBA_PTR_GET_DEFAULT(creatorId_, "") };
        inline Data& setCreatorId(string creatorId) { DARABONBA_PTR_SET_VALUE(creatorId_, creatorId) };


        // creatorName Field Functions 
        bool hasCreatorName() const { return this->creatorName_ != nullptr;};
        void deleteCreatorName() { this->creatorName_ = nullptr;};
        inline string getCreatorName() const { DARABONBA_PTR_GET_DEFAULT(creatorName_, "") };
        inline Data& setCreatorName(string creatorName) { DARABONBA_PTR_SET_VALUE(creatorName_, creatorName) };


        // cubeId Field Functions 
        bool hasCubeId() const { return this->cubeId_ != nullptr;};
        void deleteCubeId() { this->cubeId_ = nullptr;};
        inline string getCubeId() const { DARABONBA_PTR_GET_DEFAULT(cubeId_, "") };
        inline Data& setCubeId(string cubeId) { DARABONBA_PTR_SET_VALUE(cubeId_, cubeId) };


        // cubeName Field Functions 
        bool hasCubeName() const { return this->cubeName_ != nullptr;};
        void deleteCubeName() { this->cubeName_ = nullptr;};
        inline string getCubeName() const { DARABONBA_PTR_GET_DEFAULT(cubeName_, "") };
        inline Data& setCubeName(string cubeName) { DARABONBA_PTR_SET_VALUE(cubeName_, cubeName) };


        // desc Field Functions 
        bool hasDesc() const { return this->desc_ != nullptr;};
        void deleteDesc() { this->desc_ = nullptr;};
        inline string getDesc() const { DARABONBA_PTR_GET_DEFAULT(desc_, "") };
        inline Data& setDesc(string desc) { DARABONBA_PTR_SET_VALUE(desc_, desc) };


        // gmtCreate Field Functions 
        bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
        void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
        inline string getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
        inline Data& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


        // gmtModified Field Functions 
        bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
        void deleteGmtModified() { this->gmtModified_ = nullptr;};
        inline string getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
        inline Data& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


        // modifierId Field Functions 
        bool hasModifierId() const { return this->modifierId_ != nullptr;};
        void deleteModifierId() { this->modifierId_ = nullptr;};
        inline string getModifierId() const { DARABONBA_PTR_GET_DEFAULT(modifierId_, "") };
        inline Data& setModifierId(string modifierId) { DARABONBA_PTR_SET_VALUE(modifierId_, modifierId) };


        // modifierName Field Functions 
        bool hasModifierName() const { return this->modifierName_ != nullptr;};
        void deleteModifierName() { this->modifierName_ = nullptr;};
        inline string getModifierName() const { DARABONBA_PTR_GET_DEFAULT(modifierName_, "") };
        inline Data& setModifierName(string modifierName) { DARABONBA_PTR_SET_VALUE(modifierName_, modifierName) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline Data& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // ownerId Field Functions 
        bool hasOwnerId() const { return this->ownerId_ != nullptr;};
        void deleteOwnerId() { this->ownerId_ = nullptr;};
        inline string getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, "") };
        inline Data& setOwnerId(string ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


        // ownerName Field Functions 
        bool hasOwnerName() const { return this->ownerName_ != nullptr;};
        void deleteOwnerName() { this->ownerName_ = nullptr;};
        inline string getOwnerName() const { DARABONBA_PTR_GET_DEFAULT(ownerName_, "") };
        inline Data& setOwnerName(string ownerName) { DARABONBA_PTR_SET_VALUE(ownerName_, ownerName) };


        // sid Field Functions 
        bool hasSid() const { return this->sid_ != nullptr;};
        void deleteSid() { this->sid_ = nullptr;};
        inline string getSid() const { DARABONBA_PTR_GET_DEFAULT(sid_, "") };
        inline Data& setSid(string sid) { DARABONBA_PTR_SET_VALUE(sid_, sid) };


        // workspaceId Field Functions 
        bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
        void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
        inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
        inline Data& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


        // workspaceName Field Functions 
        bool hasWorkspaceName() const { return this->workspaceName_ != nullptr;};
        void deleteWorkspaceName() { this->workspaceName_ = nullptr;};
        inline string getWorkspaceName() const { DARABONBA_PTR_GET_DEFAULT(workspaceName_, "") };
        inline Data& setWorkspaceName(string workspaceName) { DARABONBA_PTR_SET_VALUE(workspaceName_, workspaceName) };


      protected:
        // The model of the data service in JSON format.
        shared_ptr<Data::Content> content_ {};
        // Creator ID.
        shared_ptr<string> creatorId_ {};
        // Creator\\"s name.
        shared_ptr<string> creatorName_ {};
        // Cube identifier ID.
        shared_ptr<string> cubeId_ {};
        // Dataset name.
        shared_ptr<string> cubeName_ {};
        // Description
        shared_ptr<string> desc_ {};
        // Creation time.
        shared_ptr<string> gmtCreate_ {};
        // Modification time.
        shared_ptr<string> gmtModified_ {};
        // Modifier\\"s userId.
        shared_ptr<string> modifierId_ {};
        // Modifier\\"s name
        shared_ptr<string> modifierName_ {};
        // Data service name.
        shared_ptr<string> name_ {};
        // Owner ID
        shared_ptr<string> ownerId_ {};
        // Owner\\"s name
        shared_ptr<string> ownerName_ {};
        // Unique ID of the data service.
        shared_ptr<string> sid_ {};
        // Workspace ID.
        shared_ptr<string> workspaceId_ {};
        // Workspace name.
        shared_ptr<string> workspaceName_ {};
      };

      virtual bool empty() const override { return this->data_ == nullptr
        && this->pageNum_ == nullptr && this->pageSize_ == nullptr && this->totalNum_ == nullptr && this->totalPages_ == nullptr; };
      // data Field Functions 
      bool hasData() const { return this->data_ != nullptr;};
      void deleteData() { this->data_ = nullptr;};
      inline const vector<Result::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<Result::Data>) };
      inline vector<Result::Data> getData() { DARABONBA_PTR_GET(data_, vector<Result::Data>) };
      inline Result& setData(const vector<Result::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
      inline Result& setData(vector<Result::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


      // pageNum Field Functions 
      bool hasPageNum() const { return this->pageNum_ != nullptr;};
      void deletePageNum() { this->pageNum_ = nullptr;};
      inline int32_t getPageNum() const { DARABONBA_PTR_GET_DEFAULT(pageNum_, 0) };
      inline Result& setPageNum(int32_t pageNum) { DARABONBA_PTR_SET_VALUE(pageNum_, pageNum) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
      inline Result& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // totalNum Field Functions 
      bool hasTotalNum() const { return this->totalNum_ != nullptr;};
      void deleteTotalNum() { this->totalNum_ = nullptr;};
      inline int32_t getTotalNum() const { DARABONBA_PTR_GET_DEFAULT(totalNum_, 0) };
      inline Result& setTotalNum(int32_t totalNum) { DARABONBA_PTR_SET_VALUE(totalNum_, totalNum) };


      // totalPages Field Functions 
      bool hasTotalPages() const { return this->totalPages_ != nullptr;};
      void deleteTotalPages() { this->totalPages_ = nullptr;};
      inline int32_t getTotalPages() const { DARABONBA_PTR_GET_DEFAULT(totalPages_, 0) };
      inline Result& setTotalPages(int32_t totalPages) { DARABONBA_PTR_SET_VALUE(totalPages_, totalPages) };


    protected:
      // Data service information.
      shared_ptr<vector<Result::Data>> data_ {};
      // Page number.
      shared_ptr<int32_t> pageNum_ {};
      // Number of records per page.
      shared_ptr<int32_t> pageSize_ {};
      // Total number of rows.
      shared_ptr<int32_t> totalNum_ {};
      // Total number of pages.
      shared_ptr<int32_t> totalPages_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->result_ == nullptr && this->success_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryDataServiceListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const QueryDataServiceListResponseBody::Result & getResult() const { DARABONBA_PTR_GET_CONST(result_, QueryDataServiceListResponseBody::Result) };
    inline QueryDataServiceListResponseBody::Result getResult() { DARABONBA_PTR_GET(result_, QueryDataServiceListResponseBody::Result) };
    inline QueryDataServiceListResponseBody& setResult(const QueryDataServiceListResponseBody::Result & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline QueryDataServiceListResponseBody& setResult(QueryDataServiceListResponseBody::Result && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline QueryDataServiceListResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // Request ID.
    shared_ptr<string> requestId_ {};
    // Return result.
    shared_ptr<QueryDataServiceListResponseBody::Result> result_ {};
    // Indicates whether the request was successful. Value range:
    // - true: The request was successful 
    // - false: The request failed
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuickbiPublic20220101
#endif
