// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FLIGHTORDERDETAILINFOREQUEST_HPP_
#define ALIBABACLOUD_MODELS_FLIGHTORDERDETAILINFOREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class FlightOrderDetailInfoRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const FlightOrderDetailInfoRequest& obj) { 
      DARABONBA_PTR_TO_JSON(dis_order_id, disOrderId_);
    };
    friend void from_json(const Darabonba::Json& j, FlightOrderDetailInfoRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(dis_order_id, disOrderId_);
    };
    FlightOrderDetailInfoRequest() = default ;
    FlightOrderDetailInfoRequest(const FlightOrderDetailInfoRequest &) = default ;
    FlightOrderDetailInfoRequest(FlightOrderDetailInfoRequest &&) = default ;
    FlightOrderDetailInfoRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~FlightOrderDetailInfoRequest() = default ;
    FlightOrderDetailInfoRequest& operator=(const FlightOrderDetailInfoRequest &) = default ;
    FlightOrderDetailInfoRequest& operator=(FlightOrderDetailInfoRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->disOrderId_ != nullptr; };
    // disOrderId Field Functions 
    bool hasDisOrderId() const { return this->disOrderId_ != nullptr;};
    void deleteDisOrderId() { this->disOrderId_ = nullptr;};
    inline string disOrderId() const { DARABONBA_PTR_GET_DEFAULT(disOrderId_, "") };
    inline FlightOrderDetailInfoRequest& setDisOrderId(string disOrderId) { DARABONBA_PTR_SET_VALUE(disOrderId_, disOrderId) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> disOrderId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
