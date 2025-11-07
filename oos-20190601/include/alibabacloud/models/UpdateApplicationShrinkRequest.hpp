// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEAPPLICATIONSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEAPPLICATIONSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Oos20190601
{
namespace Models
{
  class UpdateApplicationShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateApplicationShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AlarmConfig, alarmConfigShrink_);
      DARABONBA_PTR_TO_JSON(DeleteAlarmRulesBeforeUpdate, deleteAlarmRulesBeforeUpdate_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(Tags, tagsShrink_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateApplicationShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AlarmConfig, alarmConfigShrink_);
      DARABONBA_PTR_FROM_JSON(DeleteAlarmRulesBeforeUpdate, deleteAlarmRulesBeforeUpdate_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(Tags, tagsShrink_);
    };
    UpdateApplicationShrinkRequest() = default ;
    UpdateApplicationShrinkRequest(const UpdateApplicationShrinkRequest &) = default ;
    UpdateApplicationShrinkRequest(UpdateApplicationShrinkRequest &&) = default ;
    UpdateApplicationShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateApplicationShrinkRequest() = default ;
    UpdateApplicationShrinkRequest& operator=(const UpdateApplicationShrinkRequest &) = default ;
    UpdateApplicationShrinkRequest& operator=(UpdateApplicationShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->alarmConfigShrink_ == nullptr
        && return this->deleteAlarmRulesBeforeUpdate_ == nullptr && return this->description_ == nullptr && return this->name_ == nullptr && return this->regionId_ == nullptr && return this->tagsShrink_ == nullptr; };
    // alarmConfigShrink Field Functions 
    bool hasAlarmConfigShrink() const { return this->alarmConfigShrink_ != nullptr;};
    void deleteAlarmConfigShrink() { this->alarmConfigShrink_ = nullptr;};
    inline string alarmConfigShrink() const { DARABONBA_PTR_GET_DEFAULT(alarmConfigShrink_, "") };
    inline UpdateApplicationShrinkRequest& setAlarmConfigShrink(string alarmConfigShrink) { DARABONBA_PTR_SET_VALUE(alarmConfigShrink_, alarmConfigShrink) };


    // deleteAlarmRulesBeforeUpdate Field Functions 
    bool hasDeleteAlarmRulesBeforeUpdate() const { return this->deleteAlarmRulesBeforeUpdate_ != nullptr;};
    void deleteDeleteAlarmRulesBeforeUpdate() { this->deleteAlarmRulesBeforeUpdate_ = nullptr;};
    inline bool deleteAlarmRulesBeforeUpdate() const { DARABONBA_PTR_GET_DEFAULT(deleteAlarmRulesBeforeUpdate_, false) };
    inline UpdateApplicationShrinkRequest& setDeleteAlarmRulesBeforeUpdate(bool deleteAlarmRulesBeforeUpdate) { DARABONBA_PTR_SET_VALUE(deleteAlarmRulesBeforeUpdate_, deleteAlarmRulesBeforeUpdate) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline UpdateApplicationShrinkRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline UpdateApplicationShrinkRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline UpdateApplicationShrinkRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // tagsShrink Field Functions 
    bool hasTagsShrink() const { return this->tagsShrink_ != nullptr;};
    void deleteTagsShrink() { this->tagsShrink_ = nullptr;};
    inline string tagsShrink() const { DARABONBA_PTR_GET_DEFAULT(tagsShrink_, "") };
    inline UpdateApplicationShrinkRequest& setTagsShrink(string tagsShrink) { DARABONBA_PTR_SET_VALUE(tagsShrink_, tagsShrink) };


  protected:
    // The configurations of application alerts.
    std::shared_ptr<string> alarmConfigShrink_ = nullptr;
    // Specifies whether to delete existing alert rules before applying the alert template. Default value: false.
    std::shared_ptr<bool> deleteAlarmRulesBeforeUpdate_ = nullptr;
    // The description to be updated for the application.
    std::shared_ptr<string> description_ = nullptr;
    // The application name.
    // 
    // This parameter is required.
    std::shared_ptr<string> name_ = nullptr;
    // The region ID. Set the value to cn-hangzhou.
    std::shared_ptr<string> regionId_ = nullptr;
    // The tags.
    std::shared_ptr<string> tagsShrink_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Oos20190601
#endif
