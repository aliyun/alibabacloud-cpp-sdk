// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TICKETCHANGINGAPPLYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_TICKETCHANGINGAPPLYREQUEST_HPP_
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
  class TicketChangingApplyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TicketChangingApplyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(dis_order_id, disOrderId_);
      DARABONBA_PTR_TO_JSON(dis_sub_order_id, disSubOrderId_);
      DARABONBA_PTR_TO_JSON(is_voluntary, isVoluntary_);
      DARABONBA_PTR_TO_JSON(modify_flight_info_list, modifyFlightInfoList_);
      DARABONBA_PTR_TO_JSON(ota_item_id, otaItemId_);
      DARABONBA_PTR_TO_JSON(reason, reason_);
      DARABONBA_PTR_TO_JSON(session_id, sessionId_);
      DARABONBA_PTR_TO_JSON(whether_retry, whetherRetry_);
    };
    friend void from_json(const Darabonba::Json& j, TicketChangingApplyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(dis_order_id, disOrderId_);
      DARABONBA_PTR_FROM_JSON(dis_sub_order_id, disSubOrderId_);
      DARABONBA_PTR_FROM_JSON(is_voluntary, isVoluntary_);
      DARABONBA_PTR_FROM_JSON(modify_flight_info_list, modifyFlightInfoList_);
      DARABONBA_PTR_FROM_JSON(ota_item_id, otaItemId_);
      DARABONBA_PTR_FROM_JSON(reason, reason_);
      DARABONBA_PTR_FROM_JSON(session_id, sessionId_);
      DARABONBA_PTR_FROM_JSON(whether_retry, whetherRetry_);
    };
    TicketChangingApplyRequest() = default ;
    TicketChangingApplyRequest(const TicketChangingApplyRequest &) = default ;
    TicketChangingApplyRequest(TicketChangingApplyRequest &&) = default ;
    TicketChangingApplyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TicketChangingApplyRequest() = default ;
    TicketChangingApplyRequest& operator=(const TicketChangingApplyRequest &) = default ;
    TicketChangingApplyRequest& operator=(TicketChangingApplyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ModifyFlightInfoList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ModifyFlightInfoList& obj) { 
        DARABONBA_PTR_TO_JSON(arr_city, arrCity_);
        DARABONBA_PTR_TO_JSON(cabin, cabin_);
        DARABONBA_PTR_TO_JSON(dep_city, depCity_);
        DARABONBA_PTR_TO_JSON(dep_date, depDate_);
        DARABONBA_PTR_TO_JSON(flight_no, flightNo_);
        DARABONBA_PTR_TO_JSON(passenger_info_list, passengerInfoList_);
      };
      friend void from_json(const Darabonba::Json& j, ModifyFlightInfoList& obj) { 
        DARABONBA_PTR_FROM_JSON(arr_city, arrCity_);
        DARABONBA_PTR_FROM_JSON(cabin, cabin_);
        DARABONBA_PTR_FROM_JSON(dep_city, depCity_);
        DARABONBA_PTR_FROM_JSON(dep_date, depDate_);
        DARABONBA_PTR_FROM_JSON(flight_no, flightNo_);
        DARABONBA_PTR_FROM_JSON(passenger_info_list, passengerInfoList_);
      };
      ModifyFlightInfoList() = default ;
      ModifyFlightInfoList(const ModifyFlightInfoList &) = default ;
      ModifyFlightInfoList(ModifyFlightInfoList &&) = default ;
      ModifyFlightInfoList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ModifyFlightInfoList() = default ;
      ModifyFlightInfoList& operator=(const ModifyFlightInfoList &) = default ;
      ModifyFlightInfoList& operator=(ModifyFlightInfoList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class PassengerInfoList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const PassengerInfoList& obj) { 
          DARABONBA_PTR_TO_JSON(origin_flight_no, originFlightNo_);
          DARABONBA_PTR_TO_JSON(out_user_id, outUserId_);
          DARABONBA_PTR_TO_JSON(passenger_name, passengerName_);
        };
        friend void from_json(const Darabonba::Json& j, PassengerInfoList& obj) { 
          DARABONBA_PTR_FROM_JSON(origin_flight_no, originFlightNo_);
          DARABONBA_PTR_FROM_JSON(out_user_id, outUserId_);
          DARABONBA_PTR_FROM_JSON(passenger_name, passengerName_);
        };
        PassengerInfoList() = default ;
        PassengerInfoList(const PassengerInfoList &) = default ;
        PassengerInfoList(PassengerInfoList &&) = default ;
        PassengerInfoList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~PassengerInfoList() = default ;
        PassengerInfoList& operator=(const PassengerInfoList &) = default ;
        PassengerInfoList& operator=(PassengerInfoList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->originFlightNo_ == nullptr
        && this->outUserId_ == nullptr && this->passengerName_ == nullptr; };
        // originFlightNo Field Functions 
        bool hasOriginFlightNo() const { return this->originFlightNo_ != nullptr;};
        void deleteOriginFlightNo() { this->originFlightNo_ = nullptr;};
        inline string getOriginFlightNo() const { DARABONBA_PTR_GET_DEFAULT(originFlightNo_, "") };
        inline PassengerInfoList& setOriginFlightNo(string originFlightNo) { DARABONBA_PTR_SET_VALUE(originFlightNo_, originFlightNo) };


        // outUserId Field Functions 
        bool hasOutUserId() const { return this->outUserId_ != nullptr;};
        void deleteOutUserId() { this->outUserId_ = nullptr;};
        inline string getOutUserId() const { DARABONBA_PTR_GET_DEFAULT(outUserId_, "") };
        inline PassengerInfoList& setOutUserId(string outUserId) { DARABONBA_PTR_SET_VALUE(outUserId_, outUserId) };


        // passengerName Field Functions 
        bool hasPassengerName() const { return this->passengerName_ != nullptr;};
        void deletePassengerName() { this->passengerName_ = nullptr;};
        inline string getPassengerName() const { DARABONBA_PTR_GET_DEFAULT(passengerName_, "") };
        inline PassengerInfoList& setPassengerName(string passengerName) { DARABONBA_PTR_SET_VALUE(passengerName_, passengerName) };


      protected:
        // This parameter is required.
        shared_ptr<string> originFlightNo_ {};
        // This parameter is required.
        shared_ptr<string> outUserId_ {};
        // This parameter is required.
        shared_ptr<string> passengerName_ {};
      };

      virtual bool empty() const override { return this->arrCity_ == nullptr
        && this->cabin_ == nullptr && this->depCity_ == nullptr && this->depDate_ == nullptr && this->flightNo_ == nullptr && this->passengerInfoList_ == nullptr; };
      // arrCity Field Functions 
      bool hasArrCity() const { return this->arrCity_ != nullptr;};
      void deleteArrCity() { this->arrCity_ = nullptr;};
      inline string getArrCity() const { DARABONBA_PTR_GET_DEFAULT(arrCity_, "") };
      inline ModifyFlightInfoList& setArrCity(string arrCity) { DARABONBA_PTR_SET_VALUE(arrCity_, arrCity) };


      // cabin Field Functions 
      bool hasCabin() const { return this->cabin_ != nullptr;};
      void deleteCabin() { this->cabin_ = nullptr;};
      inline string getCabin() const { DARABONBA_PTR_GET_DEFAULT(cabin_, "") };
      inline ModifyFlightInfoList& setCabin(string cabin) { DARABONBA_PTR_SET_VALUE(cabin_, cabin) };


      // depCity Field Functions 
      bool hasDepCity() const { return this->depCity_ != nullptr;};
      void deleteDepCity() { this->depCity_ = nullptr;};
      inline string getDepCity() const { DARABONBA_PTR_GET_DEFAULT(depCity_, "") };
      inline ModifyFlightInfoList& setDepCity(string depCity) { DARABONBA_PTR_SET_VALUE(depCity_, depCity) };


      // depDate Field Functions 
      bool hasDepDate() const { return this->depDate_ != nullptr;};
      void deleteDepDate() { this->depDate_ = nullptr;};
      inline string getDepDate() const { DARABONBA_PTR_GET_DEFAULT(depDate_, "") };
      inline ModifyFlightInfoList& setDepDate(string depDate) { DARABONBA_PTR_SET_VALUE(depDate_, depDate) };


      // flightNo Field Functions 
      bool hasFlightNo() const { return this->flightNo_ != nullptr;};
      void deleteFlightNo() { this->flightNo_ = nullptr;};
      inline string getFlightNo() const { DARABONBA_PTR_GET_DEFAULT(flightNo_, "") };
      inline ModifyFlightInfoList& setFlightNo(string flightNo) { DARABONBA_PTR_SET_VALUE(flightNo_, flightNo) };


      // passengerInfoList Field Functions 
      bool hasPassengerInfoList() const { return this->passengerInfoList_ != nullptr;};
      void deletePassengerInfoList() { this->passengerInfoList_ = nullptr;};
      inline const vector<ModifyFlightInfoList::PassengerInfoList> & getPassengerInfoList() const { DARABONBA_PTR_GET_CONST(passengerInfoList_, vector<ModifyFlightInfoList::PassengerInfoList>) };
      inline vector<ModifyFlightInfoList::PassengerInfoList> getPassengerInfoList() { DARABONBA_PTR_GET(passengerInfoList_, vector<ModifyFlightInfoList::PassengerInfoList>) };
      inline ModifyFlightInfoList& setPassengerInfoList(const vector<ModifyFlightInfoList::PassengerInfoList> & passengerInfoList) { DARABONBA_PTR_SET_VALUE(passengerInfoList_, passengerInfoList) };
      inline ModifyFlightInfoList& setPassengerInfoList(vector<ModifyFlightInfoList::PassengerInfoList> && passengerInfoList) { DARABONBA_PTR_SET_RVALUE(passengerInfoList_, passengerInfoList) };


    protected:
      // This parameter is required.
      shared_ptr<string> arrCity_ {};
      shared_ptr<string> cabin_ {};
      // This parameter is required.
      shared_ptr<string> depCity_ {};
      // This parameter is required.
      shared_ptr<string> depDate_ {};
      // This parameter is required.
      shared_ptr<string> flightNo_ {};
      // This parameter is required.
      shared_ptr<vector<ModifyFlightInfoList::PassengerInfoList>> passengerInfoList_ {};
    };

    virtual bool empty() const override { return this->disOrderId_ == nullptr
        && this->disSubOrderId_ == nullptr && this->isVoluntary_ == nullptr && this->modifyFlightInfoList_ == nullptr && this->otaItemId_ == nullptr && this->reason_ == nullptr
        && this->sessionId_ == nullptr && this->whetherRetry_ == nullptr; };
    // disOrderId Field Functions 
    bool hasDisOrderId() const { return this->disOrderId_ != nullptr;};
    void deleteDisOrderId() { this->disOrderId_ = nullptr;};
    inline string getDisOrderId() const { DARABONBA_PTR_GET_DEFAULT(disOrderId_, "") };
    inline TicketChangingApplyRequest& setDisOrderId(string disOrderId) { DARABONBA_PTR_SET_VALUE(disOrderId_, disOrderId) };


    // disSubOrderId Field Functions 
    bool hasDisSubOrderId() const { return this->disSubOrderId_ != nullptr;};
    void deleteDisSubOrderId() { this->disSubOrderId_ = nullptr;};
    inline string getDisSubOrderId() const { DARABONBA_PTR_GET_DEFAULT(disSubOrderId_, "") };
    inline TicketChangingApplyRequest& setDisSubOrderId(string disSubOrderId) { DARABONBA_PTR_SET_VALUE(disSubOrderId_, disSubOrderId) };


    // isVoluntary Field Functions 
    bool hasIsVoluntary() const { return this->isVoluntary_ != nullptr;};
    void deleteIsVoluntary() { this->isVoluntary_ = nullptr;};
    inline int32_t getIsVoluntary() const { DARABONBA_PTR_GET_DEFAULT(isVoluntary_, 0) };
    inline TicketChangingApplyRequest& setIsVoluntary(int32_t isVoluntary) { DARABONBA_PTR_SET_VALUE(isVoluntary_, isVoluntary) };


    // modifyFlightInfoList Field Functions 
    bool hasModifyFlightInfoList() const { return this->modifyFlightInfoList_ != nullptr;};
    void deleteModifyFlightInfoList() { this->modifyFlightInfoList_ = nullptr;};
    inline const vector<TicketChangingApplyRequest::ModifyFlightInfoList> & getModifyFlightInfoList() const { DARABONBA_PTR_GET_CONST(modifyFlightInfoList_, vector<TicketChangingApplyRequest::ModifyFlightInfoList>) };
    inline vector<TicketChangingApplyRequest::ModifyFlightInfoList> getModifyFlightInfoList() { DARABONBA_PTR_GET(modifyFlightInfoList_, vector<TicketChangingApplyRequest::ModifyFlightInfoList>) };
    inline TicketChangingApplyRequest& setModifyFlightInfoList(const vector<TicketChangingApplyRequest::ModifyFlightInfoList> & modifyFlightInfoList) { DARABONBA_PTR_SET_VALUE(modifyFlightInfoList_, modifyFlightInfoList) };
    inline TicketChangingApplyRequest& setModifyFlightInfoList(vector<TicketChangingApplyRequest::ModifyFlightInfoList> && modifyFlightInfoList) { DARABONBA_PTR_SET_RVALUE(modifyFlightInfoList_, modifyFlightInfoList) };


    // otaItemId Field Functions 
    bool hasOtaItemId() const { return this->otaItemId_ != nullptr;};
    void deleteOtaItemId() { this->otaItemId_ = nullptr;};
    inline string getOtaItemId() const { DARABONBA_PTR_GET_DEFAULT(otaItemId_, "") };
    inline TicketChangingApplyRequest& setOtaItemId(string otaItemId) { DARABONBA_PTR_SET_VALUE(otaItemId_, otaItemId) };


    // reason Field Functions 
    bool hasReason() const { return this->reason_ != nullptr;};
    void deleteReason() { this->reason_ = nullptr;};
    inline string getReason() const { DARABONBA_PTR_GET_DEFAULT(reason_, "") };
    inline TicketChangingApplyRequest& setReason(string reason) { DARABONBA_PTR_SET_VALUE(reason_, reason) };


    // sessionId Field Functions 
    bool hasSessionId() const { return this->sessionId_ != nullptr;};
    void deleteSessionId() { this->sessionId_ = nullptr;};
    inline string getSessionId() const { DARABONBA_PTR_GET_DEFAULT(sessionId_, "") };
    inline TicketChangingApplyRequest& setSessionId(string sessionId) { DARABONBA_PTR_SET_VALUE(sessionId_, sessionId) };


    // whetherRetry Field Functions 
    bool hasWhetherRetry() const { return this->whetherRetry_ != nullptr;};
    void deleteWhetherRetry() { this->whetherRetry_ = nullptr;};
    inline bool getWhetherRetry() const { DARABONBA_PTR_GET_DEFAULT(whetherRetry_, false) };
    inline TicketChangingApplyRequest& setWhetherRetry(bool whetherRetry) { DARABONBA_PTR_SET_VALUE(whetherRetry_, whetherRetry) };


  protected:
    // This parameter is required.
    shared_ptr<string> disOrderId_ {};
    // This parameter is required.
    shared_ptr<string> disSubOrderId_ {};
    shared_ptr<int32_t> isVoluntary_ {};
    // This parameter is required.
    shared_ptr<vector<TicketChangingApplyRequest::ModifyFlightInfoList>> modifyFlightInfoList_ {};
    // This parameter is required.
    shared_ptr<string> otaItemId_ {};
    shared_ptr<string> reason_ {};
    // This parameter is required.
    shared_ptr<string> sessionId_ {};
    shared_ptr<bool> whetherRetry_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
