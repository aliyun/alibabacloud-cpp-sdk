// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTINSTANCESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTINSTANCESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class ListInstancesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListInstancesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(InstanceList, instanceList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListInstancesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(InstanceList, instanceList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListInstancesResponseBody() = default ;
    ListInstancesResponseBody(const ListInstancesResponseBody &) = default ;
    ListInstancesResponseBody(ListInstancesResponseBody &&) = default ;
    ListInstancesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListInstancesResponseBody() = default ;
    ListInstancesResponseBody& operator=(const ListInstancesResponseBody &) = default ;
    ListInstancesResponseBody& operator=(ListInstancesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class InstanceList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const InstanceList& obj) { 
        DARABONBA_PTR_TO_JSON(Instance, instance_);
      };
      friend void from_json(const Darabonba::Json& j, InstanceList& obj) { 
        DARABONBA_PTR_FROM_JSON(Instance, instance_);
      };
      InstanceList() = default ;
      InstanceList(const InstanceList &) = default ;
      InstanceList(InstanceList &&) = default ;
      InstanceList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~InstanceList() = default ;
      InstanceList& operator=(const InstanceList &) = default ;
      InstanceList& operator=(InstanceList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Instance : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Instance& obj) { 
          DARABONBA_PTR_TO_JSON(DataLinkName, dataLinkName_);
          DARABONBA_PTR_TO_JSON(DatabasePassword, databasePassword_);
          DARABONBA_PTR_TO_JSON(DatabaseUser, databaseUser_);
          DARABONBA_PTR_TO_JSON(DbaId, dbaId_);
          DARABONBA_PTR_TO_JSON(DbaNickName, dbaNickName_);
          DARABONBA_PTR_TO_JSON(DdlOnline, ddlOnline_);
          DARABONBA_PTR_TO_JSON(EcsInstanceId, ecsInstanceId_);
          DARABONBA_PTR_TO_JSON(EcsRegion, ecsRegion_);
          DARABONBA_PTR_TO_JSON(EnvType, envType_);
          DARABONBA_PTR_TO_JSON(ExportTimeout, exportTimeout_);
          DARABONBA_PTR_TO_JSON(Host, host_);
          DARABONBA_PTR_TO_JSON(InstanceAlias, instanceAlias_);
          DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_TO_JSON(InstanceSource, instanceSource_);
          DARABONBA_PTR_TO_JSON(InstanceType, instanceType_);
          DARABONBA_PTR_TO_JSON(OwnerIdList, ownerIdList_);
          DARABONBA_PTR_TO_JSON(OwnerNameList, ownerNameList_);
          DARABONBA_PTR_TO_JSON(Port, port_);
          DARABONBA_PTR_TO_JSON(QueryTimeout, queryTimeout_);
          DARABONBA_PTR_TO_JSON(SafeRuleId, safeRuleId_);
          DARABONBA_PTR_TO_JSON(SellSitd, sellSitd_);
          DARABONBA_PTR_TO_JSON(SellTrust, sellTrust_);
          DARABONBA_PTR_TO_JSON(Sid, sid_);
          DARABONBA_PTR_TO_JSON(StandardGroup, standardGroup_);
          DARABONBA_PTR_TO_JSON(State, state_);
          DARABONBA_PTR_TO_JSON(UseDsql, useDsql_);
          DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
        };
        friend void from_json(const Darabonba::Json& j, Instance& obj) { 
          DARABONBA_PTR_FROM_JSON(DataLinkName, dataLinkName_);
          DARABONBA_PTR_FROM_JSON(DatabasePassword, databasePassword_);
          DARABONBA_PTR_FROM_JSON(DatabaseUser, databaseUser_);
          DARABONBA_PTR_FROM_JSON(DbaId, dbaId_);
          DARABONBA_PTR_FROM_JSON(DbaNickName, dbaNickName_);
          DARABONBA_PTR_FROM_JSON(DdlOnline, ddlOnline_);
          DARABONBA_PTR_FROM_JSON(EcsInstanceId, ecsInstanceId_);
          DARABONBA_PTR_FROM_JSON(EcsRegion, ecsRegion_);
          DARABONBA_PTR_FROM_JSON(EnvType, envType_);
          DARABONBA_PTR_FROM_JSON(ExportTimeout, exportTimeout_);
          DARABONBA_PTR_FROM_JSON(Host, host_);
          DARABONBA_PTR_FROM_JSON(InstanceAlias, instanceAlias_);
          DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_FROM_JSON(InstanceSource, instanceSource_);
          DARABONBA_PTR_FROM_JSON(InstanceType, instanceType_);
          DARABONBA_PTR_FROM_JSON(OwnerIdList, ownerIdList_);
          DARABONBA_PTR_FROM_JSON(OwnerNameList, ownerNameList_);
          DARABONBA_PTR_FROM_JSON(Port, port_);
          DARABONBA_PTR_FROM_JSON(QueryTimeout, queryTimeout_);
          DARABONBA_PTR_FROM_JSON(SafeRuleId, safeRuleId_);
          DARABONBA_PTR_FROM_JSON(SellSitd, sellSitd_);
          DARABONBA_PTR_FROM_JSON(SellTrust, sellTrust_);
          DARABONBA_PTR_FROM_JSON(Sid, sid_);
          DARABONBA_PTR_FROM_JSON(StandardGroup, standardGroup_);
          DARABONBA_PTR_FROM_JSON(State, state_);
          DARABONBA_PTR_FROM_JSON(UseDsql, useDsql_);
          DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
        };
        Instance() = default ;
        Instance(const Instance &) = default ;
        Instance(Instance &&) = default ;
        Instance(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Instance() = default ;
        Instance& operator=(const Instance &) = default ;
        Instance& operator=(Instance &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class StandardGroup : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const StandardGroup& obj) { 
            DARABONBA_PTR_TO_JSON(GroupMode, groupMode_);
            DARABONBA_PTR_TO_JSON(GroupName, groupName_);
          };
          friend void from_json(const Darabonba::Json& j, StandardGroup& obj) { 
            DARABONBA_PTR_FROM_JSON(GroupMode, groupMode_);
            DARABONBA_PTR_FROM_JSON(GroupName, groupName_);
          };
          StandardGroup() = default ;
          StandardGroup(const StandardGroup &) = default ;
          StandardGroup(StandardGroup &&) = default ;
          StandardGroup(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~StandardGroup() = default ;
          StandardGroup& operator=(const StandardGroup &) = default ;
          StandardGroup& operator=(StandardGroup &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->groupMode_ == nullptr
        && this->groupName_ == nullptr; };
          // groupMode Field Functions 
          bool hasGroupMode() const { return this->groupMode_ != nullptr;};
          void deleteGroupMode() { this->groupMode_ = nullptr;};
          inline string getGroupMode() const { DARABONBA_PTR_GET_DEFAULT(groupMode_, "") };
          inline StandardGroup& setGroupMode(string groupMode) { DARABONBA_PTR_SET_VALUE(groupMode_, groupMode) };


          // groupName Field Functions 
          bool hasGroupName() const { return this->groupName_ != nullptr;};
          void deleteGroupName() { this->groupName_ = nullptr;};
          inline string getGroupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
          inline StandardGroup& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


        protected:
          // The type of the control mode. Valid values:
          // 
          // *   **COMMON**: Security Collaboration
          // *   **NONE_CONTROL**: Flexible Management
          // *   **STABLE**: Stable Change
          shared_ptr<string> groupMode_ {};
          // The name of the security rule corresponding to the control mode.
          shared_ptr<string> groupName_ {};
        };

        class OwnerNameList : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const OwnerNameList& obj) { 
            DARABONBA_PTR_TO_JSON(OwnerNames, ownerNames_);
          };
          friend void from_json(const Darabonba::Json& j, OwnerNameList& obj) { 
            DARABONBA_PTR_FROM_JSON(OwnerNames, ownerNames_);
          };
          OwnerNameList() = default ;
          OwnerNameList(const OwnerNameList &) = default ;
          OwnerNameList(OwnerNameList &&) = default ;
          OwnerNameList(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~OwnerNameList() = default ;
          OwnerNameList& operator=(const OwnerNameList &) = default ;
          OwnerNameList& operator=(OwnerNameList &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->ownerNames_ == nullptr; };
          // ownerNames Field Functions 
          bool hasOwnerNames() const { return this->ownerNames_ != nullptr;};
          void deleteOwnerNames() { this->ownerNames_ = nullptr;};
          inline const vector<string> & getOwnerNames() const { DARABONBA_PTR_GET_CONST(ownerNames_, vector<string>) };
          inline vector<string> getOwnerNames() { DARABONBA_PTR_GET(ownerNames_, vector<string>) };
          inline OwnerNameList& setOwnerNames(const vector<string> & ownerNames) { DARABONBA_PTR_SET_VALUE(ownerNames_, ownerNames) };
          inline OwnerNameList& setOwnerNames(vector<string> && ownerNames) { DARABONBA_PTR_SET_RVALUE(ownerNames_, ownerNames) };


        protected:
          shared_ptr<vector<string>> ownerNames_ {};
        };

        class OwnerIdList : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const OwnerIdList& obj) { 
            DARABONBA_PTR_TO_JSON(OwnerIds, ownerIds_);
          };
          friend void from_json(const Darabonba::Json& j, OwnerIdList& obj) { 
            DARABONBA_PTR_FROM_JSON(OwnerIds, ownerIds_);
          };
          OwnerIdList() = default ;
          OwnerIdList(const OwnerIdList &) = default ;
          OwnerIdList(OwnerIdList &&) = default ;
          OwnerIdList(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~OwnerIdList() = default ;
          OwnerIdList& operator=(const OwnerIdList &) = default ;
          OwnerIdList& operator=(OwnerIdList &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->ownerIds_ == nullptr; };
          // ownerIds Field Functions 
          bool hasOwnerIds() const { return this->ownerIds_ != nullptr;};
          void deleteOwnerIds() { this->ownerIds_ = nullptr;};
          inline const vector<string> & getOwnerIds() const { DARABONBA_PTR_GET_CONST(ownerIds_, vector<string>) };
          inline vector<string> getOwnerIds() { DARABONBA_PTR_GET(ownerIds_, vector<string>) };
          inline OwnerIdList& setOwnerIds(const vector<string> & ownerIds) { DARABONBA_PTR_SET_VALUE(ownerIds_, ownerIds) };
          inline OwnerIdList& setOwnerIds(vector<string> && ownerIds) { DARABONBA_PTR_SET_RVALUE(ownerIds_, ownerIds) };


        protected:
          shared_ptr<vector<string>> ownerIds_ {};
        };

        virtual bool empty() const override { return this->dataLinkName_ == nullptr
        && this->databasePassword_ == nullptr && this->databaseUser_ == nullptr && this->dbaId_ == nullptr && this->dbaNickName_ == nullptr && this->ddlOnline_ == nullptr
        && this->ecsInstanceId_ == nullptr && this->ecsRegion_ == nullptr && this->envType_ == nullptr && this->exportTimeout_ == nullptr && this->host_ == nullptr
        && this->instanceAlias_ == nullptr && this->instanceId_ == nullptr && this->instanceSource_ == nullptr && this->instanceType_ == nullptr && this->ownerIdList_ == nullptr
        && this->ownerNameList_ == nullptr && this->port_ == nullptr && this->queryTimeout_ == nullptr && this->safeRuleId_ == nullptr && this->sellSitd_ == nullptr
        && this->sellTrust_ == nullptr && this->sid_ == nullptr && this->standardGroup_ == nullptr && this->state_ == nullptr && this->useDsql_ == nullptr
        && this->vpcId_ == nullptr; };
        // dataLinkName Field Functions 
        bool hasDataLinkName() const { return this->dataLinkName_ != nullptr;};
        void deleteDataLinkName() { this->dataLinkName_ = nullptr;};
        inline string getDataLinkName() const { DARABONBA_PTR_GET_DEFAULT(dataLinkName_, "") };
        inline Instance& setDataLinkName(string dataLinkName) { DARABONBA_PTR_SET_VALUE(dataLinkName_, dataLinkName) };


        // databasePassword Field Functions 
        bool hasDatabasePassword() const { return this->databasePassword_ != nullptr;};
        void deleteDatabasePassword() { this->databasePassword_ = nullptr;};
        inline string getDatabasePassword() const { DARABONBA_PTR_GET_DEFAULT(databasePassword_, "") };
        inline Instance& setDatabasePassword(string databasePassword) { DARABONBA_PTR_SET_VALUE(databasePassword_, databasePassword) };


        // databaseUser Field Functions 
        bool hasDatabaseUser() const { return this->databaseUser_ != nullptr;};
        void deleteDatabaseUser() { this->databaseUser_ = nullptr;};
        inline string getDatabaseUser() const { DARABONBA_PTR_GET_DEFAULT(databaseUser_, "") };
        inline Instance& setDatabaseUser(string databaseUser) { DARABONBA_PTR_SET_VALUE(databaseUser_, databaseUser) };


        // dbaId Field Functions 
        bool hasDbaId() const { return this->dbaId_ != nullptr;};
        void deleteDbaId() { this->dbaId_ = nullptr;};
        inline string getDbaId() const { DARABONBA_PTR_GET_DEFAULT(dbaId_, "") };
        inline Instance& setDbaId(string dbaId) { DARABONBA_PTR_SET_VALUE(dbaId_, dbaId) };


        // dbaNickName Field Functions 
        bool hasDbaNickName() const { return this->dbaNickName_ != nullptr;};
        void deleteDbaNickName() { this->dbaNickName_ = nullptr;};
        inline string getDbaNickName() const { DARABONBA_PTR_GET_DEFAULT(dbaNickName_, "") };
        inline Instance& setDbaNickName(string dbaNickName) { DARABONBA_PTR_SET_VALUE(dbaNickName_, dbaNickName) };


        // ddlOnline Field Functions 
        bool hasDdlOnline() const { return this->ddlOnline_ != nullptr;};
        void deleteDdlOnline() { this->ddlOnline_ = nullptr;};
        inline int32_t getDdlOnline() const { DARABONBA_PTR_GET_DEFAULT(ddlOnline_, 0) };
        inline Instance& setDdlOnline(int32_t ddlOnline) { DARABONBA_PTR_SET_VALUE(ddlOnline_, ddlOnline) };


        // ecsInstanceId Field Functions 
        bool hasEcsInstanceId() const { return this->ecsInstanceId_ != nullptr;};
        void deleteEcsInstanceId() { this->ecsInstanceId_ = nullptr;};
        inline string getEcsInstanceId() const { DARABONBA_PTR_GET_DEFAULT(ecsInstanceId_, "") };
        inline Instance& setEcsInstanceId(string ecsInstanceId) { DARABONBA_PTR_SET_VALUE(ecsInstanceId_, ecsInstanceId) };


        // ecsRegion Field Functions 
        bool hasEcsRegion() const { return this->ecsRegion_ != nullptr;};
        void deleteEcsRegion() { this->ecsRegion_ = nullptr;};
        inline string getEcsRegion() const { DARABONBA_PTR_GET_DEFAULT(ecsRegion_, "") };
        inline Instance& setEcsRegion(string ecsRegion) { DARABONBA_PTR_SET_VALUE(ecsRegion_, ecsRegion) };


        // envType Field Functions 
        bool hasEnvType() const { return this->envType_ != nullptr;};
        void deleteEnvType() { this->envType_ = nullptr;};
        inline string getEnvType() const { DARABONBA_PTR_GET_DEFAULT(envType_, "") };
        inline Instance& setEnvType(string envType) { DARABONBA_PTR_SET_VALUE(envType_, envType) };


        // exportTimeout Field Functions 
        bool hasExportTimeout() const { return this->exportTimeout_ != nullptr;};
        void deleteExportTimeout() { this->exportTimeout_ = nullptr;};
        inline int32_t getExportTimeout() const { DARABONBA_PTR_GET_DEFAULT(exportTimeout_, 0) };
        inline Instance& setExportTimeout(int32_t exportTimeout) { DARABONBA_PTR_SET_VALUE(exportTimeout_, exportTimeout) };


        // host Field Functions 
        bool hasHost() const { return this->host_ != nullptr;};
        void deleteHost() { this->host_ = nullptr;};
        inline string getHost() const { DARABONBA_PTR_GET_DEFAULT(host_, "") };
        inline Instance& setHost(string host) { DARABONBA_PTR_SET_VALUE(host_, host) };


        // instanceAlias Field Functions 
        bool hasInstanceAlias() const { return this->instanceAlias_ != nullptr;};
        void deleteInstanceAlias() { this->instanceAlias_ = nullptr;};
        inline string getInstanceAlias() const { DARABONBA_PTR_GET_DEFAULT(instanceAlias_, "") };
        inline Instance& setInstanceAlias(string instanceAlias) { DARABONBA_PTR_SET_VALUE(instanceAlias_, instanceAlias) };


        // instanceId Field Functions 
        bool hasInstanceId() const { return this->instanceId_ != nullptr;};
        void deleteInstanceId() { this->instanceId_ = nullptr;};
        inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
        inline Instance& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


        // instanceSource Field Functions 
        bool hasInstanceSource() const { return this->instanceSource_ != nullptr;};
        void deleteInstanceSource() { this->instanceSource_ = nullptr;};
        inline string getInstanceSource() const { DARABONBA_PTR_GET_DEFAULT(instanceSource_, "") };
        inline Instance& setInstanceSource(string instanceSource) { DARABONBA_PTR_SET_VALUE(instanceSource_, instanceSource) };


        // instanceType Field Functions 
        bool hasInstanceType() const { return this->instanceType_ != nullptr;};
        void deleteInstanceType() { this->instanceType_ = nullptr;};
        inline string getInstanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
        inline Instance& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


        // ownerIdList Field Functions 
        bool hasOwnerIdList() const { return this->ownerIdList_ != nullptr;};
        void deleteOwnerIdList() { this->ownerIdList_ = nullptr;};
        inline const Instance::OwnerIdList & getOwnerIdList() const { DARABONBA_PTR_GET_CONST(ownerIdList_, Instance::OwnerIdList) };
        inline Instance::OwnerIdList getOwnerIdList() { DARABONBA_PTR_GET(ownerIdList_, Instance::OwnerIdList) };
        inline Instance& setOwnerIdList(const Instance::OwnerIdList & ownerIdList) { DARABONBA_PTR_SET_VALUE(ownerIdList_, ownerIdList) };
        inline Instance& setOwnerIdList(Instance::OwnerIdList && ownerIdList) { DARABONBA_PTR_SET_RVALUE(ownerIdList_, ownerIdList) };


        // ownerNameList Field Functions 
        bool hasOwnerNameList() const { return this->ownerNameList_ != nullptr;};
        void deleteOwnerNameList() { this->ownerNameList_ = nullptr;};
        inline const Instance::OwnerNameList & getOwnerNameList() const { DARABONBA_PTR_GET_CONST(ownerNameList_, Instance::OwnerNameList) };
        inline Instance::OwnerNameList getOwnerNameList() { DARABONBA_PTR_GET(ownerNameList_, Instance::OwnerNameList) };
        inline Instance& setOwnerNameList(const Instance::OwnerNameList & ownerNameList) { DARABONBA_PTR_SET_VALUE(ownerNameList_, ownerNameList) };
        inline Instance& setOwnerNameList(Instance::OwnerNameList && ownerNameList) { DARABONBA_PTR_SET_RVALUE(ownerNameList_, ownerNameList) };


        // port Field Functions 
        bool hasPort() const { return this->port_ != nullptr;};
        void deletePort() { this->port_ = nullptr;};
        inline int32_t getPort() const { DARABONBA_PTR_GET_DEFAULT(port_, 0) };
        inline Instance& setPort(int32_t port) { DARABONBA_PTR_SET_VALUE(port_, port) };


        // queryTimeout Field Functions 
        bool hasQueryTimeout() const { return this->queryTimeout_ != nullptr;};
        void deleteQueryTimeout() { this->queryTimeout_ = nullptr;};
        inline int32_t getQueryTimeout() const { DARABONBA_PTR_GET_DEFAULT(queryTimeout_, 0) };
        inline Instance& setQueryTimeout(int32_t queryTimeout) { DARABONBA_PTR_SET_VALUE(queryTimeout_, queryTimeout) };


        // safeRuleId Field Functions 
        bool hasSafeRuleId() const { return this->safeRuleId_ != nullptr;};
        void deleteSafeRuleId() { this->safeRuleId_ = nullptr;};
        inline string getSafeRuleId() const { DARABONBA_PTR_GET_DEFAULT(safeRuleId_, "") };
        inline Instance& setSafeRuleId(string safeRuleId) { DARABONBA_PTR_SET_VALUE(safeRuleId_, safeRuleId) };


        // sellSitd Field Functions 
        bool hasSellSitd() const { return this->sellSitd_ != nullptr;};
        void deleteSellSitd() { this->sellSitd_ = nullptr;};
        inline bool getSellSitd() const { DARABONBA_PTR_GET_DEFAULT(sellSitd_, false) };
        inline Instance& setSellSitd(bool sellSitd) { DARABONBA_PTR_SET_VALUE(sellSitd_, sellSitd) };


        // sellTrust Field Functions 
        bool hasSellTrust() const { return this->sellTrust_ != nullptr;};
        void deleteSellTrust() { this->sellTrust_ = nullptr;};
        inline string getSellTrust() const { DARABONBA_PTR_GET_DEFAULT(sellTrust_, "") };
        inline Instance& setSellTrust(string sellTrust) { DARABONBA_PTR_SET_VALUE(sellTrust_, sellTrust) };


        // sid Field Functions 
        bool hasSid() const { return this->sid_ != nullptr;};
        void deleteSid() { this->sid_ = nullptr;};
        inline string getSid() const { DARABONBA_PTR_GET_DEFAULT(sid_, "") };
        inline Instance& setSid(string sid) { DARABONBA_PTR_SET_VALUE(sid_, sid) };


        // standardGroup Field Functions 
        bool hasStandardGroup() const { return this->standardGroup_ != nullptr;};
        void deleteStandardGroup() { this->standardGroup_ = nullptr;};
        inline const Instance::StandardGroup & getStandardGroup() const { DARABONBA_PTR_GET_CONST(standardGroup_, Instance::StandardGroup) };
        inline Instance::StandardGroup getStandardGroup() { DARABONBA_PTR_GET(standardGroup_, Instance::StandardGroup) };
        inline Instance& setStandardGroup(const Instance::StandardGroup & standardGroup) { DARABONBA_PTR_SET_VALUE(standardGroup_, standardGroup) };
        inline Instance& setStandardGroup(Instance::StandardGroup && standardGroup) { DARABONBA_PTR_SET_RVALUE(standardGroup_, standardGroup) };


        // state Field Functions 
        bool hasState() const { return this->state_ != nullptr;};
        void deleteState() { this->state_ = nullptr;};
        inline string getState() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
        inline Instance& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


        // useDsql Field Functions 
        bool hasUseDsql() const { return this->useDsql_ != nullptr;};
        void deleteUseDsql() { this->useDsql_ = nullptr;};
        inline int32_t getUseDsql() const { DARABONBA_PTR_GET_DEFAULT(useDsql_, 0) };
        inline Instance& setUseDsql(int32_t useDsql) { DARABONBA_PTR_SET_VALUE(useDsql_, useDsql) };


        // vpcId Field Functions 
        bool hasVpcId() const { return this->vpcId_ != nullptr;};
        void deleteVpcId() { this->vpcId_ = nullptr;};
        inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
        inline Instance& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


      protected:
        // The name of the database link for the database instance.
        shared_ptr<string> dataLinkName_ {};
        // The password that is used to log on to the database instance.
        shared_ptr<string> databasePassword_ {};
        // The account that is used to log on to the database.
        shared_ptr<string> databaseUser_ {};
        // The ID of the database administrator (DBA) of the database instance.
        shared_ptr<string> dbaId_ {};
        // The nickname of the DBA of the instance.
        shared_ptr<string> dbaNickName_ {};
        // Indicates whether the lock-free schema change feature is enabled for the database instance.
        shared_ptr<int32_t> ddlOnline_ {};
        // The ID of the ECS instance on which the database instance is deployed.
        shared_ptr<string> ecsInstanceId_ {};
        // The ID of the region in which the database instance resides.
        shared_ptr<string> ecsRegion_ {};
        // The type of the environment to which the database instance belongs. Valid values:
        // 
        // *   **product:** production environment
        // *   **dev**: development environment
        // *   **pre**: pre-release environment
        // *   **test**: test environment
        // *   **sit**: SIT environment
        // *   **uat**: UAT environment
        // *   **pet**: stress testing environment
        // *   **stag:** staging environment
        shared_ptr<string> envType_ {};
        // The timeout period for exporting data from the database instance.
        shared_ptr<int32_t> exportTimeout_ {};
        // The host address that is used to connect to the database instance.
        shared_ptr<string> host_ {};
        // The alias of the database instance.
        shared_ptr<string> instanceAlias_ {};
        // The ID of the instance.
        shared_ptr<string> instanceId_ {};
        // The source of the database instance.
        shared_ptr<string> instanceSource_ {};
        // The type of the database instance.
        shared_ptr<string> instanceType_ {};
        // The IDs of the owners of the database instance.
        shared_ptr<Instance::OwnerIdList> ownerIdList_ {};
        // The nicknames of the owners of the database instance.
        shared_ptr<Instance::OwnerNameList> ownerNameList_ {};
        // The port number that is used to connect to the database instance.
        shared_ptr<int32_t> port_ {};
        // The timeout period for querying data in the database instance.
        shared_ptr<int32_t> queryTimeout_ {};
        // The ID of the security rule set of the database instance.
        shared_ptr<string> safeRuleId_ {};
        // Indicates whether the sensitive data protection feature is enabled. Valid values:
        // 
        // *   **true**
        // *   **false**
        shared_ptr<bool> sellSitd_ {};
        shared_ptr<string> sellTrust_ {};
        // The system ID (SID) of the database instance.
        shared_ptr<string> sid_ {};
        // The control mode of the database instance.
        shared_ptr<Instance::StandardGroup> standardGroup_ {};
        // The status of the database instance.
        shared_ptr<string> state_ {};
        // Indicates whether the cross-database query feature is enabled for the database instance. Valid values:
        // 
        // *   **0**: disabled
        // *   **1:**: enabled
        shared_ptr<int32_t> useDsql_ {};
        // The ID of the VPC to which the database instance belongs.
        shared_ptr<string> vpcId_ {};
      };

      virtual bool empty() const override { return this->instance_ == nullptr; };
      // instance Field Functions 
      bool hasInstance() const { return this->instance_ != nullptr;};
      void deleteInstance() { this->instance_ = nullptr;};
      inline const vector<InstanceList::Instance> & getInstance() const { DARABONBA_PTR_GET_CONST(instance_, vector<InstanceList::Instance>) };
      inline vector<InstanceList::Instance> getInstance() { DARABONBA_PTR_GET(instance_, vector<InstanceList::Instance>) };
      inline InstanceList& setInstance(const vector<InstanceList::Instance> & instance) { DARABONBA_PTR_SET_VALUE(instance_, instance) };
      inline InstanceList& setInstance(vector<InstanceList::Instance> && instance) { DARABONBA_PTR_SET_RVALUE(instance_, instance) };


    protected:
      shared_ptr<vector<InstanceList::Instance>> instance_ {};
    };

    virtual bool empty() const override { return this->errorCode_ == nullptr
        && this->errorMessage_ == nullptr && this->instanceList_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr && this->totalCount_ == nullptr; };
    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline ListInstancesResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline ListInstancesResponseBody& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // instanceList Field Functions 
    bool hasInstanceList() const { return this->instanceList_ != nullptr;};
    void deleteInstanceList() { this->instanceList_ = nullptr;};
    inline const ListInstancesResponseBody::InstanceList & getInstanceList() const { DARABONBA_PTR_GET_CONST(instanceList_, ListInstancesResponseBody::InstanceList) };
    inline ListInstancesResponseBody::InstanceList getInstanceList() { DARABONBA_PTR_GET(instanceList_, ListInstancesResponseBody::InstanceList) };
    inline ListInstancesResponseBody& setInstanceList(const ListInstancesResponseBody::InstanceList & instanceList) { DARABONBA_PTR_SET_VALUE(instanceList_, instanceList) };
    inline ListInstancesResponseBody& setInstanceList(ListInstancesResponseBody::InstanceList && instanceList) { DARABONBA_PTR_SET_RVALUE(instanceList_, instanceList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListInstancesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListInstancesResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListInstancesResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The error code that is returned.
    shared_ptr<string> errorCode_ {};
    // The error message that is returned.
    shared_ptr<string> errorMessage_ {};
    // The information about the database instances that are returned.
    shared_ptr<ListInstancesResponseBody::InstanceList> instanceList_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful. Valid values:
    // 
    // *   **true**
    // *   **false**
    shared_ptr<bool> success_ {};
    // The total number of database instances that are returned.
    shared_ptr<int64_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
