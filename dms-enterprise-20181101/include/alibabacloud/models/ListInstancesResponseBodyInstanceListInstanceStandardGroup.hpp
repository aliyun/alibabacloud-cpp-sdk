// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTINSTANCESRESPONSEBODYINSTANCELISTINSTANCESTANDARDGROUP_HPP_
#define ALIBABACLOUD_MODELS_LISTINSTANCESRESPONSEBODYINSTANCELISTINSTANCESTANDARDGROUP_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class ListInstancesResponseBodyInstanceListInstanceStandardGroup : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListInstancesResponseBodyInstanceListInstanceStandardGroup& obj) { 
      DARABONBA_PTR_TO_JSON(GroupMode, groupMode_);
      DARABONBA_PTR_TO_JSON(GroupName, groupName_);
    };
    friend void from_json(const Darabonba::Json& j, ListInstancesResponseBodyInstanceListInstanceStandardGroup& obj) { 
      DARABONBA_PTR_FROM_JSON(GroupMode, groupMode_);
      DARABONBA_PTR_FROM_JSON(GroupName, groupName_);
    };
    ListInstancesResponseBodyInstanceListInstanceStandardGroup() = default ;
    ListInstancesResponseBodyInstanceListInstanceStandardGroup(const ListInstancesResponseBodyInstanceListInstanceStandardGroup &) = default ;
    ListInstancesResponseBodyInstanceListInstanceStandardGroup(ListInstancesResponseBodyInstanceListInstanceStandardGroup &&) = default ;
    ListInstancesResponseBodyInstanceListInstanceStandardGroup(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListInstancesResponseBodyInstanceListInstanceStandardGroup() = default ;
    ListInstancesResponseBodyInstanceListInstanceStandardGroup& operator=(const ListInstancesResponseBodyInstanceListInstanceStandardGroup &) = default ;
    ListInstancesResponseBodyInstanceListInstanceStandardGroup& operator=(ListInstancesResponseBodyInstanceListInstanceStandardGroup &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->groupMode_ != nullptr
        && this->groupName_ != nullptr; };
    // groupMode Field Functions 
    bool hasGroupMode() const { return this->groupMode_ != nullptr;};
    void deleteGroupMode() { this->groupMode_ = nullptr;};
    inline string groupMode() const { DARABONBA_PTR_GET_DEFAULT(groupMode_, "") };
    inline ListInstancesResponseBodyInstanceListInstanceStandardGroup& setGroupMode(string groupMode) { DARABONBA_PTR_SET_VALUE(groupMode_, groupMode) };


    // groupName Field Functions 
    bool hasGroupName() const { return this->groupName_ != nullptr;};
    void deleteGroupName() { this->groupName_ = nullptr;};
    inline string groupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
    inline ListInstancesResponseBodyInstanceListInstanceStandardGroup& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


  protected:
    // The type of the control mode. Valid values:
    // 
    // *   **COMMON**: Security Collaboration
    // *   **NONE_CONTROL**: Flexible Management
    // *   **STABLE**: Stable Change
    std::shared_ptr<string> groupMode_ = nullptr;
    // The name of the security rule corresponding to the control mode.
    std::shared_ptr<string> groupName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
