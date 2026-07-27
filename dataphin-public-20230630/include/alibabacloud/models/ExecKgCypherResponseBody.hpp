// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_EXECKGCYPHERRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_EXECKGCYPHERRESPONSEBODY_HPP_
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
  class ExecKgCypherResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ExecKgCypherResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ExecKgCypherResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ExecKgCypherResponseBody() = default ;
    ExecKgCypherResponseBody(const ExecKgCypherResponseBody &) = default ;
    ExecKgCypherResponseBody(ExecKgCypherResponseBody &&) = default ;
    ExecKgCypherResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ExecKgCypherResponseBody() = default ;
    ExecKgCypherResponseBody& operator=(const ExecKgCypherResponseBody &) = default ;
    ExecKgCypherResponseBody& operator=(ExecKgCypherResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(EdgeList, edgeList_);
        DARABONBA_PTR_TO_JSON(ExecuteCypher, executeCypher_);
        DARABONBA_PTR_TO_JSON(NodeList, nodeList_);
        DARABONBA_PTR_TO_JSON(RowList, rowList_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(EdgeList, edgeList_);
        DARABONBA_PTR_FROM_JSON(ExecuteCypher, executeCypher_);
        DARABONBA_PTR_FROM_JSON(NodeList, nodeList_);
        DARABONBA_PTR_FROM_JSON(RowList, rowList_);
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
      class RowList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const RowList& obj) { 
          DARABONBA_PTR_TO_JSON(Columns, columns_);
        };
        friend void from_json(const Darabonba::Json& j, RowList& obj) { 
          DARABONBA_PTR_FROM_JSON(Columns, columns_);
        };
        RowList() = default ;
        RowList(const RowList &) = default ;
        RowList(RowList &&) = default ;
        RowList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~RowList() = default ;
        RowList& operator=(const RowList &) = default ;
        RowList& operator=(RowList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Columns : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Columns& obj) { 
            DARABONBA_PTR_TO_JSON(Code, code_);
            DARABONBA_PTR_TO_JSON(Value, value_);
          };
          friend void from_json(const Darabonba::Json& j, Columns& obj) { 
            DARABONBA_PTR_FROM_JSON(Code, code_);
            DARABONBA_PTR_FROM_JSON(Value, value_);
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
          virtual bool empty() const override { return this->code_ == nullptr
        && this->value_ == nullptr; };
          // code Field Functions 
          bool hasCode() const { return this->code_ != nullptr;};
          void deleteCode() { this->code_ = nullptr;};
          inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
          inline Columns& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


          // value Field Functions 
          bool hasValue() const { return this->value_ != nullptr;};
          void deleteValue() { this->value_ = nullptr;};
          inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
          inline Columns& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


        protected:
          // The property code.
          shared_ptr<string> code_ {};
          // The property value.
          shared_ptr<string> value_ {};
        };

        virtual bool empty() const override { return this->columns_ == nullptr; };
        // columns Field Functions 
        bool hasColumns() const { return this->columns_ != nullptr;};
        void deleteColumns() { this->columns_ = nullptr;};
        inline const vector<RowList::Columns> & getColumns() const { DARABONBA_PTR_GET_CONST(columns_, vector<RowList::Columns>) };
        inline vector<RowList::Columns> getColumns() { DARABONBA_PTR_GET(columns_, vector<RowList::Columns>) };
        inline RowList& setColumns(const vector<RowList::Columns> & columns) { DARABONBA_PTR_SET_VALUE(columns_, columns) };
        inline RowList& setColumns(vector<RowList::Columns> && columns) { DARABONBA_PTR_SET_RVALUE(columns_, columns) };


      protected:
        // The list of columns in the row.
        shared_ptr<vector<RowList::Columns>> columns_ {};
      };

      class NodeList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const NodeList& obj) { 
          DARABONBA_PTR_TO_JSON(DataId, dataId_);
          DARABONBA_PTR_TO_JSON(EntityType, entityType_);
          DARABONBA_PTR_TO_JSON(Properties, properties_);
        };
        friend void from_json(const Darabonba::Json& j, NodeList& obj) { 
          DARABONBA_PTR_FROM_JSON(DataId, dataId_);
          DARABONBA_PTR_FROM_JSON(EntityType, entityType_);
          DARABONBA_PTR_FROM_JSON(Properties, properties_);
        };
        NodeList() = default ;
        NodeList(const NodeList &) = default ;
        NodeList(NodeList &&) = default ;
        NodeList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~NodeList() = default ;
        NodeList& operator=(const NodeList &) = default ;
        NodeList& operator=(NodeList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Properties : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Properties& obj) { 
            DARABONBA_PTR_TO_JSON(Code, code_);
            DARABONBA_PTR_TO_JSON(Value, value_);
          };
          friend void from_json(const Darabonba::Json& j, Properties& obj) { 
            DARABONBA_PTR_FROM_JSON(Code, code_);
            DARABONBA_PTR_FROM_JSON(Value, value_);
          };
          Properties() = default ;
          Properties(const Properties &) = default ;
          Properties(Properties &&) = default ;
          Properties(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Properties() = default ;
          Properties& operator=(const Properties &) = default ;
          Properties& operator=(Properties &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->code_ == nullptr
        && this->value_ == nullptr; };
          // code Field Functions 
          bool hasCode() const { return this->code_ != nullptr;};
          void deleteCode() { this->code_ = nullptr;};
          inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
          inline Properties& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


          // value Field Functions 
          bool hasValue() const { return this->value_ != nullptr;};
          void deleteValue() { this->value_ = nullptr;};
          inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
          inline Properties& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


        protected:
          // The property code.
          shared_ptr<string> code_ {};
          // The property value.
          shared_ptr<string> value_ {};
        };

        virtual bool empty() const override { return this->dataId_ == nullptr
        && this->entityType_ == nullptr && this->properties_ == nullptr; };
        // dataId Field Functions 
        bool hasDataId() const { return this->dataId_ != nullptr;};
        void deleteDataId() { this->dataId_ = nullptr;};
        inline string getDataId() const { DARABONBA_PTR_GET_DEFAULT(dataId_, "") };
        inline NodeList& setDataId(string dataId) { DARABONBA_PTR_SET_VALUE(dataId_, dataId) };


        // entityType Field Functions 
        bool hasEntityType() const { return this->entityType_ != nullptr;};
        void deleteEntityType() { this->entityType_ = nullptr;};
        inline string getEntityType() const { DARABONBA_PTR_GET_DEFAULT(entityType_, "") };
        inline NodeList& setEntityType(string entityType) { DARABONBA_PTR_SET_VALUE(entityType_, entityType) };


        // properties Field Functions 
        bool hasProperties() const { return this->properties_ != nullptr;};
        void deleteProperties() { this->properties_ = nullptr;};
        inline const vector<NodeList::Properties> & getProperties() const { DARABONBA_PTR_GET_CONST(properties_, vector<NodeList::Properties>) };
        inline vector<NodeList::Properties> getProperties() { DARABONBA_PTR_GET(properties_, vector<NodeList::Properties>) };
        inline NodeList& setProperties(const vector<NodeList::Properties> & properties) { DARABONBA_PTR_SET_VALUE(properties_, properties) };
        inline NodeList& setProperties(vector<NodeList::Properties> && properties) { DARABONBA_PTR_SET_RVALUE(properties_, properties) };


      protected:
        // The data ID of the entity record.
        shared_ptr<string> dataId_ {};
        // The entity type.
        shared_ptr<string> entityType_ {};
        // The list of entity record properties.
        shared_ptr<vector<NodeList::Properties>> properties_ {};
      };

      class EdgeList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const EdgeList& obj) { 
          DARABONBA_PTR_TO_JSON(DataId, dataId_);
          DARABONBA_PTR_TO_JSON(Properties, properties_);
          DARABONBA_PTR_TO_JSON(RelationType, relationType_);
          DARABONBA_PTR_TO_JSON(SourceEntityDataId, sourceEntityDataId_);
          DARABONBA_PTR_TO_JSON(SourceEntityType, sourceEntityType_);
          DARABONBA_PTR_TO_JSON(TargetEntityDataId, targetEntityDataId_);
          DARABONBA_PTR_TO_JSON(TargetEntityType, targetEntityType_);
        };
        friend void from_json(const Darabonba::Json& j, EdgeList& obj) { 
          DARABONBA_PTR_FROM_JSON(DataId, dataId_);
          DARABONBA_PTR_FROM_JSON(Properties, properties_);
          DARABONBA_PTR_FROM_JSON(RelationType, relationType_);
          DARABONBA_PTR_FROM_JSON(SourceEntityDataId, sourceEntityDataId_);
          DARABONBA_PTR_FROM_JSON(SourceEntityType, sourceEntityType_);
          DARABONBA_PTR_FROM_JSON(TargetEntityDataId, targetEntityDataId_);
          DARABONBA_PTR_FROM_JSON(TargetEntityType, targetEntityType_);
        };
        EdgeList() = default ;
        EdgeList(const EdgeList &) = default ;
        EdgeList(EdgeList &&) = default ;
        EdgeList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~EdgeList() = default ;
        EdgeList& operator=(const EdgeList &) = default ;
        EdgeList& operator=(EdgeList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Properties : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Properties& obj) { 
            DARABONBA_PTR_TO_JSON(Code, code_);
            DARABONBA_PTR_TO_JSON(Value, value_);
          };
          friend void from_json(const Darabonba::Json& j, Properties& obj) { 
            DARABONBA_PTR_FROM_JSON(Code, code_);
            DARABONBA_PTR_FROM_JSON(Value, value_);
          };
          Properties() = default ;
          Properties(const Properties &) = default ;
          Properties(Properties &&) = default ;
          Properties(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Properties() = default ;
          Properties& operator=(const Properties &) = default ;
          Properties& operator=(Properties &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->code_ == nullptr
        && this->value_ == nullptr; };
          // code Field Functions 
          bool hasCode() const { return this->code_ != nullptr;};
          void deleteCode() { this->code_ = nullptr;};
          inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
          inline Properties& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


          // value Field Functions 
          bool hasValue() const { return this->value_ != nullptr;};
          void deleteValue() { this->value_ = nullptr;};
          inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
          inline Properties& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


        protected:
          // The property code.
          shared_ptr<string> code_ {};
          // The property value.
          shared_ptr<string> value_ {};
        };

        virtual bool empty() const override { return this->dataId_ == nullptr
        && this->properties_ == nullptr && this->relationType_ == nullptr && this->sourceEntityDataId_ == nullptr && this->sourceEntityType_ == nullptr && this->targetEntityDataId_ == nullptr
        && this->targetEntityType_ == nullptr; };
        // dataId Field Functions 
        bool hasDataId() const { return this->dataId_ != nullptr;};
        void deleteDataId() { this->dataId_ = nullptr;};
        inline string getDataId() const { DARABONBA_PTR_GET_DEFAULT(dataId_, "") };
        inline EdgeList& setDataId(string dataId) { DARABONBA_PTR_SET_VALUE(dataId_, dataId) };


        // properties Field Functions 
        bool hasProperties() const { return this->properties_ != nullptr;};
        void deleteProperties() { this->properties_ = nullptr;};
        inline const vector<EdgeList::Properties> & getProperties() const { DARABONBA_PTR_GET_CONST(properties_, vector<EdgeList::Properties>) };
        inline vector<EdgeList::Properties> getProperties() { DARABONBA_PTR_GET(properties_, vector<EdgeList::Properties>) };
        inline EdgeList& setProperties(const vector<EdgeList::Properties> & properties) { DARABONBA_PTR_SET_VALUE(properties_, properties) };
        inline EdgeList& setProperties(vector<EdgeList::Properties> && properties) { DARABONBA_PTR_SET_RVALUE(properties_, properties) };


        // relationType Field Functions 
        bool hasRelationType() const { return this->relationType_ != nullptr;};
        void deleteRelationType() { this->relationType_ = nullptr;};
        inline string getRelationType() const { DARABONBA_PTR_GET_DEFAULT(relationType_, "") };
        inline EdgeList& setRelationType(string relationType) { DARABONBA_PTR_SET_VALUE(relationType_, relationType) };


        // sourceEntityDataId Field Functions 
        bool hasSourceEntityDataId() const { return this->sourceEntityDataId_ != nullptr;};
        void deleteSourceEntityDataId() { this->sourceEntityDataId_ = nullptr;};
        inline string getSourceEntityDataId() const { DARABONBA_PTR_GET_DEFAULT(sourceEntityDataId_, "") };
        inline EdgeList& setSourceEntityDataId(string sourceEntityDataId) { DARABONBA_PTR_SET_VALUE(sourceEntityDataId_, sourceEntityDataId) };


        // sourceEntityType Field Functions 
        bool hasSourceEntityType() const { return this->sourceEntityType_ != nullptr;};
        void deleteSourceEntityType() { this->sourceEntityType_ = nullptr;};
        inline string getSourceEntityType() const { DARABONBA_PTR_GET_DEFAULT(sourceEntityType_, "") };
        inline EdgeList& setSourceEntityType(string sourceEntityType) { DARABONBA_PTR_SET_VALUE(sourceEntityType_, sourceEntityType) };


        // targetEntityDataId Field Functions 
        bool hasTargetEntityDataId() const { return this->targetEntityDataId_ != nullptr;};
        void deleteTargetEntityDataId() { this->targetEntityDataId_ = nullptr;};
        inline string getTargetEntityDataId() const { DARABONBA_PTR_GET_DEFAULT(targetEntityDataId_, "") };
        inline EdgeList& setTargetEntityDataId(string targetEntityDataId) { DARABONBA_PTR_SET_VALUE(targetEntityDataId_, targetEntityDataId) };


        // targetEntityType Field Functions 
        bool hasTargetEntityType() const { return this->targetEntityType_ != nullptr;};
        void deleteTargetEntityType() { this->targetEntityType_ = nullptr;};
        inline string getTargetEntityType() const { DARABONBA_PTR_GET_DEFAULT(targetEntityType_, "") };
        inline EdgeList& setTargetEntityType(string targetEntityType) { DARABONBA_PTR_SET_VALUE(targetEntityType_, targetEntityType) };


      protected:
        // The data ID of the relationship record.
        shared_ptr<string> dataId_ {};
        // The list of relationship record properties.
        shared_ptr<vector<EdgeList::Properties>> properties_ {};
        // The relationship type.
        shared_ptr<string> relationType_ {};
        // The data ID of the source entity record.
        shared_ptr<string> sourceEntityDataId_ {};
        // The source entity type.
        shared_ptr<string> sourceEntityType_ {};
        // The data ID of the target entity record.
        shared_ptr<string> targetEntityDataId_ {};
        // The target entity type.
        shared_ptr<string> targetEntityType_ {};
      };

      virtual bool empty() const override { return this->edgeList_ == nullptr
        && this->executeCypher_ == nullptr && this->nodeList_ == nullptr && this->rowList_ == nullptr; };
      // edgeList Field Functions 
      bool hasEdgeList() const { return this->edgeList_ != nullptr;};
      void deleteEdgeList() { this->edgeList_ = nullptr;};
      inline const vector<Data::EdgeList> & getEdgeList() const { DARABONBA_PTR_GET_CONST(edgeList_, vector<Data::EdgeList>) };
      inline vector<Data::EdgeList> getEdgeList() { DARABONBA_PTR_GET(edgeList_, vector<Data::EdgeList>) };
      inline Data& setEdgeList(const vector<Data::EdgeList> & edgeList) { DARABONBA_PTR_SET_VALUE(edgeList_, edgeList) };
      inline Data& setEdgeList(vector<Data::EdgeList> && edgeList) { DARABONBA_PTR_SET_RVALUE(edgeList_, edgeList) };


      // executeCypher Field Functions 
      bool hasExecuteCypher() const { return this->executeCypher_ != nullptr;};
      void deleteExecuteCypher() { this->executeCypher_ = nullptr;};
      inline string getExecuteCypher() const { DARABONBA_PTR_GET_DEFAULT(executeCypher_, "") };
      inline Data& setExecuteCypher(string executeCypher) { DARABONBA_PTR_SET_VALUE(executeCypher_, executeCypher) };


      // nodeList Field Functions 
      bool hasNodeList() const { return this->nodeList_ != nullptr;};
      void deleteNodeList() { this->nodeList_ = nullptr;};
      inline const vector<Data::NodeList> & getNodeList() const { DARABONBA_PTR_GET_CONST(nodeList_, vector<Data::NodeList>) };
      inline vector<Data::NodeList> getNodeList() { DARABONBA_PTR_GET(nodeList_, vector<Data::NodeList>) };
      inline Data& setNodeList(const vector<Data::NodeList> & nodeList) { DARABONBA_PTR_SET_VALUE(nodeList_, nodeList) };
      inline Data& setNodeList(vector<Data::NodeList> && nodeList) { DARABONBA_PTR_SET_RVALUE(nodeList_, nodeList) };


      // rowList Field Functions 
      bool hasRowList() const { return this->rowList_ != nullptr;};
      void deleteRowList() { this->rowList_ = nullptr;};
      inline const vector<Data::RowList> & getRowList() const { DARABONBA_PTR_GET_CONST(rowList_, vector<Data::RowList>) };
      inline vector<Data::RowList> getRowList() { DARABONBA_PTR_GET(rowList_, vector<Data::RowList>) };
      inline Data& setRowList(const vector<Data::RowList> & rowList) { DARABONBA_PTR_SET_VALUE(rowList_, rowList) };
      inline Data& setRowList(vector<Data::RowList> && rowList) { DARABONBA_PTR_SET_RVALUE(rowList_, rowList) };


    protected:
      // The list of edges.
      shared_ptr<vector<Data::EdgeList>> edgeList_ {};
      // The transformed execution statement.
      shared_ptr<string> executeCypher_ {};
      // The list of nodes.
      shared_ptr<vector<Data::NodeList>> nodeList_ {};
      // The list of rows.
      shared_ptr<vector<Data::RowList>> rowList_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ExecKgCypherResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ExecKgCypherResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, ExecKgCypherResponseBody::Data) };
    inline ExecKgCypherResponseBody::Data getData() { DARABONBA_PTR_GET(data_, ExecKgCypherResponseBody::Data) };
    inline ExecKgCypherResponseBody& setData(const ExecKgCypherResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ExecKgCypherResponseBody& setData(ExecKgCypherResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline ExecKgCypherResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ExecKgCypherResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ExecKgCypherResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ExecKgCypherResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The backend response code.
    shared_ptr<string> code_ {};
    // The query result.
    shared_ptr<ExecKgCypherResponseBody::Data> data_ {};
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
