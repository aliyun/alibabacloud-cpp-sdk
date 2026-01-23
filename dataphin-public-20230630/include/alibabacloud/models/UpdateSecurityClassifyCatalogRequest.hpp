// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATESECURITYCLASSIFYCATALOGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATESECURITYCLASSIFYCATALOGREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class UpdateSecurityClassifyCatalogRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateSecurityClassifyCatalogRequest& obj) { 
      DARABONBA_PTR_TO_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_TO_JSON(UpdateCommand, updateCommand_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateSecurityClassifyCatalogRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_FROM_JSON(UpdateCommand, updateCommand_);
    };
    UpdateSecurityClassifyCatalogRequest() = default ;
    UpdateSecurityClassifyCatalogRequest(const UpdateSecurityClassifyCatalogRequest &) = default ;
    UpdateSecurityClassifyCatalogRequest(UpdateSecurityClassifyCatalogRequest &&) = default ;
    UpdateSecurityClassifyCatalogRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateSecurityClassifyCatalogRequest() = default ;
    UpdateSecurityClassifyCatalogRequest& operator=(const UpdateSecurityClassifyCatalogRequest &) = default ;
    UpdateSecurityClassifyCatalogRequest& operator=(UpdateSecurityClassifyCatalogRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class UpdateCommand : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const UpdateCommand& obj) { 
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(OwnerList, ownerList_);
        DARABONBA_PTR_TO_JSON(ParentPath, parentPath_);
        DARABONBA_PTR_TO_JSON(Path, path_);
        DARABONBA_PTR_TO_JSON(VisibleType, visibleType_);
      };
      friend void from_json(const Darabonba::Json& j, UpdateCommand& obj) { 
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(OwnerList, ownerList_);
        DARABONBA_PTR_FROM_JSON(ParentPath, parentPath_);
        DARABONBA_PTR_FROM_JSON(Path, path_);
        DARABONBA_PTR_FROM_JSON(VisibleType, visibleType_);
      };
      UpdateCommand() = default ;
      UpdateCommand(const UpdateCommand &) = default ;
      UpdateCommand(UpdateCommand &&) = default ;
      UpdateCommand(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~UpdateCommand() = default ;
      UpdateCommand& operator=(const UpdateCommand &) = default ;
      UpdateCommand& operator=(UpdateCommand &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->name_ == nullptr
        && this->ownerList_ == nullptr && this->parentPath_ == nullptr && this->path_ == nullptr && this->visibleType_ == nullptr; };
      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline UpdateCommand& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // ownerList Field Functions 
      bool hasOwnerList() const { return this->ownerList_ != nullptr;};
      void deleteOwnerList() { this->ownerList_ = nullptr;};
      inline const vector<string> & getOwnerList() const { DARABONBA_PTR_GET_CONST(ownerList_, vector<string>) };
      inline vector<string> getOwnerList() { DARABONBA_PTR_GET(ownerList_, vector<string>) };
      inline UpdateCommand& setOwnerList(const vector<string> & ownerList) { DARABONBA_PTR_SET_VALUE(ownerList_, ownerList) };
      inline UpdateCommand& setOwnerList(vector<string> && ownerList) { DARABONBA_PTR_SET_RVALUE(ownerList_, ownerList) };


      // parentPath Field Functions 
      bool hasParentPath() const { return this->parentPath_ != nullptr;};
      void deleteParentPath() { this->parentPath_ = nullptr;};
      inline string getParentPath() const { DARABONBA_PTR_GET_DEFAULT(parentPath_, "") };
      inline UpdateCommand& setParentPath(string parentPath) { DARABONBA_PTR_SET_VALUE(parentPath_, parentPath) };


      // path Field Functions 
      bool hasPath() const { return this->path_ != nullptr;};
      void deletePath() { this->path_ = nullptr;};
      inline string getPath() const { DARABONBA_PTR_GET_DEFAULT(path_, "") };
      inline UpdateCommand& setPath(string path) { DARABONBA_PTR_SET_VALUE(path_, path) };


      // visibleType Field Functions 
      bool hasVisibleType() const { return this->visibleType_ != nullptr;};
      void deleteVisibleType() { this->visibleType_ = nullptr;};
      inline string getVisibleType() const { DARABONBA_PTR_GET_DEFAULT(visibleType_, "") };
      inline UpdateCommand& setVisibleType(string visibleType) { DARABONBA_PTR_SET_VALUE(visibleType_, visibleType) };


    protected:
      // This parameter is required.
      shared_ptr<string> name_ {};
      shared_ptr<vector<string>> ownerList_ {};
      shared_ptr<string> parentPath_ {};
      // This parameter is required.
      shared_ptr<string> path_ {};
      shared_ptr<string> visibleType_ {};
    };

    virtual bool empty() const override { return this->opTenantId_ == nullptr
        && this->updateCommand_ == nullptr; };
    // opTenantId Field Functions 
    bool hasOpTenantId() const { return this->opTenantId_ != nullptr;};
    void deleteOpTenantId() { this->opTenantId_ = nullptr;};
    inline int64_t getOpTenantId() const { DARABONBA_PTR_GET_DEFAULT(opTenantId_, 0L) };
    inline UpdateSecurityClassifyCatalogRequest& setOpTenantId(int64_t opTenantId) { DARABONBA_PTR_SET_VALUE(opTenantId_, opTenantId) };


    // updateCommand Field Functions 
    bool hasUpdateCommand() const { return this->updateCommand_ != nullptr;};
    void deleteUpdateCommand() { this->updateCommand_ = nullptr;};
    inline const UpdateSecurityClassifyCatalogRequest::UpdateCommand & getUpdateCommand() const { DARABONBA_PTR_GET_CONST(updateCommand_, UpdateSecurityClassifyCatalogRequest::UpdateCommand) };
    inline UpdateSecurityClassifyCatalogRequest::UpdateCommand getUpdateCommand() { DARABONBA_PTR_GET(updateCommand_, UpdateSecurityClassifyCatalogRequest::UpdateCommand) };
    inline UpdateSecurityClassifyCatalogRequest& setUpdateCommand(const UpdateSecurityClassifyCatalogRequest::UpdateCommand & updateCommand) { DARABONBA_PTR_SET_VALUE(updateCommand_, updateCommand) };
    inline UpdateSecurityClassifyCatalogRequest& setUpdateCommand(UpdateSecurityClassifyCatalogRequest::UpdateCommand && updateCommand) { DARABONBA_PTR_SET_RVALUE(updateCommand_, updateCommand) };


  protected:
    // This parameter is required.
    shared_ptr<int64_t> opTenantId_ {};
    // This parameter is required.
    shared_ptr<UpdateSecurityClassifyCatalogRequest::UpdateCommand> updateCommand_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
