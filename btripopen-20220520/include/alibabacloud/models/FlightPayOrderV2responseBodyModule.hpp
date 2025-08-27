// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FLIGHTPAYORDERV2RESPONSEBODYMODULE_HPP_
#define ALIBABACLOUD_MODELS_FLIGHTPAYORDERV2RESPONSEBODYMODULE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class FlightPayOrderV2ResponseBodyModule : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const FlightPayOrderV2ResponseBodyModule& obj) { 
      DARABONBA_PTR_TO_JSON(price, price_);
    };
    friend void from_json(const Darabonba::Json& j, FlightPayOrderV2ResponseBodyModule& obj) { 
      DARABONBA_PTR_FROM_JSON(price, price_);
    };
    FlightPayOrderV2ResponseBodyModule() = default ;
    FlightPayOrderV2ResponseBodyModule(const FlightPayOrderV2ResponseBodyModule &) = default ;
    FlightPayOrderV2ResponseBodyModule(FlightPayOrderV2ResponseBodyModule &&) = default ;
    FlightPayOrderV2ResponseBodyModule(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~FlightPayOrderV2ResponseBodyModule() = default ;
    FlightPayOrderV2ResponseBodyModule& operator=(const FlightPayOrderV2ResponseBodyModule &) = default ;
    FlightPayOrderV2ResponseBodyModule& operator=(FlightPayOrderV2ResponseBodyModule &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->price_ != nullptr; };
    // price Field Functions 
    bool hasPrice() const { return this->price_ != nullptr;};
    void deletePrice() { this->price_ = nullptr;};
    inline int64_t price() const { DARABONBA_PTR_GET_DEFAULT(price_, 0L) };
    inline FlightPayOrderV2ResponseBodyModule& setPrice(int64_t price) { DARABONBA_PTR_SET_VALUE(price_, price) };


  protected:
    std::shared_ptr<int64_t> price_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
