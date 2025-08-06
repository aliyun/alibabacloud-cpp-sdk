// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_HYPERPARAMETERRANGE_HPP_
#define ALIBABACLOUD_MODELS_HYPERPARAMETERRANGE_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiStudio20220112
{
namespace Models
{
  class HyperParameterRange : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const HyperParameterRange& obj) { 
      DARABONBA_PTR_TO_JSON(Enum, enum_);
      DARABONBA_PTR_TO_JSON(ExclusiveMaximum, exclusiveMaximum_);
      DARABONBA_PTR_TO_JSON(ExclusiveMinimum, exclusiveMinimum_);
      DARABONBA_PTR_TO_JSON(MaxLength, maxLength_);
      DARABONBA_PTR_TO_JSON(Maximum, maximum_);
      DARABONBA_PTR_TO_JSON(MinLength, minLength_);
      DARABONBA_PTR_TO_JSON(Minimum, minimum_);
      DARABONBA_PTR_TO_JSON(Pattern, pattern_);
    };
    friend void from_json(const Darabonba::Json& j, HyperParameterRange& obj) { 
      DARABONBA_PTR_FROM_JSON(Enum, enum_);
      DARABONBA_PTR_FROM_JSON(ExclusiveMaximum, exclusiveMaximum_);
      DARABONBA_PTR_FROM_JSON(ExclusiveMinimum, exclusiveMinimum_);
      DARABONBA_PTR_FROM_JSON(MaxLength, maxLength_);
      DARABONBA_PTR_FROM_JSON(Maximum, maximum_);
      DARABONBA_PTR_FROM_JSON(MinLength, minLength_);
      DARABONBA_PTR_FROM_JSON(Minimum, minimum_);
      DARABONBA_PTR_FROM_JSON(Pattern, pattern_);
    };
    HyperParameterRange() = default ;
    HyperParameterRange(const HyperParameterRange &) = default ;
    HyperParameterRange(HyperParameterRange &&) = default ;
    HyperParameterRange(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~HyperParameterRange() = default ;
    HyperParameterRange& operator=(const HyperParameterRange &) = default ;
    HyperParameterRange& operator=(HyperParameterRange &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->enum_ != nullptr
        && this->exclusiveMaximum_ != nullptr && this->exclusiveMinimum_ != nullptr && this->maxLength_ != nullptr && this->maximum_ != nullptr && this->minLength_ != nullptr
        && this->minimum_ != nullptr && this->pattern_ != nullptr; };
    // enum Field Functions 
    bool hasEnum() const { return this->enum_ != nullptr;};
    void deleteEnum() { this->enum_ = nullptr;};
    inline const vector<string> & _enum() const { DARABONBA_PTR_GET_CONST(enum_, vector<string>) };
    inline vector<string> _enum() { DARABONBA_PTR_GET(enum_, vector<string>) };
    inline HyperParameterRange& setEnum(const vector<string> & _enum) { DARABONBA_PTR_SET_VALUE(enum_, _enum) };
    inline HyperParameterRange& setEnum(vector<string> && _enum) { DARABONBA_PTR_SET_RVALUE(enum_, _enum) };


    // exclusiveMaximum Field Functions 
    bool hasExclusiveMaximum() const { return this->exclusiveMaximum_ != nullptr;};
    void deleteExclusiveMaximum() { this->exclusiveMaximum_ = nullptr;};
    inline bool exclusiveMaximum() const { DARABONBA_PTR_GET_DEFAULT(exclusiveMaximum_, false) };
    inline HyperParameterRange& setExclusiveMaximum(bool exclusiveMaximum) { DARABONBA_PTR_SET_VALUE(exclusiveMaximum_, exclusiveMaximum) };


    // exclusiveMinimum Field Functions 
    bool hasExclusiveMinimum() const { return this->exclusiveMinimum_ != nullptr;};
    void deleteExclusiveMinimum() { this->exclusiveMinimum_ = nullptr;};
    inline bool exclusiveMinimum() const { DARABONBA_PTR_GET_DEFAULT(exclusiveMinimum_, false) };
    inline HyperParameterRange& setExclusiveMinimum(bool exclusiveMinimum) { DARABONBA_PTR_SET_VALUE(exclusiveMinimum_, exclusiveMinimum) };


    // maxLength Field Functions 
    bool hasMaxLength() const { return this->maxLength_ != nullptr;};
    void deleteMaxLength() { this->maxLength_ = nullptr;};
    inline int64_t maxLength() const { DARABONBA_PTR_GET_DEFAULT(maxLength_, 0L) };
    inline HyperParameterRange& setMaxLength(int64_t maxLength) { DARABONBA_PTR_SET_VALUE(maxLength_, maxLength) };


    // maximum Field Functions 
    bool hasMaximum() const { return this->maximum_ != nullptr;};
    void deleteMaximum() { this->maximum_ = nullptr;};
    inline string maximum() const { DARABONBA_PTR_GET_DEFAULT(maximum_, "") };
    inline HyperParameterRange& setMaximum(string maximum) { DARABONBA_PTR_SET_VALUE(maximum_, maximum) };


    // minLength Field Functions 
    bool hasMinLength() const { return this->minLength_ != nullptr;};
    void deleteMinLength() { this->minLength_ = nullptr;};
    inline int64_t minLength() const { DARABONBA_PTR_GET_DEFAULT(minLength_, 0L) };
    inline HyperParameterRange& setMinLength(int64_t minLength) { DARABONBA_PTR_SET_VALUE(minLength_, minLength) };


    // minimum Field Functions 
    bool hasMinimum() const { return this->minimum_ != nullptr;};
    void deleteMinimum() { this->minimum_ = nullptr;};
    inline string minimum() const { DARABONBA_PTR_GET_DEFAULT(minimum_, "") };
    inline HyperParameterRange& setMinimum(string minimum) { DARABONBA_PTR_SET_VALUE(minimum_, minimum) };


    // pattern Field Functions 
    bool hasPattern() const { return this->pattern_ != nullptr;};
    void deletePattern() { this->pattern_ = nullptr;};
    inline string pattern() const { DARABONBA_PTR_GET_DEFAULT(pattern_, "") };
    inline HyperParameterRange& setPattern(string pattern) { DARABONBA_PTR_SET_VALUE(pattern_, pattern) };


  protected:
    std::shared_ptr<vector<string>> enum_ = nullptr;
    std::shared_ptr<bool> exclusiveMaximum_ = nullptr;
    std::shared_ptr<bool> exclusiveMinimum_ = nullptr;
    std::shared_ptr<int64_t> maxLength_ = nullptr;
    std::shared_ptr<string> maximum_ = nullptr;
    std::shared_ptr<int64_t> minLength_ = nullptr;
    std::shared_ptr<string> minimum_ = nullptr;
    std::shared_ptr<string> pattern_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiStudio20220112
#endif
