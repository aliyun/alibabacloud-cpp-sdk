// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEUSERGROUPREQUESTCREATECOMMAND_HPP_
#define ALIBABACLOUD_MODELS_CREATEUSERGROUPREQUESTCREATECOMMAND_HPP_
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
  class CreateUserGroupRequestCreateCommand : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateUserGroupRequestCreateCommand& obj) { 
      DARABONBA_PTR_TO_JSON(Active, active_);
      DARABONBA_PTR_TO_JSON(AdminUserIdList, adminUserIdList_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Name, name_);
    };
    friend void from_json(const Darabonba::Json& j, CreateUserGroupRequestCreateCommand& obj) { 
      DARABONBA_PTR_FROM_JSON(Active, active_);
      DARABONBA_PTR_FROM_JSON(AdminUserIdList, adminUserIdList_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
    };
    CreateUserGroupRequestCreateCommand() = default ;
    CreateUserGroupRequestCreateCommand(const CreateUserGroupRequestCreateCommand &) = default ;
    CreateUserGroupRequestCreateCommand(CreateUserGroupRequestCreateCommand &&) = default ;
    CreateUserGroupRequestCreateCommand(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateUserGroupRequestCreateCommand() = default ;
    CreateUserGroupRequestCreateCommand& operator=(const CreateUserGroupRequestCreateCommand &) = default ;
    CreateUserGroupRequestCreateCommand& operator=(CreateUserGroupRequestCreateCommand &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->active_ == nullptr
        && return this->adminUserIdList_ == nullptr && return this->description_ == nullptr && return this->name_ == nullptr; };
    // active Field Functions 
    bool hasActive() const { return this->active_ != nullptr;};
    void deleteActive() { this->active_ = nullptr;};
    inline bool active() const { DARABONBA_PTR_GET_DEFAULT(active_, false) };
    inline CreateUserGroupRequestCreateCommand& setActive(bool active) { DARABONBA_PTR_SET_VALUE(active_, active) };


    // adminUserIdList Field Functions 
    bool hasAdminUserIdList() const { return this->adminUserIdList_ != nullptr;};
    void deleteAdminUserIdList() { this->adminUserIdList_ = nullptr;};
    inline const vector<string> & adminUserIdList() const { DARABONBA_PTR_GET_CONST(adminUserIdList_, vector<string>) };
    inline vector<string> adminUserIdList() { DARABONBA_PTR_GET(adminUserIdList_, vector<string>) };
    inline CreateUserGroupRequestCreateCommand& setAdminUserIdList(const vector<string> & adminUserIdList) { DARABONBA_PTR_SET_VALUE(adminUserIdList_, adminUserIdList) };
    inline CreateUserGroupRequestCreateCommand& setAdminUserIdList(vector<string> && adminUserIdList) { DARABONBA_PTR_SET_RVALUE(adminUserIdList_, adminUserIdList) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateUserGroupRequestCreateCommand& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateUserGroupRequestCreateCommand& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


  protected:
    std::shared_ptr<bool> active_ = nullptr;
    std::shared_ptr<vector<string>> adminUserIdList_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
