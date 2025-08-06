// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVODMULTIUSAGEDATARESPONSEBODYMULTIUSAGEDATADATAMODULE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVODMULTIUSAGEDATARESPONSEBODYMULTIUSAGEDATADATAMODULE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class DescribeVodMultiUsageDataResponseBodyMultiUsageDataDataModule : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVodMultiUsageDataResponseBodyMultiUsageDataDataModule& obj) { 
      DARABONBA_PTR_TO_JSON(Value, value_);
      DARABONBA_PTR_TO_JSON(ValueType, valueType_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVodMultiUsageDataResponseBodyMultiUsageDataDataModule& obj) { 
      DARABONBA_PTR_FROM_JSON(Value, value_);
      DARABONBA_PTR_FROM_JSON(ValueType, valueType_);
    };
    DescribeVodMultiUsageDataResponseBodyMultiUsageDataDataModule() = default ;
    DescribeVodMultiUsageDataResponseBodyMultiUsageDataDataModule(const DescribeVodMultiUsageDataResponseBodyMultiUsageDataDataModule &) = default ;
    DescribeVodMultiUsageDataResponseBodyMultiUsageDataDataModule(DescribeVodMultiUsageDataResponseBodyMultiUsageDataDataModule &&) = default ;
    DescribeVodMultiUsageDataResponseBodyMultiUsageDataDataModule(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVodMultiUsageDataResponseBodyMultiUsageDataDataModule() = default ;
    DescribeVodMultiUsageDataResponseBodyMultiUsageDataDataModule& operator=(const DescribeVodMultiUsageDataResponseBodyMultiUsageDataDataModule &) = default ;
    DescribeVodMultiUsageDataResponseBodyMultiUsageDataDataModule& operator=(DescribeVodMultiUsageDataResponseBodyMultiUsageDataDataModule &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->value_ != nullptr
        && this->valueType_ != nullptr; };
    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline int64_t value() const { DARABONBA_PTR_GET_DEFAULT(value_, 0L) };
    inline DescribeVodMultiUsageDataResponseBodyMultiUsageDataDataModule& setValue(int64_t value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    // valueType Field Functions 
    bool hasValueType() const { return this->valueType_ != nullptr;};
    void deleteValueType() { this->valueType_ = nullptr;};
    inline string valueType() const { DARABONBA_PTR_GET_DEFAULT(valueType_, "") };
    inline DescribeVodMultiUsageDataResponseBodyMultiUsageDataDataModule& setValueType(string valueType) { DARABONBA_PTR_SET_VALUE(valueType_, valueType) };


  protected:
    std::shared_ptr<int64_t> value_ = nullptr;
    std::shared_ptr<string> valueType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
