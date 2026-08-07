// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECOSTRULESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECOSTRULESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class DescribeCostRulesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCostRulesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EffectiveTargetType, effectiveTargetType_);
      DARABONBA_PTR_TO_JSON(EffectiveTargetValue, effectiveTargetValue_);
      DARABONBA_PTR_TO_JSON(GwClusterId, gwClusterId_);
      DARABONBA_PTR_TO_JSON(ModelName, modelName_);
      DARABONBA_PTR_TO_JSON(ModelServiceId, modelServiceId_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCostRulesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EffectiveTargetType, effectiveTargetType_);
      DARABONBA_PTR_FROM_JSON(EffectiveTargetValue, effectiveTargetValue_);
      DARABONBA_PTR_FROM_JSON(GwClusterId, gwClusterId_);
      DARABONBA_PTR_FROM_JSON(ModelName, modelName_);
      DARABONBA_PTR_FROM_JSON(ModelServiceId, modelServiceId_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    DescribeCostRulesRequest() = default ;
    DescribeCostRulesRequest(const DescribeCostRulesRequest &) = default ;
    DescribeCostRulesRequest(DescribeCostRulesRequest &&) = default ;
    DescribeCostRulesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCostRulesRequest() = default ;
    DescribeCostRulesRequest& operator=(const DescribeCostRulesRequest &) = default ;
    DescribeCostRulesRequest& operator=(DescribeCostRulesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->effectiveTargetType_ == nullptr
        && this->effectiveTargetValue_ == nullptr && this->gwClusterId_ == nullptr && this->modelName_ == nullptr && this->modelServiceId_ == nullptr && this->pageNumber_ == nullptr
        && this->pageSize_ == nullptr && this->regionId_ == nullptr; };
    // effectiveTargetType Field Functions 
    bool hasEffectiveTargetType() const { return this->effectiveTargetType_ != nullptr;};
    void deleteEffectiveTargetType() { this->effectiveTargetType_ = nullptr;};
    inline string getEffectiveTargetType() const { DARABONBA_PTR_GET_DEFAULT(effectiveTargetType_, "") };
    inline DescribeCostRulesRequest& setEffectiveTargetType(string effectiveTargetType) { DARABONBA_PTR_SET_VALUE(effectiveTargetType_, effectiveTargetType) };


    // effectiveTargetValue Field Functions 
    bool hasEffectiveTargetValue() const { return this->effectiveTargetValue_ != nullptr;};
    void deleteEffectiveTargetValue() { this->effectiveTargetValue_ = nullptr;};
    inline string getEffectiveTargetValue() const { DARABONBA_PTR_GET_DEFAULT(effectiveTargetValue_, "") };
    inline DescribeCostRulesRequest& setEffectiveTargetValue(string effectiveTargetValue) { DARABONBA_PTR_SET_VALUE(effectiveTargetValue_, effectiveTargetValue) };


    // gwClusterId Field Functions 
    bool hasGwClusterId() const { return this->gwClusterId_ != nullptr;};
    void deleteGwClusterId() { this->gwClusterId_ = nullptr;};
    inline string getGwClusterId() const { DARABONBA_PTR_GET_DEFAULT(gwClusterId_, "") };
    inline DescribeCostRulesRequest& setGwClusterId(string gwClusterId) { DARABONBA_PTR_SET_VALUE(gwClusterId_, gwClusterId) };


    // modelName Field Functions 
    bool hasModelName() const { return this->modelName_ != nullptr;};
    void deleteModelName() { this->modelName_ = nullptr;};
    inline string getModelName() const { DARABONBA_PTR_GET_DEFAULT(modelName_, "") };
    inline DescribeCostRulesRequest& setModelName(string modelName) { DARABONBA_PTR_SET_VALUE(modelName_, modelName) };


    // modelServiceId Field Functions 
    bool hasModelServiceId() const { return this->modelServiceId_ != nullptr;};
    void deleteModelServiceId() { this->modelServiceId_ = nullptr;};
    inline string getModelServiceId() const { DARABONBA_PTR_GET_DEFAULT(modelServiceId_, "") };
    inline DescribeCostRulesRequest& setModelServiceId(string modelServiceId) { DARABONBA_PTR_SET_VALUE(modelServiceId_, modelServiceId) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeCostRulesRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeCostRulesRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeCostRulesRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // Filters by effective target type. Valid values: global, consumerGroup, and consumer.
    shared_ptr<string> effectiveTargetType_ {};
    // Filters by effective target value.
    shared_ptr<string> effectiveTargetValue_ {};
    // The gateway instance ID.
    // 
    // This parameter is required.
    shared_ptr<string> gwClusterId_ {};
    // The model name, such as gpt-4 or qwen-turbo.
    shared_ptr<string> modelName_ {};
    // The model service ID.
    shared_ptr<string> modelServiceId_ {};
    // The page number.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries per page. Valid values:
    // * **30**
    // * **50**
    // * **100**
    // 
    // Default value: 30.
    shared_ptr<int32_t> pageSize_ {};
    // The region ID.
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
