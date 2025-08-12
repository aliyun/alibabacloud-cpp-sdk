// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEMONITORGROUPSRESPONSEBODYRESOURCESRESOURCECONTACTGROUPSCONTACTGROUP_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEMONITORGROUPSRESPONSEBODYRESOURCESRESOURCECONTACTGROUPSCONTACTGROUP_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class DescribeMonitorGroupsResponseBodyResourcesResourceContactGroupsContactGroup : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeMonitorGroupsResponseBodyResourcesResourceContactGroupsContactGroup& obj) { 
      DARABONBA_PTR_TO_JSON(Name, name_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeMonitorGroupsResponseBodyResourcesResourceContactGroupsContactGroup& obj) { 
      DARABONBA_PTR_FROM_JSON(Name, name_);
    };
    DescribeMonitorGroupsResponseBodyResourcesResourceContactGroupsContactGroup() = default ;
    DescribeMonitorGroupsResponseBodyResourcesResourceContactGroupsContactGroup(const DescribeMonitorGroupsResponseBodyResourcesResourceContactGroupsContactGroup &) = default ;
    DescribeMonitorGroupsResponseBodyResourcesResourceContactGroupsContactGroup(DescribeMonitorGroupsResponseBodyResourcesResourceContactGroupsContactGroup &&) = default ;
    DescribeMonitorGroupsResponseBodyResourcesResourceContactGroupsContactGroup(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeMonitorGroupsResponseBodyResourcesResourceContactGroupsContactGroup() = default ;
    DescribeMonitorGroupsResponseBodyResourcesResourceContactGroupsContactGroup& operator=(const DescribeMonitorGroupsResponseBodyResourcesResourceContactGroupsContactGroup &) = default ;
    DescribeMonitorGroupsResponseBodyResourcesResourceContactGroupsContactGroup& operator=(DescribeMonitorGroupsResponseBodyResourcesResourceContactGroupsContactGroup &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->name_ != nullptr; };
    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeMonitorGroupsResponseBodyResourcesResourceContactGroupsContactGroup& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


  protected:
    // The name of the alert contact group.
    std::shared_ptr<string> name_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
