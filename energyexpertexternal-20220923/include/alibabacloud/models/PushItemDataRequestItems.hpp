// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PUSHITEMDATAREQUESTITEMS_HPP_
#define ALIBABACLOUD_MODELS_PUSHITEMDATAREQUESTITEMS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EnergyExpertExternal20220923
{
namespace Models
{
  class PushItemDataRequestItems : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PushItemDataRequestItems& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(month, month_);
      DARABONBA_PTR_TO_JSON(value, value_);
    };
    friend void from_json(const Darabonba::Json& j, PushItemDataRequestItems& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(month, month_);
      DARABONBA_PTR_FROM_JSON(value, value_);
    };
    PushItemDataRequestItems() = default ;
    PushItemDataRequestItems(const PushItemDataRequestItems &) = default ;
    PushItemDataRequestItems(PushItemDataRequestItems &&) = default ;
    PushItemDataRequestItems(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PushItemDataRequestItems() = default ;
    PushItemDataRequestItems& operator=(const PushItemDataRequestItems &) = default ;
    PushItemDataRequestItems& operator=(PushItemDataRequestItems &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->code_ == nullptr
        && return this->month_ == nullptr && return this->value_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline PushItemDataRequestItems& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // month Field Functions 
    bool hasMonth() const { return this->month_ != nullptr;};
    void deleteMonth() { this->month_ = nullptr;};
    inline string month() const { DARABONBA_PTR_GET_DEFAULT(month_, "") };
    inline PushItemDataRequestItems& setMonth(string month) { DARABONBA_PTR_SET_VALUE(month_, month) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline double value() const { DARABONBA_PTR_GET_DEFAULT(value_, 0.0) };
    inline PushItemDataRequestItems& setValue(double value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    // API data identification.<props="intl">For details: [GetDataItemList ](https://www.alibabacloud.com/help/en/energy-expert/developer-reference/api-energyexpertexternal-2022-09-23-getdataitemlist)
    // 
    // This parameter is required.
    std::shared_ptr<string> code_ = nullptr;
    // The month.
    // 
    // This parameter is required.
    std::shared_ptr<string> month_ = nullptr;
    // The value of the data item.
    // 
    // This parameter is required.
    std::shared_ptr<double> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EnergyExpertExternal20220923
#endif
