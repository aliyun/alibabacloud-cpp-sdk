// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTROLERESPONSEBODYROLELIST_HPP_
#define ALIBABACLOUD_MODELS_LISTROLERESPONSEBODYROLELIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListRoleResponseBodyRoleListRoleItem.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Edas20170801
{
namespace Models
{
  class ListRoleResponseBodyRoleList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListRoleResponseBodyRoleList& obj) { 
      DARABONBA_PTR_TO_JSON(RoleItem, roleItem_);
    };
    friend void from_json(const Darabonba::Json& j, ListRoleResponseBodyRoleList& obj) { 
      DARABONBA_PTR_FROM_JSON(RoleItem, roleItem_);
    };
    ListRoleResponseBodyRoleList() = default ;
    ListRoleResponseBodyRoleList(const ListRoleResponseBodyRoleList &) = default ;
    ListRoleResponseBodyRoleList(ListRoleResponseBodyRoleList &&) = default ;
    ListRoleResponseBodyRoleList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListRoleResponseBodyRoleList() = default ;
    ListRoleResponseBodyRoleList& operator=(const ListRoleResponseBodyRoleList &) = default ;
    ListRoleResponseBodyRoleList& operator=(ListRoleResponseBodyRoleList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->roleItem_ == nullptr; };
    // roleItem Field Functions 
    bool hasRoleItem() const { return this->roleItem_ != nullptr;};
    void deleteRoleItem() { this->roleItem_ = nullptr;};
    inline const vector<Models::ListRoleResponseBodyRoleListRoleItem> & roleItem() const { DARABONBA_PTR_GET_CONST(roleItem_, vector<Models::ListRoleResponseBodyRoleListRoleItem>) };
    inline vector<Models::ListRoleResponseBodyRoleListRoleItem> roleItem() { DARABONBA_PTR_GET(roleItem_, vector<Models::ListRoleResponseBodyRoleListRoleItem>) };
    inline ListRoleResponseBodyRoleList& setRoleItem(const vector<Models::ListRoleResponseBodyRoleListRoleItem> & roleItem) { DARABONBA_PTR_SET_VALUE(roleItem_, roleItem) };
    inline ListRoleResponseBodyRoleList& setRoleItem(vector<Models::ListRoleResponseBodyRoleListRoleItem> && roleItem) { DARABONBA_PTR_SET_RVALUE(roleItem_, roleItem) };


  protected:
    std::shared_ptr<vector<Models::ListRoleResponseBodyRoleListRoleItem>> roleItem_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Edas20170801
#endif
