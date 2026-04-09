// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEDATAPERMISSIONSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEDATAPERMISSIONSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class CreateDataPermissionsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateDataPermissionsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DataId, dataId_);
      DARABONBA_PTR_TO_JSON(DataType, dataType_);
      DARABONBA_PTR_TO_JSON(PermissionUserInfos, permissionUserInfos_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateDataPermissionsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DataId, dataId_);
      DARABONBA_PTR_FROM_JSON(DataType, dataType_);
      DARABONBA_PTR_FROM_JSON(PermissionUserInfos, permissionUserInfos_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    CreateDataPermissionsRequest() = default ;
    CreateDataPermissionsRequest(const CreateDataPermissionsRequest &) = default ;
    CreateDataPermissionsRequest(CreateDataPermissionsRequest &&) = default ;
    CreateDataPermissionsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateDataPermissionsRequest() = default ;
    CreateDataPermissionsRequest& operator=(const CreateDataPermissionsRequest &) = default ;
    CreateDataPermissionsRequest& operator=(CreateDataPermissionsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class PermissionUserInfos : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PermissionUserInfos& obj) { 
        DARABONBA_PTR_TO_JSON(PermissionUserId, permissionUserId_);
        DARABONBA_PTR_TO_JSON(PermissionUsername, permissionUsername_);
      };
      friend void from_json(const Darabonba::Json& j, PermissionUserInfos& obj) { 
        DARABONBA_PTR_FROM_JSON(PermissionUserId, permissionUserId_);
        DARABONBA_PTR_FROM_JSON(PermissionUsername, permissionUsername_);
      };
      PermissionUserInfos() = default ;
      PermissionUserInfos(const PermissionUserInfos &) = default ;
      PermissionUserInfos(PermissionUserInfos &&) = default ;
      PermissionUserInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~PermissionUserInfos() = default ;
      PermissionUserInfos& operator=(const PermissionUserInfos &) = default ;
      PermissionUserInfos& operator=(PermissionUserInfos &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->permissionUserId_ == nullptr
        && this->permissionUsername_ == nullptr; };
      // permissionUserId Field Functions 
      bool hasPermissionUserId() const { return this->permissionUserId_ != nullptr;};
      void deletePermissionUserId() { this->permissionUserId_ = nullptr;};
      inline string getPermissionUserId() const { DARABONBA_PTR_GET_DEFAULT(permissionUserId_, "") };
      inline PermissionUserInfos& setPermissionUserId(string permissionUserId) { DARABONBA_PTR_SET_VALUE(permissionUserId_, permissionUserId) };


      // permissionUsername Field Functions 
      bool hasPermissionUsername() const { return this->permissionUsername_ != nullptr;};
      void deletePermissionUsername() { this->permissionUsername_ = nullptr;};
      inline string getPermissionUsername() const { DARABONBA_PTR_GET_DEFAULT(permissionUsername_, "") };
      inline PermissionUserInfos& setPermissionUsername(string permissionUsername) { DARABONBA_PTR_SET_VALUE(permissionUsername_, permissionUsername) };


    protected:
      // This parameter is required.
      shared_ptr<string> permissionUserId_ {};
      shared_ptr<string> permissionUsername_ {};
    };

    virtual bool empty() const override { return this->dataId_ == nullptr
        && this->dataType_ == nullptr && this->permissionUserInfos_ == nullptr && this->workspaceId_ == nullptr; };
    // dataId Field Functions 
    bool hasDataId() const { return this->dataId_ != nullptr;};
    void deleteDataId() { this->dataId_ = nullptr;};
    inline string getDataId() const { DARABONBA_PTR_GET_DEFAULT(dataId_, "") };
    inline CreateDataPermissionsRequest& setDataId(string dataId) { DARABONBA_PTR_SET_VALUE(dataId_, dataId) };


    // dataType Field Functions 
    bool hasDataType() const { return this->dataType_ != nullptr;};
    void deleteDataType() { this->dataType_ = nullptr;};
    inline string getDataType() const { DARABONBA_PTR_GET_DEFAULT(dataType_, "") };
    inline CreateDataPermissionsRequest& setDataType(string dataType) { DARABONBA_PTR_SET_VALUE(dataType_, dataType) };


    // permissionUserInfos Field Functions 
    bool hasPermissionUserInfos() const { return this->permissionUserInfos_ != nullptr;};
    void deletePermissionUserInfos() { this->permissionUserInfos_ = nullptr;};
    inline const vector<CreateDataPermissionsRequest::PermissionUserInfos> & getPermissionUserInfos() const { DARABONBA_PTR_GET_CONST(permissionUserInfos_, vector<CreateDataPermissionsRequest::PermissionUserInfos>) };
    inline vector<CreateDataPermissionsRequest::PermissionUserInfos> getPermissionUserInfos() { DARABONBA_PTR_GET(permissionUserInfos_, vector<CreateDataPermissionsRequest::PermissionUserInfos>) };
    inline CreateDataPermissionsRequest& setPermissionUserInfos(const vector<CreateDataPermissionsRequest::PermissionUserInfos> & permissionUserInfos) { DARABONBA_PTR_SET_VALUE(permissionUserInfos_, permissionUserInfos) };
    inline CreateDataPermissionsRequest& setPermissionUserInfos(vector<CreateDataPermissionsRequest::PermissionUserInfos> && permissionUserInfos) { DARABONBA_PTR_SET_RVALUE(permissionUserInfos_, permissionUserInfos) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline CreateDataPermissionsRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    // This parameter is required.
    shared_ptr<string> dataId_ {};
    // This parameter is required.
    shared_ptr<string> dataType_ {};
    // This parameter is required.
    shared_ptr<vector<CreateDataPermissionsRequest::PermissionUserInfos>> permissionUserInfos_ {};
    // This parameter is required.
    shared_ptr<string> workspaceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
