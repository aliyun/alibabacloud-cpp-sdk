// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TRAINAPPLYREFUNDREQUEST_HPP_
#define ALIBABACLOUD_MODELS_TRAINAPPLYREFUNDREQUEST_HPP_
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
  class TrainApplyRefundRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TrainApplyRefundRequest& obj) { 
      DARABONBA_PTR_TO_JSON(order_id, orderId_);
      DARABONBA_PTR_TO_JSON(out_order_id, outOrderId_);
      DARABONBA_PTR_TO_JSON(out_refund_id, outRefundId_);
      DARABONBA_PTR_TO_JSON(refund_train_infos, refundTrainInfos_);
    };
    friend void from_json(const Darabonba::Json& j, TrainApplyRefundRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(order_id, orderId_);
      DARABONBA_PTR_FROM_JSON(out_order_id, outOrderId_);
      DARABONBA_PTR_FROM_JSON(out_refund_id, outRefundId_);
      DARABONBA_PTR_FROM_JSON(refund_train_infos, refundTrainInfos_);
    };
    TrainApplyRefundRequest() = default ;
    TrainApplyRefundRequest(const TrainApplyRefundRequest &) = default ;
    TrainApplyRefundRequest(TrainApplyRefundRequest &&) = default ;
    TrainApplyRefundRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TrainApplyRefundRequest() = default ;
    TrainApplyRefundRequest& operator=(const TrainApplyRefundRequest &) = default ;
    TrainApplyRefundRequest& operator=(TrainApplyRefundRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class RefundTrainInfos : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const RefundTrainInfos& obj) { 
        DARABONBA_PTR_TO_JSON(dep_time, depTime_);
        DARABONBA_PTR_TO_JSON(refund_passenger_infos, refundPassengerInfos_);
        DARABONBA_PTR_TO_JSON(train_no, trainNo_);
      };
      friend void from_json(const Darabonba::Json& j, RefundTrainInfos& obj) { 
        DARABONBA_PTR_FROM_JSON(dep_time, depTime_);
        DARABONBA_PTR_FROM_JSON(refund_passenger_infos, refundPassengerInfos_);
        DARABONBA_PTR_FROM_JSON(train_no, trainNo_);
      };
      RefundTrainInfos() = default ;
      RefundTrainInfos(const RefundTrainInfos &) = default ;
      RefundTrainInfos(RefundTrainInfos &&) = default ;
      RefundTrainInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~RefundTrainInfos() = default ;
      RefundTrainInfos& operator=(const RefundTrainInfos &) = default ;
      RefundTrainInfos& operator=(RefundTrainInfos &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class RefundPassengerInfos : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const RefundPassengerInfos& obj) { 
          DARABONBA_PTR_TO_JSON(passenger_cert_no, passengerCertNo_);
          DARABONBA_PTR_TO_JSON(passenger_cert_type, passengerCertType_);
          DARABONBA_PTR_TO_JSON(passenger_id, passengerId_);
          DARABONBA_PTR_TO_JSON(passenger_name, passengerName_);
        };
        friend void from_json(const Darabonba::Json& j, RefundPassengerInfos& obj) { 
          DARABONBA_PTR_FROM_JSON(passenger_cert_no, passengerCertNo_);
          DARABONBA_PTR_FROM_JSON(passenger_cert_type, passengerCertType_);
          DARABONBA_PTR_FROM_JSON(passenger_id, passengerId_);
          DARABONBA_PTR_FROM_JSON(passenger_name, passengerName_);
        };
        RefundPassengerInfos() = default ;
        RefundPassengerInfos(const RefundPassengerInfos &) = default ;
        RefundPassengerInfos(RefundPassengerInfos &&) = default ;
        RefundPassengerInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~RefundPassengerInfos() = default ;
        RefundPassengerInfos& operator=(const RefundPassengerInfos &) = default ;
        RefundPassengerInfos& operator=(RefundPassengerInfos &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->passengerCertNo_ == nullptr
        && this->passengerCertType_ == nullptr && this->passengerId_ == nullptr && this->passengerName_ == nullptr; };
        // passengerCertNo Field Functions 
        bool hasPassengerCertNo() const { return this->passengerCertNo_ != nullptr;};
        void deletePassengerCertNo() { this->passengerCertNo_ = nullptr;};
        inline string getPassengerCertNo() const { DARABONBA_PTR_GET_DEFAULT(passengerCertNo_, "") };
        inline RefundPassengerInfos& setPassengerCertNo(string passengerCertNo) { DARABONBA_PTR_SET_VALUE(passengerCertNo_, passengerCertNo) };


        // passengerCertType Field Functions 
        bool hasPassengerCertType() const { return this->passengerCertType_ != nullptr;};
        void deletePassengerCertType() { this->passengerCertType_ = nullptr;};
        inline string getPassengerCertType() const { DARABONBA_PTR_GET_DEFAULT(passengerCertType_, "") };
        inline RefundPassengerInfos& setPassengerCertType(string passengerCertType) { DARABONBA_PTR_SET_VALUE(passengerCertType_, passengerCertType) };


        // passengerId Field Functions 
        bool hasPassengerId() const { return this->passengerId_ != nullptr;};
        void deletePassengerId() { this->passengerId_ = nullptr;};
        inline string getPassengerId() const { DARABONBA_PTR_GET_DEFAULT(passengerId_, "") };
        inline RefundPassengerInfos& setPassengerId(string passengerId) { DARABONBA_PTR_SET_VALUE(passengerId_, passengerId) };


        // passengerName Field Functions 
        bool hasPassengerName() const { return this->passengerName_ != nullptr;};
        void deletePassengerName() { this->passengerName_ = nullptr;};
        inline string getPassengerName() const { DARABONBA_PTR_GET_DEFAULT(passengerName_, "") };
        inline RefundPassengerInfos& setPassengerName(string passengerName) { DARABONBA_PTR_SET_VALUE(passengerName_, passengerName) };


      protected:
        // This parameter is required.
        shared_ptr<string> passengerCertNo_ {};
        // This parameter is required.
        shared_ptr<string> passengerCertType_ {};
        // This parameter is required.
        shared_ptr<string> passengerId_ {};
        // This parameter is required.
        shared_ptr<string> passengerName_ {};
      };

      virtual bool empty() const override { return this->depTime_ == nullptr
        && this->refundPassengerInfos_ == nullptr && this->trainNo_ == nullptr; };
      // depTime Field Functions 
      bool hasDepTime() const { return this->depTime_ != nullptr;};
      void deleteDepTime() { this->depTime_ = nullptr;};
      inline string getDepTime() const { DARABONBA_PTR_GET_DEFAULT(depTime_, "") };
      inline RefundTrainInfos& setDepTime(string depTime) { DARABONBA_PTR_SET_VALUE(depTime_, depTime) };


      // refundPassengerInfos Field Functions 
      bool hasRefundPassengerInfos() const { return this->refundPassengerInfos_ != nullptr;};
      void deleteRefundPassengerInfos() { this->refundPassengerInfos_ = nullptr;};
      inline const vector<RefundTrainInfos::RefundPassengerInfos> & getRefundPassengerInfos() const { DARABONBA_PTR_GET_CONST(refundPassengerInfos_, vector<RefundTrainInfos::RefundPassengerInfos>) };
      inline vector<RefundTrainInfos::RefundPassengerInfos> getRefundPassengerInfos() { DARABONBA_PTR_GET(refundPassengerInfos_, vector<RefundTrainInfos::RefundPassengerInfos>) };
      inline RefundTrainInfos& setRefundPassengerInfos(const vector<RefundTrainInfos::RefundPassengerInfos> & refundPassengerInfos) { DARABONBA_PTR_SET_VALUE(refundPassengerInfos_, refundPassengerInfos) };
      inline RefundTrainInfos& setRefundPassengerInfos(vector<RefundTrainInfos::RefundPassengerInfos> && refundPassengerInfos) { DARABONBA_PTR_SET_RVALUE(refundPassengerInfos_, refundPassengerInfos) };


      // trainNo Field Functions 
      bool hasTrainNo() const { return this->trainNo_ != nullptr;};
      void deleteTrainNo() { this->trainNo_ = nullptr;};
      inline string getTrainNo() const { DARABONBA_PTR_GET_DEFAULT(trainNo_, "") };
      inline RefundTrainInfos& setTrainNo(string trainNo) { DARABONBA_PTR_SET_VALUE(trainNo_, trainNo) };


    protected:
      // This parameter is required.
      shared_ptr<string> depTime_ {};
      // This parameter is required.
      shared_ptr<vector<RefundTrainInfos::RefundPassengerInfos>> refundPassengerInfos_ {};
      // This parameter is required.
      shared_ptr<string> trainNo_ {};
    };

    virtual bool empty() const override { return this->orderId_ == nullptr
        && this->outOrderId_ == nullptr && this->outRefundId_ == nullptr && this->refundTrainInfos_ == nullptr; };
    // orderId Field Functions 
    bool hasOrderId() const { return this->orderId_ != nullptr;};
    void deleteOrderId() { this->orderId_ = nullptr;};
    inline string getOrderId() const { DARABONBA_PTR_GET_DEFAULT(orderId_, "") };
    inline TrainApplyRefundRequest& setOrderId(string orderId) { DARABONBA_PTR_SET_VALUE(orderId_, orderId) };


    // outOrderId Field Functions 
    bool hasOutOrderId() const { return this->outOrderId_ != nullptr;};
    void deleteOutOrderId() { this->outOrderId_ = nullptr;};
    inline string getOutOrderId() const { DARABONBA_PTR_GET_DEFAULT(outOrderId_, "") };
    inline TrainApplyRefundRequest& setOutOrderId(string outOrderId) { DARABONBA_PTR_SET_VALUE(outOrderId_, outOrderId) };


    // outRefundId Field Functions 
    bool hasOutRefundId() const { return this->outRefundId_ != nullptr;};
    void deleteOutRefundId() { this->outRefundId_ = nullptr;};
    inline string getOutRefundId() const { DARABONBA_PTR_GET_DEFAULT(outRefundId_, "") };
    inline TrainApplyRefundRequest& setOutRefundId(string outRefundId) { DARABONBA_PTR_SET_VALUE(outRefundId_, outRefundId) };


    // refundTrainInfos Field Functions 
    bool hasRefundTrainInfos() const { return this->refundTrainInfos_ != nullptr;};
    void deleteRefundTrainInfos() { this->refundTrainInfos_ = nullptr;};
    inline const vector<TrainApplyRefundRequest::RefundTrainInfos> & getRefundTrainInfos() const { DARABONBA_PTR_GET_CONST(refundTrainInfos_, vector<TrainApplyRefundRequest::RefundTrainInfos>) };
    inline vector<TrainApplyRefundRequest::RefundTrainInfos> getRefundTrainInfos() { DARABONBA_PTR_GET(refundTrainInfos_, vector<TrainApplyRefundRequest::RefundTrainInfos>) };
    inline TrainApplyRefundRequest& setRefundTrainInfos(const vector<TrainApplyRefundRequest::RefundTrainInfos> & refundTrainInfos) { DARABONBA_PTR_SET_VALUE(refundTrainInfos_, refundTrainInfos) };
    inline TrainApplyRefundRequest& setRefundTrainInfos(vector<TrainApplyRefundRequest::RefundTrainInfos> && refundTrainInfos) { DARABONBA_PTR_SET_RVALUE(refundTrainInfos_, refundTrainInfos) };


  protected:
    // This parameter is required.
    shared_ptr<string> orderId_ {};
    // This parameter is required.
    shared_ptr<string> outOrderId_ {};
    // This parameter is required.
    shared_ptr<string> outRefundId_ {};
    // This parameter is required.
    shared_ptr<vector<TrainApplyRefundRequest::RefundTrainInfos>> refundTrainInfos_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
