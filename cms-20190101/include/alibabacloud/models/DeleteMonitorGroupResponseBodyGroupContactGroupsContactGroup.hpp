// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEMONITORGROUPRESPONSEBODYGROUPCONTACTGROUPSCONTACTGROUP_HPP_
#define ALIBABACLOUD_MODELS_DELETEMONITORGROUPRESPONSEBODYGROUPCONTACTGROUPSCONTACTGROUP_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class DeleteMonitorGroupResponseBodyGroupContactGroupsContactGroup : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteMonitorGroupResponseBodyGroupContactGroupsContactGroup& obj) { 
      DARABONBA_PTR_TO_JSON(Name, name_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteMonitorGroupResponseBodyGroupContactGroupsContactGroup& obj) { 
      DARABONBA_PTR_FROM_JSON(Name, name_);
    };
    DeleteMonitorGroupResponseBodyGroupContactGroupsContactGroup() = default ;
    DeleteMonitorGroupResponseBodyGroupContactGroupsContactGroup(const DeleteMonitorGroupResponseBodyGroupContactGroupsContactGroup &) = default ;
    DeleteMonitorGroupResponseBodyGroupContactGroupsContactGroup(DeleteMonitorGroupResponseBodyGroupContactGroupsContactGroup &&) = default ;
    DeleteMonitorGroupResponseBodyGroupContactGroupsContactGroup(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteMonitorGroupResponseBodyGroupContactGroupsContactGroup() = default ;
    DeleteMonitorGroupResponseBodyGroupContactGroupsContactGroup& operator=(const DeleteMonitorGroupResponseBodyGroupContactGroupsContactGroup &) = default ;
    DeleteMonitorGroupResponseBodyGroupContactGroupsContactGroup& operator=(DeleteMonitorGroupResponseBodyGroupContactGroupsContactGroup &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->name_ != nullptr; };
    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DeleteMonitorGroupResponseBodyGroupContactGroupsContactGroup& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


  protected:
    // The name of the alert group.
    std::shared_ptr<string> name_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
