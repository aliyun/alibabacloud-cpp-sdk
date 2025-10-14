// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESITETIMESERIESDATARESPONSEBODYSUMMARIZEDDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESITETIMESERIESDATARESPONSEBODYSUMMARIZEDDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class DescribeSiteTimeSeriesDataResponseBodySummarizedData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSiteTimeSeriesDataResponseBodySummarizedData& obj) { 
      DARABONBA_PTR_TO_JSON(AggMethod, aggMethod_);
      DARABONBA_PTR_TO_JSON(DimensionName, dimensionName_);
      DARABONBA_PTR_TO_JSON(DimensionValue, dimensionValue_);
      DARABONBA_PTR_TO_JSON(FieldName, fieldName_);
      DARABONBA_ANY_TO_JSON(Value, value_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSiteTimeSeriesDataResponseBodySummarizedData& obj) { 
      DARABONBA_PTR_FROM_JSON(AggMethod, aggMethod_);
      DARABONBA_PTR_FROM_JSON(DimensionName, dimensionName_);
      DARABONBA_PTR_FROM_JSON(DimensionValue, dimensionValue_);
      DARABONBA_PTR_FROM_JSON(FieldName, fieldName_);
      DARABONBA_ANY_FROM_JSON(Value, value_);
    };
    DescribeSiteTimeSeriesDataResponseBodySummarizedData() = default ;
    DescribeSiteTimeSeriesDataResponseBodySummarizedData(const DescribeSiteTimeSeriesDataResponseBodySummarizedData &) = default ;
    DescribeSiteTimeSeriesDataResponseBodySummarizedData(DescribeSiteTimeSeriesDataResponseBodySummarizedData &&) = default ;
    DescribeSiteTimeSeriesDataResponseBodySummarizedData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSiteTimeSeriesDataResponseBodySummarizedData() = default ;
    DescribeSiteTimeSeriesDataResponseBodySummarizedData& operator=(const DescribeSiteTimeSeriesDataResponseBodySummarizedData &) = default ;
    DescribeSiteTimeSeriesDataResponseBodySummarizedData& operator=(DescribeSiteTimeSeriesDataResponseBodySummarizedData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->aggMethod_ == nullptr
        && return this->dimensionName_ == nullptr && return this->dimensionValue_ == nullptr && return this->fieldName_ == nullptr && return this->value_ == nullptr; };
    // aggMethod Field Functions 
    bool hasAggMethod() const { return this->aggMethod_ != nullptr;};
    void deleteAggMethod() { this->aggMethod_ = nullptr;};
    inline string aggMethod() const { DARABONBA_PTR_GET_DEFAULT(aggMethod_, "") };
    inline DescribeSiteTimeSeriesDataResponseBodySummarizedData& setAggMethod(string aggMethod) { DARABONBA_PTR_SET_VALUE(aggMethod_, aggMethod) };


    // dimensionName Field Functions 
    bool hasDimensionName() const { return this->dimensionName_ != nullptr;};
    void deleteDimensionName() { this->dimensionName_ = nullptr;};
    inline string dimensionName() const { DARABONBA_PTR_GET_DEFAULT(dimensionName_, "") };
    inline DescribeSiteTimeSeriesDataResponseBodySummarizedData& setDimensionName(string dimensionName) { DARABONBA_PTR_SET_VALUE(dimensionName_, dimensionName) };


    // dimensionValue Field Functions 
    bool hasDimensionValue() const { return this->dimensionValue_ != nullptr;};
    void deleteDimensionValue() { this->dimensionValue_ = nullptr;};
    inline string dimensionValue() const { DARABONBA_PTR_GET_DEFAULT(dimensionValue_, "") };
    inline DescribeSiteTimeSeriesDataResponseBodySummarizedData& setDimensionValue(string dimensionValue) { DARABONBA_PTR_SET_VALUE(dimensionValue_, dimensionValue) };


    // fieldName Field Functions 
    bool hasFieldName() const { return this->fieldName_ != nullptr;};
    void deleteFieldName() { this->fieldName_ = nullptr;};
    inline string fieldName() const { DARABONBA_PTR_GET_DEFAULT(fieldName_, "") };
    inline DescribeSiteTimeSeriesDataResponseBodySummarizedData& setFieldName(string fieldName) { DARABONBA_PTR_SET_VALUE(fieldName_, fieldName) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline     const Darabonba::Json & value() const { DARABONBA_GET(value_) };
    Darabonba::Json & value() { DARABONBA_GET(value_) };
    inline DescribeSiteTimeSeriesDataResponseBodySummarizedData& setValue(const Darabonba::Json & value) { DARABONBA_SET_VALUE(value_, value) };
    inline DescribeSiteTimeSeriesDataResponseBodySummarizedData& setValue(Darabonba::Json & value) { DARABONBA_SET_RVALUE(value_, value) };


  protected:
    // The aggregation method used.
    std::shared_ptr<string> aggMethod_ = nullptr;
    // The dimension of the aggregated data being queried.
    std::shared_ptr<string> dimensionName_ = nullptr;
    // The value of the aggregated dimension being queried.
    std::shared_ptr<string> dimensionValue_ = nullptr;
    // The value of the aggregated metric being queried.
    std::shared_ptr<string> fieldName_ = nullptr;
    // The aggregated value.
    Darabonba::Json value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
