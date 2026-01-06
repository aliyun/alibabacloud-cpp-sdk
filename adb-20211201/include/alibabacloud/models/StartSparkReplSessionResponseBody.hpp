// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_STARTSPARKREPLSESSIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_STARTSPARKREPLSESSIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class StartSparkReplSessionResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const StartSparkReplSessionResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, StartSparkReplSessionResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    StartSparkReplSessionResponseBody() = default ;
    StartSparkReplSessionResponseBody(const StartSparkReplSessionResponseBody &) = default ;
    StartSparkReplSessionResponseBody(StartSparkReplSessionResponseBody &&) = default ;
    StartSparkReplSessionResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~StartSparkReplSessionResponseBody() = default ;
    StartSparkReplSessionResponseBody& operator=(const StartSparkReplSessionResponseBody &) = default ;
    StartSparkReplSessionResponseBody& operator=(StartSparkReplSessionResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(AliyunUid, aliyunUid_);
        DARABONBA_PTR_TO_JSON(AttemptId, attemptId_);
        DARABONBA_PTR_TO_JSON(Error, error_);
        DARABONBA_PTR_TO_JSON(SessionId, sessionId_);
        DARABONBA_PTR_TO_JSON(State, state_);
        DARABONBA_PTR_TO_JSON(WebUiAddress, webUiAddress_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(AliyunUid, aliyunUid_);
        DARABONBA_PTR_FROM_JSON(AttemptId, attemptId_);
        DARABONBA_PTR_FROM_JSON(Error, error_);
        DARABONBA_PTR_FROM_JSON(SessionId, sessionId_);
        DARABONBA_PTR_FROM_JSON(State, state_);
        DARABONBA_PTR_FROM_JSON(WebUiAddress, webUiAddress_);
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
      virtual bool empty() const override { return this->aliyunUid_ == nullptr
        && this->attemptId_ == nullptr && this->error_ == nullptr && this->sessionId_ == nullptr && this->state_ == nullptr && this->webUiAddress_ == nullptr; };
      // aliyunUid Field Functions 
      bool hasAliyunUid() const { return this->aliyunUid_ != nullptr;};
      void deleteAliyunUid() { this->aliyunUid_ = nullptr;};
      inline string getAliyunUid() const { DARABONBA_PTR_GET_DEFAULT(aliyunUid_, "") };
      inline Data& setAliyunUid(string aliyunUid) { DARABONBA_PTR_SET_VALUE(aliyunUid_, aliyunUid) };


      // attemptId Field Functions 
      bool hasAttemptId() const { return this->attemptId_ != nullptr;};
      void deleteAttemptId() { this->attemptId_ = nullptr;};
      inline string getAttemptId() const { DARABONBA_PTR_GET_DEFAULT(attemptId_, "") };
      inline Data& setAttemptId(string attemptId) { DARABONBA_PTR_SET_VALUE(attemptId_, attemptId) };


      // error Field Functions 
      bool hasError() const { return this->error_ != nullptr;};
      void deleteError() { this->error_ = nullptr;};
      inline string getError() const { DARABONBA_PTR_GET_DEFAULT(error_, "") };
      inline Data& setError(string error) { DARABONBA_PTR_SET_VALUE(error_, error) };


      // sessionId Field Functions 
      bool hasSessionId() const { return this->sessionId_ != nullptr;};
      void deleteSessionId() { this->sessionId_ = nullptr;};
      inline int64_t getSessionId() const { DARABONBA_PTR_GET_DEFAULT(sessionId_, 0L) };
      inline Data& setSessionId(int64_t sessionId) { DARABONBA_PTR_SET_VALUE(sessionId_, sessionId) };


      // state Field Functions 
      bool hasState() const { return this->state_ != nullptr;};
      void deleteState() { this->state_ = nullptr;};
      inline string getState() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
      inline Data& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


      // webUiAddress Field Functions 
      bool hasWebUiAddress() const { return this->webUiAddress_ != nullptr;};
      void deleteWebUiAddress() { this->webUiAddress_ = nullptr;};
      inline string getWebUiAddress() const { DARABONBA_PTR_GET_DEFAULT(webUiAddress_, "") };
      inline Data& setWebUiAddress(string webUiAddress) { DARABONBA_PTR_SET_VALUE(webUiAddress_, webUiAddress) };


    protected:
      // The ID of the Alibaba Cloud account that owns the cluster.
      shared_ptr<string> aliyunUid_ {};
      // The attempt ID of the Spark application.
      shared_ptr<string> attemptId_ {};
      // The error message.
      shared_ptr<string> error_ {};
      // The ID of the session that executes the code.
      shared_ptr<int64_t> sessionId_ {};
      // The status of the session. Valid values:
      // 
      // *   IDLE
      // *   BUSY
      // *   DEAD
      shared_ptr<string> state_ {};
      // The URL of the web UI for the Spark application.
      shared_ptr<string> webUiAddress_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const StartSparkReplSessionResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, StartSparkReplSessionResponseBody::Data) };
    inline StartSparkReplSessionResponseBody::Data getData() { DARABONBA_PTR_GET(data_, StartSparkReplSessionResponseBody::Data) };
    inline StartSparkReplSessionResponseBody& setData(const StartSparkReplSessionResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline StartSparkReplSessionResponseBody& setData(StartSparkReplSessionResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline StartSparkReplSessionResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The returned data.
    shared_ptr<StartSparkReplSessionResponseBody::Data> data_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
