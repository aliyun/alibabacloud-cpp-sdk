// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_HIMARKETICON_HPP_
#define ALIBABACLOUD_MODELS_HIMARKETICON_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class HiMarketIcon : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const HiMarketIcon& obj) { 
      DARABONBA_PTR_TO_JSON(type, type_);
      DARABONBA_PTR_TO_JSON(value, value_);
    };
    friend void from_json(const Darabonba::Json& j, HiMarketIcon& obj) { 
      DARABONBA_PTR_FROM_JSON(type, type_);
      DARABONBA_PTR_FROM_JSON(value, value_);
    };
    HiMarketIcon() = default ;
    HiMarketIcon(const HiMarketIcon &) = default ;
    HiMarketIcon(HiMarketIcon &&) = default ;
    HiMarketIcon(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~HiMarketIcon() = default ;
    HiMarketIcon& operator=(const HiMarketIcon &) = default ;
    HiMarketIcon& operator=(HiMarketIcon &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->type_ == nullptr
        && this->value_ == nullptr; };
    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline HiMarketIcon& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline HiMarketIcon& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    // Specifies the icon type. Example: `URL`.
    shared_ptr<string> type_ {};
    // The value of the icon, based on the specified `type`. For example, if `type` is `URL`, this is the URL of the icon.
    shared_ptr<string> value_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
