// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETRESOURCEGROUPRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETRESOURCEGROUPRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetResourceGroupResponseBodyTags.hpp>
#include <alibabacloud/models/UserVpc.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiStudio20220112
{
namespace Models
{
  class GetResourceGroupResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetResourceGroupResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterID, clusterID_);
      DARABONBA_PTR_TO_JSON(ComputingResourceProvider, computingResourceProvider_);
      DARABONBA_PTR_TO_JSON(CreatorID, creatorID_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(GmtCreatedTime, gmtCreatedTime_);
      DARABONBA_PTR_TO_JSON(GmtModifiedTime, gmtModifiedTime_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(SupportRDMA, supportRDMA_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
      DARABONBA_PTR_TO_JSON(UserVpc, userVpc_);
      DARABONBA_PTR_TO_JSON(WorkspaceID, workspaceID_);
    };
    friend void from_json(const Darabonba::Json& j, GetResourceGroupResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterID, clusterID_);
      DARABONBA_PTR_FROM_JSON(ComputingResourceProvider, computingResourceProvider_);
      DARABONBA_PTR_FROM_JSON(CreatorID, creatorID_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(GmtCreatedTime, gmtCreatedTime_);
      DARABONBA_PTR_FROM_JSON(GmtModifiedTime, gmtModifiedTime_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(SupportRDMA, supportRDMA_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
      DARABONBA_PTR_FROM_JSON(UserVpc, userVpc_);
      DARABONBA_PTR_FROM_JSON(WorkspaceID, workspaceID_);
    };
    GetResourceGroupResponseBody() = default ;
    GetResourceGroupResponseBody(const GetResourceGroupResponseBody &) = default ;
    GetResourceGroupResponseBody(GetResourceGroupResponseBody &&) = default ;
    GetResourceGroupResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetResourceGroupResponseBody() = default ;
    GetResourceGroupResponseBody& operator=(const GetResourceGroupResponseBody &) = default ;
    GetResourceGroupResponseBody& operator=(GetResourceGroupResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->clusterID_ != nullptr
        && this->computingResourceProvider_ != nullptr && this->creatorID_ != nullptr && this->description_ != nullptr && this->gmtCreatedTime_ != nullptr && this->gmtModifiedTime_ != nullptr
        && this->name_ != nullptr && this->requestId_ != nullptr && this->resourceType_ != nullptr && this->status_ != nullptr && this->supportRDMA_ != nullptr
        && this->tags_ != nullptr && this->userVpc_ != nullptr && this->workspaceID_ != nullptr; };
    // clusterID Field Functions 
    bool hasClusterID() const { return this->clusterID_ != nullptr;};
    void deleteClusterID() { this->clusterID_ = nullptr;};
    inline string clusterID() const { DARABONBA_PTR_GET_DEFAULT(clusterID_, "") };
    inline GetResourceGroupResponseBody& setClusterID(string clusterID) { DARABONBA_PTR_SET_VALUE(clusterID_, clusterID) };


    // computingResourceProvider Field Functions 
    bool hasComputingResourceProvider() const { return this->computingResourceProvider_ != nullptr;};
    void deleteComputingResourceProvider() { this->computingResourceProvider_ = nullptr;};
    inline string computingResourceProvider() const { DARABONBA_PTR_GET_DEFAULT(computingResourceProvider_, "") };
    inline GetResourceGroupResponseBody& setComputingResourceProvider(string computingResourceProvider) { DARABONBA_PTR_SET_VALUE(computingResourceProvider_, computingResourceProvider) };


    // creatorID Field Functions 
    bool hasCreatorID() const { return this->creatorID_ != nullptr;};
    void deleteCreatorID() { this->creatorID_ = nullptr;};
    inline string creatorID() const { DARABONBA_PTR_GET_DEFAULT(creatorID_, "") };
    inline GetResourceGroupResponseBody& setCreatorID(string creatorID) { DARABONBA_PTR_SET_VALUE(creatorID_, creatorID) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline GetResourceGroupResponseBody& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // gmtCreatedTime Field Functions 
    bool hasGmtCreatedTime() const { return this->gmtCreatedTime_ != nullptr;};
    void deleteGmtCreatedTime() { this->gmtCreatedTime_ = nullptr;};
    inline string gmtCreatedTime() const { DARABONBA_PTR_GET_DEFAULT(gmtCreatedTime_, "") };
    inline GetResourceGroupResponseBody& setGmtCreatedTime(string gmtCreatedTime) { DARABONBA_PTR_SET_VALUE(gmtCreatedTime_, gmtCreatedTime) };


    // gmtModifiedTime Field Functions 
    bool hasGmtModifiedTime() const { return this->gmtModifiedTime_ != nullptr;};
    void deleteGmtModifiedTime() { this->gmtModifiedTime_ = nullptr;};
    inline string gmtModifiedTime() const { DARABONBA_PTR_GET_DEFAULT(gmtModifiedTime_, "") };
    inline GetResourceGroupResponseBody& setGmtModifiedTime(string gmtModifiedTime) { DARABONBA_PTR_SET_VALUE(gmtModifiedTime_, gmtModifiedTime) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GetResourceGroupResponseBody& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetResourceGroupResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string resourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline GetResourceGroupResponseBody& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetResourceGroupResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // supportRDMA Field Functions 
    bool hasSupportRDMA() const { return this->supportRDMA_ != nullptr;};
    void deleteSupportRDMA() { this->supportRDMA_ = nullptr;};
    inline bool supportRDMA() const { DARABONBA_PTR_GET_DEFAULT(supportRDMA_, false) };
    inline GetResourceGroupResponseBody& setSupportRDMA(bool supportRDMA) { DARABONBA_PTR_SET_VALUE(supportRDMA_, supportRDMA) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<GetResourceGroupResponseBodyTags> & tags() const { DARABONBA_PTR_GET_CONST(tags_, vector<GetResourceGroupResponseBodyTags>) };
    inline vector<GetResourceGroupResponseBodyTags> tags() { DARABONBA_PTR_GET(tags_, vector<GetResourceGroupResponseBodyTags>) };
    inline GetResourceGroupResponseBody& setTags(const vector<GetResourceGroupResponseBodyTags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline GetResourceGroupResponseBody& setTags(vector<GetResourceGroupResponseBodyTags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // userVpc Field Functions 
    bool hasUserVpc() const { return this->userVpc_ != nullptr;};
    void deleteUserVpc() { this->userVpc_ = nullptr;};
    inline const UserVpc & userVpc() const { DARABONBA_PTR_GET_CONST(userVpc_, UserVpc) };
    inline UserVpc userVpc() { DARABONBA_PTR_GET(userVpc_, UserVpc) };
    inline GetResourceGroupResponseBody& setUserVpc(const UserVpc & userVpc) { DARABONBA_PTR_SET_VALUE(userVpc_, userVpc) };
    inline GetResourceGroupResponseBody& setUserVpc(UserVpc && userVpc) { DARABONBA_PTR_SET_RVALUE(userVpc_, userVpc) };


    // workspaceID Field Functions 
    bool hasWorkspaceID() const { return this->workspaceID_ != nullptr;};
    void deleteWorkspaceID() { this->workspaceID_ = nullptr;};
    inline string workspaceID() const { DARABONBA_PTR_GET_DEFAULT(workspaceID_, "") };
    inline GetResourceGroupResponseBody& setWorkspaceID(string workspaceID) { DARABONBA_PTR_SET_VALUE(workspaceID_, workspaceID) };


  protected:
    std::shared_ptr<string> clusterID_ = nullptr;
    std::shared_ptr<string> computingResourceProvider_ = nullptr;
    std::shared_ptr<string> creatorID_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<string> gmtCreatedTime_ = nullptr;
    std::shared_ptr<string> gmtModifiedTime_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<string> resourceType_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<bool> supportRDMA_ = nullptr;
    std::shared_ptr<vector<GetResourceGroupResponseBodyTags>> tags_ = nullptr;
    std::shared_ptr<UserVpc> userVpc_ = nullptr;
    std::shared_ptr<string> workspaceID_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiStudio20220112
#endif
