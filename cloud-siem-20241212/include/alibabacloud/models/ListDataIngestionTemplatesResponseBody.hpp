// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDATAINGESTIONTEMPLATESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTDATAINGESTIONTEMPLATESRESPONSEBODY_HPP_
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
  class ListDataIngestionTemplatesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDataIngestionTemplatesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DataIngestionTemplates, dataIngestionTemplates_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListDataIngestionTemplatesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DataIngestionTemplates, dataIngestionTemplates_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListDataIngestionTemplatesResponseBody() = default ;
    ListDataIngestionTemplatesResponseBody(const ListDataIngestionTemplatesResponseBody &) = default ;
    ListDataIngestionTemplatesResponseBody(ListDataIngestionTemplatesResponseBody &&) = default ;
    ListDataIngestionTemplatesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDataIngestionTemplatesResponseBody() = default ;
    ListDataIngestionTemplatesResponseBody& operator=(const ListDataIngestionTemplatesResponseBody &) = default ;
    ListDataIngestionTemplatesResponseBody& operator=(ListDataIngestionTemplatesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class DataIngestionTemplates : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DataIngestionTemplates& obj) { 
        DARABONBA_PTR_TO_JSON(CapacityCount, capacityCount_);
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(DataIngestionMode, dataIngestionMode_);
        DARABONBA_PTR_TO_JSON(DataIngestionStatus, dataIngestionStatus_);
        DARABONBA_PTR_TO_JSON(DataIngestionTemplateId, dataIngestionTemplateId_);
        DARABONBA_PTR_TO_JSON(DataIngestionTemplateName, dataIngestionTemplateName_);
        DARABONBA_PTR_TO_JSON(DataIngestionTemplateStatus, dataIngestionTemplateStatus_);
        DARABONBA_PTR_TO_JSON(DataSourceTemplateId, dataSourceTemplateId_);
        DARABONBA_PTR_TO_JSON(NormalizationRuleId, normalizationRuleId_);
        DARABONBA_PTR_TO_JSON(NormalizationRuleName, normalizationRuleName_);
        DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
      };
      friend void from_json(const Darabonba::Json& j, DataIngestionTemplates& obj) { 
        DARABONBA_PTR_FROM_JSON(CapacityCount, capacityCount_);
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(DataIngestionMode, dataIngestionMode_);
        DARABONBA_PTR_FROM_JSON(DataIngestionStatus, dataIngestionStatus_);
        DARABONBA_PTR_FROM_JSON(DataIngestionTemplateId, dataIngestionTemplateId_);
        DARABONBA_PTR_FROM_JSON(DataIngestionTemplateName, dataIngestionTemplateName_);
        DARABONBA_PTR_FROM_JSON(DataIngestionTemplateStatus, dataIngestionTemplateStatus_);
        DARABONBA_PTR_FROM_JSON(DataSourceTemplateId, dataSourceTemplateId_);
        DARABONBA_PTR_FROM_JSON(NormalizationRuleId, normalizationRuleId_);
        DARABONBA_PTR_FROM_JSON(NormalizationRuleName, normalizationRuleName_);
        DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
      };
      DataIngestionTemplates() = default ;
      DataIngestionTemplates(const DataIngestionTemplates &) = default ;
      DataIngestionTemplates(DataIngestionTemplates &&) = default ;
      DataIngestionTemplates(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DataIngestionTemplates() = default ;
      DataIngestionTemplates& operator=(const DataIngestionTemplates &) = default ;
      DataIngestionTemplates& operator=(DataIngestionTemplates &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->capacityCount_ == nullptr
        && this->createTime_ == nullptr && this->dataIngestionMode_ == nullptr && this->dataIngestionStatus_ == nullptr && this->dataIngestionTemplateId_ == nullptr && this->dataIngestionTemplateName_ == nullptr
        && this->dataIngestionTemplateStatus_ == nullptr && this->dataSourceTemplateId_ == nullptr && this->normalizationRuleId_ == nullptr && this->normalizationRuleName_ == nullptr && this->updateTime_ == nullptr; };
      // capacityCount Field Functions 
      bool hasCapacityCount() const { return this->capacityCount_ != nullptr;};
      void deleteCapacityCount() { this->capacityCount_ = nullptr;};
      inline string getCapacityCount() const { DARABONBA_PTR_GET_DEFAULT(capacityCount_, "") };
      inline DataIngestionTemplates& setCapacityCount(string capacityCount) { DARABONBA_PTR_SET_VALUE(capacityCount_, capacityCount) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline int64_t getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
      inline DataIngestionTemplates& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // dataIngestionMode Field Functions 
      bool hasDataIngestionMode() const { return this->dataIngestionMode_ != nullptr;};
      void deleteDataIngestionMode() { this->dataIngestionMode_ = nullptr;};
      inline string getDataIngestionMode() const { DARABONBA_PTR_GET_DEFAULT(dataIngestionMode_, "") };
      inline DataIngestionTemplates& setDataIngestionMode(string dataIngestionMode) { DARABONBA_PTR_SET_VALUE(dataIngestionMode_, dataIngestionMode) };


      // dataIngestionStatus Field Functions 
      bool hasDataIngestionStatus() const { return this->dataIngestionStatus_ != nullptr;};
      void deleteDataIngestionStatus() { this->dataIngestionStatus_ = nullptr;};
      inline string getDataIngestionStatus() const { DARABONBA_PTR_GET_DEFAULT(dataIngestionStatus_, "") };
      inline DataIngestionTemplates& setDataIngestionStatus(string dataIngestionStatus) { DARABONBA_PTR_SET_VALUE(dataIngestionStatus_, dataIngestionStatus) };


      // dataIngestionTemplateId Field Functions 
      bool hasDataIngestionTemplateId() const { return this->dataIngestionTemplateId_ != nullptr;};
      void deleteDataIngestionTemplateId() { this->dataIngestionTemplateId_ = nullptr;};
      inline string getDataIngestionTemplateId() const { DARABONBA_PTR_GET_DEFAULT(dataIngestionTemplateId_, "") };
      inline DataIngestionTemplates& setDataIngestionTemplateId(string dataIngestionTemplateId) { DARABONBA_PTR_SET_VALUE(dataIngestionTemplateId_, dataIngestionTemplateId) };


      // dataIngestionTemplateName Field Functions 
      bool hasDataIngestionTemplateName() const { return this->dataIngestionTemplateName_ != nullptr;};
      void deleteDataIngestionTemplateName() { this->dataIngestionTemplateName_ = nullptr;};
      inline string getDataIngestionTemplateName() const { DARABONBA_PTR_GET_DEFAULT(dataIngestionTemplateName_, "") };
      inline DataIngestionTemplates& setDataIngestionTemplateName(string dataIngestionTemplateName) { DARABONBA_PTR_SET_VALUE(dataIngestionTemplateName_, dataIngestionTemplateName) };


      // dataIngestionTemplateStatus Field Functions 
      bool hasDataIngestionTemplateStatus() const { return this->dataIngestionTemplateStatus_ != nullptr;};
      void deleteDataIngestionTemplateStatus() { this->dataIngestionTemplateStatus_ = nullptr;};
      inline string getDataIngestionTemplateStatus() const { DARABONBA_PTR_GET_DEFAULT(dataIngestionTemplateStatus_, "") };
      inline DataIngestionTemplates& setDataIngestionTemplateStatus(string dataIngestionTemplateStatus) { DARABONBA_PTR_SET_VALUE(dataIngestionTemplateStatus_, dataIngestionTemplateStatus) };


      // dataSourceTemplateId Field Functions 
      bool hasDataSourceTemplateId() const { return this->dataSourceTemplateId_ != nullptr;};
      void deleteDataSourceTemplateId() { this->dataSourceTemplateId_ = nullptr;};
      inline string getDataSourceTemplateId() const { DARABONBA_PTR_GET_DEFAULT(dataSourceTemplateId_, "") };
      inline DataIngestionTemplates& setDataSourceTemplateId(string dataSourceTemplateId) { DARABONBA_PTR_SET_VALUE(dataSourceTemplateId_, dataSourceTemplateId) };


      // normalizationRuleId Field Functions 
      bool hasNormalizationRuleId() const { return this->normalizationRuleId_ != nullptr;};
      void deleteNormalizationRuleId() { this->normalizationRuleId_ = nullptr;};
      inline string getNormalizationRuleId() const { DARABONBA_PTR_GET_DEFAULT(normalizationRuleId_, "") };
      inline DataIngestionTemplates& setNormalizationRuleId(string normalizationRuleId) { DARABONBA_PTR_SET_VALUE(normalizationRuleId_, normalizationRuleId) };


      // normalizationRuleName Field Functions 
      bool hasNormalizationRuleName() const { return this->normalizationRuleName_ != nullptr;};
      void deleteNormalizationRuleName() { this->normalizationRuleName_ = nullptr;};
      inline string getNormalizationRuleName() const { DARABONBA_PTR_GET_DEFAULT(normalizationRuleName_, "") };
      inline DataIngestionTemplates& setNormalizationRuleName(string normalizationRuleName) { DARABONBA_PTR_SET_VALUE(normalizationRuleName_, normalizationRuleName) };


      // updateTime Field Functions 
      bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
      void deleteUpdateTime() { this->updateTime_ = nullptr;};
      inline int64_t getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, 0L) };
      inline DataIngestionTemplates& setUpdateTime(int64_t updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


    protected:
      shared_ptr<string> capacityCount_ {};
      shared_ptr<int64_t> createTime_ {};
      shared_ptr<string> dataIngestionMode_ {};
      shared_ptr<string> dataIngestionStatus_ {};
      shared_ptr<string> dataIngestionTemplateId_ {};
      shared_ptr<string> dataIngestionTemplateName_ {};
      shared_ptr<string> dataIngestionTemplateStatus_ {};
      shared_ptr<string> dataSourceTemplateId_ {};
      shared_ptr<string> normalizationRuleId_ {};
      shared_ptr<string> normalizationRuleName_ {};
      shared_ptr<int64_t> updateTime_ {};
    };

    virtual bool empty() const override { return this->dataIngestionTemplates_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr; };
    // dataIngestionTemplates Field Functions 
    bool hasDataIngestionTemplates() const { return this->dataIngestionTemplates_ != nullptr;};
    void deleteDataIngestionTemplates() { this->dataIngestionTemplates_ = nullptr;};
    inline const vector<ListDataIngestionTemplatesResponseBody::DataIngestionTemplates> & getDataIngestionTemplates() const { DARABONBA_PTR_GET_CONST(dataIngestionTemplates_, vector<ListDataIngestionTemplatesResponseBody::DataIngestionTemplates>) };
    inline vector<ListDataIngestionTemplatesResponseBody::DataIngestionTemplates> getDataIngestionTemplates() { DARABONBA_PTR_GET(dataIngestionTemplates_, vector<ListDataIngestionTemplatesResponseBody::DataIngestionTemplates>) };
    inline ListDataIngestionTemplatesResponseBody& setDataIngestionTemplates(const vector<ListDataIngestionTemplatesResponseBody::DataIngestionTemplates> & dataIngestionTemplates) { DARABONBA_PTR_SET_VALUE(dataIngestionTemplates_, dataIngestionTemplates) };
    inline ListDataIngestionTemplatesResponseBody& setDataIngestionTemplates(vector<ListDataIngestionTemplatesResponseBody::DataIngestionTemplates> && dataIngestionTemplates) { DARABONBA_PTR_SET_RVALUE(dataIngestionTemplates_, dataIngestionTemplates) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline string getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, "") };
    inline ListDataIngestionTemplatesResponseBody& setPageNumber(string pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline string getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, "") };
    inline ListDataIngestionTemplatesResponseBody& setPageSize(string pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListDataIngestionTemplatesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<vector<ListDataIngestionTemplatesResponseBody::DataIngestionTemplates>> dataIngestionTemplates_ {};
    shared_ptr<string> pageNumber_ {};
    shared_ptr<string> pageSize_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudSiem20241212
#endif
