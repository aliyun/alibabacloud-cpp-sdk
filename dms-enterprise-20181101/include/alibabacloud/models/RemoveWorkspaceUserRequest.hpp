// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REMOVEWORKSPACEUSERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_REMOVEWORKSPACEUSERREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class RemoveWorkspaceUserRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RemoveWorkspaceUserRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DmsUserIds, dmsUserIds_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, RemoveWorkspaceUserRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DmsUserIds, dmsUserIds_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    RemoveWorkspaceUserRequest() = default ;
    RemoveWorkspaceUserRequest(const RemoveWorkspaceUserRequest &) = default ;
    RemoveWorkspaceUserRequest(RemoveWorkspaceUserRequest &&) = default ;
    RemoveWorkspaceUserRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RemoveWorkspaceUserRequest() = default ;
    RemoveWorkspaceUserRequest& operator=(const RemoveWorkspaceUserRequest &) = default ;
    RemoveWorkspaceUserRequest& operator=(RemoveWorkspaceUserRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dmsUserIds_ == nullptr
        && this->workspaceId_ == nullptr; };
    // dmsUserIds Field Functions 
    bool hasDmsUserIds() const { return this->dmsUserIds_ != nullptr;};
    void deleteDmsUserIds() { this->dmsUserIds_ = nullptr;};
    inline string getDmsUserIds() const { DARABONBA_PTR_GET_DEFAULT(dmsUserIds_, "") };
    inline RemoveWorkspaceUserRequest& setDmsUserIds(string dmsUserIds) { DARABONBA_PTR_SET_VALUE(dmsUserIds_, dmsUserIds) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline RemoveWorkspaceUserRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    // This parameter is required.
    shared_ptr<string> dmsUserIds_ {};
    // This parameter is required.
    shared_ptr<string> workspaceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
