// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSTORAGESIZESUMMARYRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETSTORAGESIZESUMMARYRESPONSEBODYDATA_HPP_
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
  class GetStorageSizeSummaryResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetStorageSizeSummaryResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(date, date_);
      DARABONBA_PTR_TO_JSON(timestamp, timestamp_);
      DARABONBA_PTR_TO_JSON(unit, unit_);
      DARABONBA_PTR_TO_JSON(value, value_);
    };
    friend void from_json(const Darabonba::Json& j, GetStorageSizeSummaryResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(date, date_);
      DARABONBA_PTR_FROM_JSON(timestamp, timestamp_);
      DARABONBA_PTR_FROM_JSON(unit, unit_);
      DARABONBA_PTR_FROM_JSON(value, value_);
    };
    GetStorageSizeSummaryResponseBodyData() = default ;
    GetStorageSizeSummaryResponseBodyData(const GetStorageSizeSummaryResponseBodyData &) = default ;
    GetStorageSizeSummaryResponseBodyData(GetStorageSizeSummaryResponseBodyData &&) = default ;
    GetStorageSizeSummaryResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetStorageSizeSummaryResponseBodyData() = default ;
    GetStorageSizeSummaryResponseBodyData& operator=(const GetStorageSizeSummaryResponseBodyData &) = default ;
    GetStorageSizeSummaryResponseBodyData& operator=(GetStorageSizeSummaryResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->date_ != nullptr
        && this->timestamp_ != nullptr && this->unit_ != nullptr && this->value_ != nullptr; };
    // date Field Functions 
    bool hasDate() const { return this->date_ != nullptr;};
    void deleteDate() { this->date_ = nullptr;};
    inline string date() const { DARABONBA_PTR_GET_DEFAULT(date_, "") };
    inline GetStorageSizeSummaryResponseBodyData& setDate(string date) { DARABONBA_PTR_SET_VALUE(date_, date) };


    // timestamp Field Functions 
    bool hasTimestamp() const { return this->timestamp_ != nullptr;};
    void deleteTimestamp() { this->timestamp_ = nullptr;};
    inline int64_t timestamp() const { DARABONBA_PTR_GET_DEFAULT(timestamp_, 0L) };
    inline GetStorageSizeSummaryResponseBodyData& setTimestamp(int64_t timestamp) { DARABONBA_PTR_SET_VALUE(timestamp_, timestamp) };


    // unit Field Functions 
    bool hasUnit() const { return this->unit_ != nullptr;};
    void deleteUnit() { this->unit_ = nullptr;};
    inline const map<string, string> & unit() const { DARABONBA_PTR_GET_CONST(unit_, map<string, string>) };
    inline map<string, string> unit() { DARABONBA_PTR_GET(unit_, map<string, string>) };
    inline GetStorageSizeSummaryResponseBodyData& setUnit(const map<string, string> & unit) { DARABONBA_PTR_SET_VALUE(unit_, unit) };
    inline GetStorageSizeSummaryResponseBodyData& setUnit(map<string, string> && unit) { DARABONBA_PTR_SET_RVALUE(unit_, unit) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline const map<string, double> & value() const { DARABONBA_PTR_GET_CONST(value_, map<string, double>) };
    inline map<string, double> value() { DARABONBA_PTR_GET(value_, map<string, double>) };
    inline GetStorageSizeSummaryResponseBodyData& setValue(const map<string, double> & value) { DARABONBA_PTR_SET_VALUE(value_, value) };
    inline GetStorageSizeSummaryResponseBodyData& setValue(map<string, double> && value) { DARABONBA_PTR_SET_RVALUE(value_, value) };


  protected:
    std::shared_ptr<string> date_ = nullptr;
    std::shared_ptr<int64_t> timestamp_ = nullptr;
    std::shared_ptr<map<string, string>> unit_ = nullptr;
    std::shared_ptr<map<string, double>> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MaxCompute20220104
#endif
