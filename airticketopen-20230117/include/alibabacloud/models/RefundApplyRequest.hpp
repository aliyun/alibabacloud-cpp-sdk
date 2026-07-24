// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REFUNDAPPLYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_REFUNDAPPLYREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AirticketOpen20230117
{
namespace Models
{
  class RefundApplyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RefundApplyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(order_num, orderNum_);
      DARABONBA_PTR_TO_JSON(refund_journeys, refundJourneys_);
      DARABONBA_PTR_TO_JSON(refund_passenger_list, refundPassengerList_);
      DARABONBA_PTR_TO_JSON(refund_type, refundType_);
    };
    friend void from_json(const Darabonba::Json& j, RefundApplyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(order_num, orderNum_);
      DARABONBA_PTR_FROM_JSON(refund_journeys, refundJourneys_);
      DARABONBA_PTR_FROM_JSON(refund_passenger_list, refundPassengerList_);
      DARABONBA_PTR_FROM_JSON(refund_type, refundType_);
    };
    RefundApplyRequest() = default ;
    RefundApplyRequest(const RefundApplyRequest &) = default ;
    RefundApplyRequest(RefundApplyRequest &&) = default ;
    RefundApplyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RefundApplyRequest() = default ;
    RefundApplyRequest& operator=(const RefundApplyRequest &) = default ;
    RefundApplyRequest& operator=(RefundApplyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class RefundType : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const RefundType& obj) { 
        DARABONBA_PTR_TO_JSON(file, file_);
        DARABONBA_PTR_TO_JSON(refund_type_id, refundTypeId_);
        DARABONBA_PTR_TO_JSON(remark, remark_);
      };
      friend void from_json(const Darabonba::Json& j, RefundType& obj) { 
        DARABONBA_PTR_FROM_JSON(file, file_);
        DARABONBA_PTR_FROM_JSON(refund_type_id, refundTypeId_);
        DARABONBA_PTR_FROM_JSON(remark, remark_);
      };
      RefundType() = default ;
      RefundType(const RefundType &) = default ;
      RefundType(RefundType &&) = default ;
      RefundType(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~RefundType() = default ;
      RefundType& operator=(const RefundType &) = default ;
      RefundType& operator=(RefundType &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->file_ == nullptr
        && this->refundTypeId_ == nullptr && this->remark_ == nullptr; };
      // file Field Functions 
      bool hasFile() const { return this->file_ != nullptr;};
      void deleteFile() { this->file_ = nullptr;};
      inline const vector<string> & getFile() const { DARABONBA_PTR_GET_CONST(file_, vector<string>) };
      inline vector<string> getFile() { DARABONBA_PTR_GET(file_, vector<string>) };
      inline RefundType& setFile(const vector<string> & file) { DARABONBA_PTR_SET_VALUE(file_, file) };
      inline RefundType& setFile(vector<string> && file) { DARABONBA_PTR_SET_RVALUE(file_, file) };


      // refundTypeId Field Functions 
      bool hasRefundTypeId() const { return this->refundTypeId_ != nullptr;};
      void deleteRefundTypeId() { this->refundTypeId_ = nullptr;};
      inline int32_t getRefundTypeId() const { DARABONBA_PTR_GET_DEFAULT(refundTypeId_, 0) };
      inline RefundType& setRefundTypeId(int32_t refundTypeId) { DARABONBA_PTR_SET_VALUE(refundTypeId_, refundTypeId) };


      // remark Field Functions 
      bool hasRemark() const { return this->remark_ != nullptr;};
      void deleteRemark() { this->remark_ = nullptr;};
      inline string getRemark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
      inline RefundType& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


    protected:
      // The array of attachment file URLs. Upload files first by using the dedicated file upload operation to obtain the file URLs.
      shared_ptr<vector<string>> file_ {};
      // The refund type. Valid values:
      // - 2: Voluntary refund (change of travel plans or decision not to fly).
      // - 5: Involuntary refund due to airline reasons such as flight delay, cancellation, or schedule change.
      // - 6: Involuntary refund due to medical reasons with a certificate from a Grade II Class A hospital or above.
      // 
      // Note: Attachments are not mandatory, but providing attachments for involuntary refunds can improve the success rate of the refund application.
      // 
      // This parameter is required.
      shared_ptr<int32_t> refundTypeId_ {};
      // The remarks.
      shared_ptr<string> remark_ {};
    };

    class RefundPassengerList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const RefundPassengerList& obj) { 
        DARABONBA_PTR_TO_JSON(document, document_);
        DARABONBA_PTR_TO_JSON(first_name, firstName_);
        DARABONBA_PTR_TO_JSON(last_name, lastName_);
      };
      friend void from_json(const Darabonba::Json& j, RefundPassengerList& obj) { 
        DARABONBA_PTR_FROM_JSON(document, document_);
        DARABONBA_PTR_FROM_JSON(first_name, firstName_);
        DARABONBA_PTR_FROM_JSON(last_name, lastName_);
      };
      RefundPassengerList() = default ;
      RefundPassengerList(const RefundPassengerList &) = default ;
      RefundPassengerList(RefundPassengerList &&) = default ;
      RefundPassengerList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~RefundPassengerList() = default ;
      RefundPassengerList& operator=(const RefundPassengerList &) = default ;
      RefundPassengerList& operator=(RefundPassengerList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->document_ == nullptr
        && this->firstName_ == nullptr && this->lastName_ == nullptr; };
      // document Field Functions 
      bool hasDocument() const { return this->document_ != nullptr;};
      void deleteDocument() { this->document_ = nullptr;};
      inline string getDocument() const { DARABONBA_PTR_GET_DEFAULT(document_, "") };
      inline RefundPassengerList& setDocument(string document) { DARABONBA_PTR_SET_VALUE(document_, document) };


      // firstName Field Functions 
      bool hasFirstName() const { return this->firstName_ != nullptr;};
      void deleteFirstName() { this->firstName_ = nullptr;};
      inline string getFirstName() const { DARABONBA_PTR_GET_DEFAULT(firstName_, "") };
      inline RefundPassengerList& setFirstName(string firstName) { DARABONBA_PTR_SET_VALUE(firstName_, firstName) };


      // lastName Field Functions 
      bool hasLastName() const { return this->lastName_ != nullptr;};
      void deleteLastName() { this->lastName_ = nullptr;};
      inline string getLastName() const { DARABONBA_PTR_GET_DEFAULT(lastName_, "") };
      inline RefundPassengerList& setLastName(string lastName) { DARABONBA_PTR_SET_VALUE(lastName_, lastName) };


    protected:
      // The document number of the passenger.
      shared_ptr<string> document_ {};
      // The first name of the passenger.
      // 
      // This parameter is required.
      shared_ptr<string> firstName_ {};
      // The last name of the passenger.
      // 
      // This parameter is required.
      shared_ptr<string> lastName_ {};
    };

    class RefundJourneys : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const RefundJourneys& obj) { 
        DARABONBA_PTR_TO_JSON(segment_list, segmentList_);
      };
      friend void from_json(const Darabonba::Json& j, RefundJourneys& obj) { 
        DARABONBA_PTR_FROM_JSON(segment_list, segmentList_);
      };
      RefundJourneys() = default ;
      RefundJourneys(const RefundJourneys &) = default ;
      RefundJourneys(RefundJourneys &&) = default ;
      RefundJourneys(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~RefundJourneys() = default ;
      RefundJourneys& operator=(const RefundJourneys &) = default ;
      RefundJourneys& operator=(RefundJourneys &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class SegmentList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const SegmentList& obj) { 
          DARABONBA_PTR_TO_JSON(arrival_airport, arrivalAirport_);
          DARABONBA_PTR_TO_JSON(arrival_city, arrivalCity_);
          DARABONBA_PTR_TO_JSON(departure_airport, departureAirport_);
          DARABONBA_PTR_TO_JSON(departure_city, departureCity_);
        };
        friend void from_json(const Darabonba::Json& j, SegmentList& obj) { 
          DARABONBA_PTR_FROM_JSON(arrival_airport, arrivalAirport_);
          DARABONBA_PTR_FROM_JSON(arrival_city, arrivalCity_);
          DARABONBA_PTR_FROM_JSON(departure_airport, departureAirport_);
          DARABONBA_PTR_FROM_JSON(departure_city, departureCity_);
        };
        SegmentList() = default ;
        SegmentList(const SegmentList &) = default ;
        SegmentList(SegmentList &&) = default ;
        SegmentList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~SegmentList() = default ;
        SegmentList& operator=(const SegmentList &) = default ;
        SegmentList& operator=(SegmentList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->arrivalAirport_ == nullptr
        && this->arrivalCity_ == nullptr && this->departureAirport_ == nullptr && this->departureCity_ == nullptr; };
        // arrivalAirport Field Functions 
        bool hasArrivalAirport() const { return this->arrivalAirport_ != nullptr;};
        void deleteArrivalAirport() { this->arrivalAirport_ = nullptr;};
        inline string getArrivalAirport() const { DARABONBA_PTR_GET_DEFAULT(arrivalAirport_, "") };
        inline SegmentList& setArrivalAirport(string arrivalAirport) { DARABONBA_PTR_SET_VALUE(arrivalAirport_, arrivalAirport) };


        // arrivalCity Field Functions 
        bool hasArrivalCity() const { return this->arrivalCity_ != nullptr;};
        void deleteArrivalCity() { this->arrivalCity_ = nullptr;};
        inline string getArrivalCity() const { DARABONBA_PTR_GET_DEFAULT(arrivalCity_, "") };
        inline SegmentList& setArrivalCity(string arrivalCity) { DARABONBA_PTR_SET_VALUE(arrivalCity_, arrivalCity) };


        // departureAirport Field Functions 
        bool hasDepartureAirport() const { return this->departureAirport_ != nullptr;};
        void deleteDepartureAirport() { this->departureAirport_ = nullptr;};
        inline string getDepartureAirport() const { DARABONBA_PTR_GET_DEFAULT(departureAirport_, "") };
        inline SegmentList& setDepartureAirport(string departureAirport) { DARABONBA_PTR_SET_VALUE(departureAirport_, departureAirport) };


        // departureCity Field Functions 
        bool hasDepartureCity() const { return this->departureCity_ != nullptr;};
        void deleteDepartureCity() { this->departureCity_ = nullptr;};
        inline string getDepartureCity() const { DARABONBA_PTR_GET_DEFAULT(departureCity_, "") };
        inline SegmentList& setDepartureCity(string departureCity) { DARABONBA_PTR_SET_VALUE(departureCity_, departureCity) };


      protected:
        // The three-letter IATA code of the arrival airport (uppercase).
        // 
        // This parameter is required.
        shared_ptr<string> arrivalAirport_ {};
        // The three-letter IATA code of the arrival city (uppercase).
        // 
        // This parameter is required.
        shared_ptr<string> arrivalCity_ {};
        // The three-letter IATA code of the departure airport (uppercase).
        // 
        // This parameter is required.
        shared_ptr<string> departureAirport_ {};
        // The three-letter IATA code of the departure city (uppercase).
        // 
        // This parameter is required.
        shared_ptr<string> departureCity_ {};
      };

      virtual bool empty() const override { return this->segmentList_ == nullptr; };
      // segmentList Field Functions 
      bool hasSegmentList() const { return this->segmentList_ != nullptr;};
      void deleteSegmentList() { this->segmentList_ = nullptr;};
      inline const vector<RefundJourneys::SegmentList> & getSegmentList() const { DARABONBA_PTR_GET_CONST(segmentList_, vector<RefundJourneys::SegmentList>) };
      inline vector<RefundJourneys::SegmentList> getSegmentList() { DARABONBA_PTR_GET(segmentList_, vector<RefundJourneys::SegmentList>) };
      inline RefundJourneys& setSegmentList(const vector<RefundJourneys::SegmentList> & segmentList) { DARABONBA_PTR_SET_VALUE(segmentList_, segmentList) };
      inline RefundJourneys& setSegmentList(vector<RefundJourneys::SegmentList> && segmentList) { DARABONBA_PTR_SET_RVALUE(segmentList_, segmentList) };


    protected:
      // The segment information.
      // 
      // This parameter is required.
      shared_ptr<vector<RefundJourneys::SegmentList>> segmentList_ {};
    };

    virtual bool empty() const override { return this->orderNum_ == nullptr
        && this->refundJourneys_ == nullptr && this->refundPassengerList_ == nullptr && this->refundType_ == nullptr; };
    // orderNum Field Functions 
    bool hasOrderNum() const { return this->orderNum_ != nullptr;};
    void deleteOrderNum() { this->orderNum_ = nullptr;};
    inline int64_t getOrderNum() const { DARABONBA_PTR_GET_DEFAULT(orderNum_, 0L) };
    inline RefundApplyRequest& setOrderNum(int64_t orderNum) { DARABONBA_PTR_SET_VALUE(orderNum_, orderNum) };


    // refundJourneys Field Functions 
    bool hasRefundJourneys() const { return this->refundJourneys_ != nullptr;};
    void deleteRefundJourneys() { this->refundJourneys_ = nullptr;};
    inline const vector<RefundApplyRequest::RefundJourneys> & getRefundJourneys() const { DARABONBA_PTR_GET_CONST(refundJourneys_, vector<RefundApplyRequest::RefundJourneys>) };
    inline vector<RefundApplyRequest::RefundJourneys> getRefundJourneys() { DARABONBA_PTR_GET(refundJourneys_, vector<RefundApplyRequest::RefundJourneys>) };
    inline RefundApplyRequest& setRefundJourneys(const vector<RefundApplyRequest::RefundJourneys> & refundJourneys) { DARABONBA_PTR_SET_VALUE(refundJourneys_, refundJourneys) };
    inline RefundApplyRequest& setRefundJourneys(vector<RefundApplyRequest::RefundJourneys> && refundJourneys) { DARABONBA_PTR_SET_RVALUE(refundJourneys_, refundJourneys) };


    // refundPassengerList Field Functions 
    bool hasRefundPassengerList() const { return this->refundPassengerList_ != nullptr;};
    void deleteRefundPassengerList() { this->refundPassengerList_ = nullptr;};
    inline const vector<RefundApplyRequest::RefundPassengerList> & getRefundPassengerList() const { DARABONBA_PTR_GET_CONST(refundPassengerList_, vector<RefundApplyRequest::RefundPassengerList>) };
    inline vector<RefundApplyRequest::RefundPassengerList> getRefundPassengerList() { DARABONBA_PTR_GET(refundPassengerList_, vector<RefundApplyRequest::RefundPassengerList>) };
    inline RefundApplyRequest& setRefundPassengerList(const vector<RefundApplyRequest::RefundPassengerList> & refundPassengerList) { DARABONBA_PTR_SET_VALUE(refundPassengerList_, refundPassengerList) };
    inline RefundApplyRequest& setRefundPassengerList(vector<RefundApplyRequest::RefundPassengerList> && refundPassengerList) { DARABONBA_PTR_SET_RVALUE(refundPassengerList_, refundPassengerList) };


    // refundType Field Functions 
    bool hasRefundType() const { return this->refundType_ != nullptr;};
    void deleteRefundType() { this->refundType_ = nullptr;};
    inline const RefundApplyRequest::RefundType & getRefundType() const { DARABONBA_PTR_GET_CONST(refundType_, RefundApplyRequest::RefundType) };
    inline RefundApplyRequest::RefundType getRefundType() { DARABONBA_PTR_GET(refundType_, RefundApplyRequest::RefundType) };
    inline RefundApplyRequest& setRefundType(const RefundApplyRequest::RefundType & refundType) { DARABONBA_PTR_SET_VALUE(refundType_, refundType) };
    inline RefundApplyRequest& setRefundType(RefundApplyRequest::RefundType && refundType) { DARABONBA_PTR_SET_RVALUE(refundType_, refundType) };


  protected:
    // The order number.
    // 
    // This parameter is required.
    shared_ptr<int64_t> orderNum_ {};
    // The journeys for the refund application.
    // 
    // This parameter is required.
    shared_ptr<vector<RefundApplyRequest::RefundJourneys>> refundJourneys_ {};
    // The list of passengers for the refund application.
    // 
    // This parameter is required.
    shared_ptr<vector<RefundApplyRequest::RefundPassengerList>> refundPassengerList_ {};
    // The refund type. Attachments are required for involuntary refund applications.
    // 
    // This parameter is required.
    shared_ptr<RefundApplyRequest::RefundType> refundType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AirticketOpen20230117
#endif
