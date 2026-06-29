// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAGENTSTORAGESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTAGENTSTORAGESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Tablestore20201209
{
namespace Models
{
  class ListAgentStoragesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAgentStoragesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AgentStorages, agentStorages_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListAgentStoragesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AgentStorages, agentStorages_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListAgentStoragesResponseBody() = default ;
    ListAgentStoragesResponseBody(const ListAgentStoragesResponseBody &) = default ;
    ListAgentStoragesResponseBody(ListAgentStoragesResponseBody &&) = default ;
    ListAgentStoragesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAgentStoragesResponseBody() = default ;
    ListAgentStoragesResponseBody& operator=(const ListAgentStoragesResponseBody &) = default ;
    ListAgentStoragesResponseBody& operator=(ListAgentStoragesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class AgentStorages : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AgentStorages& obj) { 
        DARABONBA_PTR_TO_JSON(AgentStorageDescription, agentStorageDescription_);
        DARABONBA_PTR_TO_JSON(AgentStorageName, agentStorageName_);
        DARABONBA_PTR_TO_JSON(AgentStorageSpecification, agentStorageSpecification_);
        DARABONBA_PTR_TO_JSON(AgentStorageStatus, agentStorageStatus_);
        DARABONBA_PTR_TO_JSON(AliasName, aliasName_);
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(RegionId, regionId_);
        DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
        DARABONBA_PTR_TO_JSON(UserId, userId_);
      };
      friend void from_json(const Darabonba::Json& j, AgentStorages& obj) { 
        DARABONBA_PTR_FROM_JSON(AgentStorageDescription, agentStorageDescription_);
        DARABONBA_PTR_FROM_JSON(AgentStorageName, agentStorageName_);
        DARABONBA_PTR_FROM_JSON(AgentStorageSpecification, agentStorageSpecification_);
        DARABONBA_PTR_FROM_JSON(AgentStorageStatus, agentStorageStatus_);
        DARABONBA_PTR_FROM_JSON(AliasName, aliasName_);
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
        DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
        DARABONBA_PTR_FROM_JSON(UserId, userId_);
      };
      AgentStorages() = default ;
      AgentStorages(const AgentStorages &) = default ;
      AgentStorages(AgentStorages &&) = default ;
      AgentStorages(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AgentStorages() = default ;
      AgentStorages& operator=(const AgentStorages &) = default ;
      AgentStorages& operator=(AgentStorages &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->agentStorageDescription_ == nullptr
        && this->agentStorageName_ == nullptr && this->agentStorageSpecification_ == nullptr && this->agentStorageStatus_ == nullptr && this->aliasName_ == nullptr && this->createTime_ == nullptr
        && this->regionId_ == nullptr && this->resourceGroupId_ == nullptr && this->userId_ == nullptr; };
      // agentStorageDescription Field Functions 
      bool hasAgentStorageDescription() const { return this->agentStorageDescription_ != nullptr;};
      void deleteAgentStorageDescription() { this->agentStorageDescription_ = nullptr;};
      inline string getAgentStorageDescription() const { DARABONBA_PTR_GET_DEFAULT(agentStorageDescription_, "") };
      inline AgentStorages& setAgentStorageDescription(string agentStorageDescription) { DARABONBA_PTR_SET_VALUE(agentStorageDescription_, agentStorageDescription) };


      // agentStorageName Field Functions 
      bool hasAgentStorageName() const { return this->agentStorageName_ != nullptr;};
      void deleteAgentStorageName() { this->agentStorageName_ = nullptr;};
      inline string getAgentStorageName() const { DARABONBA_PTR_GET_DEFAULT(agentStorageName_, "") };
      inline AgentStorages& setAgentStorageName(string agentStorageName) { DARABONBA_PTR_SET_VALUE(agentStorageName_, agentStorageName) };


      // agentStorageSpecification Field Functions 
      bool hasAgentStorageSpecification() const { return this->agentStorageSpecification_ != nullptr;};
      void deleteAgentStorageSpecification() { this->agentStorageSpecification_ = nullptr;};
      inline string getAgentStorageSpecification() const { DARABONBA_PTR_GET_DEFAULT(agentStorageSpecification_, "") };
      inline AgentStorages& setAgentStorageSpecification(string agentStorageSpecification) { DARABONBA_PTR_SET_VALUE(agentStorageSpecification_, agentStorageSpecification) };


      // agentStorageStatus Field Functions 
      bool hasAgentStorageStatus() const { return this->agentStorageStatus_ != nullptr;};
      void deleteAgentStorageStatus() { this->agentStorageStatus_ = nullptr;};
      inline string getAgentStorageStatus() const { DARABONBA_PTR_GET_DEFAULT(agentStorageStatus_, "") };
      inline AgentStorages& setAgentStorageStatus(string agentStorageStatus) { DARABONBA_PTR_SET_VALUE(agentStorageStatus_, agentStorageStatus) };


      // aliasName Field Functions 
      bool hasAliasName() const { return this->aliasName_ != nullptr;};
      void deleteAliasName() { this->aliasName_ = nullptr;};
      inline string getAliasName() const { DARABONBA_PTR_GET_DEFAULT(aliasName_, "") };
      inline AgentStorages& setAliasName(string aliasName) { DARABONBA_PTR_SET_VALUE(aliasName_, aliasName) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline AgentStorages& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // regionId Field Functions 
      bool hasRegionId() const { return this->regionId_ != nullptr;};
      void deleteRegionId() { this->regionId_ = nullptr;};
      inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
      inline AgentStorages& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


      // resourceGroupId Field Functions 
      bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
      void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
      inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
      inline AgentStorages& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


      // userId Field Functions 
      bool hasUserId() const { return this->userId_ != nullptr;};
      void deleteUserId() { this->userId_ = nullptr;};
      inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
      inline AgentStorages& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    protected:
      // agent storage description
      shared_ptr<string> agentStorageDescription_ {};
      // The agent storage name, which is a unique key.
      shared_ptr<string> agentStorageName_ {};
      // The specifications of the agent storage.
      shared_ptr<string> agentStorageSpecification_ {};
      // The status of the agent storage. Valid values:
      // - normal: Normal.
      // - forbidden: Disabled.
      // - deleting: Being released.
      shared_ptr<string> agentStorageStatus_ {};
      // The alias of the agent storage.
      shared_ptr<string> aliasName_ {};
      // The creation time of the agent storage.
      shared_ptr<string> createTime_ {};
      // The region ID of the agent storage.
      shared_ptr<string> regionId_ {};
      // The resource group ID.
      shared_ptr<string> resourceGroupId_ {};
      // The user ID.
      shared_ptr<string> userId_ {};
    };

    virtual bool empty() const override { return this->agentStorages_ == nullptr
        && this->nextToken_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // agentStorages Field Functions 
    bool hasAgentStorages() const { return this->agentStorages_ != nullptr;};
    void deleteAgentStorages() { this->agentStorages_ = nullptr;};
    inline const vector<ListAgentStoragesResponseBody::AgentStorages> & getAgentStorages() const { DARABONBA_PTR_GET_CONST(agentStorages_, vector<ListAgentStoragesResponseBody::AgentStorages>) };
    inline vector<ListAgentStoragesResponseBody::AgentStorages> getAgentStorages() { DARABONBA_PTR_GET(agentStorages_, vector<ListAgentStoragesResponseBody::AgentStorages>) };
    inline ListAgentStoragesResponseBody& setAgentStorages(const vector<ListAgentStoragesResponseBody::AgentStorages> & agentStorages) { DARABONBA_PTR_SET_VALUE(agentStorages_, agentStorages) };
    inline ListAgentStoragesResponseBody& setAgentStorages(vector<ListAgentStoragesResponseBody::AgentStorages> && agentStorages) { DARABONBA_PTR_SET_RVALUE(agentStorages_, agentStorages) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListAgentStoragesResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListAgentStoragesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListAgentStoragesResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The list of agent storage information.
    shared_ptr<vector<ListAgentStoragesResponseBody::AgentStorages>> agentStorages_ {};
    // The token used to retrieve the next page of results when the total number of tag resources exceeds the value of MaxResults. This parameter has a value only when not all tag resources are returned.
    shared_ptr<string> nextToken_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
    // The total number of agent storages returned.
    shared_ptr<int64_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Tablestore20201209
#endif
