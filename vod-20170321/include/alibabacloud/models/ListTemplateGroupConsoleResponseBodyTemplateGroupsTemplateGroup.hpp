// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTEMPLATEGROUPCONSOLERESPONSEBODYTEMPLATEGROUPSTEMPLATEGROUP_HPP_
#define ALIBABACLOUD_MODELS_LISTTEMPLATEGROUPCONSOLERESPONSEBODYTEMPLATEGROUPSTEMPLATEGROUP_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class ListTemplateGroupConsoleResponseBodyTemplateGroupsTemplateGroup : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTemplateGroupConsoleResponseBodyTemplateGroupsTemplateGroup& obj) { 
      DARABONBA_PTR_TO_JSON(DefaultGroup, defaultGroup_);
      DARABONBA_PTR_TO_JSON(GroupId, groupId_);
      DARABONBA_PTR_TO_JSON(GroupSymbol, groupSymbol_);
      DARABONBA_PTR_TO_JSON(GroupType, groupType_);
      DARABONBA_PTR_TO_JSON(IsLocked, isLocked_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(TranscodeMode, transcodeMode_);
    };
    friend void from_json(const Darabonba::Json& j, ListTemplateGroupConsoleResponseBodyTemplateGroupsTemplateGroup& obj) { 
      DARABONBA_PTR_FROM_JSON(DefaultGroup, defaultGroup_);
      DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
      DARABONBA_PTR_FROM_JSON(GroupSymbol, groupSymbol_);
      DARABONBA_PTR_FROM_JSON(GroupType, groupType_);
      DARABONBA_PTR_FROM_JSON(IsLocked, isLocked_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(TranscodeMode, transcodeMode_);
    };
    ListTemplateGroupConsoleResponseBodyTemplateGroupsTemplateGroup() = default ;
    ListTemplateGroupConsoleResponseBodyTemplateGroupsTemplateGroup(const ListTemplateGroupConsoleResponseBodyTemplateGroupsTemplateGroup &) = default ;
    ListTemplateGroupConsoleResponseBodyTemplateGroupsTemplateGroup(ListTemplateGroupConsoleResponseBodyTemplateGroupsTemplateGroup &&) = default ;
    ListTemplateGroupConsoleResponseBodyTemplateGroupsTemplateGroup(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTemplateGroupConsoleResponseBodyTemplateGroupsTemplateGroup() = default ;
    ListTemplateGroupConsoleResponseBodyTemplateGroupsTemplateGroup& operator=(const ListTemplateGroupConsoleResponseBodyTemplateGroupsTemplateGroup &) = default ;
    ListTemplateGroupConsoleResponseBodyTemplateGroupsTemplateGroup& operator=(ListTemplateGroupConsoleResponseBodyTemplateGroupsTemplateGroup &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->defaultGroup_ != nullptr
        && this->groupId_ != nullptr && this->groupSymbol_ != nullptr && this->groupType_ != nullptr && this->isLocked_ != nullptr && this->name_ != nullptr
        && this->status_ != nullptr && this->transcodeMode_ != nullptr; };
    // defaultGroup Field Functions 
    bool hasDefaultGroup() const { return this->defaultGroup_ != nullptr;};
    void deleteDefaultGroup() { this->defaultGroup_ = nullptr;};
    inline string defaultGroup() const { DARABONBA_PTR_GET_DEFAULT(defaultGroup_, "") };
    inline ListTemplateGroupConsoleResponseBodyTemplateGroupsTemplateGroup& setDefaultGroup(string defaultGroup) { DARABONBA_PTR_SET_VALUE(defaultGroup_, defaultGroup) };


    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline string groupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
    inline ListTemplateGroupConsoleResponseBodyTemplateGroupsTemplateGroup& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // groupSymbol Field Functions 
    bool hasGroupSymbol() const { return this->groupSymbol_ != nullptr;};
    void deleteGroupSymbol() { this->groupSymbol_ = nullptr;};
    inline string groupSymbol() const { DARABONBA_PTR_GET_DEFAULT(groupSymbol_, "") };
    inline ListTemplateGroupConsoleResponseBodyTemplateGroupsTemplateGroup& setGroupSymbol(string groupSymbol) { DARABONBA_PTR_SET_VALUE(groupSymbol_, groupSymbol) };


    // groupType Field Functions 
    bool hasGroupType() const { return this->groupType_ != nullptr;};
    void deleteGroupType() { this->groupType_ = nullptr;};
    inline string groupType() const { DARABONBA_PTR_GET_DEFAULT(groupType_, "") };
    inline ListTemplateGroupConsoleResponseBodyTemplateGroupsTemplateGroup& setGroupType(string groupType) { DARABONBA_PTR_SET_VALUE(groupType_, groupType) };


    // isLocked Field Functions 
    bool hasIsLocked() const { return this->isLocked_ != nullptr;};
    void deleteIsLocked() { this->isLocked_ = nullptr;};
    inline string isLocked() const { DARABONBA_PTR_GET_DEFAULT(isLocked_, "") };
    inline ListTemplateGroupConsoleResponseBodyTemplateGroupsTemplateGroup& setIsLocked(string isLocked) { DARABONBA_PTR_SET_VALUE(isLocked_, isLocked) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListTemplateGroupConsoleResponseBodyTemplateGroupsTemplateGroup& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListTemplateGroupConsoleResponseBodyTemplateGroupsTemplateGroup& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // transcodeMode Field Functions 
    bool hasTranscodeMode() const { return this->transcodeMode_ != nullptr;};
    void deleteTranscodeMode() { this->transcodeMode_ = nullptr;};
    inline string transcodeMode() const { DARABONBA_PTR_GET_DEFAULT(transcodeMode_, "") };
    inline ListTemplateGroupConsoleResponseBodyTemplateGroupsTemplateGroup& setTranscodeMode(string transcodeMode) { DARABONBA_PTR_SET_VALUE(transcodeMode_, transcodeMode) };


  protected:
    std::shared_ptr<string> defaultGroup_ = nullptr;
    std::shared_ptr<string> groupId_ = nullptr;
    std::shared_ptr<string> groupSymbol_ = nullptr;
    std::shared_ptr<string> groupType_ = nullptr;
    std::shared_ptr<string> isLocked_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<string> transcodeMode_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
