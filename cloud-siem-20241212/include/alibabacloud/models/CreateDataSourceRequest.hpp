// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEDATASOURCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEDATASOURCEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreateDataSourceRequestDataSourceStores.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudSiem20241212
{
namespace Models
{
  class CreateDataSourceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateDataSourceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DataSourceFrom, dataSourceFrom_);
      DARABONBA_PTR_TO_JSON(DataSourceIds, dataSourceIds_);
      DARABONBA_PTR_TO_JSON(DataSourceName, dataSourceName_);
      DARABONBA_PTR_TO_JSON(DataSourceRecognizeEnabled, dataSourceRecognizeEnabled_);
      DARABONBA_PTR_TO_JSON(DataSourceRecognizer, dataSourceRecognizer_);
      DARABONBA_PTR_TO_JSON(DataSourceReferences, dataSourceReferences_);
      DARABONBA_PTR_TO_JSON(DataSourceStores, dataSourceStores_);
      DARABONBA_PTR_TO_JSON(DataSourceTemplateId, dataSourceTemplateId_);
      DARABONBA_PTR_TO_JSON(DataSourceType, dataSourceType_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(LogProjectName, logProjectName_);
      DARABONBA_PTR_TO_JSON(LogRegionId, logRegionId_);
      DARABONBA_PTR_TO_JSON(LogStoreName, logStoreName_);
      DARABONBA_PTR_TO_JSON(LogUserId, logUserId_);
      DARABONBA_PTR_TO_JSON(Order, order_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RoleFor, roleFor_);
      DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
    };
    friend void from_json(const Darabonba::Json& j, CreateDataSourceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DataSourceFrom, dataSourceFrom_);
      DARABONBA_PTR_FROM_JSON(DataSourceIds, dataSourceIds_);
      DARABONBA_PTR_FROM_JSON(DataSourceName, dataSourceName_);
      DARABONBA_PTR_FROM_JSON(DataSourceRecognizeEnabled, dataSourceRecognizeEnabled_);
      DARABONBA_PTR_FROM_JSON(DataSourceRecognizer, dataSourceRecognizer_);
      DARABONBA_PTR_FROM_JSON(DataSourceReferences, dataSourceReferences_);
      DARABONBA_PTR_FROM_JSON(DataSourceStores, dataSourceStores_);
      DARABONBA_PTR_FROM_JSON(DataSourceTemplateId, dataSourceTemplateId_);
      DARABONBA_PTR_FROM_JSON(DataSourceType, dataSourceType_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(LogProjectName, logProjectName_);
      DARABONBA_PTR_FROM_JSON(LogRegionId, logRegionId_);
      DARABONBA_PTR_FROM_JSON(LogStoreName, logStoreName_);
      DARABONBA_PTR_FROM_JSON(LogUserId, logUserId_);
      DARABONBA_PTR_FROM_JSON(Order, order_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RoleFor, roleFor_);
      DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
    };
    CreateDataSourceRequest() = default ;
    CreateDataSourceRequest(const CreateDataSourceRequest &) = default ;
    CreateDataSourceRequest(CreateDataSourceRequest &&) = default ;
    CreateDataSourceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateDataSourceRequest() = default ;
    CreateDataSourceRequest& operator=(const CreateDataSourceRequest &) = default ;
    CreateDataSourceRequest& operator=(CreateDataSourceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dataSourceFrom_ == nullptr
        && return this->dataSourceIds_ == nullptr && return this->dataSourceName_ == nullptr && return this->dataSourceRecognizeEnabled_ == nullptr && return this->dataSourceRecognizer_ == nullptr && return this->dataSourceReferences_ == nullptr
        && return this->dataSourceStores_ == nullptr && return this->dataSourceTemplateId_ == nullptr && return this->dataSourceType_ == nullptr && return this->lang_ == nullptr && return this->logProjectName_ == nullptr
        && return this->logRegionId_ == nullptr && return this->logStoreName_ == nullptr && return this->logUserId_ == nullptr && return this->order_ == nullptr && return this->regionId_ == nullptr
        && return this->roleFor_ == nullptr && return this->updateTime_ == nullptr; };
    // dataSourceFrom Field Functions 
    bool hasDataSourceFrom() const { return this->dataSourceFrom_ != nullptr;};
    void deleteDataSourceFrom() { this->dataSourceFrom_ = nullptr;};
    inline string dataSourceFrom() const { DARABONBA_PTR_GET_DEFAULT(dataSourceFrom_, "") };
    inline CreateDataSourceRequest& setDataSourceFrom(string dataSourceFrom) { DARABONBA_PTR_SET_VALUE(dataSourceFrom_, dataSourceFrom) };


    // dataSourceIds Field Functions 
    bool hasDataSourceIds() const { return this->dataSourceIds_ != nullptr;};
    void deleteDataSourceIds() { this->dataSourceIds_ = nullptr;};
    inline const vector<string> & dataSourceIds() const { DARABONBA_PTR_GET_CONST(dataSourceIds_, vector<string>) };
    inline vector<string> dataSourceIds() { DARABONBA_PTR_GET(dataSourceIds_, vector<string>) };
    inline CreateDataSourceRequest& setDataSourceIds(const vector<string> & dataSourceIds) { DARABONBA_PTR_SET_VALUE(dataSourceIds_, dataSourceIds) };
    inline CreateDataSourceRequest& setDataSourceIds(vector<string> && dataSourceIds) { DARABONBA_PTR_SET_RVALUE(dataSourceIds_, dataSourceIds) };


    // dataSourceName Field Functions 
    bool hasDataSourceName() const { return this->dataSourceName_ != nullptr;};
    void deleteDataSourceName() { this->dataSourceName_ = nullptr;};
    inline string dataSourceName() const { DARABONBA_PTR_GET_DEFAULT(dataSourceName_, "") };
    inline CreateDataSourceRequest& setDataSourceName(string dataSourceName) { DARABONBA_PTR_SET_VALUE(dataSourceName_, dataSourceName) };


    // dataSourceRecognizeEnabled Field Functions 
    bool hasDataSourceRecognizeEnabled() const { return this->dataSourceRecognizeEnabled_ != nullptr;};
    void deleteDataSourceRecognizeEnabled() { this->dataSourceRecognizeEnabled_ = nullptr;};
    inline bool dataSourceRecognizeEnabled() const { DARABONBA_PTR_GET_DEFAULT(dataSourceRecognizeEnabled_, false) };
    inline CreateDataSourceRequest& setDataSourceRecognizeEnabled(bool dataSourceRecognizeEnabled) { DARABONBA_PTR_SET_VALUE(dataSourceRecognizeEnabled_, dataSourceRecognizeEnabled) };


    // dataSourceRecognizer Field Functions 
    bool hasDataSourceRecognizer() const { return this->dataSourceRecognizer_ != nullptr;};
    void deleteDataSourceRecognizer() { this->dataSourceRecognizer_ = nullptr;};
    inline string dataSourceRecognizer() const { DARABONBA_PTR_GET_DEFAULT(dataSourceRecognizer_, "") };
    inline CreateDataSourceRequest& setDataSourceRecognizer(string dataSourceRecognizer) { DARABONBA_PTR_SET_VALUE(dataSourceRecognizer_, dataSourceRecognizer) };


    // dataSourceReferences Field Functions 
    bool hasDataSourceReferences() const { return this->dataSourceReferences_ != nullptr;};
    void deleteDataSourceReferences() { this->dataSourceReferences_ = nullptr;};
    inline const vector<string> & dataSourceReferences() const { DARABONBA_PTR_GET_CONST(dataSourceReferences_, vector<string>) };
    inline vector<string> dataSourceReferences() { DARABONBA_PTR_GET(dataSourceReferences_, vector<string>) };
    inline CreateDataSourceRequest& setDataSourceReferences(const vector<string> & dataSourceReferences) { DARABONBA_PTR_SET_VALUE(dataSourceReferences_, dataSourceReferences) };
    inline CreateDataSourceRequest& setDataSourceReferences(vector<string> && dataSourceReferences) { DARABONBA_PTR_SET_RVALUE(dataSourceReferences_, dataSourceReferences) };


    // dataSourceStores Field Functions 
    bool hasDataSourceStores() const { return this->dataSourceStores_ != nullptr;};
    void deleteDataSourceStores() { this->dataSourceStores_ = nullptr;};
    inline const vector<CreateDataSourceRequestDataSourceStores> & dataSourceStores() const { DARABONBA_PTR_GET_CONST(dataSourceStores_, vector<CreateDataSourceRequestDataSourceStores>) };
    inline vector<CreateDataSourceRequestDataSourceStores> dataSourceStores() { DARABONBA_PTR_GET(dataSourceStores_, vector<CreateDataSourceRequestDataSourceStores>) };
    inline CreateDataSourceRequest& setDataSourceStores(const vector<CreateDataSourceRequestDataSourceStores> & dataSourceStores) { DARABONBA_PTR_SET_VALUE(dataSourceStores_, dataSourceStores) };
    inline CreateDataSourceRequest& setDataSourceStores(vector<CreateDataSourceRequestDataSourceStores> && dataSourceStores) { DARABONBA_PTR_SET_RVALUE(dataSourceStores_, dataSourceStores) };


    // dataSourceTemplateId Field Functions 
    bool hasDataSourceTemplateId() const { return this->dataSourceTemplateId_ != nullptr;};
    void deleteDataSourceTemplateId() { this->dataSourceTemplateId_ = nullptr;};
    inline string dataSourceTemplateId() const { DARABONBA_PTR_GET_DEFAULT(dataSourceTemplateId_, "") };
    inline CreateDataSourceRequest& setDataSourceTemplateId(string dataSourceTemplateId) { DARABONBA_PTR_SET_VALUE(dataSourceTemplateId_, dataSourceTemplateId) };


    // dataSourceType Field Functions 
    bool hasDataSourceType() const { return this->dataSourceType_ != nullptr;};
    void deleteDataSourceType() { this->dataSourceType_ = nullptr;};
    inline string dataSourceType() const { DARABONBA_PTR_GET_DEFAULT(dataSourceType_, "") };
    inline CreateDataSourceRequest& setDataSourceType(string dataSourceType) { DARABONBA_PTR_SET_VALUE(dataSourceType_, dataSourceType) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string lang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline CreateDataSourceRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // logProjectName Field Functions 
    bool hasLogProjectName() const { return this->logProjectName_ != nullptr;};
    void deleteLogProjectName() { this->logProjectName_ = nullptr;};
    inline string logProjectName() const { DARABONBA_PTR_GET_DEFAULT(logProjectName_, "") };
    inline CreateDataSourceRequest& setLogProjectName(string logProjectName) { DARABONBA_PTR_SET_VALUE(logProjectName_, logProjectName) };


    // logRegionId Field Functions 
    bool hasLogRegionId() const { return this->logRegionId_ != nullptr;};
    void deleteLogRegionId() { this->logRegionId_ = nullptr;};
    inline string logRegionId() const { DARABONBA_PTR_GET_DEFAULT(logRegionId_, "") };
    inline CreateDataSourceRequest& setLogRegionId(string logRegionId) { DARABONBA_PTR_SET_VALUE(logRegionId_, logRegionId) };


    // logStoreName Field Functions 
    bool hasLogStoreName() const { return this->logStoreName_ != nullptr;};
    void deleteLogStoreName() { this->logStoreName_ = nullptr;};
    inline string logStoreName() const { DARABONBA_PTR_GET_DEFAULT(logStoreName_, "") };
    inline CreateDataSourceRequest& setLogStoreName(string logStoreName) { DARABONBA_PTR_SET_VALUE(logStoreName_, logStoreName) };


    // logUserId Field Functions 
    bool hasLogUserId() const { return this->logUserId_ != nullptr;};
    void deleteLogUserId() { this->logUserId_ = nullptr;};
    inline int64_t logUserId() const { DARABONBA_PTR_GET_DEFAULT(logUserId_, 0L) };
    inline CreateDataSourceRequest& setLogUserId(int64_t logUserId) { DARABONBA_PTR_SET_VALUE(logUserId_, logUserId) };


    // order Field Functions 
    bool hasOrder() const { return this->order_ != nullptr;};
    void deleteOrder() { this->order_ = nullptr;};
    inline string order() const { DARABONBA_PTR_GET_DEFAULT(order_, "") };
    inline CreateDataSourceRequest& setOrder(string order) { DARABONBA_PTR_SET_VALUE(order_, order) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateDataSourceRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // roleFor Field Functions 
    bool hasRoleFor() const { return this->roleFor_ != nullptr;};
    void deleteRoleFor() { this->roleFor_ = nullptr;};
    inline int64_t roleFor() const { DARABONBA_PTR_GET_DEFAULT(roleFor_, 0L) };
    inline CreateDataSourceRequest& setRoleFor(int64_t roleFor) { DARABONBA_PTR_SET_VALUE(roleFor_, roleFor) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline int64_t updateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, 0L) };
    inline CreateDataSourceRequest& setUpdateTime(int64_t updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


  protected:
    std::shared_ptr<string> dataSourceFrom_ = nullptr;
    std::shared_ptr<vector<string>> dataSourceIds_ = nullptr;
    std::shared_ptr<string> dataSourceName_ = nullptr;
    std::shared_ptr<bool> dataSourceRecognizeEnabled_ = nullptr;
    std::shared_ptr<string> dataSourceRecognizer_ = nullptr;
    std::shared_ptr<vector<string>> dataSourceReferences_ = nullptr;
    std::shared_ptr<vector<CreateDataSourceRequestDataSourceStores>> dataSourceStores_ = nullptr;
    std::shared_ptr<string> dataSourceTemplateId_ = nullptr;
    std::shared_ptr<string> dataSourceType_ = nullptr;
    std::shared_ptr<string> lang_ = nullptr;
    std::shared_ptr<string> logProjectName_ = nullptr;
    std::shared_ptr<string> logRegionId_ = nullptr;
    std::shared_ptr<string> logStoreName_ = nullptr;
    std::shared_ptr<int64_t> logUserId_ = nullptr;
    std::shared_ptr<string> order_ = nullptr;
    std::shared_ptr<string> regionId_ = nullptr;
    std::shared_ptr<int64_t> roleFor_ = nullptr;
    std::shared_ptr<int64_t> updateTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudSiem20241212
#endif
