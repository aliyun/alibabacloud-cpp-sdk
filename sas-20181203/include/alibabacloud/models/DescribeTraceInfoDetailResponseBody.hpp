// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBETRACEINFODETAILRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBETRACEINFODETAILRESPONSEBODY_HPP_
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
  class DescribeTraceInfoDetailResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeTraceInfoDetailResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(TraceInfoDetail, traceInfoDetail_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeTraceInfoDetailResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(TraceInfoDetail, traceInfoDetail_);
    };
    DescribeTraceInfoDetailResponseBody() = default ;
    DescribeTraceInfoDetailResponseBody(const DescribeTraceInfoDetailResponseBody &) = default ;
    DescribeTraceInfoDetailResponseBody(DescribeTraceInfoDetailResponseBody &&) = default ;
    DescribeTraceInfoDetailResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeTraceInfoDetailResponseBody() = default ;
    DescribeTraceInfoDetailResponseBody& operator=(const DescribeTraceInfoDetailResponseBody &) = default ;
    DescribeTraceInfoDetailResponseBody& operator=(DescribeTraceInfoDetailResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class TraceInfoDetail : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const TraceInfoDetail& obj) { 
        DARABONBA_PTR_TO_JSON(EdgeList, edgeList_);
        DARABONBA_PTR_TO_JSON(EntityTypeList, entityTypeList_);
        DARABONBA_PTR_TO_JSON(RelationTypeList, relationTypeList_);
        DARABONBA_PTR_TO_JSON(VertexList, vertexList_);
      };
      friend void from_json(const Darabonba::Json& j, TraceInfoDetail& obj) { 
        DARABONBA_PTR_FROM_JSON(EdgeList, edgeList_);
        DARABONBA_PTR_FROM_JSON(EntityTypeList, entityTypeList_);
        DARABONBA_PTR_FROM_JSON(RelationTypeList, relationTypeList_);
        DARABONBA_PTR_FROM_JSON(VertexList, vertexList_);
      };
      TraceInfoDetail() = default ;
      TraceInfoDetail(const TraceInfoDetail &) = default ;
      TraceInfoDetail(TraceInfoDetail &&) = default ;
      TraceInfoDetail(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~TraceInfoDetail() = default ;
      TraceInfoDetail& operator=(const TraceInfoDetail &) = default ;
      TraceInfoDetail& operator=(TraceInfoDetail &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class VertexList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const VertexList& obj) { 
          DARABONBA_PTR_TO_JSON(Count, count_);
          DARABONBA_PTR_TO_JSON(Id, id_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(NeighborList, neighborList_);
          DARABONBA_PTR_TO_JSON(Time, time_);
          DARABONBA_PTR_TO_JSON(Type, type_);
        };
        friend void from_json(const Darabonba::Json& j, VertexList& obj) { 
          DARABONBA_PTR_FROM_JSON(Count, count_);
          DARABONBA_PTR_FROM_JSON(Id, id_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(NeighborList, neighborList_);
          DARABONBA_PTR_FROM_JSON(Time, time_);
          DARABONBA_PTR_FROM_JSON(Type, type_);
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
          // The number of neighbor nodes.
          shared_ptr<int32_t> count_ {};
          // Indicates whether one more page is returned.
          shared_ptr<bool> hasMore_ {};
          // The type of the neighbor node. The value is fixed as **alert**.
          shared_ptr<string> type_ {};
        };

        virtual bool empty() const override { return this->count_ == nullptr
        && this->id_ == nullptr && this->name_ == nullptr && this->neighborList_ == nullptr && this->time_ == nullptr && this->type_ == nullptr; };
        // count Field Functions 
        bool hasCount() const { return this->count_ != nullptr;};
        void deleteCount() { this->count_ = nullptr;};
        inline int32_t getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, 0) };
        inline VertexList& setCount(int32_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
        inline VertexList& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


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


      protected:
        // The number of times.
        shared_ptr<int32_t> count_ {};
        // The ID of the vertex.
        shared_ptr<string> id_ {};
        // The name of the entity represented by the vertex.
        shared_ptr<string> name_ {};
        // An array that consists of the neighbor nodes.
        shared_ptr<vector<VertexList::NeighborList>> neighborList_ {};
        // The point in time.
        shared_ptr<string> time_ {};
        // The type of the entity represented by the vertex.
        shared_ptr<string> type_ {};
      };

      class RelationTypeList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const RelationTypeList& obj) { 
          DARABONBA_PTR_TO_JSON(Directed, directed_);
          DARABONBA_PTR_TO_JSON(DisplayColor, displayColor_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(RelationTypeId, relationTypeId_);
          DARABONBA_PTR_TO_JSON(ShowType, showType_);
        };
        friend void from_json(const Darabonba::Json& j, RelationTypeList& obj) { 
          DARABONBA_PTR_FROM_JSON(Directed, directed_);
          DARABONBA_PTR_FROM_JSON(DisplayColor, displayColor_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(RelationTypeId, relationTypeId_);
          DARABONBA_PTR_FROM_JSON(ShowType, showType_);
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
        && this->displayColor_ == nullptr && this->name_ == nullptr && this->relationTypeId_ == nullptr && this->showType_ == nullptr; };
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


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline RelationTypeList& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // relationTypeId Field Functions 
        bool hasRelationTypeId() const { return this->relationTypeId_ != nullptr;};
        void deleteRelationTypeId() { this->relationTypeId_ = nullptr;};
        inline string getRelationTypeId() const { DARABONBA_PTR_GET_DEFAULT(relationTypeId_, "") };
        inline RelationTypeList& setRelationTypeId(string relationTypeId) { DARABONBA_PTR_SET_VALUE(relationTypeId_, relationTypeId) };


        // showType Field Functions 
        bool hasShowType() const { return this->showType_ != nullptr;};
        void deleteShowType() { this->showType_ = nullptr;};
        inline string getShowType() const { DARABONBA_PTR_GET_DEFAULT(showType_, "") };
        inline RelationTypeList& setShowType(string showType) { DARABONBA_PTR_SET_VALUE(showType_, showType) };


      protected:
        // Indicates whether the edge is a directional edge. Valid values:
        // 
        // *   **1**: yes
        // *   **0**: no
        shared_ptr<int32_t> directed_ {};
        // The rendering color of the edge.
        shared_ptr<string> displayColor_ {};
        // The name of the edge type.
        shared_ptr<string> name_ {};
        // The ID of the edge type.
        shared_ptr<string> relationTypeId_ {};
        // This parameter is deprecated.
        shared_ptr<string> showType_ {};
      };

      class EntityTypeList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const EntityTypeList& obj) { 
          DARABONBA_PTR_TO_JSON(DbId, dbId_);
          DARABONBA_PTR_TO_JSON(DisplayColor, displayColor_);
          DARABONBA_PTR_TO_JSON(DisplayIcon, displayIcon_);
          DARABONBA_PTR_TO_JSON(DisplayTemplate, displayTemplate_);
          DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
          DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
          DARABONBA_PTR_TO_JSON(Id, id_);
          DARABONBA_PTR_TO_JSON(Limit, limit_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(Namespace, namespace_);
          DARABONBA_PTR_TO_JSON(Offset, offset_);
        };
        friend void from_json(const Darabonba::Json& j, EntityTypeList& obj) { 
          DARABONBA_PTR_FROM_JSON(DbId, dbId_);
          DARABONBA_PTR_FROM_JSON(DisplayColor, displayColor_);
          DARABONBA_PTR_FROM_JSON(DisplayIcon, displayIcon_);
          DARABONBA_PTR_FROM_JSON(DisplayTemplate, displayTemplate_);
          DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
          DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
          DARABONBA_PTR_FROM_JSON(Id, id_);
          DARABONBA_PTR_FROM_JSON(Limit, limit_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(Namespace, namespace_);
          DARABONBA_PTR_FROM_JSON(Offset, offset_);
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
        virtual bool empty() const override { return this->dbId_ == nullptr
        && this->displayColor_ == nullptr && this->displayIcon_ == nullptr && this->displayTemplate_ == nullptr && this->gmtCreate_ == nullptr && this->gmtModified_ == nullptr
        && this->id_ == nullptr && this->limit_ == nullptr && this->name_ == nullptr && this->namespace_ == nullptr && this->offset_ == nullptr; };
        // dbId Field Functions 
        bool hasDbId() const { return this->dbId_ != nullptr;};
        void deleteDbId() { this->dbId_ = nullptr;};
        inline int32_t getDbId() const { DARABONBA_PTR_GET_DEFAULT(dbId_, 0) };
        inline EntityTypeList& setDbId(int32_t dbId) { DARABONBA_PTR_SET_VALUE(dbId_, dbId) };


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


        // displayTemplate Field Functions 
        bool hasDisplayTemplate() const { return this->displayTemplate_ != nullptr;};
        void deleteDisplayTemplate() { this->displayTemplate_ = nullptr;};
        inline string getDisplayTemplate() const { DARABONBA_PTR_GET_DEFAULT(displayTemplate_, "") };
        inline EntityTypeList& setDisplayTemplate(string displayTemplate) { DARABONBA_PTR_SET_VALUE(displayTemplate_, displayTemplate) };


        // gmtCreate Field Functions 
        bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
        void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
        inline int64_t getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, 0L) };
        inline EntityTypeList& setGmtCreate(int64_t gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


        // gmtModified Field Functions 
        bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
        void deleteGmtModified() { this->gmtModified_ = nullptr;};
        inline int64_t getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, 0L) };
        inline EntityTypeList& setGmtModified(int64_t gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
        inline EntityTypeList& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // limit Field Functions 
        bool hasLimit() const { return this->limit_ != nullptr;};
        void deleteLimit() { this->limit_ = nullptr;};
        inline int32_t getLimit() const { DARABONBA_PTR_GET_DEFAULT(limit_, 0) };
        inline EntityTypeList& setLimit(int32_t limit) { DARABONBA_PTR_SET_VALUE(limit_, limit) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline EntityTypeList& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // namespace Field Functions 
        bool hasNamespace() const { return this->namespace_ != nullptr;};
        void deleteNamespace() { this->namespace_ = nullptr;};
        inline string getNamespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
        inline EntityTypeList& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


        // offset Field Functions 
        bool hasOffset() const { return this->offset_ != nullptr;};
        void deleteOffset() { this->offset_ = nullptr;};
        inline int32_t getOffset() const { DARABONBA_PTR_GET_DEFAULT(offset_, 0) };
        inline EntityTypeList& setOffset(int32_t offset) { DARABONBA_PTR_SET_VALUE(offset_, offset) };


      protected:
        // This parameter is deprecated.
        shared_ptr<int32_t> dbId_ {};
        // The rendering color of the vertex.
        shared_ptr<string> displayColor_ {};
        // The icon style of the vertex.
        shared_ptr<string> displayIcon_ {};
        // This parameter is deprecated.
        shared_ptr<string> displayTemplate_ {};
        // The timestamp when the vertex was created.
        shared_ptr<int64_t> gmtCreate_ {};
        // The time when the vertex was last modified.
        shared_ptr<int64_t> gmtModified_ {};
        // The ID of the vertex type.
        shared_ptr<string> id_ {};
        // This parameter is deprecated.
        shared_ptr<int32_t> limit_ {};
        // The name of the vertex type.
        shared_ptr<string> name_ {};
        // The namespace.
        shared_ptr<string> namespace_ {};
        // This parameter is deprecated.
        shared_ptr<int32_t> offset_ {};
      };

      class EdgeList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const EdgeList& obj) { 
          DARABONBA_PTR_TO_JSON(Count, count_);
          DARABONBA_PTR_TO_JSON(EndId, endId_);
          DARABONBA_PTR_TO_JSON(StartId, startId_);
          DARABONBA_PTR_TO_JSON(Time, time_);
          DARABONBA_PTR_TO_JSON(Type, type_);
        };
        friend void from_json(const Darabonba::Json& j, EdgeList& obj) { 
          DARABONBA_PTR_FROM_JSON(Count, count_);
          DARABONBA_PTR_FROM_JSON(EndId, endId_);
          DARABONBA_PTR_FROM_JSON(StartId, startId_);
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
        virtual bool empty() const override { return this->count_ == nullptr
        && this->endId_ == nullptr && this->startId_ == nullptr && this->time_ == nullptr && this->type_ == nullptr; };
        // count Field Functions 
        bool hasCount() const { return this->count_ != nullptr;};
        void deleteCount() { this->count_ = nullptr;};
        inline int32_t getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, 0) };
        inline EdgeList& setCount(int32_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


        // endId Field Functions 
        bool hasEndId() const { return this->endId_ != nullptr;};
        void deleteEndId() { this->endId_ = nullptr;};
        inline string getEndId() const { DARABONBA_PTR_GET_DEFAULT(endId_, "") };
        inline EdgeList& setEndId(string endId) { DARABONBA_PTR_SET_VALUE(endId_, endId) };


        // startId Field Functions 
        bool hasStartId() const { return this->startId_ != nullptr;};
        void deleteStartId() { this->startId_ = nullptr;};
        inline string getStartId() const { DARABONBA_PTR_GET_DEFAULT(startId_, "") };
        inline EdgeList& setStartId(string startId) { DARABONBA_PTR_SET_VALUE(startId_, startId) };


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
        // The number of times.
        shared_ptr<int32_t> count_ {};
        // The ending vertex ID of the edge of the tracing diagram.
        shared_ptr<string> endId_ {};
        // The starting vertex ID of the edge of the tracing diagram.
        shared_ptr<string> startId_ {};
        // The point in time.
        shared_ptr<string> time_ {};
        // The type of the edge of the tracing diagram.
        shared_ptr<string> type_ {};
      };

      virtual bool empty() const override { return this->edgeList_ == nullptr
        && this->entityTypeList_ == nullptr && this->relationTypeList_ == nullptr && this->vertexList_ == nullptr; };
      // edgeList Field Functions 
      bool hasEdgeList() const { return this->edgeList_ != nullptr;};
      void deleteEdgeList() { this->edgeList_ = nullptr;};
      inline const vector<TraceInfoDetail::EdgeList> & getEdgeList() const { DARABONBA_PTR_GET_CONST(edgeList_, vector<TraceInfoDetail::EdgeList>) };
      inline vector<TraceInfoDetail::EdgeList> getEdgeList() { DARABONBA_PTR_GET(edgeList_, vector<TraceInfoDetail::EdgeList>) };
      inline TraceInfoDetail& setEdgeList(const vector<TraceInfoDetail::EdgeList> & edgeList) { DARABONBA_PTR_SET_VALUE(edgeList_, edgeList) };
      inline TraceInfoDetail& setEdgeList(vector<TraceInfoDetail::EdgeList> && edgeList) { DARABONBA_PTR_SET_RVALUE(edgeList_, edgeList) };


      // entityTypeList Field Functions 
      bool hasEntityTypeList() const { return this->entityTypeList_ != nullptr;};
      void deleteEntityTypeList() { this->entityTypeList_ = nullptr;};
      inline const vector<TraceInfoDetail::EntityTypeList> & getEntityTypeList() const { DARABONBA_PTR_GET_CONST(entityTypeList_, vector<TraceInfoDetail::EntityTypeList>) };
      inline vector<TraceInfoDetail::EntityTypeList> getEntityTypeList() { DARABONBA_PTR_GET(entityTypeList_, vector<TraceInfoDetail::EntityTypeList>) };
      inline TraceInfoDetail& setEntityTypeList(const vector<TraceInfoDetail::EntityTypeList> & entityTypeList) { DARABONBA_PTR_SET_VALUE(entityTypeList_, entityTypeList) };
      inline TraceInfoDetail& setEntityTypeList(vector<TraceInfoDetail::EntityTypeList> && entityTypeList) { DARABONBA_PTR_SET_RVALUE(entityTypeList_, entityTypeList) };


      // relationTypeList Field Functions 
      bool hasRelationTypeList() const { return this->relationTypeList_ != nullptr;};
      void deleteRelationTypeList() { this->relationTypeList_ = nullptr;};
      inline const vector<TraceInfoDetail::RelationTypeList> & getRelationTypeList() const { DARABONBA_PTR_GET_CONST(relationTypeList_, vector<TraceInfoDetail::RelationTypeList>) };
      inline vector<TraceInfoDetail::RelationTypeList> getRelationTypeList() { DARABONBA_PTR_GET(relationTypeList_, vector<TraceInfoDetail::RelationTypeList>) };
      inline TraceInfoDetail& setRelationTypeList(const vector<TraceInfoDetail::RelationTypeList> & relationTypeList) { DARABONBA_PTR_SET_VALUE(relationTypeList_, relationTypeList) };
      inline TraceInfoDetail& setRelationTypeList(vector<TraceInfoDetail::RelationTypeList> && relationTypeList) { DARABONBA_PTR_SET_RVALUE(relationTypeList_, relationTypeList) };


      // vertexList Field Functions 
      bool hasVertexList() const { return this->vertexList_ != nullptr;};
      void deleteVertexList() { this->vertexList_ = nullptr;};
      inline const vector<TraceInfoDetail::VertexList> & getVertexList() const { DARABONBA_PTR_GET_CONST(vertexList_, vector<TraceInfoDetail::VertexList>) };
      inline vector<TraceInfoDetail::VertexList> getVertexList() { DARABONBA_PTR_GET(vertexList_, vector<TraceInfoDetail::VertexList>) };
      inline TraceInfoDetail& setVertexList(const vector<TraceInfoDetail::VertexList> & vertexList) { DARABONBA_PTR_SET_VALUE(vertexList_, vertexList) };
      inline TraceInfoDetail& setVertexList(vector<TraceInfoDetail::VertexList> && vertexList) { DARABONBA_PTR_SET_RVALUE(vertexList_, vertexList) };


    protected:
      // An array that consists of the edges of the tracing diagram.
      shared_ptr<vector<TraceInfoDetail::EdgeList>> edgeList_ {};
      // An array that consists of the metadata configurations of the vertex type.
      shared_ptr<vector<TraceInfoDetail::EntityTypeList>> entityTypeList_ {};
      // An array that consists of the metadata configurations of the edge type.
      shared_ptr<vector<TraceInfoDetail::RelationTypeList>> relationTypeList_ {};
      // An array that consists of all vertexes of the tracing diagram.
      shared_ptr<vector<TraceInfoDetail::VertexList>> vertexList_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->success_ == nullptr && this->traceInfoDetail_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeTraceInfoDetailResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline DescribeTraceInfoDetailResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // traceInfoDetail Field Functions 
    bool hasTraceInfoDetail() const { return this->traceInfoDetail_ != nullptr;};
    void deleteTraceInfoDetail() { this->traceInfoDetail_ = nullptr;};
    inline const DescribeTraceInfoDetailResponseBody::TraceInfoDetail & getTraceInfoDetail() const { DARABONBA_PTR_GET_CONST(traceInfoDetail_, DescribeTraceInfoDetailResponseBody::TraceInfoDetail) };
    inline DescribeTraceInfoDetailResponseBody::TraceInfoDetail getTraceInfoDetail() { DARABONBA_PTR_GET(traceInfoDetail_, DescribeTraceInfoDetailResponseBody::TraceInfoDetail) };
    inline DescribeTraceInfoDetailResponseBody& setTraceInfoDetail(const DescribeTraceInfoDetailResponseBody::TraceInfoDetail & traceInfoDetail) { DARABONBA_PTR_SET_VALUE(traceInfoDetail_, traceInfoDetail) };
    inline DescribeTraceInfoDetailResponseBody& setTraceInfoDetail(DescribeTraceInfoDetailResponseBody::TraceInfoDetail && traceInfoDetail) { DARABONBA_PTR_SET_RVALUE(traceInfoDetail_, traceInfoDetail) };


  protected:
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful. Valid values:
    // 
    // *   **true**: The request was successful.
    // *   **false**: The request failed.
    shared_ptr<bool> success_ {};
    // The details of the tracing diagram.
    shared_ptr<DescribeTraceInfoDetailResponseBody::TraceInfoDetail> traceInfoDetail_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
