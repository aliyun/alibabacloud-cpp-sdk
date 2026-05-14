// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CLINKDESCRIBEQUEUERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CLINKDESCRIBEQUEUERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dyvmsapi20170525
{
namespace Models
{
  class ClinkDescribeQueueResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ClinkDescribeQueueResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ClinkDescribeQueueResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ClinkDescribeQueueResponseBody() = default ;
    ClinkDescribeQueueResponseBody(const ClinkDescribeQueueResponseBody &) = default ;
    ClinkDescribeQueueResponseBody(ClinkDescribeQueueResponseBody &&) = default ;
    ClinkDescribeQueueResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ClinkDescribeQueueResponseBody() = default ;
    ClinkDescribeQueueResponseBody& operator=(const ClinkDescribeQueueResponseBody &) = default ;
    ClinkDescribeQueueResponseBody& operator=(ClinkDescribeQueueResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(ClinkRequestId, clinkRequestId_);
        DARABONBA_PTR_TO_JSON(Result, result_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(ClinkRequestId, clinkRequestId_);
        DARABONBA_PTR_FROM_JSON(Result, result_);
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
      class Result : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Result& obj) { 
          DARABONBA_PTR_TO_JSON(ChatLocation, chatLocation_);
          DARABONBA_PTR_TO_JSON(ChatMaxWait, chatMaxWait_);
          DARABONBA_PTR_TO_JSON(ChatStrategy, chatStrategy_);
          DARABONBA_PTR_TO_JSON(EnterpriseId, enterpriseId_);
          DARABONBA_PTR_TO_JSON(IbAllowed, ibAllowed_);
          DARABONBA_PTR_TO_JSON(JoinEmpty, joinEmpty_);
          DARABONBA_PTR_TO_JSON(MaxPauseClientFlag, maxPauseClientFlag_);
          DARABONBA_PTR_TO_JSON(MaxPauseClientType, maxPauseClientType_);
          DARABONBA_PTR_TO_JSON(MaxPauseClientValue, maxPauseClientValue_);
          DARABONBA_PTR_TO_JSON(MaxWait, maxWait_);
          DARABONBA_PTR_TO_JSON(MemberTimeout, memberTimeout_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(Qno, qno_);
          DARABONBA_PTR_TO_JSON(QueueMembers, queueMembers_);
          DARABONBA_PTR_TO_JSON(QueueTimeout, queueTimeout_);
          DARABONBA_PTR_TO_JSON(Retry, retry_);
          DARABONBA_PTR_TO_JSON(SayCno, sayCno_);
          DARABONBA_PTR_TO_JSON(ServiceLevel, serviceLevel_);
          DARABONBA_PTR_TO_JSON(Strategy, strategy_);
          DARABONBA_PTR_TO_JSON(VipSupport, vipSupport_);
          DARABONBA_PTR_TO_JSON(Weight, weight_);
          DARABONBA_PTR_TO_JSON(WrapupTime, wrapupTime_);
        };
        friend void from_json(const Darabonba::Json& j, Result& obj) { 
          DARABONBA_PTR_FROM_JSON(ChatLocation, chatLocation_);
          DARABONBA_PTR_FROM_JSON(ChatMaxWait, chatMaxWait_);
          DARABONBA_PTR_FROM_JSON(ChatStrategy, chatStrategy_);
          DARABONBA_PTR_FROM_JSON(EnterpriseId, enterpriseId_);
          DARABONBA_PTR_FROM_JSON(IbAllowed, ibAllowed_);
          DARABONBA_PTR_FROM_JSON(JoinEmpty, joinEmpty_);
          DARABONBA_PTR_FROM_JSON(MaxPauseClientFlag, maxPauseClientFlag_);
          DARABONBA_PTR_FROM_JSON(MaxPauseClientType, maxPauseClientType_);
          DARABONBA_PTR_FROM_JSON(MaxPauseClientValue, maxPauseClientValue_);
          DARABONBA_PTR_FROM_JSON(MaxWait, maxWait_);
          DARABONBA_PTR_FROM_JSON(MemberTimeout, memberTimeout_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(Qno, qno_);
          DARABONBA_PTR_FROM_JSON(QueueMembers, queueMembers_);
          DARABONBA_PTR_FROM_JSON(QueueTimeout, queueTimeout_);
          DARABONBA_PTR_FROM_JSON(Retry, retry_);
          DARABONBA_PTR_FROM_JSON(SayCno, sayCno_);
          DARABONBA_PTR_FROM_JSON(ServiceLevel, serviceLevel_);
          DARABONBA_PTR_FROM_JSON(Strategy, strategy_);
          DARABONBA_PTR_FROM_JSON(VipSupport, vipSupport_);
          DARABONBA_PTR_FROM_JSON(Weight, weight_);
          DARABONBA_PTR_FROM_JSON(WrapupTime, wrapupTime_);
        };
        Result() = default ;
        Result(const Result &) = default ;
        Result(Result &&) = default ;
        Result(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Result() = default ;
        Result& operator=(const Result &) = default ;
        Result& operator=(Result &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class QueueMembers : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const QueueMembers& obj) { 
            DARABONBA_PTR_TO_JSON(Cno, cno_);
            DARABONBA_PTR_TO_JSON(Penalty, penalty_);
            DARABONBA_PTR_TO_JSON(Type, type_);
          };
          friend void from_json(const Darabonba::Json& j, QueueMembers& obj) { 
            DARABONBA_PTR_FROM_JSON(Cno, cno_);
            DARABONBA_PTR_FROM_JSON(Penalty, penalty_);
            DARABONBA_PTR_FROM_JSON(Type, type_);
          };
          QueueMembers() = default ;
          QueueMembers(const QueueMembers &) = default ;
          QueueMembers(QueueMembers &&) = default ;
          QueueMembers(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~QueueMembers() = default ;
          QueueMembers& operator=(const QueueMembers &) = default ;
          QueueMembers& operator=(QueueMembers &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->cno_ == nullptr
        && this->penalty_ == nullptr && this->type_ == nullptr; };
          // cno Field Functions 
          bool hasCno() const { return this->cno_ != nullptr;};
          void deleteCno() { this->cno_ = nullptr;};
          inline string getCno() const { DARABONBA_PTR_GET_DEFAULT(cno_, "") };
          inline QueueMembers& setCno(string cno) { DARABONBA_PTR_SET_VALUE(cno_, cno) };


          // penalty Field Functions 
          bool hasPenalty() const { return this->penalty_ != nullptr;};
          void deletePenalty() { this->penalty_ = nullptr;};
          inline int64_t getPenalty() const { DARABONBA_PTR_GET_DEFAULT(penalty_, 0L) };
          inline QueueMembers& setPenalty(int64_t penalty) { DARABONBA_PTR_SET_VALUE(penalty_, penalty) };


          // type Field Functions 
          bool hasType() const { return this->type_ != nullptr;};
          void deleteType() { this->type_ = nullptr;};
          inline int64_t getType() const { DARABONBA_PTR_GET_DEFAULT(type_, 0L) };
          inline QueueMembers& setType(int64_t type) { DARABONBA_PTR_SET_VALUE(type_, type) };


        protected:
          // 座席号
          shared_ptr<string> cno_ {};
          // 优先级
          shared_ptr<int64_t> penalty_ {};
          // 座席类型
          shared_ptr<int64_t> type_ {};
        };

        virtual bool empty() const override { return this->chatLocation_ == nullptr
        && this->chatMaxWait_ == nullptr && this->chatStrategy_ == nullptr && this->enterpriseId_ == nullptr && this->ibAllowed_ == nullptr && this->joinEmpty_ == nullptr
        && this->maxPauseClientFlag_ == nullptr && this->maxPauseClientType_ == nullptr && this->maxPauseClientValue_ == nullptr && this->maxWait_ == nullptr && this->memberTimeout_ == nullptr
        && this->name_ == nullptr && this->qno_ == nullptr && this->queueMembers_ == nullptr && this->queueTimeout_ == nullptr && this->retry_ == nullptr
        && this->sayCno_ == nullptr && this->serviceLevel_ == nullptr && this->strategy_ == nullptr && this->vipSupport_ == nullptr && this->weight_ == nullptr
        && this->wrapupTime_ == nullptr; };
        // chatLocation Field Functions 
        bool hasChatLocation() const { return this->chatLocation_ != nullptr;};
        void deleteChatLocation() { this->chatLocation_ = nullptr;};
        inline int64_t getChatLocation() const { DARABONBA_PTR_GET_DEFAULT(chatLocation_, 0L) };
        inline Result& setChatLocation(int64_t chatLocation) { DARABONBA_PTR_SET_VALUE(chatLocation_, chatLocation) };


        // chatMaxWait Field Functions 
        bool hasChatMaxWait() const { return this->chatMaxWait_ != nullptr;};
        void deleteChatMaxWait() { this->chatMaxWait_ = nullptr;};
        inline int64_t getChatMaxWait() const { DARABONBA_PTR_GET_DEFAULT(chatMaxWait_, 0L) };
        inline Result& setChatMaxWait(int64_t chatMaxWait) { DARABONBA_PTR_SET_VALUE(chatMaxWait_, chatMaxWait) };


        // chatStrategy Field Functions 
        bool hasChatStrategy() const { return this->chatStrategy_ != nullptr;};
        void deleteChatStrategy() { this->chatStrategy_ = nullptr;};
        inline int64_t getChatStrategy() const { DARABONBA_PTR_GET_DEFAULT(chatStrategy_, 0L) };
        inline Result& setChatStrategy(int64_t chatStrategy) { DARABONBA_PTR_SET_VALUE(chatStrategy_, chatStrategy) };


        // enterpriseId Field Functions 
        bool hasEnterpriseId() const { return this->enterpriseId_ != nullptr;};
        void deleteEnterpriseId() { this->enterpriseId_ = nullptr;};
        inline int64_t getEnterpriseId() const { DARABONBA_PTR_GET_DEFAULT(enterpriseId_, 0L) };
        inline Result& setEnterpriseId(int64_t enterpriseId) { DARABONBA_PTR_SET_VALUE(enterpriseId_, enterpriseId) };


        // ibAllowed Field Functions 
        bool hasIbAllowed() const { return this->ibAllowed_ != nullptr;};
        void deleteIbAllowed() { this->ibAllowed_ = nullptr;};
        inline int64_t getIbAllowed() const { DARABONBA_PTR_GET_DEFAULT(ibAllowed_, 0L) };
        inline Result& setIbAllowed(int64_t ibAllowed) { DARABONBA_PTR_SET_VALUE(ibAllowed_, ibAllowed) };


        // joinEmpty Field Functions 
        bool hasJoinEmpty() const { return this->joinEmpty_ != nullptr;};
        void deleteJoinEmpty() { this->joinEmpty_ = nullptr;};
        inline int64_t getJoinEmpty() const { DARABONBA_PTR_GET_DEFAULT(joinEmpty_, 0L) };
        inline Result& setJoinEmpty(int64_t joinEmpty) { DARABONBA_PTR_SET_VALUE(joinEmpty_, joinEmpty) };


        // maxPauseClientFlag Field Functions 
        bool hasMaxPauseClientFlag() const { return this->maxPauseClientFlag_ != nullptr;};
        void deleteMaxPauseClientFlag() { this->maxPauseClientFlag_ = nullptr;};
        inline int64_t getMaxPauseClientFlag() const { DARABONBA_PTR_GET_DEFAULT(maxPauseClientFlag_, 0L) };
        inline Result& setMaxPauseClientFlag(int64_t maxPauseClientFlag) { DARABONBA_PTR_SET_VALUE(maxPauseClientFlag_, maxPauseClientFlag) };


        // maxPauseClientType Field Functions 
        bool hasMaxPauseClientType() const { return this->maxPauseClientType_ != nullptr;};
        void deleteMaxPauseClientType() { this->maxPauseClientType_ = nullptr;};
        inline int64_t getMaxPauseClientType() const { DARABONBA_PTR_GET_DEFAULT(maxPauseClientType_, 0L) };
        inline Result& setMaxPauseClientType(int64_t maxPauseClientType) { DARABONBA_PTR_SET_VALUE(maxPauseClientType_, maxPauseClientType) };


        // maxPauseClientValue Field Functions 
        bool hasMaxPauseClientValue() const { return this->maxPauseClientValue_ != nullptr;};
        void deleteMaxPauseClientValue() { this->maxPauseClientValue_ = nullptr;};
        inline int64_t getMaxPauseClientValue() const { DARABONBA_PTR_GET_DEFAULT(maxPauseClientValue_, 0L) };
        inline Result& setMaxPauseClientValue(int64_t maxPauseClientValue) { DARABONBA_PTR_SET_VALUE(maxPauseClientValue_, maxPauseClientValue) };


        // maxWait Field Functions 
        bool hasMaxWait() const { return this->maxWait_ != nullptr;};
        void deleteMaxWait() { this->maxWait_ = nullptr;};
        inline int64_t getMaxWait() const { DARABONBA_PTR_GET_DEFAULT(maxWait_, 0L) };
        inline Result& setMaxWait(int64_t maxWait) { DARABONBA_PTR_SET_VALUE(maxWait_, maxWait) };


        // memberTimeout Field Functions 
        bool hasMemberTimeout() const { return this->memberTimeout_ != nullptr;};
        void deleteMemberTimeout() { this->memberTimeout_ = nullptr;};
        inline int64_t getMemberTimeout() const { DARABONBA_PTR_GET_DEFAULT(memberTimeout_, 0L) };
        inline Result& setMemberTimeout(int64_t memberTimeout) { DARABONBA_PTR_SET_VALUE(memberTimeout_, memberTimeout) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline int64_t getName() const { DARABONBA_PTR_GET_DEFAULT(name_, 0L) };
        inline Result& setName(int64_t name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // qno Field Functions 
        bool hasQno() const { return this->qno_ != nullptr;};
        void deleteQno() { this->qno_ = nullptr;};
        inline string getQno() const { DARABONBA_PTR_GET_DEFAULT(qno_, "") };
        inline Result& setQno(string qno) { DARABONBA_PTR_SET_VALUE(qno_, qno) };


        // queueMembers Field Functions 
        bool hasQueueMembers() const { return this->queueMembers_ != nullptr;};
        void deleteQueueMembers() { this->queueMembers_ = nullptr;};
        inline const vector<Result::QueueMembers> & getQueueMembers() const { DARABONBA_PTR_GET_CONST(queueMembers_, vector<Result::QueueMembers>) };
        inline vector<Result::QueueMembers> getQueueMembers() { DARABONBA_PTR_GET(queueMembers_, vector<Result::QueueMembers>) };
        inline Result& setQueueMembers(const vector<Result::QueueMembers> & queueMembers) { DARABONBA_PTR_SET_VALUE(queueMembers_, queueMembers) };
        inline Result& setQueueMembers(vector<Result::QueueMembers> && queueMembers) { DARABONBA_PTR_SET_RVALUE(queueMembers_, queueMembers) };


        // queueTimeout Field Functions 
        bool hasQueueTimeout() const { return this->queueTimeout_ != nullptr;};
        void deleteQueueTimeout() { this->queueTimeout_ = nullptr;};
        inline int64_t getQueueTimeout() const { DARABONBA_PTR_GET_DEFAULT(queueTimeout_, 0L) };
        inline Result& setQueueTimeout(int64_t queueTimeout) { DARABONBA_PTR_SET_VALUE(queueTimeout_, queueTimeout) };


        // retry Field Functions 
        bool hasRetry() const { return this->retry_ != nullptr;};
        void deleteRetry() { this->retry_ = nullptr;};
        inline int64_t getRetry() const { DARABONBA_PTR_GET_DEFAULT(retry_, 0L) };
        inline Result& setRetry(int64_t retry) { DARABONBA_PTR_SET_VALUE(retry_, retry) };


        // sayCno Field Functions 
        bool hasSayCno() const { return this->sayCno_ != nullptr;};
        void deleteSayCno() { this->sayCno_ = nullptr;};
        inline int64_t getSayCno() const { DARABONBA_PTR_GET_DEFAULT(sayCno_, 0L) };
        inline Result& setSayCno(int64_t sayCno) { DARABONBA_PTR_SET_VALUE(sayCno_, sayCno) };


        // serviceLevel Field Functions 
        bool hasServiceLevel() const { return this->serviceLevel_ != nullptr;};
        void deleteServiceLevel() { this->serviceLevel_ = nullptr;};
        inline int64_t getServiceLevel() const { DARABONBA_PTR_GET_DEFAULT(serviceLevel_, 0L) };
        inline Result& setServiceLevel(int64_t serviceLevel) { DARABONBA_PTR_SET_VALUE(serviceLevel_, serviceLevel) };


        // strategy Field Functions 
        bool hasStrategy() const { return this->strategy_ != nullptr;};
        void deleteStrategy() { this->strategy_ = nullptr;};
        inline int64_t getStrategy() const { DARABONBA_PTR_GET_DEFAULT(strategy_, 0L) };
        inline Result& setStrategy(int64_t strategy) { DARABONBA_PTR_SET_VALUE(strategy_, strategy) };


        // vipSupport Field Functions 
        bool hasVipSupport() const { return this->vipSupport_ != nullptr;};
        void deleteVipSupport() { this->vipSupport_ = nullptr;};
        inline int64_t getVipSupport() const { DARABONBA_PTR_GET_DEFAULT(vipSupport_, 0L) };
        inline Result& setVipSupport(int64_t vipSupport) { DARABONBA_PTR_SET_VALUE(vipSupport_, vipSupport) };


        // weight Field Functions 
        bool hasWeight() const { return this->weight_ != nullptr;};
        void deleteWeight() { this->weight_ = nullptr;};
        inline int64_t getWeight() const { DARABONBA_PTR_GET_DEFAULT(weight_, 0L) };
        inline Result& setWeight(int64_t weight) { DARABONBA_PTR_SET_VALUE(weight_, weight) };


        // wrapupTime Field Functions 
        bool hasWrapupTime() const { return this->wrapupTime_ != nullptr;};
        void deleteWrapupTime() { this->wrapupTime_ = nullptr;};
        inline int64_t getWrapupTime() const { DARABONBA_PTR_GET_DEFAULT(wrapupTime_, 0L) };
        inline Result& setWrapupTime(int64_t wrapupTime) { DARABONBA_PTR_SET_VALUE(wrapupTime_, wrapupTime) };


      protected:
        // 在线客服排队位置推送(小于该位置则推送)
        shared_ptr<int64_t> chatLocation_ {};
        // 在线客服最大排队数
        shared_ptr<int64_t> chatMaxWait_ {};
        // 在线客服分配策略，2：轮选；4：随机；5：技能优先
        shared_ptr<int64_t> chatStrategy_ {};
        // 企业id
        shared_ptr<int64_t> enterpriseId_ {};
        // 允许呼入队列 0：不允许 1：允许
        shared_ptr<int64_t> ibAllowed_ {};
        // 队列中为空时是否可以join（设置了队列等待数，来电进入队列后处于等待状态，等待超时才溢出；如果勾选了这几个选项，认为座席不可用，直接溢出，减少客户等待时间）， 1: 置忙；2: 通话中；4: 振铃；8: 无效；16: 整理。 如选多种状态则传对应数值的和，如选置忙和通话中，值为 3
        shared_ptr<int64_t> joinEmpty_ {};
        // 最大并发置忙座席数，开关配置
        shared_ptr<int64_t> maxPauseClientFlag_ {};
        // 最大并发置忙座席数，配置类型
        shared_ptr<int64_t> maxPauseClientType_ {};
        // 最大并发置忙座席数，配置值
        shared_ptr<int64_t> maxPauseClientValue_ {};
        // 呼叫中心最大排队数
        shared_ptr<int64_t> maxWait_ {};
        // 座席超时时长
        shared_ptr<int64_t> memberTimeout_ {};
        // 队列名称
        shared_ptr<int64_t> name_ {};
        // 队列号
        shared_ptr<string> qno_ {};
        // cno 座席号 penalty 优先级 type 座席类型 1：全渠道、2：呼叫中心、3：在线客服
        shared_ptr<vector<Result::QueueMembers>> queueMembers_ {};
        // 队列超时时长
        shared_ptr<int64_t> queueTimeout_ {};
        // 座席超时无应答,呼叫下一座席的延迟秒数,⇐0时采用默认值5。
        shared_ptr<int64_t> retry_ {};
        // 语音报号(是否报座席号)(1：是 0：否)
        shared_ptr<int64_t> sayCno_ {};
        // 服务水平秒数，取值范围 10-30秒，低于此时间内接听的认为是高服务水平
        shared_ptr<int64_t> serviceLevel_ {};
        // 呼叫策略，1：顺序，2：轮选，3：平均，4：随机，5：技能优先，6：距上一通呼入空闲时间累计最长，7：技能优先+距上一通呼入空闲时间累计最长，8：距上一通呼入空闲时间累计最长(全队列)，9：技能优先+距上一通呼入空闲时间累计最长(全队列)，10：全队列平均，11：技能优先+轮选，12：最长空闲时长，13：技能优先+当前空闲状态时长最长，14：距上一通通话空闲时间累计最长
        shared_ptr<int64_t> strategy_ {};
        // 支持VIP级别(VIP客户优先)(0：不支持 1：支持)
        shared_ptr<int64_t> vipSupport_ {};
        // 队列优先级，取值范围 1-10。默认值为 1，座席属于多个队列时，优先级高的队列的来电将优先接听；数值越高，优先级越高
        shared_ptr<int64_t> weight_ {};
        // 整理时间
        shared_ptr<int64_t> wrapupTime_ {};
      };

      virtual bool empty() const override { return this->clinkRequestId_ == nullptr
        && this->result_ == nullptr; };
      // clinkRequestId Field Functions 
      bool hasClinkRequestId() const { return this->clinkRequestId_ != nullptr;};
      void deleteClinkRequestId() { this->clinkRequestId_ = nullptr;};
      inline string getClinkRequestId() const { DARABONBA_PTR_GET_DEFAULT(clinkRequestId_, "") };
      inline Data& setClinkRequestId(string clinkRequestId) { DARABONBA_PTR_SET_VALUE(clinkRequestId_, clinkRequestId) };


      // result Field Functions 
      bool hasResult() const { return this->result_ != nullptr;};
      void deleteResult() { this->result_ = nullptr;};
      inline const Data::Result & getResult() const { DARABONBA_PTR_GET_CONST(result_, Data::Result) };
      inline Data::Result getResult() { DARABONBA_PTR_GET(result_, Data::Result) };
      inline Data& setResult(const Data::Result & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
      inline Data& setResult(Data::Result && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


    protected:
      // 请求 id
      shared_ptr<string> clinkRequestId_ {};
      shared_ptr<Data::Result> result_ {};
    };

    virtual bool empty() const override { return this->accessDeniedDetail_ == nullptr
        && this->code_ == nullptr && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr; };
    // accessDeniedDetail Field Functions 
    bool hasAccessDeniedDetail() const { return this->accessDeniedDetail_ != nullptr;};
    void deleteAccessDeniedDetail() { this->accessDeniedDetail_ = nullptr;};
    inline string getAccessDeniedDetail() const { DARABONBA_PTR_GET_DEFAULT(accessDeniedDetail_, "") };
    inline ClinkDescribeQueueResponseBody& setAccessDeniedDetail(string accessDeniedDetail) { DARABONBA_PTR_SET_VALUE(accessDeniedDetail_, accessDeniedDetail) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ClinkDescribeQueueResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ClinkDescribeQueueResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, ClinkDescribeQueueResponseBody::Data) };
    inline ClinkDescribeQueueResponseBody::Data getData() { DARABONBA_PTR_GET(data_, ClinkDescribeQueueResponseBody::Data) };
    inline ClinkDescribeQueueResponseBody& setData(const ClinkDescribeQueueResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ClinkDescribeQueueResponseBody& setData(ClinkDescribeQueueResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ClinkDescribeQueueResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ClinkDescribeQueueResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<string> accessDeniedDetail_ {};
    shared_ptr<string> code_ {};
    shared_ptr<ClinkDescribeQueueResponseBody::Data> data_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dyvmsapi20170525
#endif
