// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MOMVALUES_HPP_
#define ALIBABACLOUD_MODELS_MOMVALUES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DlfNext20250310
{
namespace Models
{
  class MoMValues : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const MoMValues& obj) { 
      DARABONBA_PTR_TO_JSON(currentValue, currentValue_);
      DARABONBA_PTR_TO_JSON(lastDayValue, lastDayValue_);
      DARABONBA_PTR_TO_JSON(lastMonthValue, lastMonthValue_);
    };
    friend void from_json(const Darabonba::Json& j, MoMValues& obj) { 
      DARABONBA_PTR_FROM_JSON(currentValue, currentValue_);
      DARABONBA_PTR_FROM_JSON(lastDayValue, lastDayValue_);
      DARABONBA_PTR_FROM_JSON(lastMonthValue, lastMonthValue_);
    };
    MoMValues() = default ;
    MoMValues(const MoMValues &) = default ;
    MoMValues(MoMValues &&) = default ;
    MoMValues(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~MoMValues() = default ;
    MoMValues& operator=(const MoMValues &) = default ;
    MoMValues& operator=(MoMValues &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->currentValue_ == nullptr
        && this->lastDayValue_ == nullptr && this->lastMonthValue_ == nullptr; };
    // currentValue Field Functions 
    bool hasCurrentValue() const { return this->currentValue_ != nullptr;};
    void deleteCurrentValue() { this->currentValue_ = nullptr;};
    inline int64_t getCurrentValue() const { DARABONBA_PTR_GET_DEFAULT(currentValue_, 0L) };
    inline MoMValues& setCurrentValue(int64_t currentValue) { DARABONBA_PTR_SET_VALUE(currentValue_, currentValue) };


    // lastDayValue Field Functions 
    bool hasLastDayValue() const { return this->lastDayValue_ != nullptr;};
    void deleteLastDayValue() { this->lastDayValue_ = nullptr;};
    inline int64_t getLastDayValue() const { DARABONBA_PTR_GET_DEFAULT(lastDayValue_, 0L) };
    inline MoMValues& setLastDayValue(int64_t lastDayValue) { DARABONBA_PTR_SET_VALUE(lastDayValue_, lastDayValue) };


    // lastMonthValue Field Functions 
    bool hasLastMonthValue() const { return this->lastMonthValue_ != nullptr;};
    void deleteLastMonthValue() { this->lastMonthValue_ = nullptr;};
    inline int64_t getLastMonthValue() const { DARABONBA_PTR_GET_DEFAULT(lastMonthValue_, 0L) };
    inline MoMValues& setLastMonthValue(int64_t lastMonthValue) { DARABONBA_PTR_SET_VALUE(lastMonthValue_, lastMonthValue) };


  protected:
    // total
    shared_ptr<int64_t> currentValue_ {};
    // daily addition
    shared_ptr<int64_t> lastDayValue_ {};
    // monthly addition
    shared_ptr<int64_t> lastMonthValue_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DlfNext20250310
#endif
