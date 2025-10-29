// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPROJECTSSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTPROJECTSSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class ListProjectsShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListProjectsShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AliyunResourceGroupId, aliyunResourceGroupId_);
      DARABONBA_PTR_TO_JSON(AliyunResourceTags, aliyunResourceTagsShrink_);
      DARABONBA_PTR_TO_JSON(DevEnvironmentEnabled, devEnvironmentEnabled_);
      DARABONBA_PTR_TO_JSON(DevRoleDisabled, devRoleDisabled_);
      DARABONBA_PTR_TO_JSON(Ids, idsShrink_);
      DARABONBA_PTR_TO_JSON(Names, namesShrink_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(PaiTaskEnabled, paiTaskEnabled_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, ListProjectsShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AliyunResourceGroupId, aliyunResourceGroupId_);
      DARABONBA_PTR_FROM_JSON(AliyunResourceTags, aliyunResourceTagsShrink_);
      DARABONBA_PTR_FROM_JSON(DevEnvironmentEnabled, devEnvironmentEnabled_);
      DARABONBA_PTR_FROM_JSON(DevRoleDisabled, devRoleDisabled_);
      DARABONBA_PTR_FROM_JSON(Ids, idsShrink_);
      DARABONBA_PTR_FROM_JSON(Names, namesShrink_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(PaiTaskEnabled, paiTaskEnabled_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    ListProjectsShrinkRequest() = default ;
    ListProjectsShrinkRequest(const ListProjectsShrinkRequest &) = default ;
    ListProjectsShrinkRequest(ListProjectsShrinkRequest &&) = default ;
    ListProjectsShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListProjectsShrinkRequest() = default ;
    ListProjectsShrinkRequest& operator=(const ListProjectsShrinkRequest &) = default ;
    ListProjectsShrinkRequest& operator=(ListProjectsShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->aliyunResourceGroupId_ == nullptr
        && return this->aliyunResourceTagsShrink_ == nullptr && return this->devEnvironmentEnabled_ == nullptr && return this->devRoleDisabled_ == nullptr && return this->idsShrink_ == nullptr && return this->namesShrink_ == nullptr
        && return this->pageNumber_ == nullptr && return this->pageSize_ == nullptr && return this->paiTaskEnabled_ == nullptr && return this->status_ == nullptr; };
    // aliyunResourceGroupId Field Functions 
    bool hasAliyunResourceGroupId() const { return this->aliyunResourceGroupId_ != nullptr;};
    void deleteAliyunResourceGroupId() { this->aliyunResourceGroupId_ = nullptr;};
    inline string aliyunResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(aliyunResourceGroupId_, "") };
    inline ListProjectsShrinkRequest& setAliyunResourceGroupId(string aliyunResourceGroupId) { DARABONBA_PTR_SET_VALUE(aliyunResourceGroupId_, aliyunResourceGroupId) };


    // aliyunResourceTagsShrink Field Functions 
    bool hasAliyunResourceTagsShrink() const { return this->aliyunResourceTagsShrink_ != nullptr;};
    void deleteAliyunResourceTagsShrink() { this->aliyunResourceTagsShrink_ = nullptr;};
    inline string aliyunResourceTagsShrink() const { DARABONBA_PTR_GET_DEFAULT(aliyunResourceTagsShrink_, "") };
    inline ListProjectsShrinkRequest& setAliyunResourceTagsShrink(string aliyunResourceTagsShrink) { DARABONBA_PTR_SET_VALUE(aliyunResourceTagsShrink_, aliyunResourceTagsShrink) };


    // devEnvironmentEnabled Field Functions 
    bool hasDevEnvironmentEnabled() const { return this->devEnvironmentEnabled_ != nullptr;};
    void deleteDevEnvironmentEnabled() { this->devEnvironmentEnabled_ = nullptr;};
    inline bool devEnvironmentEnabled() const { DARABONBA_PTR_GET_DEFAULT(devEnvironmentEnabled_, false) };
    inline ListProjectsShrinkRequest& setDevEnvironmentEnabled(bool devEnvironmentEnabled) { DARABONBA_PTR_SET_VALUE(devEnvironmentEnabled_, devEnvironmentEnabled) };


    // devRoleDisabled Field Functions 
    bool hasDevRoleDisabled() const { return this->devRoleDisabled_ != nullptr;};
    void deleteDevRoleDisabled() { this->devRoleDisabled_ = nullptr;};
    inline bool devRoleDisabled() const { DARABONBA_PTR_GET_DEFAULT(devRoleDisabled_, false) };
    inline ListProjectsShrinkRequest& setDevRoleDisabled(bool devRoleDisabled) { DARABONBA_PTR_SET_VALUE(devRoleDisabled_, devRoleDisabled) };


    // idsShrink Field Functions 
    bool hasIdsShrink() const { return this->idsShrink_ != nullptr;};
    void deleteIdsShrink() { this->idsShrink_ = nullptr;};
    inline string idsShrink() const { DARABONBA_PTR_GET_DEFAULT(idsShrink_, "") };
    inline ListProjectsShrinkRequest& setIdsShrink(string idsShrink) { DARABONBA_PTR_SET_VALUE(idsShrink_, idsShrink) };


    // namesShrink Field Functions 
    bool hasNamesShrink() const { return this->namesShrink_ != nullptr;};
    void deleteNamesShrink() { this->namesShrink_ = nullptr;};
    inline string namesShrink() const { DARABONBA_PTR_GET_DEFAULT(namesShrink_, "") };
    inline ListProjectsShrinkRequest& setNamesShrink(string namesShrink) { DARABONBA_PTR_SET_VALUE(namesShrink_, namesShrink) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListProjectsShrinkRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListProjectsShrinkRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // paiTaskEnabled Field Functions 
    bool hasPaiTaskEnabled() const { return this->paiTaskEnabled_ != nullptr;};
    void deletePaiTaskEnabled() { this->paiTaskEnabled_ = nullptr;};
    inline bool paiTaskEnabled() const { DARABONBA_PTR_GET_DEFAULT(paiTaskEnabled_, false) };
    inline ListProjectsShrinkRequest& setPaiTaskEnabled(bool paiTaskEnabled) { DARABONBA_PTR_SET_VALUE(paiTaskEnabled_, paiTaskEnabled) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListProjectsShrinkRequest& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The ID of the Alibaba Cloud resource group to which the workspaces belong. You can log on to the [Resource Management console](https://resourcemanager.console.aliyun.com/resource-groups) and go to the Resource Group page to query the ID.
    // 
    // This parameter is used to query the information about workspaces that belong to a specific resource group.
    std::shared_ptr<string> aliyunResourceGroupId_ = nullptr;
    // The tags.
    std::shared_ptr<string> aliyunResourceTagsShrink_ = nullptr;
    // Specifies whether the development environment is enabled. Valid values:
    // 
    // *   true: The development environment is enabled. In this case, the development environment is isolated from the production environment in a workspace.
    // *   false: The development environment is disabled. In this case, only the production environment is used in a workspace.
    std::shared_ptr<bool> devEnvironmentEnabled_ = nullptr;
    // Specifies whether the Develop role is disabled. Valid values:
    // 
    // *   false (default)
    // *   true
    std::shared_ptr<bool> devRoleDisabled_ = nullptr;
    // The IDs of the DataWorks workspaces.
    std::shared_ptr<string> idsShrink_ = nullptr;
    // The names of the DataWorks workspaces.
    std::shared_ptr<string> namesShrink_ = nullptr;
    // The page number.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of entries per page. Default value: 10. Maximum value: 100.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // Specifies whether scheduling of Platform for AI (PAI) tasks is enabled. Valid values:
    // 
    // *   true: Scheduling of PAI tasks is enabled. In this case, you can create a PAI node in a DataWorks workspace and configure scheduling properties for the node to implement periodic scheduling of PAI tasks.
    // *   false: Scheduling of PAI tasks is disabled.
    std::shared_ptr<bool> paiTaskEnabled_ = nullptr;
    // The status of the workspaces. Valid values:
    // 
    // *   Available
    // *   Initializing
    // *   InitFailed
    // *   Forbidden
    // *   Deleting
    // *   DeleteFailed
    // *   Frozen
    // *   Updating
    // *   UpdateFailed
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
