// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEDATAPERMISSIONSSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEDATAPERMISSIONSSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class CreateDataPermissionsShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateDataPermissionsShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DataId, dataId_);
      DARABONBA_PTR_TO_JSON(DataType, dataType_);
      DARABONBA_PTR_TO_JSON(PermissionUserInfos, permissionUserInfosShrink_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateDataPermissionsShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DataId, dataId_);
      DARABONBA_PTR_FROM_JSON(DataType, dataType_);
      DARABONBA_PTR_FROM_JSON(PermissionUserInfos, permissionUserInfosShrink_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    CreateDataPermissionsShrinkRequest() = default ;
    CreateDataPermissionsShrinkRequest(const CreateDataPermissionsShrinkRequest &) = default ;
    CreateDataPermissionsShrinkRequest(CreateDataPermissionsShrinkRequest &&) = default ;
    CreateDataPermissionsShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateDataPermissionsShrinkRequest() = default ;
    CreateDataPermissionsShrinkRequest& operator=(const CreateDataPermissionsShrinkRequest &) = default ;
    CreateDataPermissionsShrinkRequest& operator=(CreateDataPermissionsShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dataId_ == nullptr
        && this->dataType_ == nullptr && this->permissionUserInfosShrink_ == nullptr && this->workspaceId_ == nullptr; };
    // dataId Field Functions 
    bool hasDataId() const { return this->dataId_ != nullptr;};
    void deleteDataId() { this->dataId_ = nullptr;};
    inline string getDataId() const { DARABONBA_PTR_GET_DEFAULT(dataId_, "") };
    inline CreateDataPermissionsShrinkRequest& setDataId(string dataId) { DARABONBA_PTR_SET_VALUE(dataId_, dataId) };


    // dataType Field Functions 
    bool hasDataType() const { return this->dataType_ != nullptr;};
    void deleteDataType() { this->dataType_ = nullptr;};
    inline string getDataType() const { DARABONBA_PTR_GET_DEFAULT(dataType_, "") };
    inline CreateDataPermissionsShrinkRequest& setDataType(string dataType) { DARABONBA_PTR_SET_VALUE(dataType_, dataType) };


    // permissionUserInfosShrink Field Functions 
    bool hasPermissionUserInfosShrink() const { return this->permissionUserInfosShrink_ != nullptr;};
    void deletePermissionUserInfosShrink() { this->permissionUserInfosShrink_ = nullptr;};
    inline string getPermissionUserInfosShrink() const { DARABONBA_PTR_GET_DEFAULT(permissionUserInfosShrink_, "") };
    inline CreateDataPermissionsShrinkRequest& setPermissionUserInfosShrink(string permissionUserInfosShrink) { DARABONBA_PTR_SET_VALUE(permissionUserInfosShrink_, permissionUserInfosShrink) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline CreateDataPermissionsShrinkRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    // This parameter is required.
    shared_ptr<string> dataId_ {};
    // This parameter is required.
    shared_ptr<string> dataType_ {};
    // This parameter is required.
    shared_ptr<string> permissionUserInfosShrink_ {};
    // This parameter is required.
    shared_ptr<string> workspaceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
