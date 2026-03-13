// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TRAINEXCEEDAPPLYQUERYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_TRAINEXCEEDAPPLYQUERYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class TrainExceedApplyQueryResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TrainExceedApplyQueryResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(module, module_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(success, success_);
      DARABONBA_PTR_TO_JSON(traceId, traceId_);
    };
    friend void from_json(const Darabonba::Json& j, TrainExceedApplyQueryResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(module, module_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(success, success_);
      DARABONBA_PTR_FROM_JSON(traceId, traceId_);
    };
    TrainExceedApplyQueryResponseBody() = default ;
    TrainExceedApplyQueryResponseBody(const TrainExceedApplyQueryResponseBody &) = default ;
    TrainExceedApplyQueryResponseBody(TrainExceedApplyQueryResponseBody &&) = default ;
    TrainExceedApplyQueryResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TrainExceedApplyQueryResponseBody() = default ;
    TrainExceedApplyQueryResponseBody& operator=(const TrainExceedApplyQueryResponseBody &) = default ;
    TrainExceedApplyQueryResponseBody& operator=(TrainExceedApplyQueryResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Module : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Module& obj) { 
        DARABONBA_PTR_TO_JSON(apply_id, applyId_);
        DARABONBA_PTR_TO_JSON(apply_intention_info_d_o, applyIntentionInfoDO_);
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
        DARABONBA_PTR_FROM_JSON(apply_intention_info_d_o, applyIntentionInfoDO_);
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
      class ApplyIntentionInfoDO : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ApplyIntentionInfoDO& obj) { 
          DARABONBA_PTR_TO_JSON(arr_city, arrCity_);
          DARABONBA_PTR_TO_JSON(arr_city_name, arrCityName_);
          DARABONBA_PTR_TO_JSON(arr_station, arrStation_);
          DARABONBA_PTR_TO_JSON(arr_time, arrTime_);
          DARABONBA_PTR_TO_JSON(dep_city, depCity_);
          DARABONBA_PTR_TO_JSON(dep_city_name, depCityName_);
          DARABONBA_PTR_TO_JSON(dep_station, depStation_);
          DARABONBA_PTR_TO_JSON(dep_time, depTime_);
          DARABONBA_PTR_TO_JSON(price, price_);
          DARABONBA_PTR_TO_JSON(seat_name, seatName_);
          DARABONBA_PTR_TO_JSON(train_no, trainNo_);
          DARABONBA_PTR_TO_JSON(train_type_desc, trainTypeDesc_);
          DARABONBA_PTR_TO_JSON(type, type_);
        };
        friend void from_json(const Darabonba::Json& j, ApplyIntentionInfoDO& obj) { 
          DARABONBA_PTR_FROM_JSON(arr_city, arrCity_);
          DARABONBA_PTR_FROM_JSON(arr_city_name, arrCityName_);
          DARABONBA_PTR_FROM_JSON(arr_station, arrStation_);
          DARABONBA_PTR_FROM_JSON(arr_time, arrTime_);
          DARABONBA_PTR_FROM_JSON(dep_city, depCity_);
          DARABONBA_PTR_FROM_JSON(dep_city_name, depCityName_);
          DARABONBA_PTR_FROM_JSON(dep_station, depStation_);
          DARABONBA_PTR_FROM_JSON(dep_time, depTime_);
          DARABONBA_PTR_FROM_JSON(price, price_);
          DARABONBA_PTR_FROM_JSON(seat_name, seatName_);
          DARABONBA_PTR_FROM_JSON(train_no, trainNo_);
          DARABONBA_PTR_FROM_JSON(train_type_desc, trainTypeDesc_);
          DARABONBA_PTR_FROM_JSON(type, type_);
        };
        ApplyIntentionInfoDO() = default ;
        ApplyIntentionInfoDO(const ApplyIntentionInfoDO &) = default ;
        ApplyIntentionInfoDO(ApplyIntentionInfoDO &&) = default ;
        ApplyIntentionInfoDO(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ApplyIntentionInfoDO() = default ;
        ApplyIntentionInfoDO& operator=(const ApplyIntentionInfoDO &) = default ;
        ApplyIntentionInfoDO& operator=(ApplyIntentionInfoDO &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->arrCity_ == nullptr
        && this->arrCityName_ == nullptr && this->arrStation_ == nullptr && this->arrTime_ == nullptr && this->depCity_ == nullptr && this->depCityName_ == nullptr
        && this->depStation_ == nullptr && this->depTime_ == nullptr && this->price_ == nullptr && this->seatName_ == nullptr && this->trainNo_ == nullptr
        && this->trainTypeDesc_ == nullptr && this->type_ == nullptr; };
        // arrCity Field Functions 
        bool hasArrCity() const { return this->arrCity_ != nullptr;};
        void deleteArrCity() { this->arrCity_ = nullptr;};
        inline string getArrCity() const { DARABONBA_PTR_GET_DEFAULT(arrCity_, "") };
        inline ApplyIntentionInfoDO& setArrCity(string arrCity) { DARABONBA_PTR_SET_VALUE(arrCity_, arrCity) };


        // arrCityName Field Functions 
        bool hasArrCityName() const { return this->arrCityName_ != nullptr;};
        void deleteArrCityName() { this->arrCityName_ = nullptr;};
        inline string getArrCityName() const { DARABONBA_PTR_GET_DEFAULT(arrCityName_, "") };
        inline ApplyIntentionInfoDO& setArrCityName(string arrCityName) { DARABONBA_PTR_SET_VALUE(arrCityName_, arrCityName) };


        // arrStation Field Functions 
        bool hasArrStation() const { return this->arrStation_ != nullptr;};
        void deleteArrStation() { this->arrStation_ = nullptr;};
        inline string getArrStation() const { DARABONBA_PTR_GET_DEFAULT(arrStation_, "") };
        inline ApplyIntentionInfoDO& setArrStation(string arrStation) { DARABONBA_PTR_SET_VALUE(arrStation_, arrStation) };


        // arrTime Field Functions 
        bool hasArrTime() const { return this->arrTime_ != nullptr;};
        void deleteArrTime() { this->arrTime_ = nullptr;};
        inline string getArrTime() const { DARABONBA_PTR_GET_DEFAULT(arrTime_, "") };
        inline ApplyIntentionInfoDO& setArrTime(string arrTime) { DARABONBA_PTR_SET_VALUE(arrTime_, arrTime) };


        // depCity Field Functions 
        bool hasDepCity() const { return this->depCity_ != nullptr;};
        void deleteDepCity() { this->depCity_ = nullptr;};
        inline string getDepCity() const { DARABONBA_PTR_GET_DEFAULT(depCity_, "") };
        inline ApplyIntentionInfoDO& setDepCity(string depCity) { DARABONBA_PTR_SET_VALUE(depCity_, depCity) };


        // depCityName Field Functions 
        bool hasDepCityName() const { return this->depCityName_ != nullptr;};
        void deleteDepCityName() { this->depCityName_ = nullptr;};
        inline string getDepCityName() const { DARABONBA_PTR_GET_DEFAULT(depCityName_, "") };
        inline ApplyIntentionInfoDO& setDepCityName(string depCityName) { DARABONBA_PTR_SET_VALUE(depCityName_, depCityName) };


        // depStation Field Functions 
        bool hasDepStation() const { return this->depStation_ != nullptr;};
        void deleteDepStation() { this->depStation_ = nullptr;};
        inline string getDepStation() const { DARABONBA_PTR_GET_DEFAULT(depStation_, "") };
        inline ApplyIntentionInfoDO& setDepStation(string depStation) { DARABONBA_PTR_SET_VALUE(depStation_, depStation) };


        // depTime Field Functions 
        bool hasDepTime() const { return this->depTime_ != nullptr;};
        void deleteDepTime() { this->depTime_ = nullptr;};
        inline string getDepTime() const { DARABONBA_PTR_GET_DEFAULT(depTime_, "") };
        inline ApplyIntentionInfoDO& setDepTime(string depTime) { DARABONBA_PTR_SET_VALUE(depTime_, depTime) };


        // price Field Functions 
        bool hasPrice() const { return this->price_ != nullptr;};
        void deletePrice() { this->price_ = nullptr;};
        inline int64_t getPrice() const { DARABONBA_PTR_GET_DEFAULT(price_, 0L) };
        inline ApplyIntentionInfoDO& setPrice(int64_t price) { DARABONBA_PTR_SET_VALUE(price_, price) };


        // seatName Field Functions 
        bool hasSeatName() const { return this->seatName_ != nullptr;};
        void deleteSeatName() { this->seatName_ = nullptr;};
        inline string getSeatName() const { DARABONBA_PTR_GET_DEFAULT(seatName_, "") };
        inline ApplyIntentionInfoDO& setSeatName(string seatName) { DARABONBA_PTR_SET_VALUE(seatName_, seatName) };


        // trainNo Field Functions 
        bool hasTrainNo() const { return this->trainNo_ != nullptr;};
        void deleteTrainNo() { this->trainNo_ = nullptr;};
        inline string getTrainNo() const { DARABONBA_PTR_GET_DEFAULT(trainNo_, "") };
        inline ApplyIntentionInfoDO& setTrainNo(string trainNo) { DARABONBA_PTR_SET_VALUE(trainNo_, trainNo) };


        // trainTypeDesc Field Functions 
        bool hasTrainTypeDesc() const { return this->trainTypeDesc_ != nullptr;};
        void deleteTrainTypeDesc() { this->trainTypeDesc_ = nullptr;};
        inline string getTrainTypeDesc() const { DARABONBA_PTR_GET_DEFAULT(trainTypeDesc_, "") };
        inline ApplyIntentionInfoDO& setTrainTypeDesc(string trainTypeDesc) { DARABONBA_PTR_SET_VALUE(trainTypeDesc_, trainTypeDesc) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline int32_t getType() const { DARABONBA_PTR_GET_DEFAULT(type_, 0) };
        inline ApplyIntentionInfoDO& setType(int32_t type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      protected:
        shared_ptr<string> arrCity_ {};
        shared_ptr<string> arrCityName_ {};
        shared_ptr<string> arrStation_ {};
        shared_ptr<string> arrTime_ {};
        shared_ptr<string> depCity_ {};
        shared_ptr<string> depCityName_ {};
        shared_ptr<string> depStation_ {};
        shared_ptr<string> depTime_ {};
        shared_ptr<int64_t> price_ {};
        shared_ptr<string> seatName_ {};
        shared_ptr<string> trainNo_ {};
        shared_ptr<string> trainTypeDesc_ {};
        shared_ptr<int32_t> type_ {};
      };

      virtual bool empty() const override { return this->applyId_ == nullptr
        && this->applyIntentionInfoDO_ == nullptr && this->btripCause_ == nullptr && this->corpId_ == nullptr && this->exceedReason_ == nullptr && this->exceedType_ == nullptr
        && this->originStandard_ == nullptr && this->status_ == nullptr && this->submitTime_ == nullptr && this->thirdpartApplyId_ == nullptr && this->thirdpartCorpId_ == nullptr
        && this->userId_ == nullptr && this->userName_ == nullptr; };
      // applyId Field Functions 
      bool hasApplyId() const { return this->applyId_ != nullptr;};
      void deleteApplyId() { this->applyId_ = nullptr;};
      inline int64_t getApplyId() const { DARABONBA_PTR_GET_DEFAULT(applyId_, 0L) };
      inline Module& setApplyId(int64_t applyId) { DARABONBA_PTR_SET_VALUE(applyId_, applyId) };


      // applyIntentionInfoDO Field Functions 
      bool hasApplyIntentionInfoDO() const { return this->applyIntentionInfoDO_ != nullptr;};
      void deleteApplyIntentionInfoDO() { this->applyIntentionInfoDO_ = nullptr;};
      inline const Module::ApplyIntentionInfoDO & getApplyIntentionInfoDO() const { DARABONBA_PTR_GET_CONST(applyIntentionInfoDO_, Module::ApplyIntentionInfoDO) };
      inline Module::ApplyIntentionInfoDO getApplyIntentionInfoDO() { DARABONBA_PTR_GET(applyIntentionInfoDO_, Module::ApplyIntentionInfoDO) };
      inline Module& setApplyIntentionInfoDO(const Module::ApplyIntentionInfoDO & applyIntentionInfoDO) { DARABONBA_PTR_SET_VALUE(applyIntentionInfoDO_, applyIntentionInfoDO) };
      inline Module& setApplyIntentionInfoDO(Module::ApplyIntentionInfoDO && applyIntentionInfoDO) { DARABONBA_PTR_SET_RVALUE(applyIntentionInfoDO_, applyIntentionInfoDO) };


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
      shared_ptr<Module::ApplyIntentionInfoDO> applyIntentionInfoDO_ {};
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
    inline TrainExceedApplyQueryResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline TrainExceedApplyQueryResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // module Field Functions 
    bool hasModule() const { return this->module_ != nullptr;};
    void deleteModule() { this->module_ = nullptr;};
    inline const TrainExceedApplyQueryResponseBody::Module & getModule() const { DARABONBA_PTR_GET_CONST(module_, TrainExceedApplyQueryResponseBody::Module) };
    inline TrainExceedApplyQueryResponseBody::Module getModule() { DARABONBA_PTR_GET(module_, TrainExceedApplyQueryResponseBody::Module) };
    inline TrainExceedApplyQueryResponseBody& setModule(const TrainExceedApplyQueryResponseBody::Module & module) { DARABONBA_PTR_SET_VALUE(module_, module) };
    inline TrainExceedApplyQueryResponseBody& setModule(TrainExceedApplyQueryResponseBody::Module && module) { DARABONBA_PTR_SET_RVALUE(module_, module) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline TrainExceedApplyQueryResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline TrainExceedApplyQueryResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // traceId Field Functions 
    bool hasTraceId() const { return this->traceId_ != nullptr;};
    void deleteTraceId() { this->traceId_ = nullptr;};
    inline string getTraceId() const { DARABONBA_PTR_GET_DEFAULT(traceId_, "") };
    inline TrainExceedApplyQueryResponseBody& setTraceId(string traceId) { DARABONBA_PTR_SET_VALUE(traceId_, traceId) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<string> message_ {};
    shared_ptr<TrainExceedApplyQueryResponseBody::Module> module_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
    shared_ptr<string> traceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
