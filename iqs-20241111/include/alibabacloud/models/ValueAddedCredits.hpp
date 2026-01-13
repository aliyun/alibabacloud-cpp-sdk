// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_VALUEADDEDCREDITS_HPP_
#define ALIBABACLOUD_MODELS_VALUEADDEDCREDITS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IQS20241111
{
namespace Models
{
  class ValueAddedCredits : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ValueAddedCredits& obj) { 
      DARABONBA_PTR_TO_JSON(advanced, advanced_);
      DARABONBA_PTR_TO_JSON(summary, summary_);
    };
    friend void from_json(const Darabonba::Json& j, ValueAddedCredits& obj) { 
      DARABONBA_PTR_FROM_JSON(advanced, advanced_);
      DARABONBA_PTR_FROM_JSON(summary, summary_);
    };
    ValueAddedCredits() = default ;
    ValueAddedCredits(const ValueAddedCredits &) = default ;
    ValueAddedCredits(ValueAddedCredits &&) = default ;
    ValueAddedCredits(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ValueAddedCredits() = default ;
    ValueAddedCredits& operator=(const ValueAddedCredits &) = default ;
    ValueAddedCredits& operator=(ValueAddedCredits &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->advanced_ == nullptr
        && this->summary_ == nullptr; };
    // advanced Field Functions 
    bool hasAdvanced() const { return this->advanced_ != nullptr;};
    void deleteAdvanced() { this->advanced_ = nullptr;};
    inline int32_t getAdvanced() const { DARABONBA_PTR_GET_DEFAULT(advanced_, 0) };
    inline ValueAddedCredits& setAdvanced(int32_t advanced) { DARABONBA_PTR_SET_VALUE(advanced_, advanced) };


    // summary Field Functions 
    bool hasSummary() const { return this->summary_ != nullptr;};
    void deleteSummary() { this->summary_ = nullptr;};
    inline int32_t getSummary() const { DARABONBA_PTR_GET_DEFAULT(summary_, 0) };
    inline ValueAddedCredits& setSummary(int32_t summary) { DARABONBA_PTR_SET_VALUE(summary_, summary) };


  protected:
    shared_ptr<int32_t> advanced_ {};
    shared_ptr<int32_t> summary_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IQS20241111
#endif
