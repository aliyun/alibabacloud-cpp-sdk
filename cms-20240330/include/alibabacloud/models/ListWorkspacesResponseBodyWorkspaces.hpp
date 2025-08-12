// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTWORKSPACESRESPONSEBODYWORKSPACES_HPP_
#define ALIBABACLOUD_MODELS_LISTWORKSPACESRESPONSEBODYWORKSPACES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class ListWorkspacesResponseBodyWorkspaces : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListWorkspacesResponseBodyWorkspaces& obj) { 
      DARABONBA_PTR_TO_JSON(createTime, createTime_);
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(displayName, displayName_);
      DARABONBA_PTR_TO_JSON(lastModifyTime, lastModifyTime_);
      DARABONBA_PTR_TO_JSON(regionId, regionId_);
      DARABONBA_PTR_TO_JSON(slsProject, slsProject_);
      DARABONBA_PTR_TO_JSON(workspaceName, workspaceName_);
    };
    friend void from_json(const Darabonba::Json& j, ListWorkspacesResponseBodyWorkspaces& obj) { 
      DARABONBA_PTR_FROM_JSON(createTime, createTime_);
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(displayName, displayName_);
      DARABONBA_PTR_FROM_JSON(lastModifyTime, lastModifyTime_);
      DARABONBA_PTR_FROM_JSON(regionId, regionId_);
      DARABONBA_PTR_FROM_JSON(slsProject, slsProject_);
      DARABONBA_PTR_FROM_JSON(workspaceName, workspaceName_);
    };
    ListWorkspacesResponseBodyWorkspaces() = default ;
    ListWorkspacesResponseBodyWorkspaces(const ListWorkspacesResponseBodyWorkspaces &) = default ;
    ListWorkspacesResponseBodyWorkspaces(ListWorkspacesResponseBodyWorkspaces &&) = default ;
    ListWorkspacesResponseBodyWorkspaces(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListWorkspacesResponseBodyWorkspaces() = default ;
    ListWorkspacesResponseBodyWorkspaces& operator=(const ListWorkspacesResponseBodyWorkspaces &) = default ;
    ListWorkspacesResponseBodyWorkspaces& operator=(ListWorkspacesResponseBodyWorkspaces &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->createTime_ != nullptr
        && this->description_ != nullptr && this->displayName_ != nullptr && this->lastModifyTime_ != nullptr && this->regionId_ != nullptr && this->slsProject_ != nullptr
        && this->workspaceName_ != nullptr; };
    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline ListWorkspacesResponseBodyWorkspaces& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ListWorkspacesResponseBodyWorkspaces& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // displayName Field Functions 
    bool hasDisplayName() const { return this->displayName_ != nullptr;};
    void deleteDisplayName() { this->displayName_ = nullptr;};
    inline string displayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
    inline ListWorkspacesResponseBodyWorkspaces& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


    // lastModifyTime Field Functions 
    bool hasLastModifyTime() const { return this->lastModifyTime_ != nullptr;};
    void deleteLastModifyTime() { this->lastModifyTime_ = nullptr;};
    inline string lastModifyTime() const { DARABONBA_PTR_GET_DEFAULT(lastModifyTime_, "") };
    inline ListWorkspacesResponseBodyWorkspaces& setLastModifyTime(string lastModifyTime) { DARABONBA_PTR_SET_VALUE(lastModifyTime_, lastModifyTime) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListWorkspacesResponseBodyWorkspaces& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // slsProject Field Functions 
    bool hasSlsProject() const { return this->slsProject_ != nullptr;};
    void deleteSlsProject() { this->slsProject_ = nullptr;};
    inline string slsProject() const { DARABONBA_PTR_GET_DEFAULT(slsProject_, "") };
    inline ListWorkspacesResponseBodyWorkspaces& setSlsProject(string slsProject) { DARABONBA_PTR_SET_VALUE(slsProject_, slsProject) };


    // workspaceName Field Functions 
    bool hasWorkspaceName() const { return this->workspaceName_ != nullptr;};
    void deleteWorkspaceName() { this->workspaceName_ = nullptr;};
    inline string workspaceName() const { DARABONBA_PTR_GET_DEFAULT(workspaceName_, "") };
    inline ListWorkspacesResponseBodyWorkspaces& setWorkspaceName(string workspaceName) { DARABONBA_PTR_SET_VALUE(workspaceName_, workspaceName) };


  protected:
    // Use the UTC time format: yyyy-MM-ddTHH:mm:ssZ
    std::shared_ptr<string> createTime_ = nullptr;
    // 工作空间描述
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<string> displayName_ = nullptr;
    // Use the UTC time format: yyyy-MM-ddTHH:mm:ssZ
    std::shared_ptr<string> lastModifyTime_ = nullptr;
    // 地域ID
    std::shared_ptr<string> regionId_ = nullptr;
    // 工作空间绑定的日志服务项目名称
    std::shared_ptr<string> slsProject_ = nullptr;
    // 工作空间名称
    // 
    // This parameter is required.
    std::shared_ptr<string> workspaceName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
