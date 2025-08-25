// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTROLESRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTROLESRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CCC20200701
{
namespace Models
{
  class ListRolesResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListRolesResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(RoleId, roleId_);
    };
    friend void from_json(const Darabonba::Json& j, ListRolesResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(RoleId, roleId_);
    };
    ListRolesResponseBodyData() = default ;
    ListRolesResponseBodyData(const ListRolesResponseBodyData &) = default ;
    ListRolesResponseBodyData(ListRolesResponseBodyData &&) = default ;
    ListRolesResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListRolesResponseBodyData() = default ;
    ListRolesResponseBodyData& operator=(const ListRolesResponseBodyData &) = default ;
    ListRolesResponseBodyData& operator=(ListRolesResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->name_ != nullptr
        && this->roleId_ != nullptr; };
    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListRolesResponseBodyData& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // roleId Field Functions 
    bool hasRoleId() const { return this->roleId_ != nullptr;};
    void deleteRoleId() { this->roleId_ = nullptr;};
    inline string roleId() const { DARABONBA_PTR_GET_DEFAULT(roleId_, "") };
    inline ListRolesResponseBodyData& setRoleId(string roleId) { DARABONBA_PTR_SET_VALUE(roleId_, roleId) };


  protected:
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> roleId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CCC20200701
#endif
