// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETEPDSUMMARYRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETEPDSUMMARYRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EnergyExpertExternal20220923
{
namespace Models
{
  class GetEpdSummaryResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetEpdSummaryResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(carbonEmission, carbonEmission_);
      DARABONBA_PTR_TO_JSON(indicator, indicator_);
      DARABONBA_PTR_TO_JSON(key, key_);
      DARABONBA_PTR_TO_JSON(method, method_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(num, num_);
      DARABONBA_PTR_TO_JSON(preUnit, preUnit_);
      DARABONBA_PTR_TO_JSON(state, state_);
    };
    friend void from_json(const Darabonba::Json& j, GetEpdSummaryResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(carbonEmission, carbonEmission_);
      DARABONBA_PTR_FROM_JSON(indicator, indicator_);
      DARABONBA_PTR_FROM_JSON(key, key_);
      DARABONBA_PTR_FROM_JSON(method, method_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(num, num_);
      DARABONBA_PTR_FROM_JSON(preUnit, preUnit_);
      DARABONBA_PTR_FROM_JSON(state, state_);
    };
    GetEpdSummaryResponseBodyData() = default ;
    GetEpdSummaryResponseBodyData(const GetEpdSummaryResponseBodyData &) = default ;
    GetEpdSummaryResponseBodyData(GetEpdSummaryResponseBodyData &&) = default ;
    GetEpdSummaryResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetEpdSummaryResponseBodyData() = default ;
    GetEpdSummaryResponseBodyData& operator=(const GetEpdSummaryResponseBodyData &) = default ;
    GetEpdSummaryResponseBodyData& operator=(GetEpdSummaryResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->carbonEmission_ == nullptr
        && return this->indicator_ == nullptr && return this->key_ == nullptr && return this->method_ == nullptr && return this->name_ == nullptr && return this->num_ == nullptr
        && return this->preUnit_ == nullptr && return this->state_ == nullptr; };
    // carbonEmission Field Functions 
    bool hasCarbonEmission() const { return this->carbonEmission_ != nullptr;};
    void deleteCarbonEmission() { this->carbonEmission_ = nullptr;};
    inline double carbonEmission() const { DARABONBA_PTR_GET_DEFAULT(carbonEmission_, 0.0) };
    inline GetEpdSummaryResponseBodyData& setCarbonEmission(double carbonEmission) { DARABONBA_PTR_SET_VALUE(carbonEmission_, carbonEmission) };


    // indicator Field Functions 
    bool hasIndicator() const { return this->indicator_ != nullptr;};
    void deleteIndicator() { this->indicator_ = nullptr;};
    inline string indicator() const { DARABONBA_PTR_GET_DEFAULT(indicator_, "") };
    inline GetEpdSummaryResponseBodyData& setIndicator(string indicator) { DARABONBA_PTR_SET_VALUE(indicator_, indicator) };


    // key Field Functions 
    bool hasKey() const { return this->key_ != nullptr;};
    void deleteKey() { this->key_ = nullptr;};
    inline string key() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
    inline GetEpdSummaryResponseBodyData& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


    // method Field Functions 
    bool hasMethod() const { return this->method_ != nullptr;};
    void deleteMethod() { this->method_ = nullptr;};
    inline string method() const { DARABONBA_PTR_GET_DEFAULT(method_, "") };
    inline GetEpdSummaryResponseBodyData& setMethod(string method) { DARABONBA_PTR_SET_VALUE(method_, method) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GetEpdSummaryResponseBodyData& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // num Field Functions 
    bool hasNum() const { return this->num_ != nullptr;};
    void deleteNum() { this->num_ = nullptr;};
    inline int64_t num() const { DARABONBA_PTR_GET_DEFAULT(num_, 0L) };
    inline GetEpdSummaryResponseBodyData& setNum(int64_t num) { DARABONBA_PTR_SET_VALUE(num_, num) };


    // preUnit Field Functions 
    bool hasPreUnit() const { return this->preUnit_ != nullptr;};
    void deletePreUnit() { this->preUnit_ = nullptr;};
    inline string preUnit() const { DARABONBA_PTR_GET_DEFAULT(preUnit_, "") };
    inline GetEpdSummaryResponseBodyData& setPreUnit(string preUnit) { DARABONBA_PTR_SET_VALUE(preUnit_, preUnit) };


    // state Field Functions 
    bool hasState() const { return this->state_ != nullptr;};
    void deleteState() { this->state_ = nullptr;};
    inline int64_t state() const { DARABONBA_PTR_GET_DEFAULT(state_, 0L) };
    inline GetEpdSummaryResponseBodyData& setState(int64_t state) { DARABONBA_PTR_SET_VALUE(state_, state) };


  protected:
    // Emissions. The result is maintained up to 31 decimal places for precise intermediate calculation and subsequently truncated for display. It is advised to pair the emissions figure with the unit of the environmental impact result for a comprehensive understanding.
    std::shared_ptr<double> carbonEmission_ = nullptr;
    // The evaluation index adopted for the environmental impact
    std::shared_ptr<string> indicator_ = nullptr;
    // The category key. The environmental impact category. Currently, a maximum of 19 categories are supported. Enumeration refers to [Carbon Footprint Appendices](https://carbon-doc.oss-cn-hangzhou.aliyuncs.com/CarbonFootprintAppendices-en.pdf).
    std::shared_ptr<string> key_ = nullptr;
    // Calculation method standard
    std::shared_ptr<string> method_ = nullptr;
    // The name of the category.
    std::shared_ptr<string> name_ = nullptr;
    // Category num: the unique serial number of the environmental impact category. A maximum of 19 categories are supported. Enumeration refers to [Carbon Footprint Appendices](https://carbon-doc.oss-cn-hangzhou.aliyuncs.com/CarbonFootprintAppendices-en.pdf).
    std::shared_ptr<int64_t> num_ = nullptr;
    // Environmental impact result Value Unit.
    std::shared_ptr<string> preUnit_ = nullptr;
    // The data status. 1 indicates that the calculation is accurate, 2 indicates that the default data is used, and 3 indicates that the missing factor uses the value of 0.
    std::shared_ptr<int64_t> state_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EnergyExpertExternal20220923
#endif
