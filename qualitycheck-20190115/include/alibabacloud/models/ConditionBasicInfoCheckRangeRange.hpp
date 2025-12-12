// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CONDITIONBASICINFOCHECKRANGERANGE_HPP_
#define ALIBABACLOUD_MODELS_CONDITIONBASICINFOCHECKRANGERANGE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Qualitycheck20190115
{
namespace Models
{
  class ConditionBasicInfoCheckRangeRange : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ConditionBasicInfoCheckRangeRange& obj) { 
      DARABONBA_PTR_TO_JSON(From, from_);
      DARABONBA_PTR_TO_JSON(To, to_);
    };
    friend void from_json(const Darabonba::Json& j, ConditionBasicInfoCheckRangeRange& obj) { 
      DARABONBA_PTR_FROM_JSON(From, from_);
      DARABONBA_PTR_FROM_JSON(To, to_);
    };
    ConditionBasicInfoCheckRangeRange() = default ;
    ConditionBasicInfoCheckRangeRange(const ConditionBasicInfoCheckRangeRange &) = default ;
    ConditionBasicInfoCheckRangeRange(ConditionBasicInfoCheckRangeRange &&) = default ;
    ConditionBasicInfoCheckRangeRange(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ConditionBasicInfoCheckRangeRange() = default ;
    ConditionBasicInfoCheckRangeRange& operator=(const ConditionBasicInfoCheckRangeRange &) = default ;
    ConditionBasicInfoCheckRangeRange& operator=(ConditionBasicInfoCheckRangeRange &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->from_ == nullptr
        && return this->to_ == nullptr; };
    // from Field Functions 
    bool hasFrom() const { return this->from_ != nullptr;};
    void deleteFrom() { this->from_ = nullptr;};
    inline int32_t from() const { DARABONBA_PTR_GET_DEFAULT(from_, 0) };
    inline ConditionBasicInfoCheckRangeRange& setFrom(int32_t from) { DARABONBA_PTR_SET_VALUE(from_, from) };


    // to Field Functions 
    bool hasTo() const { return this->to_ != nullptr;};
    void deleteTo() { this->to_ = nullptr;};
    inline int32_t to() const { DARABONBA_PTR_GET_DEFAULT(to_, 0) };
    inline ConditionBasicInfoCheckRangeRange& setTo(int32_t to) { DARABONBA_PTR_SET_VALUE(to_, to) };


  protected:
    std::shared_ptr<int32_t> from_ = nullptr;
    std::shared_ptr<int32_t> to_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Qualitycheck20190115
#endif
