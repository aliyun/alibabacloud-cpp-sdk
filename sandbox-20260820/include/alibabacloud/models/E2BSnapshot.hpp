// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_E2BSNAPSHOT_HPP_
#define ALIBABACLOUD_MODELS_E2BSNAPSHOT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sandbox20260820
{
namespace Models
{
  class E2BSnapshot : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const E2BSnapshot& obj) { 
      DARABONBA_PTR_TO_JSON(cpuCount, cpuCount_);
      DARABONBA_PTR_TO_JSON(createdTime, createdTime_);
      DARABONBA_PTR_TO_JSON(expiredTime, expiredTime_);
      DARABONBA_PTR_TO_JSON(memoryMB, memoryMB_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(resourceGroupID, resourceGroupID_);
      DARABONBA_PTR_TO_JSON(resourceTags, resourceTags_);
      DARABONBA_PTR_TO_JSON(snapshotID, snapshotID_);
      DARABONBA_PTR_TO_JSON(sourceSandboxID, sourceSandboxID_);
      DARABONBA_PTR_TO_JSON(status, status_);
      DARABONBA_PTR_TO_JSON(tag, tag_);
      DARABONBA_PTR_TO_JSON(teamID, teamID_);
      DARABONBA_PTR_TO_JSON(teamName, teamName_);
      DARABONBA_PTR_TO_JSON(userID, userID_);
    };
    friend void from_json(const Darabonba::Json& j, E2BSnapshot& obj) { 
      DARABONBA_PTR_FROM_JSON(cpuCount, cpuCount_);
      DARABONBA_PTR_FROM_JSON(createdTime, createdTime_);
      DARABONBA_PTR_FROM_JSON(expiredTime, expiredTime_);
      DARABONBA_PTR_FROM_JSON(memoryMB, memoryMB_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(resourceGroupID, resourceGroupID_);
      DARABONBA_PTR_FROM_JSON(resourceTags, resourceTags_);
      DARABONBA_PTR_FROM_JSON(snapshotID, snapshotID_);
      DARABONBA_PTR_FROM_JSON(sourceSandboxID, sourceSandboxID_);
      DARABONBA_PTR_FROM_JSON(status, status_);
      DARABONBA_PTR_FROM_JSON(tag, tag_);
      DARABONBA_PTR_FROM_JSON(teamID, teamID_);
      DARABONBA_PTR_FROM_JSON(teamName, teamName_);
      DARABONBA_PTR_FROM_JSON(userID, userID_);
    };
    E2BSnapshot() = default ;
    E2BSnapshot(const E2BSnapshot &) = default ;
    E2BSnapshot(E2BSnapshot &&) = default ;
    E2BSnapshot(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~E2BSnapshot() = default ;
    E2BSnapshot& operator=(const E2BSnapshot &) = default ;
    E2BSnapshot& operator=(E2BSnapshot &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ResourceTags : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ResourceTags& obj) { 
        DARABONBA_PTR_TO_JSON(tagKey, tagKey_);
        DARABONBA_PTR_TO_JSON(tagValue, tagValue_);
      };
      friend void from_json(const Darabonba::Json& j, ResourceTags& obj) { 
        DARABONBA_PTR_FROM_JSON(tagKey, tagKey_);
        DARABONBA_PTR_FROM_JSON(tagValue, tagValue_);
      };
      ResourceTags() = default ;
      ResourceTags(const ResourceTags &) = default ;
      ResourceTags(ResourceTags &&) = default ;
      ResourceTags(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ResourceTags() = default ;
      ResourceTags& operator=(const ResourceTags &) = default ;
      ResourceTags& operator=(ResourceTags &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->tagKey_ == nullptr
        && this->tagValue_ == nullptr; };
      // tagKey Field Functions 
      bool hasTagKey() const { return this->tagKey_ != nullptr;};
      void deleteTagKey() { this->tagKey_ = nullptr;};
      inline string getTagKey() const { DARABONBA_PTR_GET_DEFAULT(tagKey_, "") };
      inline ResourceTags& setTagKey(string tagKey) { DARABONBA_PTR_SET_VALUE(tagKey_, tagKey) };


      // tagValue Field Functions 
      bool hasTagValue() const { return this->tagValue_ != nullptr;};
      void deleteTagValue() { this->tagValue_ = nullptr;};
      inline string getTagValue() const { DARABONBA_PTR_GET_DEFAULT(tagValue_, "") };
      inline ResourceTags& setTagValue(string tagValue) { DARABONBA_PTR_SET_VALUE(tagValue_, tagValue) };


    protected:
      // The tag key.
      shared_ptr<string> tagKey_ {};
      // The tag value.
      shared_ptr<string> tagValue_ {};
    };

    virtual bool empty() const override { return this->cpuCount_ == nullptr
        && this->createdTime_ == nullptr && this->expiredTime_ == nullptr && this->memoryMB_ == nullptr && this->name_ == nullptr && this->resourceGroupID_ == nullptr
        && this->resourceTags_ == nullptr && this->snapshotID_ == nullptr && this->sourceSandboxID_ == nullptr && this->status_ == nullptr && this->tag_ == nullptr
        && this->teamID_ == nullptr && this->teamName_ == nullptr && this->userID_ == nullptr; };
    // cpuCount Field Functions 
    bool hasCpuCount() const { return this->cpuCount_ != nullptr;};
    void deleteCpuCount() { this->cpuCount_ = nullptr;};
    inline float getCpuCount() const { DARABONBA_PTR_GET_DEFAULT(cpuCount_, 0.0) };
    inline E2BSnapshot& setCpuCount(float cpuCount) { DARABONBA_PTR_SET_VALUE(cpuCount_, cpuCount) };


    // createdTime Field Functions 
    bool hasCreatedTime() const { return this->createdTime_ != nullptr;};
    void deleteCreatedTime() { this->createdTime_ = nullptr;};
    inline string getCreatedTime() const { DARABONBA_PTR_GET_DEFAULT(createdTime_, "") };
    inline E2BSnapshot& setCreatedTime(string createdTime) { DARABONBA_PTR_SET_VALUE(createdTime_, createdTime) };


    // expiredTime Field Functions 
    bool hasExpiredTime() const { return this->expiredTime_ != nullptr;};
    void deleteExpiredTime() { this->expiredTime_ = nullptr;};
    inline string getExpiredTime() const { DARABONBA_PTR_GET_DEFAULT(expiredTime_, "") };
    inline E2BSnapshot& setExpiredTime(string expiredTime) { DARABONBA_PTR_SET_VALUE(expiredTime_, expiredTime) };


    // memoryMB Field Functions 
    bool hasMemoryMB() const { return this->memoryMB_ != nullptr;};
    void deleteMemoryMB() { this->memoryMB_ = nullptr;};
    inline int32_t getMemoryMB() const { DARABONBA_PTR_GET_DEFAULT(memoryMB_, 0) };
    inline E2BSnapshot& setMemoryMB(int32_t memoryMB) { DARABONBA_PTR_SET_VALUE(memoryMB_, memoryMB) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline E2BSnapshot& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // resourceGroupID Field Functions 
    bool hasResourceGroupID() const { return this->resourceGroupID_ != nullptr;};
    void deleteResourceGroupID() { this->resourceGroupID_ = nullptr;};
    inline string getResourceGroupID() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupID_, "") };
    inline E2BSnapshot& setResourceGroupID(string resourceGroupID) { DARABONBA_PTR_SET_VALUE(resourceGroupID_, resourceGroupID) };


    // resourceTags Field Functions 
    bool hasResourceTags() const { return this->resourceTags_ != nullptr;};
    void deleteResourceTags() { this->resourceTags_ = nullptr;};
    inline const vector<E2BSnapshot::ResourceTags> & getResourceTags() const { DARABONBA_PTR_GET_CONST(resourceTags_, vector<E2BSnapshot::ResourceTags>) };
    inline vector<E2BSnapshot::ResourceTags> getResourceTags() { DARABONBA_PTR_GET(resourceTags_, vector<E2BSnapshot::ResourceTags>) };
    inline E2BSnapshot& setResourceTags(const vector<E2BSnapshot::ResourceTags> & resourceTags) { DARABONBA_PTR_SET_VALUE(resourceTags_, resourceTags) };
    inline E2BSnapshot& setResourceTags(vector<E2BSnapshot::ResourceTags> && resourceTags) { DARABONBA_PTR_SET_RVALUE(resourceTags_, resourceTags) };


    // snapshotID Field Functions 
    bool hasSnapshotID() const { return this->snapshotID_ != nullptr;};
    void deleteSnapshotID() { this->snapshotID_ = nullptr;};
    inline string getSnapshotID() const { DARABONBA_PTR_GET_DEFAULT(snapshotID_, "") };
    inline E2BSnapshot& setSnapshotID(string snapshotID) { DARABONBA_PTR_SET_VALUE(snapshotID_, snapshotID) };


    // sourceSandboxID Field Functions 
    bool hasSourceSandboxID() const { return this->sourceSandboxID_ != nullptr;};
    void deleteSourceSandboxID() { this->sourceSandboxID_ = nullptr;};
    inline string getSourceSandboxID() const { DARABONBA_PTR_GET_DEFAULT(sourceSandboxID_, "") };
    inline E2BSnapshot& setSourceSandboxID(string sourceSandboxID) { DARABONBA_PTR_SET_VALUE(sourceSandboxID_, sourceSandboxID) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline E2BSnapshot& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline string getTag() const { DARABONBA_PTR_GET_DEFAULT(tag_, "") };
    inline E2BSnapshot& setTag(string tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };


    // teamID Field Functions 
    bool hasTeamID() const { return this->teamID_ != nullptr;};
    void deleteTeamID() { this->teamID_ = nullptr;};
    inline string getTeamID() const { DARABONBA_PTR_GET_DEFAULT(teamID_, "") };
    inline E2BSnapshot& setTeamID(string teamID) { DARABONBA_PTR_SET_VALUE(teamID_, teamID) };


    // teamName Field Functions 
    bool hasTeamName() const { return this->teamName_ != nullptr;};
    void deleteTeamName() { this->teamName_ = nullptr;};
    inline string getTeamName() const { DARABONBA_PTR_GET_DEFAULT(teamName_, "") };
    inline E2BSnapshot& setTeamName(string teamName) { DARABONBA_PTR_SET_VALUE(teamName_, teamName) };


    // userID Field Functions 
    bool hasUserID() const { return this->userID_ != nullptr;};
    void deleteUserID() { this->userID_ = nullptr;};
    inline string getUserID() const { DARABONBA_PTR_GET_DEFAULT(userID_, "") };
    inline E2BSnapshot& setUserID(string userID) { DARABONBA_PTR_SET_VALUE(userID_, userID) };


  protected:
    // The CPU specifications of the snapshot.
    shared_ptr<float> cpuCount_ {};
    // The creation time of the snapshot.
    shared_ptr<string> createdTime_ {};
    // The expiration time of the snapshot.
    shared_ptr<string> expiredTime_ {};
    // The memory specifications of the snapshot.
    shared_ptr<int32_t> memoryMB_ {};
    // The short name of the snapshot.
    shared_ptr<string> name_ {};
    // The resource group ID.
    shared_ptr<string> resourceGroupID_ {};
    // The resource tags.
    shared_ptr<vector<E2BSnapshot::ResourceTags>> resourceTags_ {};
    // The snapshot ID.
    shared_ptr<string> snapshotID_ {};
    // The source sandbox ID.
    shared_ptr<string> sourceSandboxID_ {};
    // The snapshot status.
    shared_ptr<string> status_ {};
    // The snapshot tag.
    shared_ptr<string> tag_ {};
    // The team ID.
    shared_ptr<string> teamID_ {};
    // The team name.
    shared_ptr<string> teamName_ {};
    // The Alibaba Cloud account ID.
    shared_ptr<string> userID_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sandbox20260820
#endif
