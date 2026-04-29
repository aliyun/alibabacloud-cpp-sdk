// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CLOUDLISTQUEUERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CLOUDLISTQUEUERESPONSEBODY_HPP_
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
  class CloudListQueueResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CloudListQueueResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CloudListQueueResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CloudListQueueResponseBody() = default ;
    CloudListQueueResponseBody(const CloudListQueueResponseBody &) = default ;
    CloudListQueueResponseBody(CloudListQueueResponseBody &&) = default ;
    CloudListQueueResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CloudListQueueResponseBody() = default ;
    CloudListQueueResponseBody& operator=(const CloudListQueueResponseBody &) = default ;
    CloudListQueueResponseBody& operator=(CloudListQueueResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(List, list_);
        DARABONBA_PTR_TO_JSON(Total, total_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(List, list_);
        DARABONBA_PTR_FROM_JSON(Total, total_);
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
      class List : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const List& obj) { 
          DARABONBA_PTR_TO_JSON(AnnouncePosition, announcePosition_);
          DARABONBA_PTR_TO_JSON(AnnouncePositionFrequency, announcePositionFrequency_);
          DARABONBA_PTR_TO_JSON(AnnouncePositionParam, announcePositionParam_);
          DARABONBA_PTR_TO_JSON(AnnouncePositionYouarenext, announcePositionYouarenext_);
          DARABONBA_PTR_TO_JSON(AnnounceSound, announceSound_);
          DARABONBA_PTR_TO_JSON(AnnounceSoundFile, announceSoundFile_);
          DARABONBA_PTR_TO_JSON(AnnounceSoundFrequency, announceSoundFrequency_);
          DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
          DARABONBA_PTR_TO_JSON(Description, description_);
          DARABONBA_PTR_TO_JSON(EnterpriseId, enterpriseId_);
          DARABONBA_PTR_TO_JSON(Id, id_);
          DARABONBA_PTR_TO_JSON(JoinEmpty, joinEmpty_);
          DARABONBA_PTR_TO_JSON(MaxLen, maxLen_);
          DARABONBA_PTR_TO_JSON(MemberTimeout, memberTimeout_);
          DARABONBA_PTR_TO_JSON(MusicClass, musicClass_);
          DARABONBA_PTR_TO_JSON(Qno, qno_);
          DARABONBA_PTR_TO_JSON(QueueTimeout, queueTimeout_);
          DARABONBA_PTR_TO_JSON(Retry, retry_);
          DARABONBA_PTR_TO_JSON(SayAgentno, sayAgentno_);
          DARABONBA_PTR_TO_JSON(ServiceLevel, serviceLevel_);
          DARABONBA_PTR_TO_JSON(Strategy, strategy_);
          DARABONBA_PTR_TO_JSON(VipSupport, vipSupport_);
          DARABONBA_PTR_TO_JSON(Weight, weight_);
          DARABONBA_PTR_TO_JSON(WrapupTime, wrapupTime_);
        };
        friend void from_json(const Darabonba::Json& j, List& obj) { 
          DARABONBA_PTR_FROM_JSON(AnnouncePosition, announcePosition_);
          DARABONBA_PTR_FROM_JSON(AnnouncePositionFrequency, announcePositionFrequency_);
          DARABONBA_PTR_FROM_JSON(AnnouncePositionParam, announcePositionParam_);
          DARABONBA_PTR_FROM_JSON(AnnouncePositionYouarenext, announcePositionYouarenext_);
          DARABONBA_PTR_FROM_JSON(AnnounceSound, announceSound_);
          DARABONBA_PTR_FROM_JSON(AnnounceSoundFile, announceSoundFile_);
          DARABONBA_PTR_FROM_JSON(AnnounceSoundFrequency, announceSoundFrequency_);
          DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
          DARABONBA_PTR_FROM_JSON(Description, description_);
          DARABONBA_PTR_FROM_JSON(EnterpriseId, enterpriseId_);
          DARABONBA_PTR_FROM_JSON(Id, id_);
          DARABONBA_PTR_FROM_JSON(JoinEmpty, joinEmpty_);
          DARABONBA_PTR_FROM_JSON(MaxLen, maxLen_);
          DARABONBA_PTR_FROM_JSON(MemberTimeout, memberTimeout_);
          DARABONBA_PTR_FROM_JSON(MusicClass, musicClass_);
          DARABONBA_PTR_FROM_JSON(Qno, qno_);
          DARABONBA_PTR_FROM_JSON(QueueTimeout, queueTimeout_);
          DARABONBA_PTR_FROM_JSON(Retry, retry_);
          DARABONBA_PTR_FROM_JSON(SayAgentno, sayAgentno_);
          DARABONBA_PTR_FROM_JSON(ServiceLevel, serviceLevel_);
          DARABONBA_PTR_FROM_JSON(Strategy, strategy_);
          DARABONBA_PTR_FROM_JSON(VipSupport, vipSupport_);
          DARABONBA_PTR_FROM_JSON(Weight, weight_);
          DARABONBA_PTR_FROM_JSON(WrapupTime, wrapupTime_);
        };
        List() = default ;
        List(const List &) = default ;
        List(List &&) = default ;
        List(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~List() = default ;
        List& operator=(const List &) = default ;
        List& operator=(List &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->announcePosition_ == nullptr
        && this->announcePositionFrequency_ == nullptr && this->announcePositionParam_ == nullptr && this->announcePositionYouarenext_ == nullptr && this->announceSound_ == nullptr && this->announceSoundFile_ == nullptr
        && this->announceSoundFrequency_ == nullptr && this->createTime_ == nullptr && this->description_ == nullptr && this->enterpriseId_ == nullptr && this->id_ == nullptr
        && this->joinEmpty_ == nullptr && this->maxLen_ == nullptr && this->memberTimeout_ == nullptr && this->musicClass_ == nullptr && this->qno_ == nullptr
        && this->queueTimeout_ == nullptr && this->retry_ == nullptr && this->sayAgentno_ == nullptr && this->serviceLevel_ == nullptr && this->strategy_ == nullptr
        && this->vipSupport_ == nullptr && this->weight_ == nullptr && this->wrapupTime_ == nullptr; };
        // announcePosition Field Functions 
        bool hasAnnouncePosition() const { return this->announcePosition_ != nullptr;};
        void deleteAnnouncePosition() { this->announcePosition_ = nullptr;};
        inline int64_t getAnnouncePosition() const { DARABONBA_PTR_GET_DEFAULT(announcePosition_, 0L) };
        inline List& setAnnouncePosition(int64_t announcePosition) { DARABONBA_PTR_SET_VALUE(announcePosition_, announcePosition) };


        // announcePositionFrequency Field Functions 
        bool hasAnnouncePositionFrequency() const { return this->announcePositionFrequency_ != nullptr;};
        void deleteAnnouncePositionFrequency() { this->announcePositionFrequency_ = nullptr;};
        inline int64_t getAnnouncePositionFrequency() const { DARABONBA_PTR_GET_DEFAULT(announcePositionFrequency_, 0L) };
        inline List& setAnnouncePositionFrequency(int64_t announcePositionFrequency) { DARABONBA_PTR_SET_VALUE(announcePositionFrequency_, announcePositionFrequency) };


        // announcePositionParam Field Functions 
        bool hasAnnouncePositionParam() const { return this->announcePositionParam_ != nullptr;};
        void deleteAnnouncePositionParam() { this->announcePositionParam_ = nullptr;};
        inline int64_t getAnnouncePositionParam() const { DARABONBA_PTR_GET_DEFAULT(announcePositionParam_, 0L) };
        inline List& setAnnouncePositionParam(int64_t announcePositionParam) { DARABONBA_PTR_SET_VALUE(announcePositionParam_, announcePositionParam) };


        // announcePositionYouarenext Field Functions 
        bool hasAnnouncePositionYouarenext() const { return this->announcePositionYouarenext_ != nullptr;};
        void deleteAnnouncePositionYouarenext() { this->announcePositionYouarenext_ = nullptr;};
        inline int64_t getAnnouncePositionYouarenext() const { DARABONBA_PTR_GET_DEFAULT(announcePositionYouarenext_, 0L) };
        inline List& setAnnouncePositionYouarenext(int64_t announcePositionYouarenext) { DARABONBA_PTR_SET_VALUE(announcePositionYouarenext_, announcePositionYouarenext) };


        // announceSound Field Functions 
        bool hasAnnounceSound() const { return this->announceSound_ != nullptr;};
        void deleteAnnounceSound() { this->announceSound_ = nullptr;};
        inline int64_t getAnnounceSound() const { DARABONBA_PTR_GET_DEFAULT(announceSound_, 0L) };
        inline List& setAnnounceSound(int64_t announceSound) { DARABONBA_PTR_SET_VALUE(announceSound_, announceSound) };


        // announceSoundFile Field Functions 
        bool hasAnnounceSoundFile() const { return this->announceSoundFile_ != nullptr;};
        void deleteAnnounceSoundFile() { this->announceSoundFile_ = nullptr;};
        inline string getAnnounceSoundFile() const { DARABONBA_PTR_GET_DEFAULT(announceSoundFile_, "") };
        inline List& setAnnounceSoundFile(string announceSoundFile) { DARABONBA_PTR_SET_VALUE(announceSoundFile_, announceSoundFile) };


        // announceSoundFrequency Field Functions 
        bool hasAnnounceSoundFrequency() const { return this->announceSoundFrequency_ != nullptr;};
        void deleteAnnounceSoundFrequency() { this->announceSoundFrequency_ = nullptr;};
        inline int64_t getAnnounceSoundFrequency() const { DARABONBA_PTR_GET_DEFAULT(announceSoundFrequency_, 0L) };
        inline List& setAnnounceSoundFrequency(int64_t announceSoundFrequency) { DARABONBA_PTR_SET_VALUE(announceSoundFrequency_, announceSoundFrequency) };


        // createTime Field Functions 
        bool hasCreateTime() const { return this->createTime_ != nullptr;};
        void deleteCreateTime() { this->createTime_ = nullptr;};
        inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
        inline List& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline List& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // enterpriseId Field Functions 
        bool hasEnterpriseId() const { return this->enterpriseId_ != nullptr;};
        void deleteEnterpriseId() { this->enterpriseId_ = nullptr;};
        inline int64_t getEnterpriseId() const { DARABONBA_PTR_GET_DEFAULT(enterpriseId_, 0L) };
        inline List& setEnterpriseId(int64_t enterpriseId) { DARABONBA_PTR_SET_VALUE(enterpriseId_, enterpriseId) };


        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
        inline List& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // joinEmpty Field Functions 
        bool hasJoinEmpty() const { return this->joinEmpty_ != nullptr;};
        void deleteJoinEmpty() { this->joinEmpty_ = nullptr;};
        inline int64_t getJoinEmpty() const { DARABONBA_PTR_GET_DEFAULT(joinEmpty_, 0L) };
        inline List& setJoinEmpty(int64_t joinEmpty) { DARABONBA_PTR_SET_VALUE(joinEmpty_, joinEmpty) };


        // maxLen Field Functions 
        bool hasMaxLen() const { return this->maxLen_ != nullptr;};
        void deleteMaxLen() { this->maxLen_ = nullptr;};
        inline int64_t getMaxLen() const { DARABONBA_PTR_GET_DEFAULT(maxLen_, 0L) };
        inline List& setMaxLen(int64_t maxLen) { DARABONBA_PTR_SET_VALUE(maxLen_, maxLen) };


        // memberTimeout Field Functions 
        bool hasMemberTimeout() const { return this->memberTimeout_ != nullptr;};
        void deleteMemberTimeout() { this->memberTimeout_ = nullptr;};
        inline int64_t getMemberTimeout() const { DARABONBA_PTR_GET_DEFAULT(memberTimeout_, 0L) };
        inline List& setMemberTimeout(int64_t memberTimeout) { DARABONBA_PTR_SET_VALUE(memberTimeout_, memberTimeout) };


        // musicClass Field Functions 
        bool hasMusicClass() const { return this->musicClass_ != nullptr;};
        void deleteMusicClass() { this->musicClass_ = nullptr;};
        inline string getMusicClass() const { DARABONBA_PTR_GET_DEFAULT(musicClass_, "") };
        inline List& setMusicClass(string musicClass) { DARABONBA_PTR_SET_VALUE(musicClass_, musicClass) };


        // qno Field Functions 
        bool hasQno() const { return this->qno_ != nullptr;};
        void deleteQno() { this->qno_ = nullptr;};
        inline string getQno() const { DARABONBA_PTR_GET_DEFAULT(qno_, "") };
        inline List& setQno(string qno) { DARABONBA_PTR_SET_VALUE(qno_, qno) };


        // queueTimeout Field Functions 
        bool hasQueueTimeout() const { return this->queueTimeout_ != nullptr;};
        void deleteQueueTimeout() { this->queueTimeout_ = nullptr;};
        inline int64_t getQueueTimeout() const { DARABONBA_PTR_GET_DEFAULT(queueTimeout_, 0L) };
        inline List& setQueueTimeout(int64_t queueTimeout) { DARABONBA_PTR_SET_VALUE(queueTimeout_, queueTimeout) };


        // retry Field Functions 
        bool hasRetry() const { return this->retry_ != nullptr;};
        void deleteRetry() { this->retry_ = nullptr;};
        inline int64_t getRetry() const { DARABONBA_PTR_GET_DEFAULT(retry_, 0L) };
        inline List& setRetry(int64_t retry) { DARABONBA_PTR_SET_VALUE(retry_, retry) };


        // sayAgentno Field Functions 
        bool hasSayAgentno() const { return this->sayAgentno_ != nullptr;};
        void deleteSayAgentno() { this->sayAgentno_ = nullptr;};
        inline bool getSayAgentno() const { DARABONBA_PTR_GET_DEFAULT(sayAgentno_, false) };
        inline List& setSayAgentno(bool sayAgentno) { DARABONBA_PTR_SET_VALUE(sayAgentno_, sayAgentno) };


        // serviceLevel Field Functions 
        bool hasServiceLevel() const { return this->serviceLevel_ != nullptr;};
        void deleteServiceLevel() { this->serviceLevel_ = nullptr;};
        inline int64_t getServiceLevel() const { DARABONBA_PTR_GET_DEFAULT(serviceLevel_, 0L) };
        inline List& setServiceLevel(int64_t serviceLevel) { DARABONBA_PTR_SET_VALUE(serviceLevel_, serviceLevel) };


        // strategy Field Functions 
        bool hasStrategy() const { return this->strategy_ != nullptr;};
        void deleteStrategy() { this->strategy_ = nullptr;};
        inline string getStrategy() const { DARABONBA_PTR_GET_DEFAULT(strategy_, "") };
        inline List& setStrategy(string strategy) { DARABONBA_PTR_SET_VALUE(strategy_, strategy) };


        // vipSupport Field Functions 
        bool hasVipSupport() const { return this->vipSupport_ != nullptr;};
        void deleteVipSupport() { this->vipSupport_ = nullptr;};
        inline int64_t getVipSupport() const { DARABONBA_PTR_GET_DEFAULT(vipSupport_, 0L) };
        inline List& setVipSupport(int64_t vipSupport) { DARABONBA_PTR_SET_VALUE(vipSupport_, vipSupport) };


        // weight Field Functions 
        bool hasWeight() const { return this->weight_ != nullptr;};
        void deleteWeight() { this->weight_ = nullptr;};
        inline int64_t getWeight() const { DARABONBA_PTR_GET_DEFAULT(weight_, 0L) };
        inline List& setWeight(int64_t weight) { DARABONBA_PTR_SET_VALUE(weight_, weight) };


        // wrapupTime Field Functions 
        bool hasWrapupTime() const { return this->wrapupTime_ != nullptr;};
        void deleteWrapupTime() { this->wrapupTime_ = nullptr;};
        inline int64_t getWrapupTime() const { DARABONBA_PTR_GET_DEFAULT(wrapupTime_, 0L) };
        inline List& setWrapupTime(int64_t wrapupTime) { DARABONBA_PTR_SET_VALUE(wrapupTime_, wrapupTime) };


      protected:
        // 位置播报 0关闭 1大于announce_position_param时播放 2小于等于announce_position_param时播放
        shared_ptr<int64_t> announcePosition_ {};
        // 位置播报周期，秒数
        shared_ptr<int64_t> announcePositionFrequency_ {};
        // 多余少余n个时播报，必须大于等于2
        shared_ptr<int64_t> announcePositionParam_ {};
        // 是否播报\\"您是下一位\\",0关闭，1开启
        shared_ptr<int64_t> announcePositionYouarenext_ {};
        // 播报固定语音 0关闭 1打开
        shared_ptr<int64_t> announceSound_ {};
        // 固定语音文件
        shared_ptr<string> announceSoundFile_ {};
        // 播放固定语音周期，秒数
        shared_ptr<int64_t> announceSoundFrequency_ {};
        // 创建时间，格式: yyyy-MM-dd HH:mm:ss
        shared_ptr<string> createTime_ {};
        // 队列名
        shared_ptr<string> description_ {};
        // 企业编号
        shared_ptr<int64_t> enterpriseId_ {};
        // 队列id
        shared_ptr<int64_t> id_ {};
        // 队列中为空时是否可以join，取值：1：置忙 2：通话中 4：振铃 8：无效 16：整理
        shared_ptr<int64_t> joinEmpty_ {};
        // 最大等待数，设置范围0-999，0表示不做任何限制
        shared_ptr<int64_t> maxLen_ {};
        // 座席超时时间，取值范围20-60秒，默认25秒
        shared_ptr<int64_t> memberTimeout_ {};
        // 等待语音class
        shared_ptr<string> musicClass_ {};
        // 队列号
        shared_ptr<string> qno_ {};
        // 队列超时时间，取值范围5-600秒，默认600秒
        shared_ptr<int64_t> queueTimeout_ {};
        // 座席超时无应答,呼叫下一座席的延迟秒数
        shared_ptr<int64_t> retry_ {};
        // 语音报号，true:播报，false:不播报
        shared_ptr<bool> sayAgentno_ {};
        // 服务水平秒数，低于此时间内接听的认为是高服务水平
        shared_ptr<int64_t> serviceLevel_ {};
        // 呼叫策略：rrordered:技能优先 rrmemory:轮选 fewestcalls:平均 random:随机 linear:顺序 leastrecent:最长空闲时间
        shared_ptr<string> strategy_ {};
        // 是否支持vip，1:支持，0:不支持
        shared_ptr<int64_t> vipSupport_ {};
        // 队列优先级，取值范围1-10，数值越高，优先级越高
        shared_ptr<int64_t> weight_ {};
        // 整理时间，取值范围3-3600秒
        shared_ptr<int64_t> wrapupTime_ {};
      };

      virtual bool empty() const override { return this->list_ == nullptr
        && this->total_ == nullptr; };
      // list Field Functions 
      bool hasList() const { return this->list_ != nullptr;};
      void deleteList() { this->list_ = nullptr;};
      inline const vector<Data::List> & getList() const { DARABONBA_PTR_GET_CONST(list_, vector<Data::List>) };
      inline vector<Data::List> getList() { DARABONBA_PTR_GET(list_, vector<Data::List>) };
      inline Data& setList(const vector<Data::List> & list) { DARABONBA_PTR_SET_VALUE(list_, list) };
      inline Data& setList(vector<Data::List> && list) { DARABONBA_PTR_SET_RVALUE(list_, list) };


      // total Field Functions 
      bool hasTotal() const { return this->total_ != nullptr;};
      void deleteTotal() { this->total_ = nullptr;};
      inline int64_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0L) };
      inline Data& setTotal(int64_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


    protected:
      // 队列列表
      shared_ptr<vector<Data::List>> list_ {};
      // 总条数
      shared_ptr<int64_t> total_ {};
    };

    virtual bool empty() const override { return this->accessDeniedDetail_ == nullptr
        && this->code_ == nullptr && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr; };
    // accessDeniedDetail Field Functions 
    bool hasAccessDeniedDetail() const { return this->accessDeniedDetail_ != nullptr;};
    void deleteAccessDeniedDetail() { this->accessDeniedDetail_ = nullptr;};
    inline string getAccessDeniedDetail() const { DARABONBA_PTR_GET_DEFAULT(accessDeniedDetail_, "") };
    inline CloudListQueueResponseBody& setAccessDeniedDetail(string accessDeniedDetail) { DARABONBA_PTR_SET_VALUE(accessDeniedDetail_, accessDeniedDetail) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline CloudListQueueResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const CloudListQueueResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, CloudListQueueResponseBody::Data) };
    inline CloudListQueueResponseBody::Data getData() { DARABONBA_PTR_GET(data_, CloudListQueueResponseBody::Data) };
    inline CloudListQueueResponseBody& setData(const CloudListQueueResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline CloudListQueueResponseBody& setData(CloudListQueueResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline CloudListQueueResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CloudListQueueResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<string> accessDeniedDetail_ {};
    shared_ptr<string> code_ {};
    shared_ptr<CloudListQueueResponseBody::Data> data_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dyvmsapi20170525
#endif
