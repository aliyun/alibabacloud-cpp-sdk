// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETINSTANCERESPONSEBODYDATANUMBERLISTSKILLGROUPS_HPP_
#define ALIBABACLOUD_MODELS_GETINSTANCERESPONSEBODYDATANUMBERLISTSKILLGROUPS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CCC20200701
{
namespace Models
{
  class GetInstanceResponseBodyDataNumberListSkillGroups : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetInstanceResponseBodyDataNumberListSkillGroups& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(DisplayName, displayName_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(PhoneNumberCount, phoneNumberCount_);
      DARABONBA_PTR_TO_JSON(SkillGroupId, skillGroupId_);
      DARABONBA_PTR_TO_JSON(UserCount, userCount_);
    };
    friend void from_json(const Darabonba::Json& j, GetInstanceResponseBodyDataNumberListSkillGroups& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(DisplayName, displayName_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(PhoneNumberCount, phoneNumberCount_);
      DARABONBA_PTR_FROM_JSON(SkillGroupId, skillGroupId_);
      DARABONBA_PTR_FROM_JSON(UserCount, userCount_);
    };
    GetInstanceResponseBodyDataNumberListSkillGroups() = default ;
    GetInstanceResponseBodyDataNumberListSkillGroups(const GetInstanceResponseBodyDataNumberListSkillGroups &) = default ;
    GetInstanceResponseBodyDataNumberListSkillGroups(GetInstanceResponseBodyDataNumberListSkillGroups &&) = default ;
    GetInstanceResponseBodyDataNumberListSkillGroups(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetInstanceResponseBodyDataNumberListSkillGroups() = default ;
    GetInstanceResponseBodyDataNumberListSkillGroups& operator=(const GetInstanceResponseBodyDataNumberListSkillGroups &) = default ;
    GetInstanceResponseBodyDataNumberListSkillGroups& operator=(GetInstanceResponseBodyDataNumberListSkillGroups &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->description_ == nullptr
        && return this->displayName_ == nullptr && return this->instanceId_ == nullptr && return this->name_ == nullptr && return this->phoneNumberCount_ == nullptr && return this->skillGroupId_ == nullptr
        && return this->userCount_ == nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline GetInstanceResponseBodyDataNumberListSkillGroups& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // displayName Field Functions 
    bool hasDisplayName() const { return this->displayName_ != nullptr;};
    void deleteDisplayName() { this->displayName_ = nullptr;};
    inline string displayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
    inline GetInstanceResponseBodyDataNumberListSkillGroups& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline GetInstanceResponseBodyDataNumberListSkillGroups& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GetInstanceResponseBodyDataNumberListSkillGroups& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // phoneNumberCount Field Functions 
    bool hasPhoneNumberCount() const { return this->phoneNumberCount_ != nullptr;};
    void deletePhoneNumberCount() { this->phoneNumberCount_ = nullptr;};
    inline int32_t phoneNumberCount() const { DARABONBA_PTR_GET_DEFAULT(phoneNumberCount_, 0) };
    inline GetInstanceResponseBodyDataNumberListSkillGroups& setPhoneNumberCount(int32_t phoneNumberCount) { DARABONBA_PTR_SET_VALUE(phoneNumberCount_, phoneNumberCount) };


    // skillGroupId Field Functions 
    bool hasSkillGroupId() const { return this->skillGroupId_ != nullptr;};
    void deleteSkillGroupId() { this->skillGroupId_ = nullptr;};
    inline string skillGroupId() const { DARABONBA_PTR_GET_DEFAULT(skillGroupId_, "") };
    inline GetInstanceResponseBodyDataNumberListSkillGroups& setSkillGroupId(string skillGroupId) { DARABONBA_PTR_SET_VALUE(skillGroupId_, skillGroupId) };


    // userCount Field Functions 
    bool hasUserCount() const { return this->userCount_ != nullptr;};
    void deleteUserCount() { this->userCount_ = nullptr;};
    inline int32_t userCount() const { DARABONBA_PTR_GET_DEFAULT(userCount_, 0) };
    inline GetInstanceResponseBodyDataNumberListSkillGroups& setUserCount(int32_t userCount) { DARABONBA_PTR_SET_VALUE(userCount_, userCount) };


  protected:
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<string> displayName_ = nullptr;
    std::shared_ptr<string> instanceId_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<int32_t> phoneNumberCount_ = nullptr;
    std::shared_ptr<string> skillGroupId_ = nullptr;
    std::shared_ptr<int32_t> userCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CCC20200701
#endif
