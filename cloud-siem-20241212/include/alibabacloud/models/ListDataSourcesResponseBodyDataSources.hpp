// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDATASOURCESRESPONSEBODYDATASOURCES_HPP_
#define ALIBABACLOUD_MODELS_LISTDATASOURCESRESPONSEBODYDATASOURCES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListDataSourcesResponseBodyDataSourcesDataSourceReferences.hpp>
#include <alibabacloud/models/ListDataSourcesResponseBodyDataSourcesDataSourceStores.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudSiem20241212
{
namespace Models
{
  class ListDataSourcesResponseBodyDataSources : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDataSourcesResponseBodyDataSources& obj) { 
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(DataSourceFrom, dataSourceFrom_);
      DARABONBA_PTR_TO_JSON(DataSourceId, dataSourceId_);
      DARABONBA_PTR_TO_JSON(DataSourceName, dataSourceName_);
      DARABONBA_PTR_TO_JSON(DataSourceRecognizeEnabled, dataSourceRecognizeEnabled_);
      DARABONBA_PTR_TO_JSON(DataSourceRecognizer, dataSourceRecognizer_);
      DARABONBA_PTR_TO_JSON(DataSourceReferences, dataSourceReferences_);
      DARABONBA_PTR_TO_JSON(DataSourceStatus, dataSourceStatus_);
      DARABONBA_PTR_TO_JSON(DataSourceStores, dataSourceStores_);
      DARABONBA_PTR_TO_JSON(DataSourceTemplateId, dataSourceTemplateId_);
      DARABONBA_PTR_TO_JSON(DataSourceType, dataSourceType_);
      DARABONBA_PTR_TO_JSON(LogProjectName, logProjectName_);
      DARABONBA_PTR_TO_JSON(LogRegionId, logRegionId_);
      DARABONBA_PTR_TO_JSON(LogStoreName, logStoreName_);
      DARABONBA_PTR_TO_JSON(LogUserId, logUserId_);
      DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
    };
    friend void from_json(const Darabonba::Json& j, ListDataSourcesResponseBodyDataSources& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(DataSourceFrom, dataSourceFrom_);
      DARABONBA_PTR_FROM_JSON(DataSourceId, dataSourceId_);
      DARABONBA_PTR_FROM_JSON(DataSourceName, dataSourceName_);
      DARABONBA_PTR_FROM_JSON(DataSourceRecognizeEnabled, dataSourceRecognizeEnabled_);
      DARABONBA_PTR_FROM_JSON(DataSourceRecognizer, dataSourceRecognizer_);
      DARABONBA_PTR_FROM_JSON(DataSourceReferences, dataSourceReferences_);
      DARABONBA_PTR_FROM_JSON(DataSourceStatus, dataSourceStatus_);
      DARABONBA_PTR_FROM_JSON(DataSourceStores, dataSourceStores_);
      DARABONBA_PTR_FROM_JSON(DataSourceTemplateId, dataSourceTemplateId_);
      DARABONBA_PTR_FROM_JSON(DataSourceType, dataSourceType_);
      DARABONBA_PTR_FROM_JSON(LogProjectName, logProjectName_);
      DARABONBA_PTR_FROM_JSON(LogRegionId, logRegionId_);
      DARABONBA_PTR_FROM_JSON(LogStoreName, logStoreName_);
      DARABONBA_PTR_FROM_JSON(LogUserId, logUserId_);
      DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
    };
    ListDataSourcesResponseBodyDataSources() = default ;
    ListDataSourcesResponseBodyDataSources(const ListDataSourcesResponseBodyDataSources &) = default ;
    ListDataSourcesResponseBodyDataSources(ListDataSourcesResponseBodyDataSources &&) = default ;
    ListDataSourcesResponseBodyDataSources(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDataSourcesResponseBodyDataSources() = default ;
    ListDataSourcesResponseBodyDataSources& operator=(const ListDataSourcesResponseBodyDataSources &) = default ;
    ListDataSourcesResponseBodyDataSources& operator=(ListDataSourcesResponseBodyDataSources &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->createTime_ == nullptr
        && return this->dataSourceFrom_ == nullptr && return this->dataSourceId_ == nullptr && return this->dataSourceName_ == nullptr && return this->dataSourceRecognizeEnabled_ == nullptr && return this->dataSourceRecognizer_ == nullptr
        && return this->dataSourceReferences_ == nullptr && return this->dataSourceStatus_ == nullptr && return this->dataSourceStores_ == nullptr && return this->dataSourceTemplateId_ == nullptr && return this->dataSourceType_ == nullptr
        && return this->logProjectName_ == nullptr && return this->logRegionId_ == nullptr && return this->logStoreName_ == nullptr && return this->logUserId_ == nullptr && return this->updateTime_ == nullptr; };
    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline int64_t createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
    inline ListDataSourcesResponseBodyDataSources& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // dataSourceFrom Field Functions 
    bool hasDataSourceFrom() const { return this->dataSourceFrom_ != nullptr;};
    void deleteDataSourceFrom() { this->dataSourceFrom_ = nullptr;};
    inline string dataSourceFrom() const { DARABONBA_PTR_GET_DEFAULT(dataSourceFrom_, "") };
    inline ListDataSourcesResponseBodyDataSources& setDataSourceFrom(string dataSourceFrom) { DARABONBA_PTR_SET_VALUE(dataSourceFrom_, dataSourceFrom) };


    // dataSourceId Field Functions 
    bool hasDataSourceId() const { return this->dataSourceId_ != nullptr;};
    void deleteDataSourceId() { this->dataSourceId_ = nullptr;};
    inline string dataSourceId() const { DARABONBA_PTR_GET_DEFAULT(dataSourceId_, "") };
    inline ListDataSourcesResponseBodyDataSources& setDataSourceId(string dataSourceId) { DARABONBA_PTR_SET_VALUE(dataSourceId_, dataSourceId) };


    // dataSourceName Field Functions 
    bool hasDataSourceName() const { return this->dataSourceName_ != nullptr;};
    void deleteDataSourceName() { this->dataSourceName_ = nullptr;};
    inline string dataSourceName() const { DARABONBA_PTR_GET_DEFAULT(dataSourceName_, "") };
    inline ListDataSourcesResponseBodyDataSources& setDataSourceName(string dataSourceName) { DARABONBA_PTR_SET_VALUE(dataSourceName_, dataSourceName) };


    // dataSourceRecognizeEnabled Field Functions 
    bool hasDataSourceRecognizeEnabled() const { return this->dataSourceRecognizeEnabled_ != nullptr;};
    void deleteDataSourceRecognizeEnabled() { this->dataSourceRecognizeEnabled_ = nullptr;};
    inline bool dataSourceRecognizeEnabled() const { DARABONBA_PTR_GET_DEFAULT(dataSourceRecognizeEnabled_, false) };
    inline ListDataSourcesResponseBodyDataSources& setDataSourceRecognizeEnabled(bool dataSourceRecognizeEnabled) { DARABONBA_PTR_SET_VALUE(dataSourceRecognizeEnabled_, dataSourceRecognizeEnabled) };


    // dataSourceRecognizer Field Functions 
    bool hasDataSourceRecognizer() const { return this->dataSourceRecognizer_ != nullptr;};
    void deleteDataSourceRecognizer() { this->dataSourceRecognizer_ = nullptr;};
    inline string dataSourceRecognizer() const { DARABONBA_PTR_GET_DEFAULT(dataSourceRecognizer_, "") };
    inline ListDataSourcesResponseBodyDataSources& setDataSourceRecognizer(string dataSourceRecognizer) { DARABONBA_PTR_SET_VALUE(dataSourceRecognizer_, dataSourceRecognizer) };


    // dataSourceReferences Field Functions 
    bool hasDataSourceReferences() const { return this->dataSourceReferences_ != nullptr;};
    void deleteDataSourceReferences() { this->dataSourceReferences_ = nullptr;};
    inline const vector<Models::ListDataSourcesResponseBodyDataSourcesDataSourceReferences> & dataSourceReferences() const { DARABONBA_PTR_GET_CONST(dataSourceReferences_, vector<Models::ListDataSourcesResponseBodyDataSourcesDataSourceReferences>) };
    inline vector<Models::ListDataSourcesResponseBodyDataSourcesDataSourceReferences> dataSourceReferences() { DARABONBA_PTR_GET(dataSourceReferences_, vector<Models::ListDataSourcesResponseBodyDataSourcesDataSourceReferences>) };
    inline ListDataSourcesResponseBodyDataSources& setDataSourceReferences(const vector<Models::ListDataSourcesResponseBodyDataSourcesDataSourceReferences> & dataSourceReferences) { DARABONBA_PTR_SET_VALUE(dataSourceReferences_, dataSourceReferences) };
    inline ListDataSourcesResponseBodyDataSources& setDataSourceReferences(vector<Models::ListDataSourcesResponseBodyDataSourcesDataSourceReferences> && dataSourceReferences) { DARABONBA_PTR_SET_RVALUE(dataSourceReferences_, dataSourceReferences) };


    // dataSourceStatus Field Functions 
    bool hasDataSourceStatus() const { return this->dataSourceStatus_ != nullptr;};
    void deleteDataSourceStatus() { this->dataSourceStatus_ = nullptr;};
    inline string dataSourceStatus() const { DARABONBA_PTR_GET_DEFAULT(dataSourceStatus_, "") };
    inline ListDataSourcesResponseBodyDataSources& setDataSourceStatus(string dataSourceStatus) { DARABONBA_PTR_SET_VALUE(dataSourceStatus_, dataSourceStatus) };


    // dataSourceStores Field Functions 
    bool hasDataSourceStores() const { return this->dataSourceStores_ != nullptr;};
    void deleteDataSourceStores() { this->dataSourceStores_ = nullptr;};
    inline const vector<Models::ListDataSourcesResponseBodyDataSourcesDataSourceStores> & dataSourceStores() const { DARABONBA_PTR_GET_CONST(dataSourceStores_, vector<Models::ListDataSourcesResponseBodyDataSourcesDataSourceStores>) };
    inline vector<Models::ListDataSourcesResponseBodyDataSourcesDataSourceStores> dataSourceStores() { DARABONBA_PTR_GET(dataSourceStores_, vector<Models::ListDataSourcesResponseBodyDataSourcesDataSourceStores>) };
    inline ListDataSourcesResponseBodyDataSources& setDataSourceStores(const vector<Models::ListDataSourcesResponseBodyDataSourcesDataSourceStores> & dataSourceStores) { DARABONBA_PTR_SET_VALUE(dataSourceStores_, dataSourceStores) };
    inline ListDataSourcesResponseBodyDataSources& setDataSourceStores(vector<Models::ListDataSourcesResponseBodyDataSourcesDataSourceStores> && dataSourceStores) { DARABONBA_PTR_SET_RVALUE(dataSourceStores_, dataSourceStores) };


    // dataSourceTemplateId Field Functions 
    bool hasDataSourceTemplateId() const { return this->dataSourceTemplateId_ != nullptr;};
    void deleteDataSourceTemplateId() { this->dataSourceTemplateId_ = nullptr;};
    inline string dataSourceTemplateId() const { DARABONBA_PTR_GET_DEFAULT(dataSourceTemplateId_, "") };
    inline ListDataSourcesResponseBodyDataSources& setDataSourceTemplateId(string dataSourceTemplateId) { DARABONBA_PTR_SET_VALUE(dataSourceTemplateId_, dataSourceTemplateId) };


    // dataSourceType Field Functions 
    bool hasDataSourceType() const { return this->dataSourceType_ != nullptr;};
    void deleteDataSourceType() { this->dataSourceType_ = nullptr;};
    inline string dataSourceType() const { DARABONBA_PTR_GET_DEFAULT(dataSourceType_, "") };
    inline ListDataSourcesResponseBodyDataSources& setDataSourceType(string dataSourceType) { DARABONBA_PTR_SET_VALUE(dataSourceType_, dataSourceType) };


    // logProjectName Field Functions 
    bool hasLogProjectName() const { return this->logProjectName_ != nullptr;};
    void deleteLogProjectName() { this->logProjectName_ = nullptr;};
    inline string logProjectName() const { DARABONBA_PTR_GET_DEFAULT(logProjectName_, "") };
    inline ListDataSourcesResponseBodyDataSources& setLogProjectName(string logProjectName) { DARABONBA_PTR_SET_VALUE(logProjectName_, logProjectName) };


    // logRegionId Field Functions 
    bool hasLogRegionId() const { return this->logRegionId_ != nullptr;};
    void deleteLogRegionId() { this->logRegionId_ = nullptr;};
    inline string logRegionId() const { DARABONBA_PTR_GET_DEFAULT(logRegionId_, "") };
    inline ListDataSourcesResponseBodyDataSources& setLogRegionId(string logRegionId) { DARABONBA_PTR_SET_VALUE(logRegionId_, logRegionId) };


    // logStoreName Field Functions 
    bool hasLogStoreName() const { return this->logStoreName_ != nullptr;};
    void deleteLogStoreName() { this->logStoreName_ = nullptr;};
    inline string logStoreName() const { DARABONBA_PTR_GET_DEFAULT(logStoreName_, "") };
    inline ListDataSourcesResponseBodyDataSources& setLogStoreName(string logStoreName) { DARABONBA_PTR_SET_VALUE(logStoreName_, logStoreName) };


    // logUserId Field Functions 
    bool hasLogUserId() const { return this->logUserId_ != nullptr;};
    void deleteLogUserId() { this->logUserId_ = nullptr;};
    inline int64_t logUserId() const { DARABONBA_PTR_GET_DEFAULT(logUserId_, 0L) };
    inline ListDataSourcesResponseBodyDataSources& setLogUserId(int64_t logUserId) { DARABONBA_PTR_SET_VALUE(logUserId_, logUserId) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline int64_t updateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, 0L) };
    inline ListDataSourcesResponseBodyDataSources& setUpdateTime(int64_t updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


  protected:
    std::shared_ptr<int64_t> createTime_ = nullptr;
    std::shared_ptr<string> dataSourceFrom_ = nullptr;
    std::shared_ptr<string> dataSourceId_ = nullptr;
    std::shared_ptr<string> dataSourceName_ = nullptr;
    std::shared_ptr<bool> dataSourceRecognizeEnabled_ = nullptr;
    std::shared_ptr<string> dataSourceRecognizer_ = nullptr;
    std::shared_ptr<vector<Models::ListDataSourcesResponseBodyDataSourcesDataSourceReferences>> dataSourceReferences_ = nullptr;
    std::shared_ptr<string> dataSourceStatus_ = nullptr;
    std::shared_ptr<vector<Models::ListDataSourcesResponseBodyDataSourcesDataSourceStores>> dataSourceStores_ = nullptr;
    std::shared_ptr<string> dataSourceTemplateId_ = nullptr;
    std::shared_ptr<string> dataSourceType_ = nullptr;
    std::shared_ptr<string> logProjectName_ = nullptr;
    std::shared_ptr<string> logRegionId_ = nullptr;
    std::shared_ptr<string> logStoreName_ = nullptr;
    std::shared_ptr<int64_t> logUserId_ = nullptr;
    std::shared_ptr<int64_t> updateTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudSiem20241212
#endif
