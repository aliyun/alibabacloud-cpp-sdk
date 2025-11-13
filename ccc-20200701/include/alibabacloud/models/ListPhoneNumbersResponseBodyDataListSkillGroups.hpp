// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPHONENUMBERSRESPONSEBODYDATALISTSKILLGROUPS_HPP_
#define ALIBABACLOUD_MODELS_LISTPHONENUMBERSRESPONSEBODYDATALISTSKILLGROUPS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CCC20200701
{
namespace Models
{
  class ListPhoneNumbersResponseBodyDataListSkillGroups : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListPhoneNumbersResponseBodyDataListSkillGroups& obj) { 
      DARABONBA_PTR_TO_JSON(DisplayName, displayName_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(SkillGroupId, skillGroupId_);
    };
    friend void from_json(const Darabonba::Json& j, ListPhoneNumbersResponseBodyDataListSkillGroups& obj) { 
      DARABONBA_PTR_FROM_JSON(DisplayName, displayName_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(SkillGroupId, skillGroupId_);
    };
    ListPhoneNumbersResponseBodyDataListSkillGroups() = default ;
    ListPhoneNumbersResponseBodyDataListSkillGroups(const ListPhoneNumbersResponseBodyDataListSkillGroups &) = default ;
    ListPhoneNumbersResponseBodyDataListSkillGroups(ListPhoneNumbersResponseBodyDataListSkillGroups &&) = default ;
    ListPhoneNumbersResponseBodyDataListSkillGroups(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListPhoneNumbersResponseBodyDataListSkillGroups() = default ;
    ListPhoneNumbersResponseBodyDataListSkillGroups& operator=(const ListPhoneNumbersResponseBodyDataListSkillGroups &) = default ;
    ListPhoneNumbersResponseBodyDataListSkillGroups& operator=(ListPhoneNumbersResponseBodyDataListSkillGroups &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->displayName_ == nullptr
        && return this->instanceId_ == nullptr && return this->name_ == nullptr && return this->skillGroupId_ == nullptr; };
    // displayName Field Functions 
    bool hasDisplayName() const { return this->displayName_ != nullptr;};
    void deleteDisplayName() { this->displayName_ = nullptr;};
    inline string displayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
    inline ListPhoneNumbersResponseBodyDataListSkillGroups& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ListPhoneNumbersResponseBodyDataListSkillGroups& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListPhoneNumbersResponseBodyDataListSkillGroups& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // skillGroupId Field Functions 
    bool hasSkillGroupId() const { return this->skillGroupId_ != nullptr;};
    void deleteSkillGroupId() { this->skillGroupId_ = nullptr;};
    inline string skillGroupId() const { DARABONBA_PTR_GET_DEFAULT(skillGroupId_, "") };
    inline ListPhoneNumbersResponseBodyDataListSkillGroups& setSkillGroupId(string skillGroupId) { DARABONBA_PTR_SET_VALUE(skillGroupId_, skillGroupId) };


  protected:
    std::shared_ptr<string> displayName_ = nullptr;
    std::shared_ptr<string> instanceId_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> skillGroupId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CCC20200701
#endif
