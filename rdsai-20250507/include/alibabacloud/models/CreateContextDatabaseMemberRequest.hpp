// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECONTEXTDATABASEMEMBERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATECONTEXTDATABASEMEMBERREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RdsAi20250507
{
namespace Models
{
  class CreateContextDatabaseMemberRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateContextDatabaseMemberRequest& obj) { 
      DARABONBA_PTR_TO_JSON(GenerateInitialKey, generateInitialKey_);
      DARABONBA_PTR_TO_JSON(InitialKeyName, initialKeyName_);
      DARABONBA_PTR_TO_JSON(MemberName, memberName_);
      DARABONBA_PTR_TO_JSON(Role, role_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateContextDatabaseMemberRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(GenerateInitialKey, generateInitialKey_);
      DARABONBA_PTR_FROM_JSON(InitialKeyName, initialKeyName_);
      DARABONBA_PTR_FROM_JSON(MemberName, memberName_);
      DARABONBA_PTR_FROM_JSON(Role, role_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    CreateContextDatabaseMemberRequest() = default ;
    CreateContextDatabaseMemberRequest(const CreateContextDatabaseMemberRequest &) = default ;
    CreateContextDatabaseMemberRequest(CreateContextDatabaseMemberRequest &&) = default ;
    CreateContextDatabaseMemberRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateContextDatabaseMemberRequest() = default ;
    CreateContextDatabaseMemberRequest& operator=(const CreateContextDatabaseMemberRequest &) = default ;
    CreateContextDatabaseMemberRequest& operator=(CreateContextDatabaseMemberRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->generateInitialKey_ == nullptr
        && this->initialKeyName_ == nullptr && this->memberName_ == nullptr && this->role_ == nullptr && this->workspaceId_ == nullptr; };
    // generateInitialKey Field Functions 
    bool hasGenerateInitialKey() const { return this->generateInitialKey_ != nullptr;};
    void deleteGenerateInitialKey() { this->generateInitialKey_ = nullptr;};
    inline bool getGenerateInitialKey() const { DARABONBA_PTR_GET_DEFAULT(generateInitialKey_, false) };
    inline CreateContextDatabaseMemberRequest& setGenerateInitialKey(bool generateInitialKey) { DARABONBA_PTR_SET_VALUE(generateInitialKey_, generateInitialKey) };


    // initialKeyName Field Functions 
    bool hasInitialKeyName() const { return this->initialKeyName_ != nullptr;};
    void deleteInitialKeyName() { this->initialKeyName_ = nullptr;};
    inline string getInitialKeyName() const { DARABONBA_PTR_GET_DEFAULT(initialKeyName_, "") };
    inline CreateContextDatabaseMemberRequest& setInitialKeyName(string initialKeyName) { DARABONBA_PTR_SET_VALUE(initialKeyName_, initialKeyName) };


    // memberName Field Functions 
    bool hasMemberName() const { return this->memberName_ != nullptr;};
    void deleteMemberName() { this->memberName_ = nullptr;};
    inline string getMemberName() const { DARABONBA_PTR_GET_DEFAULT(memberName_, "") };
    inline CreateContextDatabaseMemberRequest& setMemberName(string memberName) { DARABONBA_PTR_SET_VALUE(memberName_, memberName) };


    // role Field Functions 
    bool hasRole() const { return this->role_ != nullptr;};
    void deleteRole() { this->role_ = nullptr;};
    inline string getRole() const { DARABONBA_PTR_GET_DEFAULT(role_, "") };
    inline CreateContextDatabaseMemberRequest& setRole(string role) { DARABONBA_PTR_SET_VALUE(role_, role) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline CreateContextDatabaseMemberRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    shared_ptr<bool> generateInitialKey_ {};
    shared_ptr<string> initialKeyName_ {};
    // This parameter is required.
    shared_ptr<string> memberName_ {};
    // This parameter is required.
    shared_ptr<string> role_ {};
    // This parameter is required.
    shared_ptr<string> workspaceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RdsAi20250507
#endif
