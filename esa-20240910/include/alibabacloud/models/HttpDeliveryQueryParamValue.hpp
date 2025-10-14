// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_HTTPDELIVERYQUERYPARAMVALUE_HPP_
#define ALIBABACLOUD_MODELS_HTTPDELIVERYQUERYPARAMVALUE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class HttpDeliveryQueryParamValue : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const HttpDeliveryQueryParamValue& obj) { 
      DARABONBA_PTR_TO_JSON(StaticValue, staticValue_);
    };
    friend void from_json(const Darabonba::Json& j, HttpDeliveryQueryParamValue& obj) { 
      DARABONBA_PTR_FROM_JSON(StaticValue, staticValue_);
    };
    HttpDeliveryQueryParamValue() = default ;
    HttpDeliveryQueryParamValue(const HttpDeliveryQueryParamValue &) = default ;
    HttpDeliveryQueryParamValue(HttpDeliveryQueryParamValue &&) = default ;
    HttpDeliveryQueryParamValue(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~HttpDeliveryQueryParamValue() = default ;
    HttpDeliveryQueryParamValue& operator=(const HttpDeliveryQueryParamValue &) = default ;
    HttpDeliveryQueryParamValue& operator=(HttpDeliveryQueryParamValue &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->staticValue_ == nullptr; };
    // staticValue Field Functions 
    bool hasStaticValue() const { return this->staticValue_ != nullptr;};
    void deleteStaticValue() { this->staticValue_ = nullptr;};
    inline string staticValue() const { DARABONBA_PTR_GET_DEFAULT(staticValue_, "") };
    inline HttpDeliveryQueryParamValue& setStaticValue(string staticValue) { DARABONBA_PTR_SET_VALUE(staticValue_, staticValue) };


  protected:
    // The static variable.
    std::shared_ptr<string> staticValue_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
