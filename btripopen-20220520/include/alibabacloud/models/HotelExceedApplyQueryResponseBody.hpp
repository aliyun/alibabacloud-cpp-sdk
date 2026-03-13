// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_HOTELEXCEEDAPPLYQUERYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_HOTELEXCEEDAPPLYQUERYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class HotelExceedApplyQueryResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const HotelExceedApplyQueryResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(module, module_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(success, success_);
      DARABONBA_PTR_TO_JSON(traceId, traceId_);
    };
    friend void from_json(const Darabonba::Json& j, HotelExceedApplyQueryResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(module, module_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(success, success_);
      DARABONBA_PTR_FROM_JSON(traceId, traceId_);
    };
    HotelExceedApplyQueryResponseBody() = default ;
    HotelExceedApplyQueryResponseBody(const HotelExceedApplyQueryResponseBody &) = default ;
    HotelExceedApplyQueryResponseBody(HotelExceedApplyQueryResponseBody &&) = default ;
    HotelExceedApplyQueryResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~HotelExceedApplyQueryResponseBody() = default ;
    HotelExceedApplyQueryResponseBody& operator=(const HotelExceedApplyQueryResponseBody &) = default ;
    HotelExceedApplyQueryResponseBody& operator=(HotelExceedApplyQueryResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Module : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Module& obj) { 
        DARABONBA_PTR_TO_JSON(apply_id, applyId_);
        DARABONBA_PTR_TO_JSON(apply_intention_info_do, applyIntentionInfoDo_);
        DARABONBA_PTR_TO_JSON(btrip_cause, btripCause_);
        DARABONBA_PTR_TO_JSON(corp_id, corpId_);
        DARABONBA_PTR_TO_JSON(exceed_reason, exceedReason_);
        DARABONBA_PTR_TO_JSON(exceed_type, exceedType_);
        DARABONBA_PTR_TO_JSON(origin_standard, originStandard_);
        DARABONBA_PTR_TO_JSON(status, status_);
        DARABONBA_PTR_TO_JSON(submit_time, submitTime_);
        DARABONBA_PTR_TO_JSON(thirdpart_apply_id, thirdpartApplyId_);
        DARABONBA_PTR_TO_JSON(thirdpart_corp_id, thirdpartCorpId_);
        DARABONBA_PTR_TO_JSON(user_id, userId_);
        DARABONBA_PTR_TO_JSON(user_name, userName_);
      };
      friend void from_json(const Darabonba::Json& j, Module& obj) { 
        DARABONBA_PTR_FROM_JSON(apply_id, applyId_);
        DARABONBA_PTR_FROM_JSON(apply_intention_info_do, applyIntentionInfoDo_);
        DARABONBA_PTR_FROM_JSON(btrip_cause, btripCause_);
        DARABONBA_PTR_FROM_JSON(corp_id, corpId_);
        DARABONBA_PTR_FROM_JSON(exceed_reason, exceedReason_);
        DARABONBA_PTR_FROM_JSON(exceed_type, exceedType_);
        DARABONBA_PTR_FROM_JSON(origin_standard, originStandard_);
        DARABONBA_PTR_FROM_JSON(status, status_);
        DARABONBA_PTR_FROM_JSON(submit_time, submitTime_);
        DARABONBA_PTR_FROM_JSON(thirdpart_apply_id, thirdpartApplyId_);
        DARABONBA_PTR_FROM_JSON(thirdpart_corp_id, thirdpartCorpId_);
        DARABONBA_PTR_FROM_JSON(user_id, userId_);
        DARABONBA_PTR_FROM_JSON(user_name, userName_);
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
      class ApplyIntentionInfoDo : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ApplyIntentionInfoDo& obj) { 
          DARABONBA_PTR_TO_JSON(check_in, checkIn_);
          DARABONBA_PTR_TO_JSON(check_out, checkOut_);
          DARABONBA_PTR_TO_JSON(city_code, cityCode_);
          DARABONBA_PTR_TO_JSON(city_name, cityName_);
          DARABONBA_PTR_TO_JSON(price, price_);
          DARABONBA_PTR_TO_JSON(together, together_);
          DARABONBA_PTR_TO_JSON(type, type_);
        };
        friend void from_json(const Darabonba::Json& j, ApplyIntentionInfoDo& obj) { 
          DARABONBA_PTR_FROM_JSON(check_in, checkIn_);
          DARABONBA_PTR_FROM_JSON(check_out, checkOut_);
          DARABONBA_PTR_FROM_JSON(city_code, cityCode_);
          DARABONBA_PTR_FROM_JSON(city_name, cityName_);
          DARABONBA_PTR_FROM_JSON(price, price_);
          DARABONBA_PTR_FROM_JSON(together, together_);
          DARABONBA_PTR_FROM_JSON(type, type_);
        };
        ApplyIntentionInfoDo() = default ;
        ApplyIntentionInfoDo(const ApplyIntentionInfoDo &) = default ;
        ApplyIntentionInfoDo(ApplyIntentionInfoDo &&) = default ;
        ApplyIntentionInfoDo(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ApplyIntentionInfoDo() = default ;
        ApplyIntentionInfoDo& operator=(const ApplyIntentionInfoDo &) = default ;
        ApplyIntentionInfoDo& operator=(ApplyIntentionInfoDo &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->checkIn_ == nullptr
        && this->checkOut_ == nullptr && this->cityCode_ == nullptr && this->cityName_ == nullptr && this->price_ == nullptr && this->together_ == nullptr
        && this->type_ == nullptr; };
        // checkIn Field Functions 
        bool hasCheckIn() const { return this->checkIn_ != nullptr;};
        void deleteCheckIn() { this->checkIn_ = nullptr;};
        inline string getCheckIn() const { DARABONBA_PTR_GET_DEFAULT(checkIn_, "") };
        inline ApplyIntentionInfoDo& setCheckIn(string checkIn) { DARABONBA_PTR_SET_VALUE(checkIn_, checkIn) };


        // checkOut Field Functions 
        bool hasCheckOut() const { return this->checkOut_ != nullptr;};
        void deleteCheckOut() { this->checkOut_ = nullptr;};
        inline string getCheckOut() const { DARABONBA_PTR_GET_DEFAULT(checkOut_, "") };
        inline ApplyIntentionInfoDo& setCheckOut(string checkOut) { DARABONBA_PTR_SET_VALUE(checkOut_, checkOut) };


        // cityCode Field Functions 
        bool hasCityCode() const { return this->cityCode_ != nullptr;};
        void deleteCityCode() { this->cityCode_ = nullptr;};
        inline string getCityCode() const { DARABONBA_PTR_GET_DEFAULT(cityCode_, "") };
        inline ApplyIntentionInfoDo& setCityCode(string cityCode) { DARABONBA_PTR_SET_VALUE(cityCode_, cityCode) };


        // cityName Field Functions 
        bool hasCityName() const { return this->cityName_ != nullptr;};
        void deleteCityName() { this->cityName_ = nullptr;};
        inline string getCityName() const { DARABONBA_PTR_GET_DEFAULT(cityName_, "") };
        inline ApplyIntentionInfoDo& setCityName(string cityName) { DARABONBA_PTR_SET_VALUE(cityName_, cityName) };


        // price Field Functions 
        bool hasPrice() const { return this->price_ != nullptr;};
        void deletePrice() { this->price_ = nullptr;};
        inline int64_t getPrice() const { DARABONBA_PTR_GET_DEFAULT(price_, 0L) };
        inline ApplyIntentionInfoDo& setPrice(int64_t price) { DARABONBA_PTR_SET_VALUE(price_, price) };


        // together Field Functions 
        bool hasTogether() const { return this->together_ != nullptr;};
        void deleteTogether() { this->together_ = nullptr;};
        inline bool getTogether() const { DARABONBA_PTR_GET_DEFAULT(together_, false) };
        inline ApplyIntentionInfoDo& setTogether(bool together) { DARABONBA_PTR_SET_VALUE(together_, together) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline int32_t getType() const { DARABONBA_PTR_GET_DEFAULT(type_, 0) };
        inline ApplyIntentionInfoDo& setType(int32_t type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      protected:
        shared_ptr<string> checkIn_ {};
        shared_ptr<string> checkOut_ {};
        shared_ptr<string> cityCode_ {};
        shared_ptr<string> cityName_ {};
        shared_ptr<int64_t> price_ {};
        shared_ptr<bool> together_ {};
        shared_ptr<int32_t> type_ {};
      };

      virtual bool empty() const override { return this->applyId_ == nullptr
        && this->applyIntentionInfoDo_ == nullptr && this->btripCause_ == nullptr && this->corpId_ == nullptr && this->exceedReason_ == nullptr && this->exceedType_ == nullptr
        && this->originStandard_ == nullptr && this->status_ == nullptr && this->submitTime_ == nullptr && this->thirdpartApplyId_ == nullptr && this->thirdpartCorpId_ == nullptr
        && this->userId_ == nullptr && this->userName_ == nullptr; };
      // applyId Field Functions 
      bool hasApplyId() const { return this->applyId_ != nullptr;};
      void deleteApplyId() { this->applyId_ = nullptr;};
      inline int64_t getApplyId() const { DARABONBA_PTR_GET_DEFAULT(applyId_, 0L) };
      inline Module& setApplyId(int64_t applyId) { DARABONBA_PTR_SET_VALUE(applyId_, applyId) };


      // applyIntentionInfoDo Field Functions 
      bool hasApplyIntentionInfoDo() const { return this->applyIntentionInfoDo_ != nullptr;};
      void deleteApplyIntentionInfoDo() { this->applyIntentionInfoDo_ = nullptr;};
      inline const Module::ApplyIntentionInfoDo & getApplyIntentionInfoDo() const { DARABONBA_PTR_GET_CONST(applyIntentionInfoDo_, Module::ApplyIntentionInfoDo) };
      inline Module::ApplyIntentionInfoDo getApplyIntentionInfoDo() { DARABONBA_PTR_GET(applyIntentionInfoDo_, Module::ApplyIntentionInfoDo) };
      inline Module& setApplyIntentionInfoDo(const Module::ApplyIntentionInfoDo & applyIntentionInfoDo) { DARABONBA_PTR_SET_VALUE(applyIntentionInfoDo_, applyIntentionInfoDo) };
      inline Module& setApplyIntentionInfoDo(Module::ApplyIntentionInfoDo && applyIntentionInfoDo) { DARABONBA_PTR_SET_RVALUE(applyIntentionInfoDo_, applyIntentionInfoDo) };


      // btripCause Field Functions 
      bool hasBtripCause() const { return this->btripCause_ != nullptr;};
      void deleteBtripCause() { this->btripCause_ = nullptr;};
      inline string getBtripCause() const { DARABONBA_PTR_GET_DEFAULT(btripCause_, "") };
      inline Module& setBtripCause(string btripCause) { DARABONBA_PTR_SET_VALUE(btripCause_, btripCause) };


      // corpId Field Functions 
      bool hasCorpId() const { return this->corpId_ != nullptr;};
      void deleteCorpId() { this->corpId_ = nullptr;};
      inline string getCorpId() const { DARABONBA_PTR_GET_DEFAULT(corpId_, "") };
      inline Module& setCorpId(string corpId) { DARABONBA_PTR_SET_VALUE(corpId_, corpId) };


      // exceedReason Field Functions 
      bool hasExceedReason() const { return this->exceedReason_ != nullptr;};
      void deleteExceedReason() { this->exceedReason_ = nullptr;};
      inline string getExceedReason() const { DARABONBA_PTR_GET_DEFAULT(exceedReason_, "") };
      inline Module& setExceedReason(string exceedReason) { DARABONBA_PTR_SET_VALUE(exceedReason_, exceedReason) };


      // exceedType Field Functions 
      bool hasExceedType() const { return this->exceedType_ != nullptr;};
      void deleteExceedType() { this->exceedType_ = nullptr;};
      inline int32_t getExceedType() const { DARABONBA_PTR_GET_DEFAULT(exceedType_, 0) };
      inline Module& setExceedType(int32_t exceedType) { DARABONBA_PTR_SET_VALUE(exceedType_, exceedType) };


      // originStandard Field Functions 
      bool hasOriginStandard() const { return this->originStandard_ != nullptr;};
      void deleteOriginStandard() { this->originStandard_ = nullptr;};
      inline string getOriginStandard() const { DARABONBA_PTR_GET_DEFAULT(originStandard_, "") };
      inline Module& setOriginStandard(string originStandard) { DARABONBA_PTR_SET_VALUE(originStandard_, originStandard) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline int32_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
      inline Module& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // submitTime Field Functions 
      bool hasSubmitTime() const { return this->submitTime_ != nullptr;};
      void deleteSubmitTime() { this->submitTime_ = nullptr;};
      inline string getSubmitTime() const { DARABONBA_PTR_GET_DEFAULT(submitTime_, "") };
      inline Module& setSubmitTime(string submitTime) { DARABONBA_PTR_SET_VALUE(submitTime_, submitTime) };


      // thirdpartApplyId Field Functions 
      bool hasThirdpartApplyId() const { return this->thirdpartApplyId_ != nullptr;};
      void deleteThirdpartApplyId() { this->thirdpartApplyId_ = nullptr;};
      inline string getThirdpartApplyId() const { DARABONBA_PTR_GET_DEFAULT(thirdpartApplyId_, "") };
      inline Module& setThirdpartApplyId(string thirdpartApplyId) { DARABONBA_PTR_SET_VALUE(thirdpartApplyId_, thirdpartApplyId) };


      // thirdpartCorpId Field Functions 
      bool hasThirdpartCorpId() const { return this->thirdpartCorpId_ != nullptr;};
      void deleteThirdpartCorpId() { this->thirdpartCorpId_ = nullptr;};
      inline string getThirdpartCorpId() const { DARABONBA_PTR_GET_DEFAULT(thirdpartCorpId_, "") };
      inline Module& setThirdpartCorpId(string thirdpartCorpId) { DARABONBA_PTR_SET_VALUE(thirdpartCorpId_, thirdpartCorpId) };


      // userId Field Functions 
      bool hasUserId() const { return this->userId_ != nullptr;};
      void deleteUserId() { this->userId_ = nullptr;};
      inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
      inline Module& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


      // userName Field Functions 
      bool hasUserName() const { return this->userName_ != nullptr;};
      void deleteUserName() { this->userName_ = nullptr;};
      inline string getUserName() const { DARABONBA_PTR_GET_DEFAULT(userName_, "") };
      inline Module& setUserName(string userName) { DARABONBA_PTR_SET_VALUE(userName_, userName) };


    protected:
      shared_ptr<int64_t> applyId_ {};
      shared_ptr<Module::ApplyIntentionInfoDo> applyIntentionInfoDo_ {};
      shared_ptr<string> btripCause_ {};
      shared_ptr<string> corpId_ {};
      shared_ptr<string> exceedReason_ {};
      shared_ptr<int32_t> exceedType_ {};
      shared_ptr<string> originStandard_ {};
      shared_ptr<int32_t> status_ {};
      shared_ptr<string> submitTime_ {};
      shared_ptr<string> thirdpartApplyId_ {};
      shared_ptr<string> thirdpartCorpId_ {};
      shared_ptr<string> userId_ {};
      shared_ptr<string> userName_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->message_ == nullptr && this->module_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr && this->traceId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline HotelExceedApplyQueryResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline HotelExceedApplyQueryResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // module Field Functions 
    bool hasModule() const { return this->module_ != nullptr;};
    void deleteModule() { this->module_ = nullptr;};
    inline const HotelExceedApplyQueryResponseBody::Module & getModule() const { DARABONBA_PTR_GET_CONST(module_, HotelExceedApplyQueryResponseBody::Module) };
    inline HotelExceedApplyQueryResponseBody::Module getModule() { DARABONBA_PTR_GET(module_, HotelExceedApplyQueryResponseBody::Module) };
    inline HotelExceedApplyQueryResponseBody& setModule(const HotelExceedApplyQueryResponseBody::Module & module) { DARABONBA_PTR_SET_VALUE(module_, module) };
    inline HotelExceedApplyQueryResponseBody& setModule(HotelExceedApplyQueryResponseBody::Module && module) { DARABONBA_PTR_SET_RVALUE(module_, module) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline HotelExceedApplyQueryResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline HotelExceedApplyQueryResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // traceId Field Functions 
    bool hasTraceId() const { return this->traceId_ != nullptr;};
    void deleteTraceId() { this->traceId_ = nullptr;};
    inline string getTraceId() const { DARABONBA_PTR_GET_DEFAULT(traceId_, "") };
    inline HotelExceedApplyQueryResponseBody& setTraceId(string traceId) { DARABONBA_PTR_SET_VALUE(traceId_, traceId) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<string> message_ {};
    shared_ptr<HotelExceedApplyQueryResponseBody::Module> module_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
    shared_ptr<string> traceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
