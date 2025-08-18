// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESITETIMESERIESDATARESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESITETIMESERIESDATARESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeSiteTimeSeriesDataResponseBodyDataDetailData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class DescribeSiteTimeSeriesDataResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSiteTimeSeriesDataResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(DetailData, detailData_);
      DARABONBA_PTR_TO_JSON(DimensionName, dimensionName_);
      DARABONBA_PTR_TO_JSON(DimensionValue, dimensionValue_);
      DARABONBA_PTR_TO_JSON(FieldName, fieldName_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSiteTimeSeriesDataResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(DetailData, detailData_);
      DARABONBA_PTR_FROM_JSON(DimensionName, dimensionName_);
      DARABONBA_PTR_FROM_JSON(DimensionValue, dimensionValue_);
      DARABONBA_PTR_FROM_JSON(FieldName, fieldName_);
    };
    DescribeSiteTimeSeriesDataResponseBodyData() = default ;
    DescribeSiteTimeSeriesDataResponseBodyData(const DescribeSiteTimeSeriesDataResponseBodyData &) = default ;
    DescribeSiteTimeSeriesDataResponseBodyData(DescribeSiteTimeSeriesDataResponseBodyData &&) = default ;
    DescribeSiteTimeSeriesDataResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSiteTimeSeriesDataResponseBodyData() = default ;
    DescribeSiteTimeSeriesDataResponseBodyData& operator=(const DescribeSiteTimeSeriesDataResponseBodyData &) = default ;
    DescribeSiteTimeSeriesDataResponseBodyData& operator=(DescribeSiteTimeSeriesDataResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->detailData_ != nullptr
        && this->dimensionName_ != nullptr && this->dimensionValue_ != nullptr && this->fieldName_ != nullptr; };
    // detailData Field Functions 
    bool hasDetailData() const { return this->detailData_ != nullptr;};
    void deleteDetailData() { this->detailData_ = nullptr;};
    inline const vector<Models::DescribeSiteTimeSeriesDataResponseBodyDataDetailData> & detailData() const { DARABONBA_PTR_GET_CONST(detailData_, vector<Models::DescribeSiteTimeSeriesDataResponseBodyDataDetailData>) };
    inline vector<Models::DescribeSiteTimeSeriesDataResponseBodyDataDetailData> detailData() { DARABONBA_PTR_GET(detailData_, vector<Models::DescribeSiteTimeSeriesDataResponseBodyDataDetailData>) };
    inline DescribeSiteTimeSeriesDataResponseBodyData& setDetailData(const vector<Models::DescribeSiteTimeSeriesDataResponseBodyDataDetailData> & detailData) { DARABONBA_PTR_SET_VALUE(detailData_, detailData) };
    inline DescribeSiteTimeSeriesDataResponseBodyData& setDetailData(vector<Models::DescribeSiteTimeSeriesDataResponseBodyDataDetailData> && detailData) { DARABONBA_PTR_SET_RVALUE(detailData_, detailData) };


    // dimensionName Field Functions 
    bool hasDimensionName() const { return this->dimensionName_ != nullptr;};
    void deleteDimensionName() { this->dimensionName_ = nullptr;};
    inline string dimensionName() const { DARABONBA_PTR_GET_DEFAULT(dimensionName_, "") };
    inline DescribeSiteTimeSeriesDataResponseBodyData& setDimensionName(string dimensionName) { DARABONBA_PTR_SET_VALUE(dimensionName_, dimensionName) };


    // dimensionValue Field Functions 
    bool hasDimensionValue() const { return this->dimensionValue_ != nullptr;};
    void deleteDimensionValue() { this->dimensionValue_ = nullptr;};
    inline string dimensionValue() const { DARABONBA_PTR_GET_DEFAULT(dimensionValue_, "") };
    inline DescribeSiteTimeSeriesDataResponseBodyData& setDimensionValue(string dimensionValue) { DARABONBA_PTR_SET_VALUE(dimensionValue_, dimensionValue) };


    // fieldName Field Functions 
    bool hasFieldName() const { return this->fieldName_ != nullptr;};
    void deleteFieldName() { this->fieldName_ = nullptr;};
    inline string fieldName() const { DARABONBA_PTR_GET_DEFAULT(fieldName_, "") };
    inline DescribeSiteTimeSeriesDataResponseBodyData& setFieldName(string fieldName) { DARABONBA_PTR_SET_VALUE(fieldName_, fieldName) };


  protected:
    std::shared_ptr<vector<Models::DescribeSiteTimeSeriesDataResponseBodyDataDetailData>> detailData_ = nullptr;
    std::shared_ptr<string> dimensionName_ = nullptr;
    std::shared_ptr<string> dimensionValue_ = nullptr;
    std::shared_ptr<string> fieldName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
