// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSIGNALRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETSIGNALRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiDlc20201203
{
namespace Models
{
  class GetSignalResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSignalResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(GmtCreated, gmtCreated_);
      DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_TO_JSON(JobId, jobId_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(PodNames, podNames_);
      DARABONBA_PTR_TO_JSON(Reason, reason_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Roles, roles_);
      DARABONBA_PTR_TO_JSON(Scope, scope_);
      DARABONBA_PTR_TO_JSON(Signal, signal_);
      DARABONBA_PTR_TO_JSON(SignalId, signalId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, GetSignalResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(GmtCreated, gmtCreated_);
      DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_FROM_JSON(JobId, jobId_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(PodNames, podNames_);
      DARABONBA_PTR_FROM_JSON(Reason, reason_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Roles, roles_);
      DARABONBA_PTR_FROM_JSON(Scope, scope_);
      DARABONBA_PTR_FROM_JSON(Signal, signal_);
      DARABONBA_PTR_FROM_JSON(SignalId, signalId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    GetSignalResponseBody() = default ;
    GetSignalResponseBody(const GetSignalResponseBody &) = default ;
    GetSignalResponseBody(GetSignalResponseBody &&) = default ;
    GetSignalResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSignalResponseBody() = default ;
    GetSignalResponseBody& operator=(const GetSignalResponseBody &) = default ;
    GetSignalResponseBody& operator=(GetSignalResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->gmtCreated_ == nullptr
        && this->gmtModified_ == nullptr && this->jobId_ == nullptr && this->message_ == nullptr && this->podNames_ == nullptr && this->reason_ == nullptr
        && this->requestId_ == nullptr && this->roles_ == nullptr && this->scope_ == nullptr && this->signal_ == nullptr && this->signalId_ == nullptr
        && this->status_ == nullptr; };
    // gmtCreated Field Functions 
    bool hasGmtCreated() const { return this->gmtCreated_ != nullptr;};
    void deleteGmtCreated() { this->gmtCreated_ = nullptr;};
    inline string getGmtCreated() const { DARABONBA_PTR_GET_DEFAULT(gmtCreated_, "") };
    inline GetSignalResponseBody& setGmtCreated(string gmtCreated) { DARABONBA_PTR_SET_VALUE(gmtCreated_, gmtCreated) };


    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline string getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
    inline GetSignalResponseBody& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    // jobId Field Functions 
    bool hasJobId() const { return this->jobId_ != nullptr;};
    void deleteJobId() { this->jobId_ = nullptr;};
    inline string getJobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
    inline GetSignalResponseBody& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetSignalResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // podNames Field Functions 
    bool hasPodNames() const { return this->podNames_ != nullptr;};
    void deletePodNames() { this->podNames_ = nullptr;};
    inline const vector<string> & getPodNames() const { DARABONBA_PTR_GET_CONST(podNames_, vector<string>) };
    inline vector<string> getPodNames() { DARABONBA_PTR_GET(podNames_, vector<string>) };
    inline GetSignalResponseBody& setPodNames(const vector<string> & podNames) { DARABONBA_PTR_SET_VALUE(podNames_, podNames) };
    inline GetSignalResponseBody& setPodNames(vector<string> && podNames) { DARABONBA_PTR_SET_RVALUE(podNames_, podNames) };


    // reason Field Functions 
    bool hasReason() const { return this->reason_ != nullptr;};
    void deleteReason() { this->reason_ = nullptr;};
    inline string getReason() const { DARABONBA_PTR_GET_DEFAULT(reason_, "") };
    inline GetSignalResponseBody& setReason(string reason) { DARABONBA_PTR_SET_VALUE(reason_, reason) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetSignalResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // roles Field Functions 
    bool hasRoles() const { return this->roles_ != nullptr;};
    void deleteRoles() { this->roles_ = nullptr;};
    inline const vector<string> & getRoles() const { DARABONBA_PTR_GET_CONST(roles_, vector<string>) };
    inline vector<string> getRoles() { DARABONBA_PTR_GET(roles_, vector<string>) };
    inline GetSignalResponseBody& setRoles(const vector<string> & roles) { DARABONBA_PTR_SET_VALUE(roles_, roles) };
    inline GetSignalResponseBody& setRoles(vector<string> && roles) { DARABONBA_PTR_SET_RVALUE(roles_, roles) };


    // scope Field Functions 
    bool hasScope() const { return this->scope_ != nullptr;};
    void deleteScope() { this->scope_ = nullptr;};
    inline string getScope() const { DARABONBA_PTR_GET_DEFAULT(scope_, "") };
    inline GetSignalResponseBody& setScope(string scope) { DARABONBA_PTR_SET_VALUE(scope_, scope) };


    // signal Field Functions 
    bool hasSignal() const { return this->signal_ != nullptr;};
    void deleteSignal() { this->signal_ = nullptr;};
    inline string getSignal() const { DARABONBA_PTR_GET_DEFAULT(signal_, "") };
    inline GetSignalResponseBody& setSignal(string signal) { DARABONBA_PTR_SET_VALUE(signal_, signal) };


    // signalId Field Functions 
    bool hasSignalId() const { return this->signalId_ != nullptr;};
    void deleteSignalId() { this->signalId_ = nullptr;};
    inline string getSignalId() const { DARABONBA_PTR_GET_DEFAULT(signalId_, "") };
    inline GetSignalResponseBody& setSignalId(string signalId) { DARABONBA_PTR_SET_VALUE(signalId_, signalId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetSignalResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The creation time.
    shared_ptr<string> gmtCreated_ {};
    // The modification time.
    shared_ptr<string> gmtModified_ {};
    // The job ID.
    shared_ptr<string> jobId_ {};
    // The status description, which contains a summary for each pod (number of successful deliveries, names of failed or pending pods, etc.).
    shared_ptr<string> message_ {};
    // The list of pod names.
    shared_ptr<vector<string>> podNames_ {};
    // The status reason code, such as `Completed`, `SignalFailed`, or `StoppedByJobEnded`.
    shared_ptr<string> reason_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The list of role objects.
    shared_ptr<vector<string>> roles_ {};
    // The delivery scope.
    shared_ptr<string> scope_ {};
    // The signal.
    shared_ptr<string> signal_ {};
    // The signal ID.
    shared_ptr<string> signalId_ {};
    // The signal status.
    shared_ptr<string> status_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiDlc20201203
#endif
