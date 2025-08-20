// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_STARTSPARKREPLSESSIONRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_STARTSPARKREPLSESSIONRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class StartSparkReplSessionResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const StartSparkReplSessionResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(AliyunUid, aliyunUid_);
      DARABONBA_PTR_TO_JSON(AttemptId, attemptId_);
      DARABONBA_PTR_TO_JSON(Error, error_);
      DARABONBA_PTR_TO_JSON(SessionId, sessionId_);
      DARABONBA_PTR_TO_JSON(State, state_);
      DARABONBA_PTR_TO_JSON(WebUiAddress, webUiAddress_);
    };
    friend void from_json(const Darabonba::Json& j, StartSparkReplSessionResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(AliyunUid, aliyunUid_);
      DARABONBA_PTR_FROM_JSON(AttemptId, attemptId_);
      DARABONBA_PTR_FROM_JSON(Error, error_);
      DARABONBA_PTR_FROM_JSON(SessionId, sessionId_);
      DARABONBA_PTR_FROM_JSON(State, state_);
      DARABONBA_PTR_FROM_JSON(WebUiAddress, webUiAddress_);
    };
    StartSparkReplSessionResponseBodyData() = default ;
    StartSparkReplSessionResponseBodyData(const StartSparkReplSessionResponseBodyData &) = default ;
    StartSparkReplSessionResponseBodyData(StartSparkReplSessionResponseBodyData &&) = default ;
    StartSparkReplSessionResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~StartSparkReplSessionResponseBodyData() = default ;
    StartSparkReplSessionResponseBodyData& operator=(const StartSparkReplSessionResponseBodyData &) = default ;
    StartSparkReplSessionResponseBodyData& operator=(StartSparkReplSessionResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->aliyunUid_ != nullptr
        && this->attemptId_ != nullptr && this->error_ != nullptr && this->sessionId_ != nullptr && this->state_ != nullptr && this->webUiAddress_ != nullptr; };
    // aliyunUid Field Functions 
    bool hasAliyunUid() const { return this->aliyunUid_ != nullptr;};
    void deleteAliyunUid() { this->aliyunUid_ = nullptr;};
    inline string aliyunUid() const { DARABONBA_PTR_GET_DEFAULT(aliyunUid_, "") };
    inline StartSparkReplSessionResponseBodyData& setAliyunUid(string aliyunUid) { DARABONBA_PTR_SET_VALUE(aliyunUid_, aliyunUid) };


    // attemptId Field Functions 
    bool hasAttemptId() const { return this->attemptId_ != nullptr;};
    void deleteAttemptId() { this->attemptId_ = nullptr;};
    inline string attemptId() const { DARABONBA_PTR_GET_DEFAULT(attemptId_, "") };
    inline StartSparkReplSessionResponseBodyData& setAttemptId(string attemptId) { DARABONBA_PTR_SET_VALUE(attemptId_, attemptId) };


    // error Field Functions 
    bool hasError() const { return this->error_ != nullptr;};
    void deleteError() { this->error_ = nullptr;};
    inline string error() const { DARABONBA_PTR_GET_DEFAULT(error_, "") };
    inline StartSparkReplSessionResponseBodyData& setError(string error) { DARABONBA_PTR_SET_VALUE(error_, error) };


    // sessionId Field Functions 
    bool hasSessionId() const { return this->sessionId_ != nullptr;};
    void deleteSessionId() { this->sessionId_ = nullptr;};
    inline int64_t sessionId() const { DARABONBA_PTR_GET_DEFAULT(sessionId_, 0L) };
    inline StartSparkReplSessionResponseBodyData& setSessionId(int64_t sessionId) { DARABONBA_PTR_SET_VALUE(sessionId_, sessionId) };


    // state Field Functions 
    bool hasState() const { return this->state_ != nullptr;};
    void deleteState() { this->state_ = nullptr;};
    inline string state() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
    inline StartSparkReplSessionResponseBodyData& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


    // webUiAddress Field Functions 
    bool hasWebUiAddress() const { return this->webUiAddress_ != nullptr;};
    void deleteWebUiAddress() { this->webUiAddress_ = nullptr;};
    inline string webUiAddress() const { DARABONBA_PTR_GET_DEFAULT(webUiAddress_, "") };
    inline StartSparkReplSessionResponseBodyData& setWebUiAddress(string webUiAddress) { DARABONBA_PTR_SET_VALUE(webUiAddress_, webUiAddress) };


  protected:
    // The ID of the Alibaba Cloud account that owns the cluster.
    std::shared_ptr<string> aliyunUid_ = nullptr;
    // The attempt ID of the Spark application.
    std::shared_ptr<string> attemptId_ = nullptr;
    // The error message.
    std::shared_ptr<string> error_ = nullptr;
    // The ID of the session that executes the code.
    std::shared_ptr<int64_t> sessionId_ = nullptr;
    // The status of the session. Valid values:
    // 
    // *   IDLE
    // *   BUSY
    // *   DEAD
    std::shared_ptr<string> state_ = nullptr;
    // The URL of the web UI for the Spark application.
    std::shared_ptr<string> webUiAddress_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
