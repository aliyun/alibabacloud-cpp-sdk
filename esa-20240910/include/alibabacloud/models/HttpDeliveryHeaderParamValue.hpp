// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_HTTPDELIVERYHEADERPARAMVALUE_HPP_
#define ALIBABACLOUD_MODELS_HTTPDELIVERYHEADERPARAMVALUE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class HttpDeliveryHeaderParamValue : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const HttpDeliveryHeaderParamValue& obj) { 
      DARABONBA_PTR_TO_JSON(StaticValue, staticValue_);
    };
    friend void from_json(const Darabonba::Json& j, HttpDeliveryHeaderParamValue& obj) { 
      DARABONBA_PTR_FROM_JSON(StaticValue, staticValue_);
    };
    HttpDeliveryHeaderParamValue() = default ;
    HttpDeliveryHeaderParamValue(const HttpDeliveryHeaderParamValue &) = default ;
    HttpDeliveryHeaderParamValue(HttpDeliveryHeaderParamValue &&) = default ;
    HttpDeliveryHeaderParamValue(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~HttpDeliveryHeaderParamValue() = default ;
    HttpDeliveryHeaderParamValue& operator=(const HttpDeliveryHeaderParamValue &) = default ;
    HttpDeliveryHeaderParamValue& operator=(HttpDeliveryHeaderParamValue &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->staticValue_ == nullptr; };
    // staticValue Field Functions 
    bool hasStaticValue() const { return this->staticValue_ != nullptr;};
    void deleteStaticValue() { this->staticValue_ = nullptr;};
    inline string getStaticValue() const { DARABONBA_PTR_GET_DEFAULT(staticValue_, "") };
    inline HttpDeliveryHeaderParamValue& setStaticValue(string staticValue) { DARABONBA_PTR_SET_VALUE(staticValue_, staticValue) };


  protected:
    // The static variable.
    shared_ptr<string> staticValue_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
