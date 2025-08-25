// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTFLASHSMSSETTINGSSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTFLASHSMSSETTINGSSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CCC20200701
{
namespace Models
{
  class ListFlashSmsSettingsShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListFlashSmsSettingsShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(SkillGroupIdList, skillGroupIdListShrink_);
      DARABONBA_PTR_TO_JSON(SkillGroupName, skillGroupName_);
    };
    friend void from_json(const Darabonba::Json& j, ListFlashSmsSettingsShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(SkillGroupIdList, skillGroupIdListShrink_);
      DARABONBA_PTR_FROM_JSON(SkillGroupName, skillGroupName_);
    };
    ListFlashSmsSettingsShrinkRequest() = default ;
    ListFlashSmsSettingsShrinkRequest(const ListFlashSmsSettingsShrinkRequest &) = default ;
    ListFlashSmsSettingsShrinkRequest(ListFlashSmsSettingsShrinkRequest &&) = default ;
    ListFlashSmsSettingsShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListFlashSmsSettingsShrinkRequest() = default ;
    ListFlashSmsSettingsShrinkRequest& operator=(const ListFlashSmsSettingsShrinkRequest &) = default ;
    ListFlashSmsSettingsShrinkRequest& operator=(ListFlashSmsSettingsShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->instanceId_ != nullptr
        && this->pageNumber_ != nullptr && this->pageSize_ != nullptr && this->skillGroupIdListShrink_ != nullptr && this->skillGroupName_ != nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ListFlashSmsSettingsShrinkRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListFlashSmsSettingsShrinkRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListFlashSmsSettingsShrinkRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // skillGroupIdListShrink Field Functions 
    bool hasSkillGroupIdListShrink() const { return this->skillGroupIdListShrink_ != nullptr;};
    void deleteSkillGroupIdListShrink() { this->skillGroupIdListShrink_ = nullptr;};
    inline string skillGroupIdListShrink() const { DARABONBA_PTR_GET_DEFAULT(skillGroupIdListShrink_, "") };
    inline ListFlashSmsSettingsShrinkRequest& setSkillGroupIdListShrink(string skillGroupIdListShrink) { DARABONBA_PTR_SET_VALUE(skillGroupIdListShrink_, skillGroupIdListShrink) };


    // skillGroupName Field Functions 
    bool hasSkillGroupName() const { return this->skillGroupName_ != nullptr;};
    void deleteSkillGroupName() { this->skillGroupName_ = nullptr;};
    inline string skillGroupName() const { DARABONBA_PTR_GET_DEFAULT(skillGroupName_, "") };
    inline ListFlashSmsSettingsShrinkRequest& setSkillGroupName(string skillGroupName) { DARABONBA_PTR_SET_VALUE(skillGroupName_, skillGroupName) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    std::shared_ptr<string> skillGroupIdListShrink_ = nullptr;
    std::shared_ptr<string> skillGroupName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CCC20200701
#endif
