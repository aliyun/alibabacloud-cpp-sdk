// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEUSERGROUPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEUSERGROUPREQUEST_HPP_
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
  class CreateUserGroupRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateUserGroupRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CreateCommand, createCommand_);
      DARABONBA_PTR_TO_JSON(OpTenantId, opTenantId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateUserGroupRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateCommand, createCommand_);
      DARABONBA_PTR_FROM_JSON(OpTenantId, opTenantId_);
    };
    CreateUserGroupRequest() = default ;
    CreateUserGroupRequest(const CreateUserGroupRequest &) = default ;
    CreateUserGroupRequest(CreateUserGroupRequest &&) = default ;
    CreateUserGroupRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateUserGroupRequest() = default ;
    CreateUserGroupRequest& operator=(const CreateUserGroupRequest &) = default ;
    CreateUserGroupRequest& operator=(CreateUserGroupRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class CreateCommand : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const CreateCommand& obj) { 
        DARABONBA_PTR_TO_JSON(Active, active_);
        DARABONBA_PTR_TO_JSON(AdminUserIdList, adminUserIdList_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(Name, name_);
      };
      friend void from_json(const Darabonba::Json& j, CreateCommand& obj) { 
        DARABONBA_PTR_FROM_JSON(Active, active_);
        DARABONBA_PTR_FROM_JSON(AdminUserIdList, adminUserIdList_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
      };
      CreateCommand() = default ;
      CreateCommand(const CreateCommand &) = default ;
      CreateCommand(CreateCommand &&) = default ;
      CreateCommand(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~CreateCommand() = default ;
      CreateCommand& operator=(const CreateCommand &) = default ;
      CreateCommand& operator=(CreateCommand &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->active_ == nullptr
        && this->adminUserIdList_ == nullptr && this->description_ == nullptr && this->name_ == nullptr; };
      // active Field Functions 
      bool hasActive() const { return this->active_ != nullptr;};
      void deleteActive() { this->active_ = nullptr;};
      inline bool getActive() const { DARABONBA_PTR_GET_DEFAULT(active_, false) };
      inline CreateCommand& setActive(bool active) { DARABONBA_PTR_SET_VALUE(active_, active) };


      // adminUserIdList Field Functions 
      bool hasAdminUserIdList() const { return this->adminUserIdList_ != nullptr;};
      void deleteAdminUserIdList() { this->adminUserIdList_ = nullptr;};
      inline const vector<string> & getAdminUserIdList() const { DARABONBA_PTR_GET_CONST(adminUserIdList_, vector<string>) };
      inline vector<string> getAdminUserIdList() { DARABONBA_PTR_GET(adminUserIdList_, vector<string>) };
      inline CreateCommand& setAdminUserIdList(const vector<string> & adminUserIdList) { DARABONBA_PTR_SET_VALUE(adminUserIdList_, adminUserIdList) };
      inline CreateCommand& setAdminUserIdList(vector<string> && adminUserIdList) { DARABONBA_PTR_SET_RVALUE(adminUserIdList_, adminUserIdList) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline CreateCommand& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline CreateCommand& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    protected:
      shared_ptr<bool> active_ {};
      shared_ptr<vector<string>> adminUserIdList_ {};
      shared_ptr<string> description_ {};
      shared_ptr<string> name_ {};
    };

    virtual bool empty() const override { return this->createCommand_ == nullptr
        && this->opTenantId_ == nullptr; };
    // createCommand Field Functions 
    bool hasCreateCommand() const { return this->createCommand_ != nullptr;};
    void deleteCreateCommand() { this->createCommand_ = nullptr;};
    inline const CreateUserGroupRequest::CreateCommand & getCreateCommand() const { DARABONBA_PTR_GET_CONST(createCommand_, CreateUserGroupRequest::CreateCommand) };
    inline CreateUserGroupRequest::CreateCommand getCreateCommand() { DARABONBA_PTR_GET(createCommand_, CreateUserGroupRequest::CreateCommand) };
    inline CreateUserGroupRequest& setCreateCommand(const CreateUserGroupRequest::CreateCommand & createCommand) { DARABONBA_PTR_SET_VALUE(createCommand_, createCommand) };
    inline CreateUserGroupRequest& setCreateCommand(CreateUserGroupRequest::CreateCommand && createCommand) { DARABONBA_PTR_SET_RVALUE(createCommand_, createCommand) };


    // opTenantId Field Functions 
    bool hasOpTenantId() const { return this->opTenantId_ != nullptr;};
    void deleteOpTenantId() { this->opTenantId_ = nullptr;};
    inline int64_t getOpTenantId() const { DARABONBA_PTR_GET_DEFAULT(opTenantId_, 0L) };
    inline CreateUserGroupRequest& setOpTenantId(int64_t opTenantId) { DARABONBA_PTR_SET_VALUE(opTenantId_, opTenantId) };


  protected:
    shared_ptr<CreateUserGroupRequest::CreateCommand> createCommand_ {};
    // This parameter is required.
    shared_ptr<int64_t> opTenantId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
