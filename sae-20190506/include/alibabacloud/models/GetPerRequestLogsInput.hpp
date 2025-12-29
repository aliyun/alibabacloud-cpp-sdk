// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPERREQUESTLOGSINPUT_HPP_
#define ALIBABACLOUD_MODELS_GETPERREQUESTLOGSINPUT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sae20190506
{
namespace Models
{
  class GetPerRequestLogsInput : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetPerRequestLogsInput& obj) { 
      DARABONBA_PTR_TO_JSON(endTime, endTime_);
      DARABONBA_PTR_TO_JSON(errorType, errorType_);
      DARABONBA_PTR_TO_JSON(forwardLine, forwardLine_);
      DARABONBA_PTR_TO_JSON(instanceID, instanceID_);
      DARABONBA_PTR_TO_JSON(isColdStart, isColdStart_);
      DARABONBA_PTR_TO_JSON(requestID, requestID_);
      DARABONBA_PTR_TO_JSON(startTime, startTime_);
      DARABONBA_PTR_TO_JSON(timestamp, timestamp_);
    };
    friend void from_json(const Darabonba::Json& j, GetPerRequestLogsInput& obj) { 
      DARABONBA_PTR_FROM_JSON(endTime, endTime_);
      DARABONBA_PTR_FROM_JSON(errorType, errorType_);
      DARABONBA_PTR_FROM_JSON(forwardLine, forwardLine_);
      DARABONBA_PTR_FROM_JSON(instanceID, instanceID_);
      DARABONBA_PTR_FROM_JSON(isColdStart, isColdStart_);
      DARABONBA_PTR_FROM_JSON(requestID, requestID_);
      DARABONBA_PTR_FROM_JSON(startTime, startTime_);
      DARABONBA_PTR_FROM_JSON(timestamp, timestamp_);
    };
    GetPerRequestLogsInput() = default ;
    GetPerRequestLogsInput(const GetPerRequestLogsInput &) = default ;
    GetPerRequestLogsInput(GetPerRequestLogsInput &&) = default ;
    GetPerRequestLogsInput(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetPerRequestLogsInput() = default ;
    GetPerRequestLogsInput& operator=(const GetPerRequestLogsInput &) = default ;
    GetPerRequestLogsInput& operator=(GetPerRequestLogsInput &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->endTime_ == nullptr
        && this->errorType_ == nullptr && this->forwardLine_ == nullptr && this->instanceID_ == nullptr && this->isColdStart_ == nullptr && this->requestID_ == nullptr
        && this->startTime_ == nullptr && this->timestamp_ == nullptr; };
    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int64_t getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
    inline GetPerRequestLogsInput& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // errorType Field Functions 
    bool hasErrorType() const { return this->errorType_ != nullptr;};
    void deleteErrorType() { this->errorType_ = nullptr;};
    inline string getErrorType() const { DARABONBA_PTR_GET_DEFAULT(errorType_, "") };
    inline GetPerRequestLogsInput& setErrorType(string errorType) { DARABONBA_PTR_SET_VALUE(errorType_, errorType) };


    // forwardLine Field Functions 
    bool hasForwardLine() const { return this->forwardLine_ != nullptr;};
    void deleteForwardLine() { this->forwardLine_ = nullptr;};
    inline int64_t getForwardLine() const { DARABONBA_PTR_GET_DEFAULT(forwardLine_, 0L) };
    inline GetPerRequestLogsInput& setForwardLine(int64_t forwardLine) { DARABONBA_PTR_SET_VALUE(forwardLine_, forwardLine) };


    // instanceID Field Functions 
    bool hasInstanceID() const { return this->instanceID_ != nullptr;};
    void deleteInstanceID() { this->instanceID_ = nullptr;};
    inline string getInstanceID() const { DARABONBA_PTR_GET_DEFAULT(instanceID_, "") };
    inline GetPerRequestLogsInput& setInstanceID(string instanceID) { DARABONBA_PTR_SET_VALUE(instanceID_, instanceID) };


    // isColdStart Field Functions 
    bool hasIsColdStart() const { return this->isColdStart_ != nullptr;};
    void deleteIsColdStart() { this->isColdStart_ = nullptr;};
    inline bool getIsColdStart() const { DARABONBA_PTR_GET_DEFAULT(isColdStart_, false) };
    inline GetPerRequestLogsInput& setIsColdStart(bool isColdStart) { DARABONBA_PTR_SET_VALUE(isColdStart_, isColdStart) };


    // requestID Field Functions 
    bool hasRequestID() const { return this->requestID_ != nullptr;};
    void deleteRequestID() { this->requestID_ = nullptr;};
    inline string getRequestID() const { DARABONBA_PTR_GET_DEFAULT(requestID_, "") };
    inline GetPerRequestLogsInput& setRequestID(string requestID) { DARABONBA_PTR_SET_VALUE(requestID_, requestID) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int64_t getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
    inline GetPerRequestLogsInput& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // timestamp Field Functions 
    bool hasTimestamp() const { return this->timestamp_ != nullptr;};
    void deleteTimestamp() { this->timestamp_ = nullptr;};
    inline string getTimestamp() const { DARABONBA_PTR_GET_DEFAULT(timestamp_, "") };
    inline GetPerRequestLogsInput& setTimestamp(string timestamp) { DARABONBA_PTR_SET_VALUE(timestamp_, timestamp) };


  protected:
    // This parameter is required.
    shared_ptr<int64_t> endTime_ {};
    shared_ptr<string> errorType_ {};
    shared_ptr<int64_t> forwardLine_ {};
    shared_ptr<string> instanceID_ {};
    shared_ptr<bool> isColdStart_ {};
    // This parameter is required.
    shared_ptr<string> requestID_ {};
    // This parameter is required.
    shared_ptr<int64_t> startTime_ {};
    shared_ptr<string> timestamp_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
