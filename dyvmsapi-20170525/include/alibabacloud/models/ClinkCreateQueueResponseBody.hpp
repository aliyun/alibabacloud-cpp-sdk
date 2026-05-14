// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CLINKCREATEQUEUERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CLINKCREATEQUEUERESPONSEBODY_HPP_
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
  class ClinkCreateQueueResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ClinkCreateQueueResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ClinkCreateQueueResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ClinkCreateQueueResponseBody() = default ;
    ClinkCreateQueueResponseBody(const ClinkCreateQueueResponseBody &) = default ;
    ClinkCreateQueueResponseBody(ClinkCreateQueueResponseBody &&) = default ;
    ClinkCreateQueueResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ClinkCreateQueueResponseBody() = default ;
    ClinkCreateQueueResponseBody& operator=(const ClinkCreateQueueResponseBody &) = default ;
    ClinkCreateQueueResponseBody& operator=(ClinkCreateQueueResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(ClinkRequestId, clinkRequestId_);
        DARABONBA_PTR_TO_JSON(Queue, queue_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(ClinkRequestId, clinkRequestId_);
        DARABONBA_PTR_FROM_JSON(Queue, queue_);
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
      class Queue : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Queue& obj) { 
          DARABONBA_PTR_TO_JSON(ChatLocation, chatLocation_);
          DARABONBA_PTR_TO_JSON(ChatMaxWait, chatMaxWait_);
          DARABONBA_PTR_TO_JSON(ChatStrategy, chatStrategy_);
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
          DARABONBA_PTR_TO_JSON(SayCno, sayCno_);
          DARABONBA_PTR_TO_JSON(ServiceLevel, serviceLevel_);
          DARABONBA_PTR_TO_JSON(Strategy, strategy_);
          DARABONBA_PTR_TO_JSON(VipSupport, vipSupport_);
          DARABONBA_PTR_TO_JSON(Weight, weight_);
          DARABONBA_PTR_TO_JSON(WrapupTime, wrapupTime_);
        };
        friend void from_json(const Darabonba::Json& j, Queue& obj) { 
          DARABONBA_PTR_FROM_JSON(ChatLocation, chatLocation_);
          DARABONBA_PTR_FROM_JSON(ChatMaxWait, chatMaxWait_);
          DARABONBA_PTR_FROM_JSON(ChatStrategy, chatStrategy_);
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
          DARABONBA_PTR_FROM_JSON(SayCno, sayCno_);
          DARABONBA_PTR_FROM_JSON(ServiceLevel, serviceLevel_);
          DARABONBA_PTR_FROM_JSON(Strategy, strategy_);
          DARABONBA_PTR_FROM_JSON(VipSupport, vipSupport_);
          DARABONBA_PTR_FROM_JSON(Weight, weight_);
          DARABONBA_PTR_FROM_JSON(WrapupTime, wrapupTime_);
        };
        Queue() = default ;
        Queue(const Queue &) = default ;
        Queue(Queue &&) = default ;
        Queue(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Queue() = default ;
        Queue& operator=(const Queue &) = default ;
        Queue& operator=(Queue &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class QueueMembers : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const QueueMembers& obj) { 
            DARABONBA_PTR_TO_JSON(Cno, cno_);
            DARABONBA_PTR_TO_JSON(Penalty, penalty_);
          };
          friend void from_json(const Darabonba::Json& j, QueueMembers& obj) { 
            DARABONBA_PTR_FROM_JSON(Cno, cno_);
            DARABONBA_PTR_FROM_JSON(Penalty, penalty_);
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
        && this->penalty_ == nullptr; };
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


        protected:
          // 队列下座席号
          shared_ptr<string> cno_ {};
          // 该座席在队列中的优先级
          shared_ptr<int64_t> penalty_ {};
        };

        virtual bool empty() const override { return this->chatLocation_ == nullptr
        && this->chatMaxWait_ == nullptr && this->chatStrategy_ == nullptr && this->ibAllowed_ == nullptr && this->joinEmpty_ == nullptr && this->maxPauseClientFlag_ == nullptr
        && this->maxPauseClientType_ == nullptr && this->maxPauseClientValue_ == nullptr && this->maxWait_ == nullptr && this->memberTimeout_ == nullptr && this->name_ == nullptr
        && this->qno_ == nullptr && this->queueMembers_ == nullptr && this->queueTimeout_ == nullptr && this->sayCno_ == nullptr && this->serviceLevel_ == nullptr
        && this->strategy_ == nullptr && this->vipSupport_ == nullptr && this->weight_ == nullptr && this->wrapupTime_ == nullptr; };
        // chatLocation Field Functions 
        bool hasChatLocation() const { return this->chatLocation_ != nullptr;};
        void deleteChatLocation() { this->chatLocation_ = nullptr;};
        inline int64_t getChatLocation() const { DARABONBA_PTR_GET_DEFAULT(chatLocation_, 0L) };
        inline Queue& setChatLocation(int64_t chatLocation) { DARABONBA_PTR_SET_VALUE(chatLocation_, chatLocation) };


        // chatMaxWait Field Functions 
        bool hasChatMaxWait() const { return this->chatMaxWait_ != nullptr;};
        void deleteChatMaxWait() { this->chatMaxWait_ = nullptr;};
        inline int64_t getChatMaxWait() const { DARABONBA_PTR_GET_DEFAULT(chatMaxWait_, 0L) };
        inline Queue& setChatMaxWait(int64_t chatMaxWait) { DARABONBA_PTR_SET_VALUE(chatMaxWait_, chatMaxWait) };


        // chatStrategy Field Functions 
        bool hasChatStrategy() const { return this->chatStrategy_ != nullptr;};
        void deleteChatStrategy() { this->chatStrategy_ = nullptr;};
        inline int64_t getChatStrategy() const { DARABONBA_PTR_GET_DEFAULT(chatStrategy_, 0L) };
        inline Queue& setChatStrategy(int64_t chatStrategy) { DARABONBA_PTR_SET_VALUE(chatStrategy_, chatStrategy) };


        // ibAllowed Field Functions 
        bool hasIbAllowed() const { return this->ibAllowed_ != nullptr;};
        void deleteIbAllowed() { this->ibAllowed_ = nullptr;};
        inline int64_t getIbAllowed() const { DARABONBA_PTR_GET_DEFAULT(ibAllowed_, 0L) };
        inline Queue& setIbAllowed(int64_t ibAllowed) { DARABONBA_PTR_SET_VALUE(ibAllowed_, ibAllowed) };


        // joinEmpty Field Functions 
        bool hasJoinEmpty() const { return this->joinEmpty_ != nullptr;};
        void deleteJoinEmpty() { this->joinEmpty_ = nullptr;};
        inline int64_t getJoinEmpty() const { DARABONBA_PTR_GET_DEFAULT(joinEmpty_, 0L) };
        inline Queue& setJoinEmpty(int64_t joinEmpty) { DARABONBA_PTR_SET_VALUE(joinEmpty_, joinEmpty) };


        // maxPauseClientFlag Field Functions 
        bool hasMaxPauseClientFlag() const { return this->maxPauseClientFlag_ != nullptr;};
        void deleteMaxPauseClientFlag() { this->maxPauseClientFlag_ = nullptr;};
        inline int64_t getMaxPauseClientFlag() const { DARABONBA_PTR_GET_DEFAULT(maxPauseClientFlag_, 0L) };
        inline Queue& setMaxPauseClientFlag(int64_t maxPauseClientFlag) { DARABONBA_PTR_SET_VALUE(maxPauseClientFlag_, maxPauseClientFlag) };


        // maxPauseClientType Field Functions 
        bool hasMaxPauseClientType() const { return this->maxPauseClientType_ != nullptr;};
        void deleteMaxPauseClientType() { this->maxPauseClientType_ = nullptr;};
        inline int64_t getMaxPauseClientType() const { DARABONBA_PTR_GET_DEFAULT(maxPauseClientType_, 0L) };
        inline Queue& setMaxPauseClientType(int64_t maxPauseClientType) { DARABONBA_PTR_SET_VALUE(maxPauseClientType_, maxPauseClientType) };


        // maxPauseClientValue Field Functions 
        bool hasMaxPauseClientValue() const { return this->maxPauseClientValue_ != nullptr;};
        void deleteMaxPauseClientValue() { this->maxPauseClientValue_ = nullptr;};
        inline int64_t getMaxPauseClientValue() const { DARABONBA_PTR_GET_DEFAULT(maxPauseClientValue_, 0L) };
        inline Queue& setMaxPauseClientValue(int64_t maxPauseClientValue) { DARABONBA_PTR_SET_VALUE(maxPauseClientValue_, maxPauseClientValue) };


        // maxWait Field Functions 
        bool hasMaxWait() const { return this->maxWait_ != nullptr;};
        void deleteMaxWait() { this->maxWait_ = nullptr;};
        inline int64_t getMaxWait() const { DARABONBA_PTR_GET_DEFAULT(maxWait_, 0L) };
        inline Queue& setMaxWait(int64_t maxWait) { DARABONBA_PTR_SET_VALUE(maxWait_, maxWait) };


        // memberTimeout Field Functions 
        bool hasMemberTimeout() const { return this->memberTimeout_ != nullptr;};
        void deleteMemberTimeout() { this->memberTimeout_ = nullptr;};
        inline int64_t getMemberTimeout() const { DARABONBA_PTR_GET_DEFAULT(memberTimeout_, 0L) };
        inline Queue& setMemberTimeout(int64_t memberTimeout) { DARABONBA_PTR_SET_VALUE(memberTimeout_, memberTimeout) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline Queue& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // qno Field Functions 
        bool hasQno() const { return this->qno_ != nullptr;};
        void deleteQno() { this->qno_ = nullptr;};
        inline string getQno() const { DARABONBA_PTR_GET_DEFAULT(qno_, "") };
        inline Queue& setQno(string qno) { DARABONBA_PTR_SET_VALUE(qno_, qno) };


        // queueMembers Field Functions 
        bool hasQueueMembers() const { return this->queueMembers_ != nullptr;};
        void deleteQueueMembers() { this->queueMembers_ = nullptr;};
        inline const vector<Queue::QueueMembers> & getQueueMembers() const { DARABONBA_PTR_GET_CONST(queueMembers_, vector<Queue::QueueMembers>) };
        inline vector<Queue::QueueMembers> getQueueMembers() { DARABONBA_PTR_GET(queueMembers_, vector<Queue::QueueMembers>) };
        inline Queue& setQueueMembers(const vector<Queue::QueueMembers> & queueMembers) { DARABONBA_PTR_SET_VALUE(queueMembers_, queueMembers) };
        inline Queue& setQueueMembers(vector<Queue::QueueMembers> && queueMembers) { DARABONBA_PTR_SET_RVALUE(queueMembers_, queueMembers) };


        // queueTimeout Field Functions 
        bool hasQueueTimeout() const { return this->queueTimeout_ != nullptr;};
        void deleteQueueTimeout() { this->queueTimeout_ = nullptr;};
        inline int64_t getQueueTimeout() const { DARABONBA_PTR_GET_DEFAULT(queueTimeout_, 0L) };
        inline Queue& setQueueTimeout(int64_t queueTimeout) { DARABONBA_PTR_SET_VALUE(queueTimeout_, queueTimeout) };


        // sayCno Field Functions 
        bool hasSayCno() const { return this->sayCno_ != nullptr;};
        void deleteSayCno() { this->sayCno_ = nullptr;};
        inline int64_t getSayCno() const { DARABONBA_PTR_GET_DEFAULT(sayCno_, 0L) };
        inline Queue& setSayCno(int64_t sayCno) { DARABONBA_PTR_SET_VALUE(sayCno_, sayCno) };


        // serviceLevel Field Functions 
        bool hasServiceLevel() const { return this->serviceLevel_ != nullptr;};
        void deleteServiceLevel() { this->serviceLevel_ = nullptr;};
        inline int64_t getServiceLevel() const { DARABONBA_PTR_GET_DEFAULT(serviceLevel_, 0L) };
        inline Queue& setServiceLevel(int64_t serviceLevel) { DARABONBA_PTR_SET_VALUE(serviceLevel_, serviceLevel) };


        // strategy Field Functions 
        bool hasStrategy() const { return this->strategy_ != nullptr;};
        void deleteStrategy() { this->strategy_ = nullptr;};
        inline int64_t getStrategy() const { DARABONBA_PTR_GET_DEFAULT(strategy_, 0L) };
        inline Queue& setStrategy(int64_t strategy) { DARABONBA_PTR_SET_VALUE(strategy_, strategy) };


        // vipSupport Field Functions 
        bool hasVipSupport() const { return this->vipSupport_ != nullptr;};
        void deleteVipSupport() { this->vipSupport_ = nullptr;};
        inline int64_t getVipSupport() const { DARABONBA_PTR_GET_DEFAULT(vipSupport_, 0L) };
        inline Queue& setVipSupport(int64_t vipSupport) { DARABONBA_PTR_SET_VALUE(vipSupport_, vipSupport) };


        // weight Field Functions 
        bool hasWeight() const { return this->weight_ != nullptr;};
        void deleteWeight() { this->weight_ = nullptr;};
        inline int64_t getWeight() const { DARABONBA_PTR_GET_DEFAULT(weight_, 0L) };
        inline Queue& setWeight(int64_t weight) { DARABONBA_PTR_SET_VALUE(weight_, weight) };


        // wrapupTime Field Functions 
        bool hasWrapupTime() const { return this->wrapupTime_ != nullptr;};
        void deleteWrapupTime() { this->wrapupTime_ = nullptr;};
        inline int64_t getWrapupTime() const { DARABONBA_PTR_GET_DEFAULT(wrapupTime_, 0L) };
        inline Queue& setWrapupTime(int64_t wrapupTime) { DARABONBA_PTR_SET_VALUE(wrapupTime_, wrapupTime) };


      protected:
        // 在线客服排队位置推送(小于该位置则推送)
        shared_ptr<int64_t> chatLocation_ {};
        // 在线客服最大排队数
        shared_ptr<int64_t> chatMaxWait_ {};
        // 在线客服分配策略，2：轮选；4：随机；5：技能优先
        shared_ptr<int64_t> chatStrategy_ {};
        // 是否允许呼入队列，0: 否；1: 是
        shared_ptr<int64_t> ibAllowed_ {};
        // 队列中为空时是否可以join，1: 置忙，2: 通话中，4: 振铃，8: 无效，16: 整理 如选多种状态则传对应数值的和，如选置忙和通话中，值为 3。默认值为 0 即都未选中
        shared_ptr<int64_t> joinEmpty_ {};
        // 最大并发置忙座席数，开关配置
        shared_ptr<int64_t> maxPauseClientFlag_ {};
        // 最大并发置忙座席数，配置类型
        shared_ptr<int64_t> maxPauseClientType_ {};
        // 最大并发置忙座席数，配置值
        shared_ptr<int64_t> maxPauseClientValue_ {};
        // 最大等待数，设置范围 0-999，0 表示不做任何限制
        shared_ptr<int64_t> maxWait_ {};
        // 座席超时时间，取值范围 20-60 秒
        shared_ptr<int64_t> memberTimeout_ {};
        // 座席名称，只允许输入中文，字母，数字，下划线，长度不超过 20 个字符
        shared_ptr<string> name_ {};
        // 队列工号，4位数字，要求唯一
        shared_ptr<string> qno_ {};
        // 队列内座席及技能值设置。技能值 1-10，技能值 1 的优先级为最高 cno 队列下座席号 penalty该座席在队列中的优先级
        shared_ptr<vector<Queue::QueueMembers>> queueMembers_ {};
        // 队列超时时间，取值范围 30-600 秒
        shared_ptr<int64_t> queueTimeout_ {};
        // 语音报号(是否报座席号)(1:是 0: 否)
        shared_ptr<int64_t> sayCno_ {};
        // 服务水平秒数，取值范围 10-30 秒，低于此时间内接听的认为是高服务水平
        shared_ptr<int64_t> serviceLevel_ {};
        // 呼叫策略，1：顺序，2：轮选，3：平均，4：随机，5：技能优先，6：距上一通呼入空闲时间累计最长，7：技能优先+距上一通呼入空闲时间累计最长，8：距上一通呼入空闲时间累计最长(全队列)，9：技能优先+距上一通呼入空闲时间累计最长(全队列)，10：全队列平均，11：技能优先+轮选，12：最长空闲时长，13：技能优先+当前空闲状态时长最长，14：距上一通通话空闲时间累计最长
        shared_ptr<int64_t> strategy_ {};
        // 支持VIP级别(VIP客户优先)(0:不支持 1:支持)
        shared_ptr<int64_t> vipSupport_ {};
        // 队列优先级，取值范围 1-10 座席属于多个队列时，优先级高的队列的来电将优先接听；数值越高，优先级越高
        shared_ptr<int64_t> weight_ {};
        // 整理时长，取值范围 3-300 秒，整理期间座席不接受新的呼叫
        shared_ptr<int64_t> wrapupTime_ {};
      };

      virtual bool empty() const override { return this->clinkRequestId_ == nullptr
        && this->queue_ == nullptr; };
      // clinkRequestId Field Functions 
      bool hasClinkRequestId() const { return this->clinkRequestId_ != nullptr;};
      void deleteClinkRequestId() { this->clinkRequestId_ = nullptr;};
      inline string getClinkRequestId() const { DARABONBA_PTR_GET_DEFAULT(clinkRequestId_, "") };
      inline Data& setClinkRequestId(string clinkRequestId) { DARABONBA_PTR_SET_VALUE(clinkRequestId_, clinkRequestId) };


      // queue Field Functions 
      bool hasQueue() const { return this->queue_ != nullptr;};
      void deleteQueue() { this->queue_ = nullptr;};
      inline const Data::Queue & getQueue() const { DARABONBA_PTR_GET_CONST(queue_, Data::Queue) };
      inline Data::Queue getQueue() { DARABONBA_PTR_GET(queue_, Data::Queue) };
      inline Data& setQueue(const Data::Queue & queue) { DARABONBA_PTR_SET_VALUE(queue_, queue) };
      inline Data& setQueue(Data::Queue && queue) { DARABONBA_PTR_SET_RVALUE(queue_, queue) };


    protected:
      // 请求 id
      shared_ptr<string> clinkRequestId_ {};
      shared_ptr<Data::Queue> queue_ {};
    };

    virtual bool empty() const override { return this->accessDeniedDetail_ == nullptr
        && this->code_ == nullptr && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr; };
    // accessDeniedDetail Field Functions 
    bool hasAccessDeniedDetail() const { return this->accessDeniedDetail_ != nullptr;};
    void deleteAccessDeniedDetail() { this->accessDeniedDetail_ = nullptr;};
    inline string getAccessDeniedDetail() const { DARABONBA_PTR_GET_DEFAULT(accessDeniedDetail_, "") };
    inline ClinkCreateQueueResponseBody& setAccessDeniedDetail(string accessDeniedDetail) { DARABONBA_PTR_SET_VALUE(accessDeniedDetail_, accessDeniedDetail) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ClinkCreateQueueResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ClinkCreateQueueResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, ClinkCreateQueueResponseBody::Data) };
    inline ClinkCreateQueueResponseBody::Data getData() { DARABONBA_PTR_GET(data_, ClinkCreateQueueResponseBody::Data) };
    inline ClinkCreateQueueResponseBody& setData(const ClinkCreateQueueResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ClinkCreateQueueResponseBody& setData(ClinkCreateQueueResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ClinkCreateQueueResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ClinkCreateQueueResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<string> accessDeniedDetail_ {};
    shared_ptr<string> code_ {};
    shared_ptr<ClinkCreateQueueResponseBody::Data> data_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dyvmsapi20170525
#endif
