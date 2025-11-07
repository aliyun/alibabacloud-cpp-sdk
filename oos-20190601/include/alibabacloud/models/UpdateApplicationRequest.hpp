// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEAPPLICATIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEAPPLICATIONREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/UpdateApplicationRequestAlarmConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Oos20190601
{
namespace Models
{
  class UpdateApplicationRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateApplicationRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AlarmConfig, alarmConfig_);
      DARABONBA_PTR_TO_JSON(DeleteAlarmRulesBeforeUpdate, deleteAlarmRulesBeforeUpdate_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_ANY_TO_JSON(Tags, tags_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateApplicationRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AlarmConfig, alarmConfig_);
      DARABONBA_PTR_FROM_JSON(DeleteAlarmRulesBeforeUpdate, deleteAlarmRulesBeforeUpdate_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_ANY_FROM_JSON(Tags, tags_);
    };
    UpdateApplicationRequest() = default ;
    UpdateApplicationRequest(const UpdateApplicationRequest &) = default ;
    UpdateApplicationRequest(UpdateApplicationRequest &&) = default ;
    UpdateApplicationRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateApplicationRequest() = default ;
    UpdateApplicationRequest& operator=(const UpdateApplicationRequest &) = default ;
    UpdateApplicationRequest& operator=(UpdateApplicationRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->alarmConfig_ == nullptr
        && return this->deleteAlarmRulesBeforeUpdate_ == nullptr && return this->description_ == nullptr && return this->name_ == nullptr && return this->regionId_ == nullptr && return this->tags_ == nullptr; };
    // alarmConfig Field Functions 
    bool hasAlarmConfig() const { return this->alarmConfig_ != nullptr;};
    void deleteAlarmConfig() { this->alarmConfig_ = nullptr;};
    inline const UpdateApplicationRequestAlarmConfig & alarmConfig() const { DARABONBA_PTR_GET_CONST(alarmConfig_, UpdateApplicationRequestAlarmConfig) };
    inline UpdateApplicationRequestAlarmConfig alarmConfig() { DARABONBA_PTR_GET(alarmConfig_, UpdateApplicationRequestAlarmConfig) };
    inline UpdateApplicationRequest& setAlarmConfig(const UpdateApplicationRequestAlarmConfig & alarmConfig) { DARABONBA_PTR_SET_VALUE(alarmConfig_, alarmConfig) };
    inline UpdateApplicationRequest& setAlarmConfig(UpdateApplicationRequestAlarmConfig && alarmConfig) { DARABONBA_PTR_SET_RVALUE(alarmConfig_, alarmConfig) };


    // deleteAlarmRulesBeforeUpdate Field Functions 
    bool hasDeleteAlarmRulesBeforeUpdate() const { return this->deleteAlarmRulesBeforeUpdate_ != nullptr;};
    void deleteDeleteAlarmRulesBeforeUpdate() { this->deleteAlarmRulesBeforeUpdate_ = nullptr;};
    inline bool deleteAlarmRulesBeforeUpdate() const { DARABONBA_PTR_GET_DEFAULT(deleteAlarmRulesBeforeUpdate_, false) };
    inline UpdateApplicationRequest& setDeleteAlarmRulesBeforeUpdate(bool deleteAlarmRulesBeforeUpdate) { DARABONBA_PTR_SET_VALUE(deleteAlarmRulesBeforeUpdate_, deleteAlarmRulesBeforeUpdate) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline UpdateApplicationRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline UpdateApplicationRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline UpdateApplicationRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline     const Darabonba::Json & tags() const { DARABONBA_GET(tags_) };
    Darabonba::Json & tags() { DARABONBA_GET(tags_) };
    inline UpdateApplicationRequest& setTags(const Darabonba::Json & tags) { DARABONBA_SET_VALUE(tags_, tags) };
    inline UpdateApplicationRequest& setTags(Darabonba::Json & tags) { DARABONBA_SET_RVALUE(tags_, tags) };


  protected:
    // The configurations of application alerts.
    std::shared_ptr<UpdateApplicationRequestAlarmConfig> alarmConfig_ = nullptr;
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
    Darabonba::Json tags_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Oos20190601
#endif
