// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INSERTDROPDOWNLISTREQUESTOPTIONS_HPP_
#define ALIBABACLOUD_MODELS_INSERTDROPDOWNLISTREQUESTOPTIONS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class InsertDropDownListRequestOptions : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const InsertDropDownListRequestOptions& obj) { 
      DARABONBA_PTR_TO_JSON(Color, color_);
      DARABONBA_PTR_TO_JSON(Value, value_);
    };
    friend void from_json(const Darabonba::Json& j, InsertDropDownListRequestOptions& obj) { 
      DARABONBA_PTR_FROM_JSON(Color, color_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
    };
    InsertDropDownListRequestOptions() = default ;
    InsertDropDownListRequestOptions(const InsertDropDownListRequestOptions &) = default ;
    InsertDropDownListRequestOptions(InsertDropDownListRequestOptions &&) = default ;
    InsertDropDownListRequestOptions(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~InsertDropDownListRequestOptions() = default ;
    InsertDropDownListRequestOptions& operator=(const InsertDropDownListRequestOptions &) = default ;
    InsertDropDownListRequestOptions& operator=(InsertDropDownListRequestOptions &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->color_ != nullptr
        && this->value_ != nullptr; };
    // color Field Functions 
    bool hasColor() const { return this->color_ != nullptr;};
    void deleteColor() { this->color_ = nullptr;};
    inline string color() const { DARABONBA_PTR_GET_DEFAULT(color_, "") };
    inline InsertDropDownListRequestOptions& setColor(string color) { DARABONBA_PTR_SET_VALUE(color_, color) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string value() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline InsertDropDownListRequestOptions& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> color_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
