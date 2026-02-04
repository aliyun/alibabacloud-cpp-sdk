// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEDATABATCHINGESTIONSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEDATABATCHINGESTIONSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudSiem20241212
{
namespace Models
{
  class UpdateDataBatchIngestionShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateDataBatchIngestionShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AutoScanNew, autoScanNew_);
      DARABONBA_PTR_TO_JSON(DataBatchIngestionMode, dataBatchIngestionMode_);
      DARABONBA_PTR_TO_JSON(DataIngestionIds, dataIngestionIdsShrink_);
      DARABONBA_PTR_TO_JSON(DataSourceRecognizeEnabled, dataSourceRecognizeEnabled_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(LogUserIds, logUserIdsShrink_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RoleFor, roleFor_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateDataBatchIngestionShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AutoScanNew, autoScanNew_);
      DARABONBA_PTR_FROM_JSON(DataBatchIngestionMode, dataBatchIngestionMode_);
      DARABONBA_PTR_FROM_JSON(DataIngestionIds, dataIngestionIdsShrink_);
      DARABONBA_PTR_FROM_JSON(DataSourceRecognizeEnabled, dataSourceRecognizeEnabled_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(LogUserIds, logUserIdsShrink_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RoleFor, roleFor_);
    };
    UpdateDataBatchIngestionShrinkRequest() = default ;
    UpdateDataBatchIngestionShrinkRequest(const UpdateDataBatchIngestionShrinkRequest &) = default ;
    UpdateDataBatchIngestionShrinkRequest(UpdateDataBatchIngestionShrinkRequest &&) = default ;
    UpdateDataBatchIngestionShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateDataBatchIngestionShrinkRequest() = default ;
    UpdateDataBatchIngestionShrinkRequest& operator=(const UpdateDataBatchIngestionShrinkRequest &) = default ;
    UpdateDataBatchIngestionShrinkRequest& operator=(UpdateDataBatchIngestionShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->autoScanNew_ == nullptr
        && this->dataBatchIngestionMode_ == nullptr && this->dataIngestionIdsShrink_ == nullptr && this->dataSourceRecognizeEnabled_ == nullptr && this->lang_ == nullptr && this->logUserIdsShrink_ == nullptr
        && this->regionId_ == nullptr && this->roleFor_ == nullptr; };
    // autoScanNew Field Functions 
    bool hasAutoScanNew() const { return this->autoScanNew_ != nullptr;};
    void deleteAutoScanNew() { this->autoScanNew_ = nullptr;};
    inline string getAutoScanNew() const { DARABONBA_PTR_GET_DEFAULT(autoScanNew_, "") };
    inline UpdateDataBatchIngestionShrinkRequest& setAutoScanNew(string autoScanNew) { DARABONBA_PTR_SET_VALUE(autoScanNew_, autoScanNew) };


    // dataBatchIngestionMode Field Functions 
    bool hasDataBatchIngestionMode() const { return this->dataBatchIngestionMode_ != nullptr;};
    void deleteDataBatchIngestionMode() { this->dataBatchIngestionMode_ = nullptr;};
    inline string getDataBatchIngestionMode() const { DARABONBA_PTR_GET_DEFAULT(dataBatchIngestionMode_, "") };
    inline UpdateDataBatchIngestionShrinkRequest& setDataBatchIngestionMode(string dataBatchIngestionMode) { DARABONBA_PTR_SET_VALUE(dataBatchIngestionMode_, dataBatchIngestionMode) };


    // dataIngestionIdsShrink Field Functions 
    bool hasDataIngestionIdsShrink() const { return this->dataIngestionIdsShrink_ != nullptr;};
    void deleteDataIngestionIdsShrink() { this->dataIngestionIdsShrink_ = nullptr;};
    inline string getDataIngestionIdsShrink() const { DARABONBA_PTR_GET_DEFAULT(dataIngestionIdsShrink_, "") };
    inline UpdateDataBatchIngestionShrinkRequest& setDataIngestionIdsShrink(string dataIngestionIdsShrink) { DARABONBA_PTR_SET_VALUE(dataIngestionIdsShrink_, dataIngestionIdsShrink) };


    // dataSourceRecognizeEnabled Field Functions 
    bool hasDataSourceRecognizeEnabled() const { return this->dataSourceRecognizeEnabled_ != nullptr;};
    void deleteDataSourceRecognizeEnabled() { this->dataSourceRecognizeEnabled_ = nullptr;};
    inline bool getDataSourceRecognizeEnabled() const { DARABONBA_PTR_GET_DEFAULT(dataSourceRecognizeEnabled_, false) };
    inline UpdateDataBatchIngestionShrinkRequest& setDataSourceRecognizeEnabled(bool dataSourceRecognizeEnabled) { DARABONBA_PTR_SET_VALUE(dataSourceRecognizeEnabled_, dataSourceRecognizeEnabled) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline UpdateDataBatchIngestionShrinkRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // logUserIdsShrink Field Functions 
    bool hasLogUserIdsShrink() const { return this->logUserIdsShrink_ != nullptr;};
    void deleteLogUserIdsShrink() { this->logUserIdsShrink_ = nullptr;};
    inline string getLogUserIdsShrink() const { DARABONBA_PTR_GET_DEFAULT(logUserIdsShrink_, "") };
    inline UpdateDataBatchIngestionShrinkRequest& setLogUserIdsShrink(string logUserIdsShrink) { DARABONBA_PTR_SET_VALUE(logUserIdsShrink_, logUserIdsShrink) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline UpdateDataBatchIngestionShrinkRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // roleFor Field Functions 
    bool hasRoleFor() const { return this->roleFor_ != nullptr;};
    void deleteRoleFor() { this->roleFor_ = nullptr;};
    inline int64_t getRoleFor() const { DARABONBA_PTR_GET_DEFAULT(roleFor_, 0L) };
    inline UpdateDataBatchIngestionShrinkRequest& setRoleFor(int64_t roleFor) { DARABONBA_PTR_SET_VALUE(roleFor_, roleFor) };


  protected:
    shared_ptr<string> autoScanNew_ {};
    shared_ptr<string> dataBatchIngestionMode_ {};
    shared_ptr<string> dataIngestionIdsShrink_ {};
    shared_ptr<bool> dataSourceRecognizeEnabled_ {};
    shared_ptr<string> lang_ {};
    shared_ptr<string> logUserIdsShrink_ {};
    shared_ptr<string> regionId_ {};
    shared_ptr<int64_t> roleFor_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudSiem20241212
#endif
