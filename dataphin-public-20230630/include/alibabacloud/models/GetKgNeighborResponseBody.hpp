// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETKGNEIGHBORRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETKGNEIGHBORRESPONSEBODY_HPP_
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
  class GetKgNeighborResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetKgNeighborResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetKgNeighborResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetKgNeighborResponseBody() = default ;
    GetKgNeighborResponseBody(const GetKgNeighborResponseBody &) = default ;
    GetKgNeighborResponseBody(GetKgNeighborResponseBody &&) = default ;
    GetKgNeighborResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetKgNeighborResponseBody() = default ;
    GetKgNeighborResponseBody& operator=(const GetKgNeighborResponseBody &) = default ;
    GetKgNeighborResponseBody& operator=(GetKgNeighborResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(EdgeList, edgeList_);
        DARABONBA_PTR_TO_JSON(NodeList, nodeList_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(EdgeList, edgeList_);
        DARABONBA_PTR_FROM_JSON(NodeList, nodeList_);
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
      class NodeList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const NodeList& obj) { 
          DARABONBA_PTR_TO_JSON(EntityId, entityId_);
          DARABONBA_PTR_TO_JSON(EntityType, entityType_);
          DARABONBA_PTR_TO_JSON(PropertyList, propertyList_);
        };
        friend void from_json(const Darabonba::Json& j, NodeList& obj) { 
          DARABONBA_PTR_FROM_JSON(EntityId, entityId_);
          DARABONBA_PTR_FROM_JSON(EntityType, entityType_);
          DARABONBA_PTR_FROM_JSON(PropertyList, propertyList_);
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
        class PropertyList : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const PropertyList& obj) { 
            DARABONBA_PTR_TO_JSON(Code, code_);
            DARABONBA_PTR_TO_JSON(DataType, dataType_);
            DARABONBA_PTR_TO_JSON(Value, value_);
          };
          friend void from_json(const Darabonba::Json& j, PropertyList& obj) { 
            DARABONBA_PTR_FROM_JSON(Code, code_);
            DARABONBA_PTR_FROM_JSON(DataType, dataType_);
            DARABONBA_PTR_FROM_JSON(Value, value_);
          };
          PropertyList() = default ;
          PropertyList(const PropertyList &) = default ;
          PropertyList(PropertyList &&) = default ;
          PropertyList(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~PropertyList() = default ;
          PropertyList& operator=(const PropertyList &) = default ;
          PropertyList& operator=(PropertyList &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->code_ == nullptr
        && this->dataType_ == nullptr && this->value_ == nullptr; };
          // code Field Functions 
          bool hasCode() const { return this->code_ != nullptr;};
          void deleteCode() { this->code_ = nullptr;};
          inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
          inline PropertyList& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


          // dataType Field Functions 
          bool hasDataType() const { return this->dataType_ != nullptr;};
          void deleteDataType() { this->dataType_ = nullptr;};
          inline string getDataType() const { DARABONBA_PTR_GET_DEFAULT(dataType_, "") };
          inline PropertyList& setDataType(string dataType) { DARABONBA_PTR_SET_VALUE(dataType_, dataType) };


          // value Field Functions 
          bool hasValue() const { return this->value_ != nullptr;};
          void deleteValue() { this->value_ = nullptr;};
          inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
          inline PropertyList& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


        protected:
          // The property code.
          shared_ptr<string> code_ {};
          // The property data type. Valid values: STRING (string), INTEGER (integer), FLOAT (float), BOOLEAN (Boolean), DATE (date), LIST (list), and others.
          shared_ptr<string> dataType_ {};
          // The property value.
          shared_ptr<string> value_ {};
        };

        virtual bool empty() const override { return this->entityId_ == nullptr
        && this->entityType_ == nullptr && this->propertyList_ == nullptr; };
        // entityId Field Functions 
        bool hasEntityId() const { return this->entityId_ != nullptr;};
        void deleteEntityId() { this->entityId_ = nullptr;};
        inline string getEntityId() const { DARABONBA_PTR_GET_DEFAULT(entityId_, "") };
        inline NodeList& setEntityId(string entityId) { DARABONBA_PTR_SET_VALUE(entityId_, entityId) };


        // entityType Field Functions 
        bool hasEntityType() const { return this->entityType_ != nullptr;};
        void deleteEntityType() { this->entityType_ = nullptr;};
        inline string getEntityType() const { DARABONBA_PTR_GET_DEFAULT(entityType_, "") };
        inline NodeList& setEntityType(string entityType) { DARABONBA_PTR_SET_VALUE(entityType_, entityType) };


        // propertyList Field Functions 
        bool hasPropertyList() const { return this->propertyList_ != nullptr;};
        void deletePropertyList() { this->propertyList_ = nullptr;};
        inline const vector<NodeList::PropertyList> & getPropertyList() const { DARABONBA_PTR_GET_CONST(propertyList_, vector<NodeList::PropertyList>) };
        inline vector<NodeList::PropertyList> getPropertyList() { DARABONBA_PTR_GET(propertyList_, vector<NodeList::PropertyList>) };
        inline NodeList& setPropertyList(const vector<NodeList::PropertyList> & propertyList) { DARABONBA_PTR_SET_VALUE(propertyList_, propertyList) };
        inline NodeList& setPropertyList(vector<NodeList::PropertyList> && propertyList) { DARABONBA_PTR_SET_RVALUE(propertyList_, propertyList) };


      protected:
        // The entity record ID.
        shared_ptr<string> entityId_ {};
        // The entity type code.
        shared_ptr<string> entityType_ {};
        // The entity record property list.
        shared_ptr<vector<NodeList::PropertyList>> propertyList_ {};
      };

      class EdgeList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const EdgeList& obj) { 
          DARABONBA_PTR_TO_JSON(PropertyList, propertyList_);
          DARABONBA_PTR_TO_JSON(RelationId, relationId_);
          DARABONBA_PTR_TO_JSON(RelationType, relationType_);
          DARABONBA_PTR_TO_JSON(SourceEntityId, sourceEntityId_);
          DARABONBA_PTR_TO_JSON(TargetEntityId, targetEntityId_);
        };
        friend void from_json(const Darabonba::Json& j, EdgeList& obj) { 
          DARABONBA_PTR_FROM_JSON(PropertyList, propertyList_);
          DARABONBA_PTR_FROM_JSON(RelationId, relationId_);
          DARABONBA_PTR_FROM_JSON(RelationType, relationType_);
          DARABONBA_PTR_FROM_JSON(SourceEntityId, sourceEntityId_);
          DARABONBA_PTR_FROM_JSON(TargetEntityId, targetEntityId_);
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
        class PropertyList : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const PropertyList& obj) { 
            DARABONBA_PTR_TO_JSON(Code, code_);
            DARABONBA_PTR_TO_JSON(DataType, dataType_);
            DARABONBA_PTR_TO_JSON(Value, value_);
          };
          friend void from_json(const Darabonba::Json& j, PropertyList& obj) { 
            DARABONBA_PTR_FROM_JSON(Code, code_);
            DARABONBA_PTR_FROM_JSON(DataType, dataType_);
            DARABONBA_PTR_FROM_JSON(Value, value_);
          };
          PropertyList() = default ;
          PropertyList(const PropertyList &) = default ;
          PropertyList(PropertyList &&) = default ;
          PropertyList(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~PropertyList() = default ;
          PropertyList& operator=(const PropertyList &) = default ;
          PropertyList& operator=(PropertyList &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->code_ == nullptr
        && this->dataType_ == nullptr && this->value_ == nullptr; };
          // code Field Functions 
          bool hasCode() const { return this->code_ != nullptr;};
          void deleteCode() { this->code_ = nullptr;};
          inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
          inline PropertyList& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


          // dataType Field Functions 
          bool hasDataType() const { return this->dataType_ != nullptr;};
          void deleteDataType() { this->dataType_ = nullptr;};
          inline string getDataType() const { DARABONBA_PTR_GET_DEFAULT(dataType_, "") };
          inline PropertyList& setDataType(string dataType) { DARABONBA_PTR_SET_VALUE(dataType_, dataType) };


          // value Field Functions 
          bool hasValue() const { return this->value_ != nullptr;};
          void deleteValue() { this->value_ = nullptr;};
          inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
          inline PropertyList& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


        protected:
          // The property code.
          shared_ptr<string> code_ {};
          // The property data type. Valid values: STRING (string), INTEGER (integer), FLOAT (float), BOOLEAN (Boolean), DATE (date), LIST (list), and others.
          shared_ptr<string> dataType_ {};
          // The property value.
          shared_ptr<string> value_ {};
        };

        virtual bool empty() const override { return this->propertyList_ == nullptr
        && this->relationId_ == nullptr && this->relationType_ == nullptr && this->sourceEntityId_ == nullptr && this->targetEntityId_ == nullptr; };
        // propertyList Field Functions 
        bool hasPropertyList() const { return this->propertyList_ != nullptr;};
        void deletePropertyList() { this->propertyList_ = nullptr;};
        inline const vector<EdgeList::PropertyList> & getPropertyList() const { DARABONBA_PTR_GET_CONST(propertyList_, vector<EdgeList::PropertyList>) };
        inline vector<EdgeList::PropertyList> getPropertyList() { DARABONBA_PTR_GET(propertyList_, vector<EdgeList::PropertyList>) };
        inline EdgeList& setPropertyList(const vector<EdgeList::PropertyList> & propertyList) { DARABONBA_PTR_SET_VALUE(propertyList_, propertyList) };
        inline EdgeList& setPropertyList(vector<EdgeList::PropertyList> && propertyList) { DARABONBA_PTR_SET_RVALUE(propertyList_, propertyList) };


        // relationId Field Functions 
        bool hasRelationId() const { return this->relationId_ != nullptr;};
        void deleteRelationId() { this->relationId_ = nullptr;};
        inline string getRelationId() const { DARABONBA_PTR_GET_DEFAULT(relationId_, "") };
        inline EdgeList& setRelationId(string relationId) { DARABONBA_PTR_SET_VALUE(relationId_, relationId) };


        // relationType Field Functions 
        bool hasRelationType() const { return this->relationType_ != nullptr;};
        void deleteRelationType() { this->relationType_ = nullptr;};
        inline string getRelationType() const { DARABONBA_PTR_GET_DEFAULT(relationType_, "") };
        inline EdgeList& setRelationType(string relationType) { DARABONBA_PTR_SET_VALUE(relationType_, relationType) };


        // sourceEntityId Field Functions 
        bool hasSourceEntityId() const { return this->sourceEntityId_ != nullptr;};
        void deleteSourceEntityId() { this->sourceEntityId_ = nullptr;};
        inline string getSourceEntityId() const { DARABONBA_PTR_GET_DEFAULT(sourceEntityId_, "") };
        inline EdgeList& setSourceEntityId(string sourceEntityId) { DARABONBA_PTR_SET_VALUE(sourceEntityId_, sourceEntityId) };


        // targetEntityId Field Functions 
        bool hasTargetEntityId() const { return this->targetEntityId_ != nullptr;};
        void deleteTargetEntityId() { this->targetEntityId_ = nullptr;};
        inline string getTargetEntityId() const { DARABONBA_PTR_GET_DEFAULT(targetEntityId_, "") };
        inline EdgeList& setTargetEntityId(string targetEntityId) { DARABONBA_PTR_SET_VALUE(targetEntityId_, targetEntityId) };


      protected:
        // The relation record property list.
        shared_ptr<vector<EdgeList::PropertyList>> propertyList_ {};
        // The relation record ID.
        shared_ptr<string> relationId_ {};
        // The relation type code.
        shared_ptr<string> relationType_ {};
        // The source entity ID.
        shared_ptr<string> sourceEntityId_ {};
        // The target entity ID.
        shared_ptr<string> targetEntityId_ {};
      };

      virtual bool empty() const override { return this->edgeList_ == nullptr
        && this->nodeList_ == nullptr; };
      // edgeList Field Functions 
      bool hasEdgeList() const { return this->edgeList_ != nullptr;};
      void deleteEdgeList() { this->edgeList_ = nullptr;};
      inline const vector<Data::EdgeList> & getEdgeList() const { DARABONBA_PTR_GET_CONST(edgeList_, vector<Data::EdgeList>) };
      inline vector<Data::EdgeList> getEdgeList() { DARABONBA_PTR_GET(edgeList_, vector<Data::EdgeList>) };
      inline Data& setEdgeList(const vector<Data::EdgeList> & edgeList) { DARABONBA_PTR_SET_VALUE(edgeList_, edgeList) };
      inline Data& setEdgeList(vector<Data::EdgeList> && edgeList) { DARABONBA_PTR_SET_RVALUE(edgeList_, edgeList) };


      // nodeList Field Functions 
      bool hasNodeList() const { return this->nodeList_ != nullptr;};
      void deleteNodeList() { this->nodeList_ = nullptr;};
      inline const vector<Data::NodeList> & getNodeList() const { DARABONBA_PTR_GET_CONST(nodeList_, vector<Data::NodeList>) };
      inline vector<Data::NodeList> getNodeList() { DARABONBA_PTR_GET(nodeList_, vector<Data::NodeList>) };
      inline Data& setNodeList(const vector<Data::NodeList> & nodeList) { DARABONBA_PTR_SET_VALUE(nodeList_, nodeList) };
      inline Data& setNodeList(vector<Data::NodeList> && nodeList) { DARABONBA_PTR_SET_RVALUE(nodeList_, nodeList) };


    protected:
      // The edge list.
      shared_ptr<vector<Data::EdgeList>> edgeList_ {};
      // The node list.
      shared_ptr<vector<Data::NodeList>> nodeList_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetKgNeighborResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetKgNeighborResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetKgNeighborResponseBody::Data) };
    inline GetKgNeighborResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetKgNeighborResponseBody::Data) };
    inline GetKgNeighborResponseBody& setData(const GetKgNeighborResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetKgNeighborResponseBody& setData(GetKgNeighborResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline GetKgNeighborResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetKgNeighborResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetKgNeighborResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetKgNeighborResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The backend response code.
    shared_ptr<string> code_ {};
    // The query result.
    shared_ptr<GetKgNeighborResponseBody::Data> data_ {};
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
