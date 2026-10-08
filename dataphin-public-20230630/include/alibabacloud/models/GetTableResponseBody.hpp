// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTABLERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETTABLERESPONSEBODY_HPP_
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
  class GetTableResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTableResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetTableResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetTableResponseBody() = default ;
    GetTableResponseBody(const GetTableResponseBody &) = default ;
    GetTableResponseBody(GetTableResponseBody &&) = default ;
    GetTableResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTableResponseBody() = default ;
    GetTableResponseBody& operator=(const GetTableResponseBody &) = default ;
    GetTableResponseBody& operator=(GetTableResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(AssetTags, assetTags_);
        DARABONBA_PTR_TO_JSON(BizUnitId, bizUnitId_);
        DARABONBA_PTR_TO_JSON(BizUnitName, bizUnitName_);
        DARABONBA_PTR_TO_JSON(Comment, comment_);
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(Creator, creator_);
        DARABONBA_PTR_TO_JSON(DataDomainId, dataDomainId_);
        DARABONBA_PTR_TO_JSON(DataDomainName, dataDomainName_);
        DARABONBA_PTR_TO_JSON(DataSourceId, dataSourceId_);
        DARABONBA_PTR_TO_JSON(DisplayName, displayName_);
        DARABONBA_PTR_TO_JSON(Env, env_);
        DARABONBA_PTR_TO_JSON(FileId, fileId_);
        DARABONBA_PTR_TO_JSON(Guid, guid_);
        DARABONBA_PTR_TO_JSON(Instructions, instructions_);
        DARABONBA_PTR_TO_JSON(IsBasicMode, isBasicMode_);
        DARABONBA_PTR_TO_JSON(IsPartitionTable, isPartitionTable_);
        DARABONBA_PTR_TO_JSON(LastDdlTime, lastDdlTime_);
        DARABONBA_PTR_TO_JSON(LastDmlTime, lastDmlTime_);
        DARABONBA_PTR_TO_JSON(LastQueryTime, lastQueryTime_);
        DARABONBA_PTR_TO_JSON(LifeCycle, lifeCycle_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(NodeIds, nodeIds_);
        DARABONBA_PTR_TO_JSON(Owner, owner_);
        DARABONBA_PTR_TO_JSON(ParentModelId, parentModelId_);
        DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
        DARABONBA_PTR_TO_JSON(ProjectName, projectName_);
        DARABONBA_PTR_TO_JSON(SecurityLevel, securityLevel_);
        DARABONBA_PTR_TO_JSON(SecurityLevelAbbreviation, securityLevelAbbreviation_);
        DARABONBA_PTR_TO_JSON(SecurityLevelName, securityLevelName_);
        DARABONBA_PTR_TO_JSON(SimpleNodeInfos, simpleNodeInfos_);
        DARABONBA_PTR_TO_JSON(StorageType, storageType_);
        DARABONBA_PTR_TO_JSON(StreamTableConfig, streamTableConfig_);
        DARABONBA_PTR_TO_JSON(TableSizeInBytes, tableSizeInBytes_);
        DARABONBA_PTR_TO_JSON(VisitCount30d, visitCount30d_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(AssetTags, assetTags_);
        DARABONBA_PTR_FROM_JSON(BizUnitId, bizUnitId_);
        DARABONBA_PTR_FROM_JSON(BizUnitName, bizUnitName_);
        DARABONBA_PTR_FROM_JSON(Comment, comment_);
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(Creator, creator_);
        DARABONBA_PTR_FROM_JSON(DataDomainId, dataDomainId_);
        DARABONBA_PTR_FROM_JSON(DataDomainName, dataDomainName_);
        DARABONBA_PTR_FROM_JSON(DataSourceId, dataSourceId_);
        DARABONBA_PTR_FROM_JSON(DisplayName, displayName_);
        DARABONBA_PTR_FROM_JSON(Env, env_);
        DARABONBA_PTR_FROM_JSON(FileId, fileId_);
        DARABONBA_PTR_FROM_JSON(Guid, guid_);
        DARABONBA_PTR_FROM_JSON(Instructions, instructions_);
        DARABONBA_PTR_FROM_JSON(IsBasicMode, isBasicMode_);
        DARABONBA_PTR_FROM_JSON(IsPartitionTable, isPartitionTable_);
        DARABONBA_PTR_FROM_JSON(LastDdlTime, lastDdlTime_);
        DARABONBA_PTR_FROM_JSON(LastDmlTime, lastDmlTime_);
        DARABONBA_PTR_FROM_JSON(LastQueryTime, lastQueryTime_);
        DARABONBA_PTR_FROM_JSON(LifeCycle, lifeCycle_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(NodeIds, nodeIds_);
        DARABONBA_PTR_FROM_JSON(Owner, owner_);
        DARABONBA_PTR_FROM_JSON(ParentModelId, parentModelId_);
        DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
        DARABONBA_PTR_FROM_JSON(ProjectName, projectName_);
        DARABONBA_PTR_FROM_JSON(SecurityLevel, securityLevel_);
        DARABONBA_PTR_FROM_JSON(SecurityLevelAbbreviation, securityLevelAbbreviation_);
        DARABONBA_PTR_FROM_JSON(SecurityLevelName, securityLevelName_);
        DARABONBA_PTR_FROM_JSON(SimpleNodeInfos, simpleNodeInfos_);
        DARABONBA_PTR_FROM_JSON(StorageType, storageType_);
        DARABONBA_PTR_FROM_JSON(StreamTableConfig, streamTableConfig_);
        DARABONBA_PTR_FROM_JSON(TableSizeInBytes, tableSizeInBytes_);
        DARABONBA_PTR_FROM_JSON(VisitCount30d, visitCount30d_);
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
      class StreamTableConfig : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const StreamTableConfig& obj) { 
          DARABONBA_PTR_TO_JSON(Key, key_);
          DARABONBA_PTR_TO_JSON(Value, value_);
        };
        friend void from_json(const Darabonba::Json& j, StreamTableConfig& obj) { 
          DARABONBA_PTR_FROM_JSON(Key, key_);
          DARABONBA_PTR_FROM_JSON(Value, value_);
        };
        StreamTableConfig() = default ;
        StreamTableConfig(const StreamTableConfig &) = default ;
        StreamTableConfig(StreamTableConfig &&) = default ;
        StreamTableConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~StreamTableConfig() = default ;
        StreamTableConfig& operator=(const StreamTableConfig &) = default ;
        StreamTableConfig& operator=(StreamTableConfig &&) = default ;
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
        inline StreamTableConfig& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


        // value Field Functions 
        bool hasValue() const { return this->value_ != nullptr;};
        void deleteValue() { this->value_ = nullptr;};
        inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
        inline StreamTableConfig& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


      protected:
        shared_ptr<string> key_ {};
        shared_ptr<string> value_ {};
      };

      class SimpleNodeInfos : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const SimpleNodeInfos& obj) { 
          DARABONBA_PTR_TO_JSON(BizUnit, bizUnit_);
          DARABONBA_PTR_TO_JSON(Env, env_);
          DARABONBA_PTR_TO_JSON(NodeId, nodeId_);
          DARABONBA_PTR_TO_JSON(NodeName, nodeName_);
          DARABONBA_PTR_TO_JSON(NodeScheduleType, nodeScheduleType_);
          DARABONBA_PTR_TO_JSON(Owners, owners_);
          DARABONBA_PTR_TO_JSON(Project, project_);
          DARABONBA_PTR_TO_JSON(SubBizType, subBizType_);
        };
        friend void from_json(const Darabonba::Json& j, SimpleNodeInfos& obj) { 
          DARABONBA_PTR_FROM_JSON(BizUnit, bizUnit_);
          DARABONBA_PTR_FROM_JSON(Env, env_);
          DARABONBA_PTR_FROM_JSON(NodeId, nodeId_);
          DARABONBA_PTR_FROM_JSON(NodeName, nodeName_);
          DARABONBA_PTR_FROM_JSON(NodeScheduleType, nodeScheduleType_);
          DARABONBA_PTR_FROM_JSON(Owners, owners_);
          DARABONBA_PTR_FROM_JSON(Project, project_);
          DARABONBA_PTR_FROM_JSON(SubBizType, subBizType_);
        };
        SimpleNodeInfos() = default ;
        SimpleNodeInfos(const SimpleNodeInfos &) = default ;
        SimpleNodeInfos(SimpleNodeInfos &&) = default ;
        SimpleNodeInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~SimpleNodeInfos() = default ;
        SimpleNodeInfos& operator=(const SimpleNodeInfos &) = default ;
        SimpleNodeInfos& operator=(SimpleNodeInfos &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Project : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Project& obj) { 
            DARABONBA_PTR_TO_JSON(ProjectDisplayName, projectDisplayName_);
            DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
            DARABONBA_PTR_TO_JSON(ProjectName, projectName_);
          };
          friend void from_json(const Darabonba::Json& j, Project& obj) { 
            DARABONBA_PTR_FROM_JSON(ProjectDisplayName, projectDisplayName_);
            DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
            DARABONBA_PTR_FROM_JSON(ProjectName, projectName_);
          };
          Project() = default ;
          Project(const Project &) = default ;
          Project(Project &&) = default ;
          Project(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Project() = default ;
          Project& operator=(const Project &) = default ;
          Project& operator=(Project &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->projectDisplayName_ == nullptr
        && this->projectId_ == nullptr && this->projectName_ == nullptr; };
          // projectDisplayName Field Functions 
          bool hasProjectDisplayName() const { return this->projectDisplayName_ != nullptr;};
          void deleteProjectDisplayName() { this->projectDisplayName_ = nullptr;};
          inline string getProjectDisplayName() const { DARABONBA_PTR_GET_DEFAULT(projectDisplayName_, "") };
          inline Project& setProjectDisplayName(string projectDisplayName) { DARABONBA_PTR_SET_VALUE(projectDisplayName_, projectDisplayName) };


          // projectId Field Functions 
          bool hasProjectId() const { return this->projectId_ != nullptr;};
          void deleteProjectId() { this->projectId_ = nullptr;};
          inline string getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, "") };
          inline Project& setProjectId(string projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


          // projectName Field Functions 
          bool hasProjectName() const { return this->projectName_ != nullptr;};
          void deleteProjectName() { this->projectName_ = nullptr;};
          inline string getProjectName() const { DARABONBA_PTR_GET_DEFAULT(projectName_, "") };
          inline Project& setProjectName(string projectName) { DARABONBA_PTR_SET_VALUE(projectName_, projectName) };


        protected:
          shared_ptr<string> projectDisplayName_ {};
          shared_ptr<string> projectId_ {};
          shared_ptr<string> projectName_ {};
        };

        class Owners : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Owners& obj) { 
            DARABONBA_PTR_TO_JSON(DisplayName, displayName_);
            DARABONBA_PTR_TO_JSON(UserId, userId_);
          };
          friend void from_json(const Darabonba::Json& j, Owners& obj) { 
            DARABONBA_PTR_FROM_JSON(DisplayName, displayName_);
            DARABONBA_PTR_FROM_JSON(UserId, userId_);
          };
          Owners() = default ;
          Owners(const Owners &) = default ;
          Owners(Owners &&) = default ;
          Owners(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Owners() = default ;
          Owners& operator=(const Owners &) = default ;
          Owners& operator=(Owners &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->displayName_ == nullptr
        && this->userId_ == nullptr; };
          // displayName Field Functions 
          bool hasDisplayName() const { return this->displayName_ != nullptr;};
          void deleteDisplayName() { this->displayName_ = nullptr;};
          inline string getDisplayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
          inline Owners& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


          // userId Field Functions 
          bool hasUserId() const { return this->userId_ != nullptr;};
          void deleteUserId() { this->userId_ = nullptr;};
          inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
          inline Owners& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


        protected:
          shared_ptr<string> displayName_ {};
          shared_ptr<string> userId_ {};
        };

        class BizUnit : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const BizUnit& obj) { 
            DARABONBA_PTR_TO_JSON(BizUnitDisplayName, bizUnitDisplayName_);
            DARABONBA_PTR_TO_JSON(BizUnitId, bizUnitId_);
            DARABONBA_PTR_TO_JSON(BizUnitName, bizUnitName_);
          };
          friend void from_json(const Darabonba::Json& j, BizUnit& obj) { 
            DARABONBA_PTR_FROM_JSON(BizUnitDisplayName, bizUnitDisplayName_);
            DARABONBA_PTR_FROM_JSON(BizUnitId, bizUnitId_);
            DARABONBA_PTR_FROM_JSON(BizUnitName, bizUnitName_);
          };
          BizUnit() = default ;
          BizUnit(const BizUnit &) = default ;
          BizUnit(BizUnit &&) = default ;
          BizUnit(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~BizUnit() = default ;
          BizUnit& operator=(const BizUnit &) = default ;
          BizUnit& operator=(BizUnit &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->bizUnitDisplayName_ == nullptr
        && this->bizUnitId_ == nullptr && this->bizUnitName_ == nullptr; };
          // bizUnitDisplayName Field Functions 
          bool hasBizUnitDisplayName() const { return this->bizUnitDisplayName_ != nullptr;};
          void deleteBizUnitDisplayName() { this->bizUnitDisplayName_ = nullptr;};
          inline string getBizUnitDisplayName() const { DARABONBA_PTR_GET_DEFAULT(bizUnitDisplayName_, "") };
          inline BizUnit& setBizUnitDisplayName(string bizUnitDisplayName) { DARABONBA_PTR_SET_VALUE(bizUnitDisplayName_, bizUnitDisplayName) };


          // bizUnitId Field Functions 
          bool hasBizUnitId() const { return this->bizUnitId_ != nullptr;};
          void deleteBizUnitId() { this->bizUnitId_ = nullptr;};
          inline string getBizUnitId() const { DARABONBA_PTR_GET_DEFAULT(bizUnitId_, "") };
          inline BizUnit& setBizUnitId(string bizUnitId) { DARABONBA_PTR_SET_VALUE(bizUnitId_, bizUnitId) };


          // bizUnitName Field Functions 
          bool hasBizUnitName() const { return this->bizUnitName_ != nullptr;};
          void deleteBizUnitName() { this->bizUnitName_ = nullptr;};
          inline string getBizUnitName() const { DARABONBA_PTR_GET_DEFAULT(bizUnitName_, "") };
          inline BizUnit& setBizUnitName(string bizUnitName) { DARABONBA_PTR_SET_VALUE(bizUnitName_, bizUnitName) };


        protected:
          shared_ptr<string> bizUnitDisplayName_ {};
          shared_ptr<string> bizUnitId_ {};
          shared_ptr<string> bizUnitName_ {};
        };

        virtual bool empty() const override { return this->bizUnit_ == nullptr
        && this->env_ == nullptr && this->nodeId_ == nullptr && this->nodeName_ == nullptr && this->nodeScheduleType_ == nullptr && this->owners_ == nullptr
        && this->project_ == nullptr && this->subBizType_ == nullptr; };
        // bizUnit Field Functions 
        bool hasBizUnit() const { return this->bizUnit_ != nullptr;};
        void deleteBizUnit() { this->bizUnit_ = nullptr;};
        inline const SimpleNodeInfos::BizUnit & getBizUnit() const { DARABONBA_PTR_GET_CONST(bizUnit_, SimpleNodeInfos::BizUnit) };
        inline SimpleNodeInfos::BizUnit getBizUnit() { DARABONBA_PTR_GET(bizUnit_, SimpleNodeInfos::BizUnit) };
        inline SimpleNodeInfos& setBizUnit(const SimpleNodeInfos::BizUnit & bizUnit) { DARABONBA_PTR_SET_VALUE(bizUnit_, bizUnit) };
        inline SimpleNodeInfos& setBizUnit(SimpleNodeInfos::BizUnit && bizUnit) { DARABONBA_PTR_SET_RVALUE(bizUnit_, bizUnit) };


        // env Field Functions 
        bool hasEnv() const { return this->env_ != nullptr;};
        void deleteEnv() { this->env_ = nullptr;};
        inline string getEnv() const { DARABONBA_PTR_GET_DEFAULT(env_, "") };
        inline SimpleNodeInfos& setEnv(string env) { DARABONBA_PTR_SET_VALUE(env_, env) };


        // nodeId Field Functions 
        bool hasNodeId() const { return this->nodeId_ != nullptr;};
        void deleteNodeId() { this->nodeId_ = nullptr;};
        inline string getNodeId() const { DARABONBA_PTR_GET_DEFAULT(nodeId_, "") };
        inline SimpleNodeInfos& setNodeId(string nodeId) { DARABONBA_PTR_SET_VALUE(nodeId_, nodeId) };


        // nodeName Field Functions 
        bool hasNodeName() const { return this->nodeName_ != nullptr;};
        void deleteNodeName() { this->nodeName_ = nullptr;};
        inline string getNodeName() const { DARABONBA_PTR_GET_DEFAULT(nodeName_, "") };
        inline SimpleNodeInfos& setNodeName(string nodeName) { DARABONBA_PTR_SET_VALUE(nodeName_, nodeName) };


        // nodeScheduleType Field Functions 
        bool hasNodeScheduleType() const { return this->nodeScheduleType_ != nullptr;};
        void deleteNodeScheduleType() { this->nodeScheduleType_ = nullptr;};
        inline string getNodeScheduleType() const { DARABONBA_PTR_GET_DEFAULT(nodeScheduleType_, "") };
        inline SimpleNodeInfos& setNodeScheduleType(string nodeScheduleType) { DARABONBA_PTR_SET_VALUE(nodeScheduleType_, nodeScheduleType) };


        // owners Field Functions 
        bool hasOwners() const { return this->owners_ != nullptr;};
        void deleteOwners() { this->owners_ = nullptr;};
        inline const vector<SimpleNodeInfos::Owners> & getOwners() const { DARABONBA_PTR_GET_CONST(owners_, vector<SimpleNodeInfos::Owners>) };
        inline vector<SimpleNodeInfos::Owners> getOwners() { DARABONBA_PTR_GET(owners_, vector<SimpleNodeInfos::Owners>) };
        inline SimpleNodeInfos& setOwners(const vector<SimpleNodeInfos::Owners> & owners) { DARABONBA_PTR_SET_VALUE(owners_, owners) };
        inline SimpleNodeInfos& setOwners(vector<SimpleNodeInfos::Owners> && owners) { DARABONBA_PTR_SET_RVALUE(owners_, owners) };


        // project Field Functions 
        bool hasProject() const { return this->project_ != nullptr;};
        void deleteProject() { this->project_ = nullptr;};
        inline const SimpleNodeInfos::Project & getProject() const { DARABONBA_PTR_GET_CONST(project_, SimpleNodeInfos::Project) };
        inline SimpleNodeInfos::Project getProject() { DARABONBA_PTR_GET(project_, SimpleNodeInfos::Project) };
        inline SimpleNodeInfos& setProject(const SimpleNodeInfos::Project & project) { DARABONBA_PTR_SET_VALUE(project_, project) };
        inline SimpleNodeInfos& setProject(SimpleNodeInfos::Project && project) { DARABONBA_PTR_SET_RVALUE(project_, project) };


        // subBizType Field Functions 
        bool hasSubBizType() const { return this->subBizType_ != nullptr;};
        void deleteSubBizType() { this->subBizType_ = nullptr;};
        inline string getSubBizType() const { DARABONBA_PTR_GET_DEFAULT(subBizType_, "") };
        inline SimpleNodeInfos& setSubBizType(string subBizType) { DARABONBA_PTR_SET_VALUE(subBizType_, subBizType) };


      protected:
        shared_ptr<SimpleNodeInfos::BizUnit> bizUnit_ {};
        shared_ptr<string> env_ {};
        shared_ptr<string> nodeId_ {};
        shared_ptr<string> nodeName_ {};
        shared_ptr<string> nodeScheduleType_ {};
        shared_ptr<vector<SimpleNodeInfos::Owners>> owners_ {};
        shared_ptr<SimpleNodeInfos::Project> project_ {};
        shared_ptr<string> subBizType_ {};
      };

      class Instructions : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Instructions& obj) { 
          DARABONBA_PTR_TO_JSON(Content, content_);
          DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
          DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
          DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
          DARABONBA_PTR_TO_JSON(OwnerNickName, ownerNickName_);
          DARABONBA_PTR_TO_JSON(Title, title_);
        };
        friend void from_json(const Darabonba::Json& j, Instructions& obj) { 
          DARABONBA_PTR_FROM_JSON(Content, content_);
          DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
          DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
          DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
          DARABONBA_PTR_FROM_JSON(OwnerNickName, ownerNickName_);
          DARABONBA_PTR_FROM_JSON(Title, title_);
        };
        Instructions() = default ;
        Instructions(const Instructions &) = default ;
        Instructions(Instructions &&) = default ;
        Instructions(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Instructions() = default ;
        Instructions& operator=(const Instructions &) = default ;
        Instructions& operator=(Instructions &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->content_ == nullptr
        && this->gmtCreate_ == nullptr && this->gmtModified_ == nullptr && this->ownerId_ == nullptr && this->ownerNickName_ == nullptr && this->title_ == nullptr; };
        // content Field Functions 
        bool hasContent() const { return this->content_ != nullptr;};
        void deleteContent() { this->content_ = nullptr;};
        inline string getContent() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
        inline Instructions& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


        // gmtCreate Field Functions 
        bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
        void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
        inline string getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
        inline Instructions& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


        // gmtModified Field Functions 
        bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
        void deleteGmtModified() { this->gmtModified_ = nullptr;};
        inline string getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
        inline Instructions& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


        // ownerId Field Functions 
        bool hasOwnerId() const { return this->ownerId_ != nullptr;};
        void deleteOwnerId() { this->ownerId_ = nullptr;};
        inline string getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, "") };
        inline Instructions& setOwnerId(string ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


        // ownerNickName Field Functions 
        bool hasOwnerNickName() const { return this->ownerNickName_ != nullptr;};
        void deleteOwnerNickName() { this->ownerNickName_ = nullptr;};
        inline string getOwnerNickName() const { DARABONBA_PTR_GET_DEFAULT(ownerNickName_, "") };
        inline Instructions& setOwnerNickName(string ownerNickName) { DARABONBA_PTR_SET_VALUE(ownerNickName_, ownerNickName) };


        // title Field Functions 
        bool hasTitle() const { return this->title_ != nullptr;};
        void deleteTitle() { this->title_ = nullptr;};
        inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
        inline Instructions& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


      protected:
        shared_ptr<string> content_ {};
        shared_ptr<string> gmtCreate_ {};
        shared_ptr<string> gmtModified_ {};
        shared_ptr<string> ownerId_ {};
        shared_ptr<string> ownerNickName_ {};
        shared_ptr<string> title_ {};
      };

      virtual bool empty() const override { return this->assetTags_ == nullptr
        && this->bizUnitId_ == nullptr && this->bizUnitName_ == nullptr && this->comment_ == nullptr && this->createTime_ == nullptr && this->creator_ == nullptr
        && this->dataDomainId_ == nullptr && this->dataDomainName_ == nullptr && this->dataSourceId_ == nullptr && this->displayName_ == nullptr && this->env_ == nullptr
        && this->fileId_ == nullptr && this->guid_ == nullptr && this->instructions_ == nullptr && this->isBasicMode_ == nullptr && this->isPartitionTable_ == nullptr
        && this->lastDdlTime_ == nullptr && this->lastDmlTime_ == nullptr && this->lastQueryTime_ == nullptr && this->lifeCycle_ == nullptr && this->name_ == nullptr
        && this->nodeIds_ == nullptr && this->owner_ == nullptr && this->parentModelId_ == nullptr && this->projectId_ == nullptr && this->projectName_ == nullptr
        && this->securityLevel_ == nullptr && this->securityLevelAbbreviation_ == nullptr && this->securityLevelName_ == nullptr && this->simpleNodeInfos_ == nullptr && this->storageType_ == nullptr
        && this->streamTableConfig_ == nullptr && this->tableSizeInBytes_ == nullptr && this->visitCount30d_ == nullptr; };
      // assetTags Field Functions 
      bool hasAssetTags() const { return this->assetTags_ != nullptr;};
      void deleteAssetTags() { this->assetTags_ = nullptr;};
      inline const vector<string> & getAssetTags() const { DARABONBA_PTR_GET_CONST(assetTags_, vector<string>) };
      inline vector<string> getAssetTags() { DARABONBA_PTR_GET(assetTags_, vector<string>) };
      inline Data& setAssetTags(const vector<string> & assetTags) { DARABONBA_PTR_SET_VALUE(assetTags_, assetTags) };
      inline Data& setAssetTags(vector<string> && assetTags) { DARABONBA_PTR_SET_RVALUE(assetTags_, assetTags) };


      // bizUnitId Field Functions 
      bool hasBizUnitId() const { return this->bizUnitId_ != nullptr;};
      void deleteBizUnitId() { this->bizUnitId_ = nullptr;};
      inline int64_t getBizUnitId() const { DARABONBA_PTR_GET_DEFAULT(bizUnitId_, 0L) };
      inline Data& setBizUnitId(int64_t bizUnitId) { DARABONBA_PTR_SET_VALUE(bizUnitId_, bizUnitId) };


      // bizUnitName Field Functions 
      bool hasBizUnitName() const { return this->bizUnitName_ != nullptr;};
      void deleteBizUnitName() { this->bizUnitName_ = nullptr;};
      inline string getBizUnitName() const { DARABONBA_PTR_GET_DEFAULT(bizUnitName_, "") };
      inline Data& setBizUnitName(string bizUnitName) { DARABONBA_PTR_SET_VALUE(bizUnitName_, bizUnitName) };


      // comment Field Functions 
      bool hasComment() const { return this->comment_ != nullptr;};
      void deleteComment() { this->comment_ = nullptr;};
      inline string getComment() const { DARABONBA_PTR_GET_DEFAULT(comment_, "") };
      inline Data& setComment(string comment) { DARABONBA_PTR_SET_VALUE(comment_, comment) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline Data& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // creator Field Functions 
      bool hasCreator() const { return this->creator_ != nullptr;};
      void deleteCreator() { this->creator_ = nullptr;};
      inline string getCreator() const { DARABONBA_PTR_GET_DEFAULT(creator_, "") };
      inline Data& setCreator(string creator) { DARABONBA_PTR_SET_VALUE(creator_, creator) };


      // dataDomainId Field Functions 
      bool hasDataDomainId() const { return this->dataDomainId_ != nullptr;};
      void deleteDataDomainId() { this->dataDomainId_ = nullptr;};
      inline int64_t getDataDomainId() const { DARABONBA_PTR_GET_DEFAULT(dataDomainId_, 0L) };
      inline Data& setDataDomainId(int64_t dataDomainId) { DARABONBA_PTR_SET_VALUE(dataDomainId_, dataDomainId) };


      // dataDomainName Field Functions 
      bool hasDataDomainName() const { return this->dataDomainName_ != nullptr;};
      void deleteDataDomainName() { this->dataDomainName_ = nullptr;};
      inline string getDataDomainName() const { DARABONBA_PTR_GET_DEFAULT(dataDomainName_, "") };
      inline Data& setDataDomainName(string dataDomainName) { DARABONBA_PTR_SET_VALUE(dataDomainName_, dataDomainName) };


      // dataSourceId Field Functions 
      bool hasDataSourceId() const { return this->dataSourceId_ != nullptr;};
      void deleteDataSourceId() { this->dataSourceId_ = nullptr;};
      inline int64_t getDataSourceId() const { DARABONBA_PTR_GET_DEFAULT(dataSourceId_, 0L) };
      inline Data& setDataSourceId(int64_t dataSourceId) { DARABONBA_PTR_SET_VALUE(dataSourceId_, dataSourceId) };


      // displayName Field Functions 
      bool hasDisplayName() const { return this->displayName_ != nullptr;};
      void deleteDisplayName() { this->displayName_ = nullptr;};
      inline string getDisplayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
      inline Data& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


      // env Field Functions 
      bool hasEnv() const { return this->env_ != nullptr;};
      void deleteEnv() { this->env_ = nullptr;};
      inline string getEnv() const { DARABONBA_PTR_GET_DEFAULT(env_, "") };
      inline Data& setEnv(string env) { DARABONBA_PTR_SET_VALUE(env_, env) };


      // fileId Field Functions 
      bool hasFileId() const { return this->fileId_ != nullptr;};
      void deleteFileId() { this->fileId_ = nullptr;};
      inline string getFileId() const { DARABONBA_PTR_GET_DEFAULT(fileId_, "") };
      inline Data& setFileId(string fileId) { DARABONBA_PTR_SET_VALUE(fileId_, fileId) };


      // guid Field Functions 
      bool hasGuid() const { return this->guid_ != nullptr;};
      void deleteGuid() { this->guid_ = nullptr;};
      inline string getGuid() const { DARABONBA_PTR_GET_DEFAULT(guid_, "") };
      inline Data& setGuid(string guid) { DARABONBA_PTR_SET_VALUE(guid_, guid) };


      // instructions Field Functions 
      bool hasInstructions() const { return this->instructions_ != nullptr;};
      void deleteInstructions() { this->instructions_ = nullptr;};
      inline const vector<Data::Instructions> & getInstructions() const { DARABONBA_PTR_GET_CONST(instructions_, vector<Data::Instructions>) };
      inline vector<Data::Instructions> getInstructions() { DARABONBA_PTR_GET(instructions_, vector<Data::Instructions>) };
      inline Data& setInstructions(const vector<Data::Instructions> & instructions) { DARABONBA_PTR_SET_VALUE(instructions_, instructions) };
      inline Data& setInstructions(vector<Data::Instructions> && instructions) { DARABONBA_PTR_SET_RVALUE(instructions_, instructions) };


      // isBasicMode Field Functions 
      bool hasIsBasicMode() const { return this->isBasicMode_ != nullptr;};
      void deleteIsBasicMode() { this->isBasicMode_ = nullptr;};
      inline bool getIsBasicMode() const { DARABONBA_PTR_GET_DEFAULT(isBasicMode_, false) };
      inline Data& setIsBasicMode(bool isBasicMode) { DARABONBA_PTR_SET_VALUE(isBasicMode_, isBasicMode) };


      // isPartitionTable Field Functions 
      bool hasIsPartitionTable() const { return this->isPartitionTable_ != nullptr;};
      void deleteIsPartitionTable() { this->isPartitionTable_ = nullptr;};
      inline bool getIsPartitionTable() const { DARABONBA_PTR_GET_DEFAULT(isPartitionTable_, false) };
      inline Data& setIsPartitionTable(bool isPartitionTable) { DARABONBA_PTR_SET_VALUE(isPartitionTable_, isPartitionTable) };


      // lastDdlTime Field Functions 
      bool hasLastDdlTime() const { return this->lastDdlTime_ != nullptr;};
      void deleteLastDdlTime() { this->lastDdlTime_ = nullptr;};
      inline string getLastDdlTime() const { DARABONBA_PTR_GET_DEFAULT(lastDdlTime_, "") };
      inline Data& setLastDdlTime(string lastDdlTime) { DARABONBA_PTR_SET_VALUE(lastDdlTime_, lastDdlTime) };


      // lastDmlTime Field Functions 
      bool hasLastDmlTime() const { return this->lastDmlTime_ != nullptr;};
      void deleteLastDmlTime() { this->lastDmlTime_ = nullptr;};
      inline string getLastDmlTime() const { DARABONBA_PTR_GET_DEFAULT(lastDmlTime_, "") };
      inline Data& setLastDmlTime(string lastDmlTime) { DARABONBA_PTR_SET_VALUE(lastDmlTime_, lastDmlTime) };


      // lastQueryTime Field Functions 
      bool hasLastQueryTime() const { return this->lastQueryTime_ != nullptr;};
      void deleteLastQueryTime() { this->lastQueryTime_ = nullptr;};
      inline string getLastQueryTime() const { DARABONBA_PTR_GET_DEFAULT(lastQueryTime_, "") };
      inline Data& setLastQueryTime(string lastQueryTime) { DARABONBA_PTR_SET_VALUE(lastQueryTime_, lastQueryTime) };


      // lifeCycle Field Functions 
      bool hasLifeCycle() const { return this->lifeCycle_ != nullptr;};
      void deleteLifeCycle() { this->lifeCycle_ = nullptr;};
      inline int64_t getLifeCycle() const { DARABONBA_PTR_GET_DEFAULT(lifeCycle_, 0L) };
      inline Data& setLifeCycle(int64_t lifeCycle) { DARABONBA_PTR_SET_VALUE(lifeCycle_, lifeCycle) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Data& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // nodeIds Field Functions 
      bool hasNodeIds() const { return this->nodeIds_ != nullptr;};
      void deleteNodeIds() { this->nodeIds_ = nullptr;};
      inline const vector<string> & getNodeIds() const { DARABONBA_PTR_GET_CONST(nodeIds_, vector<string>) };
      inline vector<string> getNodeIds() { DARABONBA_PTR_GET(nodeIds_, vector<string>) };
      inline Data& setNodeIds(const vector<string> & nodeIds) { DARABONBA_PTR_SET_VALUE(nodeIds_, nodeIds) };
      inline Data& setNodeIds(vector<string> && nodeIds) { DARABONBA_PTR_SET_RVALUE(nodeIds_, nodeIds) };


      // owner Field Functions 
      bool hasOwner() const { return this->owner_ != nullptr;};
      void deleteOwner() { this->owner_ = nullptr;};
      inline string getOwner() const { DARABONBA_PTR_GET_DEFAULT(owner_, "") };
      inline Data& setOwner(string owner) { DARABONBA_PTR_SET_VALUE(owner_, owner) };


      // parentModelId Field Functions 
      bool hasParentModelId() const { return this->parentModelId_ != nullptr;};
      void deleteParentModelId() { this->parentModelId_ = nullptr;};
      inline string getParentModelId() const { DARABONBA_PTR_GET_DEFAULT(parentModelId_, "") };
      inline Data& setParentModelId(string parentModelId) { DARABONBA_PTR_SET_VALUE(parentModelId_, parentModelId) };


      // projectId Field Functions 
      bool hasProjectId() const { return this->projectId_ != nullptr;};
      void deleteProjectId() { this->projectId_ = nullptr;};
      inline int64_t getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
      inline Data& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


      // projectName Field Functions 
      bool hasProjectName() const { return this->projectName_ != nullptr;};
      void deleteProjectName() { this->projectName_ = nullptr;};
      inline string getProjectName() const { DARABONBA_PTR_GET_DEFAULT(projectName_, "") };
      inline Data& setProjectName(string projectName) { DARABONBA_PTR_SET_VALUE(projectName_, projectName) };


      // securityLevel Field Functions 
      bool hasSecurityLevel() const { return this->securityLevel_ != nullptr;};
      void deleteSecurityLevel() { this->securityLevel_ = nullptr;};
      inline int64_t getSecurityLevel() const { DARABONBA_PTR_GET_DEFAULT(securityLevel_, 0L) };
      inline Data& setSecurityLevel(int64_t securityLevel) { DARABONBA_PTR_SET_VALUE(securityLevel_, securityLevel) };


      // securityLevelAbbreviation Field Functions 
      bool hasSecurityLevelAbbreviation() const { return this->securityLevelAbbreviation_ != nullptr;};
      void deleteSecurityLevelAbbreviation() { this->securityLevelAbbreviation_ = nullptr;};
      inline string getSecurityLevelAbbreviation() const { DARABONBA_PTR_GET_DEFAULT(securityLevelAbbreviation_, "") };
      inline Data& setSecurityLevelAbbreviation(string securityLevelAbbreviation) { DARABONBA_PTR_SET_VALUE(securityLevelAbbreviation_, securityLevelAbbreviation) };


      // securityLevelName Field Functions 
      bool hasSecurityLevelName() const { return this->securityLevelName_ != nullptr;};
      void deleteSecurityLevelName() { this->securityLevelName_ = nullptr;};
      inline string getSecurityLevelName() const { DARABONBA_PTR_GET_DEFAULT(securityLevelName_, "") };
      inline Data& setSecurityLevelName(string securityLevelName) { DARABONBA_PTR_SET_VALUE(securityLevelName_, securityLevelName) };


      // simpleNodeInfos Field Functions 
      bool hasSimpleNodeInfos() const { return this->simpleNodeInfos_ != nullptr;};
      void deleteSimpleNodeInfos() { this->simpleNodeInfos_ = nullptr;};
      inline const vector<Data::SimpleNodeInfos> & getSimpleNodeInfos() const { DARABONBA_PTR_GET_CONST(simpleNodeInfos_, vector<Data::SimpleNodeInfos>) };
      inline vector<Data::SimpleNodeInfos> getSimpleNodeInfos() { DARABONBA_PTR_GET(simpleNodeInfos_, vector<Data::SimpleNodeInfos>) };
      inline Data& setSimpleNodeInfos(const vector<Data::SimpleNodeInfos> & simpleNodeInfos) { DARABONBA_PTR_SET_VALUE(simpleNodeInfos_, simpleNodeInfos) };
      inline Data& setSimpleNodeInfos(vector<Data::SimpleNodeInfos> && simpleNodeInfos) { DARABONBA_PTR_SET_RVALUE(simpleNodeInfos_, simpleNodeInfos) };


      // storageType Field Functions 
      bool hasStorageType() const { return this->storageType_ != nullptr;};
      void deleteStorageType() { this->storageType_ = nullptr;};
      inline string getStorageType() const { DARABONBA_PTR_GET_DEFAULT(storageType_, "") };
      inline Data& setStorageType(string storageType) { DARABONBA_PTR_SET_VALUE(storageType_, storageType) };


      // streamTableConfig Field Functions 
      bool hasStreamTableConfig() const { return this->streamTableConfig_ != nullptr;};
      void deleteStreamTableConfig() { this->streamTableConfig_ = nullptr;};
      inline const vector<Data::StreamTableConfig> & getStreamTableConfig() const { DARABONBA_PTR_GET_CONST(streamTableConfig_, vector<Data::StreamTableConfig>) };
      inline vector<Data::StreamTableConfig> getStreamTableConfig() { DARABONBA_PTR_GET(streamTableConfig_, vector<Data::StreamTableConfig>) };
      inline Data& setStreamTableConfig(const vector<Data::StreamTableConfig> & streamTableConfig) { DARABONBA_PTR_SET_VALUE(streamTableConfig_, streamTableConfig) };
      inline Data& setStreamTableConfig(vector<Data::StreamTableConfig> && streamTableConfig) { DARABONBA_PTR_SET_RVALUE(streamTableConfig_, streamTableConfig) };


      // tableSizeInBytes Field Functions 
      bool hasTableSizeInBytes() const { return this->tableSizeInBytes_ != nullptr;};
      void deleteTableSizeInBytes() { this->tableSizeInBytes_ = nullptr;};
      inline int64_t getTableSizeInBytes() const { DARABONBA_PTR_GET_DEFAULT(tableSizeInBytes_, 0L) };
      inline Data& setTableSizeInBytes(int64_t tableSizeInBytes) { DARABONBA_PTR_SET_VALUE(tableSizeInBytes_, tableSizeInBytes) };


      // visitCount30d Field Functions 
      bool hasVisitCount30d() const { return this->visitCount30d_ != nullptr;};
      void deleteVisitCount30d() { this->visitCount30d_ = nullptr;};
      inline int64_t getVisitCount30d() const { DARABONBA_PTR_GET_DEFAULT(visitCount30d_, 0L) };
      inline Data& setVisitCount30d(int64_t visitCount30d) { DARABONBA_PTR_SET_VALUE(visitCount30d_, visitCount30d) };


    protected:
      shared_ptr<vector<string>> assetTags_ {};
      shared_ptr<int64_t> bizUnitId_ {};
      shared_ptr<string> bizUnitName_ {};
      shared_ptr<string> comment_ {};
      shared_ptr<string> createTime_ {};
      shared_ptr<string> creator_ {};
      shared_ptr<int64_t> dataDomainId_ {};
      shared_ptr<string> dataDomainName_ {};
      shared_ptr<int64_t> dataSourceId_ {};
      shared_ptr<string> displayName_ {};
      shared_ptr<string> env_ {};
      shared_ptr<string> fileId_ {};
      shared_ptr<string> guid_ {};
      shared_ptr<vector<Data::Instructions>> instructions_ {};
      shared_ptr<bool> isBasicMode_ {};
      shared_ptr<bool> isPartitionTable_ {};
      shared_ptr<string> lastDdlTime_ {};
      shared_ptr<string> lastDmlTime_ {};
      shared_ptr<string> lastQueryTime_ {};
      shared_ptr<int64_t> lifeCycle_ {};
      shared_ptr<string> name_ {};
      shared_ptr<vector<string>> nodeIds_ {};
      shared_ptr<string> owner_ {};
      shared_ptr<string> parentModelId_ {};
      shared_ptr<int64_t> projectId_ {};
      shared_ptr<string> projectName_ {};
      shared_ptr<int64_t> securityLevel_ {};
      shared_ptr<string> securityLevelAbbreviation_ {};
      shared_ptr<string> securityLevelName_ {};
      shared_ptr<vector<Data::SimpleNodeInfos>> simpleNodeInfos_ {};
      shared_ptr<string> storageType_ {};
      shared_ptr<vector<Data::StreamTableConfig>> streamTableConfig_ {};
      shared_ptr<int64_t> tableSizeInBytes_ {};
      shared_ptr<int64_t> visitCount30d_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetTableResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetTableResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetTableResponseBody::Data) };
    inline GetTableResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetTableResponseBody::Data) };
    inline GetTableResponseBody& setData(const GetTableResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetTableResponseBody& setData(GetTableResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline GetTableResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetTableResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetTableResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetTableResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<GetTableResponseBody::Data> data_ {};
    shared_ptr<int32_t> httpStatusCode_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
