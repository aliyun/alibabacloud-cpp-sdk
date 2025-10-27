// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCHECKTIMEDIMENSIONSTATISTICRESPONSEBODYTIMEDIMENSIONSTATISTICDTOTIMEDIMENSIONSTATISTICITEMSSTATISTICDATAS_HPP_
#define ALIBABACLOUD_MODELS_GETCHECKTIMEDIMENSIONSTATISTICRESPONSEBODYTIMEDIMENSIONSTATISTICDTOTIMEDIMENSIONSTATISTICITEMSSTATISTICDATAS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class GetCheckTimeDimensionStatisticResponseBodyTimeDimensionStatisticDTOTimeDimensionStatisticItemsStatisticDatas : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetCheckTimeDimensionStatisticResponseBodyTimeDimensionStatisticDTOTimeDimensionStatisticItemsStatisticDatas& obj) { 
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Value, value_);
    };
    friend void from_json(const Darabonba::Json& j, GetCheckTimeDimensionStatisticResponseBodyTimeDimensionStatisticDTOTimeDimensionStatisticItemsStatisticDatas& obj) { 
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
    };
    GetCheckTimeDimensionStatisticResponseBodyTimeDimensionStatisticDTOTimeDimensionStatisticItemsStatisticDatas() = default ;
    GetCheckTimeDimensionStatisticResponseBodyTimeDimensionStatisticDTOTimeDimensionStatisticItemsStatisticDatas(const GetCheckTimeDimensionStatisticResponseBodyTimeDimensionStatisticDTOTimeDimensionStatisticItemsStatisticDatas &) = default ;
    GetCheckTimeDimensionStatisticResponseBodyTimeDimensionStatisticDTOTimeDimensionStatisticItemsStatisticDatas(GetCheckTimeDimensionStatisticResponseBodyTimeDimensionStatisticDTOTimeDimensionStatisticItemsStatisticDatas &&) = default ;
    GetCheckTimeDimensionStatisticResponseBodyTimeDimensionStatisticDTOTimeDimensionStatisticItemsStatisticDatas(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetCheckTimeDimensionStatisticResponseBodyTimeDimensionStatisticDTOTimeDimensionStatisticItemsStatisticDatas() = default ;
    GetCheckTimeDimensionStatisticResponseBodyTimeDimensionStatisticDTOTimeDimensionStatisticItemsStatisticDatas& operator=(const GetCheckTimeDimensionStatisticResponseBodyTimeDimensionStatisticDTOTimeDimensionStatisticItemsStatisticDatas &) = default ;
    GetCheckTimeDimensionStatisticResponseBodyTimeDimensionStatisticDTOTimeDimensionStatisticItemsStatisticDatas& operator=(GetCheckTimeDimensionStatisticResponseBodyTimeDimensionStatisticDTOTimeDimensionStatisticItemsStatisticDatas &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->name_ == nullptr
        && return this->value_ == nullptr; };
    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GetCheckTimeDimensionStatisticResponseBodyTimeDimensionStatisticDTOTimeDimensionStatisticItemsStatisticDatas& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline int32_t value() const { DARABONBA_PTR_GET_DEFAULT(value_, 0) };
    inline GetCheckTimeDimensionStatisticResponseBodyTimeDimensionStatisticDTOTimeDimensionStatisticItemsStatisticDatas& setValue(int32_t value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    // Data type.
    std::shared_ptr<string> name_ = nullptr;
    // Quantity.
    std::shared_ptr<int32_t> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
