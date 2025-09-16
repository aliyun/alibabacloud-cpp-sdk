// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYCONVERTINSTANCEPRICERESPONSEBODYPRICEINFODEPRECIATEINFO_HPP_
#define ALIBABACLOUD_MODELS_QUERYCONVERTINSTANCEPRICERESPONSEBODYPRICEINFODEPRECIATEINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Foasconsole20211028
{
namespace Models
{
  class QueryConvertInstancePriceResponseBodyPriceInfoDepreciateInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryConvertInstancePriceResponseBodyPriceInfoDepreciateInfo& obj) { 
      DARABONBA_PTR_TO_JSON(CheapRate, cheapRate_);
      DARABONBA_PTR_TO_JSON(CheapStandAmount, cheapStandAmount_);
      DARABONBA_PTR_TO_JSON(IsShow, isShow_);
      DARABONBA_PTR_TO_JSON(MonthPrice, monthPrice_);
      DARABONBA_PTR_TO_JSON(OriginalStandAmount, originalStandAmount_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, QueryConvertInstancePriceResponseBodyPriceInfoDepreciateInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(CheapRate, cheapRate_);
      DARABONBA_PTR_FROM_JSON(CheapStandAmount, cheapStandAmount_);
      DARABONBA_PTR_FROM_JSON(IsShow, isShow_);
      DARABONBA_PTR_FROM_JSON(MonthPrice, monthPrice_);
      DARABONBA_PTR_FROM_JSON(OriginalStandAmount, originalStandAmount_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
    };
    QueryConvertInstancePriceResponseBodyPriceInfoDepreciateInfo() = default ;
    QueryConvertInstancePriceResponseBodyPriceInfoDepreciateInfo(const QueryConvertInstancePriceResponseBodyPriceInfoDepreciateInfo &) = default ;
    QueryConvertInstancePriceResponseBodyPriceInfoDepreciateInfo(QueryConvertInstancePriceResponseBodyPriceInfoDepreciateInfo &&) = default ;
    QueryConvertInstancePriceResponseBodyPriceInfoDepreciateInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryConvertInstancePriceResponseBodyPriceInfoDepreciateInfo() = default ;
    QueryConvertInstancePriceResponseBodyPriceInfoDepreciateInfo& operator=(const QueryConvertInstancePriceResponseBodyPriceInfoDepreciateInfo &) = default ;
    QueryConvertInstancePriceResponseBodyPriceInfoDepreciateInfo& operator=(QueryConvertInstancePriceResponseBodyPriceInfoDepreciateInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->cheapRate_ != nullptr
        && this->cheapStandAmount_ != nullptr && this->isShow_ != nullptr && this->monthPrice_ != nullptr && this->originalStandAmount_ != nullptr && this->startTime_ != nullptr; };
    // cheapRate Field Functions 
    bool hasCheapRate() const { return this->cheapRate_ != nullptr;};
    void deleteCheapRate() { this->cheapRate_ = nullptr;};
    inline string cheapRate() const { DARABONBA_PTR_GET_DEFAULT(cheapRate_, "") };
    inline QueryConvertInstancePriceResponseBodyPriceInfoDepreciateInfo& setCheapRate(string cheapRate) { DARABONBA_PTR_SET_VALUE(cheapRate_, cheapRate) };


    // cheapStandAmount Field Functions 
    bool hasCheapStandAmount() const { return this->cheapStandAmount_ != nullptr;};
    void deleteCheapStandAmount() { this->cheapStandAmount_ = nullptr;};
    inline string cheapStandAmount() const { DARABONBA_PTR_GET_DEFAULT(cheapStandAmount_, "") };
    inline QueryConvertInstancePriceResponseBodyPriceInfoDepreciateInfo& setCheapStandAmount(string cheapStandAmount) { DARABONBA_PTR_SET_VALUE(cheapStandAmount_, cheapStandAmount) };


    // isShow Field Functions 
    bool hasIsShow() const { return this->isShow_ != nullptr;};
    void deleteIsShow() { this->isShow_ = nullptr;};
    inline bool isShow() const { DARABONBA_PTR_GET_DEFAULT(isShow_, false) };
    inline QueryConvertInstancePriceResponseBodyPriceInfoDepreciateInfo& setIsShow(bool isShow) { DARABONBA_PTR_SET_VALUE(isShow_, isShow) };


    // monthPrice Field Functions 
    bool hasMonthPrice() const { return this->monthPrice_ != nullptr;};
    void deleteMonthPrice() { this->monthPrice_ = nullptr;};
    inline string monthPrice() const { DARABONBA_PTR_GET_DEFAULT(monthPrice_, "") };
    inline QueryConvertInstancePriceResponseBodyPriceInfoDepreciateInfo& setMonthPrice(string monthPrice) { DARABONBA_PTR_SET_VALUE(monthPrice_, monthPrice) };


    // originalStandAmount Field Functions 
    bool hasOriginalStandAmount() const { return this->originalStandAmount_ != nullptr;};
    void deleteOriginalStandAmount() { this->originalStandAmount_ = nullptr;};
    inline string originalStandAmount() const { DARABONBA_PTR_GET_DEFAULT(originalStandAmount_, "") };
    inline QueryConvertInstancePriceResponseBodyPriceInfoDepreciateInfo& setOriginalStandAmount(string originalStandAmount) { DARABONBA_PTR_SET_VALUE(originalStandAmount_, originalStandAmount) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline QueryConvertInstancePriceResponseBodyPriceInfoDepreciateInfo& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    std::shared_ptr<string> cheapRate_ = nullptr;
    std::shared_ptr<string> cheapStandAmount_ = nullptr;
    std::shared_ptr<bool> isShow_ = nullptr;
    std::shared_ptr<string> monthPrice_ = nullptr;
    std::shared_ptr<string> originalStandAmount_ = nullptr;
    std::shared_ptr<string> startTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Foasconsole20211028
#endif
