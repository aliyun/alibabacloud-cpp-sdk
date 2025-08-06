// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDOMAINBPSDATARESPONSEBODYBPSDATAPERINTERVALDATAMODULE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDOMAINBPSDATARESPONSEBODYBPSDATAPERINTERVALDATAMODULE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class DescribeDomainBpsDataResponseBodyBpsDataPerIntervalDataModule : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDomainBpsDataResponseBodyBpsDataPerIntervalDataModule& obj) { 
      DARABONBA_PTR_TO_JSON(DomesticL2Value, domesticL2Value_);
      DARABONBA_PTR_TO_JSON(DomesticValue, domesticValue_);
      DARABONBA_PTR_TO_JSON(DynamicDomesticValue, dynamicDomesticValue_);
      DARABONBA_PTR_TO_JSON(DynamicOverseasValue, dynamicOverseasValue_);
      DARABONBA_PTR_TO_JSON(DynamicValue, dynamicValue_);
      DARABONBA_PTR_TO_JSON(L2Value, l2Value_);
      DARABONBA_PTR_TO_JSON(OverseasL2Value, overseasL2Value_);
      DARABONBA_PTR_TO_JSON(OverseasValue, overseasValue_);
      DARABONBA_PTR_TO_JSON(StaticDomesticValue, staticDomesticValue_);
      DARABONBA_PTR_TO_JSON(StaticOverseasValue, staticOverseasValue_);
      DARABONBA_PTR_TO_JSON(StaticValue, staticValue_);
      DARABONBA_PTR_TO_JSON(TimeStamp, timeStamp_);
      DARABONBA_PTR_TO_JSON(Value, value_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDomainBpsDataResponseBodyBpsDataPerIntervalDataModule& obj) { 
      DARABONBA_PTR_FROM_JSON(DomesticL2Value, domesticL2Value_);
      DARABONBA_PTR_FROM_JSON(DomesticValue, domesticValue_);
      DARABONBA_PTR_FROM_JSON(DynamicDomesticValue, dynamicDomesticValue_);
      DARABONBA_PTR_FROM_JSON(DynamicOverseasValue, dynamicOverseasValue_);
      DARABONBA_PTR_FROM_JSON(DynamicValue, dynamicValue_);
      DARABONBA_PTR_FROM_JSON(L2Value, l2Value_);
      DARABONBA_PTR_FROM_JSON(OverseasL2Value, overseasL2Value_);
      DARABONBA_PTR_FROM_JSON(OverseasValue, overseasValue_);
      DARABONBA_PTR_FROM_JSON(StaticDomesticValue, staticDomesticValue_);
      DARABONBA_PTR_FROM_JSON(StaticOverseasValue, staticOverseasValue_);
      DARABONBA_PTR_FROM_JSON(StaticValue, staticValue_);
      DARABONBA_PTR_FROM_JSON(TimeStamp, timeStamp_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
    };
    DescribeDomainBpsDataResponseBodyBpsDataPerIntervalDataModule() = default ;
    DescribeDomainBpsDataResponseBodyBpsDataPerIntervalDataModule(const DescribeDomainBpsDataResponseBodyBpsDataPerIntervalDataModule &) = default ;
    DescribeDomainBpsDataResponseBodyBpsDataPerIntervalDataModule(DescribeDomainBpsDataResponseBodyBpsDataPerIntervalDataModule &&) = default ;
    DescribeDomainBpsDataResponseBodyBpsDataPerIntervalDataModule(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDomainBpsDataResponseBodyBpsDataPerIntervalDataModule() = default ;
    DescribeDomainBpsDataResponseBodyBpsDataPerIntervalDataModule& operator=(const DescribeDomainBpsDataResponseBodyBpsDataPerIntervalDataModule &) = default ;
    DescribeDomainBpsDataResponseBodyBpsDataPerIntervalDataModule& operator=(DescribeDomainBpsDataResponseBodyBpsDataPerIntervalDataModule &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->domesticL2Value_ != nullptr
        && this->domesticValue_ != nullptr && this->dynamicDomesticValue_ != nullptr && this->dynamicOverseasValue_ != nullptr && this->dynamicValue_ != nullptr && this->l2Value_ != nullptr
        && this->overseasL2Value_ != nullptr && this->overseasValue_ != nullptr && this->staticDomesticValue_ != nullptr && this->staticOverseasValue_ != nullptr && this->staticValue_ != nullptr
        && this->timeStamp_ != nullptr && this->value_ != nullptr; };
    // domesticL2Value Field Functions 
    bool hasDomesticL2Value() const { return this->domesticL2Value_ != nullptr;};
    void deleteDomesticL2Value() { this->domesticL2Value_ = nullptr;};
    inline string domesticL2Value() const { DARABONBA_PTR_GET_DEFAULT(domesticL2Value_, "") };
    inline DescribeDomainBpsDataResponseBodyBpsDataPerIntervalDataModule& setDomesticL2Value(string domesticL2Value) { DARABONBA_PTR_SET_VALUE(domesticL2Value_, domesticL2Value) };


    // domesticValue Field Functions 
    bool hasDomesticValue() const { return this->domesticValue_ != nullptr;};
    void deleteDomesticValue() { this->domesticValue_ = nullptr;};
    inline string domesticValue() const { DARABONBA_PTR_GET_DEFAULT(domesticValue_, "") };
    inline DescribeDomainBpsDataResponseBodyBpsDataPerIntervalDataModule& setDomesticValue(string domesticValue) { DARABONBA_PTR_SET_VALUE(domesticValue_, domesticValue) };


    // dynamicDomesticValue Field Functions 
    bool hasDynamicDomesticValue() const { return this->dynamicDomesticValue_ != nullptr;};
    void deleteDynamicDomesticValue() { this->dynamicDomesticValue_ = nullptr;};
    inline string dynamicDomesticValue() const { DARABONBA_PTR_GET_DEFAULT(dynamicDomesticValue_, "") };
    inline DescribeDomainBpsDataResponseBodyBpsDataPerIntervalDataModule& setDynamicDomesticValue(string dynamicDomesticValue) { DARABONBA_PTR_SET_VALUE(dynamicDomesticValue_, dynamicDomesticValue) };


    // dynamicOverseasValue Field Functions 
    bool hasDynamicOverseasValue() const { return this->dynamicOverseasValue_ != nullptr;};
    void deleteDynamicOverseasValue() { this->dynamicOverseasValue_ = nullptr;};
    inline string dynamicOverseasValue() const { DARABONBA_PTR_GET_DEFAULT(dynamicOverseasValue_, "") };
    inline DescribeDomainBpsDataResponseBodyBpsDataPerIntervalDataModule& setDynamicOverseasValue(string dynamicOverseasValue) { DARABONBA_PTR_SET_VALUE(dynamicOverseasValue_, dynamicOverseasValue) };


    // dynamicValue Field Functions 
    bool hasDynamicValue() const { return this->dynamicValue_ != nullptr;};
    void deleteDynamicValue() { this->dynamicValue_ = nullptr;};
    inline int64_t dynamicValue() const { DARABONBA_PTR_GET_DEFAULT(dynamicValue_, 0L) };
    inline DescribeDomainBpsDataResponseBodyBpsDataPerIntervalDataModule& setDynamicValue(int64_t dynamicValue) { DARABONBA_PTR_SET_VALUE(dynamicValue_, dynamicValue) };


    // l2Value Field Functions 
    bool hasL2Value() const { return this->l2Value_ != nullptr;};
    void deleteL2Value() { this->l2Value_ = nullptr;};
    inline string l2Value() const { DARABONBA_PTR_GET_DEFAULT(l2Value_, "") };
    inline DescribeDomainBpsDataResponseBodyBpsDataPerIntervalDataModule& setL2Value(string l2Value) { DARABONBA_PTR_SET_VALUE(l2Value_, l2Value) };


    // overseasL2Value Field Functions 
    bool hasOverseasL2Value() const { return this->overseasL2Value_ != nullptr;};
    void deleteOverseasL2Value() { this->overseasL2Value_ = nullptr;};
    inline string overseasL2Value() const { DARABONBA_PTR_GET_DEFAULT(overseasL2Value_, "") };
    inline DescribeDomainBpsDataResponseBodyBpsDataPerIntervalDataModule& setOverseasL2Value(string overseasL2Value) { DARABONBA_PTR_SET_VALUE(overseasL2Value_, overseasL2Value) };


    // overseasValue Field Functions 
    bool hasOverseasValue() const { return this->overseasValue_ != nullptr;};
    void deleteOverseasValue() { this->overseasValue_ = nullptr;};
    inline string overseasValue() const { DARABONBA_PTR_GET_DEFAULT(overseasValue_, "") };
    inline DescribeDomainBpsDataResponseBodyBpsDataPerIntervalDataModule& setOverseasValue(string overseasValue) { DARABONBA_PTR_SET_VALUE(overseasValue_, overseasValue) };


    // staticDomesticValue Field Functions 
    bool hasStaticDomesticValue() const { return this->staticDomesticValue_ != nullptr;};
    void deleteStaticDomesticValue() { this->staticDomesticValue_ = nullptr;};
    inline string staticDomesticValue() const { DARABONBA_PTR_GET_DEFAULT(staticDomesticValue_, "") };
    inline DescribeDomainBpsDataResponseBodyBpsDataPerIntervalDataModule& setStaticDomesticValue(string staticDomesticValue) { DARABONBA_PTR_SET_VALUE(staticDomesticValue_, staticDomesticValue) };


    // staticOverseasValue Field Functions 
    bool hasStaticOverseasValue() const { return this->staticOverseasValue_ != nullptr;};
    void deleteStaticOverseasValue() { this->staticOverseasValue_ = nullptr;};
    inline string staticOverseasValue() const { DARABONBA_PTR_GET_DEFAULT(staticOverseasValue_, "") };
    inline DescribeDomainBpsDataResponseBodyBpsDataPerIntervalDataModule& setStaticOverseasValue(string staticOverseasValue) { DARABONBA_PTR_SET_VALUE(staticOverseasValue_, staticOverseasValue) };


    // staticValue Field Functions 
    bool hasStaticValue() const { return this->staticValue_ != nullptr;};
    void deleteStaticValue() { this->staticValue_ = nullptr;};
    inline string staticValue() const { DARABONBA_PTR_GET_DEFAULT(staticValue_, "") };
    inline DescribeDomainBpsDataResponseBodyBpsDataPerIntervalDataModule& setStaticValue(string staticValue) { DARABONBA_PTR_SET_VALUE(staticValue_, staticValue) };


    // timeStamp Field Functions 
    bool hasTimeStamp() const { return this->timeStamp_ != nullptr;};
    void deleteTimeStamp() { this->timeStamp_ = nullptr;};
    inline string timeStamp() const { DARABONBA_PTR_GET_DEFAULT(timeStamp_, "") };
    inline DescribeDomainBpsDataResponseBodyBpsDataPerIntervalDataModule& setTimeStamp(string timeStamp) { DARABONBA_PTR_SET_VALUE(timeStamp_, timeStamp) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string value() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline DescribeDomainBpsDataResponseBodyBpsDataPerIntervalDataModule& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    std::shared_ptr<string> domesticL2Value_ = nullptr;
    std::shared_ptr<string> domesticValue_ = nullptr;
    std::shared_ptr<string> dynamicDomesticValue_ = nullptr;
    std::shared_ptr<string> dynamicOverseasValue_ = nullptr;
    std::shared_ptr<int64_t> dynamicValue_ = nullptr;
    std::shared_ptr<string> l2Value_ = nullptr;
    std::shared_ptr<string> overseasL2Value_ = nullptr;
    std::shared_ptr<string> overseasValue_ = nullptr;
    std::shared_ptr<string> staticDomesticValue_ = nullptr;
    std::shared_ptr<string> staticOverseasValue_ = nullptr;
    std::shared_ptr<string> staticValue_ = nullptr;
    std::shared_ptr<string> timeStamp_ = nullptr;
    std::shared_ptr<string> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
