// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEPERMISSIONAPPLYORDERREQUESTAPPLYOBJECT_HPP_
#define ALIBABACLOUD_MODELS_CREATEPERMISSIONAPPLYORDERREQUESTAPPLYOBJECT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreatePermissionApplyOrderRequestApplyObjectColumnMetaList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class CreatePermissionApplyOrderRequestApplyObject : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreatePermissionApplyOrderRequestApplyObject& obj) { 
      DARABONBA_PTR_TO_JSON(Actions, actions_);
      DARABONBA_PTR_TO_JSON(ColumnMetaList, columnMetaList_);
      DARABONBA_PTR_TO_JSON(Name, name_);
    };
    friend void from_json(const Darabonba::Json& j, CreatePermissionApplyOrderRequestApplyObject& obj) { 
      DARABONBA_PTR_FROM_JSON(Actions, actions_);
      DARABONBA_PTR_FROM_JSON(ColumnMetaList, columnMetaList_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
    };
    CreatePermissionApplyOrderRequestApplyObject() = default ;
    CreatePermissionApplyOrderRequestApplyObject(const CreatePermissionApplyOrderRequestApplyObject &) = default ;
    CreatePermissionApplyOrderRequestApplyObject(CreatePermissionApplyOrderRequestApplyObject &&) = default ;
    CreatePermissionApplyOrderRequestApplyObject(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreatePermissionApplyOrderRequestApplyObject() = default ;
    CreatePermissionApplyOrderRequestApplyObject& operator=(const CreatePermissionApplyOrderRequestApplyObject &) = default ;
    CreatePermissionApplyOrderRequestApplyObject& operator=(CreatePermissionApplyOrderRequestApplyObject &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->actions_ != nullptr
        && this->columnMetaList_ != nullptr && this->name_ != nullptr; };
    // actions Field Functions 
    bool hasActions() const { return this->actions_ != nullptr;};
    void deleteActions() { this->actions_ = nullptr;};
    inline string actions() const { DARABONBA_PTR_GET_DEFAULT(actions_, "") };
    inline CreatePermissionApplyOrderRequestApplyObject& setActions(string actions) { DARABONBA_PTR_SET_VALUE(actions_, actions) };


    // columnMetaList Field Functions 
    bool hasColumnMetaList() const { return this->columnMetaList_ != nullptr;};
    void deleteColumnMetaList() { this->columnMetaList_ = nullptr;};
    inline const vector<Models::CreatePermissionApplyOrderRequestApplyObjectColumnMetaList> & columnMetaList() const { DARABONBA_PTR_GET_CONST(columnMetaList_, vector<Models::CreatePermissionApplyOrderRequestApplyObjectColumnMetaList>) };
    inline vector<Models::CreatePermissionApplyOrderRequestApplyObjectColumnMetaList> columnMetaList() { DARABONBA_PTR_GET(columnMetaList_, vector<Models::CreatePermissionApplyOrderRequestApplyObjectColumnMetaList>) };
    inline CreatePermissionApplyOrderRequestApplyObject& setColumnMetaList(const vector<Models::CreatePermissionApplyOrderRequestApplyObjectColumnMetaList> & columnMetaList) { DARABONBA_PTR_SET_VALUE(columnMetaList_, columnMetaList) };
    inline CreatePermissionApplyOrderRequestApplyObject& setColumnMetaList(vector<Models::CreatePermissionApplyOrderRequestApplyObjectColumnMetaList> && columnMetaList) { DARABONBA_PTR_SET_RVALUE(columnMetaList_, columnMetaList) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreatePermissionApplyOrderRequestApplyObject& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


  protected:
    // The permission that you want to request. If you want to request multiple permissions at the same time, separate them with commas (,). You can request only the following permissions: Select, Describe, Drop, Alter, Update, and Download.
    std::shared_ptr<string> actions_ = nullptr;
    // The fields on which you want to request permissions.
    std::shared_ptr<vector<Models::CreatePermissionApplyOrderRequestApplyObjectColumnMetaList>> columnMetaList_ = nullptr;
    // The name of the object on which you want to request permissions. You can request permissions only on MaxCompute tables. Set this parameter to the name of the table on which you want to request permissions.
    std::shared_ptr<string> name_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
