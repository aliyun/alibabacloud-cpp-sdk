// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDATASOURCETEMPLATESRESPONSEBODYDATASOURCETEMPLATES_HPP_
#define ALIBABACLOUD_MODELS_LISTDATASOURCETEMPLATESRESPONSEBODYDATASOURCETEMPLATES_HPP_
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
  class ListDataSourceTemplatesResponseBodyDataSourceTemplates : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDataSourceTemplatesResponseBodyDataSourceTemplates& obj) { 
      DARABONBA_PTR_TO_JSON(AutoScanNew, autoScanNew_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(DataSourceFrom, dataSourceFrom_);
      DARABONBA_PTR_TO_JSON(DataSourceRecognizeEnabled, dataSourceRecognizeEnabled_);
      DARABONBA_PTR_TO_JSON(DataSourceRecognizer, dataSourceRecognizer_);
      DARABONBA_PTR_TO_JSON(DataSourceTemplateId, dataSourceTemplateId_);
      DARABONBA_PTR_TO_JSON(DataSourceTemplateName, dataSourceTemplateName_);
      DARABONBA_PTR_TO_JSON(LogProjectPattern, logProjectPattern_);
      DARABONBA_PTR_TO_JSON(LogRegionIds, logRegionIds_);
      DARABONBA_PTR_TO_JSON(LogStorePattern, logStorePattern_);
      DARABONBA_PTR_TO_JSON(LogUserIds, logUserIds_);
      DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
    };
    friend void from_json(const Darabonba::Json& j, ListDataSourceTemplatesResponseBodyDataSourceTemplates& obj) { 
      DARABONBA_PTR_FROM_JSON(AutoScanNew, autoScanNew_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(DataSourceFrom, dataSourceFrom_);
      DARABONBA_PTR_FROM_JSON(DataSourceRecognizeEnabled, dataSourceRecognizeEnabled_);
      DARABONBA_PTR_FROM_JSON(DataSourceRecognizer, dataSourceRecognizer_);
      DARABONBA_PTR_FROM_JSON(DataSourceTemplateId, dataSourceTemplateId_);
      DARABONBA_PTR_FROM_JSON(DataSourceTemplateName, dataSourceTemplateName_);
      DARABONBA_PTR_FROM_JSON(LogProjectPattern, logProjectPattern_);
      DARABONBA_PTR_FROM_JSON(LogRegionIds, logRegionIds_);
      DARABONBA_PTR_FROM_JSON(LogStorePattern, logStorePattern_);
      DARABONBA_PTR_FROM_JSON(LogUserIds, logUserIds_);
      DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
    };
    ListDataSourceTemplatesResponseBodyDataSourceTemplates() = default ;
    ListDataSourceTemplatesResponseBodyDataSourceTemplates(const ListDataSourceTemplatesResponseBodyDataSourceTemplates &) = default ;
    ListDataSourceTemplatesResponseBodyDataSourceTemplates(ListDataSourceTemplatesResponseBodyDataSourceTemplates &&) = default ;
    ListDataSourceTemplatesResponseBodyDataSourceTemplates(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDataSourceTemplatesResponseBodyDataSourceTemplates() = default ;
    ListDataSourceTemplatesResponseBodyDataSourceTemplates& operator=(const ListDataSourceTemplatesResponseBodyDataSourceTemplates &) = default ;
    ListDataSourceTemplatesResponseBodyDataSourceTemplates& operator=(ListDataSourceTemplatesResponseBodyDataSourceTemplates &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->autoScanNew_ == nullptr
        && return this->createTime_ == nullptr && return this->dataSourceFrom_ == nullptr && return this->dataSourceRecognizeEnabled_ == nullptr && return this->dataSourceRecognizer_ == nullptr && return this->dataSourceTemplateId_ == nullptr
        && return this->dataSourceTemplateName_ == nullptr && return this->logProjectPattern_ == nullptr && return this->logRegionIds_ == nullptr && return this->logStorePattern_ == nullptr && return this->logUserIds_ == nullptr
        && return this->updateTime_ == nullptr; };
    // autoScanNew Field Functions 
    bool hasAutoScanNew() const { return this->autoScanNew_ != nullptr;};
    void deleteAutoScanNew() { this->autoScanNew_ = nullptr;};
    inline string autoScanNew() const { DARABONBA_PTR_GET_DEFAULT(autoScanNew_, "") };
    inline ListDataSourceTemplatesResponseBodyDataSourceTemplates& setAutoScanNew(string autoScanNew) { DARABONBA_PTR_SET_VALUE(autoScanNew_, autoScanNew) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline int64_t createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
    inline ListDataSourceTemplatesResponseBodyDataSourceTemplates& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // dataSourceFrom Field Functions 
    bool hasDataSourceFrom() const { return this->dataSourceFrom_ != nullptr;};
    void deleteDataSourceFrom() { this->dataSourceFrom_ = nullptr;};
    inline string dataSourceFrom() const { DARABONBA_PTR_GET_DEFAULT(dataSourceFrom_, "") };
    inline ListDataSourceTemplatesResponseBodyDataSourceTemplates& setDataSourceFrom(string dataSourceFrom) { DARABONBA_PTR_SET_VALUE(dataSourceFrom_, dataSourceFrom) };


    // dataSourceRecognizeEnabled Field Functions 
    bool hasDataSourceRecognizeEnabled() const { return this->dataSourceRecognizeEnabled_ != nullptr;};
    void deleteDataSourceRecognizeEnabled() { this->dataSourceRecognizeEnabled_ = nullptr;};
    inline bool dataSourceRecognizeEnabled() const { DARABONBA_PTR_GET_DEFAULT(dataSourceRecognizeEnabled_, false) };
    inline ListDataSourceTemplatesResponseBodyDataSourceTemplates& setDataSourceRecognizeEnabled(bool dataSourceRecognizeEnabled) { DARABONBA_PTR_SET_VALUE(dataSourceRecognizeEnabled_, dataSourceRecognizeEnabled) };


    // dataSourceRecognizer Field Functions 
    bool hasDataSourceRecognizer() const { return this->dataSourceRecognizer_ != nullptr;};
    void deleteDataSourceRecognizer() { this->dataSourceRecognizer_ = nullptr;};
    inline string dataSourceRecognizer() const { DARABONBA_PTR_GET_DEFAULT(dataSourceRecognizer_, "") };
    inline ListDataSourceTemplatesResponseBodyDataSourceTemplates& setDataSourceRecognizer(string dataSourceRecognizer) { DARABONBA_PTR_SET_VALUE(dataSourceRecognizer_, dataSourceRecognizer) };


    // dataSourceTemplateId Field Functions 
    bool hasDataSourceTemplateId() const { return this->dataSourceTemplateId_ != nullptr;};
    void deleteDataSourceTemplateId() { this->dataSourceTemplateId_ = nullptr;};
    inline string dataSourceTemplateId() const { DARABONBA_PTR_GET_DEFAULT(dataSourceTemplateId_, "") };
    inline ListDataSourceTemplatesResponseBodyDataSourceTemplates& setDataSourceTemplateId(string dataSourceTemplateId) { DARABONBA_PTR_SET_VALUE(dataSourceTemplateId_, dataSourceTemplateId) };


    // dataSourceTemplateName Field Functions 
    bool hasDataSourceTemplateName() const { return this->dataSourceTemplateName_ != nullptr;};
    void deleteDataSourceTemplateName() { this->dataSourceTemplateName_ = nullptr;};
    inline string dataSourceTemplateName() const { DARABONBA_PTR_GET_DEFAULT(dataSourceTemplateName_, "") };
    inline ListDataSourceTemplatesResponseBodyDataSourceTemplates& setDataSourceTemplateName(string dataSourceTemplateName) { DARABONBA_PTR_SET_VALUE(dataSourceTemplateName_, dataSourceTemplateName) };


    // logProjectPattern Field Functions 
    bool hasLogProjectPattern() const { return this->logProjectPattern_ != nullptr;};
    void deleteLogProjectPattern() { this->logProjectPattern_ = nullptr;};
    inline string logProjectPattern() const { DARABONBA_PTR_GET_DEFAULT(logProjectPattern_, "") };
    inline ListDataSourceTemplatesResponseBodyDataSourceTemplates& setLogProjectPattern(string logProjectPattern) { DARABONBA_PTR_SET_VALUE(logProjectPattern_, logProjectPattern) };


    // logRegionIds Field Functions 
    bool hasLogRegionIds() const { return this->logRegionIds_ != nullptr;};
    void deleteLogRegionIds() { this->logRegionIds_ = nullptr;};
    inline const vector<string> & logRegionIds() const { DARABONBA_PTR_GET_CONST(logRegionIds_, vector<string>) };
    inline vector<string> logRegionIds() { DARABONBA_PTR_GET(logRegionIds_, vector<string>) };
    inline ListDataSourceTemplatesResponseBodyDataSourceTemplates& setLogRegionIds(const vector<string> & logRegionIds) { DARABONBA_PTR_SET_VALUE(logRegionIds_, logRegionIds) };
    inline ListDataSourceTemplatesResponseBodyDataSourceTemplates& setLogRegionIds(vector<string> && logRegionIds) { DARABONBA_PTR_SET_RVALUE(logRegionIds_, logRegionIds) };


    // logStorePattern Field Functions 
    bool hasLogStorePattern() const { return this->logStorePattern_ != nullptr;};
    void deleteLogStorePattern() { this->logStorePattern_ = nullptr;};
    inline string logStorePattern() const { DARABONBA_PTR_GET_DEFAULT(logStorePattern_, "") };
    inline ListDataSourceTemplatesResponseBodyDataSourceTemplates& setLogStorePattern(string logStorePattern) { DARABONBA_PTR_SET_VALUE(logStorePattern_, logStorePattern) };


    // logUserIds Field Functions 
    bool hasLogUserIds() const { return this->logUserIds_ != nullptr;};
    void deleteLogUserIds() { this->logUserIds_ = nullptr;};
    inline const vector<string> & logUserIds() const { DARABONBA_PTR_GET_CONST(logUserIds_, vector<string>) };
    inline vector<string> logUserIds() { DARABONBA_PTR_GET(logUserIds_, vector<string>) };
    inline ListDataSourceTemplatesResponseBodyDataSourceTemplates& setLogUserIds(const vector<string> & logUserIds) { DARABONBA_PTR_SET_VALUE(logUserIds_, logUserIds) };
    inline ListDataSourceTemplatesResponseBodyDataSourceTemplates& setLogUserIds(vector<string> && logUserIds) { DARABONBA_PTR_SET_RVALUE(logUserIds_, logUserIds) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline int64_t updateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, 0L) };
    inline ListDataSourceTemplatesResponseBodyDataSourceTemplates& setUpdateTime(int64_t updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


  protected:
    std::shared_ptr<string> autoScanNew_ = nullptr;
    std::shared_ptr<int64_t> createTime_ = nullptr;
    std::shared_ptr<string> dataSourceFrom_ = nullptr;
    std::shared_ptr<bool> dataSourceRecognizeEnabled_ = nullptr;
    std::shared_ptr<string> dataSourceRecognizer_ = nullptr;
    std::shared_ptr<string> dataSourceTemplateId_ = nullptr;
    std::shared_ptr<string> dataSourceTemplateName_ = nullptr;
    std::shared_ptr<string> logProjectPattern_ = nullptr;
    std::shared_ptr<vector<string>> logRegionIds_ = nullptr;
    std::shared_ptr<string> logStorePattern_ = nullptr;
    std::shared_ptr<vector<string>> logUserIds_ = nullptr;
    std::shared_ptr<int64_t> updateTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudSiem20241212
#endif
