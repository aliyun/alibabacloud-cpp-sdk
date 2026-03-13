// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_HOTELORDERCHANGEDETAILRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_HOTELORDERCHANGEDETAILRESPONSEBODY_HPP_
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
  class HotelOrderChangeDetailResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const HotelOrderChangeDetailResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(module, module_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(success, success_);
      DARABONBA_PTR_TO_JSON(traceId, traceId_);
    };
    friend void from_json(const Darabonba::Json& j, HotelOrderChangeDetailResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(module, module_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(success, success_);
      DARABONBA_PTR_FROM_JSON(traceId, traceId_);
    };
    HotelOrderChangeDetailResponseBody() = default ;
    HotelOrderChangeDetailResponseBody(const HotelOrderChangeDetailResponseBody &) = default ;
    HotelOrderChangeDetailResponseBody(HotelOrderChangeDetailResponseBody &&) = default ;
    HotelOrderChangeDetailResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~HotelOrderChangeDetailResponseBody() = default ;
    HotelOrderChangeDetailResponseBody& operator=(const HotelOrderChangeDetailResponseBody &) = default ;
    HotelOrderChangeDetailResponseBody& operator=(HotelOrderChangeDetailResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Module : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Module& obj) { 
        DARABONBA_PTR_TO_JSON(change_order_id, changeOrderId_);
        DARABONBA_PTR_TO_JSON(change_type, changeType_);
        DARABONBA_PTR_TO_JSON(corp_id, corpId_);
        DARABONBA_PTR_TO_JSON(dis_order_id, disOrderId_);
        DARABONBA_PTR_TO_JSON(gmt_create, gmtCreate_);
        DARABONBA_PTR_TO_JSON(gmt_modified, gmtModified_);
        DARABONBA_PTR_TO_JSON(reason, reason_);
        DARABONBA_PTR_TO_JSON(remarks, remarks_);
        DARABONBA_PTR_TO_JSON(room_info_list, roomInfoList_);
        DARABONBA_PTR_TO_JSON(sale_order_id, saleOrderId_);
        DARABONBA_PTR_TO_JSON(source, source_);
        DARABONBA_PTR_TO_JSON(status, status_);
        DARABONBA_PTR_TO_JSON(work_order_id, workOrderId_);
      };
      friend void from_json(const Darabonba::Json& j, Module& obj) { 
        DARABONBA_PTR_FROM_JSON(change_order_id, changeOrderId_);
        DARABONBA_PTR_FROM_JSON(change_type, changeType_);
        DARABONBA_PTR_FROM_JSON(corp_id, corpId_);
        DARABONBA_PTR_FROM_JSON(dis_order_id, disOrderId_);
        DARABONBA_PTR_FROM_JSON(gmt_create, gmtCreate_);
        DARABONBA_PTR_FROM_JSON(gmt_modified, gmtModified_);
        DARABONBA_PTR_FROM_JSON(reason, reason_);
        DARABONBA_PTR_FROM_JSON(remarks, remarks_);
        DARABONBA_PTR_FROM_JSON(room_info_list, roomInfoList_);
        DARABONBA_PTR_FROM_JSON(sale_order_id, saleOrderId_);
        DARABONBA_PTR_FROM_JSON(source, source_);
        DARABONBA_PTR_FROM_JSON(status, status_);
        DARABONBA_PTR_FROM_JSON(work_order_id, workOrderId_);
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
      class RoomInfoList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const RoomInfoList& obj) { 
          DARABONBA_PTR_TO_JSON(cancel_date, cancelDate_);
          DARABONBA_PTR_TO_JSON(room_daily_refund_infos, roomDailyRefundInfos_);
          DARABONBA_PTR_TO_JSON(room_no, roomNo_);
        };
        friend void from_json(const Darabonba::Json& j, RoomInfoList& obj) { 
          DARABONBA_PTR_FROM_JSON(cancel_date, cancelDate_);
          DARABONBA_PTR_FROM_JSON(room_daily_refund_infos, roomDailyRefundInfos_);
          DARABONBA_PTR_FROM_JSON(room_no, roomNo_);
        };
        RoomInfoList() = default ;
        RoomInfoList(const RoomInfoList &) = default ;
        RoomInfoList(RoomInfoList &&) = default ;
        RoomInfoList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~RoomInfoList() = default ;
        RoomInfoList& operator=(const RoomInfoList &) = default ;
        RoomInfoList& operator=(RoomInfoList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class RoomDailyRefundInfos : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const RoomDailyRefundInfos& obj) { 
            DARABONBA_PTR_TO_JSON(check_in_date, checkInDate_);
            DARABONBA_PTR_TO_JSON(penalty_price, penaltyPrice_);
            DARABONBA_PTR_TO_JSON(price, price_);
            DARABONBA_PTR_TO_JSON(refund_price, refundPrice_);
          };
          friend void from_json(const Darabonba::Json& j, RoomDailyRefundInfos& obj) { 
            DARABONBA_PTR_FROM_JSON(check_in_date, checkInDate_);
            DARABONBA_PTR_FROM_JSON(penalty_price, penaltyPrice_);
            DARABONBA_PTR_FROM_JSON(price, price_);
            DARABONBA_PTR_FROM_JSON(refund_price, refundPrice_);
          };
          RoomDailyRefundInfos() = default ;
          RoomDailyRefundInfos(const RoomDailyRefundInfos &) = default ;
          RoomDailyRefundInfos(RoomDailyRefundInfos &&) = default ;
          RoomDailyRefundInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~RoomDailyRefundInfos() = default ;
          RoomDailyRefundInfos& operator=(const RoomDailyRefundInfos &) = default ;
          RoomDailyRefundInfos& operator=(RoomDailyRefundInfos &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->checkInDate_ == nullptr
        && this->penaltyPrice_ == nullptr && this->price_ == nullptr && this->refundPrice_ == nullptr; };
          // checkInDate Field Functions 
          bool hasCheckInDate() const { return this->checkInDate_ != nullptr;};
          void deleteCheckInDate() { this->checkInDate_ = nullptr;};
          inline string getCheckInDate() const { DARABONBA_PTR_GET_DEFAULT(checkInDate_, "") };
          inline RoomDailyRefundInfos& setCheckInDate(string checkInDate) { DARABONBA_PTR_SET_VALUE(checkInDate_, checkInDate) };


          // penaltyPrice Field Functions 
          bool hasPenaltyPrice() const { return this->penaltyPrice_ != nullptr;};
          void deletePenaltyPrice() { this->penaltyPrice_ = nullptr;};
          inline int64_t getPenaltyPrice() const { DARABONBA_PTR_GET_DEFAULT(penaltyPrice_, 0L) };
          inline RoomDailyRefundInfos& setPenaltyPrice(int64_t penaltyPrice) { DARABONBA_PTR_SET_VALUE(penaltyPrice_, penaltyPrice) };


          // price Field Functions 
          bool hasPrice() const { return this->price_ != nullptr;};
          void deletePrice() { this->price_ = nullptr;};
          inline int64_t getPrice() const { DARABONBA_PTR_GET_DEFAULT(price_, 0L) };
          inline RoomDailyRefundInfos& setPrice(int64_t price) { DARABONBA_PTR_SET_VALUE(price_, price) };


          // refundPrice Field Functions 
          bool hasRefundPrice() const { return this->refundPrice_ != nullptr;};
          void deleteRefundPrice() { this->refundPrice_ = nullptr;};
          inline int64_t getRefundPrice() const { DARABONBA_PTR_GET_DEFAULT(refundPrice_, 0L) };
          inline RoomDailyRefundInfos& setRefundPrice(int64_t refundPrice) { DARABONBA_PTR_SET_VALUE(refundPrice_, refundPrice) };


        protected:
          shared_ptr<string> checkInDate_ {};
          shared_ptr<int64_t> penaltyPrice_ {};
          shared_ptr<int64_t> price_ {};
          shared_ptr<int64_t> refundPrice_ {};
        };

        virtual bool empty() const override { return this->cancelDate_ == nullptr
        && this->roomDailyRefundInfos_ == nullptr && this->roomNo_ == nullptr; };
        // cancelDate Field Functions 
        bool hasCancelDate() const { return this->cancelDate_ != nullptr;};
        void deleteCancelDate() { this->cancelDate_ = nullptr;};
        inline const vector<string> & getCancelDate() const { DARABONBA_PTR_GET_CONST(cancelDate_, vector<string>) };
        inline vector<string> getCancelDate() { DARABONBA_PTR_GET(cancelDate_, vector<string>) };
        inline RoomInfoList& setCancelDate(const vector<string> & cancelDate) { DARABONBA_PTR_SET_VALUE(cancelDate_, cancelDate) };
        inline RoomInfoList& setCancelDate(vector<string> && cancelDate) { DARABONBA_PTR_SET_RVALUE(cancelDate_, cancelDate) };


        // roomDailyRefundInfos Field Functions 
        bool hasRoomDailyRefundInfos() const { return this->roomDailyRefundInfos_ != nullptr;};
        void deleteRoomDailyRefundInfos() { this->roomDailyRefundInfos_ = nullptr;};
        inline const vector<RoomInfoList::RoomDailyRefundInfos> & getRoomDailyRefundInfos() const { DARABONBA_PTR_GET_CONST(roomDailyRefundInfos_, vector<RoomInfoList::RoomDailyRefundInfos>) };
        inline vector<RoomInfoList::RoomDailyRefundInfos> getRoomDailyRefundInfos() { DARABONBA_PTR_GET(roomDailyRefundInfos_, vector<RoomInfoList::RoomDailyRefundInfos>) };
        inline RoomInfoList& setRoomDailyRefundInfos(const vector<RoomInfoList::RoomDailyRefundInfos> & roomDailyRefundInfos) { DARABONBA_PTR_SET_VALUE(roomDailyRefundInfos_, roomDailyRefundInfos) };
        inline RoomInfoList& setRoomDailyRefundInfos(vector<RoomInfoList::RoomDailyRefundInfos> && roomDailyRefundInfos) { DARABONBA_PTR_SET_RVALUE(roomDailyRefundInfos_, roomDailyRefundInfos) };


        // roomNo Field Functions 
        bool hasRoomNo() const { return this->roomNo_ != nullptr;};
        void deleteRoomNo() { this->roomNo_ = nullptr;};
        inline int32_t getRoomNo() const { DARABONBA_PTR_GET_DEFAULT(roomNo_, 0) };
        inline RoomInfoList& setRoomNo(int32_t roomNo) { DARABONBA_PTR_SET_VALUE(roomNo_, roomNo) };


      protected:
        shared_ptr<vector<string>> cancelDate_ {};
        shared_ptr<vector<RoomInfoList::RoomDailyRefundInfos>> roomDailyRefundInfos_ {};
        shared_ptr<int32_t> roomNo_ {};
      };

      virtual bool empty() const override { return this->changeOrderId_ == nullptr
        && this->changeType_ == nullptr && this->corpId_ == nullptr && this->disOrderId_ == nullptr && this->gmtCreate_ == nullptr && this->gmtModified_ == nullptr
        && this->reason_ == nullptr && this->remarks_ == nullptr && this->roomInfoList_ == nullptr && this->saleOrderId_ == nullptr && this->source_ == nullptr
        && this->status_ == nullptr && this->workOrderId_ == nullptr; };
      // changeOrderId Field Functions 
      bool hasChangeOrderId() const { return this->changeOrderId_ != nullptr;};
      void deleteChangeOrderId() { this->changeOrderId_ = nullptr;};
      inline string getChangeOrderId() const { DARABONBA_PTR_GET_DEFAULT(changeOrderId_, "") };
      inline Module& setChangeOrderId(string changeOrderId) { DARABONBA_PTR_SET_VALUE(changeOrderId_, changeOrderId) };


      // changeType Field Functions 
      bool hasChangeType() const { return this->changeType_ != nullptr;};
      void deleteChangeType() { this->changeType_ = nullptr;};
      inline int32_t getChangeType() const { DARABONBA_PTR_GET_DEFAULT(changeType_, 0) };
      inline Module& setChangeType(int32_t changeType) { DARABONBA_PTR_SET_VALUE(changeType_, changeType) };


      // corpId Field Functions 
      bool hasCorpId() const { return this->corpId_ != nullptr;};
      void deleteCorpId() { this->corpId_ = nullptr;};
      inline string getCorpId() const { DARABONBA_PTR_GET_DEFAULT(corpId_, "") };
      inline Module& setCorpId(string corpId) { DARABONBA_PTR_SET_VALUE(corpId_, corpId) };


      // disOrderId Field Functions 
      bool hasDisOrderId() const { return this->disOrderId_ != nullptr;};
      void deleteDisOrderId() { this->disOrderId_ = nullptr;};
      inline string getDisOrderId() const { DARABONBA_PTR_GET_DEFAULT(disOrderId_, "") };
      inline Module& setDisOrderId(string disOrderId) { DARABONBA_PTR_SET_VALUE(disOrderId_, disOrderId) };


      // gmtCreate Field Functions 
      bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
      void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
      inline string getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
      inline Module& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


      // gmtModified Field Functions 
      bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
      void deleteGmtModified() { this->gmtModified_ = nullptr;};
      inline string getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
      inline Module& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


      // reason Field Functions 
      bool hasReason() const { return this->reason_ != nullptr;};
      void deleteReason() { this->reason_ = nullptr;};
      inline string getReason() const { DARABONBA_PTR_GET_DEFAULT(reason_, "") };
      inline Module& setReason(string reason) { DARABONBA_PTR_SET_VALUE(reason_, reason) };


      // remarks Field Functions 
      bool hasRemarks() const { return this->remarks_ != nullptr;};
      void deleteRemarks() { this->remarks_ = nullptr;};
      inline string getRemarks() const { DARABONBA_PTR_GET_DEFAULT(remarks_, "") };
      inline Module& setRemarks(string remarks) { DARABONBA_PTR_SET_VALUE(remarks_, remarks) };


      // roomInfoList Field Functions 
      bool hasRoomInfoList() const { return this->roomInfoList_ != nullptr;};
      void deleteRoomInfoList() { this->roomInfoList_ = nullptr;};
      inline const vector<Module::RoomInfoList> & getRoomInfoList() const { DARABONBA_PTR_GET_CONST(roomInfoList_, vector<Module::RoomInfoList>) };
      inline vector<Module::RoomInfoList> getRoomInfoList() { DARABONBA_PTR_GET(roomInfoList_, vector<Module::RoomInfoList>) };
      inline Module& setRoomInfoList(const vector<Module::RoomInfoList> & roomInfoList) { DARABONBA_PTR_SET_VALUE(roomInfoList_, roomInfoList) };
      inline Module& setRoomInfoList(vector<Module::RoomInfoList> && roomInfoList) { DARABONBA_PTR_SET_RVALUE(roomInfoList_, roomInfoList) };


      // saleOrderId Field Functions 
      bool hasSaleOrderId() const { return this->saleOrderId_ != nullptr;};
      void deleteSaleOrderId() { this->saleOrderId_ = nullptr;};
      inline string getSaleOrderId() const { DARABONBA_PTR_GET_DEFAULT(saleOrderId_, "") };
      inline Module& setSaleOrderId(string saleOrderId) { DARABONBA_PTR_SET_VALUE(saleOrderId_, saleOrderId) };


      // source Field Functions 
      bool hasSource() const { return this->source_ != nullptr;};
      void deleteSource() { this->source_ = nullptr;};
      inline int32_t getSource() const { DARABONBA_PTR_GET_DEFAULT(source_, 0) };
      inline Module& setSource(int32_t source) { DARABONBA_PTR_SET_VALUE(source_, source) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline int32_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
      inline Module& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // workOrderId Field Functions 
      bool hasWorkOrderId() const { return this->workOrderId_ != nullptr;};
      void deleteWorkOrderId() { this->workOrderId_ = nullptr;};
      inline string getWorkOrderId() const { DARABONBA_PTR_GET_DEFAULT(workOrderId_, "") };
      inline Module& setWorkOrderId(string workOrderId) { DARABONBA_PTR_SET_VALUE(workOrderId_, workOrderId) };


    protected:
      shared_ptr<string> changeOrderId_ {};
      shared_ptr<int32_t> changeType_ {};
      shared_ptr<string> corpId_ {};
      shared_ptr<string> disOrderId_ {};
      shared_ptr<string> gmtCreate_ {};
      shared_ptr<string> gmtModified_ {};
      shared_ptr<string> reason_ {};
      shared_ptr<string> remarks_ {};
      shared_ptr<vector<Module::RoomInfoList>> roomInfoList_ {};
      shared_ptr<string> saleOrderId_ {};
      shared_ptr<int32_t> source_ {};
      shared_ptr<int32_t> status_ {};
      shared_ptr<string> workOrderId_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->message_ == nullptr && this->module_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr && this->traceId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline HotelOrderChangeDetailResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline HotelOrderChangeDetailResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // module Field Functions 
    bool hasModule() const { return this->module_ != nullptr;};
    void deleteModule() { this->module_ = nullptr;};
    inline const HotelOrderChangeDetailResponseBody::Module & getModule() const { DARABONBA_PTR_GET_CONST(module_, HotelOrderChangeDetailResponseBody::Module) };
    inline HotelOrderChangeDetailResponseBody::Module getModule() { DARABONBA_PTR_GET(module_, HotelOrderChangeDetailResponseBody::Module) };
    inline HotelOrderChangeDetailResponseBody& setModule(const HotelOrderChangeDetailResponseBody::Module & module) { DARABONBA_PTR_SET_VALUE(module_, module) };
    inline HotelOrderChangeDetailResponseBody& setModule(HotelOrderChangeDetailResponseBody::Module && module) { DARABONBA_PTR_SET_RVALUE(module_, module) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline HotelOrderChangeDetailResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline HotelOrderChangeDetailResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // traceId Field Functions 
    bool hasTraceId() const { return this->traceId_ != nullptr;};
    void deleteTraceId() { this->traceId_ = nullptr;};
    inline string getTraceId() const { DARABONBA_PTR_GET_DEFAULT(traceId_, "") };
    inline HotelOrderChangeDetailResponseBody& setTraceId(string traceId) { DARABONBA_PTR_SET_VALUE(traceId_, traceId) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<string> message_ {};
    shared_ptr<HotelOrderChangeDetailResponseBody::Module> module_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
    shared_ptr<string> traceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
