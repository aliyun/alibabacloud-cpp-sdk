// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEDATASOURCETEMPLATESHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEDATASOURCETEMPLATESHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudSiem20241212
{
namespace Models
{
  class UpdateDataSourceTemplateShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateDataSourceTemplateShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AutoScanNew, autoScanNew_);
      DARABONBA_PTR_TO_JSON(DataSourceRecognizeEnabled, dataSourceRecognizeEnabled_);
      DARABONBA_PTR_TO_JSON(DataSourceTemplateId, dataSourceTemplateId_);
      DARABONBA_PTR_TO_JSON(DataSourceTemplateName, dataSourceTemplateName_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(LogProjectPattern, logProjectPattern_);
      DARABONBA_PTR_TO_JSON(LogRegionIds, logRegionIds_);
      DARABONBA_PTR_TO_JSON(LogStorePattern, logStorePattern_);
      DARABONBA_PTR_TO_JSON(LogUserIds, logUserIdsShrink_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RoleFor, roleFor_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateDataSourceTemplateShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AutoScanNew, autoScanNew_);
      DARABONBA_PTR_FROM_JSON(DataSourceRecognizeEnabled, dataSourceRecognizeEnabled_);
      DARABONBA_PTR_FROM_JSON(DataSourceTemplateId, dataSourceTemplateId_);
      DARABONBA_PTR_FROM_JSON(DataSourceTemplateName, dataSourceTemplateName_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(LogProjectPattern, logProjectPattern_);
      DARABONBA_PTR_FROM_JSON(LogRegionIds, logRegionIds_);
      DARABONBA_PTR_FROM_JSON(LogStorePattern, logStorePattern_);
      DARABONBA_PTR_FROM_JSON(LogUserIds, logUserIdsShrink_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RoleFor, roleFor_);
    };
    UpdateDataSourceTemplateShrinkRequest() = default ;
    UpdateDataSourceTemplateShrinkRequest(const UpdateDataSourceTemplateShrinkRequest &) = default ;
    UpdateDataSourceTemplateShrinkRequest(UpdateDataSourceTemplateShrinkRequest &&) = default ;
    UpdateDataSourceTemplateShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateDataSourceTemplateShrinkRequest() = default ;
    UpdateDataSourceTemplateShrinkRequest& operator=(const UpdateDataSourceTemplateShrinkRequest &) = default ;
    UpdateDataSourceTemplateShrinkRequest& operator=(UpdateDataSourceTemplateShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->autoScanNew_ == nullptr
        && this->dataSourceRecognizeEnabled_ == nullptr && this->dataSourceTemplateId_ == nullptr && this->dataSourceTemplateName_ == nullptr && this->lang_ == nullptr && this->logProjectPattern_ == nullptr
        && this->logRegionIds_ == nullptr && this->logStorePattern_ == nullptr && this->logUserIdsShrink_ == nullptr && this->regionId_ == nullptr && this->roleFor_ == nullptr; };
    // autoScanNew Field Functions 
    bool hasAutoScanNew() const { return this->autoScanNew_ != nullptr;};
    void deleteAutoScanNew() { this->autoScanNew_ = nullptr;};
    inline string getAutoScanNew() const { DARABONBA_PTR_GET_DEFAULT(autoScanNew_, "") };
    inline UpdateDataSourceTemplateShrinkRequest& setAutoScanNew(string autoScanNew) { DARABONBA_PTR_SET_VALUE(autoScanNew_, autoScanNew) };


    // dataSourceRecognizeEnabled Field Functions 
    bool hasDataSourceRecognizeEnabled() const { return this->dataSourceRecognizeEnabled_ != nullptr;};
    void deleteDataSourceRecognizeEnabled() { this->dataSourceRecognizeEnabled_ = nullptr;};
    inline bool getDataSourceRecognizeEnabled() const { DARABONBA_PTR_GET_DEFAULT(dataSourceRecognizeEnabled_, false) };
    inline UpdateDataSourceTemplateShrinkRequest& setDataSourceRecognizeEnabled(bool dataSourceRecognizeEnabled) { DARABONBA_PTR_SET_VALUE(dataSourceRecognizeEnabled_, dataSourceRecognizeEnabled) };


    // dataSourceTemplateId Field Functions 
    bool hasDataSourceTemplateId() const { return this->dataSourceTemplateId_ != nullptr;};
    void deleteDataSourceTemplateId() { this->dataSourceTemplateId_ = nullptr;};
    inline string getDataSourceTemplateId() const { DARABONBA_PTR_GET_DEFAULT(dataSourceTemplateId_, "") };
    inline UpdateDataSourceTemplateShrinkRequest& setDataSourceTemplateId(string dataSourceTemplateId) { DARABONBA_PTR_SET_VALUE(dataSourceTemplateId_, dataSourceTemplateId) };


    // dataSourceTemplateName Field Functions 
    bool hasDataSourceTemplateName() const { return this->dataSourceTemplateName_ != nullptr;};
    void deleteDataSourceTemplateName() { this->dataSourceTemplateName_ = nullptr;};
    inline string getDataSourceTemplateName() const { DARABONBA_PTR_GET_DEFAULT(dataSourceTemplateName_, "") };
    inline UpdateDataSourceTemplateShrinkRequest& setDataSourceTemplateName(string dataSourceTemplateName) { DARABONBA_PTR_SET_VALUE(dataSourceTemplateName_, dataSourceTemplateName) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline UpdateDataSourceTemplateShrinkRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // logProjectPattern Field Functions 
    bool hasLogProjectPattern() const { return this->logProjectPattern_ != nullptr;};
    void deleteLogProjectPattern() { this->logProjectPattern_ = nullptr;};
    inline string getLogProjectPattern() const { DARABONBA_PTR_GET_DEFAULT(logProjectPattern_, "") };
    inline UpdateDataSourceTemplateShrinkRequest& setLogProjectPattern(string logProjectPattern) { DARABONBA_PTR_SET_VALUE(logProjectPattern_, logProjectPattern) };


    // logRegionIds Field Functions 
    bool hasLogRegionIds() const { return this->logRegionIds_ != nullptr;};
    void deleteLogRegionIds() { this->logRegionIds_ = nullptr;};
    inline string getLogRegionIds() const { DARABONBA_PTR_GET_DEFAULT(logRegionIds_, "") };
    inline UpdateDataSourceTemplateShrinkRequest& setLogRegionIds(string logRegionIds) { DARABONBA_PTR_SET_VALUE(logRegionIds_, logRegionIds) };


    // logStorePattern Field Functions 
    bool hasLogStorePattern() const { return this->logStorePattern_ != nullptr;};
    void deleteLogStorePattern() { this->logStorePattern_ = nullptr;};
    inline string getLogStorePattern() const { DARABONBA_PTR_GET_DEFAULT(logStorePattern_, "") };
    inline UpdateDataSourceTemplateShrinkRequest& setLogStorePattern(string logStorePattern) { DARABONBA_PTR_SET_VALUE(logStorePattern_, logStorePattern) };


    // logUserIdsShrink Field Functions 
    bool hasLogUserIdsShrink() const { return this->logUserIdsShrink_ != nullptr;};
    void deleteLogUserIdsShrink() { this->logUserIdsShrink_ = nullptr;};
    inline string getLogUserIdsShrink() const { DARABONBA_PTR_GET_DEFAULT(logUserIdsShrink_, "") };
    inline UpdateDataSourceTemplateShrinkRequest& setLogUserIdsShrink(string logUserIdsShrink) { DARABONBA_PTR_SET_VALUE(logUserIdsShrink_, logUserIdsShrink) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline UpdateDataSourceTemplateShrinkRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // roleFor Field Functions 
    bool hasRoleFor() const { return this->roleFor_ != nullptr;};
    void deleteRoleFor() { this->roleFor_ = nullptr;};
    inline int64_t getRoleFor() const { DARABONBA_PTR_GET_DEFAULT(roleFor_, 0L) };
    inline UpdateDataSourceTemplateShrinkRequest& setRoleFor(int64_t roleFor) { DARABONBA_PTR_SET_VALUE(roleFor_, roleFor) };


  protected:
    shared_ptr<string> autoScanNew_ {};
    shared_ptr<bool> dataSourceRecognizeEnabled_ {};
    shared_ptr<string> dataSourceTemplateId_ {};
    shared_ptr<string> dataSourceTemplateName_ {};
    shared_ptr<string> lang_ {};
    shared_ptr<string> logProjectPattern_ {};
    shared_ptr<string> logRegionIds_ {};
    shared_ptr<string> logStorePattern_ {};
    shared_ptr<string> logUserIdsShrink_ {};
    shared_ptr<string> regionId_ {};
    shared_ptr<int64_t> roleFor_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudSiem20241212
#endif
