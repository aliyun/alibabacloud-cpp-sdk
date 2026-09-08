// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETINSTANCEATTRIBUTERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETINSTANCEATTRIBUTERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sddp20260120
{
namespace Models
{
  class GetInstanceAttributeResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetInstanceAttributeResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CurrentKernelVersion, currentKernelVersion_);
      DARABONBA_PTR_TO_JSON(Engine, engine_);
      DARABONBA_PTR_TO_JSON(EngineVersion, engineVersion_);
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(KmsEncryptionSupported, kmsEncryptionSupported_);
      DARABONBA_PTR_TO_JSON(MaintainEndTime, maintainEndTime_);
      DARABONBA_PTR_TO_JSON(MaintainStartTime, maintainStartTime_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, GetInstanceAttributeResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CurrentKernelVersion, currentKernelVersion_);
      DARABONBA_PTR_FROM_JSON(Engine, engine_);
      DARABONBA_PTR_FROM_JSON(EngineVersion, engineVersion_);
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(KmsEncryptionSupported, kmsEncryptionSupported_);
      DARABONBA_PTR_FROM_JSON(MaintainEndTime, maintainEndTime_);
      DARABONBA_PTR_FROM_JSON(MaintainStartTime, maintainStartTime_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    GetInstanceAttributeResponseBody() = default ;
    GetInstanceAttributeResponseBody(const GetInstanceAttributeResponseBody &) = default ;
    GetInstanceAttributeResponseBody(GetInstanceAttributeResponseBody &&) = default ;
    GetInstanceAttributeResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetInstanceAttributeResponseBody() = default ;
    GetInstanceAttributeResponseBody& operator=(const GetInstanceAttributeResponseBody &) = default ;
    GetInstanceAttributeResponseBody& operator=(GetInstanceAttributeResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->currentKernelVersion_ == nullptr
        && this->engine_ == nullptr && this->engineVersion_ == nullptr && this->errorCode_ == nullptr && this->errorMessage_ == nullptr && this->kmsEncryptionSupported_ == nullptr
        && this->maintainEndTime_ == nullptr && this->maintainStartTime_ == nullptr && this->requestId_ == nullptr && this->status_ == nullptr; };
    // currentKernelVersion Field Functions 
    bool hasCurrentKernelVersion() const { return this->currentKernelVersion_ != nullptr;};
    void deleteCurrentKernelVersion() { this->currentKernelVersion_ = nullptr;};
    inline string getCurrentKernelVersion() const { DARABONBA_PTR_GET_DEFAULT(currentKernelVersion_, "") };
    inline GetInstanceAttributeResponseBody& setCurrentKernelVersion(string currentKernelVersion) { DARABONBA_PTR_SET_VALUE(currentKernelVersion_, currentKernelVersion) };


    // engine Field Functions 
    bool hasEngine() const { return this->engine_ != nullptr;};
    void deleteEngine() { this->engine_ = nullptr;};
    inline string getEngine() const { DARABONBA_PTR_GET_DEFAULT(engine_, "") };
    inline GetInstanceAttributeResponseBody& setEngine(string engine) { DARABONBA_PTR_SET_VALUE(engine_, engine) };


    // engineVersion Field Functions 
    bool hasEngineVersion() const { return this->engineVersion_ != nullptr;};
    void deleteEngineVersion() { this->engineVersion_ = nullptr;};
    inline string getEngineVersion() const { DARABONBA_PTR_GET_DEFAULT(engineVersion_, "") };
    inline GetInstanceAttributeResponseBody& setEngineVersion(string engineVersion) { DARABONBA_PTR_SET_VALUE(engineVersion_, engineVersion) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline GetInstanceAttributeResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline GetInstanceAttributeResponseBody& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // kmsEncryptionSupported Field Functions 
    bool hasKmsEncryptionSupported() const { return this->kmsEncryptionSupported_ != nullptr;};
    void deleteKmsEncryptionSupported() { this->kmsEncryptionSupported_ = nullptr;};
    inline bool getKmsEncryptionSupported() const { DARABONBA_PTR_GET_DEFAULT(kmsEncryptionSupported_, false) };
    inline GetInstanceAttributeResponseBody& setKmsEncryptionSupported(bool kmsEncryptionSupported) { DARABONBA_PTR_SET_VALUE(kmsEncryptionSupported_, kmsEncryptionSupported) };


    // maintainEndTime Field Functions 
    bool hasMaintainEndTime() const { return this->maintainEndTime_ != nullptr;};
    void deleteMaintainEndTime() { this->maintainEndTime_ = nullptr;};
    inline int64_t getMaintainEndTime() const { DARABONBA_PTR_GET_DEFAULT(maintainEndTime_, 0L) };
    inline GetInstanceAttributeResponseBody& setMaintainEndTime(int64_t maintainEndTime) { DARABONBA_PTR_SET_VALUE(maintainEndTime_, maintainEndTime) };


    // maintainStartTime Field Functions 
    bool hasMaintainStartTime() const { return this->maintainStartTime_ != nullptr;};
    void deleteMaintainStartTime() { this->maintainStartTime_ = nullptr;};
    inline int64_t getMaintainStartTime() const { DARABONBA_PTR_GET_DEFAULT(maintainStartTime_, 0L) };
    inline GetInstanceAttributeResponseBody& setMaintainStartTime(int64_t maintainStartTime) { DARABONBA_PTR_SET_VALUE(maintainStartTime_, maintainStartTime) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetInstanceAttributeResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetInstanceAttributeResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    shared_ptr<string> currentKernelVersion_ {};
    shared_ptr<string> engine_ {};
    shared_ptr<string> engineVersion_ {};
    shared_ptr<string> errorCode_ {};
    shared_ptr<string> errorMessage_ {};
    shared_ptr<bool> kmsEncryptionSupported_ {};
    shared_ptr<int64_t> maintainEndTime_ {};
    shared_ptr<int64_t> maintainStartTime_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<string> status_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sddp20260120
#endif
