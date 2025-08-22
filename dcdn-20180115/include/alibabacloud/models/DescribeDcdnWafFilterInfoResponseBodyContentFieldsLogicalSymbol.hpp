// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDCDNWAFFILTERINFORESPONSEBODYCONTENTFIELDSLOGICALSYMBOL_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDCDNWAFFILTERINFORESPONSEBODYCONTENTFIELDSLOGICALSYMBOL_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeDcdnWafFilterInfoResponseBodyContentFieldsLogicalSymbolRegexp.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dcdn20180115
{
namespace Models
{
  class DescribeDcdnWafFilterInfoResponseBodyContentFieldsLogicalSymbol : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDcdnWafFilterInfoResponseBodyContentFieldsLogicalSymbol& obj) { 
      DARABONBA_PTR_TO_JSON(Attributes, attributes_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(MaxLength, maxLength_);
      DARABONBA_PTR_TO_JSON(Regexp, regexp_);
      DARABONBA_PTR_TO_JSON(Symbol, symbol_);
      DARABONBA_PTR_TO_JSON(Tip, tip_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDcdnWafFilterInfoResponseBodyContentFieldsLogicalSymbol& obj) { 
      DARABONBA_PTR_FROM_JSON(Attributes, attributes_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(MaxLength, maxLength_);
      DARABONBA_PTR_FROM_JSON(Regexp, regexp_);
      DARABONBA_PTR_FROM_JSON(Symbol, symbol_);
      DARABONBA_PTR_FROM_JSON(Tip, tip_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    DescribeDcdnWafFilterInfoResponseBodyContentFieldsLogicalSymbol() = default ;
    DescribeDcdnWafFilterInfoResponseBodyContentFieldsLogicalSymbol(const DescribeDcdnWafFilterInfoResponseBodyContentFieldsLogicalSymbol &) = default ;
    DescribeDcdnWafFilterInfoResponseBodyContentFieldsLogicalSymbol(DescribeDcdnWafFilterInfoResponseBodyContentFieldsLogicalSymbol &&) = default ;
    DescribeDcdnWafFilterInfoResponseBodyContentFieldsLogicalSymbol(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDcdnWafFilterInfoResponseBodyContentFieldsLogicalSymbol() = default ;
    DescribeDcdnWafFilterInfoResponseBodyContentFieldsLogicalSymbol& operator=(const DescribeDcdnWafFilterInfoResponseBodyContentFieldsLogicalSymbol &) = default ;
    DescribeDcdnWafFilterInfoResponseBodyContentFieldsLogicalSymbol& operator=(DescribeDcdnWafFilterInfoResponseBodyContentFieldsLogicalSymbol &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->attributes_ != nullptr
        && this->description_ != nullptr && this->maxLength_ != nullptr && this->regexp_ != nullptr && this->symbol_ != nullptr && this->tip_ != nullptr
        && this->type_ != nullptr; };
    // attributes Field Functions 
    bool hasAttributes() const { return this->attributes_ != nullptr;};
    void deleteAttributes() { this->attributes_ = nullptr;};
    inline int32_t attributes() const { DARABONBA_PTR_GET_DEFAULT(attributes_, 0) };
    inline DescribeDcdnWafFilterInfoResponseBodyContentFieldsLogicalSymbol& setAttributes(int32_t attributes) { DARABONBA_PTR_SET_VALUE(attributes_, attributes) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeDcdnWafFilterInfoResponseBodyContentFieldsLogicalSymbol& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // maxLength Field Functions 
    bool hasMaxLength() const { return this->maxLength_ != nullptr;};
    void deleteMaxLength() { this->maxLength_ = nullptr;};
    inline int32_t maxLength() const { DARABONBA_PTR_GET_DEFAULT(maxLength_, 0) };
    inline DescribeDcdnWafFilterInfoResponseBodyContentFieldsLogicalSymbol& setMaxLength(int32_t maxLength) { DARABONBA_PTR_SET_VALUE(maxLength_, maxLength) };


    // regexp Field Functions 
    bool hasRegexp() const { return this->regexp_ != nullptr;};
    void deleteRegexp() { this->regexp_ = nullptr;};
    inline const Models::DescribeDcdnWafFilterInfoResponseBodyContentFieldsLogicalSymbolRegexp & regexp() const { DARABONBA_PTR_GET_CONST(regexp_, Models::DescribeDcdnWafFilterInfoResponseBodyContentFieldsLogicalSymbolRegexp) };
    inline Models::DescribeDcdnWafFilterInfoResponseBodyContentFieldsLogicalSymbolRegexp regexp() { DARABONBA_PTR_GET(regexp_, Models::DescribeDcdnWafFilterInfoResponseBodyContentFieldsLogicalSymbolRegexp) };
    inline DescribeDcdnWafFilterInfoResponseBodyContentFieldsLogicalSymbol& setRegexp(const Models::DescribeDcdnWafFilterInfoResponseBodyContentFieldsLogicalSymbolRegexp & regexp) { DARABONBA_PTR_SET_VALUE(regexp_, regexp) };
    inline DescribeDcdnWafFilterInfoResponseBodyContentFieldsLogicalSymbol& setRegexp(Models::DescribeDcdnWafFilterInfoResponseBodyContentFieldsLogicalSymbolRegexp && regexp) { DARABONBA_PTR_SET_RVALUE(regexp_, regexp) };


    // symbol Field Functions 
    bool hasSymbol() const { return this->symbol_ != nullptr;};
    void deleteSymbol() { this->symbol_ = nullptr;};
    inline string symbol() const { DARABONBA_PTR_GET_DEFAULT(symbol_, "") };
    inline DescribeDcdnWafFilterInfoResponseBodyContentFieldsLogicalSymbol& setSymbol(string symbol) { DARABONBA_PTR_SET_VALUE(symbol_, symbol) };


    // tip Field Functions 
    bool hasTip() const { return this->tip_ != nullptr;};
    void deleteTip() { this->tip_ = nullptr;};
    inline string tip() const { DARABONBA_PTR_GET_DEFAULT(tip_, "") };
    inline DescribeDcdnWafFilterInfoResponseBodyContentFieldsLogicalSymbol& setTip(string tip) { DARABONBA_PTR_SET_VALUE(tip_, tip) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline DescribeDcdnWafFilterInfoResponseBodyContentFieldsLogicalSymbol& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The configurable attributes, which are bit-field variables that are shown in the following list.\\
    // For example, 1(00000001) indicates that case sensitivity can be enabled and stream match cannot be enabled, and 3(00000011) indicates that case sensitivity and stream match can be enabled.
    // 
    // *   Bit (low to high) - Description
    // *   1 - Case sensitivity
    // *   2 - Stream match
    std::shared_ptr<int32_t> attributes_ = nullptr;
    // The logical symbol that is displayed in the Dynamic Content Delivery Network (DCDN) console.
    std::shared_ptr<string> description_ = nullptr;
    // The maximum number of match items that can be returned. The value of this parameter varies based on the value of the Type parameter. Valid values:
    // 
    // *   If **multi** is returned for the Type parameter, the value of this parameter indicates the maximum number of match items.
    // *   If **single** is returned for the Type parameter, the value of this parameter is 1.
    // *   If **none** is returned for the Type parameter, the value of this parameter is 0.
    std::shared_ptr<int32_t> maxLength_ = nullptr;
    // The information about the regular expression.
    std::shared_ptr<Models::DescribeDcdnWafFilterInfoResponseBodyContentFieldsLogicalSymbolRegexp> regexp_ = nullptr;
    // The logical symbol that is passed to the backend.
    std::shared_ptr<string> symbol_ = nullptr;
    // The tips that are displayed in the match item.
    std::shared_ptr<string> tip_ = nullptr;
    // The number of match items. Valid values:
    // 
    // *   multi: You can specify multiple match items.
    // *   single: You can specify only a match item.
    // *   none: no match items.
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dcdn20180115
#endif
