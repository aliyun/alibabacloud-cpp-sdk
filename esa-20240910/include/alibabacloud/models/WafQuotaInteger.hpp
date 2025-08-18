// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_WAFQUOTAINTEGER_HPP_
#define ALIBABACLOUD_MODELS_WAFQUOTAINTEGER_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class WafQuotaInteger : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const WafQuotaInteger& obj) { 
      DARABONBA_PTR_TO_JSON(Equal, equal_);
      DARABONBA_PTR_TO_JSON(GreaterThan, greaterThan_);
      DARABONBA_PTR_TO_JSON(GreaterThanOrEqual, greaterThanOrEqual_);
      DARABONBA_PTR_TO_JSON(LessThan, lessThan_);
      DARABONBA_PTR_TO_JSON(LessThanOrEqual, lessThanOrEqual_);
    };
    friend void from_json(const Darabonba::Json& j, WafQuotaInteger& obj) { 
      DARABONBA_PTR_FROM_JSON(Equal, equal_);
      DARABONBA_PTR_FROM_JSON(GreaterThan, greaterThan_);
      DARABONBA_PTR_FROM_JSON(GreaterThanOrEqual, greaterThanOrEqual_);
      DARABONBA_PTR_FROM_JSON(LessThan, lessThan_);
      DARABONBA_PTR_FROM_JSON(LessThanOrEqual, lessThanOrEqual_);
    };
    WafQuotaInteger() = default ;
    WafQuotaInteger(const WafQuotaInteger &) = default ;
    WafQuotaInteger(WafQuotaInteger &&) = default ;
    WafQuotaInteger(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~WafQuotaInteger() = default ;
    WafQuotaInteger& operator=(const WafQuotaInteger &) = default ;
    WafQuotaInteger& operator=(WafQuotaInteger &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->equal_ != nullptr
        && this->greaterThan_ != nullptr && this->greaterThanOrEqual_ != nullptr && this->lessThan_ != nullptr && this->lessThanOrEqual_ != nullptr; };
    // equal Field Functions 
    bool hasEqual() const { return this->equal_ != nullptr;};
    void deleteEqual() { this->equal_ = nullptr;};
    inline int32_t equal() const { DARABONBA_PTR_GET_DEFAULT(equal_, 0) };
    inline WafQuotaInteger& setEqual(int32_t equal) { DARABONBA_PTR_SET_VALUE(equal_, equal) };


    // greaterThan Field Functions 
    bool hasGreaterThan() const { return this->greaterThan_ != nullptr;};
    void deleteGreaterThan() { this->greaterThan_ = nullptr;};
    inline int32_t greaterThan() const { DARABONBA_PTR_GET_DEFAULT(greaterThan_, 0) };
    inline WafQuotaInteger& setGreaterThan(int32_t greaterThan) { DARABONBA_PTR_SET_VALUE(greaterThan_, greaterThan) };


    // greaterThanOrEqual Field Functions 
    bool hasGreaterThanOrEqual() const { return this->greaterThanOrEqual_ != nullptr;};
    void deleteGreaterThanOrEqual() { this->greaterThanOrEqual_ = nullptr;};
    inline int32_t greaterThanOrEqual() const { DARABONBA_PTR_GET_DEFAULT(greaterThanOrEqual_, 0) };
    inline WafQuotaInteger& setGreaterThanOrEqual(int32_t greaterThanOrEqual) { DARABONBA_PTR_SET_VALUE(greaterThanOrEqual_, greaterThanOrEqual) };


    // lessThan Field Functions 
    bool hasLessThan() const { return this->lessThan_ != nullptr;};
    void deleteLessThan() { this->lessThan_ = nullptr;};
    inline int32_t lessThan() const { DARABONBA_PTR_GET_DEFAULT(lessThan_, 0) };
    inline WafQuotaInteger& setLessThan(int32_t lessThan) { DARABONBA_PTR_SET_VALUE(lessThan_, lessThan) };


    // lessThanOrEqual Field Functions 
    bool hasLessThanOrEqual() const { return this->lessThanOrEqual_ != nullptr;};
    void deleteLessThanOrEqual() { this->lessThanOrEqual_ = nullptr;};
    inline int32_t lessThanOrEqual() const { DARABONBA_PTR_GET_DEFAULT(lessThanOrEqual_, 0) };
    inline WafQuotaInteger& setLessThanOrEqual(int32_t lessThanOrEqual) { DARABONBA_PTR_SET_VALUE(lessThanOrEqual_, lessThanOrEqual) };


  protected:
    std::shared_ptr<int32_t> equal_ = nullptr;
    std::shared_ptr<int32_t> greaterThan_ = nullptr;
    std::shared_ptr<int32_t> greaterThanOrEqual_ = nullptr;
    std::shared_ptr<int32_t> lessThan_ = nullptr;
    std::shared_ptr<int32_t> lessThanOrEqual_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
