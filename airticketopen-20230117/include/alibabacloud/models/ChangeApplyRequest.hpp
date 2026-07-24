// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHANGEAPPLYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CHANGEAPPLYREQUEST_HPP_
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
  class ChangeApplyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ChangeApplyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(change_passenger_list, changePassengerList_);
      DARABONBA_PTR_TO_JSON(changed_journeys, changedJourneys_);
      DARABONBA_PTR_TO_JSON(contact, contact_);
      DARABONBA_PTR_TO_JSON(order_num, orderNum_);
      DARABONBA_PTR_TO_JSON(remark, remark_);
      DARABONBA_PTR_TO_JSON(type, type_);
    };
    friend void from_json(const Darabonba::Json& j, ChangeApplyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(change_passenger_list, changePassengerList_);
      DARABONBA_PTR_FROM_JSON(changed_journeys, changedJourneys_);
      DARABONBA_PTR_FROM_JSON(contact, contact_);
      DARABONBA_PTR_FROM_JSON(order_num, orderNum_);
      DARABONBA_PTR_FROM_JSON(remark, remark_);
      DARABONBA_PTR_FROM_JSON(type, type_);
    };
    ChangeApplyRequest() = default ;
    ChangeApplyRequest(const ChangeApplyRequest &) = default ;
    ChangeApplyRequest(ChangeApplyRequest &&) = default ;
    ChangeApplyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ChangeApplyRequest() = default ;
    ChangeApplyRequest& operator=(const ChangeApplyRequest &) = default ;
    ChangeApplyRequest& operator=(ChangeApplyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Contact : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Contact& obj) { 
        DARABONBA_PTR_TO_JSON(email, email_);
        DARABONBA_PTR_TO_JSON(mobile_country_code, mobileCountryCode_);
        DARABONBA_PTR_TO_JSON(mobile_phone_num, mobilePhoneNum_);
      };
      friend void from_json(const Darabonba::Json& j, Contact& obj) { 
        DARABONBA_PTR_FROM_JSON(email, email_);
        DARABONBA_PTR_FROM_JSON(mobile_country_code, mobileCountryCode_);
        DARABONBA_PTR_FROM_JSON(mobile_phone_num, mobilePhoneNum_);
      };
      Contact() = default ;
      Contact(const Contact &) = default ;
      Contact(Contact &&) = default ;
      Contact(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Contact() = default ;
      Contact& operator=(const Contact &) = default ;
      Contact& operator=(Contact &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->email_ == nullptr
        && this->mobileCountryCode_ == nullptr && this->mobilePhoneNum_ == nullptr; };
      // email Field Functions 
      bool hasEmail() const { return this->email_ != nullptr;};
      void deleteEmail() { this->email_ = nullptr;};
      inline string getEmail() const { DARABONBA_PTR_GET_DEFAULT(email_, "") };
      inline Contact& setEmail(string email) { DARABONBA_PTR_SET_VALUE(email_, email) };


      // mobileCountryCode Field Functions 
      bool hasMobileCountryCode() const { return this->mobileCountryCode_ != nullptr;};
      void deleteMobileCountryCode() { this->mobileCountryCode_ = nullptr;};
      inline string getMobileCountryCode() const { DARABONBA_PTR_GET_DEFAULT(mobileCountryCode_, "") };
      inline Contact& setMobileCountryCode(string mobileCountryCode) { DARABONBA_PTR_SET_VALUE(mobileCountryCode_, mobileCountryCode) };


      // mobilePhoneNum Field Functions 
      bool hasMobilePhoneNum() const { return this->mobilePhoneNum_ != nullptr;};
      void deleteMobilePhoneNum() { this->mobilePhoneNum_ = nullptr;};
      inline string getMobilePhoneNum() const { DARABONBA_PTR_GET_DEFAULT(mobilePhoneNum_, "") };
      inline Contact& setMobilePhoneNum(string mobilePhoneNum) { DARABONBA_PTR_SET_VALUE(mobilePhoneNum_, mobilePhoneNum) };


    protected:
      // The email address.
      shared_ptr<string> email_ {};
      // The country calling code.
      shared_ptr<string> mobileCountryCode_ {};
      // The mobile phone number of the contact.
      shared_ptr<string> mobilePhoneNum_ {};
    };

    class ChangedJourneys : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ChangedJourneys& obj) { 
        DARABONBA_PTR_TO_JSON(segment_list, segmentList_);
      };
      friend void from_json(const Darabonba::Json& j, ChangedJourneys& obj) { 
        DARABONBA_PTR_FROM_JSON(segment_list, segmentList_);
      };
      ChangedJourneys() = default ;
      ChangedJourneys(const ChangedJourneys &) = default ;
      ChangedJourneys(ChangedJourneys &&) = default ;
      ChangedJourneys(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ChangedJourneys() = default ;
      ChangedJourneys& operator=(const ChangedJourneys &) = default ;
      ChangedJourneys& operator=(ChangedJourneys &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class SegmentList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const SegmentList& obj) { 
          DARABONBA_PTR_TO_JSON(arrival_airport, arrivalAirport_);
          DARABONBA_PTR_TO_JSON(arrival_city, arrivalCity_);
          DARABONBA_PTR_TO_JSON(arrive_terminal, arriveTerminal_);
          DARABONBA_PTR_TO_JSON(arrive_time, arriveTime_);
          DARABONBA_PTR_TO_JSON(arrive_time_str, arriveTimeStr_);
          DARABONBA_PTR_TO_JSON(code_share, codeShare_);
          DARABONBA_PTR_TO_JSON(departure_airport, departureAirport_);
          DARABONBA_PTR_TO_JSON(departure_city, departureCity_);
          DARABONBA_PTR_TO_JSON(departure_date, departureDate_);
          DARABONBA_PTR_TO_JSON(departure_terminal, departureTerminal_);
          DARABONBA_PTR_TO_JSON(departure_time, departureTime_);
          DARABONBA_PTR_TO_JSON(departure_time_str, departureTimeStr_);
          DARABONBA_PTR_TO_JSON(marketing_flight_no, marketingFlightNo_);
          DARABONBA_PTR_TO_JSON(operating_flight_no, operatingFlightNo_);
        };
        friend void from_json(const Darabonba::Json& j, SegmentList& obj) { 
          DARABONBA_PTR_FROM_JSON(arrival_airport, arrivalAirport_);
          DARABONBA_PTR_FROM_JSON(arrival_city, arrivalCity_);
          DARABONBA_PTR_FROM_JSON(arrive_terminal, arriveTerminal_);
          DARABONBA_PTR_FROM_JSON(arrive_time, arriveTime_);
          DARABONBA_PTR_FROM_JSON(arrive_time_str, arriveTimeStr_);
          DARABONBA_PTR_FROM_JSON(code_share, codeShare_);
          DARABONBA_PTR_FROM_JSON(departure_airport, departureAirport_);
          DARABONBA_PTR_FROM_JSON(departure_city, departureCity_);
          DARABONBA_PTR_FROM_JSON(departure_date, departureDate_);
          DARABONBA_PTR_FROM_JSON(departure_terminal, departureTerminal_);
          DARABONBA_PTR_FROM_JSON(departure_time, departureTime_);
          DARABONBA_PTR_FROM_JSON(departure_time_str, departureTimeStr_);
          DARABONBA_PTR_FROM_JSON(marketing_flight_no, marketingFlightNo_);
          DARABONBA_PTR_FROM_JSON(operating_flight_no, operatingFlightNo_);
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
        && this->arrivalCity_ == nullptr && this->arriveTerminal_ == nullptr && this->arriveTime_ == nullptr && this->arriveTimeStr_ == nullptr && this->codeShare_ == nullptr
        && this->departureAirport_ == nullptr && this->departureCity_ == nullptr && this->departureDate_ == nullptr && this->departureTerminal_ == nullptr && this->departureTime_ == nullptr
        && this->departureTimeStr_ == nullptr && this->marketingFlightNo_ == nullptr && this->operatingFlightNo_ == nullptr; };
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


        // arriveTerminal Field Functions 
        bool hasArriveTerminal() const { return this->arriveTerminal_ != nullptr;};
        void deleteArriveTerminal() { this->arriveTerminal_ = nullptr;};
        inline string getArriveTerminal() const { DARABONBA_PTR_GET_DEFAULT(arriveTerminal_, "") };
        inline SegmentList& setArriveTerminal(string arriveTerminal) { DARABONBA_PTR_SET_VALUE(arriveTerminal_, arriveTerminal) };


        // arriveTime Field Functions 
        bool hasArriveTime() const { return this->arriveTime_ != nullptr;};
        void deleteArriveTime() { this->arriveTime_ = nullptr;};
        inline int64_t getArriveTime() const { DARABONBA_PTR_GET_DEFAULT(arriveTime_, 0L) };
        inline SegmentList& setArriveTime(int64_t arriveTime) { DARABONBA_PTR_SET_VALUE(arriveTime_, arriveTime) };


        // arriveTimeStr Field Functions 
        bool hasArriveTimeStr() const { return this->arriveTimeStr_ != nullptr;};
        void deleteArriveTimeStr() { this->arriveTimeStr_ = nullptr;};
        inline string getArriveTimeStr() const { DARABONBA_PTR_GET_DEFAULT(arriveTimeStr_, "") };
        inline SegmentList& setArriveTimeStr(string arriveTimeStr) { DARABONBA_PTR_SET_VALUE(arriveTimeStr_, arriveTimeStr) };


        // codeShare Field Functions 
        bool hasCodeShare() const { return this->codeShare_ != nullptr;};
        void deleteCodeShare() { this->codeShare_ = nullptr;};
        inline bool getCodeShare() const { DARABONBA_PTR_GET_DEFAULT(codeShare_, false) };
        inline SegmentList& setCodeShare(bool codeShare) { DARABONBA_PTR_SET_VALUE(codeShare_, codeShare) };


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


        // departureDate Field Functions 
        bool hasDepartureDate() const { return this->departureDate_ != nullptr;};
        void deleteDepartureDate() { this->departureDate_ = nullptr;};
        inline string getDepartureDate() const { DARABONBA_PTR_GET_DEFAULT(departureDate_, "") };
        inline SegmentList& setDepartureDate(string departureDate) { DARABONBA_PTR_SET_VALUE(departureDate_, departureDate) };


        // departureTerminal Field Functions 
        bool hasDepartureTerminal() const { return this->departureTerminal_ != nullptr;};
        void deleteDepartureTerminal() { this->departureTerminal_ = nullptr;};
        inline string getDepartureTerminal() const { DARABONBA_PTR_GET_DEFAULT(departureTerminal_, "") };
        inline SegmentList& setDepartureTerminal(string departureTerminal) { DARABONBA_PTR_SET_VALUE(departureTerminal_, departureTerminal) };


        // departureTime Field Functions 
        bool hasDepartureTime() const { return this->departureTime_ != nullptr;};
        void deleteDepartureTime() { this->departureTime_ = nullptr;};
        inline int64_t getDepartureTime() const { DARABONBA_PTR_GET_DEFAULT(departureTime_, 0L) };
        inline SegmentList& setDepartureTime(int64_t departureTime) { DARABONBA_PTR_SET_VALUE(departureTime_, departureTime) };


        // departureTimeStr Field Functions 
        bool hasDepartureTimeStr() const { return this->departureTimeStr_ != nullptr;};
        void deleteDepartureTimeStr() { this->departureTimeStr_ = nullptr;};
        inline string getDepartureTimeStr() const { DARABONBA_PTR_GET_DEFAULT(departureTimeStr_, "") };
        inline SegmentList& setDepartureTimeStr(string departureTimeStr) { DARABONBA_PTR_SET_VALUE(departureTimeStr_, departureTimeStr) };


        // marketingFlightNo Field Functions 
        bool hasMarketingFlightNo() const { return this->marketingFlightNo_ != nullptr;};
        void deleteMarketingFlightNo() { this->marketingFlightNo_ = nullptr;};
        inline string getMarketingFlightNo() const { DARABONBA_PTR_GET_DEFAULT(marketingFlightNo_, "") };
        inline SegmentList& setMarketingFlightNo(string marketingFlightNo) { DARABONBA_PTR_SET_VALUE(marketingFlightNo_, marketingFlightNo) };


        // operatingFlightNo Field Functions 
        bool hasOperatingFlightNo() const { return this->operatingFlightNo_ != nullptr;};
        void deleteOperatingFlightNo() { this->operatingFlightNo_ = nullptr;};
        inline string getOperatingFlightNo() const { DARABONBA_PTR_GET_DEFAULT(operatingFlightNo_, "") };
        inline SegmentList& setOperatingFlightNo(string operatingFlightNo) { DARABONBA_PTR_SET_VALUE(operatingFlightNo_, operatingFlightNo) };


      protected:
        // The three-letter IATA code of the arrival airport.
        shared_ptr<string> arrivalAirport_ {};
        // The three-letter IATA code of the arrival city.
        // 
        // This parameter is required.
        shared_ptr<string> arrivalCity_ {};
        // The arrival terminal of the flight.
        shared_ptr<string> arriveTerminal_ {};
        // (该属性废弃)航班到达日期时间，utc时间戳
        shared_ptr<int64_t> arriveTime_ {};
        // (必填参数)航班到达日期时间，航班的旅行时间，格式：yyyy-MM-dd HH:mm:ss
        shared_ptr<string> arriveTimeStr_ {};
        // Indicates whether the flight is a codeshare flight.
        shared_ptr<bool> codeShare_ {};
        // The three-letter IATA code of the departure airport.
        shared_ptr<string> departureAirport_ {};
        // The three-letter IATA code of the departure city.
        // 
        // This parameter is required.
        shared_ptr<string> departureCity_ {};
        // The departure date (for example, yyyyMMdd).
        // [_single.params.changed_journeys.items.segment_list.items.departure_time.desc](Deprecated) The departure date and time of the flight, in UTC timestamp.
        // [_single.params.changed_journeys.items.segment_list.items.departure_time_str.desc](Required) The departure date and time of the flight, in local travel time. Format: yyyy-MM-dd HH:mm:ss.
        // [_single.params.changed_journeys.items.segment_list.items.arrive_time.desc](Deprecated) The arrival date and time of the flight, in UTC timestamp.
        // [_single.params.changed_journeys.items.segment_list.items.arrive_time_str.desc](Required) The arrival date and time of the flight, in local travel time. Format: yyyy-MM-dd HH:mm:ss.
        // 
        // This parameter is required.
        shared_ptr<string> departureDate_ {};
        // The departure terminal of the flight.
        shared_ptr<string> departureTerminal_ {};
        // (该属性废弃)航班起飞日期，utc时间戳
        shared_ptr<int64_t> departureTime_ {};
        // (必填参数)航班起飞日期时间，航班的旅行时间，格式：yyyy-MM-dd HH:mm:ss
        shared_ptr<string> departureTimeStr_ {};
        // The marketing flight number (such as KA5809).
        // 
        // This parameter is required.
        shared_ptr<string> marketingFlightNo_ {};
        // The operating flight number (such as CX601).
        shared_ptr<string> operatingFlightNo_ {};
      };

      virtual bool empty() const override { return this->segmentList_ == nullptr; };
      // segmentList Field Functions 
      bool hasSegmentList() const { return this->segmentList_ != nullptr;};
      void deleteSegmentList() { this->segmentList_ = nullptr;};
      inline const vector<ChangedJourneys::SegmentList> & getSegmentList() const { DARABONBA_PTR_GET_CONST(segmentList_, vector<ChangedJourneys::SegmentList>) };
      inline vector<ChangedJourneys::SegmentList> getSegmentList() { DARABONBA_PTR_GET(segmentList_, vector<ChangedJourneys::SegmentList>) };
      inline ChangedJourneys& setSegmentList(const vector<ChangedJourneys::SegmentList> & segmentList) { DARABONBA_PTR_SET_VALUE(segmentList_, segmentList) };
      inline ChangedJourneys& setSegmentList(vector<ChangedJourneys::SegmentList> && segmentList) { DARABONBA_PTR_SET_RVALUE(segmentList_, segmentList) };


    protected:
      // The list of target segments for the change.
      shared_ptr<vector<ChangedJourneys::SegmentList>> segmentList_ {};
    };

    class ChangePassengerList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ChangePassengerList& obj) { 
        DARABONBA_PTR_TO_JSON(document, document_);
        DARABONBA_PTR_TO_JSON(first_name, firstName_);
        DARABONBA_PTR_TO_JSON(last_name, lastName_);
      };
      friend void from_json(const Darabonba::Json& j, ChangePassengerList& obj) { 
        DARABONBA_PTR_FROM_JSON(document, document_);
        DARABONBA_PTR_FROM_JSON(first_name, firstName_);
        DARABONBA_PTR_FROM_JSON(last_name, lastName_);
      };
      ChangePassengerList() = default ;
      ChangePassengerList(const ChangePassengerList &) = default ;
      ChangePassengerList(ChangePassengerList &&) = default ;
      ChangePassengerList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ChangePassengerList() = default ;
      ChangePassengerList& operator=(const ChangePassengerList &) = default ;
      ChangePassengerList& operator=(ChangePassengerList &&) = default ;
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
      inline ChangePassengerList& setDocument(string document) { DARABONBA_PTR_SET_VALUE(document_, document) };


      // firstName Field Functions 
      bool hasFirstName() const { return this->firstName_ != nullptr;};
      void deleteFirstName() { this->firstName_ = nullptr;};
      inline string getFirstName() const { DARABONBA_PTR_GET_DEFAULT(firstName_, "") };
      inline ChangePassengerList& setFirstName(string firstName) { DARABONBA_PTR_SET_VALUE(firstName_, firstName) };


      // lastName Field Functions 
      bool hasLastName() const { return this->lastName_ != nullptr;};
      void deleteLastName() { this->lastName_ = nullptr;};
      inline string getLastName() const { DARABONBA_PTR_GET_DEFAULT(lastName_, "") };
      inline ChangePassengerList& setLastName(string lastName) { DARABONBA_PTR_SET_VALUE(lastName_, lastName) };


    protected:
      // The document number.
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

    virtual bool empty() const override { return this->changePassengerList_ == nullptr
        && this->changedJourneys_ == nullptr && this->contact_ == nullptr && this->orderNum_ == nullptr && this->remark_ == nullptr && this->type_ == nullptr; };
    // changePassengerList Field Functions 
    bool hasChangePassengerList() const { return this->changePassengerList_ != nullptr;};
    void deleteChangePassengerList() { this->changePassengerList_ = nullptr;};
    inline const vector<ChangeApplyRequest::ChangePassengerList> & getChangePassengerList() const { DARABONBA_PTR_GET_CONST(changePassengerList_, vector<ChangeApplyRequest::ChangePassengerList>) };
    inline vector<ChangeApplyRequest::ChangePassengerList> getChangePassengerList() { DARABONBA_PTR_GET(changePassengerList_, vector<ChangeApplyRequest::ChangePassengerList>) };
    inline ChangeApplyRequest& setChangePassengerList(const vector<ChangeApplyRequest::ChangePassengerList> & changePassengerList) { DARABONBA_PTR_SET_VALUE(changePassengerList_, changePassengerList) };
    inline ChangeApplyRequest& setChangePassengerList(vector<ChangeApplyRequest::ChangePassengerList> && changePassengerList) { DARABONBA_PTR_SET_RVALUE(changePassengerList_, changePassengerList) };


    // changedJourneys Field Functions 
    bool hasChangedJourneys() const { return this->changedJourneys_ != nullptr;};
    void deleteChangedJourneys() { this->changedJourneys_ = nullptr;};
    inline const vector<ChangeApplyRequest::ChangedJourneys> & getChangedJourneys() const { DARABONBA_PTR_GET_CONST(changedJourneys_, vector<ChangeApplyRequest::ChangedJourneys>) };
    inline vector<ChangeApplyRequest::ChangedJourneys> getChangedJourneys() { DARABONBA_PTR_GET(changedJourneys_, vector<ChangeApplyRequest::ChangedJourneys>) };
    inline ChangeApplyRequest& setChangedJourneys(const vector<ChangeApplyRequest::ChangedJourneys> & changedJourneys) { DARABONBA_PTR_SET_VALUE(changedJourneys_, changedJourneys) };
    inline ChangeApplyRequest& setChangedJourneys(vector<ChangeApplyRequest::ChangedJourneys> && changedJourneys) { DARABONBA_PTR_SET_RVALUE(changedJourneys_, changedJourneys) };


    // contact Field Functions 
    bool hasContact() const { return this->contact_ != nullptr;};
    void deleteContact() { this->contact_ = nullptr;};
    inline const ChangeApplyRequest::Contact & getContact() const { DARABONBA_PTR_GET_CONST(contact_, ChangeApplyRequest::Contact) };
    inline ChangeApplyRequest::Contact getContact() { DARABONBA_PTR_GET(contact_, ChangeApplyRequest::Contact) };
    inline ChangeApplyRequest& setContact(const ChangeApplyRequest::Contact & contact) { DARABONBA_PTR_SET_VALUE(contact_, contact) };
    inline ChangeApplyRequest& setContact(ChangeApplyRequest::Contact && contact) { DARABONBA_PTR_SET_RVALUE(contact_, contact) };


    // orderNum Field Functions 
    bool hasOrderNum() const { return this->orderNum_ != nullptr;};
    void deleteOrderNum() { this->orderNum_ = nullptr;};
    inline int64_t getOrderNum() const { DARABONBA_PTR_GET_DEFAULT(orderNum_, 0L) };
    inline ChangeApplyRequest& setOrderNum(int64_t orderNum) { DARABONBA_PTR_SET_VALUE(orderNum_, orderNum) };


    // remark Field Functions 
    bool hasRemark() const { return this->remark_ != nullptr;};
    void deleteRemark() { this->remark_ = nullptr;};
    inline string getRemark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
    inline ChangeApplyRequest& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline int32_t getType() const { DARABONBA_PTR_GET_DEFAULT(type_, 0) };
    inline ChangeApplyRequest& setType(int32_t type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The list of passengers for the change.
    // 
    // This parameter is required.
    shared_ptr<vector<ChangeApplyRequest::ChangePassengerList>> changePassengerList_ {};
    // The target journey for the change.
    // 
    // This parameter is required.
    shared_ptr<vector<ChangeApplyRequest::ChangedJourneys>> changedJourneys_ {};
    // The contact information for the change.
    // 
    // This parameter is required.
    shared_ptr<ChangeApplyRequest::Contact> contact_ {};
    // The order number.
    // 
    // This parameter is required.
    shared_ptr<int64_t> orderNum_ {};
    // The buyer remarks.
    shared_ptr<string> remark_ {};
    // The change type. Valid values:
    // - 0: voluntary change
    // - 1: flight schedule change or flight cancellation.
    // 
    // This parameter is required.
    shared_ptr<int32_t> type_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AirticketOpen20230117
#endif
