// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTENHANHCEDNATGATEWAYAVAILABLEZONESREQUESTFILTER_HPP_
#define ALIBABACLOUD_MODELS_LISTENHANHCEDNATGATEWAYAVAILABLEZONESREQUESTFILTER_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class ListEnhanhcedNatGatewayAvailableZonesRequestFilter : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListEnhanhcedNatGatewayAvailableZonesRequestFilter& obj) { 
      DARABONBA_PTR_TO_JSON(Key, key_);
      DARABONBA_PTR_TO_JSON(Value, value_);
    };
    friend void from_json(const Darabonba::Json& j, ListEnhanhcedNatGatewayAvailableZonesRequestFilter& obj) { 
      DARABONBA_PTR_FROM_JSON(Key, key_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
    };
    ListEnhanhcedNatGatewayAvailableZonesRequestFilter() = default ;
    ListEnhanhcedNatGatewayAvailableZonesRequestFilter(const ListEnhanhcedNatGatewayAvailableZonesRequestFilter &) = default ;
    ListEnhanhcedNatGatewayAvailableZonesRequestFilter(ListEnhanhcedNatGatewayAvailableZonesRequestFilter &&) = default ;
    ListEnhanhcedNatGatewayAvailableZonesRequestFilter(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListEnhanhcedNatGatewayAvailableZonesRequestFilter() = default ;
    ListEnhanhcedNatGatewayAvailableZonesRequestFilter& operator=(const ListEnhanhcedNatGatewayAvailableZonesRequestFilter &) = default ;
    ListEnhanhcedNatGatewayAvailableZonesRequestFilter& operator=(ListEnhanhcedNatGatewayAvailableZonesRequestFilter &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->key_ != nullptr
        && this->value_ != nullptr; };
    // key Field Functions 
    bool hasKey() const { return this->key_ != nullptr;};
    void deleteKey() { this->key_ = nullptr;};
    inline string key() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
    inline ListEnhanhcedNatGatewayAvailableZonesRequestFilter& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string value() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline ListEnhanhcedNatGatewayAvailableZonesRequestFilter& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    // The filter key. Only **PrivateLinkEnabled** is supported.
    std::shared_ptr<string> key_ = nullptr;
    // The value of the filter key.
    // 
    // >  If the filter key is set to **PrivateLinkEnabled**, you must specify a filter value. Valid values: **true** and **false**.
    std::shared_ptr<string> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
