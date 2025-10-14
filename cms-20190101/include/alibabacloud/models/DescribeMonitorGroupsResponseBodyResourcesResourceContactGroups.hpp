// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEMONITORGROUPSRESPONSEBODYRESOURCESRESOURCECONTACTGROUPS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEMONITORGROUPSRESPONSEBODYRESOURCESRESOURCECONTACTGROUPS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeMonitorGroupsResponseBodyResourcesResourceContactGroupsContactGroup.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class DescribeMonitorGroupsResponseBodyResourcesResourceContactGroups : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeMonitorGroupsResponseBodyResourcesResourceContactGroups& obj) { 
      DARABONBA_PTR_TO_JSON(ContactGroup, contactGroup_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeMonitorGroupsResponseBodyResourcesResourceContactGroups& obj) { 
      DARABONBA_PTR_FROM_JSON(ContactGroup, contactGroup_);
    };
    DescribeMonitorGroupsResponseBodyResourcesResourceContactGroups() = default ;
    DescribeMonitorGroupsResponseBodyResourcesResourceContactGroups(const DescribeMonitorGroupsResponseBodyResourcesResourceContactGroups &) = default ;
    DescribeMonitorGroupsResponseBodyResourcesResourceContactGroups(DescribeMonitorGroupsResponseBodyResourcesResourceContactGroups &&) = default ;
    DescribeMonitorGroupsResponseBodyResourcesResourceContactGroups(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeMonitorGroupsResponseBodyResourcesResourceContactGroups() = default ;
    DescribeMonitorGroupsResponseBodyResourcesResourceContactGroups& operator=(const DescribeMonitorGroupsResponseBodyResourcesResourceContactGroups &) = default ;
    DescribeMonitorGroupsResponseBodyResourcesResourceContactGroups& operator=(DescribeMonitorGroupsResponseBodyResourcesResourceContactGroups &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->contactGroup_ == nullptr; };
    // contactGroup Field Functions 
    bool hasContactGroup() const { return this->contactGroup_ != nullptr;};
    void deleteContactGroup() { this->contactGroup_ = nullptr;};
    inline const vector<Models::DescribeMonitorGroupsResponseBodyResourcesResourceContactGroupsContactGroup> & contactGroup() const { DARABONBA_PTR_GET_CONST(contactGroup_, vector<Models::DescribeMonitorGroupsResponseBodyResourcesResourceContactGroupsContactGroup>) };
    inline vector<Models::DescribeMonitorGroupsResponseBodyResourcesResourceContactGroupsContactGroup> contactGroup() { DARABONBA_PTR_GET(contactGroup_, vector<Models::DescribeMonitorGroupsResponseBodyResourcesResourceContactGroupsContactGroup>) };
    inline DescribeMonitorGroupsResponseBodyResourcesResourceContactGroups& setContactGroup(const vector<Models::DescribeMonitorGroupsResponseBodyResourcesResourceContactGroupsContactGroup> & contactGroup) { DARABONBA_PTR_SET_VALUE(contactGroup_, contactGroup) };
    inline DescribeMonitorGroupsResponseBodyResourcesResourceContactGroups& setContactGroup(vector<Models::DescribeMonitorGroupsResponseBodyResourcesResourceContactGroupsContactGroup> && contactGroup) { DARABONBA_PTR_SET_RVALUE(contactGroup_, contactGroup) };


  protected:
    std::shared_ptr<vector<Models::DescribeMonitorGroupsResponseBodyResourcesResourceContactGroupsContactGroup>> contactGroup_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
