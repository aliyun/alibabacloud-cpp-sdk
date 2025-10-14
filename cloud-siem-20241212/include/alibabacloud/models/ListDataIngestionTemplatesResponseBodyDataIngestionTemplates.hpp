// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDATAINGESTIONTEMPLATESRESPONSEBODYDATAINGESTIONTEMPLATES_HPP_
#define ALIBABACLOUD_MODELS_LISTDATAINGESTIONTEMPLATESRESPONSEBODYDATAINGESTIONTEMPLATES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudSiem20241212
{
namespace Models
{
  class ListDataIngestionTemplatesResponseBodyDataIngestionTemplates : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDataIngestionTemplatesResponseBodyDataIngestionTemplates& obj) { 
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
    friend void from_json(const Darabonba::Json& j, ListDataIngestionTemplatesResponseBodyDataIngestionTemplates& obj) { 
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
    ListDataIngestionTemplatesResponseBodyDataIngestionTemplates() = default ;
    ListDataIngestionTemplatesResponseBodyDataIngestionTemplates(const ListDataIngestionTemplatesResponseBodyDataIngestionTemplates &) = default ;
    ListDataIngestionTemplatesResponseBodyDataIngestionTemplates(ListDataIngestionTemplatesResponseBodyDataIngestionTemplates &&) = default ;
    ListDataIngestionTemplatesResponseBodyDataIngestionTemplates(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDataIngestionTemplatesResponseBodyDataIngestionTemplates() = default ;
    ListDataIngestionTemplatesResponseBodyDataIngestionTemplates& operator=(const ListDataIngestionTemplatesResponseBodyDataIngestionTemplates &) = default ;
    ListDataIngestionTemplatesResponseBodyDataIngestionTemplates& operator=(ListDataIngestionTemplatesResponseBodyDataIngestionTemplates &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->capacityCount_ == nullptr
        && return this->createTime_ == nullptr && return this->dataIngestionMode_ == nullptr && return this->dataIngestionStatus_ == nullptr && return this->dataIngestionTemplateId_ == nullptr && return this->dataIngestionTemplateName_ == nullptr
        && return this->dataIngestionTemplateStatus_ == nullptr && return this->dataSourceTemplateId_ == nullptr && return this->normalizationRuleId_ == nullptr && return this->normalizationRuleName_ == nullptr && return this->updateTime_ == nullptr; };
    // capacityCount Field Functions 
    bool hasCapacityCount() const { return this->capacityCount_ != nullptr;};
    void deleteCapacityCount() { this->capacityCount_ = nullptr;};
    inline string capacityCount() const { DARABONBA_PTR_GET_DEFAULT(capacityCount_, "") };
    inline ListDataIngestionTemplatesResponseBodyDataIngestionTemplates& setCapacityCount(string capacityCount) { DARABONBA_PTR_SET_VALUE(capacityCount_, capacityCount) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline int64_t createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
    inline ListDataIngestionTemplatesResponseBodyDataIngestionTemplates& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // dataIngestionMode Field Functions 
    bool hasDataIngestionMode() const { return this->dataIngestionMode_ != nullptr;};
    void deleteDataIngestionMode() { this->dataIngestionMode_ = nullptr;};
    inline string dataIngestionMode() const { DARABONBA_PTR_GET_DEFAULT(dataIngestionMode_, "") };
    inline ListDataIngestionTemplatesResponseBodyDataIngestionTemplates& setDataIngestionMode(string dataIngestionMode) { DARABONBA_PTR_SET_VALUE(dataIngestionMode_, dataIngestionMode) };


    // dataIngestionStatus Field Functions 
    bool hasDataIngestionStatus() const { return this->dataIngestionStatus_ != nullptr;};
    void deleteDataIngestionStatus() { this->dataIngestionStatus_ = nullptr;};
    inline string dataIngestionStatus() const { DARABONBA_PTR_GET_DEFAULT(dataIngestionStatus_, "") };
    inline ListDataIngestionTemplatesResponseBodyDataIngestionTemplates& setDataIngestionStatus(string dataIngestionStatus) { DARABONBA_PTR_SET_VALUE(dataIngestionStatus_, dataIngestionStatus) };


    // dataIngestionTemplateId Field Functions 
    bool hasDataIngestionTemplateId() const { return this->dataIngestionTemplateId_ != nullptr;};
    void deleteDataIngestionTemplateId() { this->dataIngestionTemplateId_ = nullptr;};
    inline string dataIngestionTemplateId() const { DARABONBA_PTR_GET_DEFAULT(dataIngestionTemplateId_, "") };
    inline ListDataIngestionTemplatesResponseBodyDataIngestionTemplates& setDataIngestionTemplateId(string dataIngestionTemplateId) { DARABONBA_PTR_SET_VALUE(dataIngestionTemplateId_, dataIngestionTemplateId) };


    // dataIngestionTemplateName Field Functions 
    bool hasDataIngestionTemplateName() const { return this->dataIngestionTemplateName_ != nullptr;};
    void deleteDataIngestionTemplateName() { this->dataIngestionTemplateName_ = nullptr;};
    inline string dataIngestionTemplateName() const { DARABONBA_PTR_GET_DEFAULT(dataIngestionTemplateName_, "") };
    inline ListDataIngestionTemplatesResponseBodyDataIngestionTemplates& setDataIngestionTemplateName(string dataIngestionTemplateName) { DARABONBA_PTR_SET_VALUE(dataIngestionTemplateName_, dataIngestionTemplateName) };


    // dataIngestionTemplateStatus Field Functions 
    bool hasDataIngestionTemplateStatus() const { return this->dataIngestionTemplateStatus_ != nullptr;};
    void deleteDataIngestionTemplateStatus() { this->dataIngestionTemplateStatus_ = nullptr;};
    inline string dataIngestionTemplateStatus() const { DARABONBA_PTR_GET_DEFAULT(dataIngestionTemplateStatus_, "") };
    inline ListDataIngestionTemplatesResponseBodyDataIngestionTemplates& setDataIngestionTemplateStatus(string dataIngestionTemplateStatus) { DARABONBA_PTR_SET_VALUE(dataIngestionTemplateStatus_, dataIngestionTemplateStatus) };


    // dataSourceTemplateId Field Functions 
    bool hasDataSourceTemplateId() const { return this->dataSourceTemplateId_ != nullptr;};
    void deleteDataSourceTemplateId() { this->dataSourceTemplateId_ = nullptr;};
    inline string dataSourceTemplateId() const { DARABONBA_PTR_GET_DEFAULT(dataSourceTemplateId_, "") };
    inline ListDataIngestionTemplatesResponseBodyDataIngestionTemplates& setDataSourceTemplateId(string dataSourceTemplateId) { DARABONBA_PTR_SET_VALUE(dataSourceTemplateId_, dataSourceTemplateId) };


    // normalizationRuleId Field Functions 
    bool hasNormalizationRuleId() const { return this->normalizationRuleId_ != nullptr;};
    void deleteNormalizationRuleId() { this->normalizationRuleId_ = nullptr;};
    inline string normalizationRuleId() const { DARABONBA_PTR_GET_DEFAULT(normalizationRuleId_, "") };
    inline ListDataIngestionTemplatesResponseBodyDataIngestionTemplates& setNormalizationRuleId(string normalizationRuleId) { DARABONBA_PTR_SET_VALUE(normalizationRuleId_, normalizationRuleId) };


    // normalizationRuleName Field Functions 
    bool hasNormalizationRuleName() const { return this->normalizationRuleName_ != nullptr;};
    void deleteNormalizationRuleName() { this->normalizationRuleName_ = nullptr;};
    inline string normalizationRuleName() const { DARABONBA_PTR_GET_DEFAULT(normalizationRuleName_, "") };
    inline ListDataIngestionTemplatesResponseBodyDataIngestionTemplates& setNormalizationRuleName(string normalizationRuleName) { DARABONBA_PTR_SET_VALUE(normalizationRuleName_, normalizationRuleName) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline int64_t updateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, 0L) };
    inline ListDataIngestionTemplatesResponseBodyDataIngestionTemplates& setUpdateTime(int64_t updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


  protected:
    std::shared_ptr<string> capacityCount_ = nullptr;
    std::shared_ptr<int64_t> createTime_ = nullptr;
    std::shared_ptr<string> dataIngestionMode_ = nullptr;
    std::shared_ptr<string> dataIngestionStatus_ = nullptr;
    std::shared_ptr<string> dataIngestionTemplateId_ = nullptr;
    std::shared_ptr<string> dataIngestionTemplateName_ = nullptr;
    std::shared_ptr<string> dataIngestionTemplateStatus_ = nullptr;
    std::shared_ptr<string> dataSourceTemplateId_ = nullptr;
    std::shared_ptr<string> normalizationRuleId_ = nullptr;
    std::shared_ptr<string> normalizationRuleName_ = nullptr;
    std::shared_ptr<int64_t> updateTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudSiem20241212
#endif
