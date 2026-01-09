// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYTOUCHLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYTOUCHLISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aiccs20191015
{
namespace Models
{
  class QueryTouchListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryTouchListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResultData, resultData_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, QueryTouchListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResultData, resultData_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    QueryTouchListResponseBody() = default ;
    QueryTouchListResponseBody(const QueryTouchListResponseBody &) = default ;
    QueryTouchListResponseBody(QueryTouchListResponseBody &&) = default ;
    QueryTouchListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryTouchListResponseBody() = default ;
    QueryTouchListResponseBody& operator=(const QueryTouchListResponseBody &) = default ;
    QueryTouchListResponseBody& operator=(QueryTouchListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ResultData : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ResultData& obj) { 
        DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
        DARABONBA_PTR_TO_JSON(Data, data_);
        DARABONBA_PTR_TO_JSON(Empty, empty_);
        DARABONBA_PTR_TO_JSON(NextPage, nextPage_);
        DARABONBA_PTR_TO_JSON(OnePageSize, onePageSize_);
        DARABONBA_PTR_TO_JSON(PreviousPage, previousPage_);
        DARABONBA_PTR_TO_JSON(TotalPage, totalPage_);
        DARABONBA_PTR_TO_JSON(TotalResults, totalResults_);
      };
      friend void from_json(const Darabonba::Json& j, ResultData& obj) { 
        DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
        DARABONBA_PTR_FROM_JSON(Data, data_);
        DARABONBA_PTR_FROM_JSON(Empty, empty_);
        DARABONBA_PTR_FROM_JSON(NextPage, nextPage_);
        DARABONBA_PTR_FROM_JSON(OnePageSize, onePageSize_);
        DARABONBA_PTR_FROM_JSON(PreviousPage, previousPage_);
        DARABONBA_PTR_FROM_JSON(TotalPage, totalPage_);
        DARABONBA_PTR_FROM_JSON(TotalResults, totalResults_);
      };
      ResultData() = default ;
      ResultData(const ResultData &) = default ;
      ResultData(ResultData &&) = default ;
      ResultData(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ResultData() = default ;
      ResultData& operator=(const ResultData &) = default ;
      ResultData& operator=(ResultData &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Data : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Data& obj) { 
          DARABONBA_PTR_TO_JSON(BuId, buId_);
          DARABONBA_PTR_TO_JSON(ChannelId, channelId_);
          DARABONBA_PTR_TO_JSON(ChannelType, channelType_);
          DARABONBA_PTR_TO_JSON(CloseTime, closeTime_);
          DARABONBA_PTR_TO_JSON(CommonQueueName, commonQueueName_);
          DARABONBA_PTR_TO_JSON(DepId, depId_);
          DARABONBA_PTR_TO_JSON(ExtAttrs, extAttrs_);
          DARABONBA_ANY_TO_JSON(ExtAttrsString, extAttrsString_);
          DARABONBA_PTR_TO_JSON(Feedback, feedback_);
          DARABONBA_PTR_TO_JSON(FirstTime, firstTime_);
          DARABONBA_PTR_TO_JSON(FromId, fromId_);
          DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
          DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
          DARABONBA_PTR_TO_JSON(MemberId, memberId_);
          DARABONBA_PTR_TO_JSON(MemberName, memberName_);
          DARABONBA_PTR_TO_JSON(ParentTouchId, parentTouchId_);
          DARABONBA_PTR_TO_JSON(QueueId, queueId_);
          DARABONBA_PTR_TO_JSON(ServicerId, servicerId_);
          DARABONBA_PTR_TO_JSON(ServicerName, servicerName_);
          DARABONBA_PTR_TO_JSON(Status, status_);
          DARABONBA_PTR_TO_JSON(SwitchUser, switchUser_);
          DARABONBA_PTR_TO_JSON(ToId, toId_);
          DARABONBA_PTR_TO_JSON(TouchContent, touchContent_);
          DARABONBA_PTR_TO_JSON(TouchEndReason, touchEndReason_);
          DARABONBA_PTR_TO_JSON(TouchId, touchId_);
          DARABONBA_PTR_TO_JSON(TouchTime, touchTime_);
          DARABONBA_PTR_TO_JSON(TouchType, touchType_);
          DARABONBA_PTR_TO_JSON(UserTouchId, userTouchId_);
        };
        friend void from_json(const Darabonba::Json& j, Data& obj) { 
          DARABONBA_PTR_FROM_JSON(BuId, buId_);
          DARABONBA_PTR_FROM_JSON(ChannelId, channelId_);
          DARABONBA_PTR_FROM_JSON(ChannelType, channelType_);
          DARABONBA_PTR_FROM_JSON(CloseTime, closeTime_);
          DARABONBA_PTR_FROM_JSON(CommonQueueName, commonQueueName_);
          DARABONBA_PTR_FROM_JSON(DepId, depId_);
          DARABONBA_PTR_FROM_JSON(ExtAttrs, extAttrs_);
          DARABONBA_ANY_FROM_JSON(ExtAttrsString, extAttrsString_);
          DARABONBA_PTR_FROM_JSON(Feedback, feedback_);
          DARABONBA_PTR_FROM_JSON(FirstTime, firstTime_);
          DARABONBA_PTR_FROM_JSON(FromId, fromId_);
          DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
          DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
          DARABONBA_PTR_FROM_JSON(MemberId, memberId_);
          DARABONBA_PTR_FROM_JSON(MemberName, memberName_);
          DARABONBA_PTR_FROM_JSON(ParentTouchId, parentTouchId_);
          DARABONBA_PTR_FROM_JSON(QueueId, queueId_);
          DARABONBA_PTR_FROM_JSON(ServicerId, servicerId_);
          DARABONBA_PTR_FROM_JSON(ServicerName, servicerName_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
          DARABONBA_PTR_FROM_JSON(SwitchUser, switchUser_);
          DARABONBA_PTR_FROM_JSON(ToId, toId_);
          DARABONBA_PTR_FROM_JSON(TouchContent, touchContent_);
          DARABONBA_PTR_FROM_JSON(TouchEndReason, touchEndReason_);
          DARABONBA_PTR_FROM_JSON(TouchId, touchId_);
          DARABONBA_PTR_FROM_JSON(TouchTime, touchTime_);
          DARABONBA_PTR_FROM_JSON(TouchType, touchType_);
          DARABONBA_PTR_FROM_JSON(UserTouchId, userTouchId_);
        };
        Data() = default ;
        Data(const Data &) = default ;
        Data(Data &&) = default ;
        Data(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Data() = default ;
        Data& operator=(const Data &) = default ;
        Data& operator=(Data &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class ExtAttrs : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const ExtAttrs& obj) { 
            DARABONBA_PTR_TO_JSON(Ani, ani_);
            DARABONBA_PTR_TO_JSON(Dnis, dnis_);
            DARABONBA_PTR_TO_JSON(EvaluationLevel, evaluationLevel_);
            DARABONBA_PTR_TO_JSON(EvaluationScore, evaluationScore_);
            DARABONBA_PTR_TO_JSON(EvaluationSolution, evaluationSolution_);
            DARABONBA_PTR_TO_JSON(EvaluationStatus, evaluationStatus_);
            DARABONBA_PTR_TO_JSON(OnlineJoinRespInterval, onlineJoinRespInterval_);
            DARABONBA_PTR_TO_JSON(OnlineSessionSource, onlineSessionSource_);
            DARABONBA_PTR_TO_JSON(OutCallRouteNumber, outCallRouteNumber_);
          };
          friend void from_json(const Darabonba::Json& j, ExtAttrs& obj) { 
            DARABONBA_PTR_FROM_JSON(Ani, ani_);
            DARABONBA_PTR_FROM_JSON(Dnis, dnis_);
            DARABONBA_PTR_FROM_JSON(EvaluationLevel, evaluationLevel_);
            DARABONBA_PTR_FROM_JSON(EvaluationScore, evaluationScore_);
            DARABONBA_PTR_FROM_JSON(EvaluationSolution, evaluationSolution_);
            DARABONBA_PTR_FROM_JSON(EvaluationStatus, evaluationStatus_);
            DARABONBA_PTR_FROM_JSON(OnlineJoinRespInterval, onlineJoinRespInterval_);
            DARABONBA_PTR_FROM_JSON(OnlineSessionSource, onlineSessionSource_);
            DARABONBA_PTR_FROM_JSON(OutCallRouteNumber, outCallRouteNumber_);
          };
          ExtAttrs() = default ;
          ExtAttrs(const ExtAttrs &) = default ;
          ExtAttrs(ExtAttrs &&) = default ;
          ExtAttrs(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~ExtAttrs() = default ;
          ExtAttrs& operator=(const ExtAttrs &) = default ;
          ExtAttrs& operator=(ExtAttrs &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->ani_ == nullptr
        && this->dnis_ == nullptr && this->evaluationLevel_ == nullptr && this->evaluationScore_ == nullptr && this->evaluationSolution_ == nullptr && this->evaluationStatus_ == nullptr
        && this->onlineJoinRespInterval_ == nullptr && this->onlineSessionSource_ == nullptr && this->outCallRouteNumber_ == nullptr; };
          // ani Field Functions 
          bool hasAni() const { return this->ani_ != nullptr;};
          void deleteAni() { this->ani_ = nullptr;};
          inline string getAni() const { DARABONBA_PTR_GET_DEFAULT(ani_, "") };
          inline ExtAttrs& setAni(string ani) { DARABONBA_PTR_SET_VALUE(ani_, ani) };


          // dnis Field Functions 
          bool hasDnis() const { return this->dnis_ != nullptr;};
          void deleteDnis() { this->dnis_ = nullptr;};
          inline string getDnis() const { DARABONBA_PTR_GET_DEFAULT(dnis_, "") };
          inline ExtAttrs& setDnis(string dnis) { DARABONBA_PTR_SET_VALUE(dnis_, dnis) };


          // evaluationLevel Field Functions 
          bool hasEvaluationLevel() const { return this->evaluationLevel_ != nullptr;};
          void deleteEvaluationLevel() { this->evaluationLevel_ = nullptr;};
          inline int32_t getEvaluationLevel() const { DARABONBA_PTR_GET_DEFAULT(evaluationLevel_, 0) };
          inline ExtAttrs& setEvaluationLevel(int32_t evaluationLevel) { DARABONBA_PTR_SET_VALUE(evaluationLevel_, evaluationLevel) };


          // evaluationScore Field Functions 
          bool hasEvaluationScore() const { return this->evaluationScore_ != nullptr;};
          void deleteEvaluationScore() { this->evaluationScore_ = nullptr;};
          inline int32_t getEvaluationScore() const { DARABONBA_PTR_GET_DEFAULT(evaluationScore_, 0) };
          inline ExtAttrs& setEvaluationScore(int32_t evaluationScore) { DARABONBA_PTR_SET_VALUE(evaluationScore_, evaluationScore) };


          // evaluationSolution Field Functions 
          bool hasEvaluationSolution() const { return this->evaluationSolution_ != nullptr;};
          void deleteEvaluationSolution() { this->evaluationSolution_ = nullptr;};
          inline int32_t getEvaluationSolution() const { DARABONBA_PTR_GET_DEFAULT(evaluationSolution_, 0) };
          inline ExtAttrs& setEvaluationSolution(int32_t evaluationSolution) { DARABONBA_PTR_SET_VALUE(evaluationSolution_, evaluationSolution) };


          // evaluationStatus Field Functions 
          bool hasEvaluationStatus() const { return this->evaluationStatus_ != nullptr;};
          void deleteEvaluationStatus() { this->evaluationStatus_ = nullptr;};
          inline int32_t getEvaluationStatus() const { DARABONBA_PTR_GET_DEFAULT(evaluationStatus_, 0) };
          inline ExtAttrs& setEvaluationStatus(int32_t evaluationStatus) { DARABONBA_PTR_SET_VALUE(evaluationStatus_, evaluationStatus) };


          // onlineJoinRespInterval Field Functions 
          bool hasOnlineJoinRespInterval() const { return this->onlineJoinRespInterval_ != nullptr;};
          void deleteOnlineJoinRespInterval() { this->onlineJoinRespInterval_ = nullptr;};
          inline int32_t getOnlineJoinRespInterval() const { DARABONBA_PTR_GET_DEFAULT(onlineJoinRespInterval_, 0) };
          inline ExtAttrs& setOnlineJoinRespInterval(int32_t onlineJoinRespInterval) { DARABONBA_PTR_SET_VALUE(onlineJoinRespInterval_, onlineJoinRespInterval) };


          // onlineSessionSource Field Functions 
          bool hasOnlineSessionSource() const { return this->onlineSessionSource_ != nullptr;};
          void deleteOnlineSessionSource() { this->onlineSessionSource_ = nullptr;};
          inline int32_t getOnlineSessionSource() const { DARABONBA_PTR_GET_DEFAULT(onlineSessionSource_, 0) };
          inline ExtAttrs& setOnlineSessionSource(int32_t onlineSessionSource) { DARABONBA_PTR_SET_VALUE(onlineSessionSource_, onlineSessionSource) };


          // outCallRouteNumber Field Functions 
          bool hasOutCallRouteNumber() const { return this->outCallRouteNumber_ != nullptr;};
          void deleteOutCallRouteNumber() { this->outCallRouteNumber_ = nullptr;};
          inline string getOutCallRouteNumber() const { DARABONBA_PTR_GET_DEFAULT(outCallRouteNumber_, "") };
          inline ExtAttrs& setOutCallRouteNumber(string outCallRouteNumber) { DARABONBA_PTR_SET_VALUE(outCallRouteNumber_, outCallRouteNumber) };


        protected:
          shared_ptr<string> ani_ {};
          shared_ptr<string> dnis_ {};
          shared_ptr<int32_t> evaluationLevel_ {};
          shared_ptr<int32_t> evaluationScore_ {};
          shared_ptr<int32_t> evaluationSolution_ {};
          shared_ptr<int32_t> evaluationStatus_ {};
          shared_ptr<int32_t> onlineJoinRespInterval_ {};
          shared_ptr<int32_t> onlineSessionSource_ {};
          shared_ptr<string> outCallRouteNumber_ {};
        };

        virtual bool empty() const override { return this->buId_ == nullptr
        && this->channelId_ == nullptr && this->channelType_ == nullptr && this->closeTime_ == nullptr && this->commonQueueName_ == nullptr && this->depId_ == nullptr
        && this->extAttrs_ == nullptr && this->extAttrsString_ == nullptr && this->feedback_ == nullptr && this->firstTime_ == nullptr && this->fromId_ == nullptr
        && this->gmtCreate_ == nullptr && this->gmtModified_ == nullptr && this->memberId_ == nullptr && this->memberName_ == nullptr && this->parentTouchId_ == nullptr
        && this->queueId_ == nullptr && this->servicerId_ == nullptr && this->servicerName_ == nullptr && this->status_ == nullptr && this->switchUser_ == nullptr
        && this->toId_ == nullptr && this->touchContent_ == nullptr && this->touchEndReason_ == nullptr && this->touchId_ == nullptr && this->touchTime_ == nullptr
        && this->touchType_ == nullptr && this->userTouchId_ == nullptr; };
        // buId Field Functions 
        bool hasBuId() const { return this->buId_ != nullptr;};
        void deleteBuId() { this->buId_ = nullptr;};
        inline int64_t getBuId() const { DARABONBA_PTR_GET_DEFAULT(buId_, 0L) };
        inline Data& setBuId(int64_t buId) { DARABONBA_PTR_SET_VALUE(buId_, buId) };


        // channelId Field Functions 
        bool hasChannelId() const { return this->channelId_ != nullptr;};
        void deleteChannelId() { this->channelId_ = nullptr;};
        inline string getChannelId() const { DARABONBA_PTR_GET_DEFAULT(channelId_, "") };
        inline Data& setChannelId(string channelId) { DARABONBA_PTR_SET_VALUE(channelId_, channelId) };


        // channelType Field Functions 
        bool hasChannelType() const { return this->channelType_ != nullptr;};
        void deleteChannelType() { this->channelType_ = nullptr;};
        inline int32_t getChannelType() const { DARABONBA_PTR_GET_DEFAULT(channelType_, 0) };
        inline Data& setChannelType(int32_t channelType) { DARABONBA_PTR_SET_VALUE(channelType_, channelType) };


        // closeTime Field Functions 
        bool hasCloseTime() const { return this->closeTime_ != nullptr;};
        void deleteCloseTime() { this->closeTime_ = nullptr;};
        inline int64_t getCloseTime() const { DARABONBA_PTR_GET_DEFAULT(closeTime_, 0L) };
        inline Data& setCloseTime(int64_t closeTime) { DARABONBA_PTR_SET_VALUE(closeTime_, closeTime) };


        // commonQueueName Field Functions 
        bool hasCommonQueueName() const { return this->commonQueueName_ != nullptr;};
        void deleteCommonQueueName() { this->commonQueueName_ = nullptr;};
        inline string getCommonQueueName() const { DARABONBA_PTR_GET_DEFAULT(commonQueueName_, "") };
        inline Data& setCommonQueueName(string commonQueueName) { DARABONBA_PTR_SET_VALUE(commonQueueName_, commonQueueName) };


        // depId Field Functions 
        bool hasDepId() const { return this->depId_ != nullptr;};
        void deleteDepId() { this->depId_ = nullptr;};
        inline int64_t getDepId() const { DARABONBA_PTR_GET_DEFAULT(depId_, 0L) };
        inline Data& setDepId(int64_t depId) { DARABONBA_PTR_SET_VALUE(depId_, depId) };


        // extAttrs Field Functions 
        bool hasExtAttrs() const { return this->extAttrs_ != nullptr;};
        void deleteExtAttrs() { this->extAttrs_ = nullptr;};
        inline const Data::ExtAttrs & getExtAttrs() const { DARABONBA_PTR_GET_CONST(extAttrs_, Data::ExtAttrs) };
        inline Data::ExtAttrs getExtAttrs() { DARABONBA_PTR_GET(extAttrs_, Data::ExtAttrs) };
        inline Data& setExtAttrs(const Data::ExtAttrs & extAttrs) { DARABONBA_PTR_SET_VALUE(extAttrs_, extAttrs) };
        inline Data& setExtAttrs(Data::ExtAttrs && extAttrs) { DARABONBA_PTR_SET_RVALUE(extAttrs_, extAttrs) };


        // extAttrsString Field Functions 
        bool hasExtAttrsString() const { return this->extAttrsString_ != nullptr;};
        void deleteExtAttrsString() { this->extAttrsString_ = nullptr;};
        inline         const Darabonba::Json & getExtAttrsString() const { DARABONBA_GET(extAttrsString_) };
        Darabonba::Json & getExtAttrsString() { DARABONBA_GET(extAttrsString_) };
        inline Data& setExtAttrsString(const Darabonba::Json & extAttrsString) { DARABONBA_SET_VALUE(extAttrsString_, extAttrsString) };
        inline Data& setExtAttrsString(Darabonba::Json && extAttrsString) { DARABONBA_SET_RVALUE(extAttrsString_, extAttrsString) };


        // feedback Field Functions 
        bool hasFeedback() const { return this->feedback_ != nullptr;};
        void deleteFeedback() { this->feedback_ = nullptr;};
        inline string getFeedback() const { DARABONBA_PTR_GET_DEFAULT(feedback_, "") };
        inline Data& setFeedback(string feedback) { DARABONBA_PTR_SET_VALUE(feedback_, feedback) };


        // firstTime Field Functions 
        bool hasFirstTime() const { return this->firstTime_ != nullptr;};
        void deleteFirstTime() { this->firstTime_ = nullptr;};
        inline int64_t getFirstTime() const { DARABONBA_PTR_GET_DEFAULT(firstTime_, 0L) };
        inline Data& setFirstTime(int64_t firstTime) { DARABONBA_PTR_SET_VALUE(firstTime_, firstTime) };


        // fromId Field Functions 
        bool hasFromId() const { return this->fromId_ != nullptr;};
        void deleteFromId() { this->fromId_ = nullptr;};
        inline int64_t getFromId() const { DARABONBA_PTR_GET_DEFAULT(fromId_, 0L) };
        inline Data& setFromId(int64_t fromId) { DARABONBA_PTR_SET_VALUE(fromId_, fromId) };


        // gmtCreate Field Functions 
        bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
        void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
        inline int64_t getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, 0L) };
        inline Data& setGmtCreate(int64_t gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


        // gmtModified Field Functions 
        bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
        void deleteGmtModified() { this->gmtModified_ = nullptr;};
        inline int64_t getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, 0L) };
        inline Data& setGmtModified(int64_t gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


        // memberId Field Functions 
        bool hasMemberId() const { return this->memberId_ != nullptr;};
        void deleteMemberId() { this->memberId_ = nullptr;};
        inline int64_t getMemberId() const { DARABONBA_PTR_GET_DEFAULT(memberId_, 0L) };
        inline Data& setMemberId(int64_t memberId) { DARABONBA_PTR_SET_VALUE(memberId_, memberId) };


        // memberName Field Functions 
        bool hasMemberName() const { return this->memberName_ != nullptr;};
        void deleteMemberName() { this->memberName_ = nullptr;};
        inline string getMemberName() const { DARABONBA_PTR_GET_DEFAULT(memberName_, "") };
        inline Data& setMemberName(string memberName) { DARABONBA_PTR_SET_VALUE(memberName_, memberName) };


        // parentTouchId Field Functions 
        bool hasParentTouchId() const { return this->parentTouchId_ != nullptr;};
        void deleteParentTouchId() { this->parentTouchId_ = nullptr;};
        inline int64_t getParentTouchId() const { DARABONBA_PTR_GET_DEFAULT(parentTouchId_, 0L) };
        inline Data& setParentTouchId(int64_t parentTouchId) { DARABONBA_PTR_SET_VALUE(parentTouchId_, parentTouchId) };


        // queueId Field Functions 
        bool hasQueueId() const { return this->queueId_ != nullptr;};
        void deleteQueueId() { this->queueId_ = nullptr;};
        inline int64_t getQueueId() const { DARABONBA_PTR_GET_DEFAULT(queueId_, 0L) };
        inline Data& setQueueId(int64_t queueId) { DARABONBA_PTR_SET_VALUE(queueId_, queueId) };


        // servicerId Field Functions 
        bool hasServicerId() const { return this->servicerId_ != nullptr;};
        void deleteServicerId() { this->servicerId_ = nullptr;};
        inline int64_t getServicerId() const { DARABONBA_PTR_GET_DEFAULT(servicerId_, 0L) };
        inline Data& setServicerId(int64_t servicerId) { DARABONBA_PTR_SET_VALUE(servicerId_, servicerId) };


        // servicerName Field Functions 
        bool hasServicerName() const { return this->servicerName_ != nullptr;};
        void deleteServicerName() { this->servicerName_ = nullptr;};
        inline string getServicerName() const { DARABONBA_PTR_GET_DEFAULT(servicerName_, "") };
        inline Data& setServicerName(string servicerName) { DARABONBA_PTR_SET_VALUE(servicerName_, servicerName) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline int32_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
        inline Data& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // switchUser Field Functions 
        bool hasSwitchUser() const { return this->switchUser_ != nullptr;};
        void deleteSwitchUser() { this->switchUser_ = nullptr;};
        inline string getSwitchUser() const { DARABONBA_PTR_GET_DEFAULT(switchUser_, "") };
        inline Data& setSwitchUser(string switchUser) { DARABONBA_PTR_SET_VALUE(switchUser_, switchUser) };


        // toId Field Functions 
        bool hasToId() const { return this->toId_ != nullptr;};
        void deleteToId() { this->toId_ = nullptr;};
        inline int64_t getToId() const { DARABONBA_PTR_GET_DEFAULT(toId_, 0L) };
        inline Data& setToId(int64_t toId) { DARABONBA_PTR_SET_VALUE(toId_, toId) };


        // touchContent Field Functions 
        bool hasTouchContent() const { return this->touchContent_ != nullptr;};
        void deleteTouchContent() { this->touchContent_ = nullptr;};
        inline string getTouchContent() const { DARABONBA_PTR_GET_DEFAULT(touchContent_, "") };
        inline Data& setTouchContent(string touchContent) { DARABONBA_PTR_SET_VALUE(touchContent_, touchContent) };


        // touchEndReason Field Functions 
        bool hasTouchEndReason() const { return this->touchEndReason_ != nullptr;};
        void deleteTouchEndReason() { this->touchEndReason_ = nullptr;};
        inline int32_t getTouchEndReason() const { DARABONBA_PTR_GET_DEFAULT(touchEndReason_, 0) };
        inline Data& setTouchEndReason(int32_t touchEndReason) { DARABONBA_PTR_SET_VALUE(touchEndReason_, touchEndReason) };


        // touchId Field Functions 
        bool hasTouchId() const { return this->touchId_ != nullptr;};
        void deleteTouchId() { this->touchId_ = nullptr;};
        inline string getTouchId() const { DARABONBA_PTR_GET_DEFAULT(touchId_, "") };
        inline Data& setTouchId(string touchId) { DARABONBA_PTR_SET_VALUE(touchId_, touchId) };


        // touchTime Field Functions 
        bool hasTouchTime() const { return this->touchTime_ != nullptr;};
        void deleteTouchTime() { this->touchTime_ = nullptr;};
        inline string getTouchTime() const { DARABONBA_PTR_GET_DEFAULT(touchTime_, "") };
        inline Data& setTouchTime(string touchTime) { DARABONBA_PTR_SET_VALUE(touchTime_, touchTime) };


        // touchType Field Functions 
        bool hasTouchType() const { return this->touchType_ != nullptr;};
        void deleteTouchType() { this->touchType_ = nullptr;};
        inline int32_t getTouchType() const { DARABONBA_PTR_GET_DEFAULT(touchType_, 0) };
        inline Data& setTouchType(int32_t touchType) { DARABONBA_PTR_SET_VALUE(touchType_, touchType) };


        // userTouchId Field Functions 
        bool hasUserTouchId() const { return this->userTouchId_ != nullptr;};
        void deleteUserTouchId() { this->userTouchId_ = nullptr;};
        inline int64_t getUserTouchId() const { DARABONBA_PTR_GET_DEFAULT(userTouchId_, 0L) };
        inline Data& setUserTouchId(int64_t userTouchId) { DARABONBA_PTR_SET_VALUE(userTouchId_, userTouchId) };


      protected:
        shared_ptr<int64_t> buId_ {};
        shared_ptr<string> channelId_ {};
        shared_ptr<int32_t> channelType_ {};
        shared_ptr<int64_t> closeTime_ {};
        shared_ptr<string> commonQueueName_ {};
        shared_ptr<int64_t> depId_ {};
        shared_ptr<Data::ExtAttrs> extAttrs_ {};
        Darabonba::Json extAttrsString_ {};
        shared_ptr<string> feedback_ {};
        shared_ptr<int64_t> firstTime_ {};
        shared_ptr<int64_t> fromId_ {};
        shared_ptr<int64_t> gmtCreate_ {};
        shared_ptr<int64_t> gmtModified_ {};
        shared_ptr<int64_t> memberId_ {};
        shared_ptr<string> memberName_ {};
        shared_ptr<int64_t> parentTouchId_ {};
        shared_ptr<int64_t> queueId_ {};
        shared_ptr<int64_t> servicerId_ {};
        shared_ptr<string> servicerName_ {};
        shared_ptr<int32_t> status_ {};
        shared_ptr<string> switchUser_ {};
        shared_ptr<int64_t> toId_ {};
        shared_ptr<string> touchContent_ {};
        shared_ptr<int32_t> touchEndReason_ {};
        shared_ptr<string> touchId_ {};
        shared_ptr<string> touchTime_ {};
        shared_ptr<int32_t> touchType_ {};
        shared_ptr<int64_t> userTouchId_ {};
      };

      virtual bool empty() const override { return this->currentPage_ == nullptr
        && this->data_ == nullptr && this->empty_ == nullptr && this->nextPage_ == nullptr && this->onePageSize_ == nullptr && this->previousPage_ == nullptr
        && this->totalPage_ == nullptr && this->totalResults_ == nullptr; };
      // currentPage Field Functions 
      bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
      void deleteCurrentPage() { this->currentPage_ = nullptr;};
      inline int32_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
      inline ResultData& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


      // data Field Functions 
      bool hasData() const { return this->data_ != nullptr;};
      void deleteData() { this->data_ = nullptr;};
      inline const vector<ResultData::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<ResultData::Data>) };
      inline vector<ResultData::Data> getData() { DARABONBA_PTR_GET(data_, vector<ResultData::Data>) };
      inline ResultData& setData(const vector<ResultData::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
      inline ResultData& setData(vector<ResultData::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


      // empty Field Functions 
      bool hasEmpty() const { return this->empty_ != nullptr;};
      void deleteEmpty() { this->empty_ = nullptr;};
      inline bool getEmpty() const { DARABONBA_PTR_GET_DEFAULT(empty_, false) };
      inline ResultData& setEmpty(bool empty) { DARABONBA_PTR_SET_VALUE(empty_, empty) };


      // nextPage Field Functions 
      bool hasNextPage() const { return this->nextPage_ != nullptr;};
      void deleteNextPage() { this->nextPage_ = nullptr;};
      inline int32_t getNextPage() const { DARABONBA_PTR_GET_DEFAULT(nextPage_, 0) };
      inline ResultData& setNextPage(int32_t nextPage) { DARABONBA_PTR_SET_VALUE(nextPage_, nextPage) };


      // onePageSize Field Functions 
      bool hasOnePageSize() const { return this->onePageSize_ != nullptr;};
      void deleteOnePageSize() { this->onePageSize_ = nullptr;};
      inline int32_t getOnePageSize() const { DARABONBA_PTR_GET_DEFAULT(onePageSize_, 0) };
      inline ResultData& setOnePageSize(int32_t onePageSize) { DARABONBA_PTR_SET_VALUE(onePageSize_, onePageSize) };


      // previousPage Field Functions 
      bool hasPreviousPage() const { return this->previousPage_ != nullptr;};
      void deletePreviousPage() { this->previousPage_ = nullptr;};
      inline int32_t getPreviousPage() const { DARABONBA_PTR_GET_DEFAULT(previousPage_, 0) };
      inline ResultData& setPreviousPage(int32_t previousPage) { DARABONBA_PTR_SET_VALUE(previousPage_, previousPage) };


      // totalPage Field Functions 
      bool hasTotalPage() const { return this->totalPage_ != nullptr;};
      void deleteTotalPage() { this->totalPage_ = nullptr;};
      inline int32_t getTotalPage() const { DARABONBA_PTR_GET_DEFAULT(totalPage_, 0) };
      inline ResultData& setTotalPage(int32_t totalPage) { DARABONBA_PTR_SET_VALUE(totalPage_, totalPage) };


      // totalResults Field Functions 
      bool hasTotalResults() const { return this->totalResults_ != nullptr;};
      void deleteTotalResults() { this->totalResults_ = nullptr;};
      inline int32_t getTotalResults() const { DARABONBA_PTR_GET_DEFAULT(totalResults_, 0) };
      inline ResultData& setTotalResults(int32_t totalResults) { DARABONBA_PTR_SET_VALUE(totalResults_, totalResults) };


    protected:
      shared_ptr<int32_t> currentPage_ {};
      shared_ptr<vector<ResultData::Data>> data_ {};
      shared_ptr<bool> empty_ {};
      shared_ptr<int32_t> nextPage_ {};
      shared_ptr<int32_t> onePageSize_ {};
      shared_ptr<int32_t> previousPage_ {};
      shared_ptr<int32_t> totalPage_ {};
      shared_ptr<int32_t> totalResults_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->message_ == nullptr && this->requestId_ == nullptr && this->resultData_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline QueryTouchListResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline QueryTouchListResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryTouchListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resultData Field Functions 
    bool hasResultData() const { return this->resultData_ != nullptr;};
    void deleteResultData() { this->resultData_ = nullptr;};
    inline const QueryTouchListResponseBody::ResultData & getResultData() const { DARABONBA_PTR_GET_CONST(resultData_, QueryTouchListResponseBody::ResultData) };
    inline QueryTouchListResponseBody::ResultData getResultData() { DARABONBA_PTR_GET(resultData_, QueryTouchListResponseBody::ResultData) };
    inline QueryTouchListResponseBody& setResultData(const QueryTouchListResponseBody::ResultData & resultData) { DARABONBA_PTR_SET_VALUE(resultData_, resultData) };
    inline QueryTouchListResponseBody& setResultData(QueryTouchListResponseBody::ResultData && resultData) { DARABONBA_PTR_SET_RVALUE(resultData_, resultData) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline QueryTouchListResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<QueryTouchListResponseBody::ResultData> resultData_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aiccs20191015
#endif
