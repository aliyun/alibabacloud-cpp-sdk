// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TRAINORDERQUERYV2RESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_TRAINORDERQUERYV2RESPONSEBODY_HPP_
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
  class TrainOrderQueryV2ResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TrainOrderQueryV2ResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(module, module_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(success, success_);
      DARABONBA_PTR_TO_JSON(traceId, traceId_);
    };
    friend void from_json(const Darabonba::Json& j, TrainOrderQueryV2ResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(module, module_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(success, success_);
      DARABONBA_PTR_FROM_JSON(traceId, traceId_);
    };
    TrainOrderQueryV2ResponseBody() = default ;
    TrainOrderQueryV2ResponseBody(const TrainOrderQueryV2ResponseBody &) = default ;
    TrainOrderQueryV2ResponseBody(TrainOrderQueryV2ResponseBody &&) = default ;
    TrainOrderQueryV2ResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TrainOrderQueryV2ResponseBody() = default ;
    TrainOrderQueryV2ResponseBody& operator=(const TrainOrderQueryV2ResponseBody &) = default ;
    TrainOrderQueryV2ResponseBody& operator=(TrainOrderQueryV2ResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Module : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Module& obj) { 
        DARABONBA_PTR_TO_JSON(change_ticket_info_list, changeTicketInfoList_);
        DARABONBA_PTR_TO_JSON(invoice_info, invoiceInfo_);
        DARABONBA_PTR_TO_JSON(order_base_info, orderBaseInfo_);
        DARABONBA_PTR_TO_JSON(passenger_info_list, passengerInfoList_);
        DARABONBA_PTR_TO_JSON(price_info_list, priceInfoList_);
        DARABONBA_PTR_TO_JSON(refund_ticket_info_list, refundTicketInfoList_);
        DARABONBA_PTR_TO_JSON(train_order_info, trainOrderInfo_);
      };
      friend void from_json(const Darabonba::Json& j, Module& obj) { 
        DARABONBA_PTR_FROM_JSON(change_ticket_info_list, changeTicketInfoList_);
        DARABONBA_PTR_FROM_JSON(invoice_info, invoiceInfo_);
        DARABONBA_PTR_FROM_JSON(order_base_info, orderBaseInfo_);
        DARABONBA_PTR_FROM_JSON(passenger_info_list, passengerInfoList_);
        DARABONBA_PTR_FROM_JSON(price_info_list, priceInfoList_);
        DARABONBA_PTR_FROM_JSON(refund_ticket_info_list, refundTicketInfoList_);
        DARABONBA_PTR_FROM_JSON(train_order_info, trainOrderInfo_);
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
      class TrainOrderInfo : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const TrainOrderInfo& obj) { 
          DARABONBA_PTR_TO_JSON(train_info_list, trainInfoList_);
          DARABONBA_PTR_TO_JSON(train_transfer_info, trainTransferInfo_);
        };
        friend void from_json(const Darabonba::Json& j, TrainOrderInfo& obj) { 
          DARABONBA_PTR_FROM_JSON(train_info_list, trainInfoList_);
          DARABONBA_PTR_FROM_JSON(train_transfer_info, trainTransferInfo_);
        };
        TrainOrderInfo() = default ;
        TrainOrderInfo(const TrainOrderInfo &) = default ;
        TrainOrderInfo(TrainOrderInfo &&) = default ;
        TrainOrderInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~TrainOrderInfo() = default ;
        TrainOrderInfo& operator=(const TrainOrderInfo &) = default ;
        TrainOrderInfo& operator=(TrainOrderInfo &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class TrainTransferInfo : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const TrainTransferInfo& obj) { 
            DARABONBA_PTR_TO_JSON(cost_time, costTime_);
            DARABONBA_PTR_TO_JSON(end_time, endTime_);
            DARABONBA_PTR_TO_JSON(from_city_ad_code, fromCityAdCode_);
            DARABONBA_PTR_TO_JSON(from_city_name, fromCityName_);
            DARABONBA_PTR_TO_JSON(from_station_name, fromStationName_);
            DARABONBA_PTR_TO_JSON(middle_city, middleCity_);
            DARABONBA_PTR_TO_JSON(middle_city_ad_code, middleCityAdCode_);
            DARABONBA_PTR_TO_JSON(middle_date, middleDate_);
            DARABONBA_PTR_TO_JSON(middle_station, middleStation_);
            DARABONBA_PTR_TO_JSON(middle_type, middleType_);
            DARABONBA_PTR_TO_JSON(start_time, startTime_);
            DARABONBA_PTR_TO_JSON(sub_from_city_ad_code, subFromCityAdCode_);
            DARABONBA_PTR_TO_JSON(sub_from_city_ad_name, subFromCityAdName_);
            DARABONBA_PTR_TO_JSON(sub_middle_city_code, subMiddleCityCode_);
            DARABONBA_PTR_TO_JSON(sub_middle_city_name, subMiddleCityName_);
            DARABONBA_PTR_TO_JSON(sub_to_city_code, subToCityCode_);
            DARABONBA_PTR_TO_JSON(sub_to_city_name, subToCityName_);
            DARABONBA_PTR_TO_JSON(to_city_ad_code, toCityAdCode_);
            DARABONBA_PTR_TO_JSON(to_city_name, toCityName_);
            DARABONBA_PTR_TO_JSON(to_station_name, toStationName_);
            DARABONBA_PTR_TO_JSON(wait_time, waitTime_);
          };
          friend void from_json(const Darabonba::Json& j, TrainTransferInfo& obj) { 
            DARABONBA_PTR_FROM_JSON(cost_time, costTime_);
            DARABONBA_PTR_FROM_JSON(end_time, endTime_);
            DARABONBA_PTR_FROM_JSON(from_city_ad_code, fromCityAdCode_);
            DARABONBA_PTR_FROM_JSON(from_city_name, fromCityName_);
            DARABONBA_PTR_FROM_JSON(from_station_name, fromStationName_);
            DARABONBA_PTR_FROM_JSON(middle_city, middleCity_);
            DARABONBA_PTR_FROM_JSON(middle_city_ad_code, middleCityAdCode_);
            DARABONBA_PTR_FROM_JSON(middle_date, middleDate_);
            DARABONBA_PTR_FROM_JSON(middle_station, middleStation_);
            DARABONBA_PTR_FROM_JSON(middle_type, middleType_);
            DARABONBA_PTR_FROM_JSON(start_time, startTime_);
            DARABONBA_PTR_FROM_JSON(sub_from_city_ad_code, subFromCityAdCode_);
            DARABONBA_PTR_FROM_JSON(sub_from_city_ad_name, subFromCityAdName_);
            DARABONBA_PTR_FROM_JSON(sub_middle_city_code, subMiddleCityCode_);
            DARABONBA_PTR_FROM_JSON(sub_middle_city_name, subMiddleCityName_);
            DARABONBA_PTR_FROM_JSON(sub_to_city_code, subToCityCode_);
            DARABONBA_PTR_FROM_JSON(sub_to_city_name, subToCityName_);
            DARABONBA_PTR_FROM_JSON(to_city_ad_code, toCityAdCode_);
            DARABONBA_PTR_FROM_JSON(to_city_name, toCityName_);
            DARABONBA_PTR_FROM_JSON(to_station_name, toStationName_);
            DARABONBA_PTR_FROM_JSON(wait_time, waitTime_);
          };
          TrainTransferInfo() = default ;
          TrainTransferInfo(const TrainTransferInfo &) = default ;
          TrainTransferInfo(TrainTransferInfo &&) = default ;
          TrainTransferInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~TrainTransferInfo() = default ;
          TrainTransferInfo& operator=(const TrainTransferInfo &) = default ;
          TrainTransferInfo& operator=(TrainTransferInfo &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->costTime_ == nullptr
        && this->endTime_ == nullptr && this->fromCityAdCode_ == nullptr && this->fromCityName_ == nullptr && this->fromStationName_ == nullptr && this->middleCity_ == nullptr
        && this->middleCityAdCode_ == nullptr && this->middleDate_ == nullptr && this->middleStation_ == nullptr && this->middleType_ == nullptr && this->startTime_ == nullptr
        && this->subFromCityAdCode_ == nullptr && this->subFromCityAdName_ == nullptr && this->subMiddleCityCode_ == nullptr && this->subMiddleCityName_ == nullptr && this->subToCityCode_ == nullptr
        && this->subToCityName_ == nullptr && this->toCityAdCode_ == nullptr && this->toCityName_ == nullptr && this->toStationName_ == nullptr && this->waitTime_ == nullptr; };
          // costTime Field Functions 
          bool hasCostTime() const { return this->costTime_ != nullptr;};
          void deleteCostTime() { this->costTime_ = nullptr;};
          inline string getCostTime() const { DARABONBA_PTR_GET_DEFAULT(costTime_, "") };
          inline TrainTransferInfo& setCostTime(string costTime) { DARABONBA_PTR_SET_VALUE(costTime_, costTime) };


          // endTime Field Functions 
          bool hasEndTime() const { return this->endTime_ != nullptr;};
          void deleteEndTime() { this->endTime_ = nullptr;};
          inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
          inline TrainTransferInfo& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


          // fromCityAdCode Field Functions 
          bool hasFromCityAdCode() const { return this->fromCityAdCode_ != nullptr;};
          void deleteFromCityAdCode() { this->fromCityAdCode_ = nullptr;};
          inline string getFromCityAdCode() const { DARABONBA_PTR_GET_DEFAULT(fromCityAdCode_, "") };
          inline TrainTransferInfo& setFromCityAdCode(string fromCityAdCode) { DARABONBA_PTR_SET_VALUE(fromCityAdCode_, fromCityAdCode) };


          // fromCityName Field Functions 
          bool hasFromCityName() const { return this->fromCityName_ != nullptr;};
          void deleteFromCityName() { this->fromCityName_ = nullptr;};
          inline string getFromCityName() const { DARABONBA_PTR_GET_DEFAULT(fromCityName_, "") };
          inline TrainTransferInfo& setFromCityName(string fromCityName) { DARABONBA_PTR_SET_VALUE(fromCityName_, fromCityName) };


          // fromStationName Field Functions 
          bool hasFromStationName() const { return this->fromStationName_ != nullptr;};
          void deleteFromStationName() { this->fromStationName_ = nullptr;};
          inline string getFromStationName() const { DARABONBA_PTR_GET_DEFAULT(fromStationName_, "") };
          inline TrainTransferInfo& setFromStationName(string fromStationName) { DARABONBA_PTR_SET_VALUE(fromStationName_, fromStationName) };


          // middleCity Field Functions 
          bool hasMiddleCity() const { return this->middleCity_ != nullptr;};
          void deleteMiddleCity() { this->middleCity_ = nullptr;};
          inline string getMiddleCity() const { DARABONBA_PTR_GET_DEFAULT(middleCity_, "") };
          inline TrainTransferInfo& setMiddleCity(string middleCity) { DARABONBA_PTR_SET_VALUE(middleCity_, middleCity) };


          // middleCityAdCode Field Functions 
          bool hasMiddleCityAdCode() const { return this->middleCityAdCode_ != nullptr;};
          void deleteMiddleCityAdCode() { this->middleCityAdCode_ = nullptr;};
          inline string getMiddleCityAdCode() const { DARABONBA_PTR_GET_DEFAULT(middleCityAdCode_, "") };
          inline TrainTransferInfo& setMiddleCityAdCode(string middleCityAdCode) { DARABONBA_PTR_SET_VALUE(middleCityAdCode_, middleCityAdCode) };


          // middleDate Field Functions 
          bool hasMiddleDate() const { return this->middleDate_ != nullptr;};
          void deleteMiddleDate() { this->middleDate_ = nullptr;};
          inline string getMiddleDate() const { DARABONBA_PTR_GET_DEFAULT(middleDate_, "") };
          inline TrainTransferInfo& setMiddleDate(string middleDate) { DARABONBA_PTR_SET_VALUE(middleDate_, middleDate) };


          // middleStation Field Functions 
          bool hasMiddleStation() const { return this->middleStation_ != nullptr;};
          void deleteMiddleStation() { this->middleStation_ = nullptr;};
          inline string getMiddleStation() const { DARABONBA_PTR_GET_DEFAULT(middleStation_, "") };
          inline TrainTransferInfo& setMiddleStation(string middleStation) { DARABONBA_PTR_SET_VALUE(middleStation_, middleStation) };


          // middleType Field Functions 
          bool hasMiddleType() const { return this->middleType_ != nullptr;};
          void deleteMiddleType() { this->middleType_ = nullptr;};
          inline string getMiddleType() const { DARABONBA_PTR_GET_DEFAULT(middleType_, "") };
          inline TrainTransferInfo& setMiddleType(string middleType) { DARABONBA_PTR_SET_VALUE(middleType_, middleType) };


          // startTime Field Functions 
          bool hasStartTime() const { return this->startTime_ != nullptr;};
          void deleteStartTime() { this->startTime_ = nullptr;};
          inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
          inline TrainTransferInfo& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


          // subFromCityAdCode Field Functions 
          bool hasSubFromCityAdCode() const { return this->subFromCityAdCode_ != nullptr;};
          void deleteSubFromCityAdCode() { this->subFromCityAdCode_ = nullptr;};
          inline string getSubFromCityAdCode() const { DARABONBA_PTR_GET_DEFAULT(subFromCityAdCode_, "") };
          inline TrainTransferInfo& setSubFromCityAdCode(string subFromCityAdCode) { DARABONBA_PTR_SET_VALUE(subFromCityAdCode_, subFromCityAdCode) };


          // subFromCityAdName Field Functions 
          bool hasSubFromCityAdName() const { return this->subFromCityAdName_ != nullptr;};
          void deleteSubFromCityAdName() { this->subFromCityAdName_ = nullptr;};
          inline string getSubFromCityAdName() const { DARABONBA_PTR_GET_DEFAULT(subFromCityAdName_, "") };
          inline TrainTransferInfo& setSubFromCityAdName(string subFromCityAdName) { DARABONBA_PTR_SET_VALUE(subFromCityAdName_, subFromCityAdName) };


          // subMiddleCityCode Field Functions 
          bool hasSubMiddleCityCode() const { return this->subMiddleCityCode_ != nullptr;};
          void deleteSubMiddleCityCode() { this->subMiddleCityCode_ = nullptr;};
          inline string getSubMiddleCityCode() const { DARABONBA_PTR_GET_DEFAULT(subMiddleCityCode_, "") };
          inline TrainTransferInfo& setSubMiddleCityCode(string subMiddleCityCode) { DARABONBA_PTR_SET_VALUE(subMiddleCityCode_, subMiddleCityCode) };


          // subMiddleCityName Field Functions 
          bool hasSubMiddleCityName() const { return this->subMiddleCityName_ != nullptr;};
          void deleteSubMiddleCityName() { this->subMiddleCityName_ = nullptr;};
          inline string getSubMiddleCityName() const { DARABONBA_PTR_GET_DEFAULT(subMiddleCityName_, "") };
          inline TrainTransferInfo& setSubMiddleCityName(string subMiddleCityName) { DARABONBA_PTR_SET_VALUE(subMiddleCityName_, subMiddleCityName) };


          // subToCityCode Field Functions 
          bool hasSubToCityCode() const { return this->subToCityCode_ != nullptr;};
          void deleteSubToCityCode() { this->subToCityCode_ = nullptr;};
          inline string getSubToCityCode() const { DARABONBA_PTR_GET_DEFAULT(subToCityCode_, "") };
          inline TrainTransferInfo& setSubToCityCode(string subToCityCode) { DARABONBA_PTR_SET_VALUE(subToCityCode_, subToCityCode) };


          // subToCityName Field Functions 
          bool hasSubToCityName() const { return this->subToCityName_ != nullptr;};
          void deleteSubToCityName() { this->subToCityName_ = nullptr;};
          inline string getSubToCityName() const { DARABONBA_PTR_GET_DEFAULT(subToCityName_, "") };
          inline TrainTransferInfo& setSubToCityName(string subToCityName) { DARABONBA_PTR_SET_VALUE(subToCityName_, subToCityName) };


          // toCityAdCode Field Functions 
          bool hasToCityAdCode() const { return this->toCityAdCode_ != nullptr;};
          void deleteToCityAdCode() { this->toCityAdCode_ = nullptr;};
          inline string getToCityAdCode() const { DARABONBA_PTR_GET_DEFAULT(toCityAdCode_, "") };
          inline TrainTransferInfo& setToCityAdCode(string toCityAdCode) { DARABONBA_PTR_SET_VALUE(toCityAdCode_, toCityAdCode) };


          // toCityName Field Functions 
          bool hasToCityName() const { return this->toCityName_ != nullptr;};
          void deleteToCityName() { this->toCityName_ = nullptr;};
          inline string getToCityName() const { DARABONBA_PTR_GET_DEFAULT(toCityName_, "") };
          inline TrainTransferInfo& setToCityName(string toCityName) { DARABONBA_PTR_SET_VALUE(toCityName_, toCityName) };


          // toStationName Field Functions 
          bool hasToStationName() const { return this->toStationName_ != nullptr;};
          void deleteToStationName() { this->toStationName_ = nullptr;};
          inline string getToStationName() const { DARABONBA_PTR_GET_DEFAULT(toStationName_, "") };
          inline TrainTransferInfo& setToStationName(string toStationName) { DARABONBA_PTR_SET_VALUE(toStationName_, toStationName) };


          // waitTime Field Functions 
          bool hasWaitTime() const { return this->waitTime_ != nullptr;};
          void deleteWaitTime() { this->waitTime_ = nullptr;};
          inline string getWaitTime() const { DARABONBA_PTR_GET_DEFAULT(waitTime_, "") };
          inline TrainTransferInfo& setWaitTime(string waitTime) { DARABONBA_PTR_SET_VALUE(waitTime_, waitTime) };


        protected:
          shared_ptr<string> costTime_ {};
          shared_ptr<string> endTime_ {};
          shared_ptr<string> fromCityAdCode_ {};
          shared_ptr<string> fromCityName_ {};
          shared_ptr<string> fromStationName_ {};
          shared_ptr<string> middleCity_ {};
          shared_ptr<string> middleCityAdCode_ {};
          shared_ptr<string> middleDate_ {};
          shared_ptr<string> middleStation_ {};
          shared_ptr<string> middleType_ {};
          shared_ptr<string> startTime_ {};
          shared_ptr<string> subFromCityAdCode_ {};
          shared_ptr<string> subFromCityAdName_ {};
          shared_ptr<string> subMiddleCityCode_ {};
          shared_ptr<string> subMiddleCityName_ {};
          shared_ptr<string> subToCityCode_ {};
          shared_ptr<string> subToCityName_ {};
          shared_ptr<string> toCityAdCode_ {};
          shared_ptr<string> toCityName_ {};
          shared_ptr<string> toStationName_ {};
          shared_ptr<string> waitTime_ {};
        };

        class TrainInfoList : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const TrainInfoList& obj) { 
            DARABONBA_PTR_TO_JSON(arr_time, arrTime_);
            DARABONBA_PTR_TO_JSON(dep_time, depTime_);
            DARABONBA_PTR_TO_JSON(from_city_ad_code, fromCityAdCode_);
            DARABONBA_PTR_TO_JSON(from_city_name, fromCityName_);
            DARABONBA_PTR_TO_JSON(from_station_name, fromStationName_);
            DARABONBA_PTR_TO_JSON(item_id, itemId_);
            DARABONBA_PTR_TO_JSON(run_time, runTime_);
            DARABONBA_PTR_TO_JSON(sub_from_city_ad_code, subFromCityAdCode_);
            DARABONBA_PTR_TO_JSON(sub_from_city_ad_name, subFromCityAdName_);
            DARABONBA_PTR_TO_JSON(sub_to_city_code, subToCityCode_);
            DARABONBA_PTR_TO_JSON(sub_to_city_name, subToCityName_);
            DARABONBA_PTR_TO_JSON(to_city_ad_code, toCityAdCode_);
            DARABONBA_PTR_TO_JSON(to_city_name, toCityName_);
            DARABONBA_PTR_TO_JSON(to_station_name, toStationName_);
            DARABONBA_PTR_TO_JSON(train_no, trainNo_);
            DARABONBA_PTR_TO_JSON(train_ticket_infos, trainTicketInfos_);
          };
          friend void from_json(const Darabonba::Json& j, TrainInfoList& obj) { 
            DARABONBA_PTR_FROM_JSON(arr_time, arrTime_);
            DARABONBA_PTR_FROM_JSON(dep_time, depTime_);
            DARABONBA_PTR_FROM_JSON(from_city_ad_code, fromCityAdCode_);
            DARABONBA_PTR_FROM_JSON(from_city_name, fromCityName_);
            DARABONBA_PTR_FROM_JSON(from_station_name, fromStationName_);
            DARABONBA_PTR_FROM_JSON(item_id, itemId_);
            DARABONBA_PTR_FROM_JSON(run_time, runTime_);
            DARABONBA_PTR_FROM_JSON(sub_from_city_ad_code, subFromCityAdCode_);
            DARABONBA_PTR_FROM_JSON(sub_from_city_ad_name, subFromCityAdName_);
            DARABONBA_PTR_FROM_JSON(sub_to_city_code, subToCityCode_);
            DARABONBA_PTR_FROM_JSON(sub_to_city_name, subToCityName_);
            DARABONBA_PTR_FROM_JSON(to_city_ad_code, toCityAdCode_);
            DARABONBA_PTR_FROM_JSON(to_city_name, toCityName_);
            DARABONBA_PTR_FROM_JSON(to_station_name, toStationName_);
            DARABONBA_PTR_FROM_JSON(train_no, trainNo_);
            DARABONBA_PTR_FROM_JSON(train_ticket_infos, trainTicketInfos_);
          };
          TrainInfoList() = default ;
          TrainInfoList(const TrainInfoList &) = default ;
          TrainInfoList(TrainInfoList &&) = default ;
          TrainInfoList(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~TrainInfoList() = default ;
          TrainInfoList& operator=(const TrainInfoList &) = default ;
          TrainInfoList& operator=(TrainInfoList &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class TrainTicketInfos : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const TrainTicketInfos& obj) { 
              DARABONBA_PTR_TO_JSON(changed, changed_);
              DARABONBA_PTR_TO_JSON(check_in_time, checkInTime_);
              DARABONBA_PTR_TO_JSON(check_out_time, checkOutTime_);
              DARABONBA_PTR_TO_JSON(coach_no, coachNo_);
              DARABONBA_PTR_TO_JSON(end_time, endTime_);
              DARABONBA_PTR_TO_JSON(gmt_create, gmtCreate_);
              DARABONBA_PTR_TO_JSON(gmt_modify, gmtModify_);
              DARABONBA_PTR_TO_JSON(out_ticket_status, outTicketStatus_);
              DARABONBA_PTR_TO_JSON(pay_type, payType_);
              DARABONBA_PTR_TO_JSON(seat_no, seatNo_);
              DARABONBA_PTR_TO_JSON(seat_type_name, seatTypeName_);
              DARABONBA_PTR_TO_JSON(segment_index, segmentIndex_);
              DARABONBA_PTR_TO_JSON(service_fee, serviceFee_);
              DARABONBA_PTR_TO_JSON(short_ticket_no, shortTicketNo_);
              DARABONBA_PTR_TO_JSON(start_time, startTime_);
              DARABONBA_PTR_TO_JSON(ticket_entrance, ticketEntrance_);
              DARABONBA_PTR_TO_JSON(ticket_no, ticketNo_);
              DARABONBA_PTR_TO_JSON(ticket_price, ticketPrice_);
              DARABONBA_PTR_TO_JSON(ticket_status, ticketStatus_);
              DARABONBA_PTR_TO_JSON(train_type_name, trainTypeName_);
              DARABONBA_PTR_TO_JSON(use_ticket, useTicket_);
              DARABONBA_PTR_TO_JSON(user_id, userId_);
            };
            friend void from_json(const Darabonba::Json& j, TrainTicketInfos& obj) { 
              DARABONBA_PTR_FROM_JSON(changed, changed_);
              DARABONBA_PTR_FROM_JSON(check_in_time, checkInTime_);
              DARABONBA_PTR_FROM_JSON(check_out_time, checkOutTime_);
              DARABONBA_PTR_FROM_JSON(coach_no, coachNo_);
              DARABONBA_PTR_FROM_JSON(end_time, endTime_);
              DARABONBA_PTR_FROM_JSON(gmt_create, gmtCreate_);
              DARABONBA_PTR_FROM_JSON(gmt_modify, gmtModify_);
              DARABONBA_PTR_FROM_JSON(out_ticket_status, outTicketStatus_);
              DARABONBA_PTR_FROM_JSON(pay_type, payType_);
              DARABONBA_PTR_FROM_JSON(seat_no, seatNo_);
              DARABONBA_PTR_FROM_JSON(seat_type_name, seatTypeName_);
              DARABONBA_PTR_FROM_JSON(segment_index, segmentIndex_);
              DARABONBA_PTR_FROM_JSON(service_fee, serviceFee_);
              DARABONBA_PTR_FROM_JSON(short_ticket_no, shortTicketNo_);
              DARABONBA_PTR_FROM_JSON(start_time, startTime_);
              DARABONBA_PTR_FROM_JSON(ticket_entrance, ticketEntrance_);
              DARABONBA_PTR_FROM_JSON(ticket_no, ticketNo_);
              DARABONBA_PTR_FROM_JSON(ticket_price, ticketPrice_);
              DARABONBA_PTR_FROM_JSON(ticket_status, ticketStatus_);
              DARABONBA_PTR_FROM_JSON(train_type_name, trainTypeName_);
              DARABONBA_PTR_FROM_JSON(use_ticket, useTicket_);
              DARABONBA_PTR_FROM_JSON(user_id, userId_);
            };
            TrainTicketInfos() = default ;
            TrainTicketInfos(const TrainTicketInfos &) = default ;
            TrainTicketInfos(TrainTicketInfos &&) = default ;
            TrainTicketInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~TrainTicketInfos() = default ;
            TrainTicketInfos& operator=(const TrainTicketInfos &) = default ;
            TrainTicketInfos& operator=(TrainTicketInfos &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->changed_ == nullptr
        && this->checkInTime_ == nullptr && this->checkOutTime_ == nullptr && this->coachNo_ == nullptr && this->endTime_ == nullptr && this->gmtCreate_ == nullptr
        && this->gmtModify_ == nullptr && this->outTicketStatus_ == nullptr && this->payType_ == nullptr && this->seatNo_ == nullptr && this->seatTypeName_ == nullptr
        && this->segmentIndex_ == nullptr && this->serviceFee_ == nullptr && this->shortTicketNo_ == nullptr && this->startTime_ == nullptr && this->ticketEntrance_ == nullptr
        && this->ticketNo_ == nullptr && this->ticketPrice_ == nullptr && this->ticketStatus_ == nullptr && this->trainTypeName_ == nullptr && this->useTicket_ == nullptr
        && this->userId_ == nullptr; };
            // changed Field Functions 
            bool hasChanged() const { return this->changed_ != nullptr;};
            void deleteChanged() { this->changed_ = nullptr;};
            inline bool getChanged() const { DARABONBA_PTR_GET_DEFAULT(changed_, false) };
            inline TrainTicketInfos& setChanged(bool changed) { DARABONBA_PTR_SET_VALUE(changed_, changed) };


            // checkInTime Field Functions 
            bool hasCheckInTime() const { return this->checkInTime_ != nullptr;};
            void deleteCheckInTime() { this->checkInTime_ = nullptr;};
            inline string getCheckInTime() const { DARABONBA_PTR_GET_DEFAULT(checkInTime_, "") };
            inline TrainTicketInfos& setCheckInTime(string checkInTime) { DARABONBA_PTR_SET_VALUE(checkInTime_, checkInTime) };


            // checkOutTime Field Functions 
            bool hasCheckOutTime() const { return this->checkOutTime_ != nullptr;};
            void deleteCheckOutTime() { this->checkOutTime_ = nullptr;};
            inline string getCheckOutTime() const { DARABONBA_PTR_GET_DEFAULT(checkOutTime_, "") };
            inline TrainTicketInfos& setCheckOutTime(string checkOutTime) { DARABONBA_PTR_SET_VALUE(checkOutTime_, checkOutTime) };


            // coachNo Field Functions 
            bool hasCoachNo() const { return this->coachNo_ != nullptr;};
            void deleteCoachNo() { this->coachNo_ = nullptr;};
            inline string getCoachNo() const { DARABONBA_PTR_GET_DEFAULT(coachNo_, "") };
            inline TrainTicketInfos& setCoachNo(string coachNo) { DARABONBA_PTR_SET_VALUE(coachNo_, coachNo) };


            // endTime Field Functions 
            bool hasEndTime() const { return this->endTime_ != nullptr;};
            void deleteEndTime() { this->endTime_ = nullptr;};
            inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
            inline TrainTicketInfos& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


            // gmtCreate Field Functions 
            bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
            void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
            inline string getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
            inline TrainTicketInfos& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


            // gmtModify Field Functions 
            bool hasGmtModify() const { return this->gmtModify_ != nullptr;};
            void deleteGmtModify() { this->gmtModify_ = nullptr;};
            inline string getGmtModify() const { DARABONBA_PTR_GET_DEFAULT(gmtModify_, "") };
            inline TrainTicketInfos& setGmtModify(string gmtModify) { DARABONBA_PTR_SET_VALUE(gmtModify_, gmtModify) };


            // outTicketStatus Field Functions 
            bool hasOutTicketStatus() const { return this->outTicketStatus_ != nullptr;};
            void deleteOutTicketStatus() { this->outTicketStatus_ = nullptr;};
            inline string getOutTicketStatus() const { DARABONBA_PTR_GET_DEFAULT(outTicketStatus_, "") };
            inline TrainTicketInfos& setOutTicketStatus(string outTicketStatus) { DARABONBA_PTR_SET_VALUE(outTicketStatus_, outTicketStatus) };


            // payType Field Functions 
            bool hasPayType() const { return this->payType_ != nullptr;};
            void deletePayType() { this->payType_ = nullptr;};
            inline int32_t getPayType() const { DARABONBA_PTR_GET_DEFAULT(payType_, 0) };
            inline TrainTicketInfos& setPayType(int32_t payType) { DARABONBA_PTR_SET_VALUE(payType_, payType) };


            // seatNo Field Functions 
            bool hasSeatNo() const { return this->seatNo_ != nullptr;};
            void deleteSeatNo() { this->seatNo_ = nullptr;};
            inline string getSeatNo() const { DARABONBA_PTR_GET_DEFAULT(seatNo_, "") };
            inline TrainTicketInfos& setSeatNo(string seatNo) { DARABONBA_PTR_SET_VALUE(seatNo_, seatNo) };


            // seatTypeName Field Functions 
            bool hasSeatTypeName() const { return this->seatTypeName_ != nullptr;};
            void deleteSeatTypeName() { this->seatTypeName_ = nullptr;};
            inline string getSeatTypeName() const { DARABONBA_PTR_GET_DEFAULT(seatTypeName_, "") };
            inline TrainTicketInfos& setSeatTypeName(string seatTypeName) { DARABONBA_PTR_SET_VALUE(seatTypeName_, seatTypeName) };


            // segmentIndex Field Functions 
            bool hasSegmentIndex() const { return this->segmentIndex_ != nullptr;};
            void deleteSegmentIndex() { this->segmentIndex_ = nullptr;};
            inline int32_t getSegmentIndex() const { DARABONBA_PTR_GET_DEFAULT(segmentIndex_, 0) };
            inline TrainTicketInfos& setSegmentIndex(int32_t segmentIndex) { DARABONBA_PTR_SET_VALUE(segmentIndex_, segmentIndex) };


            // serviceFee Field Functions 
            bool hasServiceFee() const { return this->serviceFee_ != nullptr;};
            void deleteServiceFee() { this->serviceFee_ = nullptr;};
            inline double getServiceFee() const { DARABONBA_PTR_GET_DEFAULT(serviceFee_, 0.0) };
            inline TrainTicketInfos& setServiceFee(double serviceFee) { DARABONBA_PTR_SET_VALUE(serviceFee_, serviceFee) };


            // shortTicketNo Field Functions 
            bool hasShortTicketNo() const { return this->shortTicketNo_ != nullptr;};
            void deleteShortTicketNo() { this->shortTicketNo_ = nullptr;};
            inline string getShortTicketNo() const { DARABONBA_PTR_GET_DEFAULT(shortTicketNo_, "") };
            inline TrainTicketInfos& setShortTicketNo(string shortTicketNo) { DARABONBA_PTR_SET_VALUE(shortTicketNo_, shortTicketNo) };


            // startTime Field Functions 
            bool hasStartTime() const { return this->startTime_ != nullptr;};
            void deleteStartTime() { this->startTime_ = nullptr;};
            inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
            inline TrainTicketInfos& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


            // ticketEntrance Field Functions 
            bool hasTicketEntrance() const { return this->ticketEntrance_ != nullptr;};
            void deleteTicketEntrance() { this->ticketEntrance_ = nullptr;};
            inline string getTicketEntrance() const { DARABONBA_PTR_GET_DEFAULT(ticketEntrance_, "") };
            inline TrainTicketInfos& setTicketEntrance(string ticketEntrance) { DARABONBA_PTR_SET_VALUE(ticketEntrance_, ticketEntrance) };


            // ticketNo Field Functions 
            bool hasTicketNo() const { return this->ticketNo_ != nullptr;};
            void deleteTicketNo() { this->ticketNo_ = nullptr;};
            inline string getTicketNo() const { DARABONBA_PTR_GET_DEFAULT(ticketNo_, "") };
            inline TrainTicketInfos& setTicketNo(string ticketNo) { DARABONBA_PTR_SET_VALUE(ticketNo_, ticketNo) };


            // ticketPrice Field Functions 
            bool hasTicketPrice() const { return this->ticketPrice_ != nullptr;};
            void deleteTicketPrice() { this->ticketPrice_ = nullptr;};
            inline double getTicketPrice() const { DARABONBA_PTR_GET_DEFAULT(ticketPrice_, 0.0) };
            inline TrainTicketInfos& setTicketPrice(double ticketPrice) { DARABONBA_PTR_SET_VALUE(ticketPrice_, ticketPrice) };


            // ticketStatus Field Functions 
            bool hasTicketStatus() const { return this->ticketStatus_ != nullptr;};
            void deleteTicketStatus() { this->ticketStatus_ = nullptr;};
            inline int32_t getTicketStatus() const { DARABONBA_PTR_GET_DEFAULT(ticketStatus_, 0) };
            inline TrainTicketInfos& setTicketStatus(int32_t ticketStatus) { DARABONBA_PTR_SET_VALUE(ticketStatus_, ticketStatus) };


            // trainTypeName Field Functions 
            bool hasTrainTypeName() const { return this->trainTypeName_ != nullptr;};
            void deleteTrainTypeName() { this->trainTypeName_ = nullptr;};
            inline string getTrainTypeName() const { DARABONBA_PTR_GET_DEFAULT(trainTypeName_, "") };
            inline TrainTicketInfos& setTrainTypeName(string trainTypeName) { DARABONBA_PTR_SET_VALUE(trainTypeName_, trainTypeName) };


            // useTicket Field Functions 
            bool hasUseTicket() const { return this->useTicket_ != nullptr;};
            void deleteUseTicket() { this->useTicket_ = nullptr;};
            inline string getUseTicket() const { DARABONBA_PTR_GET_DEFAULT(useTicket_, "") };
            inline TrainTicketInfos& setUseTicket(string useTicket) { DARABONBA_PTR_SET_VALUE(useTicket_, useTicket) };


            // userId Field Functions 
            bool hasUserId() const { return this->userId_ != nullptr;};
            void deleteUserId() { this->userId_ = nullptr;};
            inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
            inline TrainTicketInfos& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


          protected:
            shared_ptr<bool> changed_ {};
            shared_ptr<string> checkInTime_ {};
            shared_ptr<string> checkOutTime_ {};
            shared_ptr<string> coachNo_ {};
            shared_ptr<string> endTime_ {};
            shared_ptr<string> gmtCreate_ {};
            shared_ptr<string> gmtModify_ {};
            shared_ptr<string> outTicketStatus_ {};
            shared_ptr<int32_t> payType_ {};
            shared_ptr<string> seatNo_ {};
            shared_ptr<string> seatTypeName_ {};
            shared_ptr<int32_t> segmentIndex_ {};
            shared_ptr<double> serviceFee_ {};
            shared_ptr<string> shortTicketNo_ {};
            shared_ptr<string> startTime_ {};
            shared_ptr<string> ticketEntrance_ {};
            shared_ptr<string> ticketNo_ {};
            shared_ptr<double> ticketPrice_ {};
            shared_ptr<int32_t> ticketStatus_ {};
            shared_ptr<string> trainTypeName_ {};
            shared_ptr<string> useTicket_ {};
            shared_ptr<string> userId_ {};
          };

          virtual bool empty() const override { return this->arrTime_ == nullptr
        && this->depTime_ == nullptr && this->fromCityAdCode_ == nullptr && this->fromCityName_ == nullptr && this->fromStationName_ == nullptr && this->itemId_ == nullptr
        && this->runTime_ == nullptr && this->subFromCityAdCode_ == nullptr && this->subFromCityAdName_ == nullptr && this->subToCityCode_ == nullptr && this->subToCityName_ == nullptr
        && this->toCityAdCode_ == nullptr && this->toCityName_ == nullptr && this->toStationName_ == nullptr && this->trainNo_ == nullptr && this->trainTicketInfos_ == nullptr; };
          // arrTime Field Functions 
          bool hasArrTime() const { return this->arrTime_ != nullptr;};
          void deleteArrTime() { this->arrTime_ = nullptr;};
          inline string getArrTime() const { DARABONBA_PTR_GET_DEFAULT(arrTime_, "") };
          inline TrainInfoList& setArrTime(string arrTime) { DARABONBA_PTR_SET_VALUE(arrTime_, arrTime) };


          // depTime Field Functions 
          bool hasDepTime() const { return this->depTime_ != nullptr;};
          void deleteDepTime() { this->depTime_ = nullptr;};
          inline string getDepTime() const { DARABONBA_PTR_GET_DEFAULT(depTime_, "") };
          inline TrainInfoList& setDepTime(string depTime) { DARABONBA_PTR_SET_VALUE(depTime_, depTime) };


          // fromCityAdCode Field Functions 
          bool hasFromCityAdCode() const { return this->fromCityAdCode_ != nullptr;};
          void deleteFromCityAdCode() { this->fromCityAdCode_ = nullptr;};
          inline string getFromCityAdCode() const { DARABONBA_PTR_GET_DEFAULT(fromCityAdCode_, "") };
          inline TrainInfoList& setFromCityAdCode(string fromCityAdCode) { DARABONBA_PTR_SET_VALUE(fromCityAdCode_, fromCityAdCode) };


          // fromCityName Field Functions 
          bool hasFromCityName() const { return this->fromCityName_ != nullptr;};
          void deleteFromCityName() { this->fromCityName_ = nullptr;};
          inline string getFromCityName() const { DARABONBA_PTR_GET_DEFAULT(fromCityName_, "") };
          inline TrainInfoList& setFromCityName(string fromCityName) { DARABONBA_PTR_SET_VALUE(fromCityName_, fromCityName) };


          // fromStationName Field Functions 
          bool hasFromStationName() const { return this->fromStationName_ != nullptr;};
          void deleteFromStationName() { this->fromStationName_ = nullptr;};
          inline string getFromStationName() const { DARABONBA_PTR_GET_DEFAULT(fromStationName_, "") };
          inline TrainInfoList& setFromStationName(string fromStationName) { DARABONBA_PTR_SET_VALUE(fromStationName_, fromStationName) };


          // itemId Field Functions 
          bool hasItemId() const { return this->itemId_ != nullptr;};
          void deleteItemId() { this->itemId_ = nullptr;};
          inline int64_t getItemId() const { DARABONBA_PTR_GET_DEFAULT(itemId_, 0L) };
          inline TrainInfoList& setItemId(int64_t itemId) { DARABONBA_PTR_SET_VALUE(itemId_, itemId) };


          // runTime Field Functions 
          bool hasRunTime() const { return this->runTime_ != nullptr;};
          void deleteRunTime() { this->runTime_ = nullptr;};
          inline int64_t getRunTime() const { DARABONBA_PTR_GET_DEFAULT(runTime_, 0L) };
          inline TrainInfoList& setRunTime(int64_t runTime) { DARABONBA_PTR_SET_VALUE(runTime_, runTime) };


          // subFromCityAdCode Field Functions 
          bool hasSubFromCityAdCode() const { return this->subFromCityAdCode_ != nullptr;};
          void deleteSubFromCityAdCode() { this->subFromCityAdCode_ = nullptr;};
          inline string getSubFromCityAdCode() const { DARABONBA_PTR_GET_DEFAULT(subFromCityAdCode_, "") };
          inline TrainInfoList& setSubFromCityAdCode(string subFromCityAdCode) { DARABONBA_PTR_SET_VALUE(subFromCityAdCode_, subFromCityAdCode) };


          // subFromCityAdName Field Functions 
          bool hasSubFromCityAdName() const { return this->subFromCityAdName_ != nullptr;};
          void deleteSubFromCityAdName() { this->subFromCityAdName_ = nullptr;};
          inline string getSubFromCityAdName() const { DARABONBA_PTR_GET_DEFAULT(subFromCityAdName_, "") };
          inline TrainInfoList& setSubFromCityAdName(string subFromCityAdName) { DARABONBA_PTR_SET_VALUE(subFromCityAdName_, subFromCityAdName) };


          // subToCityCode Field Functions 
          bool hasSubToCityCode() const { return this->subToCityCode_ != nullptr;};
          void deleteSubToCityCode() { this->subToCityCode_ = nullptr;};
          inline string getSubToCityCode() const { DARABONBA_PTR_GET_DEFAULT(subToCityCode_, "") };
          inline TrainInfoList& setSubToCityCode(string subToCityCode) { DARABONBA_PTR_SET_VALUE(subToCityCode_, subToCityCode) };


          // subToCityName Field Functions 
          bool hasSubToCityName() const { return this->subToCityName_ != nullptr;};
          void deleteSubToCityName() { this->subToCityName_ = nullptr;};
          inline string getSubToCityName() const { DARABONBA_PTR_GET_DEFAULT(subToCityName_, "") };
          inline TrainInfoList& setSubToCityName(string subToCityName) { DARABONBA_PTR_SET_VALUE(subToCityName_, subToCityName) };


          // toCityAdCode Field Functions 
          bool hasToCityAdCode() const { return this->toCityAdCode_ != nullptr;};
          void deleteToCityAdCode() { this->toCityAdCode_ = nullptr;};
          inline string getToCityAdCode() const { DARABONBA_PTR_GET_DEFAULT(toCityAdCode_, "") };
          inline TrainInfoList& setToCityAdCode(string toCityAdCode) { DARABONBA_PTR_SET_VALUE(toCityAdCode_, toCityAdCode) };


          // toCityName Field Functions 
          bool hasToCityName() const { return this->toCityName_ != nullptr;};
          void deleteToCityName() { this->toCityName_ = nullptr;};
          inline string getToCityName() const { DARABONBA_PTR_GET_DEFAULT(toCityName_, "") };
          inline TrainInfoList& setToCityName(string toCityName) { DARABONBA_PTR_SET_VALUE(toCityName_, toCityName) };


          // toStationName Field Functions 
          bool hasToStationName() const { return this->toStationName_ != nullptr;};
          void deleteToStationName() { this->toStationName_ = nullptr;};
          inline string getToStationName() const { DARABONBA_PTR_GET_DEFAULT(toStationName_, "") };
          inline TrainInfoList& setToStationName(string toStationName) { DARABONBA_PTR_SET_VALUE(toStationName_, toStationName) };


          // trainNo Field Functions 
          bool hasTrainNo() const { return this->trainNo_ != nullptr;};
          void deleteTrainNo() { this->trainNo_ = nullptr;};
          inline string getTrainNo() const { DARABONBA_PTR_GET_DEFAULT(trainNo_, "") };
          inline TrainInfoList& setTrainNo(string trainNo) { DARABONBA_PTR_SET_VALUE(trainNo_, trainNo) };


          // trainTicketInfos Field Functions 
          bool hasTrainTicketInfos() const { return this->trainTicketInfos_ != nullptr;};
          void deleteTrainTicketInfos() { this->trainTicketInfos_ = nullptr;};
          inline const vector<TrainInfoList::TrainTicketInfos> & getTrainTicketInfos() const { DARABONBA_PTR_GET_CONST(trainTicketInfos_, vector<TrainInfoList::TrainTicketInfos>) };
          inline vector<TrainInfoList::TrainTicketInfos> getTrainTicketInfos() { DARABONBA_PTR_GET(trainTicketInfos_, vector<TrainInfoList::TrainTicketInfos>) };
          inline TrainInfoList& setTrainTicketInfos(const vector<TrainInfoList::TrainTicketInfos> & trainTicketInfos) { DARABONBA_PTR_SET_VALUE(trainTicketInfos_, trainTicketInfos) };
          inline TrainInfoList& setTrainTicketInfos(vector<TrainInfoList::TrainTicketInfos> && trainTicketInfos) { DARABONBA_PTR_SET_RVALUE(trainTicketInfos_, trainTicketInfos) };


        protected:
          shared_ptr<string> arrTime_ {};
          shared_ptr<string> depTime_ {};
          shared_ptr<string> fromCityAdCode_ {};
          shared_ptr<string> fromCityName_ {};
          shared_ptr<string> fromStationName_ {};
          shared_ptr<int64_t> itemId_ {};
          shared_ptr<int64_t> runTime_ {};
          shared_ptr<string> subFromCityAdCode_ {};
          shared_ptr<string> subFromCityAdName_ {};
          shared_ptr<string> subToCityCode_ {};
          shared_ptr<string> subToCityName_ {};
          shared_ptr<string> toCityAdCode_ {};
          shared_ptr<string> toCityName_ {};
          shared_ptr<string> toStationName_ {};
          shared_ptr<string> trainNo_ {};
          shared_ptr<vector<TrainInfoList::TrainTicketInfos>> trainTicketInfos_ {};
        };

        virtual bool empty() const override { return this->trainInfoList_ == nullptr
        && this->trainTransferInfo_ == nullptr; };
        // trainInfoList Field Functions 
        bool hasTrainInfoList() const { return this->trainInfoList_ != nullptr;};
        void deleteTrainInfoList() { this->trainInfoList_ = nullptr;};
        inline const vector<TrainOrderInfo::TrainInfoList> & getTrainInfoList() const { DARABONBA_PTR_GET_CONST(trainInfoList_, vector<TrainOrderInfo::TrainInfoList>) };
        inline vector<TrainOrderInfo::TrainInfoList> getTrainInfoList() { DARABONBA_PTR_GET(trainInfoList_, vector<TrainOrderInfo::TrainInfoList>) };
        inline TrainOrderInfo& setTrainInfoList(const vector<TrainOrderInfo::TrainInfoList> & trainInfoList) { DARABONBA_PTR_SET_VALUE(trainInfoList_, trainInfoList) };
        inline TrainOrderInfo& setTrainInfoList(vector<TrainOrderInfo::TrainInfoList> && trainInfoList) { DARABONBA_PTR_SET_RVALUE(trainInfoList_, trainInfoList) };


        // trainTransferInfo Field Functions 
        bool hasTrainTransferInfo() const { return this->trainTransferInfo_ != nullptr;};
        void deleteTrainTransferInfo() { this->trainTransferInfo_ = nullptr;};
        inline const TrainOrderInfo::TrainTransferInfo & getTrainTransferInfo() const { DARABONBA_PTR_GET_CONST(trainTransferInfo_, TrainOrderInfo::TrainTransferInfo) };
        inline TrainOrderInfo::TrainTransferInfo getTrainTransferInfo() { DARABONBA_PTR_GET(trainTransferInfo_, TrainOrderInfo::TrainTransferInfo) };
        inline TrainOrderInfo& setTrainTransferInfo(const TrainOrderInfo::TrainTransferInfo & trainTransferInfo) { DARABONBA_PTR_SET_VALUE(trainTransferInfo_, trainTransferInfo) };
        inline TrainOrderInfo& setTrainTransferInfo(TrainOrderInfo::TrainTransferInfo && trainTransferInfo) { DARABONBA_PTR_SET_RVALUE(trainTransferInfo_, trainTransferInfo) };


      protected:
        shared_ptr<vector<TrainOrderInfo::TrainInfoList>> trainInfoList_ {};
        shared_ptr<TrainOrderInfo::TrainTransferInfo> trainTransferInfo_ {};
      };

      class RefundTicketInfoList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const RefundTicketInfoList& obj) { 
          DARABONBA_PTR_TO_JSON(gmt_create, gmtCreate_);
          DARABONBA_PTR_TO_JSON(gmt_modify, gmtModify_);
          DARABONBA_PTR_TO_JSON(refund_apply_id, refundApplyId_);
          DARABONBA_PTR_TO_JSON(refund_fee, refundFee_);
          DARABONBA_PTR_TO_JSON(refund_service_fee, refundServiceFee_);
          DARABONBA_PTR_TO_JSON(ticket_no, ticketNo_);
          DARABONBA_PTR_TO_JSON(user_id, userId_);
        };
        friend void from_json(const Darabonba::Json& j, RefundTicketInfoList& obj) { 
          DARABONBA_PTR_FROM_JSON(gmt_create, gmtCreate_);
          DARABONBA_PTR_FROM_JSON(gmt_modify, gmtModify_);
          DARABONBA_PTR_FROM_JSON(refund_apply_id, refundApplyId_);
          DARABONBA_PTR_FROM_JSON(refund_fee, refundFee_);
          DARABONBA_PTR_FROM_JSON(refund_service_fee, refundServiceFee_);
          DARABONBA_PTR_FROM_JSON(ticket_no, ticketNo_);
          DARABONBA_PTR_FROM_JSON(user_id, userId_);
        };
        RefundTicketInfoList() = default ;
        RefundTicketInfoList(const RefundTicketInfoList &) = default ;
        RefundTicketInfoList(RefundTicketInfoList &&) = default ;
        RefundTicketInfoList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~RefundTicketInfoList() = default ;
        RefundTicketInfoList& operator=(const RefundTicketInfoList &) = default ;
        RefundTicketInfoList& operator=(RefundTicketInfoList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->gmtCreate_ == nullptr
        && this->gmtModify_ == nullptr && this->refundApplyId_ == nullptr && this->refundFee_ == nullptr && this->refundServiceFee_ == nullptr && this->ticketNo_ == nullptr
        && this->userId_ == nullptr; };
        // gmtCreate Field Functions 
        bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
        void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
        inline string getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
        inline RefundTicketInfoList& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


        // gmtModify Field Functions 
        bool hasGmtModify() const { return this->gmtModify_ != nullptr;};
        void deleteGmtModify() { this->gmtModify_ = nullptr;};
        inline string getGmtModify() const { DARABONBA_PTR_GET_DEFAULT(gmtModify_, "") };
        inline RefundTicketInfoList& setGmtModify(string gmtModify) { DARABONBA_PTR_SET_VALUE(gmtModify_, gmtModify) };


        // refundApplyId Field Functions 
        bool hasRefundApplyId() const { return this->refundApplyId_ != nullptr;};
        void deleteRefundApplyId() { this->refundApplyId_ = nullptr;};
        inline string getRefundApplyId() const { DARABONBA_PTR_GET_DEFAULT(refundApplyId_, "") };
        inline RefundTicketInfoList& setRefundApplyId(string refundApplyId) { DARABONBA_PTR_SET_VALUE(refundApplyId_, refundApplyId) };


        // refundFee Field Functions 
        bool hasRefundFee() const { return this->refundFee_ != nullptr;};
        void deleteRefundFee() { this->refundFee_ = nullptr;};
        inline double getRefundFee() const { DARABONBA_PTR_GET_DEFAULT(refundFee_, 0.0) };
        inline RefundTicketInfoList& setRefundFee(double refundFee) { DARABONBA_PTR_SET_VALUE(refundFee_, refundFee) };


        // refundServiceFee Field Functions 
        bool hasRefundServiceFee() const { return this->refundServiceFee_ != nullptr;};
        void deleteRefundServiceFee() { this->refundServiceFee_ = nullptr;};
        inline double getRefundServiceFee() const { DARABONBA_PTR_GET_DEFAULT(refundServiceFee_, 0.0) };
        inline RefundTicketInfoList& setRefundServiceFee(double refundServiceFee) { DARABONBA_PTR_SET_VALUE(refundServiceFee_, refundServiceFee) };


        // ticketNo Field Functions 
        bool hasTicketNo() const { return this->ticketNo_ != nullptr;};
        void deleteTicketNo() { this->ticketNo_ = nullptr;};
        inline string getTicketNo() const { DARABONBA_PTR_GET_DEFAULT(ticketNo_, "") };
        inline RefundTicketInfoList& setTicketNo(string ticketNo) { DARABONBA_PTR_SET_VALUE(ticketNo_, ticketNo) };


        // userId Field Functions 
        bool hasUserId() const { return this->userId_ != nullptr;};
        void deleteUserId() { this->userId_ = nullptr;};
        inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
        inline RefundTicketInfoList& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


      protected:
        shared_ptr<string> gmtCreate_ {};
        shared_ptr<string> gmtModify_ {};
        shared_ptr<string> refundApplyId_ {};
        shared_ptr<double> refundFee_ {};
        shared_ptr<double> refundServiceFee_ {};
        shared_ptr<string> ticketNo_ {};
        shared_ptr<string> userId_ {};
      };

      class PriceInfoList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const PriceInfoList& obj) { 
          DARABONBA_PTR_TO_JSON(category_code, categoryCode_);
          DARABONBA_PTR_TO_JSON(gmt_create, gmtCreate_);
          DARABONBA_PTR_TO_JSON(passenger_name, passengerName_);
          DARABONBA_PTR_TO_JSON(pay_type, payType_);
          DARABONBA_PTR_TO_JSON(price, price_);
          DARABONBA_PTR_TO_JSON(trade_id, tradeId_);
          DARABONBA_PTR_TO_JSON(type, type_);
        };
        friend void from_json(const Darabonba::Json& j, PriceInfoList& obj) { 
          DARABONBA_PTR_FROM_JSON(category_code, categoryCode_);
          DARABONBA_PTR_FROM_JSON(gmt_create, gmtCreate_);
          DARABONBA_PTR_FROM_JSON(passenger_name, passengerName_);
          DARABONBA_PTR_FROM_JSON(pay_type, payType_);
          DARABONBA_PTR_FROM_JSON(price, price_);
          DARABONBA_PTR_FROM_JSON(trade_id, tradeId_);
          DARABONBA_PTR_FROM_JSON(type, type_);
        };
        PriceInfoList() = default ;
        PriceInfoList(const PriceInfoList &) = default ;
        PriceInfoList(PriceInfoList &&) = default ;
        PriceInfoList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~PriceInfoList() = default ;
        PriceInfoList& operator=(const PriceInfoList &) = default ;
        PriceInfoList& operator=(PriceInfoList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->categoryCode_ == nullptr
        && this->gmtCreate_ == nullptr && this->passengerName_ == nullptr && this->payType_ == nullptr && this->price_ == nullptr && this->tradeId_ == nullptr
        && this->type_ == nullptr; };
        // categoryCode Field Functions 
        bool hasCategoryCode() const { return this->categoryCode_ != nullptr;};
        void deleteCategoryCode() { this->categoryCode_ = nullptr;};
        inline int32_t getCategoryCode() const { DARABONBA_PTR_GET_DEFAULT(categoryCode_, 0) };
        inline PriceInfoList& setCategoryCode(int32_t categoryCode) { DARABONBA_PTR_SET_VALUE(categoryCode_, categoryCode) };


        // gmtCreate Field Functions 
        bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
        void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
        inline string getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
        inline PriceInfoList& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


        // passengerName Field Functions 
        bool hasPassengerName() const { return this->passengerName_ != nullptr;};
        void deletePassengerName() { this->passengerName_ = nullptr;};
        inline string getPassengerName() const { DARABONBA_PTR_GET_DEFAULT(passengerName_, "") };
        inline PriceInfoList& setPassengerName(string passengerName) { DARABONBA_PTR_SET_VALUE(passengerName_, passengerName) };


        // payType Field Functions 
        bool hasPayType() const { return this->payType_ != nullptr;};
        void deletePayType() { this->payType_ = nullptr;};
        inline int32_t getPayType() const { DARABONBA_PTR_GET_DEFAULT(payType_, 0) };
        inline PriceInfoList& setPayType(int32_t payType) { DARABONBA_PTR_SET_VALUE(payType_, payType) };


        // price Field Functions 
        bool hasPrice() const { return this->price_ != nullptr;};
        void deletePrice() { this->price_ = nullptr;};
        inline double getPrice() const { DARABONBA_PTR_GET_DEFAULT(price_, 0.0) };
        inline PriceInfoList& setPrice(double price) { DARABONBA_PTR_SET_VALUE(price_, price) };


        // tradeId Field Functions 
        bool hasTradeId() const { return this->tradeId_ != nullptr;};
        void deleteTradeId() { this->tradeId_ = nullptr;};
        inline string getTradeId() const { DARABONBA_PTR_GET_DEFAULT(tradeId_, "") };
        inline PriceInfoList& setTradeId(string tradeId) { DARABONBA_PTR_SET_VALUE(tradeId_, tradeId) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline int32_t getType() const { DARABONBA_PTR_GET_DEFAULT(type_, 0) };
        inline PriceInfoList& setType(int32_t type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      protected:
        shared_ptr<int32_t> categoryCode_ {};
        shared_ptr<string> gmtCreate_ {};
        shared_ptr<string> passengerName_ {};
        shared_ptr<int32_t> payType_ {};
        shared_ptr<double> price_ {};
        shared_ptr<string> tradeId_ {};
        shared_ptr<int32_t> type_ {};
      };

      class PassengerInfoList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const PassengerInfoList& obj) { 
          DARABONBA_PTR_TO_JSON(cost_center_id, costCenterId_);
          DARABONBA_PTR_TO_JSON(cost_center_name, costCenterName_);
          DARABONBA_PTR_TO_JSON(cost_center_number, costCenterNumber_);
          DARABONBA_PTR_TO_JSON(project_code, projectCode_);
          DARABONBA_PTR_TO_JSON(project_id, projectId_);
          DARABONBA_PTR_TO_JSON(project_title, projectTitle_);
          DARABONBA_PTR_TO_JSON(thirdpart_cost_center_id, thirdpartCostCenterId_);
          DARABONBA_PTR_TO_JSON(thirdpart_project_id, thirdpartProjectId_);
          DARABONBA_PTR_TO_JSON(user_id, userId_);
          DARABONBA_PTR_TO_JSON(user_name, userName_);
          DARABONBA_PTR_TO_JSON(user_type, userType_);
        };
        friend void from_json(const Darabonba::Json& j, PassengerInfoList& obj) { 
          DARABONBA_PTR_FROM_JSON(cost_center_id, costCenterId_);
          DARABONBA_PTR_FROM_JSON(cost_center_name, costCenterName_);
          DARABONBA_PTR_FROM_JSON(cost_center_number, costCenterNumber_);
          DARABONBA_PTR_FROM_JSON(project_code, projectCode_);
          DARABONBA_PTR_FROM_JSON(project_id, projectId_);
          DARABONBA_PTR_FROM_JSON(project_title, projectTitle_);
          DARABONBA_PTR_FROM_JSON(thirdpart_cost_center_id, thirdpartCostCenterId_);
          DARABONBA_PTR_FROM_JSON(thirdpart_project_id, thirdpartProjectId_);
          DARABONBA_PTR_FROM_JSON(user_id, userId_);
          DARABONBA_PTR_FROM_JSON(user_name, userName_);
          DARABONBA_PTR_FROM_JSON(user_type, userType_);
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
        virtual bool empty() const override { return this->costCenterId_ == nullptr
        && this->costCenterName_ == nullptr && this->costCenterNumber_ == nullptr && this->projectCode_ == nullptr && this->projectId_ == nullptr && this->projectTitle_ == nullptr
        && this->thirdpartCostCenterId_ == nullptr && this->thirdpartProjectId_ == nullptr && this->userId_ == nullptr && this->userName_ == nullptr && this->userType_ == nullptr; };
        // costCenterId Field Functions 
        bool hasCostCenterId() const { return this->costCenterId_ != nullptr;};
        void deleteCostCenterId() { this->costCenterId_ = nullptr;};
        inline int64_t getCostCenterId() const { DARABONBA_PTR_GET_DEFAULT(costCenterId_, 0L) };
        inline PassengerInfoList& setCostCenterId(int64_t costCenterId) { DARABONBA_PTR_SET_VALUE(costCenterId_, costCenterId) };


        // costCenterName Field Functions 
        bool hasCostCenterName() const { return this->costCenterName_ != nullptr;};
        void deleteCostCenterName() { this->costCenterName_ = nullptr;};
        inline string getCostCenterName() const { DARABONBA_PTR_GET_DEFAULT(costCenterName_, "") };
        inline PassengerInfoList& setCostCenterName(string costCenterName) { DARABONBA_PTR_SET_VALUE(costCenterName_, costCenterName) };


        // costCenterNumber Field Functions 
        bool hasCostCenterNumber() const { return this->costCenterNumber_ != nullptr;};
        void deleteCostCenterNumber() { this->costCenterNumber_ = nullptr;};
        inline string getCostCenterNumber() const { DARABONBA_PTR_GET_DEFAULT(costCenterNumber_, "") };
        inline PassengerInfoList& setCostCenterNumber(string costCenterNumber) { DARABONBA_PTR_SET_VALUE(costCenterNumber_, costCenterNumber) };


        // projectCode Field Functions 
        bool hasProjectCode() const { return this->projectCode_ != nullptr;};
        void deleteProjectCode() { this->projectCode_ = nullptr;};
        inline string getProjectCode() const { DARABONBA_PTR_GET_DEFAULT(projectCode_, "") };
        inline PassengerInfoList& setProjectCode(string projectCode) { DARABONBA_PTR_SET_VALUE(projectCode_, projectCode) };


        // projectId Field Functions 
        bool hasProjectId() const { return this->projectId_ != nullptr;};
        void deleteProjectId() { this->projectId_ = nullptr;};
        inline int64_t getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
        inline PassengerInfoList& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


        // projectTitle Field Functions 
        bool hasProjectTitle() const { return this->projectTitle_ != nullptr;};
        void deleteProjectTitle() { this->projectTitle_ = nullptr;};
        inline string getProjectTitle() const { DARABONBA_PTR_GET_DEFAULT(projectTitle_, "") };
        inline PassengerInfoList& setProjectTitle(string projectTitle) { DARABONBA_PTR_SET_VALUE(projectTitle_, projectTitle) };


        // thirdpartCostCenterId Field Functions 
        bool hasThirdpartCostCenterId() const { return this->thirdpartCostCenterId_ != nullptr;};
        void deleteThirdpartCostCenterId() { this->thirdpartCostCenterId_ = nullptr;};
        inline string getThirdpartCostCenterId() const { DARABONBA_PTR_GET_DEFAULT(thirdpartCostCenterId_, "") };
        inline PassengerInfoList& setThirdpartCostCenterId(string thirdpartCostCenterId) { DARABONBA_PTR_SET_VALUE(thirdpartCostCenterId_, thirdpartCostCenterId) };


        // thirdpartProjectId Field Functions 
        bool hasThirdpartProjectId() const { return this->thirdpartProjectId_ != nullptr;};
        void deleteThirdpartProjectId() { this->thirdpartProjectId_ = nullptr;};
        inline string getThirdpartProjectId() const { DARABONBA_PTR_GET_DEFAULT(thirdpartProjectId_, "") };
        inline PassengerInfoList& setThirdpartProjectId(string thirdpartProjectId) { DARABONBA_PTR_SET_VALUE(thirdpartProjectId_, thirdpartProjectId) };


        // userId Field Functions 
        bool hasUserId() const { return this->userId_ != nullptr;};
        void deleteUserId() { this->userId_ = nullptr;};
        inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
        inline PassengerInfoList& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


        // userName Field Functions 
        bool hasUserName() const { return this->userName_ != nullptr;};
        void deleteUserName() { this->userName_ = nullptr;};
        inline string getUserName() const { DARABONBA_PTR_GET_DEFAULT(userName_, "") };
        inline PassengerInfoList& setUserName(string userName) { DARABONBA_PTR_SET_VALUE(userName_, userName) };


        // userType Field Functions 
        bool hasUserType() const { return this->userType_ != nullptr;};
        void deleteUserType() { this->userType_ = nullptr;};
        inline int32_t getUserType() const { DARABONBA_PTR_GET_DEFAULT(userType_, 0) };
        inline PassengerInfoList& setUserType(int32_t userType) { DARABONBA_PTR_SET_VALUE(userType_, userType) };


      protected:
        shared_ptr<int64_t> costCenterId_ {};
        shared_ptr<string> costCenterName_ {};
        shared_ptr<string> costCenterNumber_ {};
        shared_ptr<string> projectCode_ {};
        shared_ptr<int64_t> projectId_ {};
        shared_ptr<string> projectTitle_ {};
        shared_ptr<string> thirdpartCostCenterId_ {};
        shared_ptr<string> thirdpartProjectId_ {};
        shared_ptr<string> userId_ {};
        shared_ptr<string> userName_ {};
        shared_ptr<int32_t> userType_ {};
      };

      class OrderBaseInfo : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const OrderBaseInfo& obj) { 
          DARABONBA_PTR_TO_JSON(apply_id, applyId_);
          DARABONBA_PTR_TO_JSON(btrip_title, btripTitle_);
          DARABONBA_PTR_TO_JSON(contact_name, contactName_);
          DARABONBA_PTR_TO_JSON(contact_phone, contactPhone_);
          DARABONBA_PTR_TO_JSON(corp_id, corpId_);
          DARABONBA_PTR_TO_JSON(corp_name, corpName_);
          DARABONBA_PTR_TO_JSON(depart_id, departId_);
          DARABONBA_PTR_TO_JSON(depart_name, departName_);
          DARABONBA_PTR_TO_JSON(exceed_apply_id, exceedApplyId_);
          DARABONBA_PTR_TO_JSON(exceed_thirdpart_apply_id, exceedThirdpartApplyId_);
          DARABONBA_PTR_TO_JSON(gmt_create, gmtCreate_);
          DARABONBA_PTR_TO_JSON(gmt_modify, gmtModify_);
          DARABONBA_PTR_TO_JSON(itinerary_id, itineraryId_);
          DARABONBA_PTR_TO_JSON(order_id, orderId_);
          DARABONBA_PTR_TO_JSON(order_status, orderStatus_);
          DARABONBA_PTR_TO_JSON(replenish_order_ids, replenishOrderIds_);
          DARABONBA_PTR_TO_JSON(replenish_original_order_id, replenishOriginalOrderId_);
          DARABONBA_PTR_TO_JSON(thirdPart_business_id, thirdPartBusinessId_);
          DARABONBA_PTR_TO_JSON(thirdpart_apply_id, thirdpartApplyId_);
          DARABONBA_PTR_TO_JSON(thirdpart_depart_id, thirdpartDepartId_);
          DARABONBA_PTR_TO_JSON(thirdpart_itinerary_id, thirdpartItineraryId_);
          DARABONBA_PTR_TO_JSON(trip_type, tripType_);
          DARABONBA_PTR_TO_JSON(user_id, userId_);
          DARABONBA_PTR_TO_JSON(user_nick, userNick_);
        };
        friend void from_json(const Darabonba::Json& j, OrderBaseInfo& obj) { 
          DARABONBA_PTR_FROM_JSON(apply_id, applyId_);
          DARABONBA_PTR_FROM_JSON(btrip_title, btripTitle_);
          DARABONBA_PTR_FROM_JSON(contact_name, contactName_);
          DARABONBA_PTR_FROM_JSON(contact_phone, contactPhone_);
          DARABONBA_PTR_FROM_JSON(corp_id, corpId_);
          DARABONBA_PTR_FROM_JSON(corp_name, corpName_);
          DARABONBA_PTR_FROM_JSON(depart_id, departId_);
          DARABONBA_PTR_FROM_JSON(depart_name, departName_);
          DARABONBA_PTR_FROM_JSON(exceed_apply_id, exceedApplyId_);
          DARABONBA_PTR_FROM_JSON(exceed_thirdpart_apply_id, exceedThirdpartApplyId_);
          DARABONBA_PTR_FROM_JSON(gmt_create, gmtCreate_);
          DARABONBA_PTR_FROM_JSON(gmt_modify, gmtModify_);
          DARABONBA_PTR_FROM_JSON(itinerary_id, itineraryId_);
          DARABONBA_PTR_FROM_JSON(order_id, orderId_);
          DARABONBA_PTR_FROM_JSON(order_status, orderStatus_);
          DARABONBA_PTR_FROM_JSON(replenish_order_ids, replenishOrderIds_);
          DARABONBA_PTR_FROM_JSON(replenish_original_order_id, replenishOriginalOrderId_);
          DARABONBA_PTR_FROM_JSON(thirdPart_business_id, thirdPartBusinessId_);
          DARABONBA_PTR_FROM_JSON(thirdpart_apply_id, thirdpartApplyId_);
          DARABONBA_PTR_FROM_JSON(thirdpart_depart_id, thirdpartDepartId_);
          DARABONBA_PTR_FROM_JSON(thirdpart_itinerary_id, thirdpartItineraryId_);
          DARABONBA_PTR_FROM_JSON(trip_type, tripType_);
          DARABONBA_PTR_FROM_JSON(user_id, userId_);
          DARABONBA_PTR_FROM_JSON(user_nick, userNick_);
        };
        OrderBaseInfo() = default ;
        OrderBaseInfo(const OrderBaseInfo &) = default ;
        OrderBaseInfo(OrderBaseInfo &&) = default ;
        OrderBaseInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~OrderBaseInfo() = default ;
        OrderBaseInfo& operator=(const OrderBaseInfo &) = default ;
        OrderBaseInfo& operator=(OrderBaseInfo &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->applyId_ == nullptr
        && this->btripTitle_ == nullptr && this->contactName_ == nullptr && this->contactPhone_ == nullptr && this->corpId_ == nullptr && this->corpName_ == nullptr
        && this->departId_ == nullptr && this->departName_ == nullptr && this->exceedApplyId_ == nullptr && this->exceedThirdpartApplyId_ == nullptr && this->gmtCreate_ == nullptr
        && this->gmtModify_ == nullptr && this->itineraryId_ == nullptr && this->orderId_ == nullptr && this->orderStatus_ == nullptr && this->replenishOrderIds_ == nullptr
        && this->replenishOriginalOrderId_ == nullptr && this->thirdPartBusinessId_ == nullptr && this->thirdpartApplyId_ == nullptr && this->thirdpartDepartId_ == nullptr && this->thirdpartItineraryId_ == nullptr
        && this->tripType_ == nullptr && this->userId_ == nullptr && this->userNick_ == nullptr; };
        // applyId Field Functions 
        bool hasApplyId() const { return this->applyId_ != nullptr;};
        void deleteApplyId() { this->applyId_ = nullptr;};
        inline string getApplyId() const { DARABONBA_PTR_GET_DEFAULT(applyId_, "") };
        inline OrderBaseInfo& setApplyId(string applyId) { DARABONBA_PTR_SET_VALUE(applyId_, applyId) };


        // btripTitle Field Functions 
        bool hasBtripTitle() const { return this->btripTitle_ != nullptr;};
        void deleteBtripTitle() { this->btripTitle_ = nullptr;};
        inline string getBtripTitle() const { DARABONBA_PTR_GET_DEFAULT(btripTitle_, "") };
        inline OrderBaseInfo& setBtripTitle(string btripTitle) { DARABONBA_PTR_SET_VALUE(btripTitle_, btripTitle) };


        // contactName Field Functions 
        bool hasContactName() const { return this->contactName_ != nullptr;};
        void deleteContactName() { this->contactName_ = nullptr;};
        inline string getContactName() const { DARABONBA_PTR_GET_DEFAULT(contactName_, "") };
        inline OrderBaseInfo& setContactName(string contactName) { DARABONBA_PTR_SET_VALUE(contactName_, contactName) };


        // contactPhone Field Functions 
        bool hasContactPhone() const { return this->contactPhone_ != nullptr;};
        void deleteContactPhone() { this->contactPhone_ = nullptr;};
        inline string getContactPhone() const { DARABONBA_PTR_GET_DEFAULT(contactPhone_, "") };
        inline OrderBaseInfo& setContactPhone(string contactPhone) { DARABONBA_PTR_SET_VALUE(contactPhone_, contactPhone) };


        // corpId Field Functions 
        bool hasCorpId() const { return this->corpId_ != nullptr;};
        void deleteCorpId() { this->corpId_ = nullptr;};
        inline string getCorpId() const { DARABONBA_PTR_GET_DEFAULT(corpId_, "") };
        inline OrderBaseInfo& setCorpId(string corpId) { DARABONBA_PTR_SET_VALUE(corpId_, corpId) };


        // corpName Field Functions 
        bool hasCorpName() const { return this->corpName_ != nullptr;};
        void deleteCorpName() { this->corpName_ = nullptr;};
        inline string getCorpName() const { DARABONBA_PTR_GET_DEFAULT(corpName_, "") };
        inline OrderBaseInfo& setCorpName(string corpName) { DARABONBA_PTR_SET_VALUE(corpName_, corpName) };


        // departId Field Functions 
        bool hasDepartId() const { return this->departId_ != nullptr;};
        void deleteDepartId() { this->departId_ = nullptr;};
        inline string getDepartId() const { DARABONBA_PTR_GET_DEFAULT(departId_, "") };
        inline OrderBaseInfo& setDepartId(string departId) { DARABONBA_PTR_SET_VALUE(departId_, departId) };


        // departName Field Functions 
        bool hasDepartName() const { return this->departName_ != nullptr;};
        void deleteDepartName() { this->departName_ = nullptr;};
        inline string getDepartName() const { DARABONBA_PTR_GET_DEFAULT(departName_, "") };
        inline OrderBaseInfo& setDepartName(string departName) { DARABONBA_PTR_SET_VALUE(departName_, departName) };


        // exceedApplyId Field Functions 
        bool hasExceedApplyId() const { return this->exceedApplyId_ != nullptr;};
        void deleteExceedApplyId() { this->exceedApplyId_ = nullptr;};
        inline string getExceedApplyId() const { DARABONBA_PTR_GET_DEFAULT(exceedApplyId_, "") };
        inline OrderBaseInfo& setExceedApplyId(string exceedApplyId) { DARABONBA_PTR_SET_VALUE(exceedApplyId_, exceedApplyId) };


        // exceedThirdpartApplyId Field Functions 
        bool hasExceedThirdpartApplyId() const { return this->exceedThirdpartApplyId_ != nullptr;};
        void deleteExceedThirdpartApplyId() { this->exceedThirdpartApplyId_ = nullptr;};
        inline string getExceedThirdpartApplyId() const { DARABONBA_PTR_GET_DEFAULT(exceedThirdpartApplyId_, "") };
        inline OrderBaseInfo& setExceedThirdpartApplyId(string exceedThirdpartApplyId) { DARABONBA_PTR_SET_VALUE(exceedThirdpartApplyId_, exceedThirdpartApplyId) };


        // gmtCreate Field Functions 
        bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
        void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
        inline string getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
        inline OrderBaseInfo& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


        // gmtModify Field Functions 
        bool hasGmtModify() const { return this->gmtModify_ != nullptr;};
        void deleteGmtModify() { this->gmtModify_ = nullptr;};
        inline string getGmtModify() const { DARABONBA_PTR_GET_DEFAULT(gmtModify_, "") };
        inline OrderBaseInfo& setGmtModify(string gmtModify) { DARABONBA_PTR_SET_VALUE(gmtModify_, gmtModify) };


        // itineraryId Field Functions 
        bool hasItineraryId() const { return this->itineraryId_ != nullptr;};
        void deleteItineraryId() { this->itineraryId_ = nullptr;};
        inline string getItineraryId() const { DARABONBA_PTR_GET_DEFAULT(itineraryId_, "") };
        inline OrderBaseInfo& setItineraryId(string itineraryId) { DARABONBA_PTR_SET_VALUE(itineraryId_, itineraryId) };


        // orderId Field Functions 
        bool hasOrderId() const { return this->orderId_ != nullptr;};
        void deleteOrderId() { this->orderId_ = nullptr;};
        inline int64_t getOrderId() const { DARABONBA_PTR_GET_DEFAULT(orderId_, 0L) };
        inline OrderBaseInfo& setOrderId(int64_t orderId) { DARABONBA_PTR_SET_VALUE(orderId_, orderId) };


        // orderStatus Field Functions 
        bool hasOrderStatus() const { return this->orderStatus_ != nullptr;};
        void deleteOrderStatus() { this->orderStatus_ = nullptr;};
        inline int32_t getOrderStatus() const { DARABONBA_PTR_GET_DEFAULT(orderStatus_, 0) };
        inline OrderBaseInfo& setOrderStatus(int32_t orderStatus) { DARABONBA_PTR_SET_VALUE(orderStatus_, orderStatus) };


        // replenishOrderIds Field Functions 
        bool hasReplenishOrderIds() const { return this->replenishOrderIds_ != nullptr;};
        void deleteReplenishOrderIds() { this->replenishOrderIds_ = nullptr;};
        inline string getReplenishOrderIds() const { DARABONBA_PTR_GET_DEFAULT(replenishOrderIds_, "") };
        inline OrderBaseInfo& setReplenishOrderIds(string replenishOrderIds) { DARABONBA_PTR_SET_VALUE(replenishOrderIds_, replenishOrderIds) };


        // replenishOriginalOrderId Field Functions 
        bool hasReplenishOriginalOrderId() const { return this->replenishOriginalOrderId_ != nullptr;};
        void deleteReplenishOriginalOrderId() { this->replenishOriginalOrderId_ = nullptr;};
        inline string getReplenishOriginalOrderId() const { DARABONBA_PTR_GET_DEFAULT(replenishOriginalOrderId_, "") };
        inline OrderBaseInfo& setReplenishOriginalOrderId(string replenishOriginalOrderId) { DARABONBA_PTR_SET_VALUE(replenishOriginalOrderId_, replenishOriginalOrderId) };


        // thirdPartBusinessId Field Functions 
        bool hasThirdPartBusinessId() const { return this->thirdPartBusinessId_ != nullptr;};
        void deleteThirdPartBusinessId() { this->thirdPartBusinessId_ = nullptr;};
        inline string getThirdPartBusinessId() const { DARABONBA_PTR_GET_DEFAULT(thirdPartBusinessId_, "") };
        inline OrderBaseInfo& setThirdPartBusinessId(string thirdPartBusinessId) { DARABONBA_PTR_SET_VALUE(thirdPartBusinessId_, thirdPartBusinessId) };


        // thirdpartApplyId Field Functions 
        bool hasThirdpartApplyId() const { return this->thirdpartApplyId_ != nullptr;};
        void deleteThirdpartApplyId() { this->thirdpartApplyId_ = nullptr;};
        inline string getThirdpartApplyId() const { DARABONBA_PTR_GET_DEFAULT(thirdpartApplyId_, "") };
        inline OrderBaseInfo& setThirdpartApplyId(string thirdpartApplyId) { DARABONBA_PTR_SET_VALUE(thirdpartApplyId_, thirdpartApplyId) };


        // thirdpartDepartId Field Functions 
        bool hasThirdpartDepartId() const { return this->thirdpartDepartId_ != nullptr;};
        void deleteThirdpartDepartId() { this->thirdpartDepartId_ = nullptr;};
        inline string getThirdpartDepartId() const { DARABONBA_PTR_GET_DEFAULT(thirdpartDepartId_, "") };
        inline OrderBaseInfo& setThirdpartDepartId(string thirdpartDepartId) { DARABONBA_PTR_SET_VALUE(thirdpartDepartId_, thirdpartDepartId) };


        // thirdpartItineraryId Field Functions 
        bool hasThirdpartItineraryId() const { return this->thirdpartItineraryId_ != nullptr;};
        void deleteThirdpartItineraryId() { this->thirdpartItineraryId_ = nullptr;};
        inline string getThirdpartItineraryId() const { DARABONBA_PTR_GET_DEFAULT(thirdpartItineraryId_, "") };
        inline OrderBaseInfo& setThirdpartItineraryId(string thirdpartItineraryId) { DARABONBA_PTR_SET_VALUE(thirdpartItineraryId_, thirdpartItineraryId) };


        // tripType Field Functions 
        bool hasTripType() const { return this->tripType_ != nullptr;};
        void deleteTripType() { this->tripType_ = nullptr;};
        inline int32_t getTripType() const { DARABONBA_PTR_GET_DEFAULT(tripType_, 0) };
        inline OrderBaseInfo& setTripType(int32_t tripType) { DARABONBA_PTR_SET_VALUE(tripType_, tripType) };


        // userId Field Functions 
        bool hasUserId() const { return this->userId_ != nullptr;};
        void deleteUserId() { this->userId_ = nullptr;};
        inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
        inline OrderBaseInfo& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


        // userNick Field Functions 
        bool hasUserNick() const { return this->userNick_ != nullptr;};
        void deleteUserNick() { this->userNick_ = nullptr;};
        inline string getUserNick() const { DARABONBA_PTR_GET_DEFAULT(userNick_, "") };
        inline OrderBaseInfo& setUserNick(string userNick) { DARABONBA_PTR_SET_VALUE(userNick_, userNick) };


      protected:
        shared_ptr<string> applyId_ {};
        shared_ptr<string> btripTitle_ {};
        shared_ptr<string> contactName_ {};
        shared_ptr<string> contactPhone_ {};
        shared_ptr<string> corpId_ {};
        shared_ptr<string> corpName_ {};
        shared_ptr<string> departId_ {};
        shared_ptr<string> departName_ {};
        shared_ptr<string> exceedApplyId_ {};
        shared_ptr<string> exceedThirdpartApplyId_ {};
        shared_ptr<string> gmtCreate_ {};
        shared_ptr<string> gmtModify_ {};
        shared_ptr<string> itineraryId_ {};
        shared_ptr<int64_t> orderId_ {};
        shared_ptr<int32_t> orderStatus_ {};
        shared_ptr<string> replenishOrderIds_ {};
        shared_ptr<string> replenishOriginalOrderId_ {};
        shared_ptr<string> thirdPartBusinessId_ {};
        shared_ptr<string> thirdpartApplyId_ {};
        shared_ptr<string> thirdpartDepartId_ {};
        shared_ptr<string> thirdpartItineraryId_ {};
        shared_ptr<int32_t> tripType_ {};
        shared_ptr<string> userId_ {};
        shared_ptr<string> userNick_ {};
      };

      class InvoiceInfo : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const InvoiceInfo& obj) { 
          DARABONBA_PTR_TO_JSON(id, id_);
          DARABONBA_PTR_TO_JSON(title, title_);
        };
        friend void from_json(const Darabonba::Json& j, InvoiceInfo& obj) { 
          DARABONBA_PTR_FROM_JSON(id, id_);
          DARABONBA_PTR_FROM_JSON(title, title_);
        };
        InvoiceInfo() = default ;
        InvoiceInfo(const InvoiceInfo &) = default ;
        InvoiceInfo(InvoiceInfo &&) = default ;
        InvoiceInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~InvoiceInfo() = default ;
        InvoiceInfo& operator=(const InvoiceInfo &) = default ;
        InvoiceInfo& operator=(InvoiceInfo &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->id_ == nullptr
        && this->title_ == nullptr; };
        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
        inline InvoiceInfo& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // title Field Functions 
        bool hasTitle() const { return this->title_ != nullptr;};
        void deleteTitle() { this->title_ = nullptr;};
        inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
        inline InvoiceInfo& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


      protected:
        shared_ptr<int64_t> id_ {};
        shared_ptr<string> title_ {};
      };

      class ChangeTicketInfoList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ChangeTicketInfoList& obj) { 
          DARABONBA_PTR_TO_JSON(change_coach_no, changeCoachNo_);
          DARABONBA_PTR_TO_JSON(change_gap_fee, changeGapFee_);
          DARABONBA_PTR_TO_JSON(change_handling_fee, changeHandlingFee_);
          DARABONBA_PTR_TO_JSON(change_order_id, changeOrderId_);
          DARABONBA_PTR_TO_JSON(change_seat_no, changeSeatNo_);
          DARABONBA_PTR_TO_JSON(change_seat_type_name, changeSeatTypeName_);
          DARABONBA_PTR_TO_JSON(change_service_fee, changeServiceFee_);
          DARABONBA_PTR_TO_JSON(change_train_no, changeTrainNo_);
          DARABONBA_PTR_TO_JSON(change_train_type_name, changeTrainTypeName_);
          DARABONBA_PTR_TO_JSON(check_in_time, checkInTime_);
          DARABONBA_PTR_TO_JSON(check_out_time, checkOutTime_);
          DARABONBA_PTR_TO_JSON(end_time, endTime_);
          DARABONBA_PTR_TO_JSON(from_city_name, fromCityName_);
          DARABONBA_PTR_TO_JSON(from_station_name, fromStationName_);
          DARABONBA_PTR_TO_JSON(gmt_create, gmtCreate_);
          DARABONBA_PTR_TO_JSON(gmt_modify, gmtModify_);
          DARABONBA_PTR_TO_JSON(origin_ticket_no, originTicketNo_);
          DARABONBA_PTR_TO_JSON(out_ticket_status, outTicketStatus_);
          DARABONBA_PTR_TO_JSON(segment_index, segmentIndex_);
          DARABONBA_PTR_TO_JSON(short_ticket_no, shortTicketNo_);
          DARABONBA_PTR_TO_JSON(start_time, startTime_);
          DARABONBA_PTR_TO_JSON(ticket_entrance, ticketEntrance_);
          DARABONBA_PTR_TO_JSON(ticket_no, ticketNo_);
          DARABONBA_PTR_TO_JSON(ticket_status, ticketStatus_);
          DARABONBA_PTR_TO_JSON(to_city_name, toCityName_);
          DARABONBA_PTR_TO_JSON(to_station_name, toStationName_);
          DARABONBA_PTR_TO_JSON(use_ticket, useTicket_);
          DARABONBA_PTR_TO_JSON(user_id, userId_);
        };
        friend void from_json(const Darabonba::Json& j, ChangeTicketInfoList& obj) { 
          DARABONBA_PTR_FROM_JSON(change_coach_no, changeCoachNo_);
          DARABONBA_PTR_FROM_JSON(change_gap_fee, changeGapFee_);
          DARABONBA_PTR_FROM_JSON(change_handling_fee, changeHandlingFee_);
          DARABONBA_PTR_FROM_JSON(change_order_id, changeOrderId_);
          DARABONBA_PTR_FROM_JSON(change_seat_no, changeSeatNo_);
          DARABONBA_PTR_FROM_JSON(change_seat_type_name, changeSeatTypeName_);
          DARABONBA_PTR_FROM_JSON(change_service_fee, changeServiceFee_);
          DARABONBA_PTR_FROM_JSON(change_train_no, changeTrainNo_);
          DARABONBA_PTR_FROM_JSON(change_train_type_name, changeTrainTypeName_);
          DARABONBA_PTR_FROM_JSON(check_in_time, checkInTime_);
          DARABONBA_PTR_FROM_JSON(check_out_time, checkOutTime_);
          DARABONBA_PTR_FROM_JSON(end_time, endTime_);
          DARABONBA_PTR_FROM_JSON(from_city_name, fromCityName_);
          DARABONBA_PTR_FROM_JSON(from_station_name, fromStationName_);
          DARABONBA_PTR_FROM_JSON(gmt_create, gmtCreate_);
          DARABONBA_PTR_FROM_JSON(gmt_modify, gmtModify_);
          DARABONBA_PTR_FROM_JSON(origin_ticket_no, originTicketNo_);
          DARABONBA_PTR_FROM_JSON(out_ticket_status, outTicketStatus_);
          DARABONBA_PTR_FROM_JSON(segment_index, segmentIndex_);
          DARABONBA_PTR_FROM_JSON(short_ticket_no, shortTicketNo_);
          DARABONBA_PTR_FROM_JSON(start_time, startTime_);
          DARABONBA_PTR_FROM_JSON(ticket_entrance, ticketEntrance_);
          DARABONBA_PTR_FROM_JSON(ticket_no, ticketNo_);
          DARABONBA_PTR_FROM_JSON(ticket_status, ticketStatus_);
          DARABONBA_PTR_FROM_JSON(to_city_name, toCityName_);
          DARABONBA_PTR_FROM_JSON(to_station_name, toStationName_);
          DARABONBA_PTR_FROM_JSON(use_ticket, useTicket_);
          DARABONBA_PTR_FROM_JSON(user_id, userId_);
        };
        ChangeTicketInfoList() = default ;
        ChangeTicketInfoList(const ChangeTicketInfoList &) = default ;
        ChangeTicketInfoList(ChangeTicketInfoList &&) = default ;
        ChangeTicketInfoList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ChangeTicketInfoList() = default ;
        ChangeTicketInfoList& operator=(const ChangeTicketInfoList &) = default ;
        ChangeTicketInfoList& operator=(ChangeTicketInfoList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->changeCoachNo_ == nullptr
        && this->changeGapFee_ == nullptr && this->changeHandlingFee_ == nullptr && this->changeOrderId_ == nullptr && this->changeSeatNo_ == nullptr && this->changeSeatTypeName_ == nullptr
        && this->changeServiceFee_ == nullptr && this->changeTrainNo_ == nullptr && this->changeTrainTypeName_ == nullptr && this->checkInTime_ == nullptr && this->checkOutTime_ == nullptr
        && this->endTime_ == nullptr && this->fromCityName_ == nullptr && this->fromStationName_ == nullptr && this->gmtCreate_ == nullptr && this->gmtModify_ == nullptr
        && this->originTicketNo_ == nullptr && this->outTicketStatus_ == nullptr && this->segmentIndex_ == nullptr && this->shortTicketNo_ == nullptr && this->startTime_ == nullptr
        && this->ticketEntrance_ == nullptr && this->ticketNo_ == nullptr && this->ticketStatus_ == nullptr && this->toCityName_ == nullptr && this->toStationName_ == nullptr
        && this->useTicket_ == nullptr && this->userId_ == nullptr; };
        // changeCoachNo Field Functions 
        bool hasChangeCoachNo() const { return this->changeCoachNo_ != nullptr;};
        void deleteChangeCoachNo() { this->changeCoachNo_ = nullptr;};
        inline string getChangeCoachNo() const { DARABONBA_PTR_GET_DEFAULT(changeCoachNo_, "") };
        inline ChangeTicketInfoList& setChangeCoachNo(string changeCoachNo) { DARABONBA_PTR_SET_VALUE(changeCoachNo_, changeCoachNo) };


        // changeGapFee Field Functions 
        bool hasChangeGapFee() const { return this->changeGapFee_ != nullptr;};
        void deleteChangeGapFee() { this->changeGapFee_ = nullptr;};
        inline double getChangeGapFee() const { DARABONBA_PTR_GET_DEFAULT(changeGapFee_, 0.0) };
        inline ChangeTicketInfoList& setChangeGapFee(double changeGapFee) { DARABONBA_PTR_SET_VALUE(changeGapFee_, changeGapFee) };


        // changeHandlingFee Field Functions 
        bool hasChangeHandlingFee() const { return this->changeHandlingFee_ != nullptr;};
        void deleteChangeHandlingFee() { this->changeHandlingFee_ = nullptr;};
        inline double getChangeHandlingFee() const { DARABONBA_PTR_GET_DEFAULT(changeHandlingFee_, 0.0) };
        inline ChangeTicketInfoList& setChangeHandlingFee(double changeHandlingFee) { DARABONBA_PTR_SET_VALUE(changeHandlingFee_, changeHandlingFee) };


        // changeOrderId Field Functions 
        bool hasChangeOrderId() const { return this->changeOrderId_ != nullptr;};
        void deleteChangeOrderId() { this->changeOrderId_ = nullptr;};
        inline string getChangeOrderId() const { DARABONBA_PTR_GET_DEFAULT(changeOrderId_, "") };
        inline ChangeTicketInfoList& setChangeOrderId(string changeOrderId) { DARABONBA_PTR_SET_VALUE(changeOrderId_, changeOrderId) };


        // changeSeatNo Field Functions 
        bool hasChangeSeatNo() const { return this->changeSeatNo_ != nullptr;};
        void deleteChangeSeatNo() { this->changeSeatNo_ = nullptr;};
        inline string getChangeSeatNo() const { DARABONBA_PTR_GET_DEFAULT(changeSeatNo_, "") };
        inline ChangeTicketInfoList& setChangeSeatNo(string changeSeatNo) { DARABONBA_PTR_SET_VALUE(changeSeatNo_, changeSeatNo) };


        // changeSeatTypeName Field Functions 
        bool hasChangeSeatTypeName() const { return this->changeSeatTypeName_ != nullptr;};
        void deleteChangeSeatTypeName() { this->changeSeatTypeName_ = nullptr;};
        inline string getChangeSeatTypeName() const { DARABONBA_PTR_GET_DEFAULT(changeSeatTypeName_, "") };
        inline ChangeTicketInfoList& setChangeSeatTypeName(string changeSeatTypeName) { DARABONBA_PTR_SET_VALUE(changeSeatTypeName_, changeSeatTypeName) };


        // changeServiceFee Field Functions 
        bool hasChangeServiceFee() const { return this->changeServiceFee_ != nullptr;};
        void deleteChangeServiceFee() { this->changeServiceFee_ = nullptr;};
        inline double getChangeServiceFee() const { DARABONBA_PTR_GET_DEFAULT(changeServiceFee_, 0.0) };
        inline ChangeTicketInfoList& setChangeServiceFee(double changeServiceFee) { DARABONBA_PTR_SET_VALUE(changeServiceFee_, changeServiceFee) };


        // changeTrainNo Field Functions 
        bool hasChangeTrainNo() const { return this->changeTrainNo_ != nullptr;};
        void deleteChangeTrainNo() { this->changeTrainNo_ = nullptr;};
        inline string getChangeTrainNo() const { DARABONBA_PTR_GET_DEFAULT(changeTrainNo_, "") };
        inline ChangeTicketInfoList& setChangeTrainNo(string changeTrainNo) { DARABONBA_PTR_SET_VALUE(changeTrainNo_, changeTrainNo) };


        // changeTrainTypeName Field Functions 
        bool hasChangeTrainTypeName() const { return this->changeTrainTypeName_ != nullptr;};
        void deleteChangeTrainTypeName() { this->changeTrainTypeName_ = nullptr;};
        inline string getChangeTrainTypeName() const { DARABONBA_PTR_GET_DEFAULT(changeTrainTypeName_, "") };
        inline ChangeTicketInfoList& setChangeTrainTypeName(string changeTrainTypeName) { DARABONBA_PTR_SET_VALUE(changeTrainTypeName_, changeTrainTypeName) };


        // checkInTime Field Functions 
        bool hasCheckInTime() const { return this->checkInTime_ != nullptr;};
        void deleteCheckInTime() { this->checkInTime_ = nullptr;};
        inline string getCheckInTime() const { DARABONBA_PTR_GET_DEFAULT(checkInTime_, "") };
        inline ChangeTicketInfoList& setCheckInTime(string checkInTime) { DARABONBA_PTR_SET_VALUE(checkInTime_, checkInTime) };


        // checkOutTime Field Functions 
        bool hasCheckOutTime() const { return this->checkOutTime_ != nullptr;};
        void deleteCheckOutTime() { this->checkOutTime_ = nullptr;};
        inline string getCheckOutTime() const { DARABONBA_PTR_GET_DEFAULT(checkOutTime_, "") };
        inline ChangeTicketInfoList& setCheckOutTime(string checkOutTime) { DARABONBA_PTR_SET_VALUE(checkOutTime_, checkOutTime) };


        // endTime Field Functions 
        bool hasEndTime() const { return this->endTime_ != nullptr;};
        void deleteEndTime() { this->endTime_ = nullptr;};
        inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
        inline ChangeTicketInfoList& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


        // fromCityName Field Functions 
        bool hasFromCityName() const { return this->fromCityName_ != nullptr;};
        void deleteFromCityName() { this->fromCityName_ = nullptr;};
        inline string getFromCityName() const { DARABONBA_PTR_GET_DEFAULT(fromCityName_, "") };
        inline ChangeTicketInfoList& setFromCityName(string fromCityName) { DARABONBA_PTR_SET_VALUE(fromCityName_, fromCityName) };


        // fromStationName Field Functions 
        bool hasFromStationName() const { return this->fromStationName_ != nullptr;};
        void deleteFromStationName() { this->fromStationName_ = nullptr;};
        inline string getFromStationName() const { DARABONBA_PTR_GET_DEFAULT(fromStationName_, "") };
        inline ChangeTicketInfoList& setFromStationName(string fromStationName) { DARABONBA_PTR_SET_VALUE(fromStationName_, fromStationName) };


        // gmtCreate Field Functions 
        bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
        void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
        inline string getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
        inline ChangeTicketInfoList& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


        // gmtModify Field Functions 
        bool hasGmtModify() const { return this->gmtModify_ != nullptr;};
        void deleteGmtModify() { this->gmtModify_ = nullptr;};
        inline string getGmtModify() const { DARABONBA_PTR_GET_DEFAULT(gmtModify_, "") };
        inline ChangeTicketInfoList& setGmtModify(string gmtModify) { DARABONBA_PTR_SET_VALUE(gmtModify_, gmtModify) };


        // originTicketNo Field Functions 
        bool hasOriginTicketNo() const { return this->originTicketNo_ != nullptr;};
        void deleteOriginTicketNo() { this->originTicketNo_ = nullptr;};
        inline string getOriginTicketNo() const { DARABONBA_PTR_GET_DEFAULT(originTicketNo_, "") };
        inline ChangeTicketInfoList& setOriginTicketNo(string originTicketNo) { DARABONBA_PTR_SET_VALUE(originTicketNo_, originTicketNo) };


        // outTicketStatus Field Functions 
        bool hasOutTicketStatus() const { return this->outTicketStatus_ != nullptr;};
        void deleteOutTicketStatus() { this->outTicketStatus_ = nullptr;};
        inline string getOutTicketStatus() const { DARABONBA_PTR_GET_DEFAULT(outTicketStatus_, "") };
        inline ChangeTicketInfoList& setOutTicketStatus(string outTicketStatus) { DARABONBA_PTR_SET_VALUE(outTicketStatus_, outTicketStatus) };


        // segmentIndex Field Functions 
        bool hasSegmentIndex() const { return this->segmentIndex_ != nullptr;};
        void deleteSegmentIndex() { this->segmentIndex_ = nullptr;};
        inline int32_t getSegmentIndex() const { DARABONBA_PTR_GET_DEFAULT(segmentIndex_, 0) };
        inline ChangeTicketInfoList& setSegmentIndex(int32_t segmentIndex) { DARABONBA_PTR_SET_VALUE(segmentIndex_, segmentIndex) };


        // shortTicketNo Field Functions 
        bool hasShortTicketNo() const { return this->shortTicketNo_ != nullptr;};
        void deleteShortTicketNo() { this->shortTicketNo_ = nullptr;};
        inline string getShortTicketNo() const { DARABONBA_PTR_GET_DEFAULT(shortTicketNo_, "") };
        inline ChangeTicketInfoList& setShortTicketNo(string shortTicketNo) { DARABONBA_PTR_SET_VALUE(shortTicketNo_, shortTicketNo) };


        // startTime Field Functions 
        bool hasStartTime() const { return this->startTime_ != nullptr;};
        void deleteStartTime() { this->startTime_ = nullptr;};
        inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
        inline ChangeTicketInfoList& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


        // ticketEntrance Field Functions 
        bool hasTicketEntrance() const { return this->ticketEntrance_ != nullptr;};
        void deleteTicketEntrance() { this->ticketEntrance_ = nullptr;};
        inline string getTicketEntrance() const { DARABONBA_PTR_GET_DEFAULT(ticketEntrance_, "") };
        inline ChangeTicketInfoList& setTicketEntrance(string ticketEntrance) { DARABONBA_PTR_SET_VALUE(ticketEntrance_, ticketEntrance) };


        // ticketNo Field Functions 
        bool hasTicketNo() const { return this->ticketNo_ != nullptr;};
        void deleteTicketNo() { this->ticketNo_ = nullptr;};
        inline string getTicketNo() const { DARABONBA_PTR_GET_DEFAULT(ticketNo_, "") };
        inline ChangeTicketInfoList& setTicketNo(string ticketNo) { DARABONBA_PTR_SET_VALUE(ticketNo_, ticketNo) };


        // ticketStatus Field Functions 
        bool hasTicketStatus() const { return this->ticketStatus_ != nullptr;};
        void deleteTicketStatus() { this->ticketStatus_ = nullptr;};
        inline int32_t getTicketStatus() const { DARABONBA_PTR_GET_DEFAULT(ticketStatus_, 0) };
        inline ChangeTicketInfoList& setTicketStatus(int32_t ticketStatus) { DARABONBA_PTR_SET_VALUE(ticketStatus_, ticketStatus) };


        // toCityName Field Functions 
        bool hasToCityName() const { return this->toCityName_ != nullptr;};
        void deleteToCityName() { this->toCityName_ = nullptr;};
        inline string getToCityName() const { DARABONBA_PTR_GET_DEFAULT(toCityName_, "") };
        inline ChangeTicketInfoList& setToCityName(string toCityName) { DARABONBA_PTR_SET_VALUE(toCityName_, toCityName) };


        // toStationName Field Functions 
        bool hasToStationName() const { return this->toStationName_ != nullptr;};
        void deleteToStationName() { this->toStationName_ = nullptr;};
        inline string getToStationName() const { DARABONBA_PTR_GET_DEFAULT(toStationName_, "") };
        inline ChangeTicketInfoList& setToStationName(string toStationName) { DARABONBA_PTR_SET_VALUE(toStationName_, toStationName) };


        // useTicket Field Functions 
        bool hasUseTicket() const { return this->useTicket_ != nullptr;};
        void deleteUseTicket() { this->useTicket_ = nullptr;};
        inline string getUseTicket() const { DARABONBA_PTR_GET_DEFAULT(useTicket_, "") };
        inline ChangeTicketInfoList& setUseTicket(string useTicket) { DARABONBA_PTR_SET_VALUE(useTicket_, useTicket) };


        // userId Field Functions 
        bool hasUserId() const { return this->userId_ != nullptr;};
        void deleteUserId() { this->userId_ = nullptr;};
        inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
        inline ChangeTicketInfoList& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


      protected:
        shared_ptr<string> changeCoachNo_ {};
        shared_ptr<double> changeGapFee_ {};
        shared_ptr<double> changeHandlingFee_ {};
        shared_ptr<string> changeOrderId_ {};
        shared_ptr<string> changeSeatNo_ {};
        shared_ptr<string> changeSeatTypeName_ {};
        shared_ptr<double> changeServiceFee_ {};
        shared_ptr<string> changeTrainNo_ {};
        shared_ptr<string> changeTrainTypeName_ {};
        shared_ptr<string> checkInTime_ {};
        shared_ptr<string> checkOutTime_ {};
        shared_ptr<string> endTime_ {};
        shared_ptr<string> fromCityName_ {};
        shared_ptr<string> fromStationName_ {};
        shared_ptr<string> gmtCreate_ {};
        shared_ptr<string> gmtModify_ {};
        shared_ptr<string> originTicketNo_ {};
        shared_ptr<string> outTicketStatus_ {};
        shared_ptr<int32_t> segmentIndex_ {};
        shared_ptr<string> shortTicketNo_ {};
        shared_ptr<string> startTime_ {};
        shared_ptr<string> ticketEntrance_ {};
        shared_ptr<string> ticketNo_ {};
        shared_ptr<int32_t> ticketStatus_ {};
        shared_ptr<string> toCityName_ {};
        shared_ptr<string> toStationName_ {};
        shared_ptr<string> useTicket_ {};
        shared_ptr<string> userId_ {};
      };

      virtual bool empty() const override { return this->changeTicketInfoList_ == nullptr
        && this->invoiceInfo_ == nullptr && this->orderBaseInfo_ == nullptr && this->passengerInfoList_ == nullptr && this->priceInfoList_ == nullptr && this->refundTicketInfoList_ == nullptr
        && this->trainOrderInfo_ == nullptr; };
      // changeTicketInfoList Field Functions 
      bool hasChangeTicketInfoList() const { return this->changeTicketInfoList_ != nullptr;};
      void deleteChangeTicketInfoList() { this->changeTicketInfoList_ = nullptr;};
      inline const vector<Module::ChangeTicketInfoList> & getChangeTicketInfoList() const { DARABONBA_PTR_GET_CONST(changeTicketInfoList_, vector<Module::ChangeTicketInfoList>) };
      inline vector<Module::ChangeTicketInfoList> getChangeTicketInfoList() { DARABONBA_PTR_GET(changeTicketInfoList_, vector<Module::ChangeTicketInfoList>) };
      inline Module& setChangeTicketInfoList(const vector<Module::ChangeTicketInfoList> & changeTicketInfoList) { DARABONBA_PTR_SET_VALUE(changeTicketInfoList_, changeTicketInfoList) };
      inline Module& setChangeTicketInfoList(vector<Module::ChangeTicketInfoList> && changeTicketInfoList) { DARABONBA_PTR_SET_RVALUE(changeTicketInfoList_, changeTicketInfoList) };


      // invoiceInfo Field Functions 
      bool hasInvoiceInfo() const { return this->invoiceInfo_ != nullptr;};
      void deleteInvoiceInfo() { this->invoiceInfo_ = nullptr;};
      inline const Module::InvoiceInfo & getInvoiceInfo() const { DARABONBA_PTR_GET_CONST(invoiceInfo_, Module::InvoiceInfo) };
      inline Module::InvoiceInfo getInvoiceInfo() { DARABONBA_PTR_GET(invoiceInfo_, Module::InvoiceInfo) };
      inline Module& setInvoiceInfo(const Module::InvoiceInfo & invoiceInfo) { DARABONBA_PTR_SET_VALUE(invoiceInfo_, invoiceInfo) };
      inline Module& setInvoiceInfo(Module::InvoiceInfo && invoiceInfo) { DARABONBA_PTR_SET_RVALUE(invoiceInfo_, invoiceInfo) };


      // orderBaseInfo Field Functions 
      bool hasOrderBaseInfo() const { return this->orderBaseInfo_ != nullptr;};
      void deleteOrderBaseInfo() { this->orderBaseInfo_ = nullptr;};
      inline const Module::OrderBaseInfo & getOrderBaseInfo() const { DARABONBA_PTR_GET_CONST(orderBaseInfo_, Module::OrderBaseInfo) };
      inline Module::OrderBaseInfo getOrderBaseInfo() { DARABONBA_PTR_GET(orderBaseInfo_, Module::OrderBaseInfo) };
      inline Module& setOrderBaseInfo(const Module::OrderBaseInfo & orderBaseInfo) { DARABONBA_PTR_SET_VALUE(orderBaseInfo_, orderBaseInfo) };
      inline Module& setOrderBaseInfo(Module::OrderBaseInfo && orderBaseInfo) { DARABONBA_PTR_SET_RVALUE(orderBaseInfo_, orderBaseInfo) };


      // passengerInfoList Field Functions 
      bool hasPassengerInfoList() const { return this->passengerInfoList_ != nullptr;};
      void deletePassengerInfoList() { this->passengerInfoList_ = nullptr;};
      inline const vector<Module::PassengerInfoList> & getPassengerInfoList() const { DARABONBA_PTR_GET_CONST(passengerInfoList_, vector<Module::PassengerInfoList>) };
      inline vector<Module::PassengerInfoList> getPassengerInfoList() { DARABONBA_PTR_GET(passengerInfoList_, vector<Module::PassengerInfoList>) };
      inline Module& setPassengerInfoList(const vector<Module::PassengerInfoList> & passengerInfoList) { DARABONBA_PTR_SET_VALUE(passengerInfoList_, passengerInfoList) };
      inline Module& setPassengerInfoList(vector<Module::PassengerInfoList> && passengerInfoList) { DARABONBA_PTR_SET_RVALUE(passengerInfoList_, passengerInfoList) };


      // priceInfoList Field Functions 
      bool hasPriceInfoList() const { return this->priceInfoList_ != nullptr;};
      void deletePriceInfoList() { this->priceInfoList_ = nullptr;};
      inline const vector<Module::PriceInfoList> & getPriceInfoList() const { DARABONBA_PTR_GET_CONST(priceInfoList_, vector<Module::PriceInfoList>) };
      inline vector<Module::PriceInfoList> getPriceInfoList() { DARABONBA_PTR_GET(priceInfoList_, vector<Module::PriceInfoList>) };
      inline Module& setPriceInfoList(const vector<Module::PriceInfoList> & priceInfoList) { DARABONBA_PTR_SET_VALUE(priceInfoList_, priceInfoList) };
      inline Module& setPriceInfoList(vector<Module::PriceInfoList> && priceInfoList) { DARABONBA_PTR_SET_RVALUE(priceInfoList_, priceInfoList) };


      // refundTicketInfoList Field Functions 
      bool hasRefundTicketInfoList() const { return this->refundTicketInfoList_ != nullptr;};
      void deleteRefundTicketInfoList() { this->refundTicketInfoList_ = nullptr;};
      inline const vector<Module::RefundTicketInfoList> & getRefundTicketInfoList() const { DARABONBA_PTR_GET_CONST(refundTicketInfoList_, vector<Module::RefundTicketInfoList>) };
      inline vector<Module::RefundTicketInfoList> getRefundTicketInfoList() { DARABONBA_PTR_GET(refundTicketInfoList_, vector<Module::RefundTicketInfoList>) };
      inline Module& setRefundTicketInfoList(const vector<Module::RefundTicketInfoList> & refundTicketInfoList) { DARABONBA_PTR_SET_VALUE(refundTicketInfoList_, refundTicketInfoList) };
      inline Module& setRefundTicketInfoList(vector<Module::RefundTicketInfoList> && refundTicketInfoList) { DARABONBA_PTR_SET_RVALUE(refundTicketInfoList_, refundTicketInfoList) };


      // trainOrderInfo Field Functions 
      bool hasTrainOrderInfo() const { return this->trainOrderInfo_ != nullptr;};
      void deleteTrainOrderInfo() { this->trainOrderInfo_ = nullptr;};
      inline const Module::TrainOrderInfo & getTrainOrderInfo() const { DARABONBA_PTR_GET_CONST(trainOrderInfo_, Module::TrainOrderInfo) };
      inline Module::TrainOrderInfo getTrainOrderInfo() { DARABONBA_PTR_GET(trainOrderInfo_, Module::TrainOrderInfo) };
      inline Module& setTrainOrderInfo(const Module::TrainOrderInfo & trainOrderInfo) { DARABONBA_PTR_SET_VALUE(trainOrderInfo_, trainOrderInfo) };
      inline Module& setTrainOrderInfo(Module::TrainOrderInfo && trainOrderInfo) { DARABONBA_PTR_SET_RVALUE(trainOrderInfo_, trainOrderInfo) };


    protected:
      shared_ptr<vector<Module::ChangeTicketInfoList>> changeTicketInfoList_ {};
      shared_ptr<Module::InvoiceInfo> invoiceInfo_ {};
      shared_ptr<Module::OrderBaseInfo> orderBaseInfo_ {};
      shared_ptr<vector<Module::PassengerInfoList>> passengerInfoList_ {};
      shared_ptr<vector<Module::PriceInfoList>> priceInfoList_ {};
      shared_ptr<vector<Module::RefundTicketInfoList>> refundTicketInfoList_ {};
      shared_ptr<Module::TrainOrderInfo> trainOrderInfo_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->message_ == nullptr && this->module_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr && this->traceId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline TrainOrderQueryV2ResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline TrainOrderQueryV2ResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // module Field Functions 
    bool hasModule() const { return this->module_ != nullptr;};
    void deleteModule() { this->module_ = nullptr;};
    inline const TrainOrderQueryV2ResponseBody::Module & getModule() const { DARABONBA_PTR_GET_CONST(module_, TrainOrderQueryV2ResponseBody::Module) };
    inline TrainOrderQueryV2ResponseBody::Module getModule() { DARABONBA_PTR_GET(module_, TrainOrderQueryV2ResponseBody::Module) };
    inline TrainOrderQueryV2ResponseBody& setModule(const TrainOrderQueryV2ResponseBody::Module & module) { DARABONBA_PTR_SET_VALUE(module_, module) };
    inline TrainOrderQueryV2ResponseBody& setModule(TrainOrderQueryV2ResponseBody::Module && module) { DARABONBA_PTR_SET_RVALUE(module_, module) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline TrainOrderQueryV2ResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline TrainOrderQueryV2ResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // traceId Field Functions 
    bool hasTraceId() const { return this->traceId_ != nullptr;};
    void deleteTraceId() { this->traceId_ = nullptr;};
    inline string getTraceId() const { DARABONBA_PTR_GET_DEFAULT(traceId_, "") };
    inline TrainOrderQueryV2ResponseBody& setTraceId(string traceId) { DARABONBA_PTR_SET_VALUE(traceId_, traceId) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<string> message_ {};
    shared_ptr<TrainOrderQueryV2ResponseBody::Module> module_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
    shared_ptr<string> traceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
