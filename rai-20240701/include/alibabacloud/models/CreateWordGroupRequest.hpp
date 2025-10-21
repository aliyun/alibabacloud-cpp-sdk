// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEWORDGROUPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEWORDGROUPREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateWordGroupRequestBodyData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RAI20240701
{
namespace Models
{
  class CreateWordGroupRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateWordGroupRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BodyData, bodyData_);
      DARABONBA_PTR_TO_JSON(Commit, commit_);
      DARABONBA_PTR_TO_JSON(GroupName, groupName_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateWordGroupRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BodyData, bodyData_);
      DARABONBA_PTR_FROM_JSON(Commit, commit_);
      DARABONBA_PTR_FROM_JSON(GroupName, groupName_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    CreateWordGroupRequest() = default ;
    CreateWordGroupRequest(const CreateWordGroupRequest &) = default ;
    CreateWordGroupRequest(CreateWordGroupRequest &&) = default ;
    CreateWordGroupRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateWordGroupRequest() = default ;
    CreateWordGroupRequest& operator=(const CreateWordGroupRequest &) = default ;
    CreateWordGroupRequest& operator=(CreateWordGroupRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bodyData_ == nullptr
        && return this->commit_ == nullptr && return this->groupName_ == nullptr && return this->regionId_ == nullptr && return this->workspaceId_ == nullptr; };
    // bodyData Field Functions 
    bool hasBodyData() const { return this->bodyData_ != nullptr;};
    void deleteBodyData() { this->bodyData_ = nullptr;};
    inline const CreateWordGroupRequestBodyData & bodyData() const { DARABONBA_PTR_GET_CONST(bodyData_, CreateWordGroupRequestBodyData) };
    inline CreateWordGroupRequestBodyData bodyData() { DARABONBA_PTR_GET(bodyData_, CreateWordGroupRequestBodyData) };
    inline CreateWordGroupRequest& setBodyData(const CreateWordGroupRequestBodyData & bodyData) { DARABONBA_PTR_SET_VALUE(bodyData_, bodyData) };
    inline CreateWordGroupRequest& setBodyData(CreateWordGroupRequestBodyData && bodyData) { DARABONBA_PTR_SET_RVALUE(bodyData_, bodyData) };


    // commit Field Functions 
    bool hasCommit() const { return this->commit_ != nullptr;};
    void deleteCommit() { this->commit_ = nullptr;};
    inline bool commit() const { DARABONBA_PTR_GET_DEFAULT(commit_, false) };
    inline CreateWordGroupRequest& setCommit(bool commit) { DARABONBA_PTR_SET_VALUE(commit_, commit) };


    // groupName Field Functions 
    bool hasGroupName() const { return this->groupName_ != nullptr;};
    void deleteGroupName() { this->groupName_ = nullptr;};
    inline string groupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
    inline CreateWordGroupRequest& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateWordGroupRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline int64_t workspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, 0L) };
    inline CreateWordGroupRequest& setWorkspaceId(int64_t workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    // Request object
    std::shared_ptr<CreateWordGroupRequestBodyData> bodyData_ = nullptr;
    // Whether to commit.
    // false: Not actually saved, only checked
    // true: Commit and save
    std::shared_ptr<bool> commit_ = nullptr;
    // Keyword group name
    std::shared_ptr<string> groupName_ = nullptr;
    // Region ID.
    std::shared_ptr<string> regionId_ = nullptr;
    // Workspace ID
    std::shared_ptr<int64_t> workspaceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RAI20240701
#endif
