// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEGRAPH4INVESTIGATIONONLINERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEGRAPH4INVESTIGATIONONLINERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeGraph4InvestigationOnlineResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeGraph4InvestigationOnlineResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeGraph4InvestigationOnlineResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    DescribeGraph4InvestigationOnlineResponseBody() = default ;
    DescribeGraph4InvestigationOnlineResponseBody(const DescribeGraph4InvestigationOnlineResponseBody &) = default ;
    DescribeGraph4InvestigationOnlineResponseBody(DescribeGraph4InvestigationOnlineResponseBody &&) = default ;
    DescribeGraph4InvestigationOnlineResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeGraph4InvestigationOnlineResponseBody() = default ;
    DescribeGraph4InvestigationOnlineResponseBody& operator=(const DescribeGraph4InvestigationOnlineResponseBody &) = default ;
    DescribeGraph4InvestigationOnlineResponseBody& operator=(DescribeGraph4InvestigationOnlineResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(EdgeList, edgeList_);
        DARABONBA_PTR_TO_JSON(EntityTypeList, entityTypeList_);
        DARABONBA_PTR_TO_JSON(RelationTypeList, relationTypeList_);
        DARABONBA_PTR_TO_JSON(VertexList, vertexList_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(EdgeList, edgeList_);
        DARABONBA_PTR_FROM_JSON(EntityTypeList, entityTypeList_);
        DARABONBA_PTR_FROM_JSON(RelationTypeList, relationTypeList_);
        DARABONBA_PTR_FROM_JSON(VertexList, vertexList_);
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
      class VertexList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const VertexList& obj) { 
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(NeighborList, neighborList_);
          DARABONBA_PTR_TO_JSON(Properties, properties_);
          DARABONBA_PTR_TO_JSON(Time, time_);
          DARABONBA_PTR_TO_JSON(Type, type_);
          DARABONBA_PTR_TO_JSON(Uuid, uuid_);
        };
        friend void from_json(const Darabonba::Json& j, VertexList& obj) { 
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(NeighborList, neighborList_);
          DARABONBA_PTR_FROM_JSON(Properties, properties_);
          DARABONBA_PTR_FROM_JSON(Time, time_);
          DARABONBA_PTR_FROM_JSON(Type, type_);
          DARABONBA_PTR_FROM_JSON(Uuid, uuid_);
        };
        VertexList() = default ;
        VertexList(const VertexList &) = default ;
        VertexList(VertexList &&) = default ;
        VertexList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~VertexList() = default ;
        VertexList& operator=(const VertexList &) = default ;
        VertexList& operator=(VertexList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class NeighborList : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const NeighborList& obj) { 
            DARABONBA_PTR_TO_JSON(Count, count_);
            DARABONBA_PTR_TO_JSON(HasMore, hasMore_);
            DARABONBA_PTR_TO_JSON(Type, type_);
          };
          friend void from_json(const Darabonba::Json& j, NeighborList& obj) { 
            DARABONBA_PTR_FROM_JSON(Count, count_);
            DARABONBA_PTR_FROM_JSON(HasMore, hasMore_);
            DARABONBA_PTR_FROM_JSON(Type, type_);
          };
          NeighborList() = default ;
          NeighborList(const NeighborList &) = default ;
          NeighborList(NeighborList &&) = default ;
          NeighborList(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~NeighborList() = default ;
          NeighborList& operator=(const NeighborList &) = default ;
          NeighborList& operator=(NeighborList &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->count_ == nullptr
        && this->hasMore_ == nullptr && this->type_ == nullptr; };
          // count Field Functions 
          bool hasCount() const { return this->count_ != nullptr;};
          void deleteCount() { this->count_ = nullptr;};
          inline int32_t getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, 0) };
          inline NeighborList& setCount(int32_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


          // hasMore Field Functions 
          bool hasHasMore() const { return this->hasMore_ != nullptr;};
          void deleteHasMore() { this->hasMore_ = nullptr;};
          inline bool getHasMore() const { DARABONBA_PTR_GET_DEFAULT(hasMore_, false) };
          inline NeighborList& setHasMore(bool hasMore) { DARABONBA_PTR_SET_VALUE(hasMore_, hasMore) };


          // type Field Functions 
          bool hasType() const { return this->type_ != nullptr;};
          void deleteType() { this->type_ = nullptr;};
          inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
          inline NeighborList& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


        protected:
          // Number of neighboring nodes.
          shared_ptr<int32_t> count_ {};
          // Indicates whether there are more neighboring vertices.
          shared_ptr<bool> hasMore_ {};
          // Neighbor node type.
          shared_ptr<string> type_ {};
        };

        virtual bool empty() const override { return this->name_ == nullptr
        && this->neighborList_ == nullptr && this->properties_ == nullptr && this->time_ == nullptr && this->type_ == nullptr && this->uuid_ == nullptr; };
        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline VertexList& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // neighborList Field Functions 
        bool hasNeighborList() const { return this->neighborList_ != nullptr;};
        void deleteNeighborList() { this->neighborList_ = nullptr;};
        inline const vector<VertexList::NeighborList> & getNeighborList() const { DARABONBA_PTR_GET_CONST(neighborList_, vector<VertexList::NeighborList>) };
        inline vector<VertexList::NeighborList> getNeighborList() { DARABONBA_PTR_GET(neighborList_, vector<VertexList::NeighborList>) };
        inline VertexList& setNeighborList(const vector<VertexList::NeighborList> & neighborList) { DARABONBA_PTR_SET_VALUE(neighborList_, neighborList) };
        inline VertexList& setNeighborList(vector<VertexList::NeighborList> && neighborList) { DARABONBA_PTR_SET_RVALUE(neighborList_, neighborList) };


        // properties Field Functions 
        bool hasProperties() const { return this->properties_ != nullptr;};
        void deleteProperties() { this->properties_ = nullptr;};
        inline string getProperties() const { DARABONBA_PTR_GET_DEFAULT(properties_, "") };
        inline VertexList& setProperties(string properties) { DARABONBA_PTR_SET_VALUE(properties_, properties) };


        // time Field Functions 
        bool hasTime() const { return this->time_ != nullptr;};
        void deleteTime() { this->time_ = nullptr;};
        inline string getTime() const { DARABONBA_PTR_GET_DEFAULT(time_, "") };
        inline VertexList& setTime(string time) { DARABONBA_PTR_SET_VALUE(time_, time) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline VertexList& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


        // uuid Field Functions 
        bool hasUuid() const { return this->uuid_ != nullptr;};
        void deleteUuid() { this->uuid_ = nullptr;};
        inline string getUuid() const { DARABONBA_PTR_GET_DEFAULT(uuid_, "") };
        inline VertexList& setUuid(string uuid) { DARABONBA_PTR_SET_VALUE(uuid_, uuid) };


      protected:
        // Vertex name.
        shared_ptr<string> name_ {};
        // List of neighboring vertices of the current vertex.
        shared_ptr<vector<VertexList::NeighborList>> neighborList_ {};
        // Properties.
        shared_ptr<string> properties_ {};
        // Time.
        shared_ptr<string> time_ {};
        // Vertex type.
        shared_ptr<string> type_ {};
        // Asset UUID.
        shared_ptr<string> uuid_ {};
      };

      class RelationTypeList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const RelationTypeList& obj) { 
          DARABONBA_PTR_TO_JSON(Directed, directed_);
          DARABONBA_PTR_TO_JSON(DisplayColor, displayColor_);
          DARABONBA_PTR_TO_JSON(DisplayIcon, displayIcon_);
          DARABONBA_PTR_TO_JSON(Name, name_);
        };
        friend void from_json(const Darabonba::Json& j, RelationTypeList& obj) { 
          DARABONBA_PTR_FROM_JSON(Directed, directed_);
          DARABONBA_PTR_FROM_JSON(DisplayColor, displayColor_);
          DARABONBA_PTR_FROM_JSON(DisplayIcon, displayIcon_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
        };
        RelationTypeList() = default ;
        RelationTypeList(const RelationTypeList &) = default ;
        RelationTypeList(RelationTypeList &&) = default ;
        RelationTypeList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~RelationTypeList() = default ;
        RelationTypeList& operator=(const RelationTypeList &) = default ;
        RelationTypeList& operator=(RelationTypeList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->directed_ == nullptr
        && this->displayColor_ == nullptr && this->displayIcon_ == nullptr && this->name_ == nullptr; };
        // directed Field Functions 
        bool hasDirected() const { return this->directed_ != nullptr;};
        void deleteDirected() { this->directed_ = nullptr;};
        inline int32_t getDirected() const { DARABONBA_PTR_GET_DEFAULT(directed_, 0) };
        inline RelationTypeList& setDirected(int32_t directed) { DARABONBA_PTR_SET_VALUE(directed_, directed) };


        // displayColor Field Functions 
        bool hasDisplayColor() const { return this->displayColor_ != nullptr;};
        void deleteDisplayColor() { this->displayColor_ = nullptr;};
        inline string getDisplayColor() const { DARABONBA_PTR_GET_DEFAULT(displayColor_, "") };
        inline RelationTypeList& setDisplayColor(string displayColor) { DARABONBA_PTR_SET_VALUE(displayColor_, displayColor) };


        // displayIcon Field Functions 
        bool hasDisplayIcon() const { return this->displayIcon_ != nullptr;};
        void deleteDisplayIcon() { this->displayIcon_ = nullptr;};
        inline string getDisplayIcon() const { DARABONBA_PTR_GET_DEFAULT(displayIcon_, "") };
        inline RelationTypeList& setDisplayIcon(string displayIcon) { DARABONBA_PTR_SET_VALUE(displayIcon_, displayIcon) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline RelationTypeList& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      protected:
        // Direction of the edge. Possible values:
        // - **1** ： Forward
        // - **0**： Reverse
        shared_ptr<int32_t> directed_ {};
        // Render color of the edge.
        shared_ptr<string> displayColor_ {};
        // Icon style of the edge
        shared_ptr<string> displayIcon_ {};
        // Name of the edge.
        shared_ptr<string> name_ {};
      };

      class EntityTypeList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const EntityTypeList& obj) { 
          DARABONBA_PTR_TO_JSON(DisplayColor, displayColor_);
          DARABONBA_PTR_TO_JSON(DisplayIcon, displayIcon_);
          DARABONBA_PTR_TO_JSON(DisplayOrder, displayOrder_);
          DARABONBA_PTR_TO_JSON(Id, id_);
          DARABONBA_PTR_TO_JSON(Name, name_);
        };
        friend void from_json(const Darabonba::Json& j, EntityTypeList& obj) { 
          DARABONBA_PTR_FROM_JSON(DisplayColor, displayColor_);
          DARABONBA_PTR_FROM_JSON(DisplayIcon, displayIcon_);
          DARABONBA_PTR_FROM_JSON(DisplayOrder, displayOrder_);
          DARABONBA_PTR_FROM_JSON(Id, id_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
        };
        EntityTypeList() = default ;
        EntityTypeList(const EntityTypeList &) = default ;
        EntityTypeList(EntityTypeList &&) = default ;
        EntityTypeList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~EntityTypeList() = default ;
        EntityTypeList& operator=(const EntityTypeList &) = default ;
        EntityTypeList& operator=(EntityTypeList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->displayColor_ == nullptr
        && this->displayIcon_ == nullptr && this->displayOrder_ == nullptr && this->id_ == nullptr && this->name_ == nullptr; };
        // displayColor Field Functions 
        bool hasDisplayColor() const { return this->displayColor_ != nullptr;};
        void deleteDisplayColor() { this->displayColor_ = nullptr;};
        inline string getDisplayColor() const { DARABONBA_PTR_GET_DEFAULT(displayColor_, "") };
        inline EntityTypeList& setDisplayColor(string displayColor) { DARABONBA_PTR_SET_VALUE(displayColor_, displayColor) };


        // displayIcon Field Functions 
        bool hasDisplayIcon() const { return this->displayIcon_ != nullptr;};
        void deleteDisplayIcon() { this->displayIcon_ = nullptr;};
        inline string getDisplayIcon() const { DARABONBA_PTR_GET_DEFAULT(displayIcon_, "") };
        inline EntityTypeList& setDisplayIcon(string displayIcon) { DARABONBA_PTR_SET_VALUE(displayIcon_, displayIcon) };


        // displayOrder Field Functions 
        bool hasDisplayOrder() const { return this->displayOrder_ != nullptr;};
        void deleteDisplayOrder() { this->displayOrder_ = nullptr;};
        inline int32_t getDisplayOrder() const { DARABONBA_PTR_GET_DEFAULT(displayOrder_, 0) };
        inline EntityTypeList& setDisplayOrder(int32_t displayOrder) { DARABONBA_PTR_SET_VALUE(displayOrder_, displayOrder) };


        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
        inline EntityTypeList& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline EntityTypeList& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      protected:
        // Vertex rendering color.
        shared_ptr<string> displayColor_ {};
        // Vertex icon.
        shared_ptr<string> displayIcon_ {};
        // Display order
        shared_ptr<int32_t> displayOrder_ {};
        // Node type ID.
        shared_ptr<string> id_ {};
        // Vertex name.
        shared_ptr<string> name_ {};
      };

      class EdgeList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const EdgeList& obj) { 
          DARABONBA_PTR_TO_JSON(EndId, endId_);
          DARABONBA_PTR_TO_JSON(EndType, endType_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(StartId, startId_);
          DARABONBA_PTR_TO_JSON(StartType, startType_);
          DARABONBA_PTR_TO_JSON(Time, time_);
          DARABONBA_PTR_TO_JSON(Type, type_);
        };
        friend void from_json(const Darabonba::Json& j, EdgeList& obj) { 
          DARABONBA_PTR_FROM_JSON(EndId, endId_);
          DARABONBA_PTR_FROM_JSON(EndType, endType_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(StartId, startId_);
          DARABONBA_PTR_FROM_JSON(StartType, startType_);
          DARABONBA_PTR_FROM_JSON(Time, time_);
          DARABONBA_PTR_FROM_JSON(Type, type_);
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
        virtual bool empty() const override { return this->endId_ == nullptr
        && this->endType_ == nullptr && this->name_ == nullptr && this->startId_ == nullptr && this->startType_ == nullptr && this->time_ == nullptr
        && this->type_ == nullptr; };
        // endId Field Functions 
        bool hasEndId() const { return this->endId_ != nullptr;};
        void deleteEndId() { this->endId_ = nullptr;};
        inline string getEndId() const { DARABONBA_PTR_GET_DEFAULT(endId_, "") };
        inline EdgeList& setEndId(string endId) { DARABONBA_PTR_SET_VALUE(endId_, endId) };


        // endType Field Functions 
        bool hasEndType() const { return this->endType_ != nullptr;};
        void deleteEndType() { this->endType_ = nullptr;};
        inline string getEndType() const { DARABONBA_PTR_GET_DEFAULT(endType_, "") };
        inline EdgeList& setEndType(string endType) { DARABONBA_PTR_SET_VALUE(endType_, endType) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline EdgeList& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // startId Field Functions 
        bool hasStartId() const { return this->startId_ != nullptr;};
        void deleteStartId() { this->startId_ = nullptr;};
        inline string getStartId() const { DARABONBA_PTR_GET_DEFAULT(startId_, "") };
        inline EdgeList& setStartId(string startId) { DARABONBA_PTR_SET_VALUE(startId_, startId) };


        // startType Field Functions 
        bool hasStartType() const { return this->startType_ != nullptr;};
        void deleteStartType() { this->startType_ = nullptr;};
        inline string getStartType() const { DARABONBA_PTR_GET_DEFAULT(startType_, "") };
        inline EdgeList& setStartType(string startType) { DARABONBA_PTR_SET_VALUE(startType_, startType) };


        // time Field Functions 
        bool hasTime() const { return this->time_ != nullptr;};
        void deleteTime() { this->time_ = nullptr;};
        inline string getTime() const { DARABONBA_PTR_GET_DEFAULT(time_, "") };
        inline EdgeList& setTime(string time) { DARABONBA_PTR_SET_VALUE(time_, time) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline EdgeList& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      protected:
        // ID of the end point of the edge.
        shared_ptr<string> endId_ {};
        // The type of the end point of the current edge. Possible values include but are not limited to:
        // - **process**: Process
        // - **file**: File
        // - **alert**: Alert
        // - **ip**: IP address
        // - **domain**: Domain
        shared_ptr<string> endType_ {};
        // Edge name.
        shared_ptr<string> name_ {};
        // Start vertex id of edge.
        shared_ptr<string> startId_ {};
        // The type of the starting point of the edge. Possible values include, but are not limited to:
        // - **process**： Process
        // - **file**： File
        // - **alert**： Alert
        // - **ip**： IP address
        // - **domain**： Domain
        shared_ptr<string> startType_ {};
        // The time when the edge was established.
        shared_ptr<string> time_ {};
        // The type of the edge.
        shared_ptr<string> type_ {};
      };

      virtual bool empty() const override { return this->edgeList_ == nullptr
        && this->entityTypeList_ == nullptr && this->relationTypeList_ == nullptr && this->vertexList_ == nullptr; };
      // edgeList Field Functions 
      bool hasEdgeList() const { return this->edgeList_ != nullptr;};
      void deleteEdgeList() { this->edgeList_ = nullptr;};
      inline const vector<Data::EdgeList> & getEdgeList() const { DARABONBA_PTR_GET_CONST(edgeList_, vector<Data::EdgeList>) };
      inline vector<Data::EdgeList> getEdgeList() { DARABONBA_PTR_GET(edgeList_, vector<Data::EdgeList>) };
      inline Data& setEdgeList(const vector<Data::EdgeList> & edgeList) { DARABONBA_PTR_SET_VALUE(edgeList_, edgeList) };
      inline Data& setEdgeList(vector<Data::EdgeList> && edgeList) { DARABONBA_PTR_SET_RVALUE(edgeList_, edgeList) };


      // entityTypeList Field Functions 
      bool hasEntityTypeList() const { return this->entityTypeList_ != nullptr;};
      void deleteEntityTypeList() { this->entityTypeList_ = nullptr;};
      inline const vector<Data::EntityTypeList> & getEntityTypeList() const { DARABONBA_PTR_GET_CONST(entityTypeList_, vector<Data::EntityTypeList>) };
      inline vector<Data::EntityTypeList> getEntityTypeList() { DARABONBA_PTR_GET(entityTypeList_, vector<Data::EntityTypeList>) };
      inline Data& setEntityTypeList(const vector<Data::EntityTypeList> & entityTypeList) { DARABONBA_PTR_SET_VALUE(entityTypeList_, entityTypeList) };
      inline Data& setEntityTypeList(vector<Data::EntityTypeList> && entityTypeList) { DARABONBA_PTR_SET_RVALUE(entityTypeList_, entityTypeList) };


      // relationTypeList Field Functions 
      bool hasRelationTypeList() const { return this->relationTypeList_ != nullptr;};
      void deleteRelationTypeList() { this->relationTypeList_ = nullptr;};
      inline const vector<Data::RelationTypeList> & getRelationTypeList() const { DARABONBA_PTR_GET_CONST(relationTypeList_, vector<Data::RelationTypeList>) };
      inline vector<Data::RelationTypeList> getRelationTypeList() { DARABONBA_PTR_GET(relationTypeList_, vector<Data::RelationTypeList>) };
      inline Data& setRelationTypeList(const vector<Data::RelationTypeList> & relationTypeList) { DARABONBA_PTR_SET_VALUE(relationTypeList_, relationTypeList) };
      inline Data& setRelationTypeList(vector<Data::RelationTypeList> && relationTypeList) { DARABONBA_PTR_SET_RVALUE(relationTypeList_, relationTypeList) };


      // vertexList Field Functions 
      bool hasVertexList() const { return this->vertexList_ != nullptr;};
      void deleteVertexList() { this->vertexList_ = nullptr;};
      inline const vector<Data::VertexList> & getVertexList() const { DARABONBA_PTR_GET_CONST(vertexList_, vector<Data::VertexList>) };
      inline vector<Data::VertexList> getVertexList() { DARABONBA_PTR_GET(vertexList_, vector<Data::VertexList>) };
      inline Data& setVertexList(const vector<Data::VertexList> & vertexList) { DARABONBA_PTR_SET_VALUE(vertexList_, vertexList) };
      inline Data& setVertexList(vector<Data::VertexList> && vertexList) { DARABONBA_PTR_SET_RVALUE(vertexList_, vertexList) };


    protected:
      // List of edges.
      shared_ptr<vector<Data::EdgeList>> edgeList_ {};
      // List of vertex types.
      shared_ptr<vector<Data::EntityTypeList>> entityTypeList_ {};
      // List of edge types.
      shared_ptr<vector<Data::RelationTypeList>> relationTypeList_ {};
      // List of vertices.
      shared_ptr<vector<Data::VertexList>> vertexList_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline DescribeGraph4InvestigationOnlineResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const DescribeGraph4InvestigationOnlineResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, DescribeGraph4InvestigationOnlineResponseBody::Data) };
    inline DescribeGraph4InvestigationOnlineResponseBody::Data getData() { DARABONBA_PTR_GET(data_, DescribeGraph4InvestigationOnlineResponseBody::Data) };
    inline DescribeGraph4InvestigationOnlineResponseBody& setData(const DescribeGraph4InvestigationOnlineResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribeGraph4InvestigationOnlineResponseBody& setData(DescribeGraph4InvestigationOnlineResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DescribeGraph4InvestigationOnlineResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeGraph4InvestigationOnlineResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline DescribeGraph4InvestigationOnlineResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // Result code, where **200** indicates success. Any other value indicates failure, and the caller can use this field to determine the reason for the failure.
    shared_ptr<string> code_ {};
    // Data
    shared_ptr<DescribeGraph4InvestigationOnlineResponseBody::Data> data_ {};
    // The response message from the request.
    shared_ptr<string> message_ {};
    // A unique identifier generated by Alibaba Cloud for this request.
    shared_ptr<string> requestId_ {};
    // The result status of the API call. Values:
    // - **true**: The API call was successful.
    // - **false**: The API call failed.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
