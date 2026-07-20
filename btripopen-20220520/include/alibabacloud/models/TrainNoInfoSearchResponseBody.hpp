// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TRAINNOINFOSEARCHRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_TRAINNOINFOSEARCHRESPONSEBODY_HPP_
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
  class TrainNoInfoSearchResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TrainNoInfoSearchResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(module, module_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(success, success_);
      DARABONBA_PTR_TO_JSON(traceId, traceId_);
    };
    friend void from_json(const Darabonba::Json& j, TrainNoInfoSearchResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(module, module_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(success, success_);
      DARABONBA_PTR_FROM_JSON(traceId, traceId_);
    };
    TrainNoInfoSearchResponseBody() = default ;
    TrainNoInfoSearchResponseBody(const TrainNoInfoSearchResponseBody &) = default ;
    TrainNoInfoSearchResponseBody(TrainNoInfoSearchResponseBody &&) = default ;
    TrainNoInfoSearchResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TrainNoInfoSearchResponseBody() = default ;
    TrainNoInfoSearchResponseBody& operator=(const TrainNoInfoSearchResponseBody &) = default ;
    TrainNoInfoSearchResponseBody& operator=(TrainNoInfoSearchResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Module : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Module& obj) { 
        DARABONBA_PTR_TO_JSON(train_station_search_v_o, trainStationSearchVO_);
        DARABONBA_PTR_TO_JSON(train_transfer_station_search_v_o, trainTransferStationSearchVO_);
      };
      friend void from_json(const Darabonba::Json& j, Module& obj) { 
        DARABONBA_PTR_FROM_JSON(train_station_search_v_o, trainStationSearchVO_);
        DARABONBA_PTR_FROM_JSON(train_transfer_station_search_v_o, trainTransferStationSearchVO_);
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
      class TrainTransferStationSearchVO : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const TrainTransferStationSearchVO& obj) { 
          DARABONBA_PTR_TO_JSON(transfer_detail_list, transferDetailList_);
          DARABONBA_PTR_TO_JSON(transfer_type, transferType_);
        };
        friend void from_json(const Darabonba::Json& j, TrainTransferStationSearchVO& obj) { 
          DARABONBA_PTR_FROM_JSON(transfer_detail_list, transferDetailList_);
          DARABONBA_PTR_FROM_JSON(transfer_type, transferType_);
        };
        TrainTransferStationSearchVO() = default ;
        TrainTransferStationSearchVO(const TrainTransferStationSearchVO &) = default ;
        TrainTransferStationSearchVO(TrainTransferStationSearchVO &&) = default ;
        TrainTransferStationSearchVO(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~TrainTransferStationSearchVO() = default ;
        TrainTransferStationSearchVO& operator=(const TrainTransferStationSearchVO &) = default ;
        TrainTransferStationSearchVO& operator=(TrainTransferStationSearchVO &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class TransferDetailList : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const TransferDetailList& obj) { 
            DARABONBA_PTR_TO_JSON(arr_day_tag, arrDayTag_);
            DARABONBA_PTR_TO_JSON(arr_station_code, arrStationCode_);
            DARABONBA_PTR_TO_JSON(arr_station_name, arrStationName_);
            DARABONBA_PTR_TO_JSON(arr_time, arrTime_);
            DARABONBA_PTR_TO_JSON(cost_time, costTime_);
            DARABONBA_PTR_TO_JSON(dep_station_code, depStationCode_);
            DARABONBA_PTR_TO_JSON(dep_station_name, depStationName_);
            DARABONBA_PTR_TO_JSON(dep_time, depTime_);
            DARABONBA_PTR_TO_JSON(is_end_station, isEndStation_);
            DARABONBA_PTR_TO_JSON(is_start_station, isStartStation_);
            DARABONBA_PTR_TO_JSON(price, price_);
            DARABONBA_PTR_TO_JSON(sale_flag, saleFlag_);
            DARABONBA_PTR_TO_JSON(seat_infos, seatInfos_);
            DARABONBA_PTR_TO_JSON(train_no, trainNo_);
            DARABONBA_PTR_TO_JSON(train_type, trainType_);
          };
          friend void from_json(const Darabonba::Json& j, TransferDetailList& obj) { 
            DARABONBA_PTR_FROM_JSON(arr_day_tag, arrDayTag_);
            DARABONBA_PTR_FROM_JSON(arr_station_code, arrStationCode_);
            DARABONBA_PTR_FROM_JSON(arr_station_name, arrStationName_);
            DARABONBA_PTR_FROM_JSON(arr_time, arrTime_);
            DARABONBA_PTR_FROM_JSON(cost_time, costTime_);
            DARABONBA_PTR_FROM_JSON(dep_station_code, depStationCode_);
            DARABONBA_PTR_FROM_JSON(dep_station_name, depStationName_);
            DARABONBA_PTR_FROM_JSON(dep_time, depTime_);
            DARABONBA_PTR_FROM_JSON(is_end_station, isEndStation_);
            DARABONBA_PTR_FROM_JSON(is_start_station, isStartStation_);
            DARABONBA_PTR_FROM_JSON(price, price_);
            DARABONBA_PTR_FROM_JSON(sale_flag, saleFlag_);
            DARABONBA_PTR_FROM_JSON(seat_infos, seatInfos_);
            DARABONBA_PTR_FROM_JSON(train_no, trainNo_);
            DARABONBA_PTR_FROM_JSON(train_type, trainType_);
          };
          TransferDetailList() = default ;
          TransferDetailList(const TransferDetailList &) = default ;
          TransferDetailList(TransferDetailList &&) = default ;
          TransferDetailList(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~TransferDetailList() = default ;
          TransferDetailList& operator=(const TransferDetailList &) = default ;
          TransferDetailList& operator=(TransferDetailList &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class SeatInfos : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const SeatInfos& obj) { 
              DARABONBA_PTR_TO_JSON(price, price_);
              DARABONBA_PTR_TO_JSON(seat_name, seatName_);
              DARABONBA_PTR_TO_JSON(seat_type, seatType_);
              DARABONBA_PTR_TO_JSON(stock, stock_);
            };
            friend void from_json(const Darabonba::Json& j, SeatInfos& obj) { 
              DARABONBA_PTR_FROM_JSON(price, price_);
              DARABONBA_PTR_FROM_JSON(seat_name, seatName_);
              DARABONBA_PTR_FROM_JSON(seat_type, seatType_);
              DARABONBA_PTR_FROM_JSON(stock, stock_);
            };
            SeatInfos() = default ;
            SeatInfos(const SeatInfos &) = default ;
            SeatInfos(SeatInfos &&) = default ;
            SeatInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~SeatInfos() = default ;
            SeatInfos& operator=(const SeatInfos &) = default ;
            SeatInfos& operator=(SeatInfos &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->price_ == nullptr
        && this->seatName_ == nullptr && this->seatType_ == nullptr && this->stock_ == nullptr; };
            // price Field Functions 
            bool hasPrice() const { return this->price_ != nullptr;};
            void deletePrice() { this->price_ = nullptr;};
            inline int64_t getPrice() const { DARABONBA_PTR_GET_DEFAULT(price_, 0L) };
            inline SeatInfos& setPrice(int64_t price) { DARABONBA_PTR_SET_VALUE(price_, price) };


            // seatName Field Functions 
            bool hasSeatName() const { return this->seatName_ != nullptr;};
            void deleteSeatName() { this->seatName_ = nullptr;};
            inline string getSeatName() const { DARABONBA_PTR_GET_DEFAULT(seatName_, "") };
            inline SeatInfos& setSeatName(string seatName) { DARABONBA_PTR_SET_VALUE(seatName_, seatName) };


            // seatType Field Functions 
            bool hasSeatType() const { return this->seatType_ != nullptr;};
            void deleteSeatType() { this->seatType_ = nullptr;};
            inline string getSeatType() const { DARABONBA_PTR_GET_DEFAULT(seatType_, "") };
            inline SeatInfos& setSeatType(string seatType) { DARABONBA_PTR_SET_VALUE(seatType_, seatType) };


            // stock Field Functions 
            bool hasStock() const { return this->stock_ != nullptr;};
            void deleteStock() { this->stock_ = nullptr;};
            inline string getStock() const { DARABONBA_PTR_GET_DEFAULT(stock_, "") };
            inline SeatInfos& setStock(string stock) { DARABONBA_PTR_SET_VALUE(stock_, stock) };


          protected:
            shared_ptr<int64_t> price_ {};
            shared_ptr<string> seatName_ {};
            shared_ptr<string> seatType_ {};
            shared_ptr<string> stock_ {};
          };

          virtual bool empty() const override { return this->arrDayTag_ == nullptr
        && this->arrStationCode_ == nullptr && this->arrStationName_ == nullptr && this->arrTime_ == nullptr && this->costTime_ == nullptr && this->depStationCode_ == nullptr
        && this->depStationName_ == nullptr && this->depTime_ == nullptr && this->isEndStation_ == nullptr && this->isStartStation_ == nullptr && this->price_ == nullptr
        && this->saleFlag_ == nullptr && this->seatInfos_ == nullptr && this->trainNo_ == nullptr && this->trainType_ == nullptr; };
          // arrDayTag Field Functions 
          bool hasArrDayTag() const { return this->arrDayTag_ != nullptr;};
          void deleteArrDayTag() { this->arrDayTag_ = nullptr;};
          inline string getArrDayTag() const { DARABONBA_PTR_GET_DEFAULT(arrDayTag_, "") };
          inline TransferDetailList& setArrDayTag(string arrDayTag) { DARABONBA_PTR_SET_VALUE(arrDayTag_, arrDayTag) };


          // arrStationCode Field Functions 
          bool hasArrStationCode() const { return this->arrStationCode_ != nullptr;};
          void deleteArrStationCode() { this->arrStationCode_ = nullptr;};
          inline string getArrStationCode() const { DARABONBA_PTR_GET_DEFAULT(arrStationCode_, "") };
          inline TransferDetailList& setArrStationCode(string arrStationCode) { DARABONBA_PTR_SET_VALUE(arrStationCode_, arrStationCode) };


          // arrStationName Field Functions 
          bool hasArrStationName() const { return this->arrStationName_ != nullptr;};
          void deleteArrStationName() { this->arrStationName_ = nullptr;};
          inline string getArrStationName() const { DARABONBA_PTR_GET_DEFAULT(arrStationName_, "") };
          inline TransferDetailList& setArrStationName(string arrStationName) { DARABONBA_PTR_SET_VALUE(arrStationName_, arrStationName) };


          // arrTime Field Functions 
          bool hasArrTime() const { return this->arrTime_ != nullptr;};
          void deleteArrTime() { this->arrTime_ = nullptr;};
          inline string getArrTime() const { DARABONBA_PTR_GET_DEFAULT(arrTime_, "") };
          inline TransferDetailList& setArrTime(string arrTime) { DARABONBA_PTR_SET_VALUE(arrTime_, arrTime) };


          // costTime Field Functions 
          bool hasCostTime() const { return this->costTime_ != nullptr;};
          void deleteCostTime() { this->costTime_ = nullptr;};
          inline string getCostTime() const { DARABONBA_PTR_GET_DEFAULT(costTime_, "") };
          inline TransferDetailList& setCostTime(string costTime) { DARABONBA_PTR_SET_VALUE(costTime_, costTime) };


          // depStationCode Field Functions 
          bool hasDepStationCode() const { return this->depStationCode_ != nullptr;};
          void deleteDepStationCode() { this->depStationCode_ = nullptr;};
          inline string getDepStationCode() const { DARABONBA_PTR_GET_DEFAULT(depStationCode_, "") };
          inline TransferDetailList& setDepStationCode(string depStationCode) { DARABONBA_PTR_SET_VALUE(depStationCode_, depStationCode) };


          // depStationName Field Functions 
          bool hasDepStationName() const { return this->depStationName_ != nullptr;};
          void deleteDepStationName() { this->depStationName_ = nullptr;};
          inline string getDepStationName() const { DARABONBA_PTR_GET_DEFAULT(depStationName_, "") };
          inline TransferDetailList& setDepStationName(string depStationName) { DARABONBA_PTR_SET_VALUE(depStationName_, depStationName) };


          // depTime Field Functions 
          bool hasDepTime() const { return this->depTime_ != nullptr;};
          void deleteDepTime() { this->depTime_ = nullptr;};
          inline string getDepTime() const { DARABONBA_PTR_GET_DEFAULT(depTime_, "") };
          inline TransferDetailList& setDepTime(string depTime) { DARABONBA_PTR_SET_VALUE(depTime_, depTime) };


          // isEndStation Field Functions 
          bool hasIsEndStation() const { return this->isEndStation_ != nullptr;};
          void deleteIsEndStation() { this->isEndStation_ = nullptr;};
          inline int32_t getIsEndStation() const { DARABONBA_PTR_GET_DEFAULT(isEndStation_, 0) };
          inline TransferDetailList& setIsEndStation(int32_t isEndStation) { DARABONBA_PTR_SET_VALUE(isEndStation_, isEndStation) };


          // isStartStation Field Functions 
          bool hasIsStartStation() const { return this->isStartStation_ != nullptr;};
          void deleteIsStartStation() { this->isStartStation_ = nullptr;};
          inline int32_t getIsStartStation() const { DARABONBA_PTR_GET_DEFAULT(isStartStation_, 0) };
          inline TransferDetailList& setIsStartStation(int32_t isStartStation) { DARABONBA_PTR_SET_VALUE(isStartStation_, isStartStation) };


          // price Field Functions 
          bool hasPrice() const { return this->price_ != nullptr;};
          void deletePrice() { this->price_ = nullptr;};
          inline string getPrice() const { DARABONBA_PTR_GET_DEFAULT(price_, "") };
          inline TransferDetailList& setPrice(string price) { DARABONBA_PTR_SET_VALUE(price_, price) };


          // saleFlag Field Functions 
          bool hasSaleFlag() const { return this->saleFlag_ != nullptr;};
          void deleteSaleFlag() { this->saleFlag_ = nullptr;};
          inline string getSaleFlag() const { DARABONBA_PTR_GET_DEFAULT(saleFlag_, "") };
          inline TransferDetailList& setSaleFlag(string saleFlag) { DARABONBA_PTR_SET_VALUE(saleFlag_, saleFlag) };


          // seatInfos Field Functions 
          bool hasSeatInfos() const { return this->seatInfos_ != nullptr;};
          void deleteSeatInfos() { this->seatInfos_ = nullptr;};
          inline const vector<TransferDetailList::SeatInfos> & getSeatInfos() const { DARABONBA_PTR_GET_CONST(seatInfos_, vector<TransferDetailList::SeatInfos>) };
          inline vector<TransferDetailList::SeatInfos> getSeatInfos() { DARABONBA_PTR_GET(seatInfos_, vector<TransferDetailList::SeatInfos>) };
          inline TransferDetailList& setSeatInfos(const vector<TransferDetailList::SeatInfos> & seatInfos) { DARABONBA_PTR_SET_VALUE(seatInfos_, seatInfos) };
          inline TransferDetailList& setSeatInfos(vector<TransferDetailList::SeatInfos> && seatInfos) { DARABONBA_PTR_SET_RVALUE(seatInfos_, seatInfos) };


          // trainNo Field Functions 
          bool hasTrainNo() const { return this->trainNo_ != nullptr;};
          void deleteTrainNo() { this->trainNo_ = nullptr;};
          inline string getTrainNo() const { DARABONBA_PTR_GET_DEFAULT(trainNo_, "") };
          inline TransferDetailList& setTrainNo(string trainNo) { DARABONBA_PTR_SET_VALUE(trainNo_, trainNo) };


          // trainType Field Functions 
          bool hasTrainType() const { return this->trainType_ != nullptr;};
          void deleteTrainType() { this->trainType_ = nullptr;};
          inline string getTrainType() const { DARABONBA_PTR_GET_DEFAULT(trainType_, "") };
          inline TransferDetailList& setTrainType(string trainType) { DARABONBA_PTR_SET_VALUE(trainType_, trainType) };


        protected:
          shared_ptr<string> arrDayTag_ {};
          shared_ptr<string> arrStationCode_ {};
          shared_ptr<string> arrStationName_ {};
          shared_ptr<string> arrTime_ {};
          shared_ptr<string> costTime_ {};
          shared_ptr<string> depStationCode_ {};
          shared_ptr<string> depStationName_ {};
          shared_ptr<string> depTime_ {};
          shared_ptr<int32_t> isEndStation_ {};
          shared_ptr<int32_t> isStartStation_ {};
          shared_ptr<string> price_ {};
          shared_ptr<string> saleFlag_ {};
          shared_ptr<vector<TransferDetailList::SeatInfos>> seatInfos_ {};
          shared_ptr<string> trainNo_ {};
          shared_ptr<string> trainType_ {};
        };

        virtual bool empty() const override { return this->transferDetailList_ == nullptr
        && this->transferType_ == nullptr; };
        // transferDetailList Field Functions 
        bool hasTransferDetailList() const { return this->transferDetailList_ != nullptr;};
        void deleteTransferDetailList() { this->transferDetailList_ = nullptr;};
        inline const vector<TrainTransferStationSearchVO::TransferDetailList> & getTransferDetailList() const { DARABONBA_PTR_GET_CONST(transferDetailList_, vector<TrainTransferStationSearchVO::TransferDetailList>) };
        inline vector<TrainTransferStationSearchVO::TransferDetailList> getTransferDetailList() { DARABONBA_PTR_GET(transferDetailList_, vector<TrainTransferStationSearchVO::TransferDetailList>) };
        inline TrainTransferStationSearchVO& setTransferDetailList(const vector<TrainTransferStationSearchVO::TransferDetailList> & transferDetailList) { DARABONBA_PTR_SET_VALUE(transferDetailList_, transferDetailList) };
        inline TrainTransferStationSearchVO& setTransferDetailList(vector<TrainTransferStationSearchVO::TransferDetailList> && transferDetailList) { DARABONBA_PTR_SET_RVALUE(transferDetailList_, transferDetailList) };


        // transferType Field Functions 
        bool hasTransferType() const { return this->transferType_ != nullptr;};
        void deleteTransferType() { this->transferType_ = nullptr;};
        inline string getTransferType() const { DARABONBA_PTR_GET_DEFAULT(transferType_, "") };
        inline TrainTransferStationSearchVO& setTransferType(string transferType) { DARABONBA_PTR_SET_VALUE(transferType_, transferType) };


      protected:
        shared_ptr<vector<TrainTransferStationSearchVO::TransferDetailList>> transferDetailList_ {};
        shared_ptr<string> transferType_ {};
      };

      class TrainStationSearchVO : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const TrainStationSearchVO& obj) { 
          DARABONBA_PTR_TO_JSON(arr_day_tag, arrDayTag_);
          DARABONBA_PTR_TO_JSON(arr_station_code, arrStationCode_);
          DARABONBA_PTR_TO_JSON(arr_station_name, arrStationName_);
          DARABONBA_PTR_TO_JSON(arr_time, arrTime_);
          DARABONBA_PTR_TO_JSON(cost_time, costTime_);
          DARABONBA_PTR_TO_JSON(dep_station_code, depStationCode_);
          DARABONBA_PTR_TO_JSON(dep_station_name, depStationName_);
          DARABONBA_PTR_TO_JSON(dep_time, depTime_);
          DARABONBA_PTR_TO_JSON(is_end_station, isEndStation_);
          DARABONBA_PTR_TO_JSON(is_start_station, isStartStation_);
          DARABONBA_PTR_TO_JSON(price, price_);
          DARABONBA_PTR_TO_JSON(sale_flag, saleFlag_);
          DARABONBA_PTR_TO_JSON(seat_infos, seatInfos_);
          DARABONBA_PTR_TO_JSON(train_no, trainNo_);
          DARABONBA_PTR_TO_JSON(train_type, trainType_);
        };
        friend void from_json(const Darabonba::Json& j, TrainStationSearchVO& obj) { 
          DARABONBA_PTR_FROM_JSON(arr_day_tag, arrDayTag_);
          DARABONBA_PTR_FROM_JSON(arr_station_code, arrStationCode_);
          DARABONBA_PTR_FROM_JSON(arr_station_name, arrStationName_);
          DARABONBA_PTR_FROM_JSON(arr_time, arrTime_);
          DARABONBA_PTR_FROM_JSON(cost_time, costTime_);
          DARABONBA_PTR_FROM_JSON(dep_station_code, depStationCode_);
          DARABONBA_PTR_FROM_JSON(dep_station_name, depStationName_);
          DARABONBA_PTR_FROM_JSON(dep_time, depTime_);
          DARABONBA_PTR_FROM_JSON(is_end_station, isEndStation_);
          DARABONBA_PTR_FROM_JSON(is_start_station, isStartStation_);
          DARABONBA_PTR_FROM_JSON(price, price_);
          DARABONBA_PTR_FROM_JSON(sale_flag, saleFlag_);
          DARABONBA_PTR_FROM_JSON(seat_infos, seatInfos_);
          DARABONBA_PTR_FROM_JSON(train_no, trainNo_);
          DARABONBA_PTR_FROM_JSON(train_type, trainType_);
        };
        TrainStationSearchVO() = default ;
        TrainStationSearchVO(const TrainStationSearchVO &) = default ;
        TrainStationSearchVO(TrainStationSearchVO &&) = default ;
        TrainStationSearchVO(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~TrainStationSearchVO() = default ;
        TrainStationSearchVO& operator=(const TrainStationSearchVO &) = default ;
        TrainStationSearchVO& operator=(TrainStationSearchVO &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class SeatInfos : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const SeatInfos& obj) { 
            DARABONBA_PTR_TO_JSON(price, price_);
            DARABONBA_PTR_TO_JSON(seat_name, seatName_);
            DARABONBA_PTR_TO_JSON(seat_type, seatType_);
            DARABONBA_PTR_TO_JSON(stock, stock_);
          };
          friend void from_json(const Darabonba::Json& j, SeatInfos& obj) { 
            DARABONBA_PTR_FROM_JSON(price, price_);
            DARABONBA_PTR_FROM_JSON(seat_name, seatName_);
            DARABONBA_PTR_FROM_JSON(seat_type, seatType_);
            DARABONBA_PTR_FROM_JSON(stock, stock_);
          };
          SeatInfos() = default ;
          SeatInfos(const SeatInfos &) = default ;
          SeatInfos(SeatInfos &&) = default ;
          SeatInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~SeatInfos() = default ;
          SeatInfos& operator=(const SeatInfos &) = default ;
          SeatInfos& operator=(SeatInfos &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->price_ == nullptr
        && this->seatName_ == nullptr && this->seatType_ == nullptr && this->stock_ == nullptr; };
          // price Field Functions 
          bool hasPrice() const { return this->price_ != nullptr;};
          void deletePrice() { this->price_ = nullptr;};
          inline int64_t getPrice() const { DARABONBA_PTR_GET_DEFAULT(price_, 0L) };
          inline SeatInfos& setPrice(int64_t price) { DARABONBA_PTR_SET_VALUE(price_, price) };


          // seatName Field Functions 
          bool hasSeatName() const { return this->seatName_ != nullptr;};
          void deleteSeatName() { this->seatName_ = nullptr;};
          inline string getSeatName() const { DARABONBA_PTR_GET_DEFAULT(seatName_, "") };
          inline SeatInfos& setSeatName(string seatName) { DARABONBA_PTR_SET_VALUE(seatName_, seatName) };


          // seatType Field Functions 
          bool hasSeatType() const { return this->seatType_ != nullptr;};
          void deleteSeatType() { this->seatType_ = nullptr;};
          inline string getSeatType() const { DARABONBA_PTR_GET_DEFAULT(seatType_, "") };
          inline SeatInfos& setSeatType(string seatType) { DARABONBA_PTR_SET_VALUE(seatType_, seatType) };


          // stock Field Functions 
          bool hasStock() const { return this->stock_ != nullptr;};
          void deleteStock() { this->stock_ = nullptr;};
          inline string getStock() const { DARABONBA_PTR_GET_DEFAULT(stock_, "") };
          inline SeatInfos& setStock(string stock) { DARABONBA_PTR_SET_VALUE(stock_, stock) };


        protected:
          shared_ptr<int64_t> price_ {};
          shared_ptr<string> seatName_ {};
          shared_ptr<string> seatType_ {};
          shared_ptr<string> stock_ {};
        };

        virtual bool empty() const override { return this->arrDayTag_ == nullptr
        && this->arrStationCode_ == nullptr && this->arrStationName_ == nullptr && this->arrTime_ == nullptr && this->costTime_ == nullptr && this->depStationCode_ == nullptr
        && this->depStationName_ == nullptr && this->depTime_ == nullptr && this->isEndStation_ == nullptr && this->isStartStation_ == nullptr && this->price_ == nullptr
        && this->saleFlag_ == nullptr && this->seatInfos_ == nullptr && this->trainNo_ == nullptr && this->trainType_ == nullptr; };
        // arrDayTag Field Functions 
        bool hasArrDayTag() const { return this->arrDayTag_ != nullptr;};
        void deleteArrDayTag() { this->arrDayTag_ = nullptr;};
        inline string getArrDayTag() const { DARABONBA_PTR_GET_DEFAULT(arrDayTag_, "") };
        inline TrainStationSearchVO& setArrDayTag(string arrDayTag) { DARABONBA_PTR_SET_VALUE(arrDayTag_, arrDayTag) };


        // arrStationCode Field Functions 
        bool hasArrStationCode() const { return this->arrStationCode_ != nullptr;};
        void deleteArrStationCode() { this->arrStationCode_ = nullptr;};
        inline string getArrStationCode() const { DARABONBA_PTR_GET_DEFAULT(arrStationCode_, "") };
        inline TrainStationSearchVO& setArrStationCode(string arrStationCode) { DARABONBA_PTR_SET_VALUE(arrStationCode_, arrStationCode) };


        // arrStationName Field Functions 
        bool hasArrStationName() const { return this->arrStationName_ != nullptr;};
        void deleteArrStationName() { this->arrStationName_ = nullptr;};
        inline string getArrStationName() const { DARABONBA_PTR_GET_DEFAULT(arrStationName_, "") };
        inline TrainStationSearchVO& setArrStationName(string arrStationName) { DARABONBA_PTR_SET_VALUE(arrStationName_, arrStationName) };


        // arrTime Field Functions 
        bool hasArrTime() const { return this->arrTime_ != nullptr;};
        void deleteArrTime() { this->arrTime_ = nullptr;};
        inline string getArrTime() const { DARABONBA_PTR_GET_DEFAULT(arrTime_, "") };
        inline TrainStationSearchVO& setArrTime(string arrTime) { DARABONBA_PTR_SET_VALUE(arrTime_, arrTime) };


        // costTime Field Functions 
        bool hasCostTime() const { return this->costTime_ != nullptr;};
        void deleteCostTime() { this->costTime_ = nullptr;};
        inline string getCostTime() const { DARABONBA_PTR_GET_DEFAULT(costTime_, "") };
        inline TrainStationSearchVO& setCostTime(string costTime) { DARABONBA_PTR_SET_VALUE(costTime_, costTime) };


        // depStationCode Field Functions 
        bool hasDepStationCode() const { return this->depStationCode_ != nullptr;};
        void deleteDepStationCode() { this->depStationCode_ = nullptr;};
        inline string getDepStationCode() const { DARABONBA_PTR_GET_DEFAULT(depStationCode_, "") };
        inline TrainStationSearchVO& setDepStationCode(string depStationCode) { DARABONBA_PTR_SET_VALUE(depStationCode_, depStationCode) };


        // depStationName Field Functions 
        bool hasDepStationName() const { return this->depStationName_ != nullptr;};
        void deleteDepStationName() { this->depStationName_ = nullptr;};
        inline string getDepStationName() const { DARABONBA_PTR_GET_DEFAULT(depStationName_, "") };
        inline TrainStationSearchVO& setDepStationName(string depStationName) { DARABONBA_PTR_SET_VALUE(depStationName_, depStationName) };


        // depTime Field Functions 
        bool hasDepTime() const { return this->depTime_ != nullptr;};
        void deleteDepTime() { this->depTime_ = nullptr;};
        inline string getDepTime() const { DARABONBA_PTR_GET_DEFAULT(depTime_, "") };
        inline TrainStationSearchVO& setDepTime(string depTime) { DARABONBA_PTR_SET_VALUE(depTime_, depTime) };


        // isEndStation Field Functions 
        bool hasIsEndStation() const { return this->isEndStation_ != nullptr;};
        void deleteIsEndStation() { this->isEndStation_ = nullptr;};
        inline int32_t getIsEndStation() const { DARABONBA_PTR_GET_DEFAULT(isEndStation_, 0) };
        inline TrainStationSearchVO& setIsEndStation(int32_t isEndStation) { DARABONBA_PTR_SET_VALUE(isEndStation_, isEndStation) };


        // isStartStation Field Functions 
        bool hasIsStartStation() const { return this->isStartStation_ != nullptr;};
        void deleteIsStartStation() { this->isStartStation_ = nullptr;};
        inline int32_t getIsStartStation() const { DARABONBA_PTR_GET_DEFAULT(isStartStation_, 0) };
        inline TrainStationSearchVO& setIsStartStation(int32_t isStartStation) { DARABONBA_PTR_SET_VALUE(isStartStation_, isStartStation) };


        // price Field Functions 
        bool hasPrice() const { return this->price_ != nullptr;};
        void deletePrice() { this->price_ = nullptr;};
        inline string getPrice() const { DARABONBA_PTR_GET_DEFAULT(price_, "") };
        inline TrainStationSearchVO& setPrice(string price) { DARABONBA_PTR_SET_VALUE(price_, price) };


        // saleFlag Field Functions 
        bool hasSaleFlag() const { return this->saleFlag_ != nullptr;};
        void deleteSaleFlag() { this->saleFlag_ = nullptr;};
        inline string getSaleFlag() const { DARABONBA_PTR_GET_DEFAULT(saleFlag_, "") };
        inline TrainStationSearchVO& setSaleFlag(string saleFlag) { DARABONBA_PTR_SET_VALUE(saleFlag_, saleFlag) };


        // seatInfos Field Functions 
        bool hasSeatInfos() const { return this->seatInfos_ != nullptr;};
        void deleteSeatInfos() { this->seatInfos_ = nullptr;};
        inline const vector<TrainStationSearchVO::SeatInfos> & getSeatInfos() const { DARABONBA_PTR_GET_CONST(seatInfos_, vector<TrainStationSearchVO::SeatInfos>) };
        inline vector<TrainStationSearchVO::SeatInfos> getSeatInfos() { DARABONBA_PTR_GET(seatInfos_, vector<TrainStationSearchVO::SeatInfos>) };
        inline TrainStationSearchVO& setSeatInfos(const vector<TrainStationSearchVO::SeatInfos> & seatInfos) { DARABONBA_PTR_SET_VALUE(seatInfos_, seatInfos) };
        inline TrainStationSearchVO& setSeatInfos(vector<TrainStationSearchVO::SeatInfos> && seatInfos) { DARABONBA_PTR_SET_RVALUE(seatInfos_, seatInfos) };


        // trainNo Field Functions 
        bool hasTrainNo() const { return this->trainNo_ != nullptr;};
        void deleteTrainNo() { this->trainNo_ = nullptr;};
        inline string getTrainNo() const { DARABONBA_PTR_GET_DEFAULT(trainNo_, "") };
        inline TrainStationSearchVO& setTrainNo(string trainNo) { DARABONBA_PTR_SET_VALUE(trainNo_, trainNo) };


        // trainType Field Functions 
        bool hasTrainType() const { return this->trainType_ != nullptr;};
        void deleteTrainType() { this->trainType_ = nullptr;};
        inline string getTrainType() const { DARABONBA_PTR_GET_DEFAULT(trainType_, "") };
        inline TrainStationSearchVO& setTrainType(string trainType) { DARABONBA_PTR_SET_VALUE(trainType_, trainType) };


      protected:
        shared_ptr<string> arrDayTag_ {};
        shared_ptr<string> arrStationCode_ {};
        shared_ptr<string> arrStationName_ {};
        shared_ptr<string> arrTime_ {};
        shared_ptr<string> costTime_ {};
        shared_ptr<string> depStationCode_ {};
        shared_ptr<string> depStationName_ {};
        shared_ptr<string> depTime_ {};
        shared_ptr<int32_t> isEndStation_ {};
        shared_ptr<int32_t> isStartStation_ {};
        shared_ptr<string> price_ {};
        shared_ptr<string> saleFlag_ {};
        shared_ptr<vector<TrainStationSearchVO::SeatInfos>> seatInfos_ {};
        shared_ptr<string> trainNo_ {};
        shared_ptr<string> trainType_ {};
      };

      virtual bool empty() const override { return this->trainStationSearchVO_ == nullptr
        && this->trainTransferStationSearchVO_ == nullptr; };
      // trainStationSearchVO Field Functions 
      bool hasTrainStationSearchVO() const { return this->trainStationSearchVO_ != nullptr;};
      void deleteTrainStationSearchVO() { this->trainStationSearchVO_ = nullptr;};
      inline const Module::TrainStationSearchVO & getTrainStationSearchVO() const { DARABONBA_PTR_GET_CONST(trainStationSearchVO_, Module::TrainStationSearchVO) };
      inline Module::TrainStationSearchVO getTrainStationSearchVO() { DARABONBA_PTR_GET(trainStationSearchVO_, Module::TrainStationSearchVO) };
      inline Module& setTrainStationSearchVO(const Module::TrainStationSearchVO & trainStationSearchVO) { DARABONBA_PTR_SET_VALUE(trainStationSearchVO_, trainStationSearchVO) };
      inline Module& setTrainStationSearchVO(Module::TrainStationSearchVO && trainStationSearchVO) { DARABONBA_PTR_SET_RVALUE(trainStationSearchVO_, trainStationSearchVO) };


      // trainTransferStationSearchVO Field Functions 
      bool hasTrainTransferStationSearchVO() const { return this->trainTransferStationSearchVO_ != nullptr;};
      void deleteTrainTransferStationSearchVO() { this->trainTransferStationSearchVO_ = nullptr;};
      inline const Module::TrainTransferStationSearchVO & getTrainTransferStationSearchVO() const { DARABONBA_PTR_GET_CONST(trainTransferStationSearchVO_, Module::TrainTransferStationSearchVO) };
      inline Module::TrainTransferStationSearchVO getTrainTransferStationSearchVO() { DARABONBA_PTR_GET(trainTransferStationSearchVO_, Module::TrainTransferStationSearchVO) };
      inline Module& setTrainTransferStationSearchVO(const Module::TrainTransferStationSearchVO & trainTransferStationSearchVO) { DARABONBA_PTR_SET_VALUE(trainTransferStationSearchVO_, trainTransferStationSearchVO) };
      inline Module& setTrainTransferStationSearchVO(Module::TrainTransferStationSearchVO && trainTransferStationSearchVO) { DARABONBA_PTR_SET_RVALUE(trainTransferStationSearchVO_, trainTransferStationSearchVO) };


    protected:
      shared_ptr<Module::TrainStationSearchVO> trainStationSearchVO_ {};
      shared_ptr<Module::TrainTransferStationSearchVO> trainTransferStationSearchVO_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->message_ == nullptr && this->module_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr && this->traceId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline TrainNoInfoSearchResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline TrainNoInfoSearchResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // module Field Functions 
    bool hasModule() const { return this->module_ != nullptr;};
    void deleteModule() { this->module_ = nullptr;};
    inline const TrainNoInfoSearchResponseBody::Module & getModule() const { DARABONBA_PTR_GET_CONST(module_, TrainNoInfoSearchResponseBody::Module) };
    inline TrainNoInfoSearchResponseBody::Module getModule() { DARABONBA_PTR_GET(module_, TrainNoInfoSearchResponseBody::Module) };
    inline TrainNoInfoSearchResponseBody& setModule(const TrainNoInfoSearchResponseBody::Module & module) { DARABONBA_PTR_SET_VALUE(module_, module) };
    inline TrainNoInfoSearchResponseBody& setModule(TrainNoInfoSearchResponseBody::Module && module) { DARABONBA_PTR_SET_RVALUE(module_, module) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline TrainNoInfoSearchResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline TrainNoInfoSearchResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // traceId Field Functions 
    bool hasTraceId() const { return this->traceId_ != nullptr;};
    void deleteTraceId() { this->traceId_ = nullptr;};
    inline string getTraceId() const { DARABONBA_PTR_GET_DEFAULT(traceId_, "") };
    inline TrainNoInfoSearchResponseBody& setTraceId(string traceId) { DARABONBA_PTR_SET_VALUE(traceId_, traceId) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<string> message_ {};
    // module
    shared_ptr<TrainNoInfoSearchResponseBody::Module> module_ {};
    // requestId
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
    // requestId
    shared_ptr<string> traceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
