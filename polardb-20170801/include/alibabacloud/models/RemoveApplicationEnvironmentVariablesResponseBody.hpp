// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REMOVEAPPLICATIONENVIRONMENTVARIABLESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_REMOVEAPPLICATIONENVIRONMENTVARIABLESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class RemoveApplicationEnvironmentVariablesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RemoveApplicationEnvironmentVariablesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(Ok, ok_);
      DARABONBA_PTR_TO_JSON(RemovedCount, removedCount_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Restarted, restarted_);
      DARABONBA_PTR_TO_JSON(TotalVariables, totalVariables_);
    };
    friend void from_json(const Darabonba::Json& j, RemoveApplicationEnvironmentVariablesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(Ok, ok_);
      DARABONBA_PTR_FROM_JSON(RemovedCount, removedCount_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Restarted, restarted_);
      DARABONBA_PTR_FROM_JSON(TotalVariables, totalVariables_);
    };
    RemoveApplicationEnvironmentVariablesResponseBody() = default ;
    RemoveApplicationEnvironmentVariablesResponseBody(const RemoveApplicationEnvironmentVariablesResponseBody &) = default ;
    RemoveApplicationEnvironmentVariablesResponseBody(RemoveApplicationEnvironmentVariablesResponseBody &&) = default ;
    RemoveApplicationEnvironmentVariablesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RemoveApplicationEnvironmentVariablesResponseBody() = default ;
    RemoveApplicationEnvironmentVariablesResponseBody& operator=(const RemoveApplicationEnvironmentVariablesResponseBody &) = default ;
    RemoveApplicationEnvironmentVariablesResponseBody& operator=(RemoveApplicationEnvironmentVariablesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->applicationId_ == nullptr
        && this->code_ == nullptr && this->message_ == nullptr && this->ok_ == nullptr && this->removedCount_ == nullptr && this->requestId_ == nullptr
        && this->restarted_ == nullptr && this->totalVariables_ == nullptr; };
    // applicationId Field Functions 
    bool hasApplicationId() const { return this->applicationId_ != nullptr;};
    void deleteApplicationId() { this->applicationId_ = nullptr;};
    inline string getApplicationId() const { DARABONBA_PTR_GET_DEFAULT(applicationId_, "") };
    inline RemoveApplicationEnvironmentVariablesResponseBody& setApplicationId(string applicationId) { DARABONBA_PTR_SET_VALUE(applicationId_, applicationId) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline RemoveApplicationEnvironmentVariablesResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline RemoveApplicationEnvironmentVariablesResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // ok Field Functions 
    bool hasOk() const { return this->ok_ != nullptr;};
    void deleteOk() { this->ok_ = nullptr;};
    inline bool getOk() const { DARABONBA_PTR_GET_DEFAULT(ok_, false) };
    inline RemoveApplicationEnvironmentVariablesResponseBody& setOk(bool ok) { DARABONBA_PTR_SET_VALUE(ok_, ok) };


    // removedCount Field Functions 
    bool hasRemovedCount() const { return this->removedCount_ != nullptr;};
    void deleteRemovedCount() { this->removedCount_ = nullptr;};
    inline int32_t getRemovedCount() const { DARABONBA_PTR_GET_DEFAULT(removedCount_, 0) };
    inline RemoveApplicationEnvironmentVariablesResponseBody& setRemovedCount(int32_t removedCount) { DARABONBA_PTR_SET_VALUE(removedCount_, removedCount) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline RemoveApplicationEnvironmentVariablesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // restarted Field Functions 
    bool hasRestarted() const { return this->restarted_ != nullptr;};
    void deleteRestarted() { this->restarted_ = nullptr;};
    inline bool getRestarted() const { DARABONBA_PTR_GET_DEFAULT(restarted_, false) };
    inline RemoveApplicationEnvironmentVariablesResponseBody& setRestarted(bool restarted) { DARABONBA_PTR_SET_VALUE(restarted_, restarted) };


    // totalVariables Field Functions 
    bool hasTotalVariables() const { return this->totalVariables_ != nullptr;};
    void deleteTotalVariables() { this->totalVariables_ = nullptr;};
    inline int32_t getTotalVariables() const { DARABONBA_PTR_GET_DEFAULT(totalVariables_, 0) };
    inline RemoveApplicationEnvironmentVariablesResponseBody& setTotalVariables(int32_t totalVariables) { DARABONBA_PTR_SET_VALUE(totalVariables_, totalVariables) };


  protected:
    shared_ptr<string> applicationId_ {};
    shared_ptr<int32_t> code_ {};
    shared_ptr<string> message_ {};
    shared_ptr<bool> ok_ {};
    shared_ptr<int32_t> removedCount_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> restarted_ {};
    shared_ptr<int32_t> totalVariables_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
