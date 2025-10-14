// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESITETOPDATARESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESITETOPDATARESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeSiteTopDataResponseBodyDataDetailData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class DescribeSiteTopDataResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSiteTopDataResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(DetailData, detailData_);
      DARABONBA_PTR_TO_JSON(DimensionName, dimensionName_);
      DARABONBA_PTR_TO_JSON(FieldName, fieldName_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSiteTopDataResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(DetailData, detailData_);
      DARABONBA_PTR_FROM_JSON(DimensionName, dimensionName_);
      DARABONBA_PTR_FROM_JSON(FieldName, fieldName_);
    };
    DescribeSiteTopDataResponseBodyData() = default ;
    DescribeSiteTopDataResponseBodyData(const DescribeSiteTopDataResponseBodyData &) = default ;
    DescribeSiteTopDataResponseBodyData(DescribeSiteTopDataResponseBodyData &&) = default ;
    DescribeSiteTopDataResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSiteTopDataResponseBodyData() = default ;
    DescribeSiteTopDataResponseBodyData& operator=(const DescribeSiteTopDataResponseBodyData &) = default ;
    DescribeSiteTopDataResponseBodyData& operator=(DescribeSiteTopDataResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->detailData_ == nullptr
        && return this->dimensionName_ == nullptr && return this->fieldName_ == nullptr; };
    // detailData Field Functions 
    bool hasDetailData() const { return this->detailData_ != nullptr;};
    void deleteDetailData() { this->detailData_ = nullptr;};
    inline const vector<Models::DescribeSiteTopDataResponseBodyDataDetailData> & detailData() const { DARABONBA_PTR_GET_CONST(detailData_, vector<Models::DescribeSiteTopDataResponseBodyDataDetailData>) };
    inline vector<Models::DescribeSiteTopDataResponseBodyDataDetailData> detailData() { DARABONBA_PTR_GET(detailData_, vector<Models::DescribeSiteTopDataResponseBodyDataDetailData>) };
    inline DescribeSiteTopDataResponseBodyData& setDetailData(const vector<Models::DescribeSiteTopDataResponseBodyDataDetailData> & detailData) { DARABONBA_PTR_SET_VALUE(detailData_, detailData) };
    inline DescribeSiteTopDataResponseBodyData& setDetailData(vector<Models::DescribeSiteTopDataResponseBodyDataDetailData> && detailData) { DARABONBA_PTR_SET_RVALUE(detailData_, detailData) };


    // dimensionName Field Functions 
    bool hasDimensionName() const { return this->dimensionName_ != nullptr;};
    void deleteDimensionName() { this->dimensionName_ = nullptr;};
    inline string dimensionName() const { DARABONBA_PTR_GET_DEFAULT(dimensionName_, "") };
    inline DescribeSiteTopDataResponseBodyData& setDimensionName(string dimensionName) { DARABONBA_PTR_SET_VALUE(dimensionName_, dimensionName) };


    // fieldName Field Functions 
    bool hasFieldName() const { return this->fieldName_ != nullptr;};
    void deleteFieldName() { this->fieldName_ = nullptr;};
    inline string fieldName() const { DARABONBA_PTR_GET_DEFAULT(fieldName_, "") };
    inline DescribeSiteTopDataResponseBodyData& setFieldName(string fieldName) { DARABONBA_PTR_SET_VALUE(fieldName_, fieldName) };


  protected:
    // The returned data.
    std::shared_ptr<vector<Models::DescribeSiteTopDataResponseBodyDataDetailData>> detailData_ = nullptr;
    // The dimension at which data was queried.
    std::shared_ptr<string> dimensionName_ = nullptr;
    // The metric name.
    std::shared_ptr<string> fieldName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
