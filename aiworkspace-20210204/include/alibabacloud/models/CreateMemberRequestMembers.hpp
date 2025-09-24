// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEMEMBERREQUESTMEMBERS_HPP_
#define ALIBABACLOUD_MODELS_CREATEMEMBERREQUESTMEMBERS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AIWorkSpace20210204
{
namespace Models
{
  class CreateMemberRequestMembers : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateMemberRequestMembers& obj) { 
      DARABONBA_PTR_TO_JSON(Roles, roles_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateMemberRequestMembers& obj) { 
      DARABONBA_PTR_FROM_JSON(Roles, roles_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
    };
    CreateMemberRequestMembers() = default ;
    CreateMemberRequestMembers(const CreateMemberRequestMembers &) = default ;
    CreateMemberRequestMembers(CreateMemberRequestMembers &&) = default ;
    CreateMemberRequestMembers(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateMemberRequestMembers() = default ;
    CreateMemberRequestMembers& operator=(const CreateMemberRequestMembers &) = default ;
    CreateMemberRequestMembers& operator=(CreateMemberRequestMembers &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->roles_ != nullptr
        && this->userId_ != nullptr; };
    // roles Field Functions 
    bool hasRoles() const { return this->roles_ != nullptr;};
    void deleteRoles() { this->roles_ = nullptr;};
    inline const vector<string> & roles() const { DARABONBA_PTR_GET_CONST(roles_, vector<string>) };
    inline vector<string> roles() { DARABONBA_PTR_GET(roles_, vector<string>) };
    inline CreateMemberRequestMembers& setRoles(const vector<string> & roles) { DARABONBA_PTR_SET_VALUE(roles_, roles) };
    inline CreateMemberRequestMembers& setRoles(vector<string> && roles) { DARABONBA_PTR_SET_RVALUE(roles_, roles) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline CreateMemberRequestMembers& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


  protected:
    // The list of roles.
    // 
    // This parameter is required.
    std::shared_ptr<vector<string>> roles_ = nullptr;
    // The member IDs. Multiple member IDs are separated by commas (,). You can call [ListMembers](https://help.aliyun.com/document_detail/449135.html) to obtain the member IDs.
    // 
    // This parameter is required.
    std::shared_ptr<string> userId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AIWorkSpace20210204
#endif
