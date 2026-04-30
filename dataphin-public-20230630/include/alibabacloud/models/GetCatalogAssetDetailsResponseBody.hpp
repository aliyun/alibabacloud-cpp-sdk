// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCATALOGASSETDETAILSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETCATALOGASSETDETAILSRESPONSEBODY_HPP_
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
  class GetCatalogAssetDetailsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetCatalogAssetDetailsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetCatalogAssetDetailsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetCatalogAssetDetailsResponseBody() = default ;
    GetCatalogAssetDetailsResponseBody(const GetCatalogAssetDetailsResponseBody &) = default ;
    GetCatalogAssetDetailsResponseBody(GetCatalogAssetDetailsResponseBody &&) = default ;
    GetCatalogAssetDetailsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetCatalogAssetDetailsResponseBody() = default ;
    GetCatalogAssetDetailsResponseBody& operator=(const GetCatalogAssetDetailsResponseBody &) = default ;
    GetCatalogAssetDetailsResponseBody& operator=(GetCatalogAssetDetailsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(ApiCallMode, apiCallMode_);
        DARABONBA_PTR_TO_JSON(ApiGroupName, apiGroupName_);
        DARABONBA_PTR_TO_JSON(ApiId, apiId_);
        DARABONBA_PTR_TO_JSON(ApiRequestMethod, apiRequestMethod_);
        DARABONBA_PTR_TO_JSON(AssetDescription, assetDescription_);
        DARABONBA_PTR_TO_JSON(AssetDetailUrl, assetDetailUrl_);
        DARABONBA_PTR_TO_JSON(AssetDisplayName, assetDisplayName_);
        DARABONBA_PTR_TO_JSON(AssetFrom, assetFrom_);
        DARABONBA_PTR_TO_JSON(AssetFullName, assetFullName_);
        DARABONBA_PTR_TO_JSON(AssetName, assetName_);
        DARABONBA_PTR_TO_JSON(AssetTags, assetTags_);
        DARABONBA_PTR_TO_JSON(AssetType, assetType_);
        DARABONBA_PTR_TO_JSON(BiCatalog, biCatalog_);
        DARABONBA_PTR_TO_JSON(BizUnitId, bizUnitId_);
        DARABONBA_PTR_TO_JSON(BizUnitName, bizUnitName_);
        DARABONBA_PTR_TO_JSON(ChartCount, chartCount_);
        DARABONBA_PTR_TO_JSON(CollectionCount, collectionCount_);
        DARABONBA_PTR_TO_JSON(Columns, columns_);
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(CustomAttributes, customAttributes_);
        DARABONBA_PTR_TO_JSON(DataCellId, dataCellId_);
        DARABONBA_PTR_TO_JSON(DataCellName, dataCellName_);
        DARABONBA_PTR_TO_JSON(DataSourceName, dataSourceName_);
        DARABONBA_PTR_TO_JSON(DatasourceId, datasourceId_);
        DARABONBA_PTR_TO_JSON(Directories, directories_);
        DARABONBA_PTR_TO_JSON(FirstOnShelveTime, firstOnShelveTime_);
        DARABONBA_PTR_TO_JSON(FirstOnShelveUser, firstOnShelveUser_);
        DARABONBA_PTR_TO_JSON(Granularity, granularity_);
        DARABONBA_PTR_TO_JSON(Guid, guid_);
        DARABONBA_PTR_TO_JSON(Instruction, instruction_);
        DARABONBA_PTR_TO_JSON(IsDeleted, isDeleted_);
        DARABONBA_PTR_TO_JSON(IsPartitionTable, isPartitionTable_);
        DARABONBA_PTR_TO_JSON(LastDdlTime, lastDdlTime_);
        DARABONBA_PTR_TO_JSON(LastDmlTime, lastDmlTime_);
        DARABONBA_PTR_TO_JSON(LastOnShelveTime, lastOnShelveTime_);
        DARABONBA_PTR_TO_JSON(LastOnShelveUser, lastOnShelveUser_);
        DARABONBA_PTR_TO_JSON(MaintainUserGroups, maintainUserGroups_);
        DARABONBA_PTR_TO_JSON(MaintainUserIds, maintainUserIds_);
        DARABONBA_PTR_TO_JSON(MaxSecurityLevel, maxSecurityLevel_);
        DARABONBA_PTR_TO_JSON(ModifyTime, modifyTime_);
        DARABONBA_PTR_TO_JSON(Owner, owner_);
        DARABONBA_PTR_TO_JSON(PartitionKey, partitionKey_);
        DARABONBA_PTR_TO_JSON(PrimaryKey, primaryKey_);
        DARABONBA_PTR_TO_JSON(ProfilingReportViewScopeType, profilingReportViewScopeType_);
        DARABONBA_PTR_TO_JSON(ProfilingReportViewScopeUserGroups, profilingReportViewScopeUserGroups_);
        DARABONBA_PTR_TO_JSON(ProfilingReportViewScopeUserIds, profilingReportViewScopeUserIds_);
        DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
        DARABONBA_PTR_TO_JSON(ProjectName, projectName_);
        DARABONBA_PTR_TO_JSON(ReadCount, readCount_);
        DARABONBA_PTR_TO_JSON(ShelveViewScopeType, shelveViewScopeType_);
        DARABONBA_PTR_TO_JSON(ShelveViewScopeUserGroups, shelveViewScopeUserGroups_);
        DARABONBA_PTR_TO_JSON(ShelveViewScopeUserIds, shelveViewScopeUserIds_);
        DARABONBA_PTR_TO_JSON(SimpleNodeInfos, simpleNodeInfos_);
        DARABONBA_PTR_TO_JSON(SubType, subType_);
        DARABONBA_PTR_TO_JSON(SumTableGuid, sumTableGuid_);
        DARABONBA_PTR_TO_JSON(SumTableName, sumTableName_);
        DARABONBA_PTR_TO_JSON(TableLifeCycle, tableLifeCycle_);
        DARABONBA_PTR_TO_JSON(TableSizeInBytes, tableSizeInBytes_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(ApiCallMode, apiCallMode_);
        DARABONBA_PTR_FROM_JSON(ApiGroupName, apiGroupName_);
        DARABONBA_PTR_FROM_JSON(ApiId, apiId_);
        DARABONBA_PTR_FROM_JSON(ApiRequestMethod, apiRequestMethod_);
        DARABONBA_PTR_FROM_JSON(AssetDescription, assetDescription_);
        DARABONBA_PTR_FROM_JSON(AssetDetailUrl, assetDetailUrl_);
        DARABONBA_PTR_FROM_JSON(AssetDisplayName, assetDisplayName_);
        DARABONBA_PTR_FROM_JSON(AssetFrom, assetFrom_);
        DARABONBA_PTR_FROM_JSON(AssetFullName, assetFullName_);
        DARABONBA_PTR_FROM_JSON(AssetName, assetName_);
        DARABONBA_PTR_FROM_JSON(AssetTags, assetTags_);
        DARABONBA_PTR_FROM_JSON(AssetType, assetType_);
        DARABONBA_PTR_FROM_JSON(BiCatalog, biCatalog_);
        DARABONBA_PTR_FROM_JSON(BizUnitId, bizUnitId_);
        DARABONBA_PTR_FROM_JSON(BizUnitName, bizUnitName_);
        DARABONBA_PTR_FROM_JSON(ChartCount, chartCount_);
        DARABONBA_PTR_FROM_JSON(CollectionCount, collectionCount_);
        DARABONBA_PTR_FROM_JSON(Columns, columns_);
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(CustomAttributes, customAttributes_);
        DARABONBA_PTR_FROM_JSON(DataCellId, dataCellId_);
        DARABONBA_PTR_FROM_JSON(DataCellName, dataCellName_);
        DARABONBA_PTR_FROM_JSON(DataSourceName, dataSourceName_);
        DARABONBA_PTR_FROM_JSON(DatasourceId, datasourceId_);
        DARABONBA_PTR_FROM_JSON(Directories, directories_);
        DARABONBA_PTR_FROM_JSON(FirstOnShelveTime, firstOnShelveTime_);
        DARABONBA_PTR_FROM_JSON(FirstOnShelveUser, firstOnShelveUser_);
        DARABONBA_PTR_FROM_JSON(Granularity, granularity_);
        DARABONBA_PTR_FROM_JSON(Guid, guid_);
        DARABONBA_PTR_FROM_JSON(Instruction, instruction_);
        DARABONBA_PTR_FROM_JSON(IsDeleted, isDeleted_);
        DARABONBA_PTR_FROM_JSON(IsPartitionTable, isPartitionTable_);
        DARABONBA_PTR_FROM_JSON(LastDdlTime, lastDdlTime_);
        DARABONBA_PTR_FROM_JSON(LastDmlTime, lastDmlTime_);
        DARABONBA_PTR_FROM_JSON(LastOnShelveTime, lastOnShelveTime_);
        DARABONBA_PTR_FROM_JSON(LastOnShelveUser, lastOnShelveUser_);
        DARABONBA_PTR_FROM_JSON(MaintainUserGroups, maintainUserGroups_);
        DARABONBA_PTR_FROM_JSON(MaintainUserIds, maintainUserIds_);
        DARABONBA_PTR_FROM_JSON(MaxSecurityLevel, maxSecurityLevel_);
        DARABONBA_PTR_FROM_JSON(ModifyTime, modifyTime_);
        DARABONBA_PTR_FROM_JSON(Owner, owner_);
        DARABONBA_PTR_FROM_JSON(PartitionKey, partitionKey_);
        DARABONBA_PTR_FROM_JSON(PrimaryKey, primaryKey_);
        DARABONBA_PTR_FROM_JSON(ProfilingReportViewScopeType, profilingReportViewScopeType_);
        DARABONBA_PTR_FROM_JSON(ProfilingReportViewScopeUserGroups, profilingReportViewScopeUserGroups_);
        DARABONBA_PTR_FROM_JSON(ProfilingReportViewScopeUserIds, profilingReportViewScopeUserIds_);
        DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
        DARABONBA_PTR_FROM_JSON(ProjectName, projectName_);
        DARABONBA_PTR_FROM_JSON(ReadCount, readCount_);
        DARABONBA_PTR_FROM_JSON(ShelveViewScopeType, shelveViewScopeType_);
        DARABONBA_PTR_FROM_JSON(ShelveViewScopeUserGroups, shelveViewScopeUserGroups_);
        DARABONBA_PTR_FROM_JSON(ShelveViewScopeUserIds, shelveViewScopeUserIds_);
        DARABONBA_PTR_FROM_JSON(SimpleNodeInfos, simpleNodeInfos_);
        DARABONBA_PTR_FROM_JSON(SubType, subType_);
        DARABONBA_PTR_FROM_JSON(SumTableGuid, sumTableGuid_);
        DARABONBA_PTR_FROM_JSON(SumTableName, sumTableName_);
        DARABONBA_PTR_FROM_JSON(TableLifeCycle, tableLifeCycle_);
        DARABONBA_PTR_FROM_JSON(TableSizeInBytes, tableSizeInBytes_);
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
            DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
            DARABONBA_PTR_TO_JSON(ProjectName, projectName_);
          };
          friend void from_json(const Darabonba::Json& j, Project& obj) { 
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
          virtual bool empty() const override { return this->projectId_ == nullptr
        && this->projectName_ == nullptr; };
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

        virtual bool empty() const override { return this->bizUnit_ == nullptr
        && this->env_ == nullptr && this->nodeId_ == nullptr && this->nodeName_ == nullptr && this->nodeScheduleType_ == nullptr && this->owners_ == nullptr
        && this->project_ == nullptr && this->subBizType_ == nullptr; };
        // bizUnit Field Functions 
        bool hasBizUnit() const { return this->bizUnit_ != nullptr;};
        void deleteBizUnit() { this->bizUnit_ = nullptr;};
        inline string getBizUnit() const { DARABONBA_PTR_GET_DEFAULT(bizUnit_, "") };
        inline SimpleNodeInfos& setBizUnit(string bizUnit) { DARABONBA_PTR_SET_VALUE(bizUnit_, bizUnit) };


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
        shared_ptr<string> bizUnit_ {};
        shared_ptr<string> env_ {};
        shared_ptr<string> nodeId_ {};
        shared_ptr<string> nodeName_ {};
        shared_ptr<string> nodeScheduleType_ {};
        shared_ptr<vector<SimpleNodeInfos::Owners>> owners_ {};
        shared_ptr<SimpleNodeInfos::Project> project_ {};
        shared_ptr<string> subBizType_ {};
      };

      class Owner : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Owner& obj) { 
          DARABONBA_PTR_TO_JSON(DisplayName, displayName_);
          DARABONBA_PTR_TO_JSON(UserId, userId_);
        };
        friend void from_json(const Darabonba::Json& j, Owner& obj) { 
          DARABONBA_PTR_FROM_JSON(DisplayName, displayName_);
          DARABONBA_PTR_FROM_JSON(UserId, userId_);
        };
        Owner() = default ;
        Owner(const Owner &) = default ;
        Owner(Owner &&) = default ;
        Owner(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Owner() = default ;
        Owner& operator=(const Owner &) = default ;
        Owner& operator=(Owner &&) = default ;
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
        inline Owner& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


        // userId Field Functions 
        bool hasUserId() const { return this->userId_ != nullptr;};
        void deleteUserId() { this->userId_ = nullptr;};
        inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
        inline Owner& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


      protected:
        shared_ptr<string> displayName_ {};
        shared_ptr<string> userId_ {};
      };

      class LastOnShelveUser : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const LastOnShelveUser& obj) { 
          DARABONBA_PTR_TO_JSON(DisplayName, displayName_);
          DARABONBA_PTR_TO_JSON(UserId, userId_);
        };
        friend void from_json(const Darabonba::Json& j, LastOnShelveUser& obj) { 
          DARABONBA_PTR_FROM_JSON(DisplayName, displayName_);
          DARABONBA_PTR_FROM_JSON(UserId, userId_);
        };
        LastOnShelveUser() = default ;
        LastOnShelveUser(const LastOnShelveUser &) = default ;
        LastOnShelveUser(LastOnShelveUser &&) = default ;
        LastOnShelveUser(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~LastOnShelveUser() = default ;
        LastOnShelveUser& operator=(const LastOnShelveUser &) = default ;
        LastOnShelveUser& operator=(LastOnShelveUser &&) = default ;
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
        inline LastOnShelveUser& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


        // userId Field Functions 
        bool hasUserId() const { return this->userId_ != nullptr;};
        void deleteUserId() { this->userId_ = nullptr;};
        inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
        inline LastOnShelveUser& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


      protected:
        shared_ptr<string> displayName_ {};
        shared_ptr<string> userId_ {};
      };

      class FirstOnShelveUser : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const FirstOnShelveUser& obj) { 
          DARABONBA_PTR_TO_JSON(DisplayName, displayName_);
          DARABONBA_PTR_TO_JSON(UserId, userId_);
        };
        friend void from_json(const Darabonba::Json& j, FirstOnShelveUser& obj) { 
          DARABONBA_PTR_FROM_JSON(DisplayName, displayName_);
          DARABONBA_PTR_FROM_JSON(UserId, userId_);
        };
        FirstOnShelveUser() = default ;
        FirstOnShelveUser(const FirstOnShelveUser &) = default ;
        FirstOnShelveUser(FirstOnShelveUser &&) = default ;
        FirstOnShelveUser(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~FirstOnShelveUser() = default ;
        FirstOnShelveUser& operator=(const FirstOnShelveUser &) = default ;
        FirstOnShelveUser& operator=(FirstOnShelveUser &&) = default ;
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
        inline FirstOnShelveUser& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


        // userId Field Functions 
        bool hasUserId() const { return this->userId_ != nullptr;};
        void deleteUserId() { this->userId_ = nullptr;};
        inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
        inline FirstOnShelveUser& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


      protected:
        shared_ptr<string> displayName_ {};
        shared_ptr<string> userId_ {};
      };

      class Directories : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Directories& obj) { 
          DARABONBA_PTR_TO_JSON(DirectoryId, directoryId_);
          DARABONBA_PTR_TO_JSON(DirectoryName, directoryName_);
          DARABONBA_PTR_TO_JSON(TopicId, topicId_);
          DARABONBA_PTR_TO_JSON(TopicName, topicName_);
        };
        friend void from_json(const Darabonba::Json& j, Directories& obj) { 
          DARABONBA_PTR_FROM_JSON(DirectoryId, directoryId_);
          DARABONBA_PTR_FROM_JSON(DirectoryName, directoryName_);
          DARABONBA_PTR_FROM_JSON(TopicId, topicId_);
          DARABONBA_PTR_FROM_JSON(TopicName, topicName_);
        };
        Directories() = default ;
        Directories(const Directories &) = default ;
        Directories(Directories &&) = default ;
        Directories(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Directories() = default ;
        Directories& operator=(const Directories &) = default ;
        Directories& operator=(Directories &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->directoryId_ == nullptr
        && this->directoryName_ == nullptr && this->topicId_ == nullptr && this->topicName_ == nullptr; };
        // directoryId Field Functions 
        bool hasDirectoryId() const { return this->directoryId_ != nullptr;};
        void deleteDirectoryId() { this->directoryId_ = nullptr;};
        inline int64_t getDirectoryId() const { DARABONBA_PTR_GET_DEFAULT(directoryId_, 0L) };
        inline Directories& setDirectoryId(int64_t directoryId) { DARABONBA_PTR_SET_VALUE(directoryId_, directoryId) };


        // directoryName Field Functions 
        bool hasDirectoryName() const { return this->directoryName_ != nullptr;};
        void deleteDirectoryName() { this->directoryName_ = nullptr;};
        inline string getDirectoryName() const { DARABONBA_PTR_GET_DEFAULT(directoryName_, "") };
        inline Directories& setDirectoryName(string directoryName) { DARABONBA_PTR_SET_VALUE(directoryName_, directoryName) };


        // topicId Field Functions 
        bool hasTopicId() const { return this->topicId_ != nullptr;};
        void deleteTopicId() { this->topicId_ = nullptr;};
        inline int64_t getTopicId() const { DARABONBA_PTR_GET_DEFAULT(topicId_, 0L) };
        inline Directories& setTopicId(int64_t topicId) { DARABONBA_PTR_SET_VALUE(topicId_, topicId) };


        // topicName Field Functions 
        bool hasTopicName() const { return this->topicName_ != nullptr;};
        void deleteTopicName() { this->topicName_ = nullptr;};
        inline string getTopicName() const { DARABONBA_PTR_GET_DEFAULT(topicName_, "") };
        inline Directories& setTopicName(string topicName) { DARABONBA_PTR_SET_VALUE(topicName_, topicName) };


      protected:
        shared_ptr<int64_t> directoryId_ {};
        shared_ptr<string> directoryName_ {};
        shared_ptr<int64_t> topicId_ {};
        shared_ptr<string> topicName_ {};
      };

      class CustomAttributes : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const CustomAttributes& obj) { 
          DARABONBA_PTR_TO_JSON(AttrType, attrType_);
          DARABONBA_PTR_TO_JSON(Code, code_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(Value, value_);
        };
        friend void from_json(const Darabonba::Json& j, CustomAttributes& obj) { 
          DARABONBA_PTR_FROM_JSON(AttrType, attrType_);
          DARABONBA_PTR_FROM_JSON(Code, code_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(Value, value_);
        };
        CustomAttributes() = default ;
        CustomAttributes(const CustomAttributes &) = default ;
        CustomAttributes(CustomAttributes &&) = default ;
        CustomAttributes(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~CustomAttributes() = default ;
        CustomAttributes& operator=(const CustomAttributes &) = default ;
        CustomAttributes& operator=(CustomAttributes &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->attrType_ == nullptr
        && this->code_ == nullptr && this->name_ == nullptr && this->value_ == nullptr; };
        // attrType Field Functions 
        bool hasAttrType() const { return this->attrType_ != nullptr;};
        void deleteAttrType() { this->attrType_ = nullptr;};
        inline string getAttrType() const { DARABONBA_PTR_GET_DEFAULT(attrType_, "") };
        inline CustomAttributes& setAttrType(string attrType) { DARABONBA_PTR_SET_VALUE(attrType_, attrType) };


        // code Field Functions 
        bool hasCode() const { return this->code_ != nullptr;};
        void deleteCode() { this->code_ = nullptr;};
        inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
        inline CustomAttributes& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline CustomAttributes& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // value Field Functions 
        bool hasValue() const { return this->value_ != nullptr;};
        void deleteValue() { this->value_ = nullptr;};
        inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
        inline CustomAttributes& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


      protected:
        shared_ptr<string> attrType_ {};
        shared_ptr<string> code_ {};
        shared_ptr<string> name_ {};
        shared_ptr<string> value_ {};
      };

      class Columns : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Columns& obj) { 
          DARABONBA_PTR_TO_JSON(AssociatedEntity, associatedEntity_);
          DARABONBA_PTR_TO_JSON(BizType, bizType_);
          DARABONBA_PTR_TO_JSON(ClassifyName, classifyName_);
          DARABONBA_PTR_TO_JSON(DataType, dataType_);
          DARABONBA_PTR_TO_JSON(Description, description_);
          DARABONBA_PTR_TO_JSON(DisplayName, displayName_);
          DARABONBA_PTR_TO_JSON(Guid, guid_);
          DARABONBA_PTR_TO_JSON(LevelShortName, levelShortName_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(QualityScore, qualityScore_);
          DARABONBA_PTR_TO_JSON(Standards, standards_);
        };
        friend void from_json(const Darabonba::Json& j, Columns& obj) { 
          DARABONBA_PTR_FROM_JSON(AssociatedEntity, associatedEntity_);
          DARABONBA_PTR_FROM_JSON(BizType, bizType_);
          DARABONBA_PTR_FROM_JSON(ClassifyName, classifyName_);
          DARABONBA_PTR_FROM_JSON(DataType, dataType_);
          DARABONBA_PTR_FROM_JSON(Description, description_);
          DARABONBA_PTR_FROM_JSON(DisplayName, displayName_);
          DARABONBA_PTR_FROM_JSON(Guid, guid_);
          DARABONBA_PTR_FROM_JSON(LevelShortName, levelShortName_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(QualityScore, qualityScore_);
          DARABONBA_PTR_FROM_JSON(Standards, standards_);
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
        class Standards : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Standards& obj) { 
            DARABONBA_PTR_TO_JSON(Code, code_);
            DARABONBA_PTR_TO_JSON(Id, id_);
            DARABONBA_PTR_TO_JSON(Name, name_);
          };
          friend void from_json(const Darabonba::Json& j, Standards& obj) { 
            DARABONBA_PTR_FROM_JSON(Code, code_);
            DARABONBA_PTR_FROM_JSON(Id, id_);
            DARABONBA_PTR_FROM_JSON(Name, name_);
          };
          Standards() = default ;
          Standards(const Standards &) = default ;
          Standards(Standards &&) = default ;
          Standards(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Standards() = default ;
          Standards& operator=(const Standards &) = default ;
          Standards& operator=(Standards &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->code_ == nullptr
        && this->id_ == nullptr && this->name_ == nullptr; };
          // code Field Functions 
          bool hasCode() const { return this->code_ != nullptr;};
          void deleteCode() { this->code_ = nullptr;};
          inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
          inline Standards& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


          // id Field Functions 
          bool hasId() const { return this->id_ != nullptr;};
          void deleteId() { this->id_ = nullptr;};
          inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
          inline Standards& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


          // name Field Functions 
          bool hasName() const { return this->name_ != nullptr;};
          void deleteName() { this->name_ = nullptr;};
          inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
          inline Standards& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        protected:
          shared_ptr<string> code_ {};
          shared_ptr<int64_t> id_ {};
          shared_ptr<string> name_ {};
        };

        class AssociatedEntity : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const AssociatedEntity& obj) { 
            DARABONBA_PTR_TO_JSON(BizUnitId, bizUnitId_);
            DARABONBA_PTR_TO_JSON(BizUnitName, bizUnitName_);
            DARABONBA_PTR_TO_JSON(DimensionDisplayName, dimensionDisplayName_);
            DARABONBA_PTR_TO_JSON(DimensionId, dimensionId_);
            DARABONBA_PTR_TO_JSON(DimensionName, dimensionName_);
          };
          friend void from_json(const Darabonba::Json& j, AssociatedEntity& obj) { 
            DARABONBA_PTR_FROM_JSON(BizUnitId, bizUnitId_);
            DARABONBA_PTR_FROM_JSON(BizUnitName, bizUnitName_);
            DARABONBA_PTR_FROM_JSON(DimensionDisplayName, dimensionDisplayName_);
            DARABONBA_PTR_FROM_JSON(DimensionId, dimensionId_);
            DARABONBA_PTR_FROM_JSON(DimensionName, dimensionName_);
          };
          AssociatedEntity() = default ;
          AssociatedEntity(const AssociatedEntity &) = default ;
          AssociatedEntity(AssociatedEntity &&) = default ;
          AssociatedEntity(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~AssociatedEntity() = default ;
          AssociatedEntity& operator=(const AssociatedEntity &) = default ;
          AssociatedEntity& operator=(AssociatedEntity &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->bizUnitId_ == nullptr
        && this->bizUnitName_ == nullptr && this->dimensionDisplayName_ == nullptr && this->dimensionId_ == nullptr && this->dimensionName_ == nullptr; };
          // bizUnitId Field Functions 
          bool hasBizUnitId() const { return this->bizUnitId_ != nullptr;};
          void deleteBizUnitId() { this->bizUnitId_ = nullptr;};
          inline int64_t getBizUnitId() const { DARABONBA_PTR_GET_DEFAULT(bizUnitId_, 0L) };
          inline AssociatedEntity& setBizUnitId(int64_t bizUnitId) { DARABONBA_PTR_SET_VALUE(bizUnitId_, bizUnitId) };


          // bizUnitName Field Functions 
          bool hasBizUnitName() const { return this->bizUnitName_ != nullptr;};
          void deleteBizUnitName() { this->bizUnitName_ = nullptr;};
          inline string getBizUnitName() const { DARABONBA_PTR_GET_DEFAULT(bizUnitName_, "") };
          inline AssociatedEntity& setBizUnitName(string bizUnitName) { DARABONBA_PTR_SET_VALUE(bizUnitName_, bizUnitName) };


          // dimensionDisplayName Field Functions 
          bool hasDimensionDisplayName() const { return this->dimensionDisplayName_ != nullptr;};
          void deleteDimensionDisplayName() { this->dimensionDisplayName_ = nullptr;};
          inline string getDimensionDisplayName() const { DARABONBA_PTR_GET_DEFAULT(dimensionDisplayName_, "") };
          inline AssociatedEntity& setDimensionDisplayName(string dimensionDisplayName) { DARABONBA_PTR_SET_VALUE(dimensionDisplayName_, dimensionDisplayName) };


          // dimensionId Field Functions 
          bool hasDimensionId() const { return this->dimensionId_ != nullptr;};
          void deleteDimensionId() { this->dimensionId_ = nullptr;};
          inline int64_t getDimensionId() const { DARABONBA_PTR_GET_DEFAULT(dimensionId_, 0L) };
          inline AssociatedEntity& setDimensionId(int64_t dimensionId) { DARABONBA_PTR_SET_VALUE(dimensionId_, dimensionId) };


          // dimensionName Field Functions 
          bool hasDimensionName() const { return this->dimensionName_ != nullptr;};
          void deleteDimensionName() { this->dimensionName_ = nullptr;};
          inline string getDimensionName() const { DARABONBA_PTR_GET_DEFAULT(dimensionName_, "") };
          inline AssociatedEntity& setDimensionName(string dimensionName) { DARABONBA_PTR_SET_VALUE(dimensionName_, dimensionName) };


        protected:
          shared_ptr<int64_t> bizUnitId_ {};
          shared_ptr<string> bizUnitName_ {};
          shared_ptr<string> dimensionDisplayName_ {};
          shared_ptr<int64_t> dimensionId_ {};
          shared_ptr<string> dimensionName_ {};
        };

        virtual bool empty() const override { return this->associatedEntity_ == nullptr
        && this->bizType_ == nullptr && this->classifyName_ == nullptr && this->dataType_ == nullptr && this->description_ == nullptr && this->displayName_ == nullptr
        && this->guid_ == nullptr && this->levelShortName_ == nullptr && this->name_ == nullptr && this->qualityScore_ == nullptr && this->standards_ == nullptr; };
        // associatedEntity Field Functions 
        bool hasAssociatedEntity() const { return this->associatedEntity_ != nullptr;};
        void deleteAssociatedEntity() { this->associatedEntity_ = nullptr;};
        inline const Columns::AssociatedEntity & getAssociatedEntity() const { DARABONBA_PTR_GET_CONST(associatedEntity_, Columns::AssociatedEntity) };
        inline Columns::AssociatedEntity getAssociatedEntity() { DARABONBA_PTR_GET(associatedEntity_, Columns::AssociatedEntity) };
        inline Columns& setAssociatedEntity(const Columns::AssociatedEntity & associatedEntity) { DARABONBA_PTR_SET_VALUE(associatedEntity_, associatedEntity) };
        inline Columns& setAssociatedEntity(Columns::AssociatedEntity && associatedEntity) { DARABONBA_PTR_SET_RVALUE(associatedEntity_, associatedEntity) };


        // bizType Field Functions 
        bool hasBizType() const { return this->bizType_ != nullptr;};
        void deleteBizType() { this->bizType_ = nullptr;};
        inline string getBizType() const { DARABONBA_PTR_GET_DEFAULT(bizType_, "") };
        inline Columns& setBizType(string bizType) { DARABONBA_PTR_SET_VALUE(bizType_, bizType) };


        // classifyName Field Functions 
        bool hasClassifyName() const { return this->classifyName_ != nullptr;};
        void deleteClassifyName() { this->classifyName_ = nullptr;};
        inline string getClassifyName() const { DARABONBA_PTR_GET_DEFAULT(classifyName_, "") };
        inline Columns& setClassifyName(string classifyName) { DARABONBA_PTR_SET_VALUE(classifyName_, classifyName) };


        // dataType Field Functions 
        bool hasDataType() const { return this->dataType_ != nullptr;};
        void deleteDataType() { this->dataType_ = nullptr;};
        inline string getDataType() const { DARABONBA_PTR_GET_DEFAULT(dataType_, "") };
        inline Columns& setDataType(string dataType) { DARABONBA_PTR_SET_VALUE(dataType_, dataType) };


        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline Columns& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // displayName Field Functions 
        bool hasDisplayName() const { return this->displayName_ != nullptr;};
        void deleteDisplayName() { this->displayName_ = nullptr;};
        inline string getDisplayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
        inline Columns& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


        // guid Field Functions 
        bool hasGuid() const { return this->guid_ != nullptr;};
        void deleteGuid() { this->guid_ = nullptr;};
        inline string getGuid() const { DARABONBA_PTR_GET_DEFAULT(guid_, "") };
        inline Columns& setGuid(string guid) { DARABONBA_PTR_SET_VALUE(guid_, guid) };


        // levelShortName Field Functions 
        bool hasLevelShortName() const { return this->levelShortName_ != nullptr;};
        void deleteLevelShortName() { this->levelShortName_ = nullptr;};
        inline string getLevelShortName() const { DARABONBA_PTR_GET_DEFAULT(levelShortName_, "") };
        inline Columns& setLevelShortName(string levelShortName) { DARABONBA_PTR_SET_VALUE(levelShortName_, levelShortName) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline Columns& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // qualityScore Field Functions 
        bool hasQualityScore() const { return this->qualityScore_ != nullptr;};
        void deleteQualityScore() { this->qualityScore_ = nullptr;};
        inline double getQualityScore() const { DARABONBA_PTR_GET_DEFAULT(qualityScore_, 0.0) };
        inline Columns& setQualityScore(double qualityScore) { DARABONBA_PTR_SET_VALUE(qualityScore_, qualityScore) };


        // standards Field Functions 
        bool hasStandards() const { return this->standards_ != nullptr;};
        void deleteStandards() { this->standards_ = nullptr;};
        inline const vector<Columns::Standards> & getStandards() const { DARABONBA_PTR_GET_CONST(standards_, vector<Columns::Standards>) };
        inline vector<Columns::Standards> getStandards() { DARABONBA_PTR_GET(standards_, vector<Columns::Standards>) };
        inline Columns& setStandards(const vector<Columns::Standards> & standards) { DARABONBA_PTR_SET_VALUE(standards_, standards) };
        inline Columns& setStandards(vector<Columns::Standards> && standards) { DARABONBA_PTR_SET_RVALUE(standards_, standards) };


      protected:
        shared_ptr<Columns::AssociatedEntity> associatedEntity_ {};
        shared_ptr<string> bizType_ {};
        shared_ptr<string> classifyName_ {};
        shared_ptr<string> dataType_ {};
        shared_ptr<string> description_ {};
        shared_ptr<string> displayName_ {};
        shared_ptr<string> guid_ {};
        shared_ptr<string> levelShortName_ {};
        shared_ptr<string> name_ {};
        shared_ptr<double> qualityScore_ {};
        shared_ptr<vector<Columns::Standards>> standards_ {};
      };

      virtual bool empty() const override { return this->apiCallMode_ == nullptr
        && this->apiGroupName_ == nullptr && this->apiId_ == nullptr && this->apiRequestMethod_ == nullptr && this->assetDescription_ == nullptr && this->assetDetailUrl_ == nullptr
        && this->assetDisplayName_ == nullptr && this->assetFrom_ == nullptr && this->assetFullName_ == nullptr && this->assetName_ == nullptr && this->assetTags_ == nullptr
        && this->assetType_ == nullptr && this->biCatalog_ == nullptr && this->bizUnitId_ == nullptr && this->bizUnitName_ == nullptr && this->chartCount_ == nullptr
        && this->collectionCount_ == nullptr && this->columns_ == nullptr && this->createTime_ == nullptr && this->customAttributes_ == nullptr && this->dataCellId_ == nullptr
        && this->dataCellName_ == nullptr && this->dataSourceName_ == nullptr && this->datasourceId_ == nullptr && this->directories_ == nullptr && this->firstOnShelveTime_ == nullptr
        && this->firstOnShelveUser_ == nullptr && this->granularity_ == nullptr && this->guid_ == nullptr && this->instruction_ == nullptr && this->isDeleted_ == nullptr
        && this->isPartitionTable_ == nullptr && this->lastDdlTime_ == nullptr && this->lastDmlTime_ == nullptr && this->lastOnShelveTime_ == nullptr && this->lastOnShelveUser_ == nullptr
        && this->maintainUserGroups_ == nullptr && this->maintainUserIds_ == nullptr && this->maxSecurityLevel_ == nullptr && this->modifyTime_ == nullptr && this->owner_ == nullptr
        && this->partitionKey_ == nullptr && this->primaryKey_ == nullptr && this->profilingReportViewScopeType_ == nullptr && this->profilingReportViewScopeUserGroups_ == nullptr && this->profilingReportViewScopeUserIds_ == nullptr
        && this->projectId_ == nullptr && this->projectName_ == nullptr && this->readCount_ == nullptr && this->shelveViewScopeType_ == nullptr && this->shelveViewScopeUserGroups_ == nullptr
        && this->shelveViewScopeUserIds_ == nullptr && this->simpleNodeInfos_ == nullptr && this->subType_ == nullptr && this->sumTableGuid_ == nullptr && this->sumTableName_ == nullptr
        && this->tableLifeCycle_ == nullptr && this->tableSizeInBytes_ == nullptr; };
      // apiCallMode Field Functions 
      bool hasApiCallMode() const { return this->apiCallMode_ != nullptr;};
      void deleteApiCallMode() { this->apiCallMode_ = nullptr;};
      inline string getApiCallMode() const { DARABONBA_PTR_GET_DEFAULT(apiCallMode_, "") };
      inline Data& setApiCallMode(string apiCallMode) { DARABONBA_PTR_SET_VALUE(apiCallMode_, apiCallMode) };


      // apiGroupName Field Functions 
      bool hasApiGroupName() const { return this->apiGroupName_ != nullptr;};
      void deleteApiGroupName() { this->apiGroupName_ = nullptr;};
      inline string getApiGroupName() const { DARABONBA_PTR_GET_DEFAULT(apiGroupName_, "") };
      inline Data& setApiGroupName(string apiGroupName) { DARABONBA_PTR_SET_VALUE(apiGroupName_, apiGroupName) };


      // apiId Field Functions 
      bool hasApiId() const { return this->apiId_ != nullptr;};
      void deleteApiId() { this->apiId_ = nullptr;};
      inline int64_t getApiId() const { DARABONBA_PTR_GET_DEFAULT(apiId_, 0L) };
      inline Data& setApiId(int64_t apiId) { DARABONBA_PTR_SET_VALUE(apiId_, apiId) };


      // apiRequestMethod Field Functions 
      bool hasApiRequestMethod() const { return this->apiRequestMethod_ != nullptr;};
      void deleteApiRequestMethod() { this->apiRequestMethod_ = nullptr;};
      inline string getApiRequestMethod() const { DARABONBA_PTR_GET_DEFAULT(apiRequestMethod_, "") };
      inline Data& setApiRequestMethod(string apiRequestMethod) { DARABONBA_PTR_SET_VALUE(apiRequestMethod_, apiRequestMethod) };


      // assetDescription Field Functions 
      bool hasAssetDescription() const { return this->assetDescription_ != nullptr;};
      void deleteAssetDescription() { this->assetDescription_ = nullptr;};
      inline string getAssetDescription() const { DARABONBA_PTR_GET_DEFAULT(assetDescription_, "") };
      inline Data& setAssetDescription(string assetDescription) { DARABONBA_PTR_SET_VALUE(assetDescription_, assetDescription) };


      // assetDetailUrl Field Functions 
      bool hasAssetDetailUrl() const { return this->assetDetailUrl_ != nullptr;};
      void deleteAssetDetailUrl() { this->assetDetailUrl_ = nullptr;};
      inline string getAssetDetailUrl() const { DARABONBA_PTR_GET_DEFAULT(assetDetailUrl_, "") };
      inline Data& setAssetDetailUrl(string assetDetailUrl) { DARABONBA_PTR_SET_VALUE(assetDetailUrl_, assetDetailUrl) };


      // assetDisplayName Field Functions 
      bool hasAssetDisplayName() const { return this->assetDisplayName_ != nullptr;};
      void deleteAssetDisplayName() { this->assetDisplayName_ = nullptr;};
      inline string getAssetDisplayName() const { DARABONBA_PTR_GET_DEFAULT(assetDisplayName_, "") };
      inline Data& setAssetDisplayName(string assetDisplayName) { DARABONBA_PTR_SET_VALUE(assetDisplayName_, assetDisplayName) };


      // assetFrom Field Functions 
      bool hasAssetFrom() const { return this->assetFrom_ != nullptr;};
      void deleteAssetFrom() { this->assetFrom_ = nullptr;};
      inline string getAssetFrom() const { DARABONBA_PTR_GET_DEFAULT(assetFrom_, "") };
      inline Data& setAssetFrom(string assetFrom) { DARABONBA_PTR_SET_VALUE(assetFrom_, assetFrom) };


      // assetFullName Field Functions 
      bool hasAssetFullName() const { return this->assetFullName_ != nullptr;};
      void deleteAssetFullName() { this->assetFullName_ = nullptr;};
      inline string getAssetFullName() const { DARABONBA_PTR_GET_DEFAULT(assetFullName_, "") };
      inline Data& setAssetFullName(string assetFullName) { DARABONBA_PTR_SET_VALUE(assetFullName_, assetFullName) };


      // assetName Field Functions 
      bool hasAssetName() const { return this->assetName_ != nullptr;};
      void deleteAssetName() { this->assetName_ = nullptr;};
      inline string getAssetName() const { DARABONBA_PTR_GET_DEFAULT(assetName_, "") };
      inline Data& setAssetName(string assetName) { DARABONBA_PTR_SET_VALUE(assetName_, assetName) };


      // assetTags Field Functions 
      bool hasAssetTags() const { return this->assetTags_ != nullptr;};
      void deleteAssetTags() { this->assetTags_ = nullptr;};
      inline const vector<string> & getAssetTags() const { DARABONBA_PTR_GET_CONST(assetTags_, vector<string>) };
      inline vector<string> getAssetTags() { DARABONBA_PTR_GET(assetTags_, vector<string>) };
      inline Data& setAssetTags(const vector<string> & assetTags) { DARABONBA_PTR_SET_VALUE(assetTags_, assetTags) };
      inline Data& setAssetTags(vector<string> && assetTags) { DARABONBA_PTR_SET_RVALUE(assetTags_, assetTags) };


      // assetType Field Functions 
      bool hasAssetType() const { return this->assetType_ != nullptr;};
      void deleteAssetType() { this->assetType_ = nullptr;};
      inline string getAssetType() const { DARABONBA_PTR_GET_DEFAULT(assetType_, "") };
      inline Data& setAssetType(string assetType) { DARABONBA_PTR_SET_VALUE(assetType_, assetType) };


      // biCatalog Field Functions 
      bool hasBiCatalog() const { return this->biCatalog_ != nullptr;};
      void deleteBiCatalog() { this->biCatalog_ = nullptr;};
      inline string getBiCatalog() const { DARABONBA_PTR_GET_DEFAULT(biCatalog_, "") };
      inline Data& setBiCatalog(string biCatalog) { DARABONBA_PTR_SET_VALUE(biCatalog_, biCatalog) };


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


      // chartCount Field Functions 
      bool hasChartCount() const { return this->chartCount_ != nullptr;};
      void deleteChartCount() { this->chartCount_ = nullptr;};
      inline int64_t getChartCount() const { DARABONBA_PTR_GET_DEFAULT(chartCount_, 0L) };
      inline Data& setChartCount(int64_t chartCount) { DARABONBA_PTR_SET_VALUE(chartCount_, chartCount) };


      // collectionCount Field Functions 
      bool hasCollectionCount() const { return this->collectionCount_ != nullptr;};
      void deleteCollectionCount() { this->collectionCount_ = nullptr;};
      inline int64_t getCollectionCount() const { DARABONBA_PTR_GET_DEFAULT(collectionCount_, 0L) };
      inline Data& setCollectionCount(int64_t collectionCount) { DARABONBA_PTR_SET_VALUE(collectionCount_, collectionCount) };


      // columns Field Functions 
      bool hasColumns() const { return this->columns_ != nullptr;};
      void deleteColumns() { this->columns_ = nullptr;};
      inline const vector<Data::Columns> & getColumns() const { DARABONBA_PTR_GET_CONST(columns_, vector<Data::Columns>) };
      inline vector<Data::Columns> getColumns() { DARABONBA_PTR_GET(columns_, vector<Data::Columns>) };
      inline Data& setColumns(const vector<Data::Columns> & columns) { DARABONBA_PTR_SET_VALUE(columns_, columns) };
      inline Data& setColumns(vector<Data::Columns> && columns) { DARABONBA_PTR_SET_RVALUE(columns_, columns) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline Data& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // customAttributes Field Functions 
      bool hasCustomAttributes() const { return this->customAttributes_ != nullptr;};
      void deleteCustomAttributes() { this->customAttributes_ = nullptr;};
      inline const vector<Data::CustomAttributes> & getCustomAttributes() const { DARABONBA_PTR_GET_CONST(customAttributes_, vector<Data::CustomAttributes>) };
      inline vector<Data::CustomAttributes> getCustomAttributes() { DARABONBA_PTR_GET(customAttributes_, vector<Data::CustomAttributes>) };
      inline Data& setCustomAttributes(const vector<Data::CustomAttributes> & customAttributes) { DARABONBA_PTR_SET_VALUE(customAttributes_, customAttributes) };
      inline Data& setCustomAttributes(vector<Data::CustomAttributes> && customAttributes) { DARABONBA_PTR_SET_RVALUE(customAttributes_, customAttributes) };


      // dataCellId Field Functions 
      bool hasDataCellId() const { return this->dataCellId_ != nullptr;};
      void deleteDataCellId() { this->dataCellId_ = nullptr;};
      inline string getDataCellId() const { DARABONBA_PTR_GET_DEFAULT(dataCellId_, "") };
      inline Data& setDataCellId(string dataCellId) { DARABONBA_PTR_SET_VALUE(dataCellId_, dataCellId) };


      // dataCellName Field Functions 
      bool hasDataCellName() const { return this->dataCellName_ != nullptr;};
      void deleteDataCellName() { this->dataCellName_ = nullptr;};
      inline string getDataCellName() const { DARABONBA_PTR_GET_DEFAULT(dataCellName_, "") };
      inline Data& setDataCellName(string dataCellName) { DARABONBA_PTR_SET_VALUE(dataCellName_, dataCellName) };


      // dataSourceName Field Functions 
      bool hasDataSourceName() const { return this->dataSourceName_ != nullptr;};
      void deleteDataSourceName() { this->dataSourceName_ = nullptr;};
      inline string getDataSourceName() const { DARABONBA_PTR_GET_DEFAULT(dataSourceName_, "") };
      inline Data& setDataSourceName(string dataSourceName) { DARABONBA_PTR_SET_VALUE(dataSourceName_, dataSourceName) };


      // datasourceId Field Functions 
      bool hasDatasourceId() const { return this->datasourceId_ != nullptr;};
      void deleteDatasourceId() { this->datasourceId_ = nullptr;};
      inline int64_t getDatasourceId() const { DARABONBA_PTR_GET_DEFAULT(datasourceId_, 0L) };
      inline Data& setDatasourceId(int64_t datasourceId) { DARABONBA_PTR_SET_VALUE(datasourceId_, datasourceId) };


      // directories Field Functions 
      bool hasDirectories() const { return this->directories_ != nullptr;};
      void deleteDirectories() { this->directories_ = nullptr;};
      inline const vector<Data::Directories> & getDirectories() const { DARABONBA_PTR_GET_CONST(directories_, vector<Data::Directories>) };
      inline vector<Data::Directories> getDirectories() { DARABONBA_PTR_GET(directories_, vector<Data::Directories>) };
      inline Data& setDirectories(const vector<Data::Directories> & directories) { DARABONBA_PTR_SET_VALUE(directories_, directories) };
      inline Data& setDirectories(vector<Data::Directories> && directories) { DARABONBA_PTR_SET_RVALUE(directories_, directories) };


      // firstOnShelveTime Field Functions 
      bool hasFirstOnShelveTime() const { return this->firstOnShelveTime_ != nullptr;};
      void deleteFirstOnShelveTime() { this->firstOnShelveTime_ = nullptr;};
      inline string getFirstOnShelveTime() const { DARABONBA_PTR_GET_DEFAULT(firstOnShelveTime_, "") };
      inline Data& setFirstOnShelveTime(string firstOnShelveTime) { DARABONBA_PTR_SET_VALUE(firstOnShelveTime_, firstOnShelveTime) };


      // firstOnShelveUser Field Functions 
      bool hasFirstOnShelveUser() const { return this->firstOnShelveUser_ != nullptr;};
      void deleteFirstOnShelveUser() { this->firstOnShelveUser_ = nullptr;};
      inline const Data::FirstOnShelveUser & getFirstOnShelveUser() const { DARABONBA_PTR_GET_CONST(firstOnShelveUser_, Data::FirstOnShelveUser) };
      inline Data::FirstOnShelveUser getFirstOnShelveUser() { DARABONBA_PTR_GET(firstOnShelveUser_, Data::FirstOnShelveUser) };
      inline Data& setFirstOnShelveUser(const Data::FirstOnShelveUser & firstOnShelveUser) { DARABONBA_PTR_SET_VALUE(firstOnShelveUser_, firstOnShelveUser) };
      inline Data& setFirstOnShelveUser(Data::FirstOnShelveUser && firstOnShelveUser) { DARABONBA_PTR_SET_RVALUE(firstOnShelveUser_, firstOnShelveUser) };


      // granularity Field Functions 
      bool hasGranularity() const { return this->granularity_ != nullptr;};
      void deleteGranularity() { this->granularity_ = nullptr;};
      inline string getGranularity() const { DARABONBA_PTR_GET_DEFAULT(granularity_, "") };
      inline Data& setGranularity(string granularity) { DARABONBA_PTR_SET_VALUE(granularity_, granularity) };


      // guid Field Functions 
      bool hasGuid() const { return this->guid_ != nullptr;};
      void deleteGuid() { this->guid_ = nullptr;};
      inline string getGuid() const { DARABONBA_PTR_GET_DEFAULT(guid_, "") };
      inline Data& setGuid(string guid) { DARABONBA_PTR_SET_VALUE(guid_, guid) };


      // instruction Field Functions 
      bool hasInstruction() const { return this->instruction_ != nullptr;};
      void deleteInstruction() { this->instruction_ = nullptr;};
      inline string getInstruction() const { DARABONBA_PTR_GET_DEFAULT(instruction_, "") };
      inline Data& setInstruction(string instruction) { DARABONBA_PTR_SET_VALUE(instruction_, instruction) };


      // isDeleted Field Functions 
      bool hasIsDeleted() const { return this->isDeleted_ != nullptr;};
      void deleteIsDeleted() { this->isDeleted_ = nullptr;};
      inline bool getIsDeleted() const { DARABONBA_PTR_GET_DEFAULT(isDeleted_, false) };
      inline Data& setIsDeleted(bool isDeleted) { DARABONBA_PTR_SET_VALUE(isDeleted_, isDeleted) };


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


      // lastOnShelveTime Field Functions 
      bool hasLastOnShelveTime() const { return this->lastOnShelveTime_ != nullptr;};
      void deleteLastOnShelveTime() { this->lastOnShelveTime_ = nullptr;};
      inline string getLastOnShelveTime() const { DARABONBA_PTR_GET_DEFAULT(lastOnShelveTime_, "") };
      inline Data& setLastOnShelveTime(string lastOnShelveTime) { DARABONBA_PTR_SET_VALUE(lastOnShelveTime_, lastOnShelveTime) };


      // lastOnShelveUser Field Functions 
      bool hasLastOnShelveUser() const { return this->lastOnShelveUser_ != nullptr;};
      void deleteLastOnShelveUser() { this->lastOnShelveUser_ = nullptr;};
      inline const Data::LastOnShelveUser & getLastOnShelveUser() const { DARABONBA_PTR_GET_CONST(lastOnShelveUser_, Data::LastOnShelveUser) };
      inline Data::LastOnShelveUser getLastOnShelveUser() { DARABONBA_PTR_GET(lastOnShelveUser_, Data::LastOnShelveUser) };
      inline Data& setLastOnShelveUser(const Data::LastOnShelveUser & lastOnShelveUser) { DARABONBA_PTR_SET_VALUE(lastOnShelveUser_, lastOnShelveUser) };
      inline Data& setLastOnShelveUser(Data::LastOnShelveUser && lastOnShelveUser) { DARABONBA_PTR_SET_RVALUE(lastOnShelveUser_, lastOnShelveUser) };


      // maintainUserGroups Field Functions 
      bool hasMaintainUserGroups() const { return this->maintainUserGroups_ != nullptr;};
      void deleteMaintainUserGroups() { this->maintainUserGroups_ = nullptr;};
      inline const vector<string> & getMaintainUserGroups() const { DARABONBA_PTR_GET_CONST(maintainUserGroups_, vector<string>) };
      inline vector<string> getMaintainUserGroups() { DARABONBA_PTR_GET(maintainUserGroups_, vector<string>) };
      inline Data& setMaintainUserGroups(const vector<string> & maintainUserGroups) { DARABONBA_PTR_SET_VALUE(maintainUserGroups_, maintainUserGroups) };
      inline Data& setMaintainUserGroups(vector<string> && maintainUserGroups) { DARABONBA_PTR_SET_RVALUE(maintainUserGroups_, maintainUserGroups) };


      // maintainUserIds Field Functions 
      bool hasMaintainUserIds() const { return this->maintainUserIds_ != nullptr;};
      void deleteMaintainUserIds() { this->maintainUserIds_ = nullptr;};
      inline const vector<string> & getMaintainUserIds() const { DARABONBA_PTR_GET_CONST(maintainUserIds_, vector<string>) };
      inline vector<string> getMaintainUserIds() { DARABONBA_PTR_GET(maintainUserIds_, vector<string>) };
      inline Data& setMaintainUserIds(const vector<string> & maintainUserIds) { DARABONBA_PTR_SET_VALUE(maintainUserIds_, maintainUserIds) };
      inline Data& setMaintainUserIds(vector<string> && maintainUserIds) { DARABONBA_PTR_SET_RVALUE(maintainUserIds_, maintainUserIds) };


      // maxSecurityLevel Field Functions 
      bool hasMaxSecurityLevel() const { return this->maxSecurityLevel_ != nullptr;};
      void deleteMaxSecurityLevel() { this->maxSecurityLevel_ = nullptr;};
      inline string getMaxSecurityLevel() const { DARABONBA_PTR_GET_DEFAULT(maxSecurityLevel_, "") };
      inline Data& setMaxSecurityLevel(string maxSecurityLevel) { DARABONBA_PTR_SET_VALUE(maxSecurityLevel_, maxSecurityLevel) };


      // modifyTime Field Functions 
      bool hasModifyTime() const { return this->modifyTime_ != nullptr;};
      void deleteModifyTime() { this->modifyTime_ = nullptr;};
      inline string getModifyTime() const { DARABONBA_PTR_GET_DEFAULT(modifyTime_, "") };
      inline Data& setModifyTime(string modifyTime) { DARABONBA_PTR_SET_VALUE(modifyTime_, modifyTime) };


      // owner Field Functions 
      bool hasOwner() const { return this->owner_ != nullptr;};
      void deleteOwner() { this->owner_ = nullptr;};
      inline const Data::Owner & getOwner() const { DARABONBA_PTR_GET_CONST(owner_, Data::Owner) };
      inline Data::Owner getOwner() { DARABONBA_PTR_GET(owner_, Data::Owner) };
      inline Data& setOwner(const Data::Owner & owner) { DARABONBA_PTR_SET_VALUE(owner_, owner) };
      inline Data& setOwner(Data::Owner && owner) { DARABONBA_PTR_SET_RVALUE(owner_, owner) };


      // partitionKey Field Functions 
      bool hasPartitionKey() const { return this->partitionKey_ != nullptr;};
      void deletePartitionKey() { this->partitionKey_ = nullptr;};
      inline string getPartitionKey() const { DARABONBA_PTR_GET_DEFAULT(partitionKey_, "") };
      inline Data& setPartitionKey(string partitionKey) { DARABONBA_PTR_SET_VALUE(partitionKey_, partitionKey) };


      // primaryKey Field Functions 
      bool hasPrimaryKey() const { return this->primaryKey_ != nullptr;};
      void deletePrimaryKey() { this->primaryKey_ = nullptr;};
      inline string getPrimaryKey() const { DARABONBA_PTR_GET_DEFAULT(primaryKey_, "") };
      inline Data& setPrimaryKey(string primaryKey) { DARABONBA_PTR_SET_VALUE(primaryKey_, primaryKey) };


      // profilingReportViewScopeType Field Functions 
      bool hasProfilingReportViewScopeType() const { return this->profilingReportViewScopeType_ != nullptr;};
      void deleteProfilingReportViewScopeType() { this->profilingReportViewScopeType_ = nullptr;};
      inline string getProfilingReportViewScopeType() const { DARABONBA_PTR_GET_DEFAULT(profilingReportViewScopeType_, "") };
      inline Data& setProfilingReportViewScopeType(string profilingReportViewScopeType) { DARABONBA_PTR_SET_VALUE(profilingReportViewScopeType_, profilingReportViewScopeType) };


      // profilingReportViewScopeUserGroups Field Functions 
      bool hasProfilingReportViewScopeUserGroups() const { return this->profilingReportViewScopeUserGroups_ != nullptr;};
      void deleteProfilingReportViewScopeUserGroups() { this->profilingReportViewScopeUserGroups_ = nullptr;};
      inline const vector<string> & getProfilingReportViewScopeUserGroups() const { DARABONBA_PTR_GET_CONST(profilingReportViewScopeUserGroups_, vector<string>) };
      inline vector<string> getProfilingReportViewScopeUserGroups() { DARABONBA_PTR_GET(profilingReportViewScopeUserGroups_, vector<string>) };
      inline Data& setProfilingReportViewScopeUserGroups(const vector<string> & profilingReportViewScopeUserGroups) { DARABONBA_PTR_SET_VALUE(profilingReportViewScopeUserGroups_, profilingReportViewScopeUserGroups) };
      inline Data& setProfilingReportViewScopeUserGroups(vector<string> && profilingReportViewScopeUserGroups) { DARABONBA_PTR_SET_RVALUE(profilingReportViewScopeUserGroups_, profilingReportViewScopeUserGroups) };


      // profilingReportViewScopeUserIds Field Functions 
      bool hasProfilingReportViewScopeUserIds() const { return this->profilingReportViewScopeUserIds_ != nullptr;};
      void deleteProfilingReportViewScopeUserIds() { this->profilingReportViewScopeUserIds_ = nullptr;};
      inline const vector<string> & getProfilingReportViewScopeUserIds() const { DARABONBA_PTR_GET_CONST(profilingReportViewScopeUserIds_, vector<string>) };
      inline vector<string> getProfilingReportViewScopeUserIds() { DARABONBA_PTR_GET(profilingReportViewScopeUserIds_, vector<string>) };
      inline Data& setProfilingReportViewScopeUserIds(const vector<string> & profilingReportViewScopeUserIds) { DARABONBA_PTR_SET_VALUE(profilingReportViewScopeUserIds_, profilingReportViewScopeUserIds) };
      inline Data& setProfilingReportViewScopeUserIds(vector<string> && profilingReportViewScopeUserIds) { DARABONBA_PTR_SET_RVALUE(profilingReportViewScopeUserIds_, profilingReportViewScopeUserIds) };


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


      // readCount Field Functions 
      bool hasReadCount() const { return this->readCount_ != nullptr;};
      void deleteReadCount() { this->readCount_ = nullptr;};
      inline int64_t getReadCount() const { DARABONBA_PTR_GET_DEFAULT(readCount_, 0L) };
      inline Data& setReadCount(int64_t readCount) { DARABONBA_PTR_SET_VALUE(readCount_, readCount) };


      // shelveViewScopeType Field Functions 
      bool hasShelveViewScopeType() const { return this->shelveViewScopeType_ != nullptr;};
      void deleteShelveViewScopeType() { this->shelveViewScopeType_ = nullptr;};
      inline string getShelveViewScopeType() const { DARABONBA_PTR_GET_DEFAULT(shelveViewScopeType_, "") };
      inline Data& setShelveViewScopeType(string shelveViewScopeType) { DARABONBA_PTR_SET_VALUE(shelveViewScopeType_, shelveViewScopeType) };


      // shelveViewScopeUserGroups Field Functions 
      bool hasShelveViewScopeUserGroups() const { return this->shelveViewScopeUserGroups_ != nullptr;};
      void deleteShelveViewScopeUserGroups() { this->shelveViewScopeUserGroups_ = nullptr;};
      inline const vector<string> & getShelveViewScopeUserGroups() const { DARABONBA_PTR_GET_CONST(shelveViewScopeUserGroups_, vector<string>) };
      inline vector<string> getShelveViewScopeUserGroups() { DARABONBA_PTR_GET(shelveViewScopeUserGroups_, vector<string>) };
      inline Data& setShelveViewScopeUserGroups(const vector<string> & shelveViewScopeUserGroups) { DARABONBA_PTR_SET_VALUE(shelveViewScopeUserGroups_, shelveViewScopeUserGroups) };
      inline Data& setShelveViewScopeUserGroups(vector<string> && shelveViewScopeUserGroups) { DARABONBA_PTR_SET_RVALUE(shelveViewScopeUserGroups_, shelveViewScopeUserGroups) };


      // shelveViewScopeUserIds Field Functions 
      bool hasShelveViewScopeUserIds() const { return this->shelveViewScopeUserIds_ != nullptr;};
      void deleteShelveViewScopeUserIds() { this->shelveViewScopeUserIds_ = nullptr;};
      inline const vector<string> & getShelveViewScopeUserIds() const { DARABONBA_PTR_GET_CONST(shelveViewScopeUserIds_, vector<string>) };
      inline vector<string> getShelveViewScopeUserIds() { DARABONBA_PTR_GET(shelveViewScopeUserIds_, vector<string>) };
      inline Data& setShelveViewScopeUserIds(const vector<string> & shelveViewScopeUserIds) { DARABONBA_PTR_SET_VALUE(shelveViewScopeUserIds_, shelveViewScopeUserIds) };
      inline Data& setShelveViewScopeUserIds(vector<string> && shelveViewScopeUserIds) { DARABONBA_PTR_SET_RVALUE(shelveViewScopeUserIds_, shelveViewScopeUserIds) };


      // simpleNodeInfos Field Functions 
      bool hasSimpleNodeInfos() const { return this->simpleNodeInfos_ != nullptr;};
      void deleteSimpleNodeInfos() { this->simpleNodeInfos_ = nullptr;};
      inline const vector<Data::SimpleNodeInfos> & getSimpleNodeInfos() const { DARABONBA_PTR_GET_CONST(simpleNodeInfos_, vector<Data::SimpleNodeInfos>) };
      inline vector<Data::SimpleNodeInfos> getSimpleNodeInfos() { DARABONBA_PTR_GET(simpleNodeInfos_, vector<Data::SimpleNodeInfos>) };
      inline Data& setSimpleNodeInfos(const vector<Data::SimpleNodeInfos> & simpleNodeInfos) { DARABONBA_PTR_SET_VALUE(simpleNodeInfos_, simpleNodeInfos) };
      inline Data& setSimpleNodeInfos(vector<Data::SimpleNodeInfos> && simpleNodeInfos) { DARABONBA_PTR_SET_RVALUE(simpleNodeInfos_, simpleNodeInfos) };


      // subType Field Functions 
      bool hasSubType() const { return this->subType_ != nullptr;};
      void deleteSubType() { this->subType_ = nullptr;};
      inline string getSubType() const { DARABONBA_PTR_GET_DEFAULT(subType_, "") };
      inline Data& setSubType(string subType) { DARABONBA_PTR_SET_VALUE(subType_, subType) };


      // sumTableGuid Field Functions 
      bool hasSumTableGuid() const { return this->sumTableGuid_ != nullptr;};
      void deleteSumTableGuid() { this->sumTableGuid_ = nullptr;};
      inline string getSumTableGuid() const { DARABONBA_PTR_GET_DEFAULT(sumTableGuid_, "") };
      inline Data& setSumTableGuid(string sumTableGuid) { DARABONBA_PTR_SET_VALUE(sumTableGuid_, sumTableGuid) };


      // sumTableName Field Functions 
      bool hasSumTableName() const { return this->sumTableName_ != nullptr;};
      void deleteSumTableName() { this->sumTableName_ = nullptr;};
      inline string getSumTableName() const { DARABONBA_PTR_GET_DEFAULT(sumTableName_, "") };
      inline Data& setSumTableName(string sumTableName) { DARABONBA_PTR_SET_VALUE(sumTableName_, sumTableName) };


      // tableLifeCycle Field Functions 
      bool hasTableLifeCycle() const { return this->tableLifeCycle_ != nullptr;};
      void deleteTableLifeCycle() { this->tableLifeCycle_ = nullptr;};
      inline string getTableLifeCycle() const { DARABONBA_PTR_GET_DEFAULT(tableLifeCycle_, "") };
      inline Data& setTableLifeCycle(string tableLifeCycle) { DARABONBA_PTR_SET_VALUE(tableLifeCycle_, tableLifeCycle) };


      // tableSizeInBytes Field Functions 
      bool hasTableSizeInBytes() const { return this->tableSizeInBytes_ != nullptr;};
      void deleteTableSizeInBytes() { this->tableSizeInBytes_ = nullptr;};
      inline int64_t getTableSizeInBytes() const { DARABONBA_PTR_GET_DEFAULT(tableSizeInBytes_, 0L) };
      inline Data& setTableSizeInBytes(int64_t tableSizeInBytes) { DARABONBA_PTR_SET_VALUE(tableSizeInBytes_, tableSizeInBytes) };


    protected:
      shared_ptr<string> apiCallMode_ {};
      shared_ptr<string> apiGroupName_ {};
      shared_ptr<int64_t> apiId_ {};
      shared_ptr<string> apiRequestMethod_ {};
      shared_ptr<string> assetDescription_ {};
      shared_ptr<string> assetDetailUrl_ {};
      shared_ptr<string> assetDisplayName_ {};
      shared_ptr<string> assetFrom_ {};
      shared_ptr<string> assetFullName_ {};
      shared_ptr<string> assetName_ {};
      shared_ptr<vector<string>> assetTags_ {};
      shared_ptr<string> assetType_ {};
      shared_ptr<string> biCatalog_ {};
      shared_ptr<int64_t> bizUnitId_ {};
      shared_ptr<string> bizUnitName_ {};
      shared_ptr<int64_t> chartCount_ {};
      shared_ptr<int64_t> collectionCount_ {};
      shared_ptr<vector<Data::Columns>> columns_ {};
      shared_ptr<string> createTime_ {};
      shared_ptr<vector<Data::CustomAttributes>> customAttributes_ {};
      shared_ptr<string> dataCellId_ {};
      shared_ptr<string> dataCellName_ {};
      shared_ptr<string> dataSourceName_ {};
      shared_ptr<int64_t> datasourceId_ {};
      shared_ptr<vector<Data::Directories>> directories_ {};
      shared_ptr<string> firstOnShelveTime_ {};
      shared_ptr<Data::FirstOnShelveUser> firstOnShelveUser_ {};
      shared_ptr<string> granularity_ {};
      shared_ptr<string> guid_ {};
      shared_ptr<string> instruction_ {};
      shared_ptr<bool> isDeleted_ {};
      shared_ptr<bool> isPartitionTable_ {};
      shared_ptr<string> lastDdlTime_ {};
      shared_ptr<string> lastDmlTime_ {};
      shared_ptr<string> lastOnShelveTime_ {};
      shared_ptr<Data::LastOnShelveUser> lastOnShelveUser_ {};
      shared_ptr<vector<string>> maintainUserGroups_ {};
      shared_ptr<vector<string>> maintainUserIds_ {};
      shared_ptr<string> maxSecurityLevel_ {};
      shared_ptr<string> modifyTime_ {};
      shared_ptr<Data::Owner> owner_ {};
      shared_ptr<string> partitionKey_ {};
      shared_ptr<string> primaryKey_ {};
      shared_ptr<string> profilingReportViewScopeType_ {};
      shared_ptr<vector<string>> profilingReportViewScopeUserGroups_ {};
      shared_ptr<vector<string>> profilingReportViewScopeUserIds_ {};
      shared_ptr<int64_t> projectId_ {};
      shared_ptr<string> projectName_ {};
      shared_ptr<int64_t> readCount_ {};
      shared_ptr<string> shelveViewScopeType_ {};
      shared_ptr<vector<string>> shelveViewScopeUserGroups_ {};
      shared_ptr<vector<string>> shelveViewScopeUserIds_ {};
      shared_ptr<vector<Data::SimpleNodeInfos>> simpleNodeInfos_ {};
      shared_ptr<string> subType_ {};
      shared_ptr<string> sumTableGuid_ {};
      shared_ptr<string> sumTableName_ {};
      shared_ptr<string> tableLifeCycle_ {};
      shared_ptr<int64_t> tableSizeInBytes_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetCatalogAssetDetailsResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetCatalogAssetDetailsResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetCatalogAssetDetailsResponseBody::Data) };
    inline GetCatalogAssetDetailsResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetCatalogAssetDetailsResponseBody::Data) };
    inline GetCatalogAssetDetailsResponseBody& setData(const GetCatalogAssetDetailsResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetCatalogAssetDetailsResponseBody& setData(GetCatalogAssetDetailsResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline GetCatalogAssetDetailsResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetCatalogAssetDetailsResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetCatalogAssetDetailsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetCatalogAssetDetailsResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<GetCatalogAssetDetailsResponseBody::Data> data_ {};
    shared_ptr<int32_t> httpStatusCode_ {};
    shared_ptr<string> message_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
