// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTNODEDOWNSTREAMREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTNODEDOWNSTREAMREQUEST_HPP_
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
  class ListNodeDownStreamRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListNodeDownStreamRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Env, env_);
      DARABONBA_PTR_TO_JSON(ListQuery, listQuery_);
      DARABONBA_PTR_TO_JSON(OpTenantId, opTenantId_);
    };
    friend void from_json(const Darabonba::Json& j, ListNodeDownStreamRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Env, env_);
      DARABONBA_PTR_FROM_JSON(ListQuery, listQuery_);
      DARABONBA_PTR_FROM_JSON(OpTenantId, opTenantId_);
    };
    ListNodeDownStreamRequest() = default ;
    ListNodeDownStreamRequest(const ListNodeDownStreamRequest &) = default ;
    ListNodeDownStreamRequest(ListNodeDownStreamRequest &&) = default ;
    ListNodeDownStreamRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListNodeDownStreamRequest() = default ;
    ListNodeDownStreamRequest& operator=(const ListNodeDownStreamRequest &) = default ;
    ListNodeDownStreamRequest& operator=(ListNodeDownStreamRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ListQuery : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ListQuery& obj) { 
        DARABONBA_PTR_TO_JSON(DownStreamDepth, downStreamDepth_);
        DARABONBA_PTR_TO_JSON(FilterList, filterList_);
        DARABONBA_PTR_TO_JSON(NodeIdList, nodeIdList_);
        DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
      };
      friend void from_json(const Darabonba::Json& j, ListQuery& obj) { 
        DARABONBA_PTR_FROM_JSON(DownStreamDepth, downStreamDepth_);
        DARABONBA_PTR_FROM_JSON(FilterList, filterList_);
        DARABONBA_PTR_FROM_JSON(NodeIdList, nodeIdList_);
        DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
      };
      ListQuery() = default ;
      ListQuery(const ListQuery &) = default ;
      ListQuery(ListQuery &&) = default ;
      ListQuery(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ListQuery() = default ;
      ListQuery& operator=(const ListQuery &) = default ;
      ListQuery& operator=(ListQuery &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class NodeIdList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const NodeIdList& obj) { 
          DARABONBA_PTR_TO_JSON(FieldIdList, fieldIdList_);
          DARABONBA_PTR_TO_JSON(Id, id_);
        };
        friend void from_json(const Darabonba::Json& j, NodeIdList& obj) { 
          DARABONBA_PTR_FROM_JSON(FieldIdList, fieldIdList_);
          DARABONBA_PTR_FROM_JSON(Id, id_);
        };
        NodeIdList() = default ;
        NodeIdList(const NodeIdList &) = default ;
        NodeIdList(NodeIdList &&) = default ;
        NodeIdList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~NodeIdList() = default ;
        NodeIdList& operator=(const NodeIdList &) = default ;
        NodeIdList& operator=(NodeIdList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->fieldIdList_ == nullptr
        && this->id_ == nullptr; };
        // fieldIdList Field Functions 
        bool hasFieldIdList() const { return this->fieldIdList_ != nullptr;};
        void deleteFieldIdList() { this->fieldIdList_ = nullptr;};
        inline const vector<string> & getFieldIdList() const { DARABONBA_PTR_GET_CONST(fieldIdList_, vector<string>) };
        inline vector<string> getFieldIdList() { DARABONBA_PTR_GET(fieldIdList_, vector<string>) };
        inline NodeIdList& setFieldIdList(const vector<string> & fieldIdList) { DARABONBA_PTR_SET_VALUE(fieldIdList_, fieldIdList) };
        inline NodeIdList& setFieldIdList(vector<string> && fieldIdList) { DARABONBA_PTR_SET_RVALUE(fieldIdList_, fieldIdList) };


        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
        inline NodeIdList& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      protected:
        shared_ptr<vector<string>> fieldIdList_ {};
        shared_ptr<string> id_ {};
      };

      class FilterList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const FilterList& obj) { 
          DARABONBA_PTR_TO_JSON(Exclude, exclude_);
          DARABONBA_PTR_TO_JSON(Key, key_);
          DARABONBA_PTR_TO_JSON(ValueList, valueList_);
        };
        friend void from_json(const Darabonba::Json& j, FilterList& obj) { 
          DARABONBA_PTR_FROM_JSON(Exclude, exclude_);
          DARABONBA_PTR_FROM_JSON(Key, key_);
          DARABONBA_PTR_FROM_JSON(ValueList, valueList_);
        };
        FilterList() = default ;
        FilterList(const FilterList &) = default ;
        FilterList(FilterList &&) = default ;
        FilterList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~FilterList() = default ;
        FilterList& operator=(const FilterList &) = default ;
        FilterList& operator=(FilterList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->exclude_ == nullptr
        && this->key_ == nullptr && this->valueList_ == nullptr; };
        // exclude Field Functions 
        bool hasExclude() const { return this->exclude_ != nullptr;};
        void deleteExclude() { this->exclude_ = nullptr;};
        inline bool getExclude() const { DARABONBA_PTR_GET_DEFAULT(exclude_, false) };
        inline FilterList& setExclude(bool exclude) { DARABONBA_PTR_SET_VALUE(exclude_, exclude) };


        // key Field Functions 
        bool hasKey() const { return this->key_ != nullptr;};
        void deleteKey() { this->key_ = nullptr;};
        inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
        inline FilterList& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


        // valueList Field Functions 
        bool hasValueList() const { return this->valueList_ != nullptr;};
        void deleteValueList() { this->valueList_ = nullptr;};
        inline const vector<string> & getValueList() const { DARABONBA_PTR_GET_CONST(valueList_, vector<string>) };
        inline vector<string> getValueList() { DARABONBA_PTR_GET(valueList_, vector<string>) };
        inline FilterList& setValueList(const vector<string> & valueList) { DARABONBA_PTR_SET_VALUE(valueList_, valueList) };
        inline FilterList& setValueList(vector<string> && valueList) { DARABONBA_PTR_SET_RVALUE(valueList_, valueList) };


      protected:
        shared_ptr<bool> exclude_ {};
        shared_ptr<string> key_ {};
        shared_ptr<vector<string>> valueList_ {};
      };

      virtual bool empty() const override { return this->downStreamDepth_ == nullptr
        && this->filterList_ == nullptr && this->nodeIdList_ == nullptr && this->projectId_ == nullptr; };
      // downStreamDepth Field Functions 
      bool hasDownStreamDepth() const { return this->downStreamDepth_ != nullptr;};
      void deleteDownStreamDepth() { this->downStreamDepth_ = nullptr;};
      inline int32_t getDownStreamDepth() const { DARABONBA_PTR_GET_DEFAULT(downStreamDepth_, 0) };
      inline ListQuery& setDownStreamDepth(int32_t downStreamDepth) { DARABONBA_PTR_SET_VALUE(downStreamDepth_, downStreamDepth) };


      // filterList Field Functions 
      bool hasFilterList() const { return this->filterList_ != nullptr;};
      void deleteFilterList() { this->filterList_ = nullptr;};
      inline const vector<ListQuery::FilterList> & getFilterList() const { DARABONBA_PTR_GET_CONST(filterList_, vector<ListQuery::FilterList>) };
      inline vector<ListQuery::FilterList> getFilterList() { DARABONBA_PTR_GET(filterList_, vector<ListQuery::FilterList>) };
      inline ListQuery& setFilterList(const vector<ListQuery::FilterList> & filterList) { DARABONBA_PTR_SET_VALUE(filterList_, filterList) };
      inline ListQuery& setFilterList(vector<ListQuery::FilterList> && filterList) { DARABONBA_PTR_SET_RVALUE(filterList_, filterList) };


      // nodeIdList Field Functions 
      bool hasNodeIdList() const { return this->nodeIdList_ != nullptr;};
      void deleteNodeIdList() { this->nodeIdList_ = nullptr;};
      inline const vector<ListQuery::NodeIdList> & getNodeIdList() const { DARABONBA_PTR_GET_CONST(nodeIdList_, vector<ListQuery::NodeIdList>) };
      inline vector<ListQuery::NodeIdList> getNodeIdList() { DARABONBA_PTR_GET(nodeIdList_, vector<ListQuery::NodeIdList>) };
      inline ListQuery& setNodeIdList(const vector<ListQuery::NodeIdList> & nodeIdList) { DARABONBA_PTR_SET_VALUE(nodeIdList_, nodeIdList) };
      inline ListQuery& setNodeIdList(vector<ListQuery::NodeIdList> && nodeIdList) { DARABONBA_PTR_SET_RVALUE(nodeIdList_, nodeIdList) };


      // projectId Field Functions 
      bool hasProjectId() const { return this->projectId_ != nullptr;};
      void deleteProjectId() { this->projectId_ = nullptr;};
      inline int64_t getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
      inline ListQuery& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    protected:
      shared_ptr<int32_t> downStreamDepth_ {};
      shared_ptr<vector<ListQuery::FilterList>> filterList_ {};
      // This parameter is required.
      shared_ptr<vector<ListQuery::NodeIdList>> nodeIdList_ {};
      shared_ptr<int64_t> projectId_ {};
    };

    virtual bool empty() const override { return this->env_ == nullptr
        && this->listQuery_ == nullptr && this->opTenantId_ == nullptr; };
    // env Field Functions 
    bool hasEnv() const { return this->env_ != nullptr;};
    void deleteEnv() { this->env_ = nullptr;};
    inline string getEnv() const { DARABONBA_PTR_GET_DEFAULT(env_, "") };
    inline ListNodeDownStreamRequest& setEnv(string env) { DARABONBA_PTR_SET_VALUE(env_, env) };


    // listQuery Field Functions 
    bool hasListQuery() const { return this->listQuery_ != nullptr;};
    void deleteListQuery() { this->listQuery_ = nullptr;};
    inline const ListNodeDownStreamRequest::ListQuery & getListQuery() const { DARABONBA_PTR_GET_CONST(listQuery_, ListNodeDownStreamRequest::ListQuery) };
    inline ListNodeDownStreamRequest::ListQuery getListQuery() { DARABONBA_PTR_GET(listQuery_, ListNodeDownStreamRequest::ListQuery) };
    inline ListNodeDownStreamRequest& setListQuery(const ListNodeDownStreamRequest::ListQuery & listQuery) { DARABONBA_PTR_SET_VALUE(listQuery_, listQuery) };
    inline ListNodeDownStreamRequest& setListQuery(ListNodeDownStreamRequest::ListQuery && listQuery) { DARABONBA_PTR_SET_RVALUE(listQuery_, listQuery) };


    // opTenantId Field Functions 
    bool hasOpTenantId() const { return this->opTenantId_ != nullptr;};
    void deleteOpTenantId() { this->opTenantId_ = nullptr;};
    inline int64_t getOpTenantId() const { DARABONBA_PTR_GET_DEFAULT(opTenantId_, 0L) };
    inline ListNodeDownStreamRequest& setOpTenantId(int64_t opTenantId) { DARABONBA_PTR_SET_VALUE(opTenantId_, opTenantId) };


  protected:
    shared_ptr<string> env_ {};
    // This parameter is required.
    shared_ptr<ListNodeDownStreamRequest::ListQuery> listQuery_ {};
    // This parameter is required.
    shared_ptr<int64_t> opTenantId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
