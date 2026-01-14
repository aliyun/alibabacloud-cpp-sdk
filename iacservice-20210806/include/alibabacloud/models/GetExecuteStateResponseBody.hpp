// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETEXECUTESTATERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETEXECUTESTATERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IaCService20210806
{
namespace Models
{
  class GetExecuteStateResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetExecuteStateResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(errorMessage, errorMessage_);
      DARABONBA_ANY_TO_JSON(logFile, logFile_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(state, state_);
      DARABONBA_PTR_TO_JSON(status, status_);
    };
    friend void from_json(const Darabonba::Json& j, GetExecuteStateResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(errorMessage, errorMessage_);
      DARABONBA_ANY_FROM_JSON(logFile, logFile_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(state, state_);
      DARABONBA_PTR_FROM_JSON(status, status_);
    };
    GetExecuteStateResponseBody() = default ;
    GetExecuteStateResponseBody(const GetExecuteStateResponseBody &) = default ;
    GetExecuteStateResponseBody(GetExecuteStateResponseBody &&) = default ;
    GetExecuteStateResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetExecuteStateResponseBody() = default ;
    GetExecuteStateResponseBody& operator=(const GetExecuteStateResponseBody &) = default ;
    GetExecuteStateResponseBody& operator=(GetExecuteStateResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->errorMessage_ == nullptr
        && this->logFile_ == nullptr && this->requestId_ == nullptr && this->state_ == nullptr && this->status_ == nullptr; };
    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline GetExecuteStateResponseBody& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // logFile Field Functions 
    bool hasLogFile() const { return this->logFile_ != nullptr;};
    void deleteLogFile() { this->logFile_ = nullptr;};
    inline     const Darabonba::Json & getLogFile() const { DARABONBA_GET(logFile_) };
    Darabonba::Json & getLogFile() { DARABONBA_GET(logFile_) };
    inline GetExecuteStateResponseBody& setLogFile(const Darabonba::Json & logFile) { DARABONBA_SET_VALUE(logFile_, logFile) };
    inline GetExecuteStateResponseBody& setLogFile(Darabonba::Json && logFile) { DARABONBA_SET_RVALUE(logFile_, logFile) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetExecuteStateResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // state Field Functions 
    bool hasState() const { return this->state_ != nullptr;};
    void deleteState() { this->state_ = nullptr;};
    inline string getState() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
    inline GetExecuteStateResponseBody& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetExecuteStateResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    shared_ptr<string> errorMessage_ {};
    Darabonba::Json logFile_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
    shared_ptr<string> state_ {};
    shared_ptr<string> status_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IaCService20210806
#endif
