// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETINSTANCERESPONSEBODYINSTANCESTANDARDGROUP_HPP_
#define ALIBABACLOUD_MODELS_GETINSTANCERESPONSEBODYINSTANCESTANDARDGROUP_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class GetInstanceResponseBodyInstanceStandardGroup : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetInstanceResponseBodyInstanceStandardGroup& obj) { 
      DARABONBA_PTR_TO_JSON(GroupMode, groupMode_);
      DARABONBA_PTR_TO_JSON(GroupName, groupName_);
    };
    friend void from_json(const Darabonba::Json& j, GetInstanceResponseBodyInstanceStandardGroup& obj) { 
      DARABONBA_PTR_FROM_JSON(GroupMode, groupMode_);
      DARABONBA_PTR_FROM_JSON(GroupName, groupName_);
    };
    GetInstanceResponseBodyInstanceStandardGroup() = default ;
    GetInstanceResponseBodyInstanceStandardGroup(const GetInstanceResponseBodyInstanceStandardGroup &) = default ;
    GetInstanceResponseBodyInstanceStandardGroup(GetInstanceResponseBodyInstanceStandardGroup &&) = default ;
    GetInstanceResponseBodyInstanceStandardGroup(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetInstanceResponseBodyInstanceStandardGroup() = default ;
    GetInstanceResponseBodyInstanceStandardGroup& operator=(const GetInstanceResponseBodyInstanceStandardGroup &) = default ;
    GetInstanceResponseBodyInstanceStandardGroup& operator=(GetInstanceResponseBodyInstanceStandardGroup &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->groupMode_ == nullptr
        && return this->groupName_ == nullptr; };
    // groupMode Field Functions 
    bool hasGroupMode() const { return this->groupMode_ != nullptr;};
    void deleteGroupMode() { this->groupMode_ = nullptr;};
    inline string groupMode() const { DARABONBA_PTR_GET_DEFAULT(groupMode_, "") };
    inline GetInstanceResponseBodyInstanceStandardGroup& setGroupMode(string groupMode) { DARABONBA_PTR_SET_VALUE(groupMode_, groupMode) };


    // groupName Field Functions 
    bool hasGroupName() const { return this->groupName_ != nullptr;};
    void deleteGroupName() { this->groupName_ = nullptr;};
    inline string groupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
    inline GetInstanceResponseBodyInstanceStandardGroup& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


  protected:
    // The type of the control mode. Valid values:
    // 
    // *   **COMMON**: Security Collaboration
    // *   **NONE_CONTROL**: Flexible Management
    // *   **STABLE**: Stable Change
    std::shared_ptr<string> groupMode_ = nullptr;
    // The name of the security rule set corresponding to the control mode.
    std::shared_ptr<string> groupName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
