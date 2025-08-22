// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDCDNWAFFILTERINFORESPONSEBODYCONTENTFIELDSLOGICALSYMBOLREGEXP_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDCDNWAFFILTERINFORESPONSEBODYCONTENTFIELDSLOGICALSYMBOLREGEXP_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dcdn20180115
{
namespace Models
{
  class DescribeDcdnWafFilterInfoResponseBodyContentFieldsLogicalSymbolRegexp : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDcdnWafFilterInfoResponseBodyContentFieldsLogicalSymbolRegexp& obj) { 
      DARABONBA_PTR_TO_JSON(ErrMsg, errMsg_);
      DARABONBA_PTR_TO_JSON(Pattern, pattern_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDcdnWafFilterInfoResponseBodyContentFieldsLogicalSymbolRegexp& obj) { 
      DARABONBA_PTR_FROM_JSON(ErrMsg, errMsg_);
      DARABONBA_PTR_FROM_JSON(Pattern, pattern_);
    };
    DescribeDcdnWafFilterInfoResponseBodyContentFieldsLogicalSymbolRegexp() = default ;
    DescribeDcdnWafFilterInfoResponseBodyContentFieldsLogicalSymbolRegexp(const DescribeDcdnWafFilterInfoResponseBodyContentFieldsLogicalSymbolRegexp &) = default ;
    DescribeDcdnWafFilterInfoResponseBodyContentFieldsLogicalSymbolRegexp(DescribeDcdnWafFilterInfoResponseBodyContentFieldsLogicalSymbolRegexp &&) = default ;
    DescribeDcdnWafFilterInfoResponseBodyContentFieldsLogicalSymbolRegexp(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDcdnWafFilterInfoResponseBodyContentFieldsLogicalSymbolRegexp() = default ;
    DescribeDcdnWafFilterInfoResponseBodyContentFieldsLogicalSymbolRegexp& operator=(const DescribeDcdnWafFilterInfoResponseBodyContentFieldsLogicalSymbolRegexp &) = default ;
    DescribeDcdnWafFilterInfoResponseBodyContentFieldsLogicalSymbolRegexp& operator=(DescribeDcdnWafFilterInfoResponseBodyContentFieldsLogicalSymbolRegexp &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->errMsg_ != nullptr
        && this->pattern_ != nullptr; };
    // errMsg Field Functions 
    bool hasErrMsg() const { return this->errMsg_ != nullptr;};
    void deleteErrMsg() { this->errMsg_ = nullptr;};
    inline string errMsg() const { DARABONBA_PTR_GET_DEFAULT(errMsg_, "") };
    inline DescribeDcdnWafFilterInfoResponseBodyContentFieldsLogicalSymbolRegexp& setErrMsg(string errMsg) { DARABONBA_PTR_SET_VALUE(errMsg_, errMsg) };


    // pattern Field Functions 
    bool hasPattern() const { return this->pattern_ != nullptr;};
    void deletePattern() { this->pattern_ = nullptr;};
    inline string pattern() const { DARABONBA_PTR_GET_DEFAULT(pattern_, "") };
    inline DescribeDcdnWafFilterInfoResponseBodyContentFieldsLogicalSymbolRegexp& setPattern(string pattern) { DARABONBA_PTR_SET_VALUE(pattern_, pattern) };


  protected:
    // The error message returned when no items match the regular expression.
    std::shared_ptr<string> errMsg_ = nullptr;
    // The regular expression.
    std::shared_ptr<string> pattern_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dcdn20180115
#endif
