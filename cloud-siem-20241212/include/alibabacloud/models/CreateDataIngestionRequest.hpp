// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEDATAINGESTIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEDATAINGESTIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudSiem20241212
{
namespace Models
{
  class CreateDataIngestionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateDataIngestionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CapacityCount, capacityCount_);
      DARABONBA_PTR_TO_JSON(DataIngestionMode, dataIngestionMode_);
      DARABONBA_PTR_TO_JSON(DataIngestionStateCode, dataIngestionStateCode_);
      DARABONBA_PTR_TO_JSON(DataIngestionType, dataIngestionType_);
      DARABONBA_PTR_TO_JSON(DataSourceEditable, dataSourceEditable_);
      DARABONBA_PTR_TO_JSON(DataSourceId, dataSourceId_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(NormalizationRuleEditable, normalizationRuleEditable_);
      DARABONBA_PTR_TO_JSON(NormalizationRuleId, normalizationRuleId_);
      DARABONBA_PTR_TO_JSON(ProductId, productId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RoleFor, roleFor_);
      DARABONBA_PTR_TO_JSON(ScanDataSourceId, scanDataSourceId_);
      DARABONBA_PTR_TO_JSON(StreamJobId, streamJobId_);
      DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
    };
    friend void from_json(const Darabonba::Json& j, CreateDataIngestionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CapacityCount, capacityCount_);
      DARABONBA_PTR_FROM_JSON(DataIngestionMode, dataIngestionMode_);
      DARABONBA_PTR_FROM_JSON(DataIngestionStateCode, dataIngestionStateCode_);
      DARABONBA_PTR_FROM_JSON(DataIngestionType, dataIngestionType_);
      DARABONBA_PTR_FROM_JSON(DataSourceEditable, dataSourceEditable_);
      DARABONBA_PTR_FROM_JSON(DataSourceId, dataSourceId_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(NormalizationRuleEditable, normalizationRuleEditable_);
      DARABONBA_PTR_FROM_JSON(NormalizationRuleId, normalizationRuleId_);
      DARABONBA_PTR_FROM_JSON(ProductId, productId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RoleFor, roleFor_);
      DARABONBA_PTR_FROM_JSON(ScanDataSourceId, scanDataSourceId_);
      DARABONBA_PTR_FROM_JSON(StreamJobId, streamJobId_);
      DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
    };
    CreateDataIngestionRequest() = default ;
    CreateDataIngestionRequest(const CreateDataIngestionRequest &) = default ;
    CreateDataIngestionRequest(CreateDataIngestionRequest &&) = default ;
    CreateDataIngestionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateDataIngestionRequest() = default ;
    CreateDataIngestionRequest& operator=(const CreateDataIngestionRequest &) = default ;
    CreateDataIngestionRequest& operator=(CreateDataIngestionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->capacityCount_ == nullptr
        && return this->dataIngestionMode_ == nullptr && return this->dataIngestionStateCode_ == nullptr && return this->dataIngestionType_ == nullptr && return this->dataSourceEditable_ == nullptr && return this->dataSourceId_ == nullptr
        && return this->lang_ == nullptr && return this->normalizationRuleEditable_ == nullptr && return this->normalizationRuleId_ == nullptr && return this->productId_ == nullptr && return this->regionId_ == nullptr
        && return this->roleFor_ == nullptr && return this->scanDataSourceId_ == nullptr && return this->streamJobId_ == nullptr && return this->updateTime_ == nullptr; };
    // capacityCount Field Functions 
    bool hasCapacityCount() const { return this->capacityCount_ != nullptr;};
    void deleteCapacityCount() { this->capacityCount_ = nullptr;};
    inline int32_t capacityCount() const { DARABONBA_PTR_GET_DEFAULT(capacityCount_, 0) };
    inline CreateDataIngestionRequest& setCapacityCount(int32_t capacityCount) { DARABONBA_PTR_SET_VALUE(capacityCount_, capacityCount) };


    // dataIngestionMode Field Functions 
    bool hasDataIngestionMode() const { return this->dataIngestionMode_ != nullptr;};
    void deleteDataIngestionMode() { this->dataIngestionMode_ = nullptr;};
    inline string dataIngestionMode() const { DARABONBA_PTR_GET_DEFAULT(dataIngestionMode_, "") };
    inline CreateDataIngestionRequest& setDataIngestionMode(string dataIngestionMode) { DARABONBA_PTR_SET_VALUE(dataIngestionMode_, dataIngestionMode) };


    // dataIngestionStateCode Field Functions 
    bool hasDataIngestionStateCode() const { return this->dataIngestionStateCode_ != nullptr;};
    void deleteDataIngestionStateCode() { this->dataIngestionStateCode_ = nullptr;};
    inline string dataIngestionStateCode() const { DARABONBA_PTR_GET_DEFAULT(dataIngestionStateCode_, "") };
    inline CreateDataIngestionRequest& setDataIngestionStateCode(string dataIngestionStateCode) { DARABONBA_PTR_SET_VALUE(dataIngestionStateCode_, dataIngestionStateCode) };


    // dataIngestionType Field Functions 
    bool hasDataIngestionType() const { return this->dataIngestionType_ != nullptr;};
    void deleteDataIngestionType() { this->dataIngestionType_ = nullptr;};
    inline string dataIngestionType() const { DARABONBA_PTR_GET_DEFAULT(dataIngestionType_, "") };
    inline CreateDataIngestionRequest& setDataIngestionType(string dataIngestionType) { DARABONBA_PTR_SET_VALUE(dataIngestionType_, dataIngestionType) };


    // dataSourceEditable Field Functions 
    bool hasDataSourceEditable() const { return this->dataSourceEditable_ != nullptr;};
    void deleteDataSourceEditable() { this->dataSourceEditable_ = nullptr;};
    inline bool dataSourceEditable() const { DARABONBA_PTR_GET_DEFAULT(dataSourceEditable_, false) };
    inline CreateDataIngestionRequest& setDataSourceEditable(bool dataSourceEditable) { DARABONBA_PTR_SET_VALUE(dataSourceEditable_, dataSourceEditable) };


    // dataSourceId Field Functions 
    bool hasDataSourceId() const { return this->dataSourceId_ != nullptr;};
    void deleteDataSourceId() { this->dataSourceId_ = nullptr;};
    inline string dataSourceId() const { DARABONBA_PTR_GET_DEFAULT(dataSourceId_, "") };
    inline CreateDataIngestionRequest& setDataSourceId(string dataSourceId) { DARABONBA_PTR_SET_VALUE(dataSourceId_, dataSourceId) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string lang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline CreateDataIngestionRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // normalizationRuleEditable Field Functions 
    bool hasNormalizationRuleEditable() const { return this->normalizationRuleEditable_ != nullptr;};
    void deleteNormalizationRuleEditable() { this->normalizationRuleEditable_ = nullptr;};
    inline bool normalizationRuleEditable() const { DARABONBA_PTR_GET_DEFAULT(normalizationRuleEditable_, false) };
    inline CreateDataIngestionRequest& setNormalizationRuleEditable(bool normalizationRuleEditable) { DARABONBA_PTR_SET_VALUE(normalizationRuleEditable_, normalizationRuleEditable) };


    // normalizationRuleId Field Functions 
    bool hasNormalizationRuleId() const { return this->normalizationRuleId_ != nullptr;};
    void deleteNormalizationRuleId() { this->normalizationRuleId_ = nullptr;};
    inline string normalizationRuleId() const { DARABONBA_PTR_GET_DEFAULT(normalizationRuleId_, "") };
    inline CreateDataIngestionRequest& setNormalizationRuleId(string normalizationRuleId) { DARABONBA_PTR_SET_VALUE(normalizationRuleId_, normalizationRuleId) };


    // productId Field Functions 
    bool hasProductId() const { return this->productId_ != nullptr;};
    void deleteProductId() { this->productId_ = nullptr;};
    inline string productId() const { DARABONBA_PTR_GET_DEFAULT(productId_, "") };
    inline CreateDataIngestionRequest& setProductId(string productId) { DARABONBA_PTR_SET_VALUE(productId_, productId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateDataIngestionRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // roleFor Field Functions 
    bool hasRoleFor() const { return this->roleFor_ != nullptr;};
    void deleteRoleFor() { this->roleFor_ = nullptr;};
    inline int64_t roleFor() const { DARABONBA_PTR_GET_DEFAULT(roleFor_, 0L) };
    inline CreateDataIngestionRequest& setRoleFor(int64_t roleFor) { DARABONBA_PTR_SET_VALUE(roleFor_, roleFor) };


    // scanDataSourceId Field Functions 
    bool hasScanDataSourceId() const { return this->scanDataSourceId_ != nullptr;};
    void deleteScanDataSourceId() { this->scanDataSourceId_ = nullptr;};
    inline string scanDataSourceId() const { DARABONBA_PTR_GET_DEFAULT(scanDataSourceId_, "") };
    inline CreateDataIngestionRequest& setScanDataSourceId(string scanDataSourceId) { DARABONBA_PTR_SET_VALUE(scanDataSourceId_, scanDataSourceId) };


    // streamJobId Field Functions 
    bool hasStreamJobId() const { return this->streamJobId_ != nullptr;};
    void deleteStreamJobId() { this->streamJobId_ = nullptr;};
    inline string streamJobId() const { DARABONBA_PTR_GET_DEFAULT(streamJobId_, "") };
    inline CreateDataIngestionRequest& setStreamJobId(string streamJobId) { DARABONBA_PTR_SET_VALUE(streamJobId_, streamJobId) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline int64_t updateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, 0L) };
    inline CreateDataIngestionRequest& setUpdateTime(int64_t updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


  protected:
    std::shared_ptr<int32_t> capacityCount_ = nullptr;
    std::shared_ptr<string> dataIngestionMode_ = nullptr;
    std::shared_ptr<string> dataIngestionStateCode_ = nullptr;
    std::shared_ptr<string> dataIngestionType_ = nullptr;
    std::shared_ptr<bool> dataSourceEditable_ = nullptr;
    std::shared_ptr<string> dataSourceId_ = nullptr;
    std::shared_ptr<string> lang_ = nullptr;
    std::shared_ptr<bool> normalizationRuleEditable_ = nullptr;
    std::shared_ptr<string> normalizationRuleId_ = nullptr;
    std::shared_ptr<string> productId_ = nullptr;
    std::shared_ptr<string> regionId_ = nullptr;
    std::shared_ptr<int64_t> roleFor_ = nullptr;
    std::shared_ptr<string> scanDataSourceId_ = nullptr;
    std::shared_ptr<string> streamJobId_ = nullptr;
    std::shared_ptr<int64_t> updateTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudSiem20241212
#endif
