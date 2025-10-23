// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDATAITEMLISTRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETDATAITEMLISTRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EnergyExpertExternal20220923
{
namespace Models
{
  class GetDataItemListResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDataItemListResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(period, period_);
      DARABONBA_PTR_TO_JSON(unit, unit_);
    };
    friend void from_json(const Darabonba::Json& j, GetDataItemListResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(period, period_);
      DARABONBA_PTR_FROM_JSON(unit, unit_);
    };
    GetDataItemListResponseBodyData() = default ;
    GetDataItemListResponseBodyData(const GetDataItemListResponseBodyData &) = default ;
    GetDataItemListResponseBodyData(GetDataItemListResponseBodyData &&) = default ;
    GetDataItemListResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDataItemListResponseBodyData() = default ;
    GetDataItemListResponseBodyData& operator=(const GetDataItemListResponseBodyData &) = default ;
    GetDataItemListResponseBodyData& operator=(GetDataItemListResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->code_ == nullptr
        && return this->name_ == nullptr && return this->period_ == nullptr && return this->unit_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetDataItemListResponseBodyData& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GetDataItemListResponseBodyData& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // period Field Functions 
    bool hasPeriod() const { return this->period_ != nullptr;};
    void deletePeriod() { this->period_ = nullptr;};
    inline int32_t period() const { DARABONBA_PTR_GET_DEFAULT(period_, 0) };
    inline GetDataItemListResponseBodyData& setPeriod(int32_t period) { DARABONBA_PTR_SET_VALUE(period_, period) };


    // unit Field Functions 
    bool hasUnit() const { return this->unit_ != nullptr;};
    void deleteUnit() { this->unit_ = nullptr;};
    inline string unit() const { DARABONBA_PTR_GET_DEFAULT(unit_, "") };
    inline GetDataItemListResponseBodyData& setUnit(string unit) { DARABONBA_PTR_SET_VALUE(unit_, unit) };


  protected:
    // The identifier of the data item.
    std::shared_ptr<string> code_ = nullptr;
    // The name of the data item.
    std::shared_ptr<string> name_ = nullptr;
    // Data filling method, 1: monthly value 2: annual value.
    std::shared_ptr<int32_t> period_ = nullptr;
    // The data item unit.
    std::shared_ptr<string> unit_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EnergyExpertExternal20220923
#endif
