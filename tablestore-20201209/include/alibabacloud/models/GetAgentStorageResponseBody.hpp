// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAGENTSTORAGERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETAGENTSTORAGERESPONSEBODY_HPP_
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
  class GetAgentStorageResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAgentStorageResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AgentStorageDescription, agentStorageDescription_);
      DARABONBA_PTR_TO_JSON(AgentStorageName, agentStorageName_);
      DARABONBA_PTR_TO_JSON(AgentStorageSpecification, agentStorageSpecification_);
      DARABONBA_PTR_TO_JSON(AgentStorageStatus, agentStorageStatus_);
      DARABONBA_PTR_TO_JSON(AliasName, aliasName_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(NetworkSourceACL, networkSourceACL_);
      DARABONBA_PTR_TO_JSON(NetworkTypeACL, networkTypeACL_);
      DARABONBA_PTR_TO_JSON(Policy, policy_);
      DARABONBA_PTR_TO_JSON(PolicyVersion, policyVersion_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
    };
    friend void from_json(const Darabonba::Json& j, GetAgentStorageResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AgentStorageDescription, agentStorageDescription_);
      DARABONBA_PTR_FROM_JSON(AgentStorageName, agentStorageName_);
      DARABONBA_PTR_FROM_JSON(AgentStorageSpecification, agentStorageSpecification_);
      DARABONBA_PTR_FROM_JSON(AgentStorageStatus, agentStorageStatus_);
      DARABONBA_PTR_FROM_JSON(AliasName, aliasName_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(NetworkSourceACL, networkSourceACL_);
      DARABONBA_PTR_FROM_JSON(NetworkTypeACL, networkTypeACL_);
      DARABONBA_PTR_FROM_JSON(Policy, policy_);
      DARABONBA_PTR_FROM_JSON(PolicyVersion, policyVersion_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
    };
    GetAgentStorageResponseBody() = default ;
    GetAgentStorageResponseBody(const GetAgentStorageResponseBody &) = default ;
    GetAgentStorageResponseBody(GetAgentStorageResponseBody &&) = default ;
    GetAgentStorageResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAgentStorageResponseBody() = default ;
    GetAgentStorageResponseBody& operator=(const GetAgentStorageResponseBody &) = default ;
    GetAgentStorageResponseBody& operator=(GetAgentStorageResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Tags : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Tags& obj) { 
        DARABONBA_PTR_TO_JSON(Key, key_);
        DARABONBA_PTR_TO_JSON(TagKey, tagKey_);
        DARABONBA_PTR_TO_JSON(TagValue, tagValue_);
        DARABONBA_PTR_TO_JSON(Value, value_);
      };
      friend void from_json(const Darabonba::Json& j, Tags& obj) { 
        DARABONBA_PTR_FROM_JSON(Key, key_);
        DARABONBA_PTR_FROM_JSON(TagKey, tagKey_);
        DARABONBA_PTR_FROM_JSON(TagValue, tagValue_);
        DARABONBA_PTR_FROM_JSON(Value, value_);
      };
      Tags() = default ;
      Tags(const Tags &) = default ;
      Tags(Tags &&) = default ;
      Tags(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Tags() = default ;
      Tags& operator=(const Tags &) = default ;
      Tags& operator=(Tags &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->key_ == nullptr
        && this->tagKey_ == nullptr && this->tagValue_ == nullptr && this->value_ == nullptr; };
      // key Field Functions 
      bool hasKey() const { return this->key_ != nullptr;};
      void deleteKey() { this->key_ = nullptr;};
      inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
      inline Tags& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


      // tagKey Field Functions 
      bool hasTagKey() const { return this->tagKey_ != nullptr;};
      void deleteTagKey() { this->tagKey_ = nullptr;};
      inline string getTagKey() const { DARABONBA_PTR_GET_DEFAULT(tagKey_, "") };
      inline Tags& setTagKey(string tagKey) { DARABONBA_PTR_SET_VALUE(tagKey_, tagKey) };


      // tagValue Field Functions 
      bool hasTagValue() const { return this->tagValue_ != nullptr;};
      void deleteTagValue() { this->tagValue_ = nullptr;};
      inline string getTagValue() const { DARABONBA_PTR_GET_DEFAULT(tagValue_, "") };
      inline Tags& setTagValue(string tagValue) { DARABONBA_PTR_SET_VALUE(tagValue_, tagValue) };


      // value Field Functions 
      bool hasValue() const { return this->value_ != nullptr;};
      void deleteValue() { this->value_ = nullptr;};
      inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
      inline Tags& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    protected:
      // The tag key.
      shared_ptr<string> key_ {};
      // (Deprecated) The tag key.
      shared_ptr<string> tagKey_ {};
      // (Deprecated) The tag value.
      shared_ptr<string> tagValue_ {};
      // The tag value.
      shared_ptr<string> value_ {};
    };

    virtual bool empty() const override { return this->agentStorageDescription_ == nullptr
        && this->agentStorageName_ == nullptr && this->agentStorageSpecification_ == nullptr && this->agentStorageStatus_ == nullptr && this->aliasName_ == nullptr && this->createTime_ == nullptr
        && this->networkSourceACL_ == nullptr && this->networkTypeACL_ == nullptr && this->policy_ == nullptr && this->policyVersion_ == nullptr && this->regionId_ == nullptr
        && this->requestId_ == nullptr && this->resourceGroupId_ == nullptr && this->tags_ == nullptr && this->userId_ == nullptr; };
    // agentStorageDescription Field Functions 
    bool hasAgentStorageDescription() const { return this->agentStorageDescription_ != nullptr;};
    void deleteAgentStorageDescription() { this->agentStorageDescription_ = nullptr;};
    inline string getAgentStorageDescription() const { DARABONBA_PTR_GET_DEFAULT(agentStorageDescription_, "") };
    inline GetAgentStorageResponseBody& setAgentStorageDescription(string agentStorageDescription) { DARABONBA_PTR_SET_VALUE(agentStorageDescription_, agentStorageDescription) };


    // agentStorageName Field Functions 
    bool hasAgentStorageName() const { return this->agentStorageName_ != nullptr;};
    void deleteAgentStorageName() { this->agentStorageName_ = nullptr;};
    inline string getAgentStorageName() const { DARABONBA_PTR_GET_DEFAULT(agentStorageName_, "") };
    inline GetAgentStorageResponseBody& setAgentStorageName(string agentStorageName) { DARABONBA_PTR_SET_VALUE(agentStorageName_, agentStorageName) };


    // agentStorageSpecification Field Functions 
    bool hasAgentStorageSpecification() const { return this->agentStorageSpecification_ != nullptr;};
    void deleteAgentStorageSpecification() { this->agentStorageSpecification_ = nullptr;};
    inline string getAgentStorageSpecification() const { DARABONBA_PTR_GET_DEFAULT(agentStorageSpecification_, "") };
    inline GetAgentStorageResponseBody& setAgentStorageSpecification(string agentStorageSpecification) { DARABONBA_PTR_SET_VALUE(agentStorageSpecification_, agentStorageSpecification) };


    // agentStorageStatus Field Functions 
    bool hasAgentStorageStatus() const { return this->agentStorageStatus_ != nullptr;};
    void deleteAgentStorageStatus() { this->agentStorageStatus_ = nullptr;};
    inline string getAgentStorageStatus() const { DARABONBA_PTR_GET_DEFAULT(agentStorageStatus_, "") };
    inline GetAgentStorageResponseBody& setAgentStorageStatus(string agentStorageStatus) { DARABONBA_PTR_SET_VALUE(agentStorageStatus_, agentStorageStatus) };


    // aliasName Field Functions 
    bool hasAliasName() const { return this->aliasName_ != nullptr;};
    void deleteAliasName() { this->aliasName_ = nullptr;};
    inline string getAliasName() const { DARABONBA_PTR_GET_DEFAULT(aliasName_, "") };
    inline GetAgentStorageResponseBody& setAliasName(string aliasName) { DARABONBA_PTR_SET_VALUE(aliasName_, aliasName) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline GetAgentStorageResponseBody& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // networkSourceACL Field Functions 
    bool hasNetworkSourceACL() const { return this->networkSourceACL_ != nullptr;};
    void deleteNetworkSourceACL() { this->networkSourceACL_ = nullptr;};
    inline const vector<string> & getNetworkSourceACL() const { DARABONBA_PTR_GET_CONST(networkSourceACL_, vector<string>) };
    inline vector<string> getNetworkSourceACL() { DARABONBA_PTR_GET(networkSourceACL_, vector<string>) };
    inline GetAgentStorageResponseBody& setNetworkSourceACL(const vector<string> & networkSourceACL) { DARABONBA_PTR_SET_VALUE(networkSourceACL_, networkSourceACL) };
    inline GetAgentStorageResponseBody& setNetworkSourceACL(vector<string> && networkSourceACL) { DARABONBA_PTR_SET_RVALUE(networkSourceACL_, networkSourceACL) };


    // networkTypeACL Field Functions 
    bool hasNetworkTypeACL() const { return this->networkTypeACL_ != nullptr;};
    void deleteNetworkTypeACL() { this->networkTypeACL_ = nullptr;};
    inline const vector<string> & getNetworkTypeACL() const { DARABONBA_PTR_GET_CONST(networkTypeACL_, vector<string>) };
    inline vector<string> getNetworkTypeACL() { DARABONBA_PTR_GET(networkTypeACL_, vector<string>) };
    inline GetAgentStorageResponseBody& setNetworkTypeACL(const vector<string> & networkTypeACL) { DARABONBA_PTR_SET_VALUE(networkTypeACL_, networkTypeACL) };
    inline GetAgentStorageResponseBody& setNetworkTypeACL(vector<string> && networkTypeACL) { DARABONBA_PTR_SET_RVALUE(networkTypeACL_, networkTypeACL) };


    // policy Field Functions 
    bool hasPolicy() const { return this->policy_ != nullptr;};
    void deletePolicy() { this->policy_ = nullptr;};
    inline string getPolicy() const { DARABONBA_PTR_GET_DEFAULT(policy_, "") };
    inline GetAgentStorageResponseBody& setPolicy(string policy) { DARABONBA_PTR_SET_VALUE(policy_, policy) };


    // policyVersion Field Functions 
    bool hasPolicyVersion() const { return this->policyVersion_ != nullptr;};
    void deletePolicyVersion() { this->policyVersion_ = nullptr;};
    inline int64_t getPolicyVersion() const { DARABONBA_PTR_GET_DEFAULT(policyVersion_, 0L) };
    inline GetAgentStorageResponseBody& setPolicyVersion(int64_t policyVersion) { DARABONBA_PTR_SET_VALUE(policyVersion_, policyVersion) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline GetAgentStorageResponseBody& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetAgentStorageResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline GetAgentStorageResponseBody& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<GetAgentStorageResponseBody::Tags> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<GetAgentStorageResponseBody::Tags>) };
    inline vector<GetAgentStorageResponseBody::Tags> getTags() { DARABONBA_PTR_GET(tags_, vector<GetAgentStorageResponseBody::Tags>) };
    inline GetAgentStorageResponseBody& setTags(const vector<GetAgentStorageResponseBody::Tags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline GetAgentStorageResponseBody& setTags(vector<GetAgentStorageResponseBody::Tags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline GetAgentStorageResponseBody& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


  protected:
    // The description of the agent storage.
    shared_ptr<string> agentStorageDescription_ {};
    // The name of the agent storage.
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
    // The time when the agent storage was created.
    shared_ptr<string> createTime_ {};
    // The list of network sources allowed for the agent storage. TRUST_PROXY: console.
    shared_ptr<vector<string>> networkSourceACL_ {};
    // The list of network types allowed for the agent storage. CLASSIC: classic network. INTERNET: public network. VPC: VPC network.
    shared_ptr<vector<string>> networkTypeACL_ {};
    // The access control policy of the agent storage.
    shared_ptr<string> policy_ {};
    // The version of the access control policy for the agent storage.
    shared_ptr<int64_t> policyVersion_ {};
    // The region ID of the agent storage.
    shared_ptr<string> regionId_ {};
    // The request ID, which can be used for troubleshooting.
    shared_ptr<string> requestId_ {};
    // The resource group ID.
    shared_ptr<string> resourceGroupId_ {};
    // The tags of the agent storage.
    shared_ptr<vector<GetAgentStorageResponseBody::Tags>> tags_ {};
    // The user ID.
    shared_ptr<string> userId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Tablestore20201209
#endif
