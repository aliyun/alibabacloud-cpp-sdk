// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RESOURCEGROUP_HPP_
#define ALIBABACLOUD_MODELS_RESOURCEGROUP_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/UserVpc.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiStudio20220112
{
namespace Models
{
  class ResourceGroup : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ResourceGroup& obj) { 
      DARABONBA_PTR_TO_JSON(CreatorID, creatorID_);
      DARABONBA_PTR_TO_JSON(GmtCreatedTime, gmtCreatedTime_);
      DARABONBA_PTR_TO_JSON(GmtModifiedTime, gmtModifiedTime_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(NodeCount, nodeCount_);
      DARABONBA_PTR_TO_JSON(ResourceGroupID, resourceGroupID_);
      DARABONBA_PTR_TO_JSON(UserVpc, userVpc_);
      DARABONBA_PTR_TO_JSON(Version, version_);
      DARABONBA_PTR_TO_JSON(WorkspaceID, workspaceID_);
    };
    friend void from_json(const Darabonba::Json& j, ResourceGroup& obj) { 
      DARABONBA_PTR_FROM_JSON(CreatorID, creatorID_);
      DARABONBA_PTR_FROM_JSON(GmtCreatedTime, gmtCreatedTime_);
      DARABONBA_PTR_FROM_JSON(GmtModifiedTime, gmtModifiedTime_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(NodeCount, nodeCount_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupID, resourceGroupID_);
      DARABONBA_PTR_FROM_JSON(UserVpc, userVpc_);
      DARABONBA_PTR_FROM_JSON(Version, version_);
      DARABONBA_PTR_FROM_JSON(WorkspaceID, workspaceID_);
    };
    ResourceGroup() = default ;
    ResourceGroup(const ResourceGroup &) = default ;
    ResourceGroup(ResourceGroup &&) = default ;
    ResourceGroup(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ResourceGroup() = default ;
    ResourceGroup& operator=(const ResourceGroup &) = default ;
    ResourceGroup& operator=(ResourceGroup &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->creatorID_ == nullptr
        && return this->gmtCreatedTime_ == nullptr && return this->gmtModifiedTime_ == nullptr && return this->name_ == nullptr && return this->nodeCount_ == nullptr && return this->resourceGroupID_ == nullptr
        && return this->userVpc_ == nullptr && return this->version_ == nullptr && return this->workspaceID_ == nullptr; };
    // creatorID Field Functions 
    bool hasCreatorID() const { return this->creatorID_ != nullptr;};
    void deleteCreatorID() { this->creatorID_ = nullptr;};
    inline string creatorID() const { DARABONBA_PTR_GET_DEFAULT(creatorID_, "") };
    inline ResourceGroup& setCreatorID(string creatorID) { DARABONBA_PTR_SET_VALUE(creatorID_, creatorID) };


    // gmtCreatedTime Field Functions 
    bool hasGmtCreatedTime() const { return this->gmtCreatedTime_ != nullptr;};
    void deleteGmtCreatedTime() { this->gmtCreatedTime_ = nullptr;};
    inline string gmtCreatedTime() const { DARABONBA_PTR_GET_DEFAULT(gmtCreatedTime_, "") };
    inline ResourceGroup& setGmtCreatedTime(string gmtCreatedTime) { DARABONBA_PTR_SET_VALUE(gmtCreatedTime_, gmtCreatedTime) };


    // gmtModifiedTime Field Functions 
    bool hasGmtModifiedTime() const { return this->gmtModifiedTime_ != nullptr;};
    void deleteGmtModifiedTime() { this->gmtModifiedTime_ = nullptr;};
    inline string gmtModifiedTime() const { DARABONBA_PTR_GET_DEFAULT(gmtModifiedTime_, "") };
    inline ResourceGroup& setGmtModifiedTime(string gmtModifiedTime) { DARABONBA_PTR_SET_VALUE(gmtModifiedTime_, gmtModifiedTime) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ResourceGroup& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // nodeCount Field Functions 
    bool hasNodeCount() const { return this->nodeCount_ != nullptr;};
    void deleteNodeCount() { this->nodeCount_ = nullptr;};
    inline int32_t nodeCount() const { DARABONBA_PTR_GET_DEFAULT(nodeCount_, 0) };
    inline ResourceGroup& setNodeCount(int32_t nodeCount) { DARABONBA_PTR_SET_VALUE(nodeCount_, nodeCount) };


    // resourceGroupID Field Functions 
    bool hasResourceGroupID() const { return this->resourceGroupID_ != nullptr;};
    void deleteResourceGroupID() { this->resourceGroupID_ = nullptr;};
    inline string resourceGroupID() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupID_, "") };
    inline ResourceGroup& setResourceGroupID(string resourceGroupID) { DARABONBA_PTR_SET_VALUE(resourceGroupID_, resourceGroupID) };


    // userVpc Field Functions 
    bool hasUserVpc() const { return this->userVpc_ != nullptr;};
    void deleteUserVpc() { this->userVpc_ = nullptr;};
    inline const UserVpc & userVpc() const { DARABONBA_PTR_GET_CONST(userVpc_, UserVpc) };
    inline UserVpc userVpc() { DARABONBA_PTR_GET(userVpc_, UserVpc) };
    inline ResourceGroup& setUserVpc(const UserVpc & userVpc) { DARABONBA_PTR_SET_VALUE(userVpc_, userVpc) };
    inline ResourceGroup& setUserVpc(UserVpc && userVpc) { DARABONBA_PTR_SET_RVALUE(userVpc_, userVpc) };


    // version Field Functions 
    bool hasVersion() const { return this->version_ != nullptr;};
    void deleteVersion() { this->version_ = nullptr;};
    inline string version() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
    inline ResourceGroup& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


    // workspaceID Field Functions 
    bool hasWorkspaceID() const { return this->workspaceID_ != nullptr;};
    void deleteWorkspaceID() { this->workspaceID_ = nullptr;};
    inline string workspaceID() const { DARABONBA_PTR_GET_DEFAULT(workspaceID_, "") };
    inline ResourceGroup& setWorkspaceID(string workspaceID) { DARABONBA_PTR_SET_VALUE(workspaceID_, workspaceID) };


  protected:
    std::shared_ptr<string> creatorID_ = nullptr;
    std::shared_ptr<string> gmtCreatedTime_ = nullptr;
    std::shared_ptr<string> gmtModifiedTime_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<int32_t> nodeCount_ = nullptr;
    std::shared_ptr<string> resourceGroupID_ = nullptr;
    std::shared_ptr<UserVpc> userVpc_ = nullptr;
    std::shared_ptr<string> version_ = nullptr;
    std::shared_ptr<string> workspaceID_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiStudio20220112
#endif
