// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEUSERGROUPREQUESTUPDATECOMMAND_HPP_
#define ALIBABACLOUD_MODELS_UPDATEUSERGROUPREQUESTUPDATECOMMAND_HPP_
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
  class UpdateUserGroupRequestUpdateCommand : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateUserGroupRequestUpdateCommand& obj) { 
      DARABONBA_PTR_TO_JSON(AdminUserIdList, adminUserIdList_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Name, name_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateUserGroupRequestUpdateCommand& obj) { 
      DARABONBA_PTR_FROM_JSON(AdminUserIdList, adminUserIdList_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
    };
    UpdateUserGroupRequestUpdateCommand() = default ;
    UpdateUserGroupRequestUpdateCommand(const UpdateUserGroupRequestUpdateCommand &) = default ;
    UpdateUserGroupRequestUpdateCommand(UpdateUserGroupRequestUpdateCommand &&) = default ;
    UpdateUserGroupRequestUpdateCommand(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateUserGroupRequestUpdateCommand() = default ;
    UpdateUserGroupRequestUpdateCommand& operator=(const UpdateUserGroupRequestUpdateCommand &) = default ;
    UpdateUserGroupRequestUpdateCommand& operator=(UpdateUserGroupRequestUpdateCommand &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->adminUserIdList_ != nullptr
        && this->description_ != nullptr && this->id_ != nullptr && this->name_ != nullptr; };
    // adminUserIdList Field Functions 
    bool hasAdminUserIdList() const { return this->adminUserIdList_ != nullptr;};
    void deleteAdminUserIdList() { this->adminUserIdList_ = nullptr;};
    inline const vector<string> & adminUserIdList() const { DARABONBA_PTR_GET_CONST(adminUserIdList_, vector<string>) };
    inline vector<string> adminUserIdList() { DARABONBA_PTR_GET(adminUserIdList_, vector<string>) };
    inline UpdateUserGroupRequestUpdateCommand& setAdminUserIdList(const vector<string> & adminUserIdList) { DARABONBA_PTR_SET_VALUE(adminUserIdList_, adminUserIdList) };
    inline UpdateUserGroupRequestUpdateCommand& setAdminUserIdList(vector<string> && adminUserIdList) { DARABONBA_PTR_SET_RVALUE(adminUserIdList_, adminUserIdList) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline UpdateUserGroupRequestUpdateCommand& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline UpdateUserGroupRequestUpdateCommand& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline UpdateUserGroupRequestUpdateCommand& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


  protected:
    std::shared_ptr<vector<string>> adminUserIdList_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> id_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
