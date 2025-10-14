// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEDATASOURCETEMPLATEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEDATASOURCETEMPLATEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudSiem20241212
{
namespace Models
{
  class UpdateDataSourceTemplateRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateDataSourceTemplateRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AutoScanNew, autoScanNew_);
      DARABONBA_PTR_TO_JSON(DataSourceRecognizeEnabled, dataSourceRecognizeEnabled_);
      DARABONBA_PTR_TO_JSON(DataSourceTemplateId, dataSourceTemplateId_);
      DARABONBA_PTR_TO_JSON(DataSourceTemplateName, dataSourceTemplateName_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(LogProjectPattern, logProjectPattern_);
      DARABONBA_PTR_TO_JSON(LogRegionIds, logRegionIds_);
      DARABONBA_PTR_TO_JSON(LogStorePattern, logStorePattern_);
      DARABONBA_PTR_TO_JSON(LogUserIds, logUserIds_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RoleFor, roleFor_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateDataSourceTemplateRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AutoScanNew, autoScanNew_);
      DARABONBA_PTR_FROM_JSON(DataSourceRecognizeEnabled, dataSourceRecognizeEnabled_);
      DARABONBA_PTR_FROM_JSON(DataSourceTemplateId, dataSourceTemplateId_);
      DARABONBA_PTR_FROM_JSON(DataSourceTemplateName, dataSourceTemplateName_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(LogProjectPattern, logProjectPattern_);
      DARABONBA_PTR_FROM_JSON(LogRegionIds, logRegionIds_);
      DARABONBA_PTR_FROM_JSON(LogStorePattern, logStorePattern_);
      DARABONBA_PTR_FROM_JSON(LogUserIds, logUserIds_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RoleFor, roleFor_);
    };
    UpdateDataSourceTemplateRequest() = default ;
    UpdateDataSourceTemplateRequest(const UpdateDataSourceTemplateRequest &) = default ;
    UpdateDataSourceTemplateRequest(UpdateDataSourceTemplateRequest &&) = default ;
    UpdateDataSourceTemplateRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateDataSourceTemplateRequest() = default ;
    UpdateDataSourceTemplateRequest& operator=(const UpdateDataSourceTemplateRequest &) = default ;
    UpdateDataSourceTemplateRequest& operator=(UpdateDataSourceTemplateRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->autoScanNew_ == nullptr
        && return this->dataSourceRecognizeEnabled_ == nullptr && return this->dataSourceTemplateId_ == nullptr && return this->dataSourceTemplateName_ == nullptr && return this->lang_ == nullptr && return this->logProjectPattern_ == nullptr
        && return this->logRegionIds_ == nullptr && return this->logStorePattern_ == nullptr && return this->logUserIds_ == nullptr && return this->regionId_ == nullptr && return this->roleFor_ == nullptr; };
    // autoScanNew Field Functions 
    bool hasAutoScanNew() const { return this->autoScanNew_ != nullptr;};
    void deleteAutoScanNew() { this->autoScanNew_ = nullptr;};
    inline string autoScanNew() const { DARABONBA_PTR_GET_DEFAULT(autoScanNew_, "") };
    inline UpdateDataSourceTemplateRequest& setAutoScanNew(string autoScanNew) { DARABONBA_PTR_SET_VALUE(autoScanNew_, autoScanNew) };


    // dataSourceRecognizeEnabled Field Functions 
    bool hasDataSourceRecognizeEnabled() const { return this->dataSourceRecognizeEnabled_ != nullptr;};
    void deleteDataSourceRecognizeEnabled() { this->dataSourceRecognizeEnabled_ = nullptr;};
    inline bool dataSourceRecognizeEnabled() const { DARABONBA_PTR_GET_DEFAULT(dataSourceRecognizeEnabled_, false) };
    inline UpdateDataSourceTemplateRequest& setDataSourceRecognizeEnabled(bool dataSourceRecognizeEnabled) { DARABONBA_PTR_SET_VALUE(dataSourceRecognizeEnabled_, dataSourceRecognizeEnabled) };


    // dataSourceTemplateId Field Functions 
    bool hasDataSourceTemplateId() const { return this->dataSourceTemplateId_ != nullptr;};
    void deleteDataSourceTemplateId() { this->dataSourceTemplateId_ = nullptr;};
    inline string dataSourceTemplateId() const { DARABONBA_PTR_GET_DEFAULT(dataSourceTemplateId_, "") };
    inline UpdateDataSourceTemplateRequest& setDataSourceTemplateId(string dataSourceTemplateId) { DARABONBA_PTR_SET_VALUE(dataSourceTemplateId_, dataSourceTemplateId) };


    // dataSourceTemplateName Field Functions 
    bool hasDataSourceTemplateName() const { return this->dataSourceTemplateName_ != nullptr;};
    void deleteDataSourceTemplateName() { this->dataSourceTemplateName_ = nullptr;};
    inline string dataSourceTemplateName() const { DARABONBA_PTR_GET_DEFAULT(dataSourceTemplateName_, "") };
    inline UpdateDataSourceTemplateRequest& setDataSourceTemplateName(string dataSourceTemplateName) { DARABONBA_PTR_SET_VALUE(dataSourceTemplateName_, dataSourceTemplateName) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string lang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline UpdateDataSourceTemplateRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // logProjectPattern Field Functions 
    bool hasLogProjectPattern() const { return this->logProjectPattern_ != nullptr;};
    void deleteLogProjectPattern() { this->logProjectPattern_ = nullptr;};
    inline string logProjectPattern() const { DARABONBA_PTR_GET_DEFAULT(logProjectPattern_, "") };
    inline UpdateDataSourceTemplateRequest& setLogProjectPattern(string logProjectPattern) { DARABONBA_PTR_SET_VALUE(logProjectPattern_, logProjectPattern) };


    // logRegionIds Field Functions 
    bool hasLogRegionIds() const { return this->logRegionIds_ != nullptr;};
    void deleteLogRegionIds() { this->logRegionIds_ = nullptr;};
    inline string logRegionIds() const { DARABONBA_PTR_GET_DEFAULT(logRegionIds_, "") };
    inline UpdateDataSourceTemplateRequest& setLogRegionIds(string logRegionIds) { DARABONBA_PTR_SET_VALUE(logRegionIds_, logRegionIds) };


    // logStorePattern Field Functions 
    bool hasLogStorePattern() const { return this->logStorePattern_ != nullptr;};
    void deleteLogStorePattern() { this->logStorePattern_ = nullptr;};
    inline string logStorePattern() const { DARABONBA_PTR_GET_DEFAULT(logStorePattern_, "") };
    inline UpdateDataSourceTemplateRequest& setLogStorePattern(string logStorePattern) { DARABONBA_PTR_SET_VALUE(logStorePattern_, logStorePattern) };


    // logUserIds Field Functions 
    bool hasLogUserIds() const { return this->logUserIds_ != nullptr;};
    void deleteLogUserIds() { this->logUserIds_ = nullptr;};
    inline const vector<string> & logUserIds() const { DARABONBA_PTR_GET_CONST(logUserIds_, vector<string>) };
    inline vector<string> logUserIds() { DARABONBA_PTR_GET(logUserIds_, vector<string>) };
    inline UpdateDataSourceTemplateRequest& setLogUserIds(const vector<string> & logUserIds) { DARABONBA_PTR_SET_VALUE(logUserIds_, logUserIds) };
    inline UpdateDataSourceTemplateRequest& setLogUserIds(vector<string> && logUserIds) { DARABONBA_PTR_SET_RVALUE(logUserIds_, logUserIds) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline UpdateDataSourceTemplateRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // roleFor Field Functions 
    bool hasRoleFor() const { return this->roleFor_ != nullptr;};
    void deleteRoleFor() { this->roleFor_ = nullptr;};
    inline int64_t roleFor() const { DARABONBA_PTR_GET_DEFAULT(roleFor_, 0L) };
    inline UpdateDataSourceTemplateRequest& setRoleFor(int64_t roleFor) { DARABONBA_PTR_SET_VALUE(roleFor_, roleFor) };


  protected:
    std::shared_ptr<string> autoScanNew_ = nullptr;
    std::shared_ptr<bool> dataSourceRecognizeEnabled_ = nullptr;
    std::shared_ptr<string> dataSourceTemplateId_ = nullptr;
    std::shared_ptr<string> dataSourceTemplateName_ = nullptr;
    std::shared_ptr<string> lang_ = nullptr;
    std::shared_ptr<string> logProjectPattern_ = nullptr;
    std::shared_ptr<string> logRegionIds_ = nullptr;
    std::shared_ptr<string> logStorePattern_ = nullptr;
    std::shared_ptr<vector<string>> logUserIds_ = nullptr;
    std::shared_ptr<string> regionId_ = nullptr;
    std::shared_ptr<int64_t> roleFor_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudSiem20241212
#endif
