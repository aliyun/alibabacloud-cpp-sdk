// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTRESOURCEGROUPSRESPONSEBODYDATAASSOCIATEDWORKSPACES_HPP_
#define ALIBABACLOUD_MODELS_LISTRESOURCEGROUPSRESPONSEBODYDATAASSOCIATEDWORKSPACES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EmrStudio20240430
{
namespace Models
{
  class ListResourceGroupsResponseBodyDataAssociatedWorkspaces : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListResourceGroupsResponseBodyDataAssociatedWorkspaces& obj) { 
      DARABONBA_PTR_TO_JSON(workspaceId, workspaceId_);
      DARABONBA_PTR_TO_JSON(workspaceName, workspaceName_);
    };
    friend void from_json(const Darabonba::Json& j, ListResourceGroupsResponseBodyDataAssociatedWorkspaces& obj) { 
      DARABONBA_PTR_FROM_JSON(workspaceId, workspaceId_);
      DARABONBA_PTR_FROM_JSON(workspaceName, workspaceName_);
    };
    ListResourceGroupsResponseBodyDataAssociatedWorkspaces() = default ;
    ListResourceGroupsResponseBodyDataAssociatedWorkspaces(const ListResourceGroupsResponseBodyDataAssociatedWorkspaces &) = default ;
    ListResourceGroupsResponseBodyDataAssociatedWorkspaces(ListResourceGroupsResponseBodyDataAssociatedWorkspaces &&) = default ;
    ListResourceGroupsResponseBodyDataAssociatedWorkspaces(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListResourceGroupsResponseBodyDataAssociatedWorkspaces() = default ;
    ListResourceGroupsResponseBodyDataAssociatedWorkspaces& operator=(const ListResourceGroupsResponseBodyDataAssociatedWorkspaces &) = default ;
    ListResourceGroupsResponseBodyDataAssociatedWorkspaces& operator=(ListResourceGroupsResponseBodyDataAssociatedWorkspaces &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->workspaceId_ == nullptr
        && return this->workspaceName_ == nullptr; };
    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string workspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline ListResourceGroupsResponseBodyDataAssociatedWorkspaces& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


    // workspaceName Field Functions 
    bool hasWorkspaceName() const { return this->workspaceName_ != nullptr;};
    void deleteWorkspaceName() { this->workspaceName_ = nullptr;};
    inline string workspaceName() const { DARABONBA_PTR_GET_DEFAULT(workspaceName_, "") };
    inline ListResourceGroupsResponseBodyDataAssociatedWorkspaces& setWorkspaceName(string workspaceName) { DARABONBA_PTR_SET_VALUE(workspaceName_, workspaceName) };


  protected:
    std::shared_ptr<string> workspaceId_ = nullptr;
    std::shared_ptr<string> workspaceName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EmrStudio20240430
#endif
