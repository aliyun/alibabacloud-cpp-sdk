// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERDSANALYSISRESOURCEQUOTASRESPONSEBODYSTORAGETYPELISTSTORAGETYPE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERDSANALYSISRESOURCEQUOTASRESPONSEBODYSTORAGETYPELISTSTORAGETYPE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20190315
{
namespace Models
{
  class DescribeRdsAnalysisResourceQuotasResponseBodyStorageTypeListStorageType : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRdsAnalysisResourceQuotasResponseBodyStorageTypeListStorageType& obj) { 
      DARABONBA_PTR_TO_JSON(Text, text_);
      DARABONBA_PTR_TO_JSON(Value, value_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRdsAnalysisResourceQuotasResponseBodyStorageTypeListStorageType& obj) { 
      DARABONBA_PTR_FROM_JSON(Text, text_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
    };
    DescribeRdsAnalysisResourceQuotasResponseBodyStorageTypeListStorageType() = default ;
    DescribeRdsAnalysisResourceQuotasResponseBodyStorageTypeListStorageType(const DescribeRdsAnalysisResourceQuotasResponseBodyStorageTypeListStorageType &) = default ;
    DescribeRdsAnalysisResourceQuotasResponseBodyStorageTypeListStorageType(DescribeRdsAnalysisResourceQuotasResponseBodyStorageTypeListStorageType &&) = default ;
    DescribeRdsAnalysisResourceQuotasResponseBodyStorageTypeListStorageType(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRdsAnalysisResourceQuotasResponseBodyStorageTypeListStorageType() = default ;
    DescribeRdsAnalysisResourceQuotasResponseBodyStorageTypeListStorageType& operator=(const DescribeRdsAnalysisResourceQuotasResponseBodyStorageTypeListStorageType &) = default ;
    DescribeRdsAnalysisResourceQuotasResponseBodyStorageTypeListStorageType& operator=(DescribeRdsAnalysisResourceQuotasResponseBodyStorageTypeListStorageType &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->text_ != nullptr
        && this->value_ != nullptr; };
    // text Field Functions 
    bool hasText() const { return this->text_ != nullptr;};
    void deleteText() { this->text_ = nullptr;};
    inline string text() const { DARABONBA_PTR_GET_DEFAULT(text_, "") };
    inline DescribeRdsAnalysisResourceQuotasResponseBodyStorageTypeListStorageType& setText(string text) { DARABONBA_PTR_SET_VALUE(text_, text) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string value() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline DescribeRdsAnalysisResourceQuotasResponseBodyStorageTypeListStorageType& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    // The display value.
    std::shared_ptr<string> text_ = nullptr;
    // The real value.
    std::shared_ptr<string> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20190315
#endif
