// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDATABASESRESPONSEBODYDATABASELIST_HPP_
#define ALIBABACLOUD_MODELS_LISTDATABASESRESPONSEBODYDATABASELIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Hologram20220601
{
namespace Models
{
  class ListDatabasesResponseBodyDatabaseList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDatabasesResponseBodyDatabaseList& obj) { 
      DARABONBA_PTR_TO_JSON(External, external_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(PermissionModel, permissionModel_);
      DARABONBA_PTR_TO_JSON(Privilege, privilege_);
    };
    friend void from_json(const Darabonba::Json& j, ListDatabasesResponseBodyDatabaseList& obj) { 
      DARABONBA_PTR_FROM_JSON(External, external_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(PermissionModel, permissionModel_);
      DARABONBA_PTR_FROM_JSON(Privilege, privilege_);
    };
    ListDatabasesResponseBodyDatabaseList() = default ;
    ListDatabasesResponseBodyDatabaseList(const ListDatabasesResponseBodyDatabaseList &) = default ;
    ListDatabasesResponseBodyDatabaseList(ListDatabasesResponseBodyDatabaseList &&) = default ;
    ListDatabasesResponseBodyDatabaseList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDatabasesResponseBodyDatabaseList() = default ;
    ListDatabasesResponseBodyDatabaseList& operator=(const ListDatabasesResponseBodyDatabaseList &) = default ;
    ListDatabasesResponseBodyDatabaseList& operator=(ListDatabasesResponseBodyDatabaseList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->external_ == nullptr
        && return this->name_ == nullptr && return this->permissionModel_ == nullptr && return this->privilege_ == nullptr; };
    // external Field Functions 
    bool hasExternal() const { return this->external_ != nullptr;};
    void deleteExternal() { this->external_ = nullptr;};
    inline bool external() const { DARABONBA_PTR_GET_DEFAULT(external_, false) };
    inline ListDatabasesResponseBodyDatabaseList& setExternal(bool external) { DARABONBA_PTR_SET_VALUE(external_, external) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListDatabasesResponseBodyDatabaseList& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // permissionModel Field Functions 
    bool hasPermissionModel() const { return this->permissionModel_ != nullptr;};
    void deletePermissionModel() { this->permissionModel_ = nullptr;};
    inline string permissionModel() const { DARABONBA_PTR_GET_DEFAULT(permissionModel_, "") };
    inline ListDatabasesResponseBodyDatabaseList& setPermissionModel(string permissionModel) { DARABONBA_PTR_SET_VALUE(permissionModel_, permissionModel) };


    // privilege Field Functions 
    bool hasPrivilege() const { return this->privilege_ != nullptr;};
    void deletePrivilege() { this->privilege_ = nullptr;};
    inline string privilege() const { DARABONBA_PTR_GET_DEFAULT(privilege_, "") };
    inline ListDatabasesResponseBodyDatabaseList& setPrivilege(string privilege) { DARABONBA_PTR_SET_VALUE(privilege_, privilege) };


  protected:
    std::shared_ptr<bool> external_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> permissionModel_ = nullptr;
    std::shared_ptr<string> privilege_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Hologram20220601
#endif
