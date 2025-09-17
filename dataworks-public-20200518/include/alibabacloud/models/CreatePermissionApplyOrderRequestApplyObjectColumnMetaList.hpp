// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEPERMISSIONAPPLYORDERREQUESTAPPLYOBJECTCOLUMNMETALIST_HPP_
#define ALIBABACLOUD_MODELS_CREATEPERMISSIONAPPLYORDERREQUESTAPPLYOBJECTCOLUMNMETALIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class CreatePermissionApplyOrderRequestApplyObjectColumnMetaList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreatePermissionApplyOrderRequestApplyObjectColumnMetaList& obj) { 
      DARABONBA_PTR_TO_JSON(Actions, actions_);
      DARABONBA_PTR_TO_JSON(Name, name_);
    };
    friend void from_json(const Darabonba::Json& j, CreatePermissionApplyOrderRequestApplyObjectColumnMetaList& obj) { 
      DARABONBA_PTR_FROM_JSON(Actions, actions_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
    };
    CreatePermissionApplyOrderRequestApplyObjectColumnMetaList() = default ;
    CreatePermissionApplyOrderRequestApplyObjectColumnMetaList(const CreatePermissionApplyOrderRequestApplyObjectColumnMetaList &) = default ;
    CreatePermissionApplyOrderRequestApplyObjectColumnMetaList(CreatePermissionApplyOrderRequestApplyObjectColumnMetaList &&) = default ;
    CreatePermissionApplyOrderRequestApplyObjectColumnMetaList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreatePermissionApplyOrderRequestApplyObjectColumnMetaList() = default ;
    CreatePermissionApplyOrderRequestApplyObjectColumnMetaList& operator=(const CreatePermissionApplyOrderRequestApplyObjectColumnMetaList &) = default ;
    CreatePermissionApplyOrderRequestApplyObjectColumnMetaList& operator=(CreatePermissionApplyOrderRequestApplyObjectColumnMetaList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->actions_ != nullptr
        && this->name_ != nullptr; };
    // actions Field Functions 
    bool hasActions() const { return this->actions_ != nullptr;};
    void deleteActions() { this->actions_ = nullptr;};
    inline string actions() const { DARABONBA_PTR_GET_DEFAULT(actions_, "") };
    inline CreatePermissionApplyOrderRequestApplyObjectColumnMetaList& setActions(string actions) { DARABONBA_PTR_SET_VALUE(actions_, actions) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreatePermissionApplyOrderRequestApplyObjectColumnMetaList& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


  protected:
    std::shared_ptr<string> actions_ = nullptr;
    // Permissions for the target columns. Enter the column names here. If applying for permissions on the entire table, enter all column names of the table. Permissions for specific columns can only be requested if labelSecurity is enabled for the MaxCompute project. Otherwise, you can only apply for permissions on the entire table.
    std::shared_ptr<string> name_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
