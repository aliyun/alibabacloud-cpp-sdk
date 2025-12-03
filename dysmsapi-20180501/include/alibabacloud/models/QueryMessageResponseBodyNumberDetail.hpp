// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYMESSAGERESPONSEBODYNUMBERDETAIL_HPP_
#define ALIBABACLOUD_MODELS_QUERYMESSAGERESPONSEBODYNUMBERDETAIL_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dysmsapi20180501
{
namespace Models
{
  class QueryMessageResponseBodyNumberDetail : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryMessageResponseBodyNumberDetail& obj) { 
      DARABONBA_PTR_TO_JSON(Carrier, carrier_);
      DARABONBA_PTR_TO_JSON(Country, country_);
      DARABONBA_PTR_TO_JSON(Region, region_);
    };
    friend void from_json(const Darabonba::Json& j, QueryMessageResponseBodyNumberDetail& obj) { 
      DARABONBA_PTR_FROM_JSON(Carrier, carrier_);
      DARABONBA_PTR_FROM_JSON(Country, country_);
      DARABONBA_PTR_FROM_JSON(Region, region_);
    };
    QueryMessageResponseBodyNumberDetail() = default ;
    QueryMessageResponseBodyNumberDetail(const QueryMessageResponseBodyNumberDetail &) = default ;
    QueryMessageResponseBodyNumberDetail(QueryMessageResponseBodyNumberDetail &&) = default ;
    QueryMessageResponseBodyNumberDetail(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryMessageResponseBodyNumberDetail() = default ;
    QueryMessageResponseBodyNumberDetail& operator=(const QueryMessageResponseBodyNumberDetail &) = default ;
    QueryMessageResponseBodyNumberDetail& operator=(QueryMessageResponseBodyNumberDetail &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->carrier_ == nullptr
        && return this->country_ == nullptr && return this->region_ == nullptr; };
    // carrier Field Functions 
    bool hasCarrier() const { return this->carrier_ != nullptr;};
    void deleteCarrier() { this->carrier_ = nullptr;};
    inline string carrier() const { DARABONBA_PTR_GET_DEFAULT(carrier_, "") };
    inline QueryMessageResponseBodyNumberDetail& setCarrier(string carrier) { DARABONBA_PTR_SET_VALUE(carrier_, carrier) };


    // country Field Functions 
    bool hasCountry() const { return this->country_ != nullptr;};
    void deleteCountry() { this->country_ = nullptr;};
    inline string country() const { DARABONBA_PTR_GET_DEFAULT(country_, "") };
    inline QueryMessageResponseBodyNumberDetail& setCountry(string country) { DARABONBA_PTR_SET_VALUE(country_, country) };


    // region Field Functions 
    bool hasRegion() const { return this->region_ != nullptr;};
    void deleteRegion() { this->region_ = nullptr;};
    inline string region() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
    inline QueryMessageResponseBodyNumberDetail& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


  protected:
    // The carrier that owns the mobile phone number.
    std::shared_ptr<string> carrier_ = nullptr;
    // The country to which the mobile phone number belongs.
    std::shared_ptr<string> country_ = nullptr;
    // The region to which the mobile phone number belongs.
    std::shared_ptr<string> region_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dysmsapi20180501
#endif
