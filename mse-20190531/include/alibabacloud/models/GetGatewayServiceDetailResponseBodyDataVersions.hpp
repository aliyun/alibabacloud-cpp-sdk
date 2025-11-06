// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETGATEWAYSERVICEDETAILRESPONSEBODYDATAVERSIONS_HPP_
#define ALIBABACLOUD_MODELS_GETGATEWAYSERVICEDETAILRESPONSEBODYDATAVERSIONS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class GetGatewayServiceDetailResponseBodyDataVersions : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetGatewayServiceDetailResponseBodyDataVersions& obj) { 
      DARABONBA_PTR_TO_JSON(Label, label_);
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_PTR_TO_JSON(Value, value_);
    };
    friend void from_json(const Darabonba::Json& j, GetGatewayServiceDetailResponseBodyDataVersions& obj) { 
      DARABONBA_PTR_FROM_JSON(Label, label_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
    };
    GetGatewayServiceDetailResponseBodyDataVersions() = default ;
    GetGatewayServiceDetailResponseBodyDataVersions(const GetGatewayServiceDetailResponseBodyDataVersions &) = default ;
    GetGatewayServiceDetailResponseBodyDataVersions(GetGatewayServiceDetailResponseBodyDataVersions &&) = default ;
    GetGatewayServiceDetailResponseBodyDataVersions(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetGatewayServiceDetailResponseBodyDataVersions() = default ;
    GetGatewayServiceDetailResponseBodyDataVersions& operator=(const GetGatewayServiceDetailResponseBodyDataVersions &) = default ;
    GetGatewayServiceDetailResponseBodyDataVersions& operator=(GetGatewayServiceDetailResponseBodyDataVersions &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->label_ == nullptr
        && return this->type_ == nullptr && return this->value_ == nullptr; };
    // label Field Functions 
    bool hasLabel() const { return this->label_ != nullptr;};
    void deleteLabel() { this->label_ = nullptr;};
    inline string label() const { DARABONBA_PTR_GET_DEFAULT(label_, "") };
    inline GetGatewayServiceDetailResponseBodyDataVersions& setLabel(string label) { DARABONBA_PTR_SET_VALUE(label_, label) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline GetGatewayServiceDetailResponseBodyDataVersions& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string value() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline GetGatewayServiceDetailResponseBodyDataVersions& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    // The tag.
    std::shared_ptr<string> label_ = nullptr;
    // The type.
    std::shared_ptr<string> type_ = nullptr;
    // The tag value.
    std::shared_ptr<string> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
