// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUOTALISTITEMSVALUE_HPP_
#define ALIBABACLOUD_MODELS_QUOTALISTITEMSVALUE_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/WafQuotaString.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class QuotaListItemsValue : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QuotaListItemsValue& obj) { 
      DARABONBA_PTR_TO_JSON(Enable, enable_);
      DARABONBA_PTR_TO_JSON(Value, value_);
    };
    friend void from_json(const Darabonba::Json& j, QuotaListItemsValue& obj) { 
      DARABONBA_PTR_FROM_JSON(Enable, enable_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
    };
    QuotaListItemsValue() = default ;
    QuotaListItemsValue(const QuotaListItemsValue &) = default ;
    QuotaListItemsValue(QuotaListItemsValue &&) = default ;
    QuotaListItemsValue(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QuotaListItemsValue() = default ;
    QuotaListItemsValue& operator=(const QuotaListItemsValue &) = default ;
    QuotaListItemsValue& operator=(QuotaListItemsValue &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->enable_ == nullptr
        && return this->value_ == nullptr; };
    // enable Field Functions 
    bool hasEnable() const { return this->enable_ != nullptr;};
    void deleteEnable() { this->enable_ = nullptr;};
    inline bool enable() const { DARABONBA_PTR_GET_DEFAULT(enable_, false) };
    inline QuotaListItemsValue& setEnable(bool enable) { DARABONBA_PTR_SET_VALUE(enable_, enable) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline const WafQuotaString & value() const { DARABONBA_PTR_GET_CONST(value_, WafQuotaString) };
    inline WafQuotaString value() { DARABONBA_PTR_GET(value_, WafQuotaString) };
    inline QuotaListItemsValue& setValue(const WafQuotaString & value) { DARABONBA_PTR_SET_VALUE(value_, value) };
    inline QuotaListItemsValue& setValue(WafQuotaString && value) { DARABONBA_PTR_SET_RVALUE(value_, value) };


  protected:
    // The switch for the type of item in the custom list.
    std::shared_ptr<bool> enable_ = nullptr;
    // Format restrictions for the type of item in the custom list.
    std::shared_ptr<WafQuotaString> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
