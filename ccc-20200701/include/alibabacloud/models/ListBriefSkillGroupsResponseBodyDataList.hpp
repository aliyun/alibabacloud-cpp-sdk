// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTBRIEFSKILLGROUPSRESPONSEBODYDATALIST_HPP_
#define ALIBABACLOUD_MODELS_LISTBRIEFSKILLGROUPSRESPONSEBODYDATALIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CCC20200701
{
namespace Models
{
  class ListBriefSkillGroupsResponseBodyDataList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListBriefSkillGroupsResponseBodyDataList& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(DisplayName, displayName_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(MediaType, mediaType_);
      DARABONBA_PTR_TO_JSON(PhoneNumberCount, phoneNumberCount_);
      DARABONBA_PTR_TO_JSON(SkillGroupId, skillGroupId_);
      DARABONBA_PTR_TO_JSON(SkillGroupName, skillGroupName_);
      DARABONBA_PTR_TO_JSON(UserCount, userCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListBriefSkillGroupsResponseBodyDataList& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(DisplayName, displayName_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(MediaType, mediaType_);
      DARABONBA_PTR_FROM_JSON(PhoneNumberCount, phoneNumberCount_);
      DARABONBA_PTR_FROM_JSON(SkillGroupId, skillGroupId_);
      DARABONBA_PTR_FROM_JSON(SkillGroupName, skillGroupName_);
      DARABONBA_PTR_FROM_JSON(UserCount, userCount_);
    };
    ListBriefSkillGroupsResponseBodyDataList() = default ;
    ListBriefSkillGroupsResponseBodyDataList(const ListBriefSkillGroupsResponseBodyDataList &) = default ;
    ListBriefSkillGroupsResponseBodyDataList(ListBriefSkillGroupsResponseBodyDataList &&) = default ;
    ListBriefSkillGroupsResponseBodyDataList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListBriefSkillGroupsResponseBodyDataList() = default ;
    ListBriefSkillGroupsResponseBodyDataList& operator=(const ListBriefSkillGroupsResponseBodyDataList &) = default ;
    ListBriefSkillGroupsResponseBodyDataList& operator=(ListBriefSkillGroupsResponseBodyDataList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->description_ != nullptr
        && this->displayName_ != nullptr && this->instanceId_ != nullptr && this->mediaType_ != nullptr && this->phoneNumberCount_ != nullptr && this->skillGroupId_ != nullptr
        && this->skillGroupName_ != nullptr && this->userCount_ != nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ListBriefSkillGroupsResponseBodyDataList& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // displayName Field Functions 
    bool hasDisplayName() const { return this->displayName_ != nullptr;};
    void deleteDisplayName() { this->displayName_ = nullptr;};
    inline string displayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
    inline ListBriefSkillGroupsResponseBodyDataList& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ListBriefSkillGroupsResponseBodyDataList& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // mediaType Field Functions 
    bool hasMediaType() const { return this->mediaType_ != nullptr;};
    void deleteMediaType() { this->mediaType_ = nullptr;};
    inline string mediaType() const { DARABONBA_PTR_GET_DEFAULT(mediaType_, "") };
    inline ListBriefSkillGroupsResponseBodyDataList& setMediaType(string mediaType) { DARABONBA_PTR_SET_VALUE(mediaType_, mediaType) };


    // phoneNumberCount Field Functions 
    bool hasPhoneNumberCount() const { return this->phoneNumberCount_ != nullptr;};
    void deletePhoneNumberCount() { this->phoneNumberCount_ = nullptr;};
    inline int32_t phoneNumberCount() const { DARABONBA_PTR_GET_DEFAULT(phoneNumberCount_, 0) };
    inline ListBriefSkillGroupsResponseBodyDataList& setPhoneNumberCount(int32_t phoneNumberCount) { DARABONBA_PTR_SET_VALUE(phoneNumberCount_, phoneNumberCount) };


    // skillGroupId Field Functions 
    bool hasSkillGroupId() const { return this->skillGroupId_ != nullptr;};
    void deleteSkillGroupId() { this->skillGroupId_ = nullptr;};
    inline string skillGroupId() const { DARABONBA_PTR_GET_DEFAULT(skillGroupId_, "") };
    inline ListBriefSkillGroupsResponseBodyDataList& setSkillGroupId(string skillGroupId) { DARABONBA_PTR_SET_VALUE(skillGroupId_, skillGroupId) };


    // skillGroupName Field Functions 
    bool hasSkillGroupName() const { return this->skillGroupName_ != nullptr;};
    void deleteSkillGroupName() { this->skillGroupName_ = nullptr;};
    inline string skillGroupName() const { DARABONBA_PTR_GET_DEFAULT(skillGroupName_, "") };
    inline ListBriefSkillGroupsResponseBodyDataList& setSkillGroupName(string skillGroupName) { DARABONBA_PTR_SET_VALUE(skillGroupName_, skillGroupName) };


    // userCount Field Functions 
    bool hasUserCount() const { return this->userCount_ != nullptr;};
    void deleteUserCount() { this->userCount_ = nullptr;};
    inline int32_t userCount() const { DARABONBA_PTR_GET_DEFAULT(userCount_, 0) };
    inline ListBriefSkillGroupsResponseBodyDataList& setUserCount(int32_t userCount) { DARABONBA_PTR_SET_VALUE(userCount_, userCount) };


  protected:
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<string> displayName_ = nullptr;
    std::shared_ptr<string> instanceId_ = nullptr;
    std::shared_ptr<string> mediaType_ = nullptr;
    std::shared_ptr<int32_t> phoneNumberCount_ = nullptr;
    std::shared_ptr<string> skillGroupId_ = nullptr;
    std::shared_ptr<string> skillGroupName_ = nullptr;
    std::shared_ptr<int32_t> userCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CCC20200701
#endif
