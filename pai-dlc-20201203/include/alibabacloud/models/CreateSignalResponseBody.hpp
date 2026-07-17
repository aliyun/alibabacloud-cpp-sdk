// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESIGNALRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATESIGNALRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiDlc20201203
{
namespace Models
{
  class CreateSignalResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateSignalResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(JobId, jobId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Signal, signal_);
      DARABONBA_PTR_TO_JSON(SignalId, signalId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, CreateSignalResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(JobId, jobId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Signal, signal_);
      DARABONBA_PTR_FROM_JSON(SignalId, signalId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    CreateSignalResponseBody() = default ;
    CreateSignalResponseBody(const CreateSignalResponseBody &) = default ;
    CreateSignalResponseBody(CreateSignalResponseBody &&) = default ;
    CreateSignalResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateSignalResponseBody() = default ;
    CreateSignalResponseBody& operator=(const CreateSignalResponseBody &) = default ;
    CreateSignalResponseBody& operator=(CreateSignalResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->jobId_ == nullptr
        && this->requestId_ == nullptr && this->signal_ == nullptr && this->signalId_ == nullptr && this->status_ == nullptr; };
    // jobId Field Functions 
    bool hasJobId() const { return this->jobId_ != nullptr;};
    void deleteJobId() { this->jobId_ = nullptr;};
    inline string getJobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
    inline CreateSignalResponseBody& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateSignalResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // signal Field Functions 
    bool hasSignal() const { return this->signal_ != nullptr;};
    void deleteSignal() { this->signal_ = nullptr;};
    inline string getSignal() const { DARABONBA_PTR_GET_DEFAULT(signal_, "") };
    inline CreateSignalResponseBody& setSignal(string signal) { DARABONBA_PTR_SET_VALUE(signal_, signal) };


    // signalId Field Functions 
    bool hasSignalId() const { return this->signalId_ != nullptr;};
    void deleteSignalId() { this->signalId_ = nullptr;};
    inline string getSignalId() const { DARABONBA_PTR_GET_DEFAULT(signalId_, "") };
    inline CreateSignalResponseBody& setSignalId(string signalId) { DARABONBA_PTR_SET_VALUE(signalId_, signalId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline CreateSignalResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    shared_ptr<string> jobId_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<string> signal_ {};
    shared_ptr<string> signalId_ {};
    shared_ptr<string> status_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiDlc20201203
#endif
