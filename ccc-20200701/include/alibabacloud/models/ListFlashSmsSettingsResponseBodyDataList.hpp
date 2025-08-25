// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTFLASHSMSSETTINGSRESPONSEBODYDATALIST_HPP_
#define ALIBABACLOUD_MODELS_LISTFLASHSMSSETTINGSRESPONSEBODYDATALIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CCC20200701
{
namespace Models
{
  class ListFlashSmsSettingsResponseBodyDataList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListFlashSmsSettingsResponseBodyDataList& obj) { 
      DARABONBA_PTR_TO_JSON(Enabled, enabled_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(SkillGroupId, skillGroupId_);
      DARABONBA_PTR_TO_JSON(SkillGroupName, skillGroupName_);
    };
    friend void from_json(const Darabonba::Json& j, ListFlashSmsSettingsResponseBodyDataList& obj) { 
      DARABONBA_PTR_FROM_JSON(Enabled, enabled_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(SkillGroupId, skillGroupId_);
      DARABONBA_PTR_FROM_JSON(SkillGroupName, skillGroupName_);
    };
    ListFlashSmsSettingsResponseBodyDataList() = default ;
    ListFlashSmsSettingsResponseBodyDataList(const ListFlashSmsSettingsResponseBodyDataList &) = default ;
    ListFlashSmsSettingsResponseBodyDataList(ListFlashSmsSettingsResponseBodyDataList &&) = default ;
    ListFlashSmsSettingsResponseBodyDataList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListFlashSmsSettingsResponseBodyDataList() = default ;
    ListFlashSmsSettingsResponseBodyDataList& operator=(const ListFlashSmsSettingsResponseBodyDataList &) = default ;
    ListFlashSmsSettingsResponseBodyDataList& operator=(ListFlashSmsSettingsResponseBodyDataList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->enabled_ != nullptr
        && this->instanceId_ != nullptr && this->skillGroupId_ != nullptr && this->skillGroupName_ != nullptr; };
    // enabled Field Functions 
    bool hasEnabled() const { return this->enabled_ != nullptr;};
    void deleteEnabled() { this->enabled_ = nullptr;};
    inline bool enabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, false) };
    inline ListFlashSmsSettingsResponseBodyDataList& setEnabled(bool enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ListFlashSmsSettingsResponseBodyDataList& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // skillGroupId Field Functions 
    bool hasSkillGroupId() const { return this->skillGroupId_ != nullptr;};
    void deleteSkillGroupId() { this->skillGroupId_ = nullptr;};
    inline string skillGroupId() const { DARABONBA_PTR_GET_DEFAULT(skillGroupId_, "") };
    inline ListFlashSmsSettingsResponseBodyDataList& setSkillGroupId(string skillGroupId) { DARABONBA_PTR_SET_VALUE(skillGroupId_, skillGroupId) };


    // skillGroupName Field Functions 
    bool hasSkillGroupName() const { return this->skillGroupName_ != nullptr;};
    void deleteSkillGroupName() { this->skillGroupName_ = nullptr;};
    inline string skillGroupName() const { DARABONBA_PTR_GET_DEFAULT(skillGroupName_, "") };
    inline ListFlashSmsSettingsResponseBodyDataList& setSkillGroupName(string skillGroupName) { DARABONBA_PTR_SET_VALUE(skillGroupName_, skillGroupName) };


  protected:
    std::shared_ptr<bool> enabled_ = nullptr;
    std::shared_ptr<string> instanceId_ = nullptr;
    std::shared_ptr<string> skillGroupId_ = nullptr;
    std::shared_ptr<string> skillGroupName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CCC20200701
#endif
