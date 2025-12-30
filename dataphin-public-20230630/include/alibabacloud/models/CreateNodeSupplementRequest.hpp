// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATENODESUPPLEMENTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATENODESUPPLEMENTREQUEST_HPP_
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
  class CreateNodeSupplementRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateNodeSupplementRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CreateCommand, createCommand_);
      DARABONBA_PTR_TO_JSON(Env, env_);
      DARABONBA_PTR_TO_JSON(OpTenantId, opTenantId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateNodeSupplementRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateCommand, createCommand_);
      DARABONBA_PTR_FROM_JSON(Env, env_);
      DARABONBA_PTR_FROM_JSON(OpTenantId, opTenantId_);
    };
    CreateNodeSupplementRequest() = default ;
    CreateNodeSupplementRequest(const CreateNodeSupplementRequest &) = default ;
    CreateNodeSupplementRequest(CreateNodeSupplementRequest &&) = default ;
    CreateNodeSupplementRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateNodeSupplementRequest() = default ;
    CreateNodeSupplementRequest& operator=(const CreateNodeSupplementRequest &) = default ;
    CreateNodeSupplementRequest& operator=(CreateNodeSupplementRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class CreateCommand : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const CreateCommand& obj) { 
        DARABONBA_PTR_TO_JSON(ContainAllDownStream, containAllDownStream_);
        DARABONBA_PTR_TO_JSON(DownStreamNodeIdList, downStreamNodeIdList_);
        DARABONBA_PTR_TO_JSON(EndBizDate, endBizDate_);
        DARABONBA_PTR_TO_JSON(FilterList, filterList_);
        DARABONBA_PTR_TO_JSON(GlobalParamList, globalParamList_);
        DARABONBA_PTR_TO_JSON(MaxDueTime, maxDueTime_);
        DARABONBA_PTR_TO_JSON(MinDueTime, minDueTime_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(NodeIdList, nodeIdList_);
        DARABONBA_PTR_TO_JSON(NodeParamsList, nodeParamsList_);
        DARABONBA_PTR_TO_JSON(Parallelism, parallelism_);
        DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
        DARABONBA_PTR_TO_JSON(StartBizDate, startBizDate_);
      };
      friend void from_json(const Darabonba::Json& j, CreateCommand& obj) { 
        DARABONBA_PTR_FROM_JSON(ContainAllDownStream, containAllDownStream_);
        DARABONBA_PTR_FROM_JSON(DownStreamNodeIdList, downStreamNodeIdList_);
        DARABONBA_PTR_FROM_JSON(EndBizDate, endBizDate_);
        DARABONBA_PTR_FROM_JSON(FilterList, filterList_);
        DARABONBA_PTR_FROM_JSON(GlobalParamList, globalParamList_);
        DARABONBA_PTR_FROM_JSON(MaxDueTime, maxDueTime_);
        DARABONBA_PTR_FROM_JSON(MinDueTime, minDueTime_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(NodeIdList, nodeIdList_);
        DARABONBA_PTR_FROM_JSON(NodeParamsList, nodeParamsList_);
        DARABONBA_PTR_FROM_JSON(Parallelism, parallelism_);
        DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
        DARABONBA_PTR_FROM_JSON(StartBizDate, startBizDate_);
      };
      CreateCommand() = default ;
      CreateCommand(const CreateCommand &) = default ;
      CreateCommand(CreateCommand &&) = default ;
      CreateCommand(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~CreateCommand() = default ;
      CreateCommand& operator=(const CreateCommand &) = default ;
      CreateCommand& operator=(CreateCommand &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class NodeParamsList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const NodeParamsList& obj) { 
          DARABONBA_PTR_TO_JSON(NodeId, nodeId_);
          DARABONBA_PTR_TO_JSON(ParamList, paramList_);
        };
        friend void from_json(const Darabonba::Json& j, NodeParamsList& obj) { 
          DARABONBA_PTR_FROM_JSON(NodeId, nodeId_);
          DARABONBA_PTR_FROM_JSON(ParamList, paramList_);
        };
        NodeParamsList() = default ;
        NodeParamsList(const NodeParamsList &) = default ;
        NodeParamsList(NodeParamsList &&) = default ;
        NodeParamsList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~NodeParamsList() = default ;
        NodeParamsList& operator=(const NodeParamsList &) = default ;
        NodeParamsList& operator=(NodeParamsList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class ParamList : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const ParamList& obj) { 
            DARABONBA_PTR_TO_JSON(Key, key_);
            DARABONBA_PTR_TO_JSON(Value, value_);
          };
          friend void from_json(const Darabonba::Json& j, ParamList& obj) { 
            DARABONBA_PTR_FROM_JSON(Key, key_);
            DARABONBA_PTR_FROM_JSON(Value, value_);
          };
          ParamList() = default ;
          ParamList(const ParamList &) = default ;
          ParamList(ParamList &&) = default ;
          ParamList(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~ParamList() = default ;
          ParamList& operator=(const ParamList &) = default ;
          ParamList& operator=(ParamList &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->key_ == nullptr
        && this->value_ == nullptr; };
          // key Field Functions 
          bool hasKey() const { return this->key_ != nullptr;};
          void deleteKey() { this->key_ = nullptr;};
          inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
          inline ParamList& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


          // value Field Functions 
          bool hasValue() const { return this->value_ != nullptr;};
          void deleteValue() { this->value_ = nullptr;};
          inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
          inline ParamList& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


        protected:
          shared_ptr<string> key_ {};
          shared_ptr<string> value_ {};
        };

        virtual bool empty() const override { return this->nodeId_ == nullptr
        && this->paramList_ == nullptr; };
        // nodeId Field Functions 
        bool hasNodeId() const { return this->nodeId_ != nullptr;};
        void deleteNodeId() { this->nodeId_ = nullptr;};
        inline string getNodeId() const { DARABONBA_PTR_GET_DEFAULT(nodeId_, "") };
        inline NodeParamsList& setNodeId(string nodeId) { DARABONBA_PTR_SET_VALUE(nodeId_, nodeId) };


        // paramList Field Functions 
        bool hasParamList() const { return this->paramList_ != nullptr;};
        void deleteParamList() { this->paramList_ = nullptr;};
        inline const vector<NodeParamsList::ParamList> & getParamList() const { DARABONBA_PTR_GET_CONST(paramList_, vector<NodeParamsList::ParamList>) };
        inline vector<NodeParamsList::ParamList> getParamList() { DARABONBA_PTR_GET(paramList_, vector<NodeParamsList::ParamList>) };
        inline NodeParamsList& setParamList(const vector<NodeParamsList::ParamList> & paramList) { DARABONBA_PTR_SET_VALUE(paramList_, paramList) };
        inline NodeParamsList& setParamList(vector<NodeParamsList::ParamList> && paramList) { DARABONBA_PTR_SET_RVALUE(paramList_, paramList) };


      protected:
        shared_ptr<string> nodeId_ {};
        shared_ptr<vector<NodeParamsList::ParamList>> paramList_ {};
      };

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
        // This parameter is required.
        shared_ptr<string> id_ {};
      };

      class GlobalParamList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const GlobalParamList& obj) { 
          DARABONBA_PTR_TO_JSON(Key, key_);
          DARABONBA_PTR_TO_JSON(Value, value_);
        };
        friend void from_json(const Darabonba::Json& j, GlobalParamList& obj) { 
          DARABONBA_PTR_FROM_JSON(Key, key_);
          DARABONBA_PTR_FROM_JSON(Value, value_);
        };
        GlobalParamList() = default ;
        GlobalParamList(const GlobalParamList &) = default ;
        GlobalParamList(GlobalParamList &&) = default ;
        GlobalParamList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~GlobalParamList() = default ;
        GlobalParamList& operator=(const GlobalParamList &) = default ;
        GlobalParamList& operator=(GlobalParamList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->key_ == nullptr
        && this->value_ == nullptr; };
        // key Field Functions 
        bool hasKey() const { return this->key_ != nullptr;};
        void deleteKey() { this->key_ = nullptr;};
        inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
        inline GlobalParamList& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


        // value Field Functions 
        bool hasValue() const { return this->value_ != nullptr;};
        void deleteValue() { this->value_ = nullptr;};
        inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
        inline GlobalParamList& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


      protected:
        shared_ptr<string> key_ {};
        shared_ptr<string> value_ {};
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

      class DownStreamNodeIdList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const DownStreamNodeIdList& obj) { 
          DARABONBA_PTR_TO_JSON(FieldIdList, fieldIdList_);
          DARABONBA_PTR_TO_JSON(Id, id_);
        };
        friend void from_json(const Darabonba::Json& j, DownStreamNodeIdList& obj) { 
          DARABONBA_PTR_FROM_JSON(FieldIdList, fieldIdList_);
          DARABONBA_PTR_FROM_JSON(Id, id_);
        };
        DownStreamNodeIdList() = default ;
        DownStreamNodeIdList(const DownStreamNodeIdList &) = default ;
        DownStreamNodeIdList(DownStreamNodeIdList &&) = default ;
        DownStreamNodeIdList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~DownStreamNodeIdList() = default ;
        DownStreamNodeIdList& operator=(const DownStreamNodeIdList &) = default ;
        DownStreamNodeIdList& operator=(DownStreamNodeIdList &&) = default ;
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
        inline DownStreamNodeIdList& setFieldIdList(const vector<string> & fieldIdList) { DARABONBA_PTR_SET_VALUE(fieldIdList_, fieldIdList) };
        inline DownStreamNodeIdList& setFieldIdList(vector<string> && fieldIdList) { DARABONBA_PTR_SET_RVALUE(fieldIdList_, fieldIdList) };


        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
        inline DownStreamNodeIdList& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      protected:
        shared_ptr<vector<string>> fieldIdList_ {};
        shared_ptr<string> id_ {};
      };

      virtual bool empty() const override { return this->containAllDownStream_ == nullptr
        && this->downStreamNodeIdList_ == nullptr && this->endBizDate_ == nullptr && this->filterList_ == nullptr && this->globalParamList_ == nullptr && this->maxDueTime_ == nullptr
        && this->minDueTime_ == nullptr && this->name_ == nullptr && this->nodeIdList_ == nullptr && this->nodeParamsList_ == nullptr && this->parallelism_ == nullptr
        && this->projectId_ == nullptr && this->startBizDate_ == nullptr; };
      // containAllDownStream Field Functions 
      bool hasContainAllDownStream() const { return this->containAllDownStream_ != nullptr;};
      void deleteContainAllDownStream() { this->containAllDownStream_ = nullptr;};
      inline bool getContainAllDownStream() const { DARABONBA_PTR_GET_DEFAULT(containAllDownStream_, false) };
      inline CreateCommand& setContainAllDownStream(bool containAllDownStream) { DARABONBA_PTR_SET_VALUE(containAllDownStream_, containAllDownStream) };


      // downStreamNodeIdList Field Functions 
      bool hasDownStreamNodeIdList() const { return this->downStreamNodeIdList_ != nullptr;};
      void deleteDownStreamNodeIdList() { this->downStreamNodeIdList_ = nullptr;};
      inline const vector<CreateCommand::DownStreamNodeIdList> & getDownStreamNodeIdList() const { DARABONBA_PTR_GET_CONST(downStreamNodeIdList_, vector<CreateCommand::DownStreamNodeIdList>) };
      inline vector<CreateCommand::DownStreamNodeIdList> getDownStreamNodeIdList() { DARABONBA_PTR_GET(downStreamNodeIdList_, vector<CreateCommand::DownStreamNodeIdList>) };
      inline CreateCommand& setDownStreamNodeIdList(const vector<CreateCommand::DownStreamNodeIdList> & downStreamNodeIdList) { DARABONBA_PTR_SET_VALUE(downStreamNodeIdList_, downStreamNodeIdList) };
      inline CreateCommand& setDownStreamNodeIdList(vector<CreateCommand::DownStreamNodeIdList> && downStreamNodeIdList) { DARABONBA_PTR_SET_RVALUE(downStreamNodeIdList_, downStreamNodeIdList) };


      // endBizDate Field Functions 
      bool hasEndBizDate() const { return this->endBizDate_ != nullptr;};
      void deleteEndBizDate() { this->endBizDate_ = nullptr;};
      inline string getEndBizDate() const { DARABONBA_PTR_GET_DEFAULT(endBizDate_, "") };
      inline CreateCommand& setEndBizDate(string endBizDate) { DARABONBA_PTR_SET_VALUE(endBizDate_, endBizDate) };


      // filterList Field Functions 
      bool hasFilterList() const { return this->filterList_ != nullptr;};
      void deleteFilterList() { this->filterList_ = nullptr;};
      inline const vector<CreateCommand::FilterList> & getFilterList() const { DARABONBA_PTR_GET_CONST(filterList_, vector<CreateCommand::FilterList>) };
      inline vector<CreateCommand::FilterList> getFilterList() { DARABONBA_PTR_GET(filterList_, vector<CreateCommand::FilterList>) };
      inline CreateCommand& setFilterList(const vector<CreateCommand::FilterList> & filterList) { DARABONBA_PTR_SET_VALUE(filterList_, filterList) };
      inline CreateCommand& setFilterList(vector<CreateCommand::FilterList> && filterList) { DARABONBA_PTR_SET_RVALUE(filterList_, filterList) };


      // globalParamList Field Functions 
      bool hasGlobalParamList() const { return this->globalParamList_ != nullptr;};
      void deleteGlobalParamList() { this->globalParamList_ = nullptr;};
      inline const vector<CreateCommand::GlobalParamList> & getGlobalParamList() const { DARABONBA_PTR_GET_CONST(globalParamList_, vector<CreateCommand::GlobalParamList>) };
      inline vector<CreateCommand::GlobalParamList> getGlobalParamList() { DARABONBA_PTR_GET(globalParamList_, vector<CreateCommand::GlobalParamList>) };
      inline CreateCommand& setGlobalParamList(const vector<CreateCommand::GlobalParamList> & globalParamList) { DARABONBA_PTR_SET_VALUE(globalParamList_, globalParamList) };
      inline CreateCommand& setGlobalParamList(vector<CreateCommand::GlobalParamList> && globalParamList) { DARABONBA_PTR_SET_RVALUE(globalParamList_, globalParamList) };


      // maxDueTime Field Functions 
      bool hasMaxDueTime() const { return this->maxDueTime_ != nullptr;};
      void deleteMaxDueTime() { this->maxDueTime_ = nullptr;};
      inline string getMaxDueTime() const { DARABONBA_PTR_GET_DEFAULT(maxDueTime_, "") };
      inline CreateCommand& setMaxDueTime(string maxDueTime) { DARABONBA_PTR_SET_VALUE(maxDueTime_, maxDueTime) };


      // minDueTime Field Functions 
      bool hasMinDueTime() const { return this->minDueTime_ != nullptr;};
      void deleteMinDueTime() { this->minDueTime_ = nullptr;};
      inline string getMinDueTime() const { DARABONBA_PTR_GET_DEFAULT(minDueTime_, "") };
      inline CreateCommand& setMinDueTime(string minDueTime) { DARABONBA_PTR_SET_VALUE(minDueTime_, minDueTime) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline CreateCommand& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // nodeIdList Field Functions 
      bool hasNodeIdList() const { return this->nodeIdList_ != nullptr;};
      void deleteNodeIdList() { this->nodeIdList_ = nullptr;};
      inline const vector<CreateCommand::NodeIdList> & getNodeIdList() const { DARABONBA_PTR_GET_CONST(nodeIdList_, vector<CreateCommand::NodeIdList>) };
      inline vector<CreateCommand::NodeIdList> getNodeIdList() { DARABONBA_PTR_GET(nodeIdList_, vector<CreateCommand::NodeIdList>) };
      inline CreateCommand& setNodeIdList(const vector<CreateCommand::NodeIdList> & nodeIdList) { DARABONBA_PTR_SET_VALUE(nodeIdList_, nodeIdList) };
      inline CreateCommand& setNodeIdList(vector<CreateCommand::NodeIdList> && nodeIdList) { DARABONBA_PTR_SET_RVALUE(nodeIdList_, nodeIdList) };


      // nodeParamsList Field Functions 
      bool hasNodeParamsList() const { return this->nodeParamsList_ != nullptr;};
      void deleteNodeParamsList() { this->nodeParamsList_ = nullptr;};
      inline const vector<CreateCommand::NodeParamsList> & getNodeParamsList() const { DARABONBA_PTR_GET_CONST(nodeParamsList_, vector<CreateCommand::NodeParamsList>) };
      inline vector<CreateCommand::NodeParamsList> getNodeParamsList() { DARABONBA_PTR_GET(nodeParamsList_, vector<CreateCommand::NodeParamsList>) };
      inline CreateCommand& setNodeParamsList(const vector<CreateCommand::NodeParamsList> & nodeParamsList) { DARABONBA_PTR_SET_VALUE(nodeParamsList_, nodeParamsList) };
      inline CreateCommand& setNodeParamsList(vector<CreateCommand::NodeParamsList> && nodeParamsList) { DARABONBA_PTR_SET_RVALUE(nodeParamsList_, nodeParamsList) };


      // parallelism Field Functions 
      bool hasParallelism() const { return this->parallelism_ != nullptr;};
      void deleteParallelism() { this->parallelism_ = nullptr;};
      inline int32_t getParallelism() const { DARABONBA_PTR_GET_DEFAULT(parallelism_, 0) };
      inline CreateCommand& setParallelism(int32_t parallelism) { DARABONBA_PTR_SET_VALUE(parallelism_, parallelism) };


      // projectId Field Functions 
      bool hasProjectId() const { return this->projectId_ != nullptr;};
      void deleteProjectId() { this->projectId_ = nullptr;};
      inline int64_t getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
      inline CreateCommand& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


      // startBizDate Field Functions 
      bool hasStartBizDate() const { return this->startBizDate_ != nullptr;};
      void deleteStartBizDate() { this->startBizDate_ = nullptr;};
      inline string getStartBizDate() const { DARABONBA_PTR_GET_DEFAULT(startBizDate_, "") };
      inline CreateCommand& setStartBizDate(string startBizDate) { DARABONBA_PTR_SET_VALUE(startBizDate_, startBizDate) };


    protected:
      shared_ptr<bool> containAllDownStream_ {};
      shared_ptr<vector<CreateCommand::DownStreamNodeIdList>> downStreamNodeIdList_ {};
      // This parameter is required.
      shared_ptr<string> endBizDate_ {};
      shared_ptr<vector<CreateCommand::FilterList>> filterList_ {};
      shared_ptr<vector<CreateCommand::GlobalParamList>> globalParamList_ {};
      shared_ptr<string> maxDueTime_ {};
      shared_ptr<string> minDueTime_ {};
      shared_ptr<string> name_ {};
      // This parameter is required.
      shared_ptr<vector<CreateCommand::NodeIdList>> nodeIdList_ {};
      shared_ptr<vector<CreateCommand::NodeParamsList>> nodeParamsList_ {};
      shared_ptr<int32_t> parallelism_ {};
      // This parameter is required.
      shared_ptr<int64_t> projectId_ {};
      // This parameter is required.
      shared_ptr<string> startBizDate_ {};
    };

    virtual bool empty() const override { return this->createCommand_ == nullptr
        && this->env_ == nullptr && this->opTenantId_ == nullptr; };
    // createCommand Field Functions 
    bool hasCreateCommand() const { return this->createCommand_ != nullptr;};
    void deleteCreateCommand() { this->createCommand_ = nullptr;};
    inline const CreateNodeSupplementRequest::CreateCommand & getCreateCommand() const { DARABONBA_PTR_GET_CONST(createCommand_, CreateNodeSupplementRequest::CreateCommand) };
    inline CreateNodeSupplementRequest::CreateCommand getCreateCommand() { DARABONBA_PTR_GET(createCommand_, CreateNodeSupplementRequest::CreateCommand) };
    inline CreateNodeSupplementRequest& setCreateCommand(const CreateNodeSupplementRequest::CreateCommand & createCommand) { DARABONBA_PTR_SET_VALUE(createCommand_, createCommand) };
    inline CreateNodeSupplementRequest& setCreateCommand(CreateNodeSupplementRequest::CreateCommand && createCommand) { DARABONBA_PTR_SET_RVALUE(createCommand_, createCommand) };


    // env Field Functions 
    bool hasEnv() const { return this->env_ != nullptr;};
    void deleteEnv() { this->env_ = nullptr;};
    inline string getEnv() const { DARABONBA_PTR_GET_DEFAULT(env_, "") };
    inline CreateNodeSupplementRequest& setEnv(string env) { DARABONBA_PTR_SET_VALUE(env_, env) };


    // opTenantId Field Functions 
    bool hasOpTenantId() const { return this->opTenantId_ != nullptr;};
    void deleteOpTenantId() { this->opTenantId_ = nullptr;};
    inline int64_t getOpTenantId() const { DARABONBA_PTR_GET_DEFAULT(opTenantId_, 0L) };
    inline CreateNodeSupplementRequest& setOpTenantId(int64_t opTenantId) { DARABONBA_PTR_SET_VALUE(opTenantId_, opTenantId) };


  protected:
    // This parameter is required.
    shared_ptr<CreateNodeSupplementRequest::CreateCommand> createCommand_ {};
    shared_ptr<string> env_ {};
    // This parameter is required.
    shared_ptr<int64_t> opTenantId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
