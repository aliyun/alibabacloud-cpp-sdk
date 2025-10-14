// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEMONITORGROUPRESPONSEBODYGROUP_HPP_
#define ALIBABACLOUD_MODELS_DELETEMONITORGROUPRESPONSEBODYGROUP_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DeleteMonitorGroupResponseBodyGroupContactGroups.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class DeleteMonitorGroupResponseBodyGroup : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteMonitorGroupResponseBodyGroup& obj) { 
      DARABONBA_PTR_TO_JSON(ContactGroups, contactGroups_);
      DARABONBA_PTR_TO_JSON(GroupName, groupName_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteMonitorGroupResponseBodyGroup& obj) { 
      DARABONBA_PTR_FROM_JSON(ContactGroups, contactGroups_);
      DARABONBA_PTR_FROM_JSON(GroupName, groupName_);
    };
    DeleteMonitorGroupResponseBodyGroup() = default ;
    DeleteMonitorGroupResponseBodyGroup(const DeleteMonitorGroupResponseBodyGroup &) = default ;
    DeleteMonitorGroupResponseBodyGroup(DeleteMonitorGroupResponseBodyGroup &&) = default ;
    DeleteMonitorGroupResponseBodyGroup(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteMonitorGroupResponseBodyGroup() = default ;
    DeleteMonitorGroupResponseBodyGroup& operator=(const DeleteMonitorGroupResponseBodyGroup &) = default ;
    DeleteMonitorGroupResponseBodyGroup& operator=(DeleteMonitorGroupResponseBodyGroup &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->contactGroups_ == nullptr
        && return this->groupName_ == nullptr; };
    // contactGroups Field Functions 
    bool hasContactGroups() const { return this->contactGroups_ != nullptr;};
    void deleteContactGroups() { this->contactGroups_ = nullptr;};
    inline const Models::DeleteMonitorGroupResponseBodyGroupContactGroups & contactGroups() const { DARABONBA_PTR_GET_CONST(contactGroups_, Models::DeleteMonitorGroupResponseBodyGroupContactGroups) };
    inline Models::DeleteMonitorGroupResponseBodyGroupContactGroups contactGroups() { DARABONBA_PTR_GET(contactGroups_, Models::DeleteMonitorGroupResponseBodyGroupContactGroups) };
    inline DeleteMonitorGroupResponseBodyGroup& setContactGroups(const Models::DeleteMonitorGroupResponseBodyGroupContactGroups & contactGroups) { DARABONBA_PTR_SET_VALUE(contactGroups_, contactGroups) };
    inline DeleteMonitorGroupResponseBodyGroup& setContactGroups(Models::DeleteMonitorGroupResponseBodyGroupContactGroups && contactGroups) { DARABONBA_PTR_SET_RVALUE(contactGroups_, contactGroups) };


    // groupName Field Functions 
    bool hasGroupName() const { return this->groupName_ != nullptr;};
    void deleteGroupName() { this->groupName_ = nullptr;};
    inline string groupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
    inline DeleteMonitorGroupResponseBodyGroup& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


  protected:
    // The alert groups that receive alert notifications for the application group.
    std::shared_ptr<Models::DeleteMonitorGroupResponseBodyGroupContactGroups> contactGroups_ = nullptr;
    // The name of the application group.
    std::shared_ptr<string> groupName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
