// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TRAINFEECALCULATECHANGEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_TRAINFEECALCULATECHANGEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class TrainFeeCalculateChangeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TrainFeeCalculateChangeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(change_train_details, changeTrainDetails_);
      DARABONBA_PTR_TO_JSON(distribute_order_id, distributeOrderId_);
      DARABONBA_PTR_TO_JSON(order_id, orderId_);
    };
    friend void from_json(const Darabonba::Json& j, TrainFeeCalculateChangeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(change_train_details, changeTrainDetails_);
      DARABONBA_PTR_FROM_JSON(distribute_order_id, distributeOrderId_);
      DARABONBA_PTR_FROM_JSON(order_id, orderId_);
    };
    TrainFeeCalculateChangeRequest() = default ;
    TrainFeeCalculateChangeRequest(const TrainFeeCalculateChangeRequest &) = default ;
    TrainFeeCalculateChangeRequest(TrainFeeCalculateChangeRequest &&) = default ;
    TrainFeeCalculateChangeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TrainFeeCalculateChangeRequest() = default ;
    TrainFeeCalculateChangeRequest& operator=(const TrainFeeCalculateChangeRequest &) = default ;
    TrainFeeCalculateChangeRequest& operator=(TrainFeeCalculateChangeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ChangeTrainDetails : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ChangeTrainDetails& obj) { 
        DARABONBA_PTR_TO_JSON(arr_station_code, arrStationCode_);
        DARABONBA_PTR_TO_JSON(dep_station_code, depStationCode_);
        DARABONBA_PTR_TO_JSON(dep_time, depTime_);
        DARABONBA_PTR_TO_JSON(original_dep_time, originalDepTime_);
        DARABONBA_PTR_TO_JSON(original_train_no, originalTrainNo_);
        DARABONBA_PTR_TO_JSON(passenger_info, passengerInfo_);
        DARABONBA_PTR_TO_JSON(seat_type, seatType_);
        DARABONBA_PTR_TO_JSON(train_no, trainNo_);
      };
      friend void from_json(const Darabonba::Json& j, ChangeTrainDetails& obj) { 
        DARABONBA_PTR_FROM_JSON(arr_station_code, arrStationCode_);
        DARABONBA_PTR_FROM_JSON(dep_station_code, depStationCode_);
        DARABONBA_PTR_FROM_JSON(dep_time, depTime_);
        DARABONBA_PTR_FROM_JSON(original_dep_time, originalDepTime_);
        DARABONBA_PTR_FROM_JSON(original_train_no, originalTrainNo_);
        DARABONBA_PTR_FROM_JSON(passenger_info, passengerInfo_);
        DARABONBA_PTR_FROM_JSON(seat_type, seatType_);
        DARABONBA_PTR_FROM_JSON(train_no, trainNo_);
      };
      ChangeTrainDetails() = default ;
      ChangeTrainDetails(const ChangeTrainDetails &) = default ;
      ChangeTrainDetails(ChangeTrainDetails &&) = default ;
      ChangeTrainDetails(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ChangeTrainDetails() = default ;
      ChangeTrainDetails& operator=(const ChangeTrainDetails &) = default ;
      ChangeTrainDetails& operator=(ChangeTrainDetails &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class PassengerInfo : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const PassengerInfo& obj) { 
          DARABONBA_PTR_TO_JSON(passenger_cert_no, passengerCertNo_);
          DARABONBA_PTR_TO_JSON(passenger_cert_type, passengerCertType_);
          DARABONBA_PTR_TO_JSON(passenger_name, passengerName_);
        };
        friend void from_json(const Darabonba::Json& j, PassengerInfo& obj) { 
          DARABONBA_PTR_FROM_JSON(passenger_cert_no, passengerCertNo_);
          DARABONBA_PTR_FROM_JSON(passenger_cert_type, passengerCertType_);
          DARABONBA_PTR_FROM_JSON(passenger_name, passengerName_);
        };
        PassengerInfo() = default ;
        PassengerInfo(const PassengerInfo &) = default ;
        PassengerInfo(PassengerInfo &&) = default ;
        PassengerInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~PassengerInfo() = default ;
        PassengerInfo& operator=(const PassengerInfo &) = default ;
        PassengerInfo& operator=(PassengerInfo &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->passengerCertNo_ == nullptr
        && this->passengerCertType_ == nullptr && this->passengerName_ == nullptr; };
        // passengerCertNo Field Functions 
        bool hasPassengerCertNo() const { return this->passengerCertNo_ != nullptr;};
        void deletePassengerCertNo() { this->passengerCertNo_ = nullptr;};
        inline string getPassengerCertNo() const { DARABONBA_PTR_GET_DEFAULT(passengerCertNo_, "") };
        inline PassengerInfo& setPassengerCertNo(string passengerCertNo) { DARABONBA_PTR_SET_VALUE(passengerCertNo_, passengerCertNo) };


        // passengerCertType Field Functions 
        bool hasPassengerCertType() const { return this->passengerCertType_ != nullptr;};
        void deletePassengerCertType() { this->passengerCertType_ = nullptr;};
        inline string getPassengerCertType() const { DARABONBA_PTR_GET_DEFAULT(passengerCertType_, "") };
        inline PassengerInfo& setPassengerCertType(string passengerCertType) { DARABONBA_PTR_SET_VALUE(passengerCertType_, passengerCertType) };


        // passengerName Field Functions 
        bool hasPassengerName() const { return this->passengerName_ != nullptr;};
        void deletePassengerName() { this->passengerName_ = nullptr;};
        inline string getPassengerName() const { DARABONBA_PTR_GET_DEFAULT(passengerName_, "") };
        inline PassengerInfo& setPassengerName(string passengerName) { DARABONBA_PTR_SET_VALUE(passengerName_, passengerName) };


      protected:
        // This parameter is required.
        shared_ptr<string> passengerCertNo_ {};
        // This parameter is required.
        shared_ptr<string> passengerCertType_ {};
        // This parameter is required.
        shared_ptr<string> passengerName_ {};
      };

      virtual bool empty() const override { return this->arrStationCode_ == nullptr
        && this->depStationCode_ == nullptr && this->depTime_ == nullptr && this->originalDepTime_ == nullptr && this->originalTrainNo_ == nullptr && this->passengerInfo_ == nullptr
        && this->seatType_ == nullptr && this->trainNo_ == nullptr; };
      // arrStationCode Field Functions 
      bool hasArrStationCode() const { return this->arrStationCode_ != nullptr;};
      void deleteArrStationCode() { this->arrStationCode_ = nullptr;};
      inline string getArrStationCode() const { DARABONBA_PTR_GET_DEFAULT(arrStationCode_, "") };
      inline ChangeTrainDetails& setArrStationCode(string arrStationCode) { DARABONBA_PTR_SET_VALUE(arrStationCode_, arrStationCode) };


      // depStationCode Field Functions 
      bool hasDepStationCode() const { return this->depStationCode_ != nullptr;};
      void deleteDepStationCode() { this->depStationCode_ = nullptr;};
      inline string getDepStationCode() const { DARABONBA_PTR_GET_DEFAULT(depStationCode_, "") };
      inline ChangeTrainDetails& setDepStationCode(string depStationCode) { DARABONBA_PTR_SET_VALUE(depStationCode_, depStationCode) };


      // depTime Field Functions 
      bool hasDepTime() const { return this->depTime_ != nullptr;};
      void deleteDepTime() { this->depTime_ = nullptr;};
      inline string getDepTime() const { DARABONBA_PTR_GET_DEFAULT(depTime_, "") };
      inline ChangeTrainDetails& setDepTime(string depTime) { DARABONBA_PTR_SET_VALUE(depTime_, depTime) };


      // originalDepTime Field Functions 
      bool hasOriginalDepTime() const { return this->originalDepTime_ != nullptr;};
      void deleteOriginalDepTime() { this->originalDepTime_ = nullptr;};
      inline string getOriginalDepTime() const { DARABONBA_PTR_GET_DEFAULT(originalDepTime_, "") };
      inline ChangeTrainDetails& setOriginalDepTime(string originalDepTime) { DARABONBA_PTR_SET_VALUE(originalDepTime_, originalDepTime) };


      // originalTrainNo Field Functions 
      bool hasOriginalTrainNo() const { return this->originalTrainNo_ != nullptr;};
      void deleteOriginalTrainNo() { this->originalTrainNo_ = nullptr;};
      inline string getOriginalTrainNo() const { DARABONBA_PTR_GET_DEFAULT(originalTrainNo_, "") };
      inline ChangeTrainDetails& setOriginalTrainNo(string originalTrainNo) { DARABONBA_PTR_SET_VALUE(originalTrainNo_, originalTrainNo) };


      // passengerInfo Field Functions 
      bool hasPassengerInfo() const { return this->passengerInfo_ != nullptr;};
      void deletePassengerInfo() { this->passengerInfo_ = nullptr;};
      inline const ChangeTrainDetails::PassengerInfo & getPassengerInfo() const { DARABONBA_PTR_GET_CONST(passengerInfo_, ChangeTrainDetails::PassengerInfo) };
      inline ChangeTrainDetails::PassengerInfo getPassengerInfo() { DARABONBA_PTR_GET(passengerInfo_, ChangeTrainDetails::PassengerInfo) };
      inline ChangeTrainDetails& setPassengerInfo(const ChangeTrainDetails::PassengerInfo & passengerInfo) { DARABONBA_PTR_SET_VALUE(passengerInfo_, passengerInfo) };
      inline ChangeTrainDetails& setPassengerInfo(ChangeTrainDetails::PassengerInfo && passengerInfo) { DARABONBA_PTR_SET_RVALUE(passengerInfo_, passengerInfo) };


      // seatType Field Functions 
      bool hasSeatType() const { return this->seatType_ != nullptr;};
      void deleteSeatType() { this->seatType_ = nullptr;};
      inline string getSeatType() const { DARABONBA_PTR_GET_DEFAULT(seatType_, "") };
      inline ChangeTrainDetails& setSeatType(string seatType) { DARABONBA_PTR_SET_VALUE(seatType_, seatType) };


      // trainNo Field Functions 
      bool hasTrainNo() const { return this->trainNo_ != nullptr;};
      void deleteTrainNo() { this->trainNo_ = nullptr;};
      inline string getTrainNo() const { DARABONBA_PTR_GET_DEFAULT(trainNo_, "") };
      inline ChangeTrainDetails& setTrainNo(string trainNo) { DARABONBA_PTR_SET_VALUE(trainNo_, trainNo) };


    protected:
      // This parameter is required.
      shared_ptr<string> arrStationCode_ {};
      // This parameter is required.
      shared_ptr<string> depStationCode_ {};
      // This parameter is required.
      shared_ptr<string> depTime_ {};
      // This parameter is required.
      shared_ptr<string> originalDepTime_ {};
      // This parameter is required.
      shared_ptr<string> originalTrainNo_ {};
      // This parameter is required.
      shared_ptr<ChangeTrainDetails::PassengerInfo> passengerInfo_ {};
      // This parameter is required.
      shared_ptr<string> seatType_ {};
      // This parameter is required.
      shared_ptr<string> trainNo_ {};
    };

    virtual bool empty() const override { return this->changeTrainDetails_ == nullptr
        && this->distributeOrderId_ == nullptr && this->orderId_ == nullptr; };
    // changeTrainDetails Field Functions 
    bool hasChangeTrainDetails() const { return this->changeTrainDetails_ != nullptr;};
    void deleteChangeTrainDetails() { this->changeTrainDetails_ = nullptr;};
    inline const vector<TrainFeeCalculateChangeRequest::ChangeTrainDetails> & getChangeTrainDetails() const { DARABONBA_PTR_GET_CONST(changeTrainDetails_, vector<TrainFeeCalculateChangeRequest::ChangeTrainDetails>) };
    inline vector<TrainFeeCalculateChangeRequest::ChangeTrainDetails> getChangeTrainDetails() { DARABONBA_PTR_GET(changeTrainDetails_, vector<TrainFeeCalculateChangeRequest::ChangeTrainDetails>) };
    inline TrainFeeCalculateChangeRequest& setChangeTrainDetails(const vector<TrainFeeCalculateChangeRequest::ChangeTrainDetails> & changeTrainDetails) { DARABONBA_PTR_SET_VALUE(changeTrainDetails_, changeTrainDetails) };
    inline TrainFeeCalculateChangeRequest& setChangeTrainDetails(vector<TrainFeeCalculateChangeRequest::ChangeTrainDetails> && changeTrainDetails) { DARABONBA_PTR_SET_RVALUE(changeTrainDetails_, changeTrainDetails) };


    // distributeOrderId Field Functions 
    bool hasDistributeOrderId() const { return this->distributeOrderId_ != nullptr;};
    void deleteDistributeOrderId() { this->distributeOrderId_ = nullptr;};
    inline string getDistributeOrderId() const { DARABONBA_PTR_GET_DEFAULT(distributeOrderId_, "") };
    inline TrainFeeCalculateChangeRequest& setDistributeOrderId(string distributeOrderId) { DARABONBA_PTR_SET_VALUE(distributeOrderId_, distributeOrderId) };


    // orderId Field Functions 
    bool hasOrderId() const { return this->orderId_ != nullptr;};
    void deleteOrderId() { this->orderId_ = nullptr;};
    inline string getOrderId() const { DARABONBA_PTR_GET_DEFAULT(orderId_, "") };
    inline TrainFeeCalculateChangeRequest& setOrderId(string orderId) { DARABONBA_PTR_SET_VALUE(orderId_, orderId) };


  protected:
    // This parameter is required.
    shared_ptr<vector<TrainFeeCalculateChangeRequest::ChangeTrainDetails>> changeTrainDetails_ {};
    // This parameter is required.
    shared_ptr<string> distributeOrderId_ {};
    // This parameter is required.
    shared_ptr<string> orderId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
