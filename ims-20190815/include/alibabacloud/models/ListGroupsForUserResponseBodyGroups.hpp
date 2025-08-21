// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTGROUPSFORUSERRESPONSEBODYGROUPS_HPP_
#define ALIBABACLOUD_MODELS_LISTGROUPSFORUSERRESPONSEBODYGROUPS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListGroupsForUserResponseBodyGroupsGroup.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ims20190815
{
namespace Models
{
  class ListGroupsForUserResponseBodyGroups : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListGroupsForUserResponseBodyGroups& obj) { 
      DARABONBA_PTR_TO_JSON(Group, group_);
    };
    friend void from_json(const Darabonba::Json& j, ListGroupsForUserResponseBodyGroups& obj) { 
      DARABONBA_PTR_FROM_JSON(Group, group_);
    };
    ListGroupsForUserResponseBodyGroups() = default ;
    ListGroupsForUserResponseBodyGroups(const ListGroupsForUserResponseBodyGroups &) = default ;
    ListGroupsForUserResponseBodyGroups(ListGroupsForUserResponseBodyGroups &&) = default ;
    ListGroupsForUserResponseBodyGroups(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListGroupsForUserResponseBodyGroups() = default ;
    ListGroupsForUserResponseBodyGroups& operator=(const ListGroupsForUserResponseBodyGroups &) = default ;
    ListGroupsForUserResponseBodyGroups& operator=(ListGroupsForUserResponseBodyGroups &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->group_ != nullptr; };
    // group Field Functions 
    bool hasGroup() const { return this->group_ != nullptr;};
    void deleteGroup() { this->group_ = nullptr;};
    inline const vector<Models::ListGroupsForUserResponseBodyGroupsGroup> & group() const { DARABONBA_PTR_GET_CONST(group_, vector<Models::ListGroupsForUserResponseBodyGroupsGroup>) };
    inline vector<Models::ListGroupsForUserResponseBodyGroupsGroup> group() { DARABONBA_PTR_GET(group_, vector<Models::ListGroupsForUserResponseBodyGroupsGroup>) };
    inline ListGroupsForUserResponseBodyGroups& setGroup(const vector<Models::ListGroupsForUserResponseBodyGroupsGroup> & group) { DARABONBA_PTR_SET_VALUE(group_, group) };
    inline ListGroupsForUserResponseBodyGroups& setGroup(vector<Models::ListGroupsForUserResponseBodyGroupsGroup> && group) { DARABONBA_PTR_SET_RVALUE(group_, group) };


  protected:
    std::shared_ptr<vector<Models::ListGroupsForUserResponseBodyGroupsGroup>> group_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ims20190815
#endif
