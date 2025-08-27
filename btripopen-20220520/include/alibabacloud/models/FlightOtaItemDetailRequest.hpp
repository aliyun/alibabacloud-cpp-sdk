// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FLIGHTOTAITEMDETAILREQUEST_HPP_
#define ALIBABACLOUD_MODELS_FLIGHTOTAITEMDETAILREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class FlightOtaItemDetailRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const FlightOtaItemDetailRequest& obj) { 
      DARABONBA_PTR_TO_JSON(isv_name, isvName_);
      DARABONBA_PTR_TO_JSON(ota_item_id, otaItemId_);
    };
    friend void from_json(const Darabonba::Json& j, FlightOtaItemDetailRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(isv_name, isvName_);
      DARABONBA_PTR_FROM_JSON(ota_item_id, otaItemId_);
    };
    FlightOtaItemDetailRequest() = default ;
    FlightOtaItemDetailRequest(const FlightOtaItemDetailRequest &) = default ;
    FlightOtaItemDetailRequest(FlightOtaItemDetailRequest &&) = default ;
    FlightOtaItemDetailRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~FlightOtaItemDetailRequest() = default ;
    FlightOtaItemDetailRequest& operator=(const FlightOtaItemDetailRequest &) = default ;
    FlightOtaItemDetailRequest& operator=(FlightOtaItemDetailRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->isvName_ != nullptr
        && this->otaItemId_ != nullptr; };
    // isvName Field Functions 
    bool hasIsvName() const { return this->isvName_ != nullptr;};
    void deleteIsvName() { this->isvName_ = nullptr;};
    inline string isvName() const { DARABONBA_PTR_GET_DEFAULT(isvName_, "") };
    inline FlightOtaItemDetailRequest& setIsvName(string isvName) { DARABONBA_PTR_SET_VALUE(isvName_, isvName) };


    // otaItemId Field Functions 
    bool hasOtaItemId() const { return this->otaItemId_ != nullptr;};
    void deleteOtaItemId() { this->otaItemId_ = nullptr;};
    inline string otaItemId() const { DARABONBA_PTR_GET_DEFAULT(otaItemId_, "") };
    inline FlightOtaItemDetailRequest& setOtaItemId(string otaItemId) { DARABONBA_PTR_SET_VALUE(otaItemId_, otaItemId) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> isvName_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> otaItemId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
