// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECALLOUTBOUNDINSTANTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATECALLOUTBOUNDINSTANTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ThirdswAicall20251127
{
namespace Models
{
  class CreateCallOutboundInstantRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateCallOutboundInstantRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CalledNumber, calledNumber_);
      DARABONBA_PTR_TO_JSON(CustomerName, customerName_);
      DARABONBA_PTR_TO_JSON(EncryptCall, encryptCall_);
      DARABONBA_PTR_TO_JSON(PromptVariables, promptVariables_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateCallOutboundInstantRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CalledNumber, calledNumber_);
      DARABONBA_PTR_FROM_JSON(CustomerName, customerName_);
      DARABONBA_PTR_FROM_JSON(EncryptCall, encryptCall_);
      DARABONBA_PTR_FROM_JSON(PromptVariables, promptVariables_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
    };
    CreateCallOutboundInstantRequest() = default ;
    CreateCallOutboundInstantRequest(const CreateCallOutboundInstantRequest &) = default ;
    CreateCallOutboundInstantRequest(CreateCallOutboundInstantRequest &&) = default ;
    CreateCallOutboundInstantRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateCallOutboundInstantRequest() = default ;
    CreateCallOutboundInstantRequest& operator=(const CreateCallOutboundInstantRequest &) = default ;
    CreateCallOutboundInstantRequest& operator=(CreateCallOutboundInstantRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->calledNumber_ == nullptr
        && this->customerName_ == nullptr && this->encryptCall_ == nullptr && this->promptVariables_ == nullptr && this->taskId_ == nullptr; };
    // calledNumber Field Functions 
    bool hasCalledNumber() const { return this->calledNumber_ != nullptr;};
    void deleteCalledNumber() { this->calledNumber_ = nullptr;};
    inline string getCalledNumber() const { DARABONBA_PTR_GET_DEFAULT(calledNumber_, "") };
    inline CreateCallOutboundInstantRequest& setCalledNumber(string calledNumber) { DARABONBA_PTR_SET_VALUE(calledNumber_, calledNumber) };


    // customerName Field Functions 
    bool hasCustomerName() const { return this->customerName_ != nullptr;};
    void deleteCustomerName() { this->customerName_ = nullptr;};
    inline string getCustomerName() const { DARABONBA_PTR_GET_DEFAULT(customerName_, "") };
    inline CreateCallOutboundInstantRequest& setCustomerName(string customerName) { DARABONBA_PTR_SET_VALUE(customerName_, customerName) };


    // encryptCall Field Functions 
    bool hasEncryptCall() const { return this->encryptCall_ != nullptr;};
    void deleteEncryptCall() { this->encryptCall_ = nullptr;};
    inline bool getEncryptCall() const { DARABONBA_PTR_GET_DEFAULT(encryptCall_, false) };
    inline CreateCallOutboundInstantRequest& setEncryptCall(bool encryptCall) { DARABONBA_PTR_SET_VALUE(encryptCall_, encryptCall) };


    // promptVariables Field Functions 
    bool hasPromptVariables() const { return this->promptVariables_ != nullptr;};
    void deletePromptVariables() { this->promptVariables_ = nullptr;};
    inline string getPromptVariables() const { DARABONBA_PTR_GET_DEFAULT(promptVariables_, "") };
    inline CreateCallOutboundInstantRequest& setPromptVariables(string promptVariables) { DARABONBA_PTR_SET_VALUE(promptVariables_, promptVariables) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline int64_t getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, 0L) };
    inline CreateCallOutboundInstantRequest& setTaskId(int64_t taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


  protected:
    shared_ptr<string> calledNumber_ {};
    shared_ptr<string> customerName_ {};
    shared_ptr<bool> encryptCall_ {};
    shared_ptr<string> promptVariables_ {};
    shared_ptr<int64_t> taskId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ThirdswAicall20251127
#endif
