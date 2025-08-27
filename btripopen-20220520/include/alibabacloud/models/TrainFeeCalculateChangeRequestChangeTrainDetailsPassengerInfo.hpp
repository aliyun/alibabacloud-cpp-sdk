// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TRAINFEECALCULATECHANGEREQUESTCHANGETRAINDETAILSPASSENGERINFO_HPP_
#define ALIBABACLOUD_MODELS_TRAINFEECALCULATECHANGEREQUESTCHANGETRAINDETAILSPASSENGERINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class TrainFeeCalculateChangeRequestChangeTrainDetailsPassengerInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TrainFeeCalculateChangeRequestChangeTrainDetailsPassengerInfo& obj) { 
      DARABONBA_PTR_TO_JSON(passenger_cert_no, passengerCertNo_);
      DARABONBA_PTR_TO_JSON(passenger_cert_type, passengerCertType_);
      DARABONBA_PTR_TO_JSON(passenger_name, passengerName_);
    };
    friend void from_json(const Darabonba::Json& j, TrainFeeCalculateChangeRequestChangeTrainDetailsPassengerInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(passenger_cert_no, passengerCertNo_);
      DARABONBA_PTR_FROM_JSON(passenger_cert_type, passengerCertType_);
      DARABONBA_PTR_FROM_JSON(passenger_name, passengerName_);
    };
    TrainFeeCalculateChangeRequestChangeTrainDetailsPassengerInfo() = default ;
    TrainFeeCalculateChangeRequestChangeTrainDetailsPassengerInfo(const TrainFeeCalculateChangeRequestChangeTrainDetailsPassengerInfo &) = default ;
    TrainFeeCalculateChangeRequestChangeTrainDetailsPassengerInfo(TrainFeeCalculateChangeRequestChangeTrainDetailsPassengerInfo &&) = default ;
    TrainFeeCalculateChangeRequestChangeTrainDetailsPassengerInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TrainFeeCalculateChangeRequestChangeTrainDetailsPassengerInfo() = default ;
    TrainFeeCalculateChangeRequestChangeTrainDetailsPassengerInfo& operator=(const TrainFeeCalculateChangeRequestChangeTrainDetailsPassengerInfo &) = default ;
    TrainFeeCalculateChangeRequestChangeTrainDetailsPassengerInfo& operator=(TrainFeeCalculateChangeRequestChangeTrainDetailsPassengerInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->passengerCertNo_ != nullptr
        && this->passengerCertType_ != nullptr && this->passengerName_ != nullptr; };
    // passengerCertNo Field Functions 
    bool hasPassengerCertNo() const { return this->passengerCertNo_ != nullptr;};
    void deletePassengerCertNo() { this->passengerCertNo_ = nullptr;};
    inline string passengerCertNo() const { DARABONBA_PTR_GET_DEFAULT(passengerCertNo_, "") };
    inline TrainFeeCalculateChangeRequestChangeTrainDetailsPassengerInfo& setPassengerCertNo(string passengerCertNo) { DARABONBA_PTR_SET_VALUE(passengerCertNo_, passengerCertNo) };


    // passengerCertType Field Functions 
    bool hasPassengerCertType() const { return this->passengerCertType_ != nullptr;};
    void deletePassengerCertType() { this->passengerCertType_ = nullptr;};
    inline string passengerCertType() const { DARABONBA_PTR_GET_DEFAULT(passengerCertType_, "") };
    inline TrainFeeCalculateChangeRequestChangeTrainDetailsPassengerInfo& setPassengerCertType(string passengerCertType) { DARABONBA_PTR_SET_VALUE(passengerCertType_, passengerCertType) };


    // passengerName Field Functions 
    bool hasPassengerName() const { return this->passengerName_ != nullptr;};
    void deletePassengerName() { this->passengerName_ = nullptr;};
    inline string passengerName() const { DARABONBA_PTR_GET_DEFAULT(passengerName_, "") };
    inline TrainFeeCalculateChangeRequestChangeTrainDetailsPassengerInfo& setPassengerName(string passengerName) { DARABONBA_PTR_SET_VALUE(passengerName_, passengerName) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> passengerCertNo_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> passengerCertType_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> passengerName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
