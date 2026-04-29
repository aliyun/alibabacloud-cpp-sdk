// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CLOUDCREATEQUEUESKILLRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CLOUDCREATEQUEUESKILLRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dyvmsapi20170525
{
namespace Models
{
  class CloudCreateQueueSkillResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CloudCreateQueueSkillResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CloudCreateQueueSkillResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CloudCreateQueueSkillResponseBody() = default ;
    CloudCreateQueueSkillResponseBody(const CloudCreateQueueSkillResponseBody &) = default ;
    CloudCreateQueueSkillResponseBody(CloudCreateQueueSkillResponseBody &&) = default ;
    CloudCreateQueueSkillResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CloudCreateQueueSkillResponseBody() = default ;
    CloudCreateQueueSkillResponseBody& operator=(const CloudCreateQueueSkillResponseBody &) = default ;
    CloudCreateQueueSkillResponseBody& operator=(CloudCreateQueueSkillResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(EnterpriseId, enterpriseId_);
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(Qno, qno_);
        DARABONBA_PTR_TO_JSON(QueueId, queueId_);
        DARABONBA_PTR_TO_JSON(SkillId, skillId_);
        DARABONBA_PTR_TO_JSON(SkillLevel, skillLevel_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(EnterpriseId, enterpriseId_);
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(Qno, qno_);
        DARABONBA_PTR_FROM_JSON(QueueId, queueId_);
        DARABONBA_PTR_FROM_JSON(SkillId, skillId_);
        DARABONBA_PTR_FROM_JSON(SkillLevel, skillLevel_);
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
      virtual bool empty() const override { return this->createTime_ == nullptr
        && this->enterpriseId_ == nullptr && this->id_ == nullptr && this->qno_ == nullptr && this->queueId_ == nullptr && this->skillId_ == nullptr
        && this->skillLevel_ == nullptr; };
      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline Data& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // enterpriseId Field Functions 
      bool hasEnterpriseId() const { return this->enterpriseId_ != nullptr;};
      void deleteEnterpriseId() { this->enterpriseId_ = nullptr;};
      inline int64_t getEnterpriseId() const { DARABONBA_PTR_GET_DEFAULT(enterpriseId_, 0L) };
      inline Data& setEnterpriseId(int64_t enterpriseId) { DARABONBA_PTR_SET_VALUE(enterpriseId_, enterpriseId) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
      inline Data& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // qno Field Functions 
      bool hasQno() const { return this->qno_ != nullptr;};
      void deleteQno() { this->qno_ = nullptr;};
      inline int64_t getQno() const { DARABONBA_PTR_GET_DEFAULT(qno_, 0L) };
      inline Data& setQno(int64_t qno) { DARABONBA_PTR_SET_VALUE(qno_, qno) };


      // queueId Field Functions 
      bool hasQueueId() const { return this->queueId_ != nullptr;};
      void deleteQueueId() { this->queueId_ = nullptr;};
      inline int64_t getQueueId() const { DARABONBA_PTR_GET_DEFAULT(queueId_, 0L) };
      inline Data& setQueueId(int64_t queueId) { DARABONBA_PTR_SET_VALUE(queueId_, queueId) };


      // skillId Field Functions 
      bool hasSkillId() const { return this->skillId_ != nullptr;};
      void deleteSkillId() { this->skillId_ = nullptr;};
      inline int64_t getSkillId() const { DARABONBA_PTR_GET_DEFAULT(skillId_, 0L) };
      inline Data& setSkillId(int64_t skillId) { DARABONBA_PTR_SET_VALUE(skillId_, skillId) };


      // skillLevel Field Functions 
      bool hasSkillLevel() const { return this->skillLevel_ != nullptr;};
      void deleteSkillLevel() { this->skillLevel_ = nullptr;};
      inline int64_t getSkillLevel() const { DARABONBA_PTR_GET_DEFAULT(skillLevel_, 0L) };
      inline Data& setSkillLevel(int64_t skillLevel) { DARABONBA_PTR_SET_VALUE(skillLevel_, skillLevel) };


    protected:
      // 创建时间，格式: yyyy-MM-dd HH:mm:ss
      shared_ptr<string> createTime_ {};
      // 企业编号
      shared_ptr<int64_t> enterpriseId_ {};
      // id
      shared_ptr<int64_t> id_ {};
      // 队列号
      shared_ptr<int64_t> qno_ {};
      // 队列id
      shared_ptr<int64_t> queueId_ {};
      // skill的id
      shared_ptr<int64_t> skillId_ {};
      // 技能值
      shared_ptr<int64_t> skillLevel_ {};
    };

    virtual bool empty() const override { return this->accessDeniedDetail_ == nullptr
        && this->code_ == nullptr && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr; };
    // accessDeniedDetail Field Functions 
    bool hasAccessDeniedDetail() const { return this->accessDeniedDetail_ != nullptr;};
    void deleteAccessDeniedDetail() { this->accessDeniedDetail_ = nullptr;};
    inline string getAccessDeniedDetail() const { DARABONBA_PTR_GET_DEFAULT(accessDeniedDetail_, "") };
    inline CloudCreateQueueSkillResponseBody& setAccessDeniedDetail(string accessDeniedDetail) { DARABONBA_PTR_SET_VALUE(accessDeniedDetail_, accessDeniedDetail) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline CloudCreateQueueSkillResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const CloudCreateQueueSkillResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, CloudCreateQueueSkillResponseBody::Data) };
    inline CloudCreateQueueSkillResponseBody::Data getData() { DARABONBA_PTR_GET(data_, CloudCreateQueueSkillResponseBody::Data) };
    inline CloudCreateQueueSkillResponseBody& setData(const CloudCreateQueueSkillResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline CloudCreateQueueSkillResponseBody& setData(CloudCreateQueueSkillResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline CloudCreateQueueSkillResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CloudCreateQueueSkillResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<string> accessDeniedDetail_ {};
    shared_ptr<string> code_ {};
    shared_ptr<CloudCreateQueueSkillResponseBody::Data> data_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dyvmsapi20170525
#endif
