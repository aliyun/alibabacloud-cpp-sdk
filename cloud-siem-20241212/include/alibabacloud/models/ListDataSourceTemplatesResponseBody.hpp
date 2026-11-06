// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDATASOURCETEMPLATESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTDATASOURCETEMPLATESRESPONSEBODY_HPP_
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
  class ListDataSourceTemplatesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDataSourceTemplatesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DataSourceTemplates, dataSourceTemplates_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListDataSourceTemplatesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DataSourceTemplates, dataSourceTemplates_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListDataSourceTemplatesResponseBody() = default ;
    ListDataSourceTemplatesResponseBody(const ListDataSourceTemplatesResponseBody &) = default ;
    ListDataSourceTemplatesResponseBody(ListDataSourceTemplatesResponseBody &&) = default ;
    ListDataSourceTemplatesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDataSourceTemplatesResponseBody() = default ;
    ListDataSourceTemplatesResponseBody& operator=(const ListDataSourceTemplatesResponseBody &) = default ;
    ListDataSourceTemplatesResponseBody& operator=(ListDataSourceTemplatesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class DataSourceTemplates : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DataSourceTemplates& obj) { 
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
      friend void from_json(const Darabonba::Json& j, DataSourceTemplates& obj) { 
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
      DataSourceTemplates() = default ;
      DataSourceTemplates(const DataSourceTemplates &) = default ;
      DataSourceTemplates(DataSourceTemplates &&) = default ;
      DataSourceTemplates(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DataSourceTemplates() = default ;
      DataSourceTemplates& operator=(const DataSourceTemplates &) = default ;
      DataSourceTemplates& operator=(DataSourceTemplates &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->autoScanNew_ == nullptr
        && this->createTime_ == nullptr && this->dataSourceFrom_ == nullptr && this->dataSourceRecognizeEnabled_ == nullptr && this->dataSourceRecognizer_ == nullptr && this->dataSourceTemplateId_ == nullptr
        && this->dataSourceTemplateName_ == nullptr && this->logProjectPattern_ == nullptr && this->logRegionIds_ == nullptr && this->logStorePattern_ == nullptr && this->logUserIds_ == nullptr
        && this->updateTime_ == nullptr; };
      // autoScanNew Field Functions 
      bool hasAutoScanNew() const { return this->autoScanNew_ != nullptr;};
      void deleteAutoScanNew() { this->autoScanNew_ = nullptr;};
      inline string getAutoScanNew() const { DARABONBA_PTR_GET_DEFAULT(autoScanNew_, "") };
      inline DataSourceTemplates& setAutoScanNew(string autoScanNew) { DARABONBA_PTR_SET_VALUE(autoScanNew_, autoScanNew) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline int64_t getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
      inline DataSourceTemplates& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // dataSourceFrom Field Functions 
      bool hasDataSourceFrom() const { return this->dataSourceFrom_ != nullptr;};
      void deleteDataSourceFrom() { this->dataSourceFrom_ = nullptr;};
      inline string getDataSourceFrom() const { DARABONBA_PTR_GET_DEFAULT(dataSourceFrom_, "") };
      inline DataSourceTemplates& setDataSourceFrom(string dataSourceFrom) { DARABONBA_PTR_SET_VALUE(dataSourceFrom_, dataSourceFrom) };


      // dataSourceRecognizeEnabled Field Functions 
      bool hasDataSourceRecognizeEnabled() const { return this->dataSourceRecognizeEnabled_ != nullptr;};
      void deleteDataSourceRecognizeEnabled() { this->dataSourceRecognizeEnabled_ = nullptr;};
      inline bool getDataSourceRecognizeEnabled() const { DARABONBA_PTR_GET_DEFAULT(dataSourceRecognizeEnabled_, false) };
      inline DataSourceTemplates& setDataSourceRecognizeEnabled(bool dataSourceRecognizeEnabled) { DARABONBA_PTR_SET_VALUE(dataSourceRecognizeEnabled_, dataSourceRecognizeEnabled) };


      // dataSourceRecognizer Field Functions 
      bool hasDataSourceRecognizer() const { return this->dataSourceRecognizer_ != nullptr;};
      void deleteDataSourceRecognizer() { this->dataSourceRecognizer_ = nullptr;};
      inline string getDataSourceRecognizer() const { DARABONBA_PTR_GET_DEFAULT(dataSourceRecognizer_, "") };
      inline DataSourceTemplates& setDataSourceRecognizer(string dataSourceRecognizer) { DARABONBA_PTR_SET_VALUE(dataSourceRecognizer_, dataSourceRecognizer) };


      // dataSourceTemplateId Field Functions 
      bool hasDataSourceTemplateId() const { return this->dataSourceTemplateId_ != nullptr;};
      void deleteDataSourceTemplateId() { this->dataSourceTemplateId_ = nullptr;};
      inline string getDataSourceTemplateId() const { DARABONBA_PTR_GET_DEFAULT(dataSourceTemplateId_, "") };
      inline DataSourceTemplates& setDataSourceTemplateId(string dataSourceTemplateId) { DARABONBA_PTR_SET_VALUE(dataSourceTemplateId_, dataSourceTemplateId) };


      // dataSourceTemplateName Field Functions 
      bool hasDataSourceTemplateName() const { return this->dataSourceTemplateName_ != nullptr;};
      void deleteDataSourceTemplateName() { this->dataSourceTemplateName_ = nullptr;};
      inline string getDataSourceTemplateName() const { DARABONBA_PTR_GET_DEFAULT(dataSourceTemplateName_, "") };
      inline DataSourceTemplates& setDataSourceTemplateName(string dataSourceTemplateName) { DARABONBA_PTR_SET_VALUE(dataSourceTemplateName_, dataSourceTemplateName) };


      // logProjectPattern Field Functions 
      bool hasLogProjectPattern() const { return this->logProjectPattern_ != nullptr;};
      void deleteLogProjectPattern() { this->logProjectPattern_ = nullptr;};
      inline string getLogProjectPattern() const { DARABONBA_PTR_GET_DEFAULT(logProjectPattern_, "") };
      inline DataSourceTemplates& setLogProjectPattern(string logProjectPattern) { DARABONBA_PTR_SET_VALUE(logProjectPattern_, logProjectPattern) };


      // logRegionIds Field Functions 
      bool hasLogRegionIds() const { return this->logRegionIds_ != nullptr;};
      void deleteLogRegionIds() { this->logRegionIds_ = nullptr;};
      inline const vector<string> & getLogRegionIds() const { DARABONBA_PTR_GET_CONST(logRegionIds_, vector<string>) };
      inline vector<string> getLogRegionIds() { DARABONBA_PTR_GET(logRegionIds_, vector<string>) };
      inline DataSourceTemplates& setLogRegionIds(const vector<string> & logRegionIds) { DARABONBA_PTR_SET_VALUE(logRegionIds_, logRegionIds) };
      inline DataSourceTemplates& setLogRegionIds(vector<string> && logRegionIds) { DARABONBA_PTR_SET_RVALUE(logRegionIds_, logRegionIds) };


      // logStorePattern Field Functions 
      bool hasLogStorePattern() const { return this->logStorePattern_ != nullptr;};
      void deleteLogStorePattern() { this->logStorePattern_ = nullptr;};
      inline string getLogStorePattern() const { DARABONBA_PTR_GET_DEFAULT(logStorePattern_, "") };
      inline DataSourceTemplates& setLogStorePattern(string logStorePattern) { DARABONBA_PTR_SET_VALUE(logStorePattern_, logStorePattern) };


      // logUserIds Field Functions 
      bool hasLogUserIds() const { return this->logUserIds_ != nullptr;};
      void deleteLogUserIds() { this->logUserIds_ = nullptr;};
      inline const vector<string> & getLogUserIds() const { DARABONBA_PTR_GET_CONST(logUserIds_, vector<string>) };
      inline vector<string> getLogUserIds() { DARABONBA_PTR_GET(logUserIds_, vector<string>) };
      inline DataSourceTemplates& setLogUserIds(const vector<string> & logUserIds) { DARABONBA_PTR_SET_VALUE(logUserIds_, logUserIds) };
      inline DataSourceTemplates& setLogUserIds(vector<string> && logUserIds) { DARABONBA_PTR_SET_RVALUE(logUserIds_, logUserIds) };


      // updateTime Field Functions 
      bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
      void deleteUpdateTime() { this->updateTime_ = nullptr;};
      inline int64_t getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, 0L) };
      inline DataSourceTemplates& setUpdateTime(int64_t updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


    protected:
      shared_ptr<string> autoScanNew_ {};
      shared_ptr<int64_t> createTime_ {};
      shared_ptr<string> dataSourceFrom_ {};
      shared_ptr<bool> dataSourceRecognizeEnabled_ {};
      shared_ptr<string> dataSourceRecognizer_ {};
      shared_ptr<string> dataSourceTemplateId_ {};
      shared_ptr<string> dataSourceTemplateName_ {};
      shared_ptr<string> logProjectPattern_ {};
      shared_ptr<vector<string>> logRegionIds_ {};
      shared_ptr<string> logStorePattern_ {};
      shared_ptr<vector<string>> logUserIds_ {};
      shared_ptr<int64_t> updateTime_ {};
    };

    virtual bool empty() const override { return this->dataSourceTemplates_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr; };
    // dataSourceTemplates Field Functions 
    bool hasDataSourceTemplates() const { return this->dataSourceTemplates_ != nullptr;};
    void deleteDataSourceTemplates() { this->dataSourceTemplates_ = nullptr;};
    inline const vector<ListDataSourceTemplatesResponseBody::DataSourceTemplates> & getDataSourceTemplates() const { DARABONBA_PTR_GET_CONST(dataSourceTemplates_, vector<ListDataSourceTemplatesResponseBody::DataSourceTemplates>) };
    inline vector<ListDataSourceTemplatesResponseBody::DataSourceTemplates> getDataSourceTemplates() { DARABONBA_PTR_GET(dataSourceTemplates_, vector<ListDataSourceTemplatesResponseBody::DataSourceTemplates>) };
    inline ListDataSourceTemplatesResponseBody& setDataSourceTemplates(const vector<ListDataSourceTemplatesResponseBody::DataSourceTemplates> & dataSourceTemplates) { DARABONBA_PTR_SET_VALUE(dataSourceTemplates_, dataSourceTemplates) };
    inline ListDataSourceTemplatesResponseBody& setDataSourceTemplates(vector<ListDataSourceTemplatesResponseBody::DataSourceTemplates> && dataSourceTemplates) { DARABONBA_PTR_SET_RVALUE(dataSourceTemplates_, dataSourceTemplates) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline string getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, "") };
    inline ListDataSourceTemplatesResponseBody& setPageNumber(string pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline string getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, "") };
    inline ListDataSourceTemplatesResponseBody& setPageSize(string pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListDataSourceTemplatesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<vector<ListDataSourceTemplatesResponseBody::DataSourceTemplates>> dataSourceTemplates_ {};
    shared_ptr<string> pageNumber_ {};
    shared_ptr<string> pageSize_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudSiem20241212
#endif
