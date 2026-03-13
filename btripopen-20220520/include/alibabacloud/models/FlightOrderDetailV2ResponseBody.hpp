// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FLIGHTORDERDETAILV2RESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_FLIGHTORDERDETAILV2RESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <map>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class FlightOrderDetailV2ResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const FlightOrderDetailV2ResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(module, module_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(success, success_);
      DARABONBA_PTR_TO_JSON(traceId, traceId_);
    };
    friend void from_json(const Darabonba::Json& j, FlightOrderDetailV2ResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(module, module_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(success, success_);
      DARABONBA_PTR_FROM_JSON(traceId, traceId_);
    };
    FlightOrderDetailV2ResponseBody() = default ;
    FlightOrderDetailV2ResponseBody(const FlightOrderDetailV2ResponseBody &) = default ;
    FlightOrderDetailV2ResponseBody(FlightOrderDetailV2ResponseBody &&) = default ;
    FlightOrderDetailV2ResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~FlightOrderDetailV2ResponseBody() = default ;
    FlightOrderDetailV2ResponseBody& operator=(const FlightOrderDetailV2ResponseBody &) = default ;
    FlightOrderDetailV2ResponseBody& operator=(FlightOrderDetailV2ResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Module : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Module& obj) { 
        DARABONBA_PTR_TO_JSON(b2g_vip_code, b2gVipCode_);
        DARABONBA_PTR_TO_JSON(book_succ_time, bookSuccTime_);
        DARABONBA_PTR_TO_JSON(book_user_id, bookUserId_);
        DARABONBA_PTR_TO_JSON(book_user_name, bookUserName_);
        DARABONBA_PTR_TO_JSON(build_price, buildPrice_);
        DARABONBA_PTR_TO_JSON(contact_info_d_t_o, contactInfoDTO_);
        DARABONBA_PTR_TO_JSON(create_time, createTime_);
        DARABONBA_PTR_TO_JSON(facevalue, facevalue_);
        DARABONBA_PTR_TO_JSON(flight_tale_info_d_t_o, flightTaleInfoDTO_);
        DARABONBA_PTR_TO_JSON(is_protocol, isProtocol_);
        DARABONBA_PTR_TO_JSON(isemergency, isemergency_);
        DARABONBA_PTR_TO_JSON(issendmessage, issendmessage_);
        DARABONBA_PTR_TO_JSON(oil_price, oilPrice_);
        DARABONBA_PTR_TO_JSON(order_id, orderId_);
        DARABONBA_PTR_TO_JSON(order_price, orderPrice_);
        DARABONBA_PTR_TO_JSON(out_order_id, outOrderId_);
        DARABONBA_PTR_TO_JSON(passenger_list, passengerList_);
        DARABONBA_PTR_TO_JSON(passenger_segment_map, passengerSegmentMap_);
        DARABONBA_PTR_TO_JSON(pay_time, payTime_);
        DARABONBA_PTR_TO_JSON(saleprice, saleprice_);
        DARABONBA_PTR_TO_JSON(sendcpsms, sendcpsms_);
        DARABONBA_PTR_TO_JSON(status, status_);
        DARABONBA_PTR_TO_JSON(total_service_fee_price, totalServiceFeePrice_);
      };
      friend void from_json(const Darabonba::Json& j, Module& obj) { 
        DARABONBA_PTR_FROM_JSON(b2g_vip_code, b2gVipCode_);
        DARABONBA_PTR_FROM_JSON(book_succ_time, bookSuccTime_);
        DARABONBA_PTR_FROM_JSON(book_user_id, bookUserId_);
        DARABONBA_PTR_FROM_JSON(book_user_name, bookUserName_);
        DARABONBA_PTR_FROM_JSON(build_price, buildPrice_);
        DARABONBA_PTR_FROM_JSON(contact_info_d_t_o, contactInfoDTO_);
        DARABONBA_PTR_FROM_JSON(create_time, createTime_);
        DARABONBA_PTR_FROM_JSON(facevalue, facevalue_);
        DARABONBA_PTR_FROM_JSON(flight_tale_info_d_t_o, flightTaleInfoDTO_);
        DARABONBA_PTR_FROM_JSON(is_protocol, isProtocol_);
        DARABONBA_PTR_FROM_JSON(isemergency, isemergency_);
        DARABONBA_PTR_FROM_JSON(issendmessage, issendmessage_);
        DARABONBA_PTR_FROM_JSON(oil_price, oilPrice_);
        DARABONBA_PTR_FROM_JSON(order_id, orderId_);
        DARABONBA_PTR_FROM_JSON(order_price, orderPrice_);
        DARABONBA_PTR_FROM_JSON(out_order_id, outOrderId_);
        DARABONBA_PTR_FROM_JSON(passenger_list, passengerList_);
        DARABONBA_PTR_FROM_JSON(passenger_segment_map, passengerSegmentMap_);
        DARABONBA_PTR_FROM_JSON(pay_time, payTime_);
        DARABONBA_PTR_FROM_JSON(saleprice, saleprice_);
        DARABONBA_PTR_FROM_JSON(sendcpsms, sendcpsms_);
        DARABONBA_PTR_FROM_JSON(status, status_);
        DARABONBA_PTR_FROM_JSON(total_service_fee_price, totalServiceFeePrice_);
      };
      Module() = default ;
      Module(const Module &) = default ;
      Module(Module &&) = default ;
      Module(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Module() = default ;
      Module& operator=(const Module &) = default ;
      Module& operator=(Module &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class PassengerList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const PassengerList& obj) { 
          DARABONBA_PTR_TO_JSON(birthday, birthday_);
          DARABONBA_PTR_TO_JSON(btrip_user_id, btripUserId_);
          DARABONBA_PTR_TO_JSON(code, code_);
          DARABONBA_PTR_TO_JSON(country, country_);
          DARABONBA_PTR_TO_JSON(country_code, countryCode_);
          DARABONBA_PTR_TO_JSON(credential, credential_);
          DARABONBA_PTR_TO_JSON(credentials, credentials_);
          DARABONBA_PTR_TO_JSON(email, email_);
          DARABONBA_PTR_TO_JSON(en_first_name, enFirstName_);
          DARABONBA_PTR_TO_JSON(en_last_name, enLastName_);
          DARABONBA_PTR_TO_JSON(english_name, englishName_);
          DARABONBA_PTR_TO_JSON(gender, gender_);
          DARABONBA_PTR_TO_JSON(id, id_);
          DARABONBA_PTR_TO_JSON(is_complete, isComplete_);
          DARABONBA_PTR_TO_JSON(is_frequently, isFrequently_);
          DARABONBA_PTR_TO_JSON(memo, memo_);
          DARABONBA_PTR_TO_JSON(mobile_country_code, mobileCountryCode_);
          DARABONBA_PTR_TO_JSON(mobile_phone_number, mobilePhoneNumber_);
          DARABONBA_PTR_TO_JSON(name, name_);
          DARABONBA_PTR_TO_JSON(oneself, oneself_);
          DARABONBA_PTR_TO_JSON(order_name, orderName_);
          DARABONBA_PTR_TO_JSON(out_passenger_id, outPassengerId_);
          DARABONBA_PTR_TO_JSON(phone, phone_);
          DARABONBA_PTR_TO_JSON(sheng_pi_pinyin, shengPiPinyin_);
          DARABONBA_PTR_TO_JSON(ticket_nos, ticketNos_);
          DARABONBA_PTR_TO_JSON(tickets, tickets_);
          DARABONBA_PTR_TO_JSON(type, type_);
          DARABONBA_PTR_TO_JSON(user_id, userId_);
        };
        friend void from_json(const Darabonba::Json& j, PassengerList& obj) { 
          DARABONBA_PTR_FROM_JSON(birthday, birthday_);
          DARABONBA_PTR_FROM_JSON(btrip_user_id, btripUserId_);
          DARABONBA_PTR_FROM_JSON(code, code_);
          DARABONBA_PTR_FROM_JSON(country, country_);
          DARABONBA_PTR_FROM_JSON(country_code, countryCode_);
          DARABONBA_PTR_FROM_JSON(credential, credential_);
          DARABONBA_PTR_FROM_JSON(credentials, credentials_);
          DARABONBA_PTR_FROM_JSON(email, email_);
          DARABONBA_PTR_FROM_JSON(en_first_name, enFirstName_);
          DARABONBA_PTR_FROM_JSON(en_last_name, enLastName_);
          DARABONBA_PTR_FROM_JSON(english_name, englishName_);
          DARABONBA_PTR_FROM_JSON(gender, gender_);
          DARABONBA_PTR_FROM_JSON(id, id_);
          DARABONBA_PTR_FROM_JSON(is_complete, isComplete_);
          DARABONBA_PTR_FROM_JSON(is_frequently, isFrequently_);
          DARABONBA_PTR_FROM_JSON(memo, memo_);
          DARABONBA_PTR_FROM_JSON(mobile_country_code, mobileCountryCode_);
          DARABONBA_PTR_FROM_JSON(mobile_phone_number, mobilePhoneNumber_);
          DARABONBA_PTR_FROM_JSON(name, name_);
          DARABONBA_PTR_FROM_JSON(oneself, oneself_);
          DARABONBA_PTR_FROM_JSON(order_name, orderName_);
          DARABONBA_PTR_FROM_JSON(out_passenger_id, outPassengerId_);
          DARABONBA_PTR_FROM_JSON(phone, phone_);
          DARABONBA_PTR_FROM_JSON(sheng_pi_pinyin, shengPiPinyin_);
          DARABONBA_PTR_FROM_JSON(ticket_nos, ticketNos_);
          DARABONBA_PTR_FROM_JSON(tickets, tickets_);
          DARABONBA_PTR_FROM_JSON(type, type_);
          DARABONBA_PTR_FROM_JSON(user_id, userId_);
        };
        PassengerList() = default ;
        PassengerList(const PassengerList &) = default ;
        PassengerList(PassengerList &&) = default ;
        PassengerList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~PassengerList() = default ;
        PassengerList& operator=(const PassengerList &) = default ;
        PassengerList& operator=(PassengerList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Tickets : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Tickets& obj) { 
            DARABONBA_PTR_TO_JSON(channel, channel_);
            DARABONBA_PTR_TO_JSON(journey_title, journeyTitle_);
            DARABONBA_PTR_TO_JSON(open_ticket_status, openTicketStatus_);
            DARABONBA_PTR_TO_JSON(pcc, pcc_);
            DARABONBA_PTR_TO_JSON(segment_open_ticket_list, segmentOpenTicketList_);
            DARABONBA_PTR_TO_JSON(ticket_auth_memo, ticketAuthMemo_);
            DARABONBA_PTR_TO_JSON(ticket_auth_status, ticketAuthStatus_);
            DARABONBA_PTR_TO_JSON(ticket_no, ticketNo_);
            DARABONBA_PTR_TO_JSON(ticket_price, ticketPrice_);
            DARABONBA_PTR_TO_JSON(ticket_status, ticketStatus_);
          };
          friend void from_json(const Darabonba::Json& j, Tickets& obj) { 
            DARABONBA_PTR_FROM_JSON(channel, channel_);
            DARABONBA_PTR_FROM_JSON(journey_title, journeyTitle_);
            DARABONBA_PTR_FROM_JSON(open_ticket_status, openTicketStatus_);
            DARABONBA_PTR_FROM_JSON(pcc, pcc_);
            DARABONBA_PTR_FROM_JSON(segment_open_ticket_list, segmentOpenTicketList_);
            DARABONBA_PTR_FROM_JSON(ticket_auth_memo, ticketAuthMemo_);
            DARABONBA_PTR_FROM_JSON(ticket_auth_status, ticketAuthStatus_);
            DARABONBA_PTR_FROM_JSON(ticket_no, ticketNo_);
            DARABONBA_PTR_FROM_JSON(ticket_price, ticketPrice_);
            DARABONBA_PTR_FROM_JSON(ticket_status, ticketStatus_);
          };
          Tickets() = default ;
          Tickets(const Tickets &) = default ;
          Tickets(Tickets &&) = default ;
          Tickets(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Tickets() = default ;
          Tickets& operator=(const Tickets &) = default ;
          Tickets& operator=(Tickets &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class SegmentOpenTicketList : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const SegmentOpenTicketList& obj) { 
              DARABONBA_PTR_TO_JSON(journey_index, journeyIndex_);
              DARABONBA_PTR_TO_JSON(open_ticket_status, openTicketStatus_);
              DARABONBA_PTR_TO_JSON(segment_index, segmentIndex_);
            };
            friend void from_json(const Darabonba::Json& j, SegmentOpenTicketList& obj) { 
              DARABONBA_PTR_FROM_JSON(journey_index, journeyIndex_);
              DARABONBA_PTR_FROM_JSON(open_ticket_status, openTicketStatus_);
              DARABONBA_PTR_FROM_JSON(segment_index, segmentIndex_);
            };
            SegmentOpenTicketList() = default ;
            SegmentOpenTicketList(const SegmentOpenTicketList &) = default ;
            SegmentOpenTicketList(SegmentOpenTicketList &&) = default ;
            SegmentOpenTicketList(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~SegmentOpenTicketList() = default ;
            SegmentOpenTicketList& operator=(const SegmentOpenTicketList &) = default ;
            SegmentOpenTicketList& operator=(SegmentOpenTicketList &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->journeyIndex_ == nullptr
        && this->openTicketStatus_ == nullptr && this->segmentIndex_ == nullptr; };
            // journeyIndex Field Functions 
            bool hasJourneyIndex() const { return this->journeyIndex_ != nullptr;};
            void deleteJourneyIndex() { this->journeyIndex_ = nullptr;};
            inline int32_t getJourneyIndex() const { DARABONBA_PTR_GET_DEFAULT(journeyIndex_, 0) };
            inline SegmentOpenTicketList& setJourneyIndex(int32_t journeyIndex) { DARABONBA_PTR_SET_VALUE(journeyIndex_, journeyIndex) };


            // openTicketStatus Field Functions 
            bool hasOpenTicketStatus() const { return this->openTicketStatus_ != nullptr;};
            void deleteOpenTicketStatus() { this->openTicketStatus_ = nullptr;};
            inline int32_t getOpenTicketStatus() const { DARABONBA_PTR_GET_DEFAULT(openTicketStatus_, 0) };
            inline SegmentOpenTicketList& setOpenTicketStatus(int32_t openTicketStatus) { DARABONBA_PTR_SET_VALUE(openTicketStatus_, openTicketStatus) };


            // segmentIndex Field Functions 
            bool hasSegmentIndex() const { return this->segmentIndex_ != nullptr;};
            void deleteSegmentIndex() { this->segmentIndex_ = nullptr;};
            inline int32_t getSegmentIndex() const { DARABONBA_PTR_GET_DEFAULT(segmentIndex_, 0) };
            inline SegmentOpenTicketList& setSegmentIndex(int32_t segmentIndex) { DARABONBA_PTR_SET_VALUE(segmentIndex_, segmentIndex) };


          protected:
            shared_ptr<int32_t> journeyIndex_ {};
            shared_ptr<int32_t> openTicketStatus_ {};
            shared_ptr<int32_t> segmentIndex_ {};
          };

          virtual bool empty() const override { return this->channel_ == nullptr
        && this->journeyTitle_ == nullptr && this->openTicketStatus_ == nullptr && this->pcc_ == nullptr && this->segmentOpenTicketList_ == nullptr && this->ticketAuthMemo_ == nullptr
        && this->ticketAuthStatus_ == nullptr && this->ticketNo_ == nullptr && this->ticketPrice_ == nullptr && this->ticketStatus_ == nullptr; };
          // channel Field Functions 
          bool hasChannel() const { return this->channel_ != nullptr;};
          void deleteChannel() { this->channel_ = nullptr;};
          inline string getChannel() const { DARABONBA_PTR_GET_DEFAULT(channel_, "") };
          inline Tickets& setChannel(string channel) { DARABONBA_PTR_SET_VALUE(channel_, channel) };


          // journeyTitle Field Functions 
          bool hasJourneyTitle() const { return this->journeyTitle_ != nullptr;};
          void deleteJourneyTitle() { this->journeyTitle_ = nullptr;};
          inline string getJourneyTitle() const { DARABONBA_PTR_GET_DEFAULT(journeyTitle_, "") };
          inline Tickets& setJourneyTitle(string journeyTitle) { DARABONBA_PTR_SET_VALUE(journeyTitle_, journeyTitle) };


          // openTicketStatus Field Functions 
          bool hasOpenTicketStatus() const { return this->openTicketStatus_ != nullptr;};
          void deleteOpenTicketStatus() { this->openTicketStatus_ = nullptr;};
          inline string getOpenTicketStatus() const { DARABONBA_PTR_GET_DEFAULT(openTicketStatus_, "") };
          inline Tickets& setOpenTicketStatus(string openTicketStatus) { DARABONBA_PTR_SET_VALUE(openTicketStatus_, openTicketStatus) };


          // pcc Field Functions 
          bool hasPcc() const { return this->pcc_ != nullptr;};
          void deletePcc() { this->pcc_ = nullptr;};
          inline string getPcc() const { DARABONBA_PTR_GET_DEFAULT(pcc_, "") };
          inline Tickets& setPcc(string pcc) { DARABONBA_PTR_SET_VALUE(pcc_, pcc) };


          // segmentOpenTicketList Field Functions 
          bool hasSegmentOpenTicketList() const { return this->segmentOpenTicketList_ != nullptr;};
          void deleteSegmentOpenTicketList() { this->segmentOpenTicketList_ = nullptr;};
          inline const vector<Tickets::SegmentOpenTicketList> & getSegmentOpenTicketList() const { DARABONBA_PTR_GET_CONST(segmentOpenTicketList_, vector<Tickets::SegmentOpenTicketList>) };
          inline vector<Tickets::SegmentOpenTicketList> getSegmentOpenTicketList() { DARABONBA_PTR_GET(segmentOpenTicketList_, vector<Tickets::SegmentOpenTicketList>) };
          inline Tickets& setSegmentOpenTicketList(const vector<Tickets::SegmentOpenTicketList> & segmentOpenTicketList) { DARABONBA_PTR_SET_VALUE(segmentOpenTicketList_, segmentOpenTicketList) };
          inline Tickets& setSegmentOpenTicketList(vector<Tickets::SegmentOpenTicketList> && segmentOpenTicketList) { DARABONBA_PTR_SET_RVALUE(segmentOpenTicketList_, segmentOpenTicketList) };


          // ticketAuthMemo Field Functions 
          bool hasTicketAuthMemo() const { return this->ticketAuthMemo_ != nullptr;};
          void deleteTicketAuthMemo() { this->ticketAuthMemo_ = nullptr;};
          inline string getTicketAuthMemo() const { DARABONBA_PTR_GET_DEFAULT(ticketAuthMemo_, "") };
          inline Tickets& setTicketAuthMemo(string ticketAuthMemo) { DARABONBA_PTR_SET_VALUE(ticketAuthMemo_, ticketAuthMemo) };


          // ticketAuthStatus Field Functions 
          bool hasTicketAuthStatus() const { return this->ticketAuthStatus_ != nullptr;};
          void deleteTicketAuthStatus() { this->ticketAuthStatus_ = nullptr;};
          inline int32_t getTicketAuthStatus() const { DARABONBA_PTR_GET_DEFAULT(ticketAuthStatus_, 0) };
          inline Tickets& setTicketAuthStatus(int32_t ticketAuthStatus) { DARABONBA_PTR_SET_VALUE(ticketAuthStatus_, ticketAuthStatus) };


          // ticketNo Field Functions 
          bool hasTicketNo() const { return this->ticketNo_ != nullptr;};
          void deleteTicketNo() { this->ticketNo_ = nullptr;};
          inline string getTicketNo() const { DARABONBA_PTR_GET_DEFAULT(ticketNo_, "") };
          inline Tickets& setTicketNo(string ticketNo) { DARABONBA_PTR_SET_VALUE(ticketNo_, ticketNo) };


          // ticketPrice Field Functions 
          bool hasTicketPrice() const { return this->ticketPrice_ != nullptr;};
          void deleteTicketPrice() { this->ticketPrice_ = nullptr;};
          inline int64_t getTicketPrice() const { DARABONBA_PTR_GET_DEFAULT(ticketPrice_, 0L) };
          inline Tickets& setTicketPrice(int64_t ticketPrice) { DARABONBA_PTR_SET_VALUE(ticketPrice_, ticketPrice) };


          // ticketStatus Field Functions 
          bool hasTicketStatus() const { return this->ticketStatus_ != nullptr;};
          void deleteTicketStatus() { this->ticketStatus_ = nullptr;};
          inline string getTicketStatus() const { DARABONBA_PTR_GET_DEFAULT(ticketStatus_, "") };
          inline Tickets& setTicketStatus(string ticketStatus) { DARABONBA_PTR_SET_VALUE(ticketStatus_, ticketStatus) };


        protected:
          shared_ptr<string> channel_ {};
          shared_ptr<string> journeyTitle_ {};
          shared_ptr<string> openTicketStatus_ {};
          // pcc/office
          shared_ptr<string> pcc_ {};
          shared_ptr<vector<Tickets::SegmentOpenTicketList>> segmentOpenTicketList_ {};
          shared_ptr<string> ticketAuthMemo_ {};
          shared_ptr<int32_t> ticketAuthStatus_ {};
          shared_ptr<string> ticketNo_ {};
          shared_ptr<int64_t> ticketPrice_ {};
          shared_ptr<string> ticketStatus_ {};
        };

        class Credentials : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Credentials& obj) { 
            DARABONBA_PTR_TO_JSON(birth_date, birthDate_);
            DARABONBA_PTR_TO_JSON(cert_issue_date, certIssueDate_);
            DARABONBA_PTR_TO_JSON(cert_issue_place, certIssuePlace_);
            DARABONBA_PTR_TO_JSON(credential_no, credentialNo_);
            DARABONBA_PTR_TO_JSON(drive_licence_first, driveLicenceFirst_);
            DARABONBA_PTR_TO_JSON(drive_licence_type, driveLicenceType_);
            DARABONBA_PTR_TO_JSON(expire_date, expireDate_);
            DARABONBA_PTR_TO_JSON(holder_nationality, holderNationality_);
            DARABONBA_PTR_TO_JSON(id, id_);
            DARABONBA_PTR_TO_JSON(id_check_code, idCheckCode_);
            DARABONBA_PTR_TO_JSON(issue_country, issueCountry_);
            DARABONBA_PTR_TO_JSON(type, type_);
          };
          friend void from_json(const Darabonba::Json& j, Credentials& obj) { 
            DARABONBA_PTR_FROM_JSON(birth_date, birthDate_);
            DARABONBA_PTR_FROM_JSON(cert_issue_date, certIssueDate_);
            DARABONBA_PTR_FROM_JSON(cert_issue_place, certIssuePlace_);
            DARABONBA_PTR_FROM_JSON(credential_no, credentialNo_);
            DARABONBA_PTR_FROM_JSON(drive_licence_first, driveLicenceFirst_);
            DARABONBA_PTR_FROM_JSON(drive_licence_type, driveLicenceType_);
            DARABONBA_PTR_FROM_JSON(expire_date, expireDate_);
            DARABONBA_PTR_FROM_JSON(holder_nationality, holderNationality_);
            DARABONBA_PTR_FROM_JSON(id, id_);
            DARABONBA_PTR_FROM_JSON(id_check_code, idCheckCode_);
            DARABONBA_PTR_FROM_JSON(issue_country, issueCountry_);
            DARABONBA_PTR_FROM_JSON(type, type_);
          };
          Credentials() = default ;
          Credentials(const Credentials &) = default ;
          Credentials(Credentials &&) = default ;
          Credentials(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Credentials() = default ;
          Credentials& operator=(const Credentials &) = default ;
          Credentials& operator=(Credentials &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->birthDate_ == nullptr
        && this->certIssueDate_ == nullptr && this->certIssuePlace_ == nullptr && this->credentialNo_ == nullptr && this->driveLicenceFirst_ == nullptr && this->driveLicenceType_ == nullptr
        && this->expireDate_ == nullptr && this->holderNationality_ == nullptr && this->id_ == nullptr && this->idCheckCode_ == nullptr && this->issueCountry_ == nullptr
        && this->type_ == nullptr; };
          // birthDate Field Functions 
          bool hasBirthDate() const { return this->birthDate_ != nullptr;};
          void deleteBirthDate() { this->birthDate_ = nullptr;};
          inline string getBirthDate() const { DARABONBA_PTR_GET_DEFAULT(birthDate_, "") };
          inline Credentials& setBirthDate(string birthDate) { DARABONBA_PTR_SET_VALUE(birthDate_, birthDate) };


          // certIssueDate Field Functions 
          bool hasCertIssueDate() const { return this->certIssueDate_ != nullptr;};
          void deleteCertIssueDate() { this->certIssueDate_ = nullptr;};
          inline string getCertIssueDate() const { DARABONBA_PTR_GET_DEFAULT(certIssueDate_, "") };
          inline Credentials& setCertIssueDate(string certIssueDate) { DARABONBA_PTR_SET_VALUE(certIssueDate_, certIssueDate) };


          // certIssuePlace Field Functions 
          bool hasCertIssuePlace() const { return this->certIssuePlace_ != nullptr;};
          void deleteCertIssuePlace() { this->certIssuePlace_ = nullptr;};
          inline string getCertIssuePlace() const { DARABONBA_PTR_GET_DEFAULT(certIssuePlace_, "") };
          inline Credentials& setCertIssuePlace(string certIssuePlace) { DARABONBA_PTR_SET_VALUE(certIssuePlace_, certIssuePlace) };


          // credentialNo Field Functions 
          bool hasCredentialNo() const { return this->credentialNo_ != nullptr;};
          void deleteCredentialNo() { this->credentialNo_ = nullptr;};
          inline string getCredentialNo() const { DARABONBA_PTR_GET_DEFAULT(credentialNo_, "") };
          inline Credentials& setCredentialNo(string credentialNo) { DARABONBA_PTR_SET_VALUE(credentialNo_, credentialNo) };


          // driveLicenceFirst Field Functions 
          bool hasDriveLicenceFirst() const { return this->driveLicenceFirst_ != nullptr;};
          void deleteDriveLicenceFirst() { this->driveLicenceFirst_ = nullptr;};
          inline string getDriveLicenceFirst() const { DARABONBA_PTR_GET_DEFAULT(driveLicenceFirst_, "") };
          inline Credentials& setDriveLicenceFirst(string driveLicenceFirst) { DARABONBA_PTR_SET_VALUE(driveLicenceFirst_, driveLicenceFirst) };


          // driveLicenceType Field Functions 
          bool hasDriveLicenceType() const { return this->driveLicenceType_ != nullptr;};
          void deleteDriveLicenceType() { this->driveLicenceType_ = nullptr;};
          inline string getDriveLicenceType() const { DARABONBA_PTR_GET_DEFAULT(driveLicenceType_, "") };
          inline Credentials& setDriveLicenceType(string driveLicenceType) { DARABONBA_PTR_SET_VALUE(driveLicenceType_, driveLicenceType) };


          // expireDate Field Functions 
          bool hasExpireDate() const { return this->expireDate_ != nullptr;};
          void deleteExpireDate() { this->expireDate_ = nullptr;};
          inline string getExpireDate() const { DARABONBA_PTR_GET_DEFAULT(expireDate_, "") };
          inline Credentials& setExpireDate(string expireDate) { DARABONBA_PTR_SET_VALUE(expireDate_, expireDate) };


          // holderNationality Field Functions 
          bool hasHolderNationality() const { return this->holderNationality_ != nullptr;};
          void deleteHolderNationality() { this->holderNationality_ = nullptr;};
          inline string getHolderNationality() const { DARABONBA_PTR_GET_DEFAULT(holderNationality_, "") };
          inline Credentials& setHolderNationality(string holderNationality) { DARABONBA_PTR_SET_VALUE(holderNationality_, holderNationality) };


          // id Field Functions 
          bool hasId() const { return this->id_ != nullptr;};
          void deleteId() { this->id_ = nullptr;};
          inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
          inline Credentials& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


          // idCheckCode Field Functions 
          bool hasIdCheckCode() const { return this->idCheckCode_ != nullptr;};
          void deleteIdCheckCode() { this->idCheckCode_ = nullptr;};
          inline string getIdCheckCode() const { DARABONBA_PTR_GET_DEFAULT(idCheckCode_, "") };
          inline Credentials& setIdCheckCode(string idCheckCode) { DARABONBA_PTR_SET_VALUE(idCheckCode_, idCheckCode) };


          // issueCountry Field Functions 
          bool hasIssueCountry() const { return this->issueCountry_ != nullptr;};
          void deleteIssueCountry() { this->issueCountry_ = nullptr;};
          inline string getIssueCountry() const { DARABONBA_PTR_GET_DEFAULT(issueCountry_, "") };
          inline Credentials& setIssueCountry(string issueCountry) { DARABONBA_PTR_SET_VALUE(issueCountry_, issueCountry) };


          // type Field Functions 
          bool hasType() const { return this->type_ != nullptr;};
          void deleteType() { this->type_ = nullptr;};
          inline int32_t getType() const { DARABONBA_PTR_GET_DEFAULT(type_, 0) };
          inline Credentials& setType(int32_t type) { DARABONBA_PTR_SET_VALUE(type_, type) };


        protected:
          shared_ptr<string> birthDate_ {};
          shared_ptr<string> certIssueDate_ {};
          shared_ptr<string> certIssuePlace_ {};
          shared_ptr<string> credentialNo_ {};
          shared_ptr<string> driveLicenceFirst_ {};
          shared_ptr<string> driveLicenceType_ {};
          shared_ptr<string> expireDate_ {};
          shared_ptr<string> holderNationality_ {};
          shared_ptr<int64_t> id_ {};
          shared_ptr<string> idCheckCode_ {};
          shared_ptr<string> issueCountry_ {};
          shared_ptr<int32_t> type_ {};
        };

        class Credential : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Credential& obj) { 
            DARABONBA_PTR_TO_JSON(birth_date, birthDate_);
            DARABONBA_PTR_TO_JSON(cert_issue_date, certIssueDate_);
            DARABONBA_PTR_TO_JSON(cert_issue_place, certIssuePlace_);
            DARABONBA_PTR_TO_JSON(credential_no, credentialNo_);
            DARABONBA_PTR_TO_JSON(drive_licence_first, driveLicenceFirst_);
            DARABONBA_PTR_TO_JSON(drive_licence_type, driveLicenceType_);
            DARABONBA_PTR_TO_JSON(expire_date, expireDate_);
            DARABONBA_PTR_TO_JSON(holder_nationality, holderNationality_);
            DARABONBA_PTR_TO_JSON(id, id_);
            DARABONBA_PTR_TO_JSON(id_check_code, idCheckCode_);
            DARABONBA_PTR_TO_JSON(issue_country, issueCountry_);
            DARABONBA_PTR_TO_JSON(type, type_);
          };
          friend void from_json(const Darabonba::Json& j, Credential& obj) { 
            DARABONBA_PTR_FROM_JSON(birth_date, birthDate_);
            DARABONBA_PTR_FROM_JSON(cert_issue_date, certIssueDate_);
            DARABONBA_PTR_FROM_JSON(cert_issue_place, certIssuePlace_);
            DARABONBA_PTR_FROM_JSON(credential_no, credentialNo_);
            DARABONBA_PTR_FROM_JSON(drive_licence_first, driveLicenceFirst_);
            DARABONBA_PTR_FROM_JSON(drive_licence_type, driveLicenceType_);
            DARABONBA_PTR_FROM_JSON(expire_date, expireDate_);
            DARABONBA_PTR_FROM_JSON(holder_nationality, holderNationality_);
            DARABONBA_PTR_FROM_JSON(id, id_);
            DARABONBA_PTR_FROM_JSON(id_check_code, idCheckCode_);
            DARABONBA_PTR_FROM_JSON(issue_country, issueCountry_);
            DARABONBA_PTR_FROM_JSON(type, type_);
          };
          Credential() = default ;
          Credential(const Credential &) = default ;
          Credential(Credential &&) = default ;
          Credential(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Credential() = default ;
          Credential& operator=(const Credential &) = default ;
          Credential& operator=(Credential &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->birthDate_ == nullptr
        && this->certIssueDate_ == nullptr && this->certIssuePlace_ == nullptr && this->credentialNo_ == nullptr && this->driveLicenceFirst_ == nullptr && this->driveLicenceType_ == nullptr
        && this->expireDate_ == nullptr && this->holderNationality_ == nullptr && this->id_ == nullptr && this->idCheckCode_ == nullptr && this->issueCountry_ == nullptr
        && this->type_ == nullptr; };
          // birthDate Field Functions 
          bool hasBirthDate() const { return this->birthDate_ != nullptr;};
          void deleteBirthDate() { this->birthDate_ = nullptr;};
          inline string getBirthDate() const { DARABONBA_PTR_GET_DEFAULT(birthDate_, "") };
          inline Credential& setBirthDate(string birthDate) { DARABONBA_PTR_SET_VALUE(birthDate_, birthDate) };


          // certIssueDate Field Functions 
          bool hasCertIssueDate() const { return this->certIssueDate_ != nullptr;};
          void deleteCertIssueDate() { this->certIssueDate_ = nullptr;};
          inline string getCertIssueDate() const { DARABONBA_PTR_GET_DEFAULT(certIssueDate_, "") };
          inline Credential& setCertIssueDate(string certIssueDate) { DARABONBA_PTR_SET_VALUE(certIssueDate_, certIssueDate) };


          // certIssuePlace Field Functions 
          bool hasCertIssuePlace() const { return this->certIssuePlace_ != nullptr;};
          void deleteCertIssuePlace() { this->certIssuePlace_ = nullptr;};
          inline string getCertIssuePlace() const { DARABONBA_PTR_GET_DEFAULT(certIssuePlace_, "") };
          inline Credential& setCertIssuePlace(string certIssuePlace) { DARABONBA_PTR_SET_VALUE(certIssuePlace_, certIssuePlace) };


          // credentialNo Field Functions 
          bool hasCredentialNo() const { return this->credentialNo_ != nullptr;};
          void deleteCredentialNo() { this->credentialNo_ = nullptr;};
          inline string getCredentialNo() const { DARABONBA_PTR_GET_DEFAULT(credentialNo_, "") };
          inline Credential& setCredentialNo(string credentialNo) { DARABONBA_PTR_SET_VALUE(credentialNo_, credentialNo) };


          // driveLicenceFirst Field Functions 
          bool hasDriveLicenceFirst() const { return this->driveLicenceFirst_ != nullptr;};
          void deleteDriveLicenceFirst() { this->driveLicenceFirst_ = nullptr;};
          inline string getDriveLicenceFirst() const { DARABONBA_PTR_GET_DEFAULT(driveLicenceFirst_, "") };
          inline Credential& setDriveLicenceFirst(string driveLicenceFirst) { DARABONBA_PTR_SET_VALUE(driveLicenceFirst_, driveLicenceFirst) };


          // driveLicenceType Field Functions 
          bool hasDriveLicenceType() const { return this->driveLicenceType_ != nullptr;};
          void deleteDriveLicenceType() { this->driveLicenceType_ = nullptr;};
          inline string getDriveLicenceType() const { DARABONBA_PTR_GET_DEFAULT(driveLicenceType_, "") };
          inline Credential& setDriveLicenceType(string driveLicenceType) { DARABONBA_PTR_SET_VALUE(driveLicenceType_, driveLicenceType) };


          // expireDate Field Functions 
          bool hasExpireDate() const { return this->expireDate_ != nullptr;};
          void deleteExpireDate() { this->expireDate_ = nullptr;};
          inline string getExpireDate() const { DARABONBA_PTR_GET_DEFAULT(expireDate_, "") };
          inline Credential& setExpireDate(string expireDate) { DARABONBA_PTR_SET_VALUE(expireDate_, expireDate) };


          // holderNationality Field Functions 
          bool hasHolderNationality() const { return this->holderNationality_ != nullptr;};
          void deleteHolderNationality() { this->holderNationality_ = nullptr;};
          inline string getHolderNationality() const { DARABONBA_PTR_GET_DEFAULT(holderNationality_, "") };
          inline Credential& setHolderNationality(string holderNationality) { DARABONBA_PTR_SET_VALUE(holderNationality_, holderNationality) };


          // id Field Functions 
          bool hasId() const { return this->id_ != nullptr;};
          void deleteId() { this->id_ = nullptr;};
          inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
          inline Credential& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


          // idCheckCode Field Functions 
          bool hasIdCheckCode() const { return this->idCheckCode_ != nullptr;};
          void deleteIdCheckCode() { this->idCheckCode_ = nullptr;};
          inline string getIdCheckCode() const { DARABONBA_PTR_GET_DEFAULT(idCheckCode_, "") };
          inline Credential& setIdCheckCode(string idCheckCode) { DARABONBA_PTR_SET_VALUE(idCheckCode_, idCheckCode) };


          // issueCountry Field Functions 
          bool hasIssueCountry() const { return this->issueCountry_ != nullptr;};
          void deleteIssueCountry() { this->issueCountry_ = nullptr;};
          inline string getIssueCountry() const { DARABONBA_PTR_GET_DEFAULT(issueCountry_, "") };
          inline Credential& setIssueCountry(string issueCountry) { DARABONBA_PTR_SET_VALUE(issueCountry_, issueCountry) };


          // type Field Functions 
          bool hasType() const { return this->type_ != nullptr;};
          void deleteType() { this->type_ = nullptr;};
          inline int32_t getType() const { DARABONBA_PTR_GET_DEFAULT(type_, 0) };
          inline Credential& setType(int32_t type) { DARABONBA_PTR_SET_VALUE(type_, type) };


        protected:
          shared_ptr<string> birthDate_ {};
          shared_ptr<string> certIssueDate_ {};
          shared_ptr<string> certIssuePlace_ {};
          shared_ptr<string> credentialNo_ {};
          shared_ptr<string> driveLicenceFirst_ {};
          shared_ptr<string> driveLicenceType_ {};
          shared_ptr<string> expireDate_ {};
          shared_ptr<string> holderNationality_ {};
          shared_ptr<int64_t> id_ {};
          shared_ptr<string> idCheckCode_ {};
          shared_ptr<string> issueCountry_ {};
          shared_ptr<int32_t> type_ {};
        };

        virtual bool empty() const override { return this->birthday_ == nullptr
        && this->btripUserId_ == nullptr && this->code_ == nullptr && this->country_ == nullptr && this->countryCode_ == nullptr && this->credential_ == nullptr
        && this->credentials_ == nullptr && this->email_ == nullptr && this->enFirstName_ == nullptr && this->enLastName_ == nullptr && this->englishName_ == nullptr
        && this->gender_ == nullptr && this->id_ == nullptr && this->isComplete_ == nullptr && this->isFrequently_ == nullptr && this->memo_ == nullptr
        && this->mobileCountryCode_ == nullptr && this->mobilePhoneNumber_ == nullptr && this->name_ == nullptr && this->oneself_ == nullptr && this->orderName_ == nullptr
        && this->outPassengerId_ == nullptr && this->phone_ == nullptr && this->shengPiPinyin_ == nullptr && this->ticketNos_ == nullptr && this->tickets_ == nullptr
        && this->type_ == nullptr && this->userId_ == nullptr; };
        // birthday Field Functions 
        bool hasBirthday() const { return this->birthday_ != nullptr;};
        void deleteBirthday() { this->birthday_ = nullptr;};
        inline string getBirthday() const { DARABONBA_PTR_GET_DEFAULT(birthday_, "") };
        inline PassengerList& setBirthday(string birthday) { DARABONBA_PTR_SET_VALUE(birthday_, birthday) };


        // btripUserId Field Functions 
        bool hasBtripUserId() const { return this->btripUserId_ != nullptr;};
        void deleteBtripUserId() { this->btripUserId_ = nullptr;};
        inline string getBtripUserId() const { DARABONBA_PTR_GET_DEFAULT(btripUserId_, "") };
        inline PassengerList& setBtripUserId(string btripUserId) { DARABONBA_PTR_SET_VALUE(btripUserId_, btripUserId) };


        // code Field Functions 
        bool hasCode() const { return this->code_ != nullptr;};
        void deleteCode() { this->code_ = nullptr;};
        inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
        inline PassengerList& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


        // country Field Functions 
        bool hasCountry() const { return this->country_ != nullptr;};
        void deleteCountry() { this->country_ = nullptr;};
        inline string getCountry() const { DARABONBA_PTR_GET_DEFAULT(country_, "") };
        inline PassengerList& setCountry(string country) { DARABONBA_PTR_SET_VALUE(country_, country) };


        // countryCode Field Functions 
        bool hasCountryCode() const { return this->countryCode_ != nullptr;};
        void deleteCountryCode() { this->countryCode_ = nullptr;};
        inline string getCountryCode() const { DARABONBA_PTR_GET_DEFAULT(countryCode_, "") };
        inline PassengerList& setCountryCode(string countryCode) { DARABONBA_PTR_SET_VALUE(countryCode_, countryCode) };


        // credential Field Functions 
        bool hasCredential() const { return this->credential_ != nullptr;};
        void deleteCredential() { this->credential_ = nullptr;};
        inline const PassengerList::Credential & getCredential() const { DARABONBA_PTR_GET_CONST(credential_, PassengerList::Credential) };
        inline PassengerList::Credential getCredential() { DARABONBA_PTR_GET(credential_, PassengerList::Credential) };
        inline PassengerList& setCredential(const PassengerList::Credential & credential) { DARABONBA_PTR_SET_VALUE(credential_, credential) };
        inline PassengerList& setCredential(PassengerList::Credential && credential) { DARABONBA_PTR_SET_RVALUE(credential_, credential) };


        // credentials Field Functions 
        bool hasCredentials() const { return this->credentials_ != nullptr;};
        void deleteCredentials() { this->credentials_ = nullptr;};
        inline const vector<PassengerList::Credentials> & getCredentials() const { DARABONBA_PTR_GET_CONST(credentials_, vector<PassengerList::Credentials>) };
        inline vector<PassengerList::Credentials> getCredentials() { DARABONBA_PTR_GET(credentials_, vector<PassengerList::Credentials>) };
        inline PassengerList& setCredentials(const vector<PassengerList::Credentials> & credentials) { DARABONBA_PTR_SET_VALUE(credentials_, credentials) };
        inline PassengerList& setCredentials(vector<PassengerList::Credentials> && credentials) { DARABONBA_PTR_SET_RVALUE(credentials_, credentials) };


        // email Field Functions 
        bool hasEmail() const { return this->email_ != nullptr;};
        void deleteEmail() { this->email_ = nullptr;};
        inline string getEmail() const { DARABONBA_PTR_GET_DEFAULT(email_, "") };
        inline PassengerList& setEmail(string email) { DARABONBA_PTR_SET_VALUE(email_, email) };


        // enFirstName Field Functions 
        bool hasEnFirstName() const { return this->enFirstName_ != nullptr;};
        void deleteEnFirstName() { this->enFirstName_ = nullptr;};
        inline string getEnFirstName() const { DARABONBA_PTR_GET_DEFAULT(enFirstName_, "") };
        inline PassengerList& setEnFirstName(string enFirstName) { DARABONBA_PTR_SET_VALUE(enFirstName_, enFirstName) };


        // enLastName Field Functions 
        bool hasEnLastName() const { return this->enLastName_ != nullptr;};
        void deleteEnLastName() { this->enLastName_ = nullptr;};
        inline string getEnLastName() const { DARABONBA_PTR_GET_DEFAULT(enLastName_, "") };
        inline PassengerList& setEnLastName(string enLastName) { DARABONBA_PTR_SET_VALUE(enLastName_, enLastName) };


        // englishName Field Functions 
        bool hasEnglishName() const { return this->englishName_ != nullptr;};
        void deleteEnglishName() { this->englishName_ = nullptr;};
        inline string getEnglishName() const { DARABONBA_PTR_GET_DEFAULT(englishName_, "") };
        inline PassengerList& setEnglishName(string englishName) { DARABONBA_PTR_SET_VALUE(englishName_, englishName) };


        // gender Field Functions 
        bool hasGender() const { return this->gender_ != nullptr;};
        void deleteGender() { this->gender_ = nullptr;};
        inline int32_t getGender() const { DARABONBA_PTR_GET_DEFAULT(gender_, 0) };
        inline PassengerList& setGender(int32_t gender) { DARABONBA_PTR_SET_VALUE(gender_, gender) };


        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
        inline PassengerList& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // isComplete Field Functions 
        bool hasIsComplete() const { return this->isComplete_ != nullptr;};
        void deleteIsComplete() { this->isComplete_ = nullptr;};
        inline bool getIsComplete() const { DARABONBA_PTR_GET_DEFAULT(isComplete_, false) };
        inline PassengerList& setIsComplete(bool isComplete) { DARABONBA_PTR_SET_VALUE(isComplete_, isComplete) };


        // isFrequently Field Functions 
        bool hasIsFrequently() const { return this->isFrequently_ != nullptr;};
        void deleteIsFrequently() { this->isFrequently_ = nullptr;};
        inline bool getIsFrequently() const { DARABONBA_PTR_GET_DEFAULT(isFrequently_, false) };
        inline PassengerList& setIsFrequently(bool isFrequently) { DARABONBA_PTR_SET_VALUE(isFrequently_, isFrequently) };


        // memo Field Functions 
        bool hasMemo() const { return this->memo_ != nullptr;};
        void deleteMemo() { this->memo_ = nullptr;};
        inline string getMemo() const { DARABONBA_PTR_GET_DEFAULT(memo_, "") };
        inline PassengerList& setMemo(string memo) { DARABONBA_PTR_SET_VALUE(memo_, memo) };


        // mobileCountryCode Field Functions 
        bool hasMobileCountryCode() const { return this->mobileCountryCode_ != nullptr;};
        void deleteMobileCountryCode() { this->mobileCountryCode_ = nullptr;};
        inline string getMobileCountryCode() const { DARABONBA_PTR_GET_DEFAULT(mobileCountryCode_, "") };
        inline PassengerList& setMobileCountryCode(string mobileCountryCode) { DARABONBA_PTR_SET_VALUE(mobileCountryCode_, mobileCountryCode) };


        // mobilePhoneNumber Field Functions 
        bool hasMobilePhoneNumber() const { return this->mobilePhoneNumber_ != nullptr;};
        void deleteMobilePhoneNumber() { this->mobilePhoneNumber_ = nullptr;};
        inline string getMobilePhoneNumber() const { DARABONBA_PTR_GET_DEFAULT(mobilePhoneNumber_, "") };
        inline PassengerList& setMobilePhoneNumber(string mobilePhoneNumber) { DARABONBA_PTR_SET_VALUE(mobilePhoneNumber_, mobilePhoneNumber) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline PassengerList& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // oneself Field Functions 
        bool hasOneself() const { return this->oneself_ != nullptr;};
        void deleteOneself() { this->oneself_ = nullptr;};
        inline bool getOneself() const { DARABONBA_PTR_GET_DEFAULT(oneself_, false) };
        inline PassengerList& setOneself(bool oneself) { DARABONBA_PTR_SET_VALUE(oneself_, oneself) };


        // orderName Field Functions 
        bool hasOrderName() const { return this->orderName_ != nullptr;};
        void deleteOrderName() { this->orderName_ = nullptr;};
        inline string getOrderName() const { DARABONBA_PTR_GET_DEFAULT(orderName_, "") };
        inline PassengerList& setOrderName(string orderName) { DARABONBA_PTR_SET_VALUE(orderName_, orderName) };


        // outPassengerId Field Functions 
        bool hasOutPassengerId() const { return this->outPassengerId_ != nullptr;};
        void deleteOutPassengerId() { this->outPassengerId_ = nullptr;};
        inline string getOutPassengerId() const { DARABONBA_PTR_GET_DEFAULT(outPassengerId_, "") };
        inline PassengerList& setOutPassengerId(string outPassengerId) { DARABONBA_PTR_SET_VALUE(outPassengerId_, outPassengerId) };


        // phone Field Functions 
        bool hasPhone() const { return this->phone_ != nullptr;};
        void deletePhone() { this->phone_ = nullptr;};
        inline string getPhone() const { DARABONBA_PTR_GET_DEFAULT(phone_, "") };
        inline PassengerList& setPhone(string phone) { DARABONBA_PTR_SET_VALUE(phone_, phone) };


        // shengPiPinyin Field Functions 
        bool hasShengPiPinyin() const { return this->shengPiPinyin_ != nullptr;};
        void deleteShengPiPinyin() { this->shengPiPinyin_ = nullptr;};
        inline string getShengPiPinyin() const { DARABONBA_PTR_GET_DEFAULT(shengPiPinyin_, "") };
        inline PassengerList& setShengPiPinyin(string shengPiPinyin) { DARABONBA_PTR_SET_VALUE(shengPiPinyin_, shengPiPinyin) };


        // ticketNos Field Functions 
        bool hasTicketNos() const { return this->ticketNos_ != nullptr;};
        void deleteTicketNos() { this->ticketNos_ = nullptr;};
        inline const vector<string> & getTicketNos() const { DARABONBA_PTR_GET_CONST(ticketNos_, vector<string>) };
        inline vector<string> getTicketNos() { DARABONBA_PTR_GET(ticketNos_, vector<string>) };
        inline PassengerList& setTicketNos(const vector<string> & ticketNos) { DARABONBA_PTR_SET_VALUE(ticketNos_, ticketNos) };
        inline PassengerList& setTicketNos(vector<string> && ticketNos) { DARABONBA_PTR_SET_RVALUE(ticketNos_, ticketNos) };


        // tickets Field Functions 
        bool hasTickets() const { return this->tickets_ != nullptr;};
        void deleteTickets() { this->tickets_ = nullptr;};
        inline const vector<PassengerList::Tickets> & getTickets() const { DARABONBA_PTR_GET_CONST(tickets_, vector<PassengerList::Tickets>) };
        inline vector<PassengerList::Tickets> getTickets() { DARABONBA_PTR_GET(tickets_, vector<PassengerList::Tickets>) };
        inline PassengerList& setTickets(const vector<PassengerList::Tickets> & tickets) { DARABONBA_PTR_SET_VALUE(tickets_, tickets) };
        inline PassengerList& setTickets(vector<PassengerList::Tickets> && tickets) { DARABONBA_PTR_SET_RVALUE(tickets_, tickets) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline int32_t getType() const { DARABONBA_PTR_GET_DEFAULT(type_, 0) };
        inline PassengerList& setType(int32_t type) { DARABONBA_PTR_SET_VALUE(type_, type) };


        // userId Field Functions 
        bool hasUserId() const { return this->userId_ != nullptr;};
        void deleteUserId() { this->userId_ = nullptr;};
        inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
        inline PassengerList& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


      protected:
        shared_ptr<string> birthday_ {};
        shared_ptr<string> btripUserId_ {};
        shared_ptr<int32_t> code_ {};
        shared_ptr<string> country_ {};
        shared_ptr<string> countryCode_ {};
        shared_ptr<PassengerList::Credential> credential_ {};
        shared_ptr<vector<PassengerList::Credentials>> credentials_ {};
        shared_ptr<string> email_ {};
        shared_ptr<string> enFirstName_ {};
        shared_ptr<string> enLastName_ {};
        shared_ptr<string> englishName_ {};
        shared_ptr<int32_t> gender_ {};
        shared_ptr<string> id_ {};
        shared_ptr<bool> isComplete_ {};
        shared_ptr<bool> isFrequently_ {};
        shared_ptr<string> memo_ {};
        shared_ptr<string> mobileCountryCode_ {};
        shared_ptr<string> mobilePhoneNumber_ {};
        shared_ptr<string> name_ {};
        shared_ptr<bool> oneself_ {};
        shared_ptr<string> orderName_ {};
        shared_ptr<string> outPassengerId_ {};
        shared_ptr<string> phone_ {};
        shared_ptr<string> shengPiPinyin_ {};
        shared_ptr<vector<string>> ticketNos_ {};
        shared_ptr<vector<PassengerList::Tickets>> tickets_ {};
        shared_ptr<int32_t> type_ {};
        shared_ptr<string> userId_ {};
      };

      class FlightTaleInfoDTO : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const FlightTaleInfoDTO& obj) { 
          DARABONBA_PTR_TO_JSON(journeys, journeys_);
          DARABONBA_PTR_TO_JSON(notice_tips, noticeTips_);
          DARABONBA_PTR_TO_JSON(trip_type, tripType_);
          DARABONBA_PTR_TO_JSON(trip_type_code, tripTypeCode_);
        };
        friend void from_json(const Darabonba::Json& j, FlightTaleInfoDTO& obj) { 
          DARABONBA_PTR_FROM_JSON(journeys, journeys_);
          DARABONBA_PTR_FROM_JSON(notice_tips, noticeTips_);
          DARABONBA_PTR_FROM_JSON(trip_type, tripType_);
          DARABONBA_PTR_FROM_JSON(trip_type_code, tripTypeCode_);
        };
        FlightTaleInfoDTO() = default ;
        FlightTaleInfoDTO(const FlightTaleInfoDTO &) = default ;
        FlightTaleInfoDTO(FlightTaleInfoDTO &&) = default ;
        FlightTaleInfoDTO(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~FlightTaleInfoDTO() = default ;
        FlightTaleInfoDTO& operator=(const FlightTaleInfoDTO &) = default ;
        FlightTaleInfoDTO& operator=(FlightTaleInfoDTO &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Journeys : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Journeys& obj) { 
            DARABONBA_PTR_TO_JSON(all_fly_duration, allFlyDuration_);
            DARABONBA_PTR_TO_JSON(all_fly_duration_after_change, allFlyDurationAfterChange_);
            DARABONBA_PTR_TO_JSON(apply_id, applyId_);
            DARABONBA_PTR_TO_JSON(arr_city_code, arrCityCode_);
            DARABONBA_PTR_TO_JSON(arr_city_name, arrCityName_);
            DARABONBA_PTR_TO_JSON(arr_time, arrTime_);
            DARABONBA_PTR_TO_JSON(baggage_details, baggageDetails_);
            DARABONBA_PTR_TO_JSON(dep_city_code, depCityCode_);
            DARABONBA_PTR_TO_JSON(dep_city_name, depCityName_);
            DARABONBA_PTR_TO_JSON(dep_time, depTime_);
            DARABONBA_PTR_TO_JSON(flight_status, flightStatus_);
            DARABONBA_PTR_TO_JSON(iata_no, iataNo_);
            DARABONBA_PTR_TO_JSON(is_reshop_journey, isReshopJourney_);
            DARABONBA_PTR_TO_JSON(is_transfer, isTransfer_);
            DARABONBA_PTR_TO_JSON(journey_title, journeyTitle_);
            DARABONBA_PTR_TO_JSON(refund_change_details, refundChangeDetails_);
            DARABONBA_PTR_TO_JSON(segment_list, segmentList_);
          };
          friend void from_json(const Darabonba::Json& j, Journeys& obj) { 
            DARABONBA_PTR_FROM_JSON(all_fly_duration, allFlyDuration_);
            DARABONBA_PTR_FROM_JSON(all_fly_duration_after_change, allFlyDurationAfterChange_);
            DARABONBA_PTR_FROM_JSON(apply_id, applyId_);
            DARABONBA_PTR_FROM_JSON(arr_city_code, arrCityCode_);
            DARABONBA_PTR_FROM_JSON(arr_city_name, arrCityName_);
            DARABONBA_PTR_FROM_JSON(arr_time, arrTime_);
            DARABONBA_PTR_FROM_JSON(baggage_details, baggageDetails_);
            DARABONBA_PTR_FROM_JSON(dep_city_code, depCityCode_);
            DARABONBA_PTR_FROM_JSON(dep_city_name, depCityName_);
            DARABONBA_PTR_FROM_JSON(dep_time, depTime_);
            DARABONBA_PTR_FROM_JSON(flight_status, flightStatus_);
            DARABONBA_PTR_FROM_JSON(iata_no, iataNo_);
            DARABONBA_PTR_FROM_JSON(is_reshop_journey, isReshopJourney_);
            DARABONBA_PTR_FROM_JSON(is_transfer, isTransfer_);
            DARABONBA_PTR_FROM_JSON(journey_title, journeyTitle_);
            DARABONBA_PTR_FROM_JSON(refund_change_details, refundChangeDetails_);
            DARABONBA_PTR_FROM_JSON(segment_list, segmentList_);
          };
          Journeys() = default ;
          Journeys(const Journeys &) = default ;
          Journeys(Journeys &&) = default ;
          Journeys(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Journeys() = default ;
          Journeys& operator=(const Journeys &) = default ;
          Journeys& operator=(Journeys &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class SegmentList : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const SegmentList& obj) { 
              DARABONBA_PTR_TO_JSON(air_line_code, airLineCode_);
              DARABONBA_PTR_TO_JSON(air_line_english_name, airLineEnglishName_);
              DARABONBA_PTR_TO_JSON(air_line_name, airLineName_);
              DARABONBA_PTR_TO_JSON(air_line_phone, airLinePhone_);
              DARABONBA_PTR_TO_JSON(airline_icon_url, airlineIconUrl_);
              DARABONBA_PTR_TO_JSON(airline_short_name, airlineShortName_);
              DARABONBA_PTR_TO_JSON(arr_airport_code, arrAirportCode_);
              DARABONBA_PTR_TO_JSON(arr_airport_name, arrAirportName_);
              DARABONBA_PTR_TO_JSON(arr_city_code, arrCityCode_);
              DARABONBA_PTR_TO_JSON(arr_city_name, arrCityName_);
              DARABONBA_PTR_TO_JSON(arr_time, arrTime_);
              DARABONBA_PTR_TO_JSON(arrive_terminal, arriveTerminal_);
              DARABONBA_PTR_TO_JSON(cabin, cabin_);
              DARABONBA_PTR_TO_JSON(cabin_and_discount, cabinAndDiscount_);
              DARABONBA_PTR_TO_JSON(cabin_class, cabinClass_);
              DARABONBA_PTR_TO_JSON(cabin_class_name, cabinClassName_);
              DARABONBA_PTR_TO_JSON(code_share, codeShare_);
              DARABONBA_PTR_TO_JSON(deadline_text, deadlineText_);
              DARABONBA_PTR_TO_JSON(dep_airport_code, depAirportCode_);
              DARABONBA_PTR_TO_JSON(dep_airport_name, depAirportName_);
              DARABONBA_PTR_TO_JSON(dep_city_code, depCityCode_);
              DARABONBA_PTR_TO_JSON(dep_city_name, depCityName_);
              DARABONBA_PTR_TO_JSON(dep_date, depDate_);
              DARABONBA_PTR_TO_JSON(dep_time, depTime_);
              DARABONBA_PTR_TO_JSON(depart_terminal, departTerminal_);
              DARABONBA_PTR_TO_JSON(discount, discount_);
              DARABONBA_PTR_TO_JSON(flight_change, flightChange_);
              DARABONBA_PTR_TO_JSON(flight_no, flightNo_);
              DARABONBA_PTR_TO_JSON(flight_type, flightType_);
              DARABONBA_PTR_TO_JSON(fly_duration, flyDuration_);
              DARABONBA_PTR_TO_JSON(manufacturer, manufacturer_);
              DARABONBA_PTR_TO_JSON(meal_desc, mealDesc_);
              DARABONBA_PTR_TO_JSON(on_time_rate, onTimeRate_);
              DARABONBA_PTR_TO_JSON(operating_air_short_name, operatingAirShortName_);
              DARABONBA_PTR_TO_JSON(operating_airline_code, operatingAirlineCode_);
              DARABONBA_PTR_TO_JSON(operating_airline_english_name, operatingAirlineEnglishName_);
              DARABONBA_PTR_TO_JSON(operating_airline_icon_url, operatingAirlineIconUrl_);
              DARABONBA_PTR_TO_JSON(operating_airline_name, operatingAirlineName_);
              DARABONBA_PTR_TO_JSON(operating_airline_phone, operatingAirlinePhone_);
              DARABONBA_PTR_TO_JSON(operating_flight_no, operatingFlightNo_);
              DARABONBA_PTR_TO_JSON(plane_type, planeType_);
              DARABONBA_PTR_TO_JSON(raise_price, raisePrice_);
              DARABONBA_PTR_TO_JSON(segment_id, segmentId_);
              DARABONBA_PTR_TO_JSON(segment_index, segmentIndex_);
              DARABONBA_PTR_TO_JSON(segment_position, segmentPosition_);
              DARABONBA_PTR_TO_JSON(stop_airport, stopAirport_);
              DARABONBA_PTR_TO_JSON(stop_arr_time, stopArrTime_);
              DARABONBA_PTR_TO_JSON(stop_city, stopCity_);
              DARABONBA_PTR_TO_JSON(stop_city_name, stopCityName_);
              DARABONBA_PTR_TO_JSON(stop_dep_time, stopDepTime_);
              DARABONBA_PTR_TO_JSON(stop_quantity, stopQuantity_);
            };
            friend void from_json(const Darabonba::Json& j, SegmentList& obj) { 
              DARABONBA_PTR_FROM_JSON(air_line_code, airLineCode_);
              DARABONBA_PTR_FROM_JSON(air_line_english_name, airLineEnglishName_);
              DARABONBA_PTR_FROM_JSON(air_line_name, airLineName_);
              DARABONBA_PTR_FROM_JSON(air_line_phone, airLinePhone_);
              DARABONBA_PTR_FROM_JSON(airline_icon_url, airlineIconUrl_);
              DARABONBA_PTR_FROM_JSON(airline_short_name, airlineShortName_);
              DARABONBA_PTR_FROM_JSON(arr_airport_code, arrAirportCode_);
              DARABONBA_PTR_FROM_JSON(arr_airport_name, arrAirportName_);
              DARABONBA_PTR_FROM_JSON(arr_city_code, arrCityCode_);
              DARABONBA_PTR_FROM_JSON(arr_city_name, arrCityName_);
              DARABONBA_PTR_FROM_JSON(arr_time, arrTime_);
              DARABONBA_PTR_FROM_JSON(arrive_terminal, arriveTerminal_);
              DARABONBA_PTR_FROM_JSON(cabin, cabin_);
              DARABONBA_PTR_FROM_JSON(cabin_and_discount, cabinAndDiscount_);
              DARABONBA_PTR_FROM_JSON(cabin_class, cabinClass_);
              DARABONBA_PTR_FROM_JSON(cabin_class_name, cabinClassName_);
              DARABONBA_PTR_FROM_JSON(code_share, codeShare_);
              DARABONBA_PTR_FROM_JSON(deadline_text, deadlineText_);
              DARABONBA_PTR_FROM_JSON(dep_airport_code, depAirportCode_);
              DARABONBA_PTR_FROM_JSON(dep_airport_name, depAirportName_);
              DARABONBA_PTR_FROM_JSON(dep_city_code, depCityCode_);
              DARABONBA_PTR_FROM_JSON(dep_city_name, depCityName_);
              DARABONBA_PTR_FROM_JSON(dep_date, depDate_);
              DARABONBA_PTR_FROM_JSON(dep_time, depTime_);
              DARABONBA_PTR_FROM_JSON(depart_terminal, departTerminal_);
              DARABONBA_PTR_FROM_JSON(discount, discount_);
              DARABONBA_PTR_FROM_JSON(flight_change, flightChange_);
              DARABONBA_PTR_FROM_JSON(flight_no, flightNo_);
              DARABONBA_PTR_FROM_JSON(flight_type, flightType_);
              DARABONBA_PTR_FROM_JSON(fly_duration, flyDuration_);
              DARABONBA_PTR_FROM_JSON(manufacturer, manufacturer_);
              DARABONBA_PTR_FROM_JSON(meal_desc, mealDesc_);
              DARABONBA_PTR_FROM_JSON(on_time_rate, onTimeRate_);
              DARABONBA_PTR_FROM_JSON(operating_air_short_name, operatingAirShortName_);
              DARABONBA_PTR_FROM_JSON(operating_airline_code, operatingAirlineCode_);
              DARABONBA_PTR_FROM_JSON(operating_airline_english_name, operatingAirlineEnglishName_);
              DARABONBA_PTR_FROM_JSON(operating_airline_icon_url, operatingAirlineIconUrl_);
              DARABONBA_PTR_FROM_JSON(operating_airline_name, operatingAirlineName_);
              DARABONBA_PTR_FROM_JSON(operating_airline_phone, operatingAirlinePhone_);
              DARABONBA_PTR_FROM_JSON(operating_flight_no, operatingFlightNo_);
              DARABONBA_PTR_FROM_JSON(plane_type, planeType_);
              DARABONBA_PTR_FROM_JSON(raise_price, raisePrice_);
              DARABONBA_PTR_FROM_JSON(segment_id, segmentId_);
              DARABONBA_PTR_FROM_JSON(segment_index, segmentIndex_);
              DARABONBA_PTR_FROM_JSON(segment_position, segmentPosition_);
              DARABONBA_PTR_FROM_JSON(stop_airport, stopAirport_);
              DARABONBA_PTR_FROM_JSON(stop_arr_time, stopArrTime_);
              DARABONBA_PTR_FROM_JSON(stop_city, stopCity_);
              DARABONBA_PTR_FROM_JSON(stop_city_name, stopCityName_);
              DARABONBA_PTR_FROM_JSON(stop_dep_time, stopDepTime_);
              DARABONBA_PTR_FROM_JSON(stop_quantity, stopQuantity_);
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
            class SegmentPosition : public Darabonba::Model {
            public:
              friend void to_json(Darabonba::Json& j, const SegmentPosition& obj) { 
                DARABONBA_PTR_TO_JSON(journey_index, journeyIndex_);
                DARABONBA_PTR_TO_JSON(segment_index, segmentIndex_);
              };
              friend void from_json(const Darabonba::Json& j, SegmentPosition& obj) { 
                DARABONBA_PTR_FROM_JSON(journey_index, journeyIndex_);
                DARABONBA_PTR_FROM_JSON(segment_index, segmentIndex_);
              };
              SegmentPosition() = default ;
              SegmentPosition(const SegmentPosition &) = default ;
              SegmentPosition(SegmentPosition &&) = default ;
              SegmentPosition(const Darabonba::Json & obj) { from_json(obj, *this); };
              virtual ~SegmentPosition() = default ;
              SegmentPosition& operator=(const SegmentPosition &) = default ;
              SegmentPosition& operator=(SegmentPosition &&) = default ;
              virtual void validate() const override {
              };
              virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
              virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
              virtual bool empty() const override { return this->journeyIndex_ == nullptr
        && this->segmentIndex_ == nullptr; };
              // journeyIndex Field Functions 
              bool hasJourneyIndex() const { return this->journeyIndex_ != nullptr;};
              void deleteJourneyIndex() { this->journeyIndex_ = nullptr;};
              inline int32_t getJourneyIndex() const { DARABONBA_PTR_GET_DEFAULT(journeyIndex_, 0) };
              inline SegmentPosition& setJourneyIndex(int32_t journeyIndex) { DARABONBA_PTR_SET_VALUE(journeyIndex_, journeyIndex) };


              // segmentIndex Field Functions 
              bool hasSegmentIndex() const { return this->segmentIndex_ != nullptr;};
              void deleteSegmentIndex() { this->segmentIndex_ = nullptr;};
              inline int32_t getSegmentIndex() const { DARABONBA_PTR_GET_DEFAULT(segmentIndex_, 0) };
              inline SegmentPosition& setSegmentIndex(int32_t segmentIndex) { DARABONBA_PTR_SET_VALUE(segmentIndex_, segmentIndex) };


            protected:
              shared_ptr<int32_t> journeyIndex_ {};
              shared_ptr<int32_t> segmentIndex_ {};
            };

            class FlightChange : public Darabonba::Model {
            public:
              friend void to_json(Darabonba::Json& j, const FlightChange& obj) { 
                DARABONBA_PTR_TO_JSON(change_desc, changeDesc_);
                DARABONBA_PTR_TO_JSON(change_status, changeStatus_);
                DARABONBA_PTR_TO_JSON(change_status_code, changeStatusCode_);
                DARABONBA_ANY_TO_JSON(new_segment, newSegment_);
                DARABONBA_PTR_TO_JSON(passenger_names, passengerNames_);
              };
              friend void from_json(const Darabonba::Json& j, FlightChange& obj) { 
                DARABONBA_PTR_FROM_JSON(change_desc, changeDesc_);
                DARABONBA_PTR_FROM_JSON(change_status, changeStatus_);
                DARABONBA_PTR_FROM_JSON(change_status_code, changeStatusCode_);
                DARABONBA_ANY_FROM_JSON(new_segment, newSegment_);
                DARABONBA_PTR_FROM_JSON(passenger_names, passengerNames_);
              };
              FlightChange() = default ;
              FlightChange(const FlightChange &) = default ;
              FlightChange(FlightChange &&) = default ;
              FlightChange(const Darabonba::Json & obj) { from_json(obj, *this); };
              virtual ~FlightChange() = default ;
              FlightChange& operator=(const FlightChange &) = default ;
              FlightChange& operator=(FlightChange &&) = default ;
              virtual void validate() const override {
              };
              virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
              virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
              virtual bool empty() const override { return this->changeDesc_ == nullptr
        && this->changeStatus_ == nullptr && this->changeStatusCode_ == nullptr && this->newSegment_ == nullptr && this->passengerNames_ == nullptr; };
              // changeDesc Field Functions 
              bool hasChangeDesc() const { return this->changeDesc_ != nullptr;};
              void deleteChangeDesc() { this->changeDesc_ = nullptr;};
              inline string getChangeDesc() const { DARABONBA_PTR_GET_DEFAULT(changeDesc_, "") };
              inline FlightChange& setChangeDesc(string changeDesc) { DARABONBA_PTR_SET_VALUE(changeDesc_, changeDesc) };


              // changeStatus Field Functions 
              bool hasChangeStatus() const { return this->changeStatus_ != nullptr;};
              void deleteChangeStatus() { this->changeStatus_ = nullptr;};
              inline string getChangeStatus() const { DARABONBA_PTR_GET_DEFAULT(changeStatus_, "") };
              inline FlightChange& setChangeStatus(string changeStatus) { DARABONBA_PTR_SET_VALUE(changeStatus_, changeStatus) };


              // changeStatusCode Field Functions 
              bool hasChangeStatusCode() const { return this->changeStatusCode_ != nullptr;};
              void deleteChangeStatusCode() { this->changeStatusCode_ = nullptr;};
              inline string getChangeStatusCode() const { DARABONBA_PTR_GET_DEFAULT(changeStatusCode_, "") };
              inline FlightChange& setChangeStatusCode(string changeStatusCode) { DARABONBA_PTR_SET_VALUE(changeStatusCode_, changeStatusCode) };


              // newSegment Field Functions 
              bool hasNewSegment() const { return this->newSegment_ != nullptr;};
              void deleteNewSegment() { this->newSegment_ = nullptr;};
              inline               const Darabonba::Json & getNewSegment() const { DARABONBA_GET(newSegment_) };
              Darabonba::Json & getNewSegment() { DARABONBA_GET(newSegment_) };
              inline FlightChange& setNewSegment(const Darabonba::Json & newSegment) { DARABONBA_SET_VALUE(newSegment_, newSegment) };
              inline FlightChange& setNewSegment(Darabonba::Json && newSegment) { DARABONBA_SET_RVALUE(newSegment_, newSegment) };


              // passengerNames Field Functions 
              bool hasPassengerNames() const { return this->passengerNames_ != nullptr;};
              void deletePassengerNames() { this->passengerNames_ = nullptr;};
              inline const vector<string> & getPassengerNames() const { DARABONBA_PTR_GET_CONST(passengerNames_, vector<string>) };
              inline vector<string> getPassengerNames() { DARABONBA_PTR_GET(passengerNames_, vector<string>) };
              inline FlightChange& setPassengerNames(const vector<string> & passengerNames) { DARABONBA_PTR_SET_VALUE(passengerNames_, passengerNames) };
              inline FlightChange& setPassengerNames(vector<string> && passengerNames) { DARABONBA_PTR_SET_RVALUE(passengerNames_, passengerNames) };


            protected:
              shared_ptr<string> changeDesc_ {};
              shared_ptr<string> changeStatus_ {};
              shared_ptr<string> changeStatusCode_ {};
              Darabonba::Json newSegment_ {};
              shared_ptr<vector<string>> passengerNames_ {};
            };

            virtual bool empty() const override { return this->airLineCode_ == nullptr
        && this->airLineEnglishName_ == nullptr && this->airLineName_ == nullptr && this->airLinePhone_ == nullptr && this->airlineIconUrl_ == nullptr && this->airlineShortName_ == nullptr
        && this->arrAirportCode_ == nullptr && this->arrAirportName_ == nullptr && this->arrCityCode_ == nullptr && this->arrCityName_ == nullptr && this->arrTime_ == nullptr
        && this->arriveTerminal_ == nullptr && this->cabin_ == nullptr && this->cabinAndDiscount_ == nullptr && this->cabinClass_ == nullptr && this->cabinClassName_ == nullptr
        && this->codeShare_ == nullptr && this->deadlineText_ == nullptr && this->depAirportCode_ == nullptr && this->depAirportName_ == nullptr && this->depCityCode_ == nullptr
        && this->depCityName_ == nullptr && this->depDate_ == nullptr && this->depTime_ == nullptr && this->departTerminal_ == nullptr && this->discount_ == nullptr
        && this->flightChange_ == nullptr && this->flightNo_ == nullptr && this->flightType_ == nullptr && this->flyDuration_ == nullptr && this->manufacturer_ == nullptr
        && this->mealDesc_ == nullptr && this->onTimeRate_ == nullptr && this->operatingAirShortName_ == nullptr && this->operatingAirlineCode_ == nullptr && this->operatingAirlineEnglishName_ == nullptr
        && this->operatingAirlineIconUrl_ == nullptr && this->operatingAirlineName_ == nullptr && this->operatingAirlinePhone_ == nullptr && this->operatingFlightNo_ == nullptr && this->planeType_ == nullptr
        && this->raisePrice_ == nullptr && this->segmentId_ == nullptr && this->segmentIndex_ == nullptr && this->segmentPosition_ == nullptr && this->stopAirport_ == nullptr
        && this->stopArrTime_ == nullptr && this->stopCity_ == nullptr && this->stopCityName_ == nullptr && this->stopDepTime_ == nullptr && this->stopQuantity_ == nullptr; };
            // airLineCode Field Functions 
            bool hasAirLineCode() const { return this->airLineCode_ != nullptr;};
            void deleteAirLineCode() { this->airLineCode_ = nullptr;};
            inline string getAirLineCode() const { DARABONBA_PTR_GET_DEFAULT(airLineCode_, "") };
            inline SegmentList& setAirLineCode(string airLineCode) { DARABONBA_PTR_SET_VALUE(airLineCode_, airLineCode) };


            // airLineEnglishName Field Functions 
            bool hasAirLineEnglishName() const { return this->airLineEnglishName_ != nullptr;};
            void deleteAirLineEnglishName() { this->airLineEnglishName_ = nullptr;};
            inline string getAirLineEnglishName() const { DARABONBA_PTR_GET_DEFAULT(airLineEnglishName_, "") };
            inline SegmentList& setAirLineEnglishName(string airLineEnglishName) { DARABONBA_PTR_SET_VALUE(airLineEnglishName_, airLineEnglishName) };


            // airLineName Field Functions 
            bool hasAirLineName() const { return this->airLineName_ != nullptr;};
            void deleteAirLineName() { this->airLineName_ = nullptr;};
            inline string getAirLineName() const { DARABONBA_PTR_GET_DEFAULT(airLineName_, "") };
            inline SegmentList& setAirLineName(string airLineName) { DARABONBA_PTR_SET_VALUE(airLineName_, airLineName) };


            // airLinePhone Field Functions 
            bool hasAirLinePhone() const { return this->airLinePhone_ != nullptr;};
            void deleteAirLinePhone() { this->airLinePhone_ = nullptr;};
            inline string getAirLinePhone() const { DARABONBA_PTR_GET_DEFAULT(airLinePhone_, "") };
            inline SegmentList& setAirLinePhone(string airLinePhone) { DARABONBA_PTR_SET_VALUE(airLinePhone_, airLinePhone) };


            // airlineIconUrl Field Functions 
            bool hasAirlineIconUrl() const { return this->airlineIconUrl_ != nullptr;};
            void deleteAirlineIconUrl() { this->airlineIconUrl_ = nullptr;};
            inline string getAirlineIconUrl() const { DARABONBA_PTR_GET_DEFAULT(airlineIconUrl_, "") };
            inline SegmentList& setAirlineIconUrl(string airlineIconUrl) { DARABONBA_PTR_SET_VALUE(airlineIconUrl_, airlineIconUrl) };


            // airlineShortName Field Functions 
            bool hasAirlineShortName() const { return this->airlineShortName_ != nullptr;};
            void deleteAirlineShortName() { this->airlineShortName_ = nullptr;};
            inline string getAirlineShortName() const { DARABONBA_PTR_GET_DEFAULT(airlineShortName_, "") };
            inline SegmentList& setAirlineShortName(string airlineShortName) { DARABONBA_PTR_SET_VALUE(airlineShortName_, airlineShortName) };


            // arrAirportCode Field Functions 
            bool hasArrAirportCode() const { return this->arrAirportCode_ != nullptr;};
            void deleteArrAirportCode() { this->arrAirportCode_ = nullptr;};
            inline string getArrAirportCode() const { DARABONBA_PTR_GET_DEFAULT(arrAirportCode_, "") };
            inline SegmentList& setArrAirportCode(string arrAirportCode) { DARABONBA_PTR_SET_VALUE(arrAirportCode_, arrAirportCode) };


            // arrAirportName Field Functions 
            bool hasArrAirportName() const { return this->arrAirportName_ != nullptr;};
            void deleteArrAirportName() { this->arrAirportName_ = nullptr;};
            inline string getArrAirportName() const { DARABONBA_PTR_GET_DEFAULT(arrAirportName_, "") };
            inline SegmentList& setArrAirportName(string arrAirportName) { DARABONBA_PTR_SET_VALUE(arrAirportName_, arrAirportName) };


            // arrCityCode Field Functions 
            bool hasArrCityCode() const { return this->arrCityCode_ != nullptr;};
            void deleteArrCityCode() { this->arrCityCode_ = nullptr;};
            inline string getArrCityCode() const { DARABONBA_PTR_GET_DEFAULT(arrCityCode_, "") };
            inline SegmentList& setArrCityCode(string arrCityCode) { DARABONBA_PTR_SET_VALUE(arrCityCode_, arrCityCode) };


            // arrCityName Field Functions 
            bool hasArrCityName() const { return this->arrCityName_ != nullptr;};
            void deleteArrCityName() { this->arrCityName_ = nullptr;};
            inline string getArrCityName() const { DARABONBA_PTR_GET_DEFAULT(arrCityName_, "") };
            inline SegmentList& setArrCityName(string arrCityName) { DARABONBA_PTR_SET_VALUE(arrCityName_, arrCityName) };


            // arrTime Field Functions 
            bool hasArrTime() const { return this->arrTime_ != nullptr;};
            void deleteArrTime() { this->arrTime_ = nullptr;};
            inline string getArrTime() const { DARABONBA_PTR_GET_DEFAULT(arrTime_, "") };
            inline SegmentList& setArrTime(string arrTime) { DARABONBA_PTR_SET_VALUE(arrTime_, arrTime) };


            // arriveTerminal Field Functions 
            bool hasArriveTerminal() const { return this->arriveTerminal_ != nullptr;};
            void deleteArriveTerminal() { this->arriveTerminal_ = nullptr;};
            inline string getArriveTerminal() const { DARABONBA_PTR_GET_DEFAULT(arriveTerminal_, "") };
            inline SegmentList& setArriveTerminal(string arriveTerminal) { DARABONBA_PTR_SET_VALUE(arriveTerminal_, arriveTerminal) };


            // cabin Field Functions 
            bool hasCabin() const { return this->cabin_ != nullptr;};
            void deleteCabin() { this->cabin_ = nullptr;};
            inline string getCabin() const { DARABONBA_PTR_GET_DEFAULT(cabin_, "") };
            inline SegmentList& setCabin(string cabin) { DARABONBA_PTR_SET_VALUE(cabin_, cabin) };


            // cabinAndDiscount Field Functions 
            bool hasCabinAndDiscount() const { return this->cabinAndDiscount_ != nullptr;};
            void deleteCabinAndDiscount() { this->cabinAndDiscount_ = nullptr;};
            inline string getCabinAndDiscount() const { DARABONBA_PTR_GET_DEFAULT(cabinAndDiscount_, "") };
            inline SegmentList& setCabinAndDiscount(string cabinAndDiscount) { DARABONBA_PTR_SET_VALUE(cabinAndDiscount_, cabinAndDiscount) };


            // cabinClass Field Functions 
            bool hasCabinClass() const { return this->cabinClass_ != nullptr;};
            void deleteCabinClass() { this->cabinClass_ = nullptr;};
            inline string getCabinClass() const { DARABONBA_PTR_GET_DEFAULT(cabinClass_, "") };
            inline SegmentList& setCabinClass(string cabinClass) { DARABONBA_PTR_SET_VALUE(cabinClass_, cabinClass) };


            // cabinClassName Field Functions 
            bool hasCabinClassName() const { return this->cabinClassName_ != nullptr;};
            void deleteCabinClassName() { this->cabinClassName_ = nullptr;};
            inline string getCabinClassName() const { DARABONBA_PTR_GET_DEFAULT(cabinClassName_, "") };
            inline SegmentList& setCabinClassName(string cabinClassName) { DARABONBA_PTR_SET_VALUE(cabinClassName_, cabinClassName) };


            // codeShare Field Functions 
            bool hasCodeShare() const { return this->codeShare_ != nullptr;};
            void deleteCodeShare() { this->codeShare_ = nullptr;};
            inline bool getCodeShare() const { DARABONBA_PTR_GET_DEFAULT(codeShare_, false) };
            inline SegmentList& setCodeShare(bool codeShare) { DARABONBA_PTR_SET_VALUE(codeShare_, codeShare) };


            // deadlineText Field Functions 
            bool hasDeadlineText() const { return this->deadlineText_ != nullptr;};
            void deleteDeadlineText() { this->deadlineText_ = nullptr;};
            inline string getDeadlineText() const { DARABONBA_PTR_GET_DEFAULT(deadlineText_, "") };
            inline SegmentList& setDeadlineText(string deadlineText) { DARABONBA_PTR_SET_VALUE(deadlineText_, deadlineText) };


            // depAirportCode Field Functions 
            bool hasDepAirportCode() const { return this->depAirportCode_ != nullptr;};
            void deleteDepAirportCode() { this->depAirportCode_ = nullptr;};
            inline string getDepAirportCode() const { DARABONBA_PTR_GET_DEFAULT(depAirportCode_, "") };
            inline SegmentList& setDepAirportCode(string depAirportCode) { DARABONBA_PTR_SET_VALUE(depAirportCode_, depAirportCode) };


            // depAirportName Field Functions 
            bool hasDepAirportName() const { return this->depAirportName_ != nullptr;};
            void deleteDepAirportName() { this->depAirportName_ = nullptr;};
            inline string getDepAirportName() const { DARABONBA_PTR_GET_DEFAULT(depAirportName_, "") };
            inline SegmentList& setDepAirportName(string depAirportName) { DARABONBA_PTR_SET_VALUE(depAirportName_, depAirportName) };


            // depCityCode Field Functions 
            bool hasDepCityCode() const { return this->depCityCode_ != nullptr;};
            void deleteDepCityCode() { this->depCityCode_ = nullptr;};
            inline string getDepCityCode() const { DARABONBA_PTR_GET_DEFAULT(depCityCode_, "") };
            inline SegmentList& setDepCityCode(string depCityCode) { DARABONBA_PTR_SET_VALUE(depCityCode_, depCityCode) };


            // depCityName Field Functions 
            bool hasDepCityName() const { return this->depCityName_ != nullptr;};
            void deleteDepCityName() { this->depCityName_ = nullptr;};
            inline string getDepCityName() const { DARABONBA_PTR_GET_DEFAULT(depCityName_, "") };
            inline SegmentList& setDepCityName(string depCityName) { DARABONBA_PTR_SET_VALUE(depCityName_, depCityName) };


            // depDate Field Functions 
            bool hasDepDate() const { return this->depDate_ != nullptr;};
            void deleteDepDate() { this->depDate_ = nullptr;};
            inline string getDepDate() const { DARABONBA_PTR_GET_DEFAULT(depDate_, "") };
            inline SegmentList& setDepDate(string depDate) { DARABONBA_PTR_SET_VALUE(depDate_, depDate) };


            // depTime Field Functions 
            bool hasDepTime() const { return this->depTime_ != nullptr;};
            void deleteDepTime() { this->depTime_ = nullptr;};
            inline string getDepTime() const { DARABONBA_PTR_GET_DEFAULT(depTime_, "") };
            inline SegmentList& setDepTime(string depTime) { DARABONBA_PTR_SET_VALUE(depTime_, depTime) };


            // departTerminal Field Functions 
            bool hasDepartTerminal() const { return this->departTerminal_ != nullptr;};
            void deleteDepartTerminal() { this->departTerminal_ = nullptr;};
            inline string getDepartTerminal() const { DARABONBA_PTR_GET_DEFAULT(departTerminal_, "") };
            inline SegmentList& setDepartTerminal(string departTerminal) { DARABONBA_PTR_SET_VALUE(departTerminal_, departTerminal) };


            // discount Field Functions 
            bool hasDiscount() const { return this->discount_ != nullptr;};
            void deleteDiscount() { this->discount_ = nullptr;};
            inline double getDiscount() const { DARABONBA_PTR_GET_DEFAULT(discount_, 0.0) };
            inline SegmentList& setDiscount(double discount) { DARABONBA_PTR_SET_VALUE(discount_, discount) };


            // flightChange Field Functions 
            bool hasFlightChange() const { return this->flightChange_ != nullptr;};
            void deleteFlightChange() { this->flightChange_ = nullptr;};
            inline const SegmentList::FlightChange & getFlightChange() const { DARABONBA_PTR_GET_CONST(flightChange_, SegmentList::FlightChange) };
            inline SegmentList::FlightChange getFlightChange() { DARABONBA_PTR_GET(flightChange_, SegmentList::FlightChange) };
            inline SegmentList& setFlightChange(const SegmentList::FlightChange & flightChange) { DARABONBA_PTR_SET_VALUE(flightChange_, flightChange) };
            inline SegmentList& setFlightChange(SegmentList::FlightChange && flightChange) { DARABONBA_PTR_SET_RVALUE(flightChange_, flightChange) };


            // flightNo Field Functions 
            bool hasFlightNo() const { return this->flightNo_ != nullptr;};
            void deleteFlightNo() { this->flightNo_ = nullptr;};
            inline string getFlightNo() const { DARABONBA_PTR_GET_DEFAULT(flightNo_, "") };
            inline SegmentList& setFlightNo(string flightNo) { DARABONBA_PTR_SET_VALUE(flightNo_, flightNo) };


            // flightType Field Functions 
            bool hasFlightType() const { return this->flightType_ != nullptr;};
            void deleteFlightType() { this->flightType_ = nullptr;};
            inline string getFlightType() const { DARABONBA_PTR_GET_DEFAULT(flightType_, "") };
            inline SegmentList& setFlightType(string flightType) { DARABONBA_PTR_SET_VALUE(flightType_, flightType) };


            // flyDuration Field Functions 
            bool hasFlyDuration() const { return this->flyDuration_ != nullptr;};
            void deleteFlyDuration() { this->flyDuration_ = nullptr;};
            inline int32_t getFlyDuration() const { DARABONBA_PTR_GET_DEFAULT(flyDuration_, 0) };
            inline SegmentList& setFlyDuration(int32_t flyDuration) { DARABONBA_PTR_SET_VALUE(flyDuration_, flyDuration) };


            // manufacturer Field Functions 
            bool hasManufacturer() const { return this->manufacturer_ != nullptr;};
            void deleteManufacturer() { this->manufacturer_ = nullptr;};
            inline string getManufacturer() const { DARABONBA_PTR_GET_DEFAULT(manufacturer_, "") };
            inline SegmentList& setManufacturer(string manufacturer) { DARABONBA_PTR_SET_VALUE(manufacturer_, manufacturer) };


            // mealDesc Field Functions 
            bool hasMealDesc() const { return this->mealDesc_ != nullptr;};
            void deleteMealDesc() { this->mealDesc_ = nullptr;};
            inline string getMealDesc() const { DARABONBA_PTR_GET_DEFAULT(mealDesc_, "") };
            inline SegmentList& setMealDesc(string mealDesc) { DARABONBA_PTR_SET_VALUE(mealDesc_, mealDesc) };


            // onTimeRate Field Functions 
            bool hasOnTimeRate() const { return this->onTimeRate_ != nullptr;};
            void deleteOnTimeRate() { this->onTimeRate_ = nullptr;};
            inline string getOnTimeRate() const { DARABONBA_PTR_GET_DEFAULT(onTimeRate_, "") };
            inline SegmentList& setOnTimeRate(string onTimeRate) { DARABONBA_PTR_SET_VALUE(onTimeRate_, onTimeRate) };


            // operatingAirShortName Field Functions 
            bool hasOperatingAirShortName() const { return this->operatingAirShortName_ != nullptr;};
            void deleteOperatingAirShortName() { this->operatingAirShortName_ = nullptr;};
            inline string getOperatingAirShortName() const { DARABONBA_PTR_GET_DEFAULT(operatingAirShortName_, "") };
            inline SegmentList& setOperatingAirShortName(string operatingAirShortName) { DARABONBA_PTR_SET_VALUE(operatingAirShortName_, operatingAirShortName) };


            // operatingAirlineCode Field Functions 
            bool hasOperatingAirlineCode() const { return this->operatingAirlineCode_ != nullptr;};
            void deleteOperatingAirlineCode() { this->operatingAirlineCode_ = nullptr;};
            inline string getOperatingAirlineCode() const { DARABONBA_PTR_GET_DEFAULT(operatingAirlineCode_, "") };
            inline SegmentList& setOperatingAirlineCode(string operatingAirlineCode) { DARABONBA_PTR_SET_VALUE(operatingAirlineCode_, operatingAirlineCode) };


            // operatingAirlineEnglishName Field Functions 
            bool hasOperatingAirlineEnglishName() const { return this->operatingAirlineEnglishName_ != nullptr;};
            void deleteOperatingAirlineEnglishName() { this->operatingAirlineEnglishName_ = nullptr;};
            inline string getOperatingAirlineEnglishName() const { DARABONBA_PTR_GET_DEFAULT(operatingAirlineEnglishName_, "") };
            inline SegmentList& setOperatingAirlineEnglishName(string operatingAirlineEnglishName) { DARABONBA_PTR_SET_VALUE(operatingAirlineEnglishName_, operatingAirlineEnglishName) };


            // operatingAirlineIconUrl Field Functions 
            bool hasOperatingAirlineIconUrl() const { return this->operatingAirlineIconUrl_ != nullptr;};
            void deleteOperatingAirlineIconUrl() { this->operatingAirlineIconUrl_ = nullptr;};
            inline string getOperatingAirlineIconUrl() const { DARABONBA_PTR_GET_DEFAULT(operatingAirlineIconUrl_, "") };
            inline SegmentList& setOperatingAirlineIconUrl(string operatingAirlineIconUrl) { DARABONBA_PTR_SET_VALUE(operatingAirlineIconUrl_, operatingAirlineIconUrl) };


            // operatingAirlineName Field Functions 
            bool hasOperatingAirlineName() const { return this->operatingAirlineName_ != nullptr;};
            void deleteOperatingAirlineName() { this->operatingAirlineName_ = nullptr;};
            inline string getOperatingAirlineName() const { DARABONBA_PTR_GET_DEFAULT(operatingAirlineName_, "") };
            inline SegmentList& setOperatingAirlineName(string operatingAirlineName) { DARABONBA_PTR_SET_VALUE(operatingAirlineName_, operatingAirlineName) };


            // operatingAirlinePhone Field Functions 
            bool hasOperatingAirlinePhone() const { return this->operatingAirlinePhone_ != nullptr;};
            void deleteOperatingAirlinePhone() { this->operatingAirlinePhone_ = nullptr;};
            inline string getOperatingAirlinePhone() const { DARABONBA_PTR_GET_DEFAULT(operatingAirlinePhone_, "") };
            inline SegmentList& setOperatingAirlinePhone(string operatingAirlinePhone) { DARABONBA_PTR_SET_VALUE(operatingAirlinePhone_, operatingAirlinePhone) };


            // operatingFlightNo Field Functions 
            bool hasOperatingFlightNo() const { return this->operatingFlightNo_ != nullptr;};
            void deleteOperatingFlightNo() { this->operatingFlightNo_ = nullptr;};
            inline string getOperatingFlightNo() const { DARABONBA_PTR_GET_DEFAULT(operatingFlightNo_, "") };
            inline SegmentList& setOperatingFlightNo(string operatingFlightNo) { DARABONBA_PTR_SET_VALUE(operatingFlightNo_, operatingFlightNo) };


            // planeType Field Functions 
            bool hasPlaneType() const { return this->planeType_ != nullptr;};
            void deletePlaneType() { this->planeType_ = nullptr;};
            inline string getPlaneType() const { DARABONBA_PTR_GET_DEFAULT(planeType_, "") };
            inline SegmentList& setPlaneType(string planeType) { DARABONBA_PTR_SET_VALUE(planeType_, planeType) };


            // raisePrice Field Functions 
            bool hasRaisePrice() const { return this->raisePrice_ != nullptr;};
            void deleteRaisePrice() { this->raisePrice_ = nullptr;};
            inline int64_t getRaisePrice() const { DARABONBA_PTR_GET_DEFAULT(raisePrice_, 0L) };
            inline SegmentList& setRaisePrice(int64_t raisePrice) { DARABONBA_PTR_SET_VALUE(raisePrice_, raisePrice) };


            // segmentId Field Functions 
            bool hasSegmentId() const { return this->segmentId_ != nullptr;};
            void deleteSegmentId() { this->segmentId_ = nullptr;};
            inline string getSegmentId() const { DARABONBA_PTR_GET_DEFAULT(segmentId_, "") };
            inline SegmentList& setSegmentId(string segmentId) { DARABONBA_PTR_SET_VALUE(segmentId_, segmentId) };


            // segmentIndex Field Functions 
            bool hasSegmentIndex() const { return this->segmentIndex_ != nullptr;};
            void deleteSegmentIndex() { this->segmentIndex_ = nullptr;};
            inline int32_t getSegmentIndex() const { DARABONBA_PTR_GET_DEFAULT(segmentIndex_, 0) };
            inline SegmentList& setSegmentIndex(int32_t segmentIndex) { DARABONBA_PTR_SET_VALUE(segmentIndex_, segmentIndex) };


            // segmentPosition Field Functions 
            bool hasSegmentPosition() const { return this->segmentPosition_ != nullptr;};
            void deleteSegmentPosition() { this->segmentPosition_ = nullptr;};
            inline const SegmentList::SegmentPosition & getSegmentPosition() const { DARABONBA_PTR_GET_CONST(segmentPosition_, SegmentList::SegmentPosition) };
            inline SegmentList::SegmentPosition getSegmentPosition() { DARABONBA_PTR_GET(segmentPosition_, SegmentList::SegmentPosition) };
            inline SegmentList& setSegmentPosition(const SegmentList::SegmentPosition & segmentPosition) { DARABONBA_PTR_SET_VALUE(segmentPosition_, segmentPosition) };
            inline SegmentList& setSegmentPosition(SegmentList::SegmentPosition && segmentPosition) { DARABONBA_PTR_SET_RVALUE(segmentPosition_, segmentPosition) };


            // stopAirport Field Functions 
            bool hasStopAirport() const { return this->stopAirport_ != nullptr;};
            void deleteStopAirport() { this->stopAirport_ = nullptr;};
            inline string getStopAirport() const { DARABONBA_PTR_GET_DEFAULT(stopAirport_, "") };
            inline SegmentList& setStopAirport(string stopAirport) { DARABONBA_PTR_SET_VALUE(stopAirport_, stopAirport) };


            // stopArrTime Field Functions 
            bool hasStopArrTime() const { return this->stopArrTime_ != nullptr;};
            void deleteStopArrTime() { this->stopArrTime_ = nullptr;};
            inline string getStopArrTime() const { DARABONBA_PTR_GET_DEFAULT(stopArrTime_, "") };
            inline SegmentList& setStopArrTime(string stopArrTime) { DARABONBA_PTR_SET_VALUE(stopArrTime_, stopArrTime) };


            // stopCity Field Functions 
            bool hasStopCity() const { return this->stopCity_ != nullptr;};
            void deleteStopCity() { this->stopCity_ = nullptr;};
            inline string getStopCity() const { DARABONBA_PTR_GET_DEFAULT(stopCity_, "") };
            inline SegmentList& setStopCity(string stopCity) { DARABONBA_PTR_SET_VALUE(stopCity_, stopCity) };


            // stopCityName Field Functions 
            bool hasStopCityName() const { return this->stopCityName_ != nullptr;};
            void deleteStopCityName() { this->stopCityName_ = nullptr;};
            inline string getStopCityName() const { DARABONBA_PTR_GET_DEFAULT(stopCityName_, "") };
            inline SegmentList& setStopCityName(string stopCityName) { DARABONBA_PTR_SET_VALUE(stopCityName_, stopCityName) };


            // stopDepTime Field Functions 
            bool hasStopDepTime() const { return this->stopDepTime_ != nullptr;};
            void deleteStopDepTime() { this->stopDepTime_ = nullptr;};
            inline string getStopDepTime() const { DARABONBA_PTR_GET_DEFAULT(stopDepTime_, "") };
            inline SegmentList& setStopDepTime(string stopDepTime) { DARABONBA_PTR_SET_VALUE(stopDepTime_, stopDepTime) };


            // stopQuantity Field Functions 
            bool hasStopQuantity() const { return this->stopQuantity_ != nullptr;};
            void deleteStopQuantity() { this->stopQuantity_ = nullptr;};
            inline int32_t getStopQuantity() const { DARABONBA_PTR_GET_DEFAULT(stopQuantity_, 0) };
            inline SegmentList& setStopQuantity(int32_t stopQuantity) { DARABONBA_PTR_SET_VALUE(stopQuantity_, stopQuantity) };


          protected:
            shared_ptr<string> airLineCode_ {};
            shared_ptr<string> airLineEnglishName_ {};
            shared_ptr<string> airLineName_ {};
            shared_ptr<string> airLinePhone_ {};
            shared_ptr<string> airlineIconUrl_ {};
            shared_ptr<string> airlineShortName_ {};
            shared_ptr<string> arrAirportCode_ {};
            shared_ptr<string> arrAirportName_ {};
            shared_ptr<string> arrCityCode_ {};
            shared_ptr<string> arrCityName_ {};
            shared_ptr<string> arrTime_ {};
            shared_ptr<string> arriveTerminal_ {};
            // cabin
            shared_ptr<string> cabin_ {};
            shared_ptr<string> cabinAndDiscount_ {};
            // cabin_class
            shared_ptr<string> cabinClass_ {};
            // cabin_class_name
            shared_ptr<string> cabinClassName_ {};
            shared_ptr<bool> codeShare_ {};
            shared_ptr<string> deadlineText_ {};
            shared_ptr<string> depAirportCode_ {};
            shared_ptr<string> depAirportName_ {};
            shared_ptr<string> depCityCode_ {};
            shared_ptr<string> depCityName_ {};
            shared_ptr<string> depDate_ {};
            shared_ptr<string> depTime_ {};
            shared_ptr<string> departTerminal_ {};
            shared_ptr<double> discount_ {};
            shared_ptr<SegmentList::FlightChange> flightChange_ {};
            shared_ptr<string> flightNo_ {};
            shared_ptr<string> flightType_ {};
            shared_ptr<int32_t> flyDuration_ {};
            shared_ptr<string> manufacturer_ {};
            shared_ptr<string> mealDesc_ {};
            shared_ptr<string> onTimeRate_ {};
            shared_ptr<string> operatingAirShortName_ {};
            shared_ptr<string> operatingAirlineCode_ {};
            shared_ptr<string> operatingAirlineEnglishName_ {};
            shared_ptr<string> operatingAirlineIconUrl_ {};
            shared_ptr<string> operatingAirlineName_ {};
            shared_ptr<string> operatingAirlinePhone_ {};
            shared_ptr<string> operatingFlightNo_ {};
            shared_ptr<string> planeType_ {};
            shared_ptr<int64_t> raisePrice_ {};
            shared_ptr<string> segmentId_ {};
            // segmentIndex
            shared_ptr<int32_t> segmentIndex_ {};
            shared_ptr<SegmentList::SegmentPosition> segmentPosition_ {};
            shared_ptr<string> stopAirport_ {};
            shared_ptr<string> stopArrTime_ {};
            shared_ptr<string> stopCity_ {};
            shared_ptr<string> stopCityName_ {};
            shared_ptr<string> stopDepTime_ {};
            shared_ptr<int32_t> stopQuantity_ {};
          };

          virtual bool empty() const override { return this->allFlyDuration_ == nullptr
        && this->allFlyDurationAfterChange_ == nullptr && this->applyId_ == nullptr && this->arrCityCode_ == nullptr && this->arrCityName_ == nullptr && this->arrTime_ == nullptr
        && this->baggageDetails_ == nullptr && this->depCityCode_ == nullptr && this->depCityName_ == nullptr && this->depTime_ == nullptr && this->flightStatus_ == nullptr
        && this->iataNo_ == nullptr && this->isReshopJourney_ == nullptr && this->isTransfer_ == nullptr && this->journeyTitle_ == nullptr && this->refundChangeDetails_ == nullptr
        && this->segmentList_ == nullptr; };
          // allFlyDuration Field Functions 
          bool hasAllFlyDuration() const { return this->allFlyDuration_ != nullptr;};
          void deleteAllFlyDuration() { this->allFlyDuration_ = nullptr;};
          inline int64_t getAllFlyDuration() const { DARABONBA_PTR_GET_DEFAULT(allFlyDuration_, 0L) };
          inline Journeys& setAllFlyDuration(int64_t allFlyDuration) { DARABONBA_PTR_SET_VALUE(allFlyDuration_, allFlyDuration) };


          // allFlyDurationAfterChange Field Functions 
          bool hasAllFlyDurationAfterChange() const { return this->allFlyDurationAfterChange_ != nullptr;};
          void deleteAllFlyDurationAfterChange() { this->allFlyDurationAfterChange_ = nullptr;};
          inline int64_t getAllFlyDurationAfterChange() const { DARABONBA_PTR_GET_DEFAULT(allFlyDurationAfterChange_, 0L) };
          inline Journeys& setAllFlyDurationAfterChange(int64_t allFlyDurationAfterChange) { DARABONBA_PTR_SET_VALUE(allFlyDurationAfterChange_, allFlyDurationAfterChange) };


          // applyId Field Functions 
          bool hasApplyId() const { return this->applyId_ != nullptr;};
          void deleteApplyId() { this->applyId_ = nullptr;};
          inline int64_t getApplyId() const { DARABONBA_PTR_GET_DEFAULT(applyId_, 0L) };
          inline Journeys& setApplyId(int64_t applyId) { DARABONBA_PTR_SET_VALUE(applyId_, applyId) };


          // arrCityCode Field Functions 
          bool hasArrCityCode() const { return this->arrCityCode_ != nullptr;};
          void deleteArrCityCode() { this->arrCityCode_ = nullptr;};
          inline string getArrCityCode() const { DARABONBA_PTR_GET_DEFAULT(arrCityCode_, "") };
          inline Journeys& setArrCityCode(string arrCityCode) { DARABONBA_PTR_SET_VALUE(arrCityCode_, arrCityCode) };


          // arrCityName Field Functions 
          bool hasArrCityName() const { return this->arrCityName_ != nullptr;};
          void deleteArrCityName() { this->arrCityName_ = nullptr;};
          inline string getArrCityName() const { DARABONBA_PTR_GET_DEFAULT(arrCityName_, "") };
          inline Journeys& setArrCityName(string arrCityName) { DARABONBA_PTR_SET_VALUE(arrCityName_, arrCityName) };


          // arrTime Field Functions 
          bool hasArrTime() const { return this->arrTime_ != nullptr;};
          void deleteArrTime() { this->arrTime_ = nullptr;};
          inline string getArrTime() const { DARABONBA_PTR_GET_DEFAULT(arrTime_, "") };
          inline Journeys& setArrTime(string arrTime) { DARABONBA_PTR_SET_VALUE(arrTime_, arrTime) };


          // baggageDetails Field Functions 
          bool hasBaggageDetails() const { return this->baggageDetails_ != nullptr;};
          void deleteBaggageDetails() { this->baggageDetails_ = nullptr;};
          inline string getBaggageDetails() const { DARABONBA_PTR_GET_DEFAULT(baggageDetails_, "") };
          inline Journeys& setBaggageDetails(string baggageDetails) { DARABONBA_PTR_SET_VALUE(baggageDetails_, baggageDetails) };


          // depCityCode Field Functions 
          bool hasDepCityCode() const { return this->depCityCode_ != nullptr;};
          void deleteDepCityCode() { this->depCityCode_ = nullptr;};
          inline string getDepCityCode() const { DARABONBA_PTR_GET_DEFAULT(depCityCode_, "") };
          inline Journeys& setDepCityCode(string depCityCode) { DARABONBA_PTR_SET_VALUE(depCityCode_, depCityCode) };


          // depCityName Field Functions 
          bool hasDepCityName() const { return this->depCityName_ != nullptr;};
          void deleteDepCityName() { this->depCityName_ = nullptr;};
          inline string getDepCityName() const { DARABONBA_PTR_GET_DEFAULT(depCityName_, "") };
          inline Journeys& setDepCityName(string depCityName) { DARABONBA_PTR_SET_VALUE(depCityName_, depCityName) };


          // depTime Field Functions 
          bool hasDepTime() const { return this->depTime_ != nullptr;};
          void deleteDepTime() { this->depTime_ = nullptr;};
          inline string getDepTime() const { DARABONBA_PTR_GET_DEFAULT(depTime_, "") };
          inline Journeys& setDepTime(string depTime) { DARABONBA_PTR_SET_VALUE(depTime_, depTime) };


          // flightStatus Field Functions 
          bool hasFlightStatus() const { return this->flightStatus_ != nullptr;};
          void deleteFlightStatus() { this->flightStatus_ = nullptr;};
          inline string getFlightStatus() const { DARABONBA_PTR_GET_DEFAULT(flightStatus_, "") };
          inline Journeys& setFlightStatus(string flightStatus) { DARABONBA_PTR_SET_VALUE(flightStatus_, flightStatus) };


          // iataNo Field Functions 
          bool hasIataNo() const { return this->iataNo_ != nullptr;};
          void deleteIataNo() { this->iataNo_ = nullptr;};
          inline string getIataNo() const { DARABONBA_PTR_GET_DEFAULT(iataNo_, "") };
          inline Journeys& setIataNo(string iataNo) { DARABONBA_PTR_SET_VALUE(iataNo_, iataNo) };


          // isReshopJourney Field Functions 
          bool hasIsReshopJourney() const { return this->isReshopJourney_ != nullptr;};
          void deleteIsReshopJourney() { this->isReshopJourney_ = nullptr;};
          inline bool getIsReshopJourney() const { DARABONBA_PTR_GET_DEFAULT(isReshopJourney_, false) };
          inline Journeys& setIsReshopJourney(bool isReshopJourney) { DARABONBA_PTR_SET_VALUE(isReshopJourney_, isReshopJourney) };


          // isTransfer Field Functions 
          bool hasIsTransfer() const { return this->isTransfer_ != nullptr;};
          void deleteIsTransfer() { this->isTransfer_ = nullptr;};
          inline bool getIsTransfer() const { DARABONBA_PTR_GET_DEFAULT(isTransfer_, false) };
          inline Journeys& setIsTransfer(bool isTransfer) { DARABONBA_PTR_SET_VALUE(isTransfer_, isTransfer) };


          // journeyTitle Field Functions 
          bool hasJourneyTitle() const { return this->journeyTitle_ != nullptr;};
          void deleteJourneyTitle() { this->journeyTitle_ = nullptr;};
          inline string getJourneyTitle() const { DARABONBA_PTR_GET_DEFAULT(journeyTitle_, "") };
          inline Journeys& setJourneyTitle(string journeyTitle) { DARABONBA_PTR_SET_VALUE(journeyTitle_, journeyTitle) };


          // refundChangeDetails Field Functions 
          bool hasRefundChangeDetails() const { return this->refundChangeDetails_ != nullptr;};
          void deleteRefundChangeDetails() { this->refundChangeDetails_ = nullptr;};
          inline string getRefundChangeDetails() const { DARABONBA_PTR_GET_DEFAULT(refundChangeDetails_, "") };
          inline Journeys& setRefundChangeDetails(string refundChangeDetails) { DARABONBA_PTR_SET_VALUE(refundChangeDetails_, refundChangeDetails) };


          // segmentList Field Functions 
          bool hasSegmentList() const { return this->segmentList_ != nullptr;};
          void deleteSegmentList() { this->segmentList_ = nullptr;};
          inline const vector<Journeys::SegmentList> & getSegmentList() const { DARABONBA_PTR_GET_CONST(segmentList_, vector<Journeys::SegmentList>) };
          inline vector<Journeys::SegmentList> getSegmentList() { DARABONBA_PTR_GET(segmentList_, vector<Journeys::SegmentList>) };
          inline Journeys& setSegmentList(const vector<Journeys::SegmentList> & segmentList) { DARABONBA_PTR_SET_VALUE(segmentList_, segmentList) };
          inline Journeys& setSegmentList(vector<Journeys::SegmentList> && segmentList) { DARABONBA_PTR_SET_RVALUE(segmentList_, segmentList) };


        protected:
          shared_ptr<int64_t> allFlyDuration_ {};
          shared_ptr<int64_t> allFlyDurationAfterChange_ {};
          shared_ptr<int64_t> applyId_ {};
          shared_ptr<string> arrCityCode_ {};
          shared_ptr<string> arrCityName_ {};
          shared_ptr<string> arrTime_ {};
          shared_ptr<string> baggageDetails_ {};
          shared_ptr<string> depCityCode_ {};
          shared_ptr<string> depCityName_ {};
          shared_ptr<string> depTime_ {};
          shared_ptr<string> flightStatus_ {};
          // iata_no
          shared_ptr<string> iataNo_ {};
          shared_ptr<bool> isReshopJourney_ {};
          shared_ptr<bool> isTransfer_ {};
          shared_ptr<string> journeyTitle_ {};
          shared_ptr<string> refundChangeDetails_ {};
          shared_ptr<vector<Journeys::SegmentList>> segmentList_ {};
        };

        virtual bool empty() const override { return this->journeys_ == nullptr
        && this->noticeTips_ == nullptr && this->tripType_ == nullptr && this->tripTypeCode_ == nullptr; };
        // journeys Field Functions 
        bool hasJourneys() const { return this->journeys_ != nullptr;};
        void deleteJourneys() { this->journeys_ = nullptr;};
        inline const vector<FlightTaleInfoDTO::Journeys> & getJourneys() const { DARABONBA_PTR_GET_CONST(journeys_, vector<FlightTaleInfoDTO::Journeys>) };
        inline vector<FlightTaleInfoDTO::Journeys> getJourneys() { DARABONBA_PTR_GET(journeys_, vector<FlightTaleInfoDTO::Journeys>) };
        inline FlightTaleInfoDTO& setJourneys(const vector<FlightTaleInfoDTO::Journeys> & journeys) { DARABONBA_PTR_SET_VALUE(journeys_, journeys) };
        inline FlightTaleInfoDTO& setJourneys(vector<FlightTaleInfoDTO::Journeys> && journeys) { DARABONBA_PTR_SET_RVALUE(journeys_, journeys) };


        // noticeTips Field Functions 
        bool hasNoticeTips() const { return this->noticeTips_ != nullptr;};
        void deleteNoticeTips() { this->noticeTips_ = nullptr;};
        inline string getNoticeTips() const { DARABONBA_PTR_GET_DEFAULT(noticeTips_, "") };
        inline FlightTaleInfoDTO& setNoticeTips(string noticeTips) { DARABONBA_PTR_SET_VALUE(noticeTips_, noticeTips) };


        // tripType Field Functions 
        bool hasTripType() const { return this->tripType_ != nullptr;};
        void deleteTripType() { this->tripType_ = nullptr;};
        inline string getTripType() const { DARABONBA_PTR_GET_DEFAULT(tripType_, "") };
        inline FlightTaleInfoDTO& setTripType(string tripType) { DARABONBA_PTR_SET_VALUE(tripType_, tripType) };


        // tripTypeCode Field Functions 
        bool hasTripTypeCode() const { return this->tripTypeCode_ != nullptr;};
        void deleteTripTypeCode() { this->tripTypeCode_ = nullptr;};
        inline int32_t getTripTypeCode() const { DARABONBA_PTR_GET_DEFAULT(tripTypeCode_, 0) };
        inline FlightTaleInfoDTO& setTripTypeCode(int32_t tripTypeCode) { DARABONBA_PTR_SET_VALUE(tripTypeCode_, tripTypeCode) };


      protected:
        shared_ptr<vector<FlightTaleInfoDTO::Journeys>> journeys_ {};
        shared_ptr<string> noticeTips_ {};
        shared_ptr<string> tripType_ {};
        shared_ptr<int32_t> tripTypeCode_ {};
      };

      class ContactInfoDTO : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ContactInfoDTO& obj) { 
          DARABONBA_PTR_TO_JSON(contact_email, contactEmail_);
          DARABONBA_PTR_TO_JSON(contact_name, contactName_);
          DARABONBA_PTR_TO_JSON(contact_phone, contactPhone_);
          DARABONBA_PTR_TO_JSON(send_msg_to_passenger, sendMsgToPassenger_);
        };
        friend void from_json(const Darabonba::Json& j, ContactInfoDTO& obj) { 
          DARABONBA_PTR_FROM_JSON(contact_email, contactEmail_);
          DARABONBA_PTR_FROM_JSON(contact_name, contactName_);
          DARABONBA_PTR_FROM_JSON(contact_phone, contactPhone_);
          DARABONBA_PTR_FROM_JSON(send_msg_to_passenger, sendMsgToPassenger_);
        };
        ContactInfoDTO() = default ;
        ContactInfoDTO(const ContactInfoDTO &) = default ;
        ContactInfoDTO(ContactInfoDTO &&) = default ;
        ContactInfoDTO(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ContactInfoDTO() = default ;
        ContactInfoDTO& operator=(const ContactInfoDTO &) = default ;
        ContactInfoDTO& operator=(ContactInfoDTO &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->contactEmail_ == nullptr
        && this->contactName_ == nullptr && this->contactPhone_ == nullptr && this->sendMsgToPassenger_ == nullptr; };
        // contactEmail Field Functions 
        bool hasContactEmail() const { return this->contactEmail_ != nullptr;};
        void deleteContactEmail() { this->contactEmail_ = nullptr;};
        inline string getContactEmail() const { DARABONBA_PTR_GET_DEFAULT(contactEmail_, "") };
        inline ContactInfoDTO& setContactEmail(string contactEmail) { DARABONBA_PTR_SET_VALUE(contactEmail_, contactEmail) };


        // contactName Field Functions 
        bool hasContactName() const { return this->contactName_ != nullptr;};
        void deleteContactName() { this->contactName_ = nullptr;};
        inline string getContactName() const { DARABONBA_PTR_GET_DEFAULT(contactName_, "") };
        inline ContactInfoDTO& setContactName(string contactName) { DARABONBA_PTR_SET_VALUE(contactName_, contactName) };


        // contactPhone Field Functions 
        bool hasContactPhone() const { return this->contactPhone_ != nullptr;};
        void deleteContactPhone() { this->contactPhone_ = nullptr;};
        inline string getContactPhone() const { DARABONBA_PTR_GET_DEFAULT(contactPhone_, "") };
        inline ContactInfoDTO& setContactPhone(string contactPhone) { DARABONBA_PTR_SET_VALUE(contactPhone_, contactPhone) };


        // sendMsgToPassenger Field Functions 
        bool hasSendMsgToPassenger() const { return this->sendMsgToPassenger_ != nullptr;};
        void deleteSendMsgToPassenger() { this->sendMsgToPassenger_ = nullptr;};
        inline bool getSendMsgToPassenger() const { DARABONBA_PTR_GET_DEFAULT(sendMsgToPassenger_, false) };
        inline ContactInfoDTO& setSendMsgToPassenger(bool sendMsgToPassenger) { DARABONBA_PTR_SET_VALUE(sendMsgToPassenger_, sendMsgToPassenger) };


      protected:
        shared_ptr<string> contactEmail_ {};
        shared_ptr<string> contactName_ {};
        shared_ptr<string> contactPhone_ {};
        shared_ptr<bool> sendMsgToPassenger_ {};
      };

      virtual bool empty() const override { return this->b2gVipCode_ == nullptr
        && this->bookSuccTime_ == nullptr && this->bookUserId_ == nullptr && this->bookUserName_ == nullptr && this->buildPrice_ == nullptr && this->contactInfoDTO_ == nullptr
        && this->createTime_ == nullptr && this->facevalue_ == nullptr && this->flightTaleInfoDTO_ == nullptr && this->isProtocol_ == nullptr && this->isemergency_ == nullptr
        && this->issendmessage_ == nullptr && this->oilPrice_ == nullptr && this->orderId_ == nullptr && this->orderPrice_ == nullptr && this->outOrderId_ == nullptr
        && this->passengerList_ == nullptr && this->passengerSegmentMap_ == nullptr && this->payTime_ == nullptr && this->saleprice_ == nullptr && this->sendcpsms_ == nullptr
        && this->status_ == nullptr && this->totalServiceFeePrice_ == nullptr; };
      // b2gVipCode Field Functions 
      bool hasB2gVipCode() const { return this->b2gVipCode_ != nullptr;};
      void deleteB2gVipCode() { this->b2gVipCode_ = nullptr;};
      inline string getB2gVipCode() const { DARABONBA_PTR_GET_DEFAULT(b2gVipCode_, "") };
      inline Module& setB2gVipCode(string b2gVipCode) { DARABONBA_PTR_SET_VALUE(b2gVipCode_, b2gVipCode) };


      // bookSuccTime Field Functions 
      bool hasBookSuccTime() const { return this->bookSuccTime_ != nullptr;};
      void deleteBookSuccTime() { this->bookSuccTime_ = nullptr;};
      inline string getBookSuccTime() const { DARABONBA_PTR_GET_DEFAULT(bookSuccTime_, "") };
      inline Module& setBookSuccTime(string bookSuccTime) { DARABONBA_PTR_SET_VALUE(bookSuccTime_, bookSuccTime) };


      // bookUserId Field Functions 
      bool hasBookUserId() const { return this->bookUserId_ != nullptr;};
      void deleteBookUserId() { this->bookUserId_ = nullptr;};
      inline string getBookUserId() const { DARABONBA_PTR_GET_DEFAULT(bookUserId_, "") };
      inline Module& setBookUserId(string bookUserId) { DARABONBA_PTR_SET_VALUE(bookUserId_, bookUserId) };


      // bookUserName Field Functions 
      bool hasBookUserName() const { return this->bookUserName_ != nullptr;};
      void deleteBookUserName() { this->bookUserName_ = nullptr;};
      inline string getBookUserName() const { DARABONBA_PTR_GET_DEFAULT(bookUserName_, "") };
      inline Module& setBookUserName(string bookUserName) { DARABONBA_PTR_SET_VALUE(bookUserName_, bookUserName) };


      // buildPrice Field Functions 
      bool hasBuildPrice() const { return this->buildPrice_ != nullptr;};
      void deleteBuildPrice() { this->buildPrice_ = nullptr;};
      inline int64_t getBuildPrice() const { DARABONBA_PTR_GET_DEFAULT(buildPrice_, 0L) };
      inline Module& setBuildPrice(int64_t buildPrice) { DARABONBA_PTR_SET_VALUE(buildPrice_, buildPrice) };


      // contactInfoDTO Field Functions 
      bool hasContactInfoDTO() const { return this->contactInfoDTO_ != nullptr;};
      void deleteContactInfoDTO() { this->contactInfoDTO_ = nullptr;};
      inline const Module::ContactInfoDTO & getContactInfoDTO() const { DARABONBA_PTR_GET_CONST(contactInfoDTO_, Module::ContactInfoDTO) };
      inline Module::ContactInfoDTO getContactInfoDTO() { DARABONBA_PTR_GET(contactInfoDTO_, Module::ContactInfoDTO) };
      inline Module& setContactInfoDTO(const Module::ContactInfoDTO & contactInfoDTO) { DARABONBA_PTR_SET_VALUE(contactInfoDTO_, contactInfoDTO) };
      inline Module& setContactInfoDTO(Module::ContactInfoDTO && contactInfoDTO) { DARABONBA_PTR_SET_RVALUE(contactInfoDTO_, contactInfoDTO) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline Module& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // facevalue Field Functions 
      bool hasFacevalue() const { return this->facevalue_ != nullptr;};
      void deleteFacevalue() { this->facevalue_ = nullptr;};
      inline int64_t getFacevalue() const { DARABONBA_PTR_GET_DEFAULT(facevalue_, 0L) };
      inline Module& setFacevalue(int64_t facevalue) { DARABONBA_PTR_SET_VALUE(facevalue_, facevalue) };


      // flightTaleInfoDTO Field Functions 
      bool hasFlightTaleInfoDTO() const { return this->flightTaleInfoDTO_ != nullptr;};
      void deleteFlightTaleInfoDTO() { this->flightTaleInfoDTO_ = nullptr;};
      inline const Module::FlightTaleInfoDTO & getFlightTaleInfoDTO() const { DARABONBA_PTR_GET_CONST(flightTaleInfoDTO_, Module::FlightTaleInfoDTO) };
      inline Module::FlightTaleInfoDTO getFlightTaleInfoDTO() { DARABONBA_PTR_GET(flightTaleInfoDTO_, Module::FlightTaleInfoDTO) };
      inline Module& setFlightTaleInfoDTO(const Module::FlightTaleInfoDTO & flightTaleInfoDTO) { DARABONBA_PTR_SET_VALUE(flightTaleInfoDTO_, flightTaleInfoDTO) };
      inline Module& setFlightTaleInfoDTO(Module::FlightTaleInfoDTO && flightTaleInfoDTO) { DARABONBA_PTR_SET_RVALUE(flightTaleInfoDTO_, flightTaleInfoDTO) };


      // isProtocol Field Functions 
      bool hasIsProtocol() const { return this->isProtocol_ != nullptr;};
      void deleteIsProtocol() { this->isProtocol_ = nullptr;};
      inline bool getIsProtocol() const { DARABONBA_PTR_GET_DEFAULT(isProtocol_, false) };
      inline Module& setIsProtocol(bool isProtocol) { DARABONBA_PTR_SET_VALUE(isProtocol_, isProtocol) };


      // isemergency Field Functions 
      bool hasIsemergency() const { return this->isemergency_ != nullptr;};
      void deleteIsemergency() { this->isemergency_ = nullptr;};
      inline bool getIsemergency() const { DARABONBA_PTR_GET_DEFAULT(isemergency_, false) };
      inline Module& setIsemergency(bool isemergency) { DARABONBA_PTR_SET_VALUE(isemergency_, isemergency) };


      // issendmessage Field Functions 
      bool hasIssendmessage() const { return this->issendmessage_ != nullptr;};
      void deleteIssendmessage() { this->issendmessage_ = nullptr;};
      inline bool getIssendmessage() const { DARABONBA_PTR_GET_DEFAULT(issendmessage_, false) };
      inline Module& setIssendmessage(bool issendmessage) { DARABONBA_PTR_SET_VALUE(issendmessage_, issendmessage) };


      // oilPrice Field Functions 
      bool hasOilPrice() const { return this->oilPrice_ != nullptr;};
      void deleteOilPrice() { this->oilPrice_ = nullptr;};
      inline int64_t getOilPrice() const { DARABONBA_PTR_GET_DEFAULT(oilPrice_, 0L) };
      inline Module& setOilPrice(int64_t oilPrice) { DARABONBA_PTR_SET_VALUE(oilPrice_, oilPrice) };


      // orderId Field Functions 
      bool hasOrderId() const { return this->orderId_ != nullptr;};
      void deleteOrderId() { this->orderId_ = nullptr;};
      inline int64_t getOrderId() const { DARABONBA_PTR_GET_DEFAULT(orderId_, 0L) };
      inline Module& setOrderId(int64_t orderId) { DARABONBA_PTR_SET_VALUE(orderId_, orderId) };


      // orderPrice Field Functions 
      bool hasOrderPrice() const { return this->orderPrice_ != nullptr;};
      void deleteOrderPrice() { this->orderPrice_ = nullptr;};
      inline int64_t getOrderPrice() const { DARABONBA_PTR_GET_DEFAULT(orderPrice_, 0L) };
      inline Module& setOrderPrice(int64_t orderPrice) { DARABONBA_PTR_SET_VALUE(orderPrice_, orderPrice) };


      // outOrderId Field Functions 
      bool hasOutOrderId() const { return this->outOrderId_ != nullptr;};
      void deleteOutOrderId() { this->outOrderId_ = nullptr;};
      inline string getOutOrderId() const { DARABONBA_PTR_GET_DEFAULT(outOrderId_, "") };
      inline Module& setOutOrderId(string outOrderId) { DARABONBA_PTR_SET_VALUE(outOrderId_, outOrderId) };


      // passengerList Field Functions 
      bool hasPassengerList() const { return this->passengerList_ != nullptr;};
      void deletePassengerList() { this->passengerList_ = nullptr;};
      inline const vector<Module::PassengerList> & getPassengerList() const { DARABONBA_PTR_GET_CONST(passengerList_, vector<Module::PassengerList>) };
      inline vector<Module::PassengerList> getPassengerList() { DARABONBA_PTR_GET(passengerList_, vector<Module::PassengerList>) };
      inline Module& setPassengerList(const vector<Module::PassengerList> & passengerList) { DARABONBA_PTR_SET_VALUE(passengerList_, passengerList) };
      inline Module& setPassengerList(vector<Module::PassengerList> && passengerList) { DARABONBA_PTR_SET_RVALUE(passengerList_, passengerList) };


      // passengerSegmentMap Field Functions 
      bool hasPassengerSegmentMap() const { return this->passengerSegmentMap_ != nullptr;};
      void deletePassengerSegmentMap() { this->passengerSegmentMap_ = nullptr;};
      inline const map<string, string> & getPassengerSegmentMap() const { DARABONBA_PTR_GET_CONST(passengerSegmentMap_, map<string, string>) };
      inline map<string, string> getPassengerSegmentMap() { DARABONBA_PTR_GET(passengerSegmentMap_, map<string, string>) };
      inline Module& setPassengerSegmentMap(const map<string, string> & passengerSegmentMap) { DARABONBA_PTR_SET_VALUE(passengerSegmentMap_, passengerSegmentMap) };
      inline Module& setPassengerSegmentMap(map<string, string> && passengerSegmentMap) { DARABONBA_PTR_SET_RVALUE(passengerSegmentMap_, passengerSegmentMap) };


      // payTime Field Functions 
      bool hasPayTime() const { return this->payTime_ != nullptr;};
      void deletePayTime() { this->payTime_ = nullptr;};
      inline string getPayTime() const { DARABONBA_PTR_GET_DEFAULT(payTime_, "") };
      inline Module& setPayTime(string payTime) { DARABONBA_PTR_SET_VALUE(payTime_, payTime) };


      // saleprice Field Functions 
      bool hasSaleprice() const { return this->saleprice_ != nullptr;};
      void deleteSaleprice() { this->saleprice_ = nullptr;};
      inline int64_t getSaleprice() const { DARABONBA_PTR_GET_DEFAULT(saleprice_, 0L) };
      inline Module& setSaleprice(int64_t saleprice) { DARABONBA_PTR_SET_VALUE(saleprice_, saleprice) };


      // sendcpsms Field Functions 
      bool hasSendcpsms() const { return this->sendcpsms_ != nullptr;};
      void deleteSendcpsms() { this->sendcpsms_ = nullptr;};
      inline bool getSendcpsms() const { DARABONBA_PTR_GET_DEFAULT(sendcpsms_, false) };
      inline Module& setSendcpsms(bool sendcpsms) { DARABONBA_PTR_SET_VALUE(sendcpsms_, sendcpsms) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline int32_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
      inline Module& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // totalServiceFeePrice Field Functions 
      bool hasTotalServiceFeePrice() const { return this->totalServiceFeePrice_ != nullptr;};
      void deleteTotalServiceFeePrice() { this->totalServiceFeePrice_ = nullptr;};
      inline int64_t getTotalServiceFeePrice() const { DARABONBA_PTR_GET_DEFAULT(totalServiceFeePrice_, 0L) };
      inline Module& setTotalServiceFeePrice(int64_t totalServiceFeePrice) { DARABONBA_PTR_SET_VALUE(totalServiceFeePrice_, totalServiceFeePrice) };


    protected:
      shared_ptr<string> b2gVipCode_ {};
      shared_ptr<string> bookSuccTime_ {};
      shared_ptr<string> bookUserId_ {};
      shared_ptr<string> bookUserName_ {};
      shared_ptr<int64_t> buildPrice_ {};
      shared_ptr<Module::ContactInfoDTO> contactInfoDTO_ {};
      shared_ptr<string> createTime_ {};
      shared_ptr<int64_t> facevalue_ {};
      shared_ptr<Module::FlightTaleInfoDTO> flightTaleInfoDTO_ {};
      shared_ptr<bool> isProtocol_ {};
      shared_ptr<bool> isemergency_ {};
      shared_ptr<bool> issendmessage_ {};
      shared_ptr<int64_t> oilPrice_ {};
      shared_ptr<int64_t> orderId_ {};
      shared_ptr<int64_t> orderPrice_ {};
      shared_ptr<string> outOrderId_ {};
      shared_ptr<vector<Module::PassengerList>> passengerList_ {};
      // key :passengerId
      // 
      // value :segmentId
      shared_ptr<map<string, string>> passengerSegmentMap_ {};
      shared_ptr<string> payTime_ {};
      shared_ptr<int64_t> saleprice_ {};
      shared_ptr<bool> sendcpsms_ {};
      shared_ptr<int32_t> status_ {};
      shared_ptr<int64_t> totalServiceFeePrice_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->message_ == nullptr && this->module_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr && this->traceId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline FlightOrderDetailV2ResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline FlightOrderDetailV2ResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // module Field Functions 
    bool hasModule() const { return this->module_ != nullptr;};
    void deleteModule() { this->module_ = nullptr;};
    inline const FlightOrderDetailV2ResponseBody::Module & getModule() const { DARABONBA_PTR_GET_CONST(module_, FlightOrderDetailV2ResponseBody::Module) };
    inline FlightOrderDetailV2ResponseBody::Module getModule() { DARABONBA_PTR_GET(module_, FlightOrderDetailV2ResponseBody::Module) };
    inline FlightOrderDetailV2ResponseBody& setModule(const FlightOrderDetailV2ResponseBody::Module & module) { DARABONBA_PTR_SET_VALUE(module_, module) };
    inline FlightOrderDetailV2ResponseBody& setModule(FlightOrderDetailV2ResponseBody::Module && module) { DARABONBA_PTR_SET_RVALUE(module_, module) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline FlightOrderDetailV2ResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline FlightOrderDetailV2ResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // traceId Field Functions 
    bool hasTraceId() const { return this->traceId_ != nullptr;};
    void deleteTraceId() { this->traceId_ = nullptr;};
    inline string getTraceId() const { DARABONBA_PTR_GET_DEFAULT(traceId_, "") };
    inline FlightOrderDetailV2ResponseBody& setTraceId(string traceId) { DARABONBA_PTR_SET_VALUE(traceId_, traceId) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<string> message_ {};
    // module
    shared_ptr<FlightOrderDetailV2ResponseBody::Module> module_ {};
    // requestId
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
    // traceId
    shared_ptr<string> traceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
