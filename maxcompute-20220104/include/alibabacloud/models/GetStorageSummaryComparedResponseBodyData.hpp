// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSTORAGESUMMARYCOMPAREDRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETSTORAGESUMMARYCOMPAREDRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <map>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MaxCompute20220104
{
namespace Models
{
  class GetStorageSummaryComparedResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetStorageSummaryComparedResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(beginDate, beginDate_);
      DARABONBA_PTR_TO_JSON(endDate, endDate_);
      DARABONBA_PTR_TO_JSON(rate, rate_);
      DARABONBA_PTR_TO_JSON(unit, unit_);
      DARABONBA_PTR_TO_JSON(value, value_);
    };
    friend void from_json(const Darabonba::Json& j, GetStorageSummaryComparedResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(beginDate, beginDate_);
      DARABONBA_PTR_FROM_JSON(endDate, endDate_);
      DARABONBA_PTR_FROM_JSON(rate, rate_);
      DARABONBA_PTR_FROM_JSON(unit, unit_);
      DARABONBA_PTR_FROM_JSON(value, value_);
    };
    GetStorageSummaryComparedResponseBodyData() = default ;
    GetStorageSummaryComparedResponseBodyData(const GetStorageSummaryComparedResponseBodyData &) = default ;
    GetStorageSummaryComparedResponseBodyData(GetStorageSummaryComparedResponseBodyData &&) = default ;
    GetStorageSummaryComparedResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetStorageSummaryComparedResponseBodyData() = default ;
    GetStorageSummaryComparedResponseBodyData& operator=(const GetStorageSummaryComparedResponseBodyData &) = default ;
    GetStorageSummaryComparedResponseBodyData& operator=(GetStorageSummaryComparedResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->beginDate_ != nullptr
        && this->endDate_ != nullptr && this->rate_ != nullptr && this->unit_ != nullptr && this->value_ != nullptr; };
    // beginDate Field Functions 
    bool hasBeginDate() const { return this->beginDate_ != nullptr;};
    void deleteBeginDate() { this->beginDate_ = nullptr;};
    inline string beginDate() const { DARABONBA_PTR_GET_DEFAULT(beginDate_, "") };
    inline GetStorageSummaryComparedResponseBodyData& setBeginDate(string beginDate) { DARABONBA_PTR_SET_VALUE(beginDate_, beginDate) };


    // endDate Field Functions 
    bool hasEndDate() const { return this->endDate_ != nullptr;};
    void deleteEndDate() { this->endDate_ = nullptr;};
    inline string endDate() const { DARABONBA_PTR_GET_DEFAULT(endDate_, "") };
    inline GetStorageSummaryComparedResponseBodyData& setEndDate(string endDate) { DARABONBA_PTR_SET_VALUE(endDate_, endDate) };


    // rate Field Functions 
    bool hasRate() const { return this->rate_ != nullptr;};
    void deleteRate() { this->rate_ = nullptr;};
    inline const map<string, double> & rate() const { DARABONBA_PTR_GET_CONST(rate_, map<string, double>) };
    inline map<string, double> rate() { DARABONBA_PTR_GET(rate_, map<string, double>) };
    inline GetStorageSummaryComparedResponseBodyData& setRate(const map<string, double> & rate) { DARABONBA_PTR_SET_VALUE(rate_, rate) };
    inline GetStorageSummaryComparedResponseBodyData& setRate(map<string, double> && rate) { DARABONBA_PTR_SET_RVALUE(rate_, rate) };


    // unit Field Functions 
    bool hasUnit() const { return this->unit_ != nullptr;};
    void deleteUnit() { this->unit_ = nullptr;};
    inline const map<string, string> & unit() const { DARABONBA_PTR_GET_CONST(unit_, map<string, string>) };
    inline map<string, string> unit() { DARABONBA_PTR_GET(unit_, map<string, string>) };
    inline GetStorageSummaryComparedResponseBodyData& setUnit(const map<string, string> & unit) { DARABONBA_PTR_SET_VALUE(unit_, unit) };
    inline GetStorageSummaryComparedResponseBodyData& setUnit(map<string, string> && unit) { DARABONBA_PTR_SET_RVALUE(unit_, unit) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline const map<string, double> & value() const { DARABONBA_PTR_GET_CONST(value_, map<string, double>) };
    inline map<string, double> value() { DARABONBA_PTR_GET(value_, map<string, double>) };
    inline GetStorageSummaryComparedResponseBodyData& setValue(const map<string, double> & value) { DARABONBA_PTR_SET_VALUE(value_, value) };
    inline GetStorageSummaryComparedResponseBodyData& setValue(map<string, double> && value) { DARABONBA_PTR_SET_RVALUE(value_, value) };


  protected:
    std::shared_ptr<string> beginDate_ = nullptr;
    std::shared_ptr<string> endDate_ = nullptr;
    std::shared_ptr<map<string, double>> rate_ = nullptr;
    std::shared_ptr<map<string, string>> unit_ = nullptr;
    std::shared_ptr<map<string, double>> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MaxCompute20220104
#endif
