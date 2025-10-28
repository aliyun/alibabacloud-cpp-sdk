// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTROLERESPONSEBODYROLELISTROLEITEMACTIONLIST_HPP_
#define ALIBABACLOUD_MODELS_LISTROLERESPONSEBODYROLELISTROLEITEMACTIONLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListRoleResponseBodyRoleListRoleItemActionListAction.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Edas20170801
{
namespace Models
{
  class ListRoleResponseBodyRoleListRoleItemActionList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListRoleResponseBodyRoleListRoleItemActionList& obj) { 
      DARABONBA_PTR_TO_JSON(Action, action_);
    };
    friend void from_json(const Darabonba::Json& j, ListRoleResponseBodyRoleListRoleItemActionList& obj) { 
      DARABONBA_PTR_FROM_JSON(Action, action_);
    };
    ListRoleResponseBodyRoleListRoleItemActionList() = default ;
    ListRoleResponseBodyRoleListRoleItemActionList(const ListRoleResponseBodyRoleListRoleItemActionList &) = default ;
    ListRoleResponseBodyRoleListRoleItemActionList(ListRoleResponseBodyRoleListRoleItemActionList &&) = default ;
    ListRoleResponseBodyRoleListRoleItemActionList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListRoleResponseBodyRoleListRoleItemActionList() = default ;
    ListRoleResponseBodyRoleListRoleItemActionList& operator=(const ListRoleResponseBodyRoleListRoleItemActionList &) = default ;
    ListRoleResponseBodyRoleListRoleItemActionList& operator=(ListRoleResponseBodyRoleListRoleItemActionList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->action_ == nullptr; };
    // action Field Functions 
    bool hasAction() const { return this->action_ != nullptr;};
    void deleteAction() { this->action_ = nullptr;};
    inline const vector<Models::ListRoleResponseBodyRoleListRoleItemActionListAction> & action() const { DARABONBA_PTR_GET_CONST(action_, vector<Models::ListRoleResponseBodyRoleListRoleItemActionListAction>) };
    inline vector<Models::ListRoleResponseBodyRoleListRoleItemActionListAction> action() { DARABONBA_PTR_GET(action_, vector<Models::ListRoleResponseBodyRoleListRoleItemActionListAction>) };
    inline ListRoleResponseBodyRoleListRoleItemActionList& setAction(const vector<Models::ListRoleResponseBodyRoleListRoleItemActionListAction> & action) { DARABONBA_PTR_SET_VALUE(action_, action) };
    inline ListRoleResponseBodyRoleListRoleItemActionList& setAction(vector<Models::ListRoleResponseBodyRoleListRoleItemActionListAction> && action) { DARABONBA_PTR_SET_RVALUE(action_, action) };


  protected:
    std::shared_ptr<vector<Models::ListRoleResponseBodyRoleListRoleItemActionListAction>> action_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Edas20170801
#endif
