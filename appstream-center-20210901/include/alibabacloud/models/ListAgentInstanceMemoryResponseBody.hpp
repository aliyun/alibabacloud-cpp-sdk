// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAGENTINSTANCEMEMORYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTAGENTINSTANCEMEMORYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AppstreamCenter20210901
{
namespace Models
{
  class ListAgentInstanceMemoryResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAgentInstanceMemoryResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListAgentInstanceMemoryResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListAgentInstanceMemoryResponseBody() = default ;
    ListAgentInstanceMemoryResponseBody(const ListAgentInstanceMemoryResponseBody &) = default ;
    ListAgentInstanceMemoryResponseBody(ListAgentInstanceMemoryResponseBody &&) = default ;
    ListAgentInstanceMemoryResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAgentInstanceMemoryResponseBody() = default ;
    ListAgentInstanceMemoryResponseBody& operator=(const ListAgentInstanceMemoryResponseBody &) = default ;
    ListAgentInstanceMemoryResponseBody& operator=(ListAgentInstanceMemoryResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(AgentInstanceId, agentInstanceId_);
        DARABONBA_PTR_TO_JSON(AgentInstanceStatus, agentInstanceStatus_);
        DARABONBA_PTR_TO_JSON(AgentPlatform, agentPlatform_);
        DARABONBA_PTR_TO_JSON(AgentProvider, agentProvider_);
        DARABONBA_PTR_TO_JSON(BackupCount, backupCount_);
        DARABONBA_PTR_TO_JSON(EndUserId, endUserId_);
        DARABONBA_PTR_TO_JSON(LastMemoryUpdatedAt, lastMemoryUpdatedAt_);
        DARABONBA_PTR_TO_JSON(LatestBackupAt, latestBackupAt_);
        DARABONBA_PTR_TO_JSON(MemoryCount, memoryCount_);
        DARABONBA_PTR_TO_JSON(MemoryEnabled, memoryEnabled_);
        DARABONBA_PTR_TO_JSON(RegionId, regionId_);
        DARABONBA_PTR_TO_JSON(ResourceId, resourceId_);
        DARABONBA_PTR_TO_JSON(RuntimeId, runtimeId_);
        DARABONBA_PTR_TO_JSON(RuntimeName, runtimeName_);
        DARABONBA_PTR_TO_JSON(UserGroups, userGroups_);
        DARABONBA_PTR_TO_JSON(UserName, userName_);
        DARABONBA_PTR_TO_JSON(UserOrgs, userOrgs_);
        DARABONBA_PTR_TO_JSON(WyId, wyId_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(AgentInstanceId, agentInstanceId_);
        DARABONBA_PTR_FROM_JSON(AgentInstanceStatus, agentInstanceStatus_);
        DARABONBA_PTR_FROM_JSON(AgentPlatform, agentPlatform_);
        DARABONBA_PTR_FROM_JSON(AgentProvider, agentProvider_);
        DARABONBA_PTR_FROM_JSON(BackupCount, backupCount_);
        DARABONBA_PTR_FROM_JSON(EndUserId, endUserId_);
        DARABONBA_PTR_FROM_JSON(LastMemoryUpdatedAt, lastMemoryUpdatedAt_);
        DARABONBA_PTR_FROM_JSON(LatestBackupAt, latestBackupAt_);
        DARABONBA_PTR_FROM_JSON(MemoryCount, memoryCount_);
        DARABONBA_PTR_FROM_JSON(MemoryEnabled, memoryEnabled_);
        DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
        DARABONBA_PTR_FROM_JSON(ResourceId, resourceId_);
        DARABONBA_PTR_FROM_JSON(RuntimeId, runtimeId_);
        DARABONBA_PTR_FROM_JSON(RuntimeName, runtimeName_);
        DARABONBA_PTR_FROM_JSON(UserGroups, userGroups_);
        DARABONBA_PTR_FROM_JSON(UserName, userName_);
        DARABONBA_PTR_FROM_JSON(UserOrgs, userOrgs_);
        DARABONBA_PTR_FROM_JSON(WyId, wyId_);
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
      class UserOrgs : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const UserOrgs& obj) { 
          DARABONBA_PTR_TO_JSON(OrgId, orgId_);
          DARABONBA_PTR_TO_JSON(OrgName, orgName_);
        };
        friend void from_json(const Darabonba::Json& j, UserOrgs& obj) { 
          DARABONBA_PTR_FROM_JSON(OrgId, orgId_);
          DARABONBA_PTR_FROM_JSON(OrgName, orgName_);
        };
        UserOrgs() = default ;
        UserOrgs(const UserOrgs &) = default ;
        UserOrgs(UserOrgs &&) = default ;
        UserOrgs(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~UserOrgs() = default ;
        UserOrgs& operator=(const UserOrgs &) = default ;
        UserOrgs& operator=(UserOrgs &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->orgId_ == nullptr
        && this->orgName_ == nullptr; };
        // orgId Field Functions 
        bool hasOrgId() const { return this->orgId_ != nullptr;};
        void deleteOrgId() { this->orgId_ = nullptr;};
        inline string getOrgId() const { DARABONBA_PTR_GET_DEFAULT(orgId_, "") };
        inline UserOrgs& setOrgId(string orgId) { DARABONBA_PTR_SET_VALUE(orgId_, orgId) };


        // orgName Field Functions 
        bool hasOrgName() const { return this->orgName_ != nullptr;};
        void deleteOrgName() { this->orgName_ = nullptr;};
        inline string getOrgName() const { DARABONBA_PTR_GET_DEFAULT(orgName_, "") };
        inline UserOrgs& setOrgName(string orgName) { DARABONBA_PTR_SET_VALUE(orgName_, orgName) };


      protected:
        // The ID of the organization.
        shared_ptr<string> orgId_ {};
        // The name of the organization.
        shared_ptr<string> orgName_ {};
      };

      class UserGroups : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const UserGroups& obj) { 
          DARABONBA_PTR_TO_JSON(GroupId, groupId_);
          DARABONBA_PTR_TO_JSON(GroupName, groupName_);
        };
        friend void from_json(const Darabonba::Json& j, UserGroups& obj) { 
          DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
          DARABONBA_PTR_FROM_JSON(GroupName, groupName_);
        };
        UserGroups() = default ;
        UserGroups(const UserGroups &) = default ;
        UserGroups(UserGroups &&) = default ;
        UserGroups(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~UserGroups() = default ;
        UserGroups& operator=(const UserGroups &) = default ;
        UserGroups& operator=(UserGroups &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->groupId_ == nullptr
        && this->groupName_ == nullptr; };
        // groupId Field Functions 
        bool hasGroupId() const { return this->groupId_ != nullptr;};
        void deleteGroupId() { this->groupId_ = nullptr;};
        inline string getGroupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
        inline UserGroups& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


        // groupName Field Functions 
        bool hasGroupName() const { return this->groupName_ != nullptr;};
        void deleteGroupName() { this->groupName_ = nullptr;};
        inline string getGroupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
        inline UserGroups& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


      protected:
        // The ID of the user group.
        shared_ptr<string> groupId_ {};
        // The name of the user group.
        shared_ptr<string> groupName_ {};
      };

      virtual bool empty() const override { return this->agentInstanceId_ == nullptr
        && this->agentInstanceStatus_ == nullptr && this->agentPlatform_ == nullptr && this->agentProvider_ == nullptr && this->backupCount_ == nullptr && this->endUserId_ == nullptr
        && this->lastMemoryUpdatedAt_ == nullptr && this->latestBackupAt_ == nullptr && this->memoryCount_ == nullptr && this->memoryEnabled_ == nullptr && this->regionId_ == nullptr
        && this->resourceId_ == nullptr && this->runtimeId_ == nullptr && this->runtimeName_ == nullptr && this->userGroups_ == nullptr && this->userName_ == nullptr
        && this->userOrgs_ == nullptr && this->wyId_ == nullptr; };
      // agentInstanceId Field Functions 
      bool hasAgentInstanceId() const { return this->agentInstanceId_ != nullptr;};
      void deleteAgentInstanceId() { this->agentInstanceId_ = nullptr;};
      inline string getAgentInstanceId() const { DARABONBA_PTR_GET_DEFAULT(agentInstanceId_, "") };
      inline Data& setAgentInstanceId(string agentInstanceId) { DARABONBA_PTR_SET_VALUE(agentInstanceId_, agentInstanceId) };


      // agentInstanceStatus Field Functions 
      bool hasAgentInstanceStatus() const { return this->agentInstanceStatus_ != nullptr;};
      void deleteAgentInstanceStatus() { this->agentInstanceStatus_ = nullptr;};
      inline string getAgentInstanceStatus() const { DARABONBA_PTR_GET_DEFAULT(agentInstanceStatus_, "") };
      inline Data& setAgentInstanceStatus(string agentInstanceStatus) { DARABONBA_PTR_SET_VALUE(agentInstanceStatus_, agentInstanceStatus) };


      // agentPlatform Field Functions 
      bool hasAgentPlatform() const { return this->agentPlatform_ != nullptr;};
      void deleteAgentPlatform() { this->agentPlatform_ = nullptr;};
      inline string getAgentPlatform() const { DARABONBA_PTR_GET_DEFAULT(agentPlatform_, "") };
      inline Data& setAgentPlatform(string agentPlatform) { DARABONBA_PTR_SET_VALUE(agentPlatform_, agentPlatform) };


      // agentProvider Field Functions 
      bool hasAgentProvider() const { return this->agentProvider_ != nullptr;};
      void deleteAgentProvider() { this->agentProvider_ = nullptr;};
      inline string getAgentProvider() const { DARABONBA_PTR_GET_DEFAULT(agentProvider_, "") };
      inline Data& setAgentProvider(string agentProvider) { DARABONBA_PTR_SET_VALUE(agentProvider_, agentProvider) };


      // backupCount Field Functions 
      bool hasBackupCount() const { return this->backupCount_ != nullptr;};
      void deleteBackupCount() { this->backupCount_ = nullptr;};
      inline int32_t getBackupCount() const { DARABONBA_PTR_GET_DEFAULT(backupCount_, 0) };
      inline Data& setBackupCount(int32_t backupCount) { DARABONBA_PTR_SET_VALUE(backupCount_, backupCount) };


      // endUserId Field Functions 
      bool hasEndUserId() const { return this->endUserId_ != nullptr;};
      void deleteEndUserId() { this->endUserId_ = nullptr;};
      inline string getEndUserId() const { DARABONBA_PTR_GET_DEFAULT(endUserId_, "") };
      inline Data& setEndUserId(string endUserId) { DARABONBA_PTR_SET_VALUE(endUserId_, endUserId) };


      // lastMemoryUpdatedAt Field Functions 
      bool hasLastMemoryUpdatedAt() const { return this->lastMemoryUpdatedAt_ != nullptr;};
      void deleteLastMemoryUpdatedAt() { this->lastMemoryUpdatedAt_ = nullptr;};
      inline string getLastMemoryUpdatedAt() const { DARABONBA_PTR_GET_DEFAULT(lastMemoryUpdatedAt_, "") };
      inline Data& setLastMemoryUpdatedAt(string lastMemoryUpdatedAt) { DARABONBA_PTR_SET_VALUE(lastMemoryUpdatedAt_, lastMemoryUpdatedAt) };


      // latestBackupAt Field Functions 
      bool hasLatestBackupAt() const { return this->latestBackupAt_ != nullptr;};
      void deleteLatestBackupAt() { this->latestBackupAt_ = nullptr;};
      inline string getLatestBackupAt() const { DARABONBA_PTR_GET_DEFAULT(latestBackupAt_, "") };
      inline Data& setLatestBackupAt(string latestBackupAt) { DARABONBA_PTR_SET_VALUE(latestBackupAt_, latestBackupAt) };


      // memoryCount Field Functions 
      bool hasMemoryCount() const { return this->memoryCount_ != nullptr;};
      void deleteMemoryCount() { this->memoryCount_ = nullptr;};
      inline int64_t getMemoryCount() const { DARABONBA_PTR_GET_DEFAULT(memoryCount_, 0L) };
      inline Data& setMemoryCount(int64_t memoryCount) { DARABONBA_PTR_SET_VALUE(memoryCount_, memoryCount) };


      // memoryEnabled Field Functions 
      bool hasMemoryEnabled() const { return this->memoryEnabled_ != nullptr;};
      void deleteMemoryEnabled() { this->memoryEnabled_ = nullptr;};
      inline string getMemoryEnabled() const { DARABONBA_PTR_GET_DEFAULT(memoryEnabled_, "") };
      inline Data& setMemoryEnabled(string memoryEnabled) { DARABONBA_PTR_SET_VALUE(memoryEnabled_, memoryEnabled) };


      // regionId Field Functions 
      bool hasRegionId() const { return this->regionId_ != nullptr;};
      void deleteRegionId() { this->regionId_ = nullptr;};
      inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
      inline Data& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


      // resourceId Field Functions 
      bool hasResourceId() const { return this->resourceId_ != nullptr;};
      void deleteResourceId() { this->resourceId_ = nullptr;};
      inline string getResourceId() const { DARABONBA_PTR_GET_DEFAULT(resourceId_, "") };
      inline Data& setResourceId(string resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };


      // runtimeId Field Functions 
      bool hasRuntimeId() const { return this->runtimeId_ != nullptr;};
      void deleteRuntimeId() { this->runtimeId_ = nullptr;};
      inline string getRuntimeId() const { DARABONBA_PTR_GET_DEFAULT(runtimeId_, "") };
      inline Data& setRuntimeId(string runtimeId) { DARABONBA_PTR_SET_VALUE(runtimeId_, runtimeId) };


      // runtimeName Field Functions 
      bool hasRuntimeName() const { return this->runtimeName_ != nullptr;};
      void deleteRuntimeName() { this->runtimeName_ = nullptr;};
      inline string getRuntimeName() const { DARABONBA_PTR_GET_DEFAULT(runtimeName_, "") };
      inline Data& setRuntimeName(string runtimeName) { DARABONBA_PTR_SET_VALUE(runtimeName_, runtimeName) };


      // userGroups Field Functions 
      bool hasUserGroups() const { return this->userGroups_ != nullptr;};
      void deleteUserGroups() { this->userGroups_ = nullptr;};
      inline const vector<Data::UserGroups> & getUserGroups() const { DARABONBA_PTR_GET_CONST(userGroups_, vector<Data::UserGroups>) };
      inline vector<Data::UserGroups> getUserGroups() { DARABONBA_PTR_GET(userGroups_, vector<Data::UserGroups>) };
      inline Data& setUserGroups(const vector<Data::UserGroups> & userGroups) { DARABONBA_PTR_SET_VALUE(userGroups_, userGroups) };
      inline Data& setUserGroups(vector<Data::UserGroups> && userGroups) { DARABONBA_PTR_SET_RVALUE(userGroups_, userGroups) };


      // userName Field Functions 
      bool hasUserName() const { return this->userName_ != nullptr;};
      void deleteUserName() { this->userName_ = nullptr;};
      inline string getUserName() const { DARABONBA_PTR_GET_DEFAULT(userName_, "") };
      inline Data& setUserName(string userName) { DARABONBA_PTR_SET_VALUE(userName_, userName) };


      // userOrgs Field Functions 
      bool hasUserOrgs() const { return this->userOrgs_ != nullptr;};
      void deleteUserOrgs() { this->userOrgs_ = nullptr;};
      inline const vector<Data::UserOrgs> & getUserOrgs() const { DARABONBA_PTR_GET_CONST(userOrgs_, vector<Data::UserOrgs>) };
      inline vector<Data::UserOrgs> getUserOrgs() { DARABONBA_PTR_GET(userOrgs_, vector<Data::UserOrgs>) };
      inline Data& setUserOrgs(const vector<Data::UserOrgs> & userOrgs) { DARABONBA_PTR_SET_VALUE(userOrgs_, userOrgs) };
      inline Data& setUserOrgs(vector<Data::UserOrgs> && userOrgs) { DARABONBA_PTR_SET_RVALUE(userOrgs_, userOrgs) };


      // wyId Field Functions 
      bool hasWyId() const { return this->wyId_ != nullptr;};
      void deleteWyId() { this->wyId_ = nullptr;};
      inline string getWyId() const { DARABONBA_PTR_GET_DEFAULT(wyId_, "") };
      inline Data& setWyId(string wyId) { DARABONBA_PTR_SET_VALUE(wyId_, wyId) };


    protected:
      // The ID of the agent instance, which can be used to configure the instance memory switch or clear the instance memory.
      shared_ptr<string> agentInstanceId_ {};
      // The instance lifetime and epoch status of the agent instance.
      // - `UNDEPLOYED`: No deployment.
      // - `DEPLOYING`: Deployment in progress.
      // - `DEPLOYED`: Deployment completed.
      // - `STARTING`: Starting.
      // - `RUNNING`: Running.
      // - `STOPPING`: Stopping.
      // - `STOPPED`: Stopped.
      // - `UNAVAILABLE`: Not active.
      // - `FAILED`: Failed.
      // - `UPGRADING`: Upgrade in progress.
      // - `REBUILDING`: Reset in progress.
      // - `DELETING`: Deleting.
      // - `DELETED`: Deleted.
      shared_ptr<string> agentInstanceStatus_ {};
      // The business platform to which the agent belongs.
      shared_ptr<string> agentPlatform_ {};
      // The provider of the agent.
      shared_ptr<string> agentProvider_ {};
      // The number of undeleted memory backups for the instance.
      shared_ptr<int32_t> backupCount_ {};
      // The ID of the end user to which the instance belongs.
      shared_ptr<string> endUserId_ {};
      // The time of the last memory update. The time is returned in the YYYY-MM-DDThh:mm:ss format, with optional fractional seconds. The time value uses the default time zone of the server, and the string does not include a time zone offset. This field is omitted if the last update time is unavailable.
      shared_ptr<string> lastMemoryUpdatedAt_ {};
      // The time of the latest backup. The time is returned in the YYYY-MM-DDThh:mm:ss format, with optional fractional seconds. The time value uses the default time zone of the server, and the string does not include a time zone offset. This field is omitted if the backup time is unavailable.
      shared_ptr<string> latestBackupAt_ {};
      // The number of memory entries for the instance. This field may be omitted if statistics are unavailable.
      shared_ptr<int64_t> memoryCount_ {};
      // The memory switch configured for the instance, returned as a string. A value of `true` indicates that the switch is turned on. A value of `false` indicates that the switch is turned off.
      shared_ptr<string> memoryEnabled_ {};
      // The ID of the region where the runtime environment is located.
      shared_ptr<string> regionId_ {};
      // The ID of the resource associated with the instance.
      shared_ptr<string> resourceId_ {};
      // The runtime ID of the instance.
      shared_ptr<string> runtimeId_ {};
      // The name of the runtime environment. The name of the associated resource is returned first. If the resource name is unavailable, the instance name is returned.
      shared_ptr<string> runtimeName_ {};
      // The list of user groups to which the end user belongs.
      shared_ptr<vector<Data::UserGroups>> userGroups_ {};
      // The username of the end user to which the instance belongs.
      shared_ptr<string> userName_ {};
      // The list of organizations to which the end user belongs.
      shared_ptr<vector<Data::UserOrgs>> userOrgs_ {};
      // The Wuying user ID of the end user.
      shared_ptr<string> wyId_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<ListAgentInstanceMemoryResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<ListAgentInstanceMemoryResponseBody::Data>) };
    inline vector<ListAgentInstanceMemoryResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<ListAgentInstanceMemoryResponseBody::Data>) };
    inline ListAgentInstanceMemoryResponseBody& setData(const vector<ListAgentInstanceMemoryResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListAgentInstanceMemoryResponseBody& setData(vector<ListAgentInstanceMemoryResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListAgentInstanceMemoryResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListAgentInstanceMemoryResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListAgentInstanceMemoryResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListAgentInstanceMemoryResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The memory configurations and statistics information of the agent instances on the current page.
    shared_ptr<vector<ListAgentInstanceMemoryResponseBody::Data>> data_ {};
    // The current page number. Pages start from 1.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries per page used for this query.
    shared_ptr<int32_t> pageSize_ {};
    // The unique identifier of the request, which can be used for troubleshooting.
    shared_ptr<string> requestId_ {};
    // The total number of instances that meet the filter conditions.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AppstreamCenter20210901
#endif
