// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEDATABATCHINGESTIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEDATABATCHINGESTIONREQUEST_HPP_
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
  class UpdateDataBatchIngestionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateDataBatchIngestionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AutoScanNew, autoScanNew_);
      DARABONBA_PTR_TO_JSON(DataBatchIngestionMode, dataBatchIngestionMode_);
      DARABONBA_PTR_TO_JSON(DataIngestionIds, dataIngestionIds_);
      DARABONBA_PTR_TO_JSON(DataSourceRecognizeEnabled, dataSourceRecognizeEnabled_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(LogUserIds, logUserIds_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RoleFor, roleFor_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateDataBatchIngestionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AutoScanNew, autoScanNew_);
      DARABONBA_PTR_FROM_JSON(DataBatchIngestionMode, dataBatchIngestionMode_);
      DARABONBA_PTR_FROM_JSON(DataIngestionIds, dataIngestionIds_);
      DARABONBA_PTR_FROM_JSON(DataSourceRecognizeEnabled, dataSourceRecognizeEnabled_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(LogUserIds, logUserIds_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RoleFor, roleFor_);
    };
    UpdateDataBatchIngestionRequest() = default ;
    UpdateDataBatchIngestionRequest(const UpdateDataBatchIngestionRequest &) = default ;
    UpdateDataBatchIngestionRequest(UpdateDataBatchIngestionRequest &&) = default ;
    UpdateDataBatchIngestionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateDataBatchIngestionRequest() = default ;
    UpdateDataBatchIngestionRequest& operator=(const UpdateDataBatchIngestionRequest &) = default ;
    UpdateDataBatchIngestionRequest& operator=(UpdateDataBatchIngestionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->autoScanNew_ == nullptr
        && return this->dataBatchIngestionMode_ == nullptr && return this->dataIngestionIds_ == nullptr && return this->dataSourceRecognizeEnabled_ == nullptr && return this->lang_ == nullptr && return this->logUserIds_ == nullptr
        && return this->regionId_ == nullptr && return this->roleFor_ == nullptr; };
    // autoScanNew Field Functions 
    bool hasAutoScanNew() const { return this->autoScanNew_ != nullptr;};
    void deleteAutoScanNew() { this->autoScanNew_ = nullptr;};
    inline string autoScanNew() const { DARABONBA_PTR_GET_DEFAULT(autoScanNew_, "") };
    inline UpdateDataBatchIngestionRequest& setAutoScanNew(string autoScanNew) { DARABONBA_PTR_SET_VALUE(autoScanNew_, autoScanNew) };


    // dataBatchIngestionMode Field Functions 
    bool hasDataBatchIngestionMode() const { return this->dataBatchIngestionMode_ != nullptr;};
    void deleteDataBatchIngestionMode() { this->dataBatchIngestionMode_ = nullptr;};
    inline string dataBatchIngestionMode() const { DARABONBA_PTR_GET_DEFAULT(dataBatchIngestionMode_, "") };
    inline UpdateDataBatchIngestionRequest& setDataBatchIngestionMode(string dataBatchIngestionMode) { DARABONBA_PTR_SET_VALUE(dataBatchIngestionMode_, dataBatchIngestionMode) };


    // dataIngestionIds Field Functions 
    bool hasDataIngestionIds() const { return this->dataIngestionIds_ != nullptr;};
    void deleteDataIngestionIds() { this->dataIngestionIds_ = nullptr;};
    inline const vector<string> & dataIngestionIds() const { DARABONBA_PTR_GET_CONST(dataIngestionIds_, vector<string>) };
    inline vector<string> dataIngestionIds() { DARABONBA_PTR_GET(dataIngestionIds_, vector<string>) };
    inline UpdateDataBatchIngestionRequest& setDataIngestionIds(const vector<string> & dataIngestionIds) { DARABONBA_PTR_SET_VALUE(dataIngestionIds_, dataIngestionIds) };
    inline UpdateDataBatchIngestionRequest& setDataIngestionIds(vector<string> && dataIngestionIds) { DARABONBA_PTR_SET_RVALUE(dataIngestionIds_, dataIngestionIds) };


    // dataSourceRecognizeEnabled Field Functions 
    bool hasDataSourceRecognizeEnabled() const { return this->dataSourceRecognizeEnabled_ != nullptr;};
    void deleteDataSourceRecognizeEnabled() { this->dataSourceRecognizeEnabled_ = nullptr;};
    inline bool dataSourceRecognizeEnabled() const { DARABONBA_PTR_GET_DEFAULT(dataSourceRecognizeEnabled_, false) };
    inline UpdateDataBatchIngestionRequest& setDataSourceRecognizeEnabled(bool dataSourceRecognizeEnabled) { DARABONBA_PTR_SET_VALUE(dataSourceRecognizeEnabled_, dataSourceRecognizeEnabled) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string lang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline UpdateDataBatchIngestionRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // logUserIds Field Functions 
    bool hasLogUserIds() const { return this->logUserIds_ != nullptr;};
    void deleteLogUserIds() { this->logUserIds_ = nullptr;};
    inline const vector<int64_t> & logUserIds() const { DARABONBA_PTR_GET_CONST(logUserIds_, vector<int64_t>) };
    inline vector<int64_t> logUserIds() { DARABONBA_PTR_GET(logUserIds_, vector<int64_t>) };
    inline UpdateDataBatchIngestionRequest& setLogUserIds(const vector<int64_t> & logUserIds) { DARABONBA_PTR_SET_VALUE(logUserIds_, logUserIds) };
    inline UpdateDataBatchIngestionRequest& setLogUserIds(vector<int64_t> && logUserIds) { DARABONBA_PTR_SET_RVALUE(logUserIds_, logUserIds) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline UpdateDataBatchIngestionRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // roleFor Field Functions 
    bool hasRoleFor() const { return this->roleFor_ != nullptr;};
    void deleteRoleFor() { this->roleFor_ = nullptr;};
    inline int64_t roleFor() const { DARABONBA_PTR_GET_DEFAULT(roleFor_, 0L) };
    inline UpdateDataBatchIngestionRequest& setRoleFor(int64_t roleFor) { DARABONBA_PTR_SET_VALUE(roleFor_, roleFor) };


  protected:
    std::shared_ptr<string> autoScanNew_ = nullptr;
    std::shared_ptr<string> dataBatchIngestionMode_ = nullptr;
    std::shared_ptr<vector<string>> dataIngestionIds_ = nullptr;
    std::shared_ptr<bool> dataSourceRecognizeEnabled_ = nullptr;
    std::shared_ptr<string> lang_ = nullptr;
    std::shared_ptr<vector<int64_t>> logUserIds_ = nullptr;
    std::shared_ptr<string> regionId_ = nullptr;
    std::shared_ptr<int64_t> roleFor_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudSiem20241212
#endif
