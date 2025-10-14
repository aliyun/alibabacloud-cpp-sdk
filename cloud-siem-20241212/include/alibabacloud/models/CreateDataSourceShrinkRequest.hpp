// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEDATASOURCESHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEDATASOURCESHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreateDataSourceShrinkRequestDataSourceStores.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudSiem20241212
{
namespace Models
{
  class CreateDataSourceShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateDataSourceShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DataSourceFrom, dataSourceFrom_);
      DARABONBA_PTR_TO_JSON(DataSourceIds, dataSourceIdsShrink_);
      DARABONBA_PTR_TO_JSON(DataSourceName, dataSourceName_);
      DARABONBA_PTR_TO_JSON(DataSourceRecognizeEnabled, dataSourceRecognizeEnabled_);
      DARABONBA_PTR_TO_JSON(DataSourceRecognizer, dataSourceRecognizer_);
      DARABONBA_PTR_TO_JSON(DataSourceReferences, dataSourceReferencesShrink_);
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
    friend void from_json(const Darabonba::Json& j, CreateDataSourceShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DataSourceFrom, dataSourceFrom_);
      DARABONBA_PTR_FROM_JSON(DataSourceIds, dataSourceIdsShrink_);
      DARABONBA_PTR_FROM_JSON(DataSourceName, dataSourceName_);
      DARABONBA_PTR_FROM_JSON(DataSourceRecognizeEnabled, dataSourceRecognizeEnabled_);
      DARABONBA_PTR_FROM_JSON(DataSourceRecognizer, dataSourceRecognizer_);
      DARABONBA_PTR_FROM_JSON(DataSourceReferences, dataSourceReferencesShrink_);
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
    CreateDataSourceShrinkRequest() = default ;
    CreateDataSourceShrinkRequest(const CreateDataSourceShrinkRequest &) = default ;
    CreateDataSourceShrinkRequest(CreateDataSourceShrinkRequest &&) = default ;
    CreateDataSourceShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateDataSourceShrinkRequest() = default ;
    CreateDataSourceShrinkRequest& operator=(const CreateDataSourceShrinkRequest &) = default ;
    CreateDataSourceShrinkRequest& operator=(CreateDataSourceShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dataSourceFrom_ == nullptr
        && return this->dataSourceIdsShrink_ == nullptr && return this->dataSourceName_ == nullptr && return this->dataSourceRecognizeEnabled_ == nullptr && return this->dataSourceRecognizer_ == nullptr && return this->dataSourceReferencesShrink_ == nullptr
        && return this->dataSourceStores_ == nullptr && return this->dataSourceTemplateId_ == nullptr && return this->dataSourceType_ == nullptr && return this->lang_ == nullptr && return this->logProjectName_ == nullptr
        && return this->logRegionId_ == nullptr && return this->logStoreName_ == nullptr && return this->logUserId_ == nullptr && return this->order_ == nullptr && return this->regionId_ == nullptr
        && return this->roleFor_ == nullptr && return this->updateTime_ == nullptr; };
    // dataSourceFrom Field Functions 
    bool hasDataSourceFrom() const { return this->dataSourceFrom_ != nullptr;};
    void deleteDataSourceFrom() { this->dataSourceFrom_ = nullptr;};
    inline string dataSourceFrom() const { DARABONBA_PTR_GET_DEFAULT(dataSourceFrom_, "") };
    inline CreateDataSourceShrinkRequest& setDataSourceFrom(string dataSourceFrom) { DARABONBA_PTR_SET_VALUE(dataSourceFrom_, dataSourceFrom) };


    // dataSourceIdsShrink Field Functions 
    bool hasDataSourceIdsShrink() const { return this->dataSourceIdsShrink_ != nullptr;};
    void deleteDataSourceIdsShrink() { this->dataSourceIdsShrink_ = nullptr;};
    inline string dataSourceIdsShrink() const { DARABONBA_PTR_GET_DEFAULT(dataSourceIdsShrink_, "") };
    inline CreateDataSourceShrinkRequest& setDataSourceIdsShrink(string dataSourceIdsShrink) { DARABONBA_PTR_SET_VALUE(dataSourceIdsShrink_, dataSourceIdsShrink) };


    // dataSourceName Field Functions 
    bool hasDataSourceName() const { return this->dataSourceName_ != nullptr;};
    void deleteDataSourceName() { this->dataSourceName_ = nullptr;};
    inline string dataSourceName() const { DARABONBA_PTR_GET_DEFAULT(dataSourceName_, "") };
    inline CreateDataSourceShrinkRequest& setDataSourceName(string dataSourceName) { DARABONBA_PTR_SET_VALUE(dataSourceName_, dataSourceName) };


    // dataSourceRecognizeEnabled Field Functions 
    bool hasDataSourceRecognizeEnabled() const { return this->dataSourceRecognizeEnabled_ != nullptr;};
    void deleteDataSourceRecognizeEnabled() { this->dataSourceRecognizeEnabled_ = nullptr;};
    inline bool dataSourceRecognizeEnabled() const { DARABONBA_PTR_GET_DEFAULT(dataSourceRecognizeEnabled_, false) };
    inline CreateDataSourceShrinkRequest& setDataSourceRecognizeEnabled(bool dataSourceRecognizeEnabled) { DARABONBA_PTR_SET_VALUE(dataSourceRecognizeEnabled_, dataSourceRecognizeEnabled) };


    // dataSourceRecognizer Field Functions 
    bool hasDataSourceRecognizer() const { return this->dataSourceRecognizer_ != nullptr;};
    void deleteDataSourceRecognizer() { this->dataSourceRecognizer_ = nullptr;};
    inline string dataSourceRecognizer() const { DARABONBA_PTR_GET_DEFAULT(dataSourceRecognizer_, "") };
    inline CreateDataSourceShrinkRequest& setDataSourceRecognizer(string dataSourceRecognizer) { DARABONBA_PTR_SET_VALUE(dataSourceRecognizer_, dataSourceRecognizer) };


    // dataSourceReferencesShrink Field Functions 
    bool hasDataSourceReferencesShrink() const { return this->dataSourceReferencesShrink_ != nullptr;};
    void deleteDataSourceReferencesShrink() { this->dataSourceReferencesShrink_ = nullptr;};
    inline string dataSourceReferencesShrink() const { DARABONBA_PTR_GET_DEFAULT(dataSourceReferencesShrink_, "") };
    inline CreateDataSourceShrinkRequest& setDataSourceReferencesShrink(string dataSourceReferencesShrink) { DARABONBA_PTR_SET_VALUE(dataSourceReferencesShrink_, dataSourceReferencesShrink) };


    // dataSourceStores Field Functions 
    bool hasDataSourceStores() const { return this->dataSourceStores_ != nullptr;};
    void deleteDataSourceStores() { this->dataSourceStores_ = nullptr;};
    inline const vector<CreateDataSourceShrinkRequestDataSourceStores> & dataSourceStores() const { DARABONBA_PTR_GET_CONST(dataSourceStores_, vector<CreateDataSourceShrinkRequestDataSourceStores>) };
    inline vector<CreateDataSourceShrinkRequestDataSourceStores> dataSourceStores() { DARABONBA_PTR_GET(dataSourceStores_, vector<CreateDataSourceShrinkRequestDataSourceStores>) };
    inline CreateDataSourceShrinkRequest& setDataSourceStores(const vector<CreateDataSourceShrinkRequestDataSourceStores> & dataSourceStores) { DARABONBA_PTR_SET_VALUE(dataSourceStores_, dataSourceStores) };
    inline CreateDataSourceShrinkRequest& setDataSourceStores(vector<CreateDataSourceShrinkRequestDataSourceStores> && dataSourceStores) { DARABONBA_PTR_SET_RVALUE(dataSourceStores_, dataSourceStores) };


    // dataSourceTemplateId Field Functions 
    bool hasDataSourceTemplateId() const { return this->dataSourceTemplateId_ != nullptr;};
    void deleteDataSourceTemplateId() { this->dataSourceTemplateId_ = nullptr;};
    inline string dataSourceTemplateId() const { DARABONBA_PTR_GET_DEFAULT(dataSourceTemplateId_, "") };
    inline CreateDataSourceShrinkRequest& setDataSourceTemplateId(string dataSourceTemplateId) { DARABONBA_PTR_SET_VALUE(dataSourceTemplateId_, dataSourceTemplateId) };


    // dataSourceType Field Functions 
    bool hasDataSourceType() const { return this->dataSourceType_ != nullptr;};
    void deleteDataSourceType() { this->dataSourceType_ = nullptr;};
    inline string dataSourceType() const { DARABONBA_PTR_GET_DEFAULT(dataSourceType_, "") };
    inline CreateDataSourceShrinkRequest& setDataSourceType(string dataSourceType) { DARABONBA_PTR_SET_VALUE(dataSourceType_, dataSourceType) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string lang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline CreateDataSourceShrinkRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // logProjectName Field Functions 
    bool hasLogProjectName() const { return this->logProjectName_ != nullptr;};
    void deleteLogProjectName() { this->logProjectName_ = nullptr;};
    inline string logProjectName() const { DARABONBA_PTR_GET_DEFAULT(logProjectName_, "") };
    inline CreateDataSourceShrinkRequest& setLogProjectName(string logProjectName) { DARABONBA_PTR_SET_VALUE(logProjectName_, logProjectName) };


    // logRegionId Field Functions 
    bool hasLogRegionId() const { return this->logRegionId_ != nullptr;};
    void deleteLogRegionId() { this->logRegionId_ = nullptr;};
    inline string logRegionId() const { DARABONBA_PTR_GET_DEFAULT(logRegionId_, "") };
    inline CreateDataSourceShrinkRequest& setLogRegionId(string logRegionId) { DARABONBA_PTR_SET_VALUE(logRegionId_, logRegionId) };


    // logStoreName Field Functions 
    bool hasLogStoreName() const { return this->logStoreName_ != nullptr;};
    void deleteLogStoreName() { this->logStoreName_ = nullptr;};
    inline string logStoreName() const { DARABONBA_PTR_GET_DEFAULT(logStoreName_, "") };
    inline CreateDataSourceShrinkRequest& setLogStoreName(string logStoreName) { DARABONBA_PTR_SET_VALUE(logStoreName_, logStoreName) };


    // logUserId Field Functions 
    bool hasLogUserId() const { return this->logUserId_ != nullptr;};
    void deleteLogUserId() { this->logUserId_ = nullptr;};
    inline int64_t logUserId() const { DARABONBA_PTR_GET_DEFAULT(logUserId_, 0L) };
    inline CreateDataSourceShrinkRequest& setLogUserId(int64_t logUserId) { DARABONBA_PTR_SET_VALUE(logUserId_, logUserId) };


    // order Field Functions 
    bool hasOrder() const { return this->order_ != nullptr;};
    void deleteOrder() { this->order_ = nullptr;};
    inline string order() const { DARABONBA_PTR_GET_DEFAULT(order_, "") };
    inline CreateDataSourceShrinkRequest& setOrder(string order) { DARABONBA_PTR_SET_VALUE(order_, order) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateDataSourceShrinkRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // roleFor Field Functions 
    bool hasRoleFor() const { return this->roleFor_ != nullptr;};
    void deleteRoleFor() { this->roleFor_ = nullptr;};
    inline int64_t roleFor() const { DARABONBA_PTR_GET_DEFAULT(roleFor_, 0L) };
    inline CreateDataSourceShrinkRequest& setRoleFor(int64_t roleFor) { DARABONBA_PTR_SET_VALUE(roleFor_, roleFor) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline int64_t updateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, 0L) };
    inline CreateDataSourceShrinkRequest& setUpdateTime(int64_t updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


  protected:
    std::shared_ptr<string> dataSourceFrom_ = nullptr;
    std::shared_ptr<string> dataSourceIdsShrink_ = nullptr;
    std::shared_ptr<string> dataSourceName_ = nullptr;
    std::shared_ptr<bool> dataSourceRecognizeEnabled_ = nullptr;
    std::shared_ptr<string> dataSourceRecognizer_ = nullptr;
    std::shared_ptr<string> dataSourceReferencesShrink_ = nullptr;
    std::shared_ptr<vector<CreateDataSourceShrinkRequestDataSourceStores>> dataSourceStores_ = nullptr;
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
