// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDEFENSERESOURCEGROUPSRESPONSEBODYGROUPS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDEFENSERESOURCEGROUPSRESPONSEBODYGROUPS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class DescribeDefenseResourceGroupsResponseBodyGroups : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDefenseResourceGroupsResponseBodyGroups& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_TO_JSON(GroupName, groupName_);
      DARABONBA_PTR_TO_JSON(ResourceList, resourceList_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDefenseResourceGroupsResponseBodyGroups& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_FROM_JSON(GroupName, groupName_);
      DARABONBA_PTR_FROM_JSON(ResourceList, resourceList_);
    };
    DescribeDefenseResourceGroupsResponseBodyGroups() = default ;
    DescribeDefenseResourceGroupsResponseBodyGroups(const DescribeDefenseResourceGroupsResponseBodyGroups &) = default ;
    DescribeDefenseResourceGroupsResponseBodyGroups(DescribeDefenseResourceGroupsResponseBodyGroups &&) = default ;
    DescribeDefenseResourceGroupsResponseBodyGroups(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDefenseResourceGroupsResponseBodyGroups() = default ;
    DescribeDefenseResourceGroupsResponseBodyGroups& operator=(const DescribeDefenseResourceGroupsResponseBodyGroups &) = default ;
    DescribeDefenseResourceGroupsResponseBodyGroups& operator=(DescribeDefenseResourceGroupsResponseBodyGroups &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->description_ == nullptr
        && return this->gmtCreate_ == nullptr && return this->gmtModified_ == nullptr && return this->groupName_ == nullptr && return this->resourceList_ == nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeDefenseResourceGroupsResponseBodyGroups& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline int64_t gmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, 0L) };
    inline DescribeDefenseResourceGroupsResponseBodyGroups& setGmtCreate(int64_t gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline int64_t gmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, 0L) };
    inline DescribeDefenseResourceGroupsResponseBodyGroups& setGmtModified(int64_t gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    // groupName Field Functions 
    bool hasGroupName() const { return this->groupName_ != nullptr;};
    void deleteGroupName() { this->groupName_ = nullptr;};
    inline string groupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
    inline DescribeDefenseResourceGroupsResponseBodyGroups& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


    // resourceList Field Functions 
    bool hasResourceList() const { return this->resourceList_ != nullptr;};
    void deleteResourceList() { this->resourceList_ = nullptr;};
    inline string resourceList() const { DARABONBA_PTR_GET_DEFAULT(resourceList_, "") };
    inline DescribeDefenseResourceGroupsResponseBodyGroups& setResourceList(string resourceList) { DARABONBA_PTR_SET_VALUE(resourceList_, resourceList) };


  protected:
    // The description of the protected object group.
    std::shared_ptr<string> description_ = nullptr;
    // The time when the protected object group was created. Unit: milliseconds.
    std::shared_ptr<int64_t> gmtCreate_ = nullptr;
    // The most recent time when the protected object group was modified. Unit: milliseconds.
    std::shared_ptr<int64_t> gmtModified_ = nullptr;
    // The name of the protected object group.
    std::shared_ptr<string> groupName_ = nullptr;
    // The names of the protected objects that are added to the protected object group. Separate multiple protected objects with commas (,).
    std::shared_ptr<string> resourceList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
