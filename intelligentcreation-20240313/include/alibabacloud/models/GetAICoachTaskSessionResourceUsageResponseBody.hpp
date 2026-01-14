// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAICOACHTASKSESSIONRESOURCEUSAGERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETAICOACHTASKSESSIONRESOURCEUSAGERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IntelligentCreation20240313
{
namespace Models
{
  class GetAICoachTaskSessionResourceUsageResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAICoachTaskSessionResourceUsageResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(audioUsage, audioUsage_);
      DARABONBA_PTR_TO_JSON(deductionStatus, deductionStatus_);
      DARABONBA_PTR_TO_JSON(errorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(errorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(success, success_);
      DARABONBA_PTR_TO_JSON(tokenUsage, tokenUsage_);
    };
    friend void from_json(const Darabonba::Json& j, GetAICoachTaskSessionResourceUsageResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(audioUsage, audioUsage_);
      DARABONBA_PTR_FROM_JSON(deductionStatus, deductionStatus_);
      DARABONBA_PTR_FROM_JSON(errorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(errorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(success, success_);
      DARABONBA_PTR_FROM_JSON(tokenUsage, tokenUsage_);
    };
    GetAICoachTaskSessionResourceUsageResponseBody() = default ;
    GetAICoachTaskSessionResourceUsageResponseBody(const GetAICoachTaskSessionResourceUsageResponseBody &) = default ;
    GetAICoachTaskSessionResourceUsageResponseBody(GetAICoachTaskSessionResourceUsageResponseBody &&) = default ;
    GetAICoachTaskSessionResourceUsageResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAICoachTaskSessionResourceUsageResponseBody() = default ;
    GetAICoachTaskSessionResourceUsageResponseBody& operator=(const GetAICoachTaskSessionResourceUsageResponseBody &) = default ;
    GetAICoachTaskSessionResourceUsageResponseBody& operator=(GetAICoachTaskSessionResourceUsageResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->audioUsage_ == nullptr
        && this->deductionStatus_ == nullptr && this->errorCode_ == nullptr && this->errorMessage_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr
        && this->tokenUsage_ == nullptr; };
    // audioUsage Field Functions 
    bool hasAudioUsage() const { return this->audioUsage_ != nullptr;};
    void deleteAudioUsage() { this->audioUsage_ = nullptr;};
    inline int32_t getAudioUsage() const { DARABONBA_PTR_GET_DEFAULT(audioUsage_, 0) };
    inline GetAICoachTaskSessionResourceUsageResponseBody& setAudioUsage(int32_t audioUsage) { DARABONBA_PTR_SET_VALUE(audioUsage_, audioUsage) };


    // deductionStatus Field Functions 
    bool hasDeductionStatus() const { return this->deductionStatus_ != nullptr;};
    void deleteDeductionStatus() { this->deductionStatus_ = nullptr;};
    inline int32_t getDeductionStatus() const { DARABONBA_PTR_GET_DEFAULT(deductionStatus_, 0) };
    inline GetAICoachTaskSessionResourceUsageResponseBody& setDeductionStatus(int32_t deductionStatus) { DARABONBA_PTR_SET_VALUE(deductionStatus_, deductionStatus) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline GetAICoachTaskSessionResourceUsageResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline GetAICoachTaskSessionResourceUsageResponseBody& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetAICoachTaskSessionResourceUsageResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetAICoachTaskSessionResourceUsageResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // tokenUsage Field Functions 
    bool hasTokenUsage() const { return this->tokenUsage_ != nullptr;};
    void deleteTokenUsage() { this->tokenUsage_ = nullptr;};
    inline int32_t getTokenUsage() const { DARABONBA_PTR_GET_DEFAULT(tokenUsage_, 0) };
    inline GetAICoachTaskSessionResourceUsageResponseBody& setTokenUsage(int32_t tokenUsage) { DARABONBA_PTR_SET_VALUE(tokenUsage_, tokenUsage) };


  protected:
    shared_ptr<int32_t> audioUsage_ {};
    shared_ptr<int32_t> deductionStatus_ {};
    shared_ptr<string> errorCode_ {};
    shared_ptr<string> errorMessage_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
    shared_ptr<int32_t> tokenUsage_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IntelligentCreation20240313
#endif
