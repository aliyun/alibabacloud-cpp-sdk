// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETQUEUERATERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETQUEUERATERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Amqp20190901
{
namespace Models
{
  class GetQueueRateResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetQueueRateResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetQueueRateResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetQueueRateResponseBody() = default ;
    GetQueueRateResponseBody(const GetQueueRateResponseBody &) = default ;
    GetQueueRateResponseBody(GetQueueRateResponseBody &&) = default ;
    GetQueueRateResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetQueueRateResponseBody() = default ;
    GetQueueRateResponseBody& operator=(const GetQueueRateResponseBody &) = default ;
    GetQueueRateResponseBody& operator=(GetQueueRateResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(InQps, inQps_);
        DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(OutQps, outQps_);
        DARABONBA_PTR_TO_JSON(QueueName, queueName_);
        DARABONBA_PTR_TO_JSON(VhostName, vhostName_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(InQps, inQps_);
        DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(OutQps, outQps_);
        DARABONBA_PTR_FROM_JSON(QueueName, queueName_);
        DARABONBA_PTR_FROM_JSON(VhostName, vhostName_);
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
      virtual bool empty() const override { return this->inQps_ == nullptr
        && this->instanceId_ == nullptr && this->outQps_ == nullptr && this->queueName_ == nullptr && this->vhostName_ == nullptr; };
      // inQps Field Functions 
      bool hasInQps() const { return this->inQps_ != nullptr;};
      void deleteInQps() { this->inQps_ = nullptr;};
      inline int64_t getInQps() const { DARABONBA_PTR_GET_DEFAULT(inQps_, 0L) };
      inline Data& setInQps(int64_t inQps) { DARABONBA_PTR_SET_VALUE(inQps_, inQps) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline Data& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // outQps Field Functions 
      bool hasOutQps() const { return this->outQps_ != nullptr;};
      void deleteOutQps() { this->outQps_ = nullptr;};
      inline int64_t getOutQps() const { DARABONBA_PTR_GET_DEFAULT(outQps_, 0L) };
      inline Data& setOutQps(int64_t outQps) { DARABONBA_PTR_SET_VALUE(outQps_, outQps) };


      // queueName Field Functions 
      bool hasQueueName() const { return this->queueName_ != nullptr;};
      void deleteQueueName() { this->queueName_ = nullptr;};
      inline string getQueueName() const { DARABONBA_PTR_GET_DEFAULT(queueName_, "") };
      inline Data& setQueueName(string queueName) { DARABONBA_PTR_SET_VALUE(queueName_, queueName) };


      // vhostName Field Functions 
      bool hasVhostName() const { return this->vhostName_ != nullptr;};
      void deleteVhostName() { this->vhostName_ = nullptr;};
      inline string getVhostName() const { DARABONBA_PTR_GET_DEFAULT(vhostName_, "") };
      inline Data& setVhostName(string vhostName) { DARABONBA_PTR_SET_VALUE(vhostName_, vhostName) };


    protected:
      shared_ptr<int64_t> inQps_ {};
      shared_ptr<string> instanceId_ {};
      shared_ptr<int64_t> outQps_ {};
      shared_ptr<string> queueName_ {};
      shared_ptr<string> vhostName_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline GetQueueRateResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<GetQueueRateResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<GetQueueRateResponseBody::Data>) };
    inline vector<GetQueueRateResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<GetQueueRateResponseBody::Data>) };
    inline GetQueueRateResponseBody& setData(const vector<GetQueueRateResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetQueueRateResponseBody& setData(vector<GetQueueRateResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetQueueRateResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetQueueRateResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetQueueRateResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<int32_t> code_ {};
    shared_ptr<vector<GetQueueRateResponseBody::Data>> data_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Amqp20190901
#endif
