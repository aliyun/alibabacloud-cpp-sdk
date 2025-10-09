// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESITETOPDATARESPONSEBODYDATADETAILDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESITETOPDATARESPONSEBODYDATADETAILDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class DescribeSiteTopDataResponseBodyDataDetailData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSiteTopDataResponseBodyDataDetailData& obj) { 
      DARABONBA_PTR_TO_JSON(DimensionValue, dimensionValue_);
      DARABONBA_ANY_TO_JSON(Value, value_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSiteTopDataResponseBodyDataDetailData& obj) { 
      DARABONBA_PTR_FROM_JSON(DimensionValue, dimensionValue_);
      DARABONBA_ANY_FROM_JSON(Value, value_);
    };
    DescribeSiteTopDataResponseBodyDataDetailData() = default ;
    DescribeSiteTopDataResponseBodyDataDetailData(const DescribeSiteTopDataResponseBodyDataDetailData &) = default ;
    DescribeSiteTopDataResponseBodyDataDetailData(DescribeSiteTopDataResponseBodyDataDetailData &&) = default ;
    DescribeSiteTopDataResponseBodyDataDetailData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSiteTopDataResponseBodyDataDetailData() = default ;
    DescribeSiteTopDataResponseBodyDataDetailData& operator=(const DescribeSiteTopDataResponseBodyDataDetailData &) = default ;
    DescribeSiteTopDataResponseBodyDataDetailData& operator=(DescribeSiteTopDataResponseBodyDataDetailData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->dimensionValue_ != nullptr
        && this->value_ != nullptr; };
    // dimensionValue Field Functions 
    bool hasDimensionValue() const { return this->dimensionValue_ != nullptr;};
    void deleteDimensionValue() { this->dimensionValue_ = nullptr;};
    inline string dimensionValue() const { DARABONBA_PTR_GET_DEFAULT(dimensionValue_, "") };
    inline DescribeSiteTopDataResponseBodyDataDetailData& setDimensionValue(string dimensionValue) { DARABONBA_PTR_SET_VALUE(dimensionValue_, dimensionValue) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline     const Darabonba::Json & value() const { DARABONBA_GET(value_) };
    Darabonba::Json & value() { DARABONBA_GET(value_) };
    inline DescribeSiteTopDataResponseBodyDataDetailData& setValue(const Darabonba::Json & value) { DARABONBA_SET_VALUE(value_, value) };
    inline DescribeSiteTopDataResponseBodyDataDetailData& setValue(Darabonba::Json & value) { DARABONBA_SET_RVALUE(value_, value) };


  protected:
    // The dimension value.
    std::shared_ptr<string> dimensionValue_ = nullptr;
    // The queried numeric value.
    Darabonba::Json value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
