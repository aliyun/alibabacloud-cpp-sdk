// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETREGIONCONFIGURATIONRESPONSEBODYRESULTWARMNODEPROPERTIESAMOUNTRANGE_HPP_
#define ALIBABACLOUD_MODELS_GETREGIONCONFIGURATIONRESPONSEBODYRESULTWARMNODEPROPERTIESAMOUNTRANGE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Elasticsearch20170613
{
namespace Models
{
  class GetRegionConfigurationResponseBodyResultWarmNodePropertiesAmountRange : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetRegionConfigurationResponseBodyResultWarmNodePropertiesAmountRange& obj) { 
      DARABONBA_PTR_TO_JSON(maxAmount, maxAmount_);
      DARABONBA_PTR_TO_JSON(minAmount, minAmount_);
    };
    friend void from_json(const Darabonba::Json& j, GetRegionConfigurationResponseBodyResultWarmNodePropertiesAmountRange& obj) { 
      DARABONBA_PTR_FROM_JSON(maxAmount, maxAmount_);
      DARABONBA_PTR_FROM_JSON(minAmount, minAmount_);
    };
    GetRegionConfigurationResponseBodyResultWarmNodePropertiesAmountRange() = default ;
    GetRegionConfigurationResponseBodyResultWarmNodePropertiesAmountRange(const GetRegionConfigurationResponseBodyResultWarmNodePropertiesAmountRange &) = default ;
    GetRegionConfigurationResponseBodyResultWarmNodePropertiesAmountRange(GetRegionConfigurationResponseBodyResultWarmNodePropertiesAmountRange &&) = default ;
    GetRegionConfigurationResponseBodyResultWarmNodePropertiesAmountRange(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetRegionConfigurationResponseBodyResultWarmNodePropertiesAmountRange() = default ;
    GetRegionConfigurationResponseBodyResultWarmNodePropertiesAmountRange& operator=(const GetRegionConfigurationResponseBodyResultWarmNodePropertiesAmountRange &) = default ;
    GetRegionConfigurationResponseBodyResultWarmNodePropertiesAmountRange& operator=(GetRegionConfigurationResponseBodyResultWarmNodePropertiesAmountRange &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->maxAmount_ != nullptr
        && this->minAmount_ != nullptr; };
    // maxAmount Field Functions 
    bool hasMaxAmount() const { return this->maxAmount_ != nullptr;};
    void deleteMaxAmount() { this->maxAmount_ = nullptr;};
    inline int32_t maxAmount() const { DARABONBA_PTR_GET_DEFAULT(maxAmount_, 0) };
    inline GetRegionConfigurationResponseBodyResultWarmNodePropertiesAmountRange& setMaxAmount(int32_t maxAmount) { DARABONBA_PTR_SET_VALUE(maxAmount_, maxAmount) };


    // minAmount Field Functions 
    bool hasMinAmount() const { return this->minAmount_ != nullptr;};
    void deleteMinAmount() { this->minAmount_ = nullptr;};
    inline int32_t minAmount() const { DARABONBA_PTR_GET_DEFAULT(minAmount_, 0) };
    inline GetRegionConfigurationResponseBodyResultWarmNodePropertiesAmountRange& setMinAmount(int32_t minAmount) { DARABONBA_PTR_SET_VALUE(minAmount_, minAmount) };


  protected:
    std::shared_ptr<int32_t> maxAmount_ = nullptr;
    std::shared_ptr<int32_t> minAmount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Elasticsearch20170613
#endif
