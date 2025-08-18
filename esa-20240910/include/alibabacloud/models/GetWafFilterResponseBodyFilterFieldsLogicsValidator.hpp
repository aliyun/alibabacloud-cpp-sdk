// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETWAFFILTERRESPONSEBODYFILTERFIELDSLOGICSVALIDATOR_HPP_
#define ALIBABACLOUD_MODELS_GETWAFFILTERRESPONSEBODYFILTERFIELDSLOGICSVALIDATOR_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/WafQuotaInteger.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class GetWafFilterResponseBodyFilterFieldsLogicsValidator : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetWafFilterResponseBodyFilterFieldsLogicsValidator& obj) { 
      DARABONBA_PTR_TO_JSON(ErrMsg, errMsg_);
      DARABONBA_PTR_TO_JSON(Length, length_);
      DARABONBA_PTR_TO_JSON(Pattern, pattern_);
      DARABONBA_PTR_TO_JSON(Range, range_);
    };
    friend void from_json(const Darabonba::Json& j, GetWafFilterResponseBodyFilterFieldsLogicsValidator& obj) { 
      DARABONBA_PTR_FROM_JSON(ErrMsg, errMsg_);
      DARABONBA_PTR_FROM_JSON(Length, length_);
      DARABONBA_PTR_FROM_JSON(Pattern, pattern_);
      DARABONBA_PTR_FROM_JSON(Range, range_);
    };
    GetWafFilterResponseBodyFilterFieldsLogicsValidator() = default ;
    GetWafFilterResponseBodyFilterFieldsLogicsValidator(const GetWafFilterResponseBodyFilterFieldsLogicsValidator &) = default ;
    GetWafFilterResponseBodyFilterFieldsLogicsValidator(GetWafFilterResponseBodyFilterFieldsLogicsValidator &&) = default ;
    GetWafFilterResponseBodyFilterFieldsLogicsValidator(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetWafFilterResponseBodyFilterFieldsLogicsValidator() = default ;
    GetWafFilterResponseBodyFilterFieldsLogicsValidator& operator=(const GetWafFilterResponseBodyFilterFieldsLogicsValidator &) = default ;
    GetWafFilterResponseBodyFilterFieldsLogicsValidator& operator=(GetWafFilterResponseBodyFilterFieldsLogicsValidator &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->errMsg_ != nullptr
        && this->length_ != nullptr && this->pattern_ != nullptr && this->range_ != nullptr; };
    // errMsg Field Functions 
    bool hasErrMsg() const { return this->errMsg_ != nullptr;};
    void deleteErrMsg() { this->errMsg_ = nullptr;};
    inline string errMsg() const { DARABONBA_PTR_GET_DEFAULT(errMsg_, "") };
    inline GetWafFilterResponseBodyFilterFieldsLogicsValidator& setErrMsg(string errMsg) { DARABONBA_PTR_SET_VALUE(errMsg_, errMsg) };


    // length Field Functions 
    bool hasLength() const { return this->length_ != nullptr;};
    void deleteLength() { this->length_ = nullptr;};
    inline const Models::WafQuotaInteger & length() const { DARABONBA_PTR_GET_CONST(length_, Models::WafQuotaInteger) };
    inline Models::WafQuotaInteger length() { DARABONBA_PTR_GET(length_, Models::WafQuotaInteger) };
    inline GetWafFilterResponseBodyFilterFieldsLogicsValidator& setLength(const Models::WafQuotaInteger & length) { DARABONBA_PTR_SET_VALUE(length_, length) };
    inline GetWafFilterResponseBodyFilterFieldsLogicsValidator& setLength(Models::WafQuotaInteger && length) { DARABONBA_PTR_SET_RVALUE(length_, length) };


    // pattern Field Functions 
    bool hasPattern() const { return this->pattern_ != nullptr;};
    void deletePattern() { this->pattern_ = nullptr;};
    inline string pattern() const { DARABONBA_PTR_GET_DEFAULT(pattern_, "") };
    inline GetWafFilterResponseBodyFilterFieldsLogicsValidator& setPattern(string pattern) { DARABONBA_PTR_SET_VALUE(pattern_, pattern) };


    // range Field Functions 
    bool hasRange() const { return this->range_ != nullptr;};
    void deleteRange() { this->range_ = nullptr;};
    inline const Models::WafQuotaInteger & range() const { DARABONBA_PTR_GET_CONST(range_, Models::WafQuotaInteger) };
    inline Models::WafQuotaInteger range() { DARABONBA_PTR_GET(range_, Models::WafQuotaInteger) };
    inline GetWafFilterResponseBodyFilterFieldsLogicsValidator& setRange(const Models::WafQuotaInteger & range) { DARABONBA_PTR_SET_VALUE(range_, range) };
    inline GetWafFilterResponseBodyFilterFieldsLogicsValidator& setRange(Models::WafQuotaInteger && range) { DARABONBA_PTR_SET_RVALUE(range_, range) };


  protected:
    // The error message when the validation fails.
    std::shared_ptr<string> errMsg_ = nullptr;
    // The length of the value.
    std::shared_ptr<Models::WafQuotaInteger> length_ = nullptr;
    // The regular expression pattern of the value, which is used to validate strings.
    std::shared_ptr<string> pattern_ = nullptr;
    // The range of the value, which is used to validate numbers.
    std::shared_ptr<Models::WafQuotaInteger> range_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
