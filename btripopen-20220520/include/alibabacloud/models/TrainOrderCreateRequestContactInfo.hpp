// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TRAINORDERCREATEREQUESTCONTACTINFO_HPP_
#define ALIBABACLOUD_MODELS_TRAINORDERCREATEREQUESTCONTACTINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class TrainOrderCreateRequestContactInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TrainOrderCreateRequestContactInfo& obj) { 
      DARABONBA_PTR_TO_JSON(passenger_id, passengerId_);
      DARABONBA_PTR_TO_JSON(passenger_mobile, passengerMobile_);
      DARABONBA_PTR_TO_JSON(passenger_name, passengerName_);
    };
    friend void from_json(const Darabonba::Json& j, TrainOrderCreateRequestContactInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(passenger_id, passengerId_);
      DARABONBA_PTR_FROM_JSON(passenger_mobile, passengerMobile_);
      DARABONBA_PTR_FROM_JSON(passenger_name, passengerName_);
    };
    TrainOrderCreateRequestContactInfo() = default ;
    TrainOrderCreateRequestContactInfo(const TrainOrderCreateRequestContactInfo &) = default ;
    TrainOrderCreateRequestContactInfo(TrainOrderCreateRequestContactInfo &&) = default ;
    TrainOrderCreateRequestContactInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TrainOrderCreateRequestContactInfo() = default ;
    TrainOrderCreateRequestContactInfo& operator=(const TrainOrderCreateRequestContactInfo &) = default ;
    TrainOrderCreateRequestContactInfo& operator=(TrainOrderCreateRequestContactInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->passengerId_ != nullptr
        && this->passengerMobile_ != nullptr && this->passengerName_ != nullptr; };
    // passengerId Field Functions 
    bool hasPassengerId() const { return this->passengerId_ != nullptr;};
    void deletePassengerId() { this->passengerId_ = nullptr;};
    inline string passengerId() const { DARABONBA_PTR_GET_DEFAULT(passengerId_, "") };
    inline TrainOrderCreateRequestContactInfo& setPassengerId(string passengerId) { DARABONBA_PTR_SET_VALUE(passengerId_, passengerId) };


    // passengerMobile Field Functions 
    bool hasPassengerMobile() const { return this->passengerMobile_ != nullptr;};
    void deletePassengerMobile() { this->passengerMobile_ = nullptr;};
    inline string passengerMobile() const { DARABONBA_PTR_GET_DEFAULT(passengerMobile_, "") };
    inline TrainOrderCreateRequestContactInfo& setPassengerMobile(string passengerMobile) { DARABONBA_PTR_SET_VALUE(passengerMobile_, passengerMobile) };


    // passengerName Field Functions 
    bool hasPassengerName() const { return this->passengerName_ != nullptr;};
    void deletePassengerName() { this->passengerName_ = nullptr;};
    inline string passengerName() const { DARABONBA_PTR_GET_DEFAULT(passengerName_, "") };
    inline TrainOrderCreateRequestContactInfo& setPassengerName(string passengerName) { DARABONBA_PTR_SET_VALUE(passengerName_, passengerName) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> passengerId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> passengerMobile_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> passengerName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
