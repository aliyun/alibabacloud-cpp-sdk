// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSPARKREPLSESSIONRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETSPARKREPLSESSIONRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class GetSparkReplSessionResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSparkReplSessionResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Active, active_);
      DARABONBA_PTR_TO_JSON(AliyunUid, aliyunUid_);
      DARABONBA_PTR_TO_JSON(AttemptId, attemptId_);
      DARABONBA_PTR_TO_JSON(Error, error_);
      DARABONBA_PTR_TO_JSON(SessionId, sessionId_);
      DARABONBA_PTR_TO_JSON(State, state_);
      DARABONBA_PTR_TO_JSON(WebUiAddress, webUiAddress_);
    };
    friend void from_json(const Darabonba::Json& j, GetSparkReplSessionResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Active, active_);
      DARABONBA_PTR_FROM_JSON(AliyunUid, aliyunUid_);
      DARABONBA_PTR_FROM_JSON(AttemptId, attemptId_);
      DARABONBA_PTR_FROM_JSON(Error, error_);
      DARABONBA_PTR_FROM_JSON(SessionId, sessionId_);
      DARABONBA_PTR_FROM_JSON(State, state_);
      DARABONBA_PTR_FROM_JSON(WebUiAddress, webUiAddress_);
    };
    GetSparkReplSessionResponseBodyData() = default ;
    GetSparkReplSessionResponseBodyData(const GetSparkReplSessionResponseBodyData &) = default ;
    GetSparkReplSessionResponseBodyData(GetSparkReplSessionResponseBodyData &&) = default ;
    GetSparkReplSessionResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSparkReplSessionResponseBodyData() = default ;
    GetSparkReplSessionResponseBodyData& operator=(const GetSparkReplSessionResponseBodyData &) = default ;
    GetSparkReplSessionResponseBodyData& operator=(GetSparkReplSessionResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->active_ == nullptr
        && return this->aliyunUid_ == nullptr && return this->attemptId_ == nullptr && return this->error_ == nullptr && return this->sessionId_ == nullptr && return this->state_ == nullptr
        && return this->webUiAddress_ == nullptr; };
    // active Field Functions 
    bool hasActive() const { return this->active_ != nullptr;};
    void deleteActive() { this->active_ = nullptr;};
    inline string active() const { DARABONBA_PTR_GET_DEFAULT(active_, "") };
    inline GetSparkReplSessionResponseBodyData& setActive(string active) { DARABONBA_PTR_SET_VALUE(active_, active) };


    // aliyunUid Field Functions 
    bool hasAliyunUid() const { return this->aliyunUid_ != nullptr;};
    void deleteAliyunUid() { this->aliyunUid_ = nullptr;};
    inline string aliyunUid() const { DARABONBA_PTR_GET_DEFAULT(aliyunUid_, "") };
    inline GetSparkReplSessionResponseBodyData& setAliyunUid(string aliyunUid) { DARABONBA_PTR_SET_VALUE(aliyunUid_, aliyunUid) };


    // attemptId Field Functions 
    bool hasAttemptId() const { return this->attemptId_ != nullptr;};
    void deleteAttemptId() { this->attemptId_ = nullptr;};
    inline string attemptId() const { DARABONBA_PTR_GET_DEFAULT(attemptId_, "") };
    inline GetSparkReplSessionResponseBodyData& setAttemptId(string attemptId) { DARABONBA_PTR_SET_VALUE(attemptId_, attemptId) };


    // error Field Functions 
    bool hasError() const { return this->error_ != nullptr;};
    void deleteError() { this->error_ = nullptr;};
    inline string error() const { DARABONBA_PTR_GET_DEFAULT(error_, "") };
    inline GetSparkReplSessionResponseBodyData& setError(string error) { DARABONBA_PTR_SET_VALUE(error_, error) };


    // sessionId Field Functions 
    bool hasSessionId() const { return this->sessionId_ != nullptr;};
    void deleteSessionId() { this->sessionId_ = nullptr;};
    inline int64_t sessionId() const { DARABONBA_PTR_GET_DEFAULT(sessionId_, 0L) };
    inline GetSparkReplSessionResponseBodyData& setSessionId(int64_t sessionId) { DARABONBA_PTR_SET_VALUE(sessionId_, sessionId) };


    // state Field Functions 
    bool hasState() const { return this->state_ != nullptr;};
    void deleteState() { this->state_ = nullptr;};
    inline string state() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
    inline GetSparkReplSessionResponseBodyData& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


    // webUiAddress Field Functions 
    bool hasWebUiAddress() const { return this->webUiAddress_ != nullptr;};
    void deleteWebUiAddress() { this->webUiAddress_ = nullptr;};
    inline string webUiAddress() const { DARABONBA_PTR_GET_DEFAULT(webUiAddress_, "") };
    inline GetSparkReplSessionResponseBodyData& setWebUiAddress(string webUiAddress) { DARABONBA_PTR_SET_VALUE(webUiAddress_, webUiAddress) };


  protected:
    // Indicates whether the session is active. Valid values:
    // 
    // *   true
    // *   false
    std::shared_ptr<string> active_ = nullptr;
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
