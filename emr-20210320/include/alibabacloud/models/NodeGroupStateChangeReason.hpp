// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_NODEGROUPSTATECHANGEREASON_HPP_
#define ALIBABACLOUD_MODELS_NODEGROUPSTATECHANGEREASON_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Emr20210320
{
namespace Models
{
  class NodeGroupStateChangeReason : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const NodeGroupStateChangeReason& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Message, message_);
    };
    friend void from_json(const Darabonba::Json& j, NodeGroupStateChangeReason& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
    };
    NodeGroupStateChangeReason() = default ;
    NodeGroupStateChangeReason(const NodeGroupStateChangeReason &) = default ;
    NodeGroupStateChangeReason(NodeGroupStateChangeReason &&) = default ;
    NodeGroupStateChangeReason(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~NodeGroupStateChangeReason() = default ;
    NodeGroupStateChangeReason& operator=(const NodeGroupStateChangeReason &) = default ;
    NodeGroupStateChangeReason& operator=(NodeGroupStateChangeReason &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->code_ == nullptr
        && this->message_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline NodeGroupStateChangeReason& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline NodeGroupStateChangeReason& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


  protected:
    // The status code for the state change. Valid values include:
    // 
    // - `UserRequest`: A user request triggered the change.
    // 
    // - `OutOfStock`: The requested ECS instance type is out of stock.
    // 
    // - `NotAuthorized`: The request lacks the required permissions.
    // 
    // - `QuotaExceeded`: The request exceeds the resource quota.
    // 
    // - `OperationDenied`: The system denied the operation.
    // 
    // - `AccountException`: An account exception occurred.
    // 
    // - `NodeFailure`: An ECS node failed.
    // 
    // - `BootstrapFailure`: The bootstrap process failed.
    // 
    // - `ValidationFail`: The request parameters failed validation.
    // 
    // - `ServiceFailure`: A dependent service failed.
    // 
    // - `InternalError`: An unexpected internal error occurred.
    shared_ptr<string> code_ {};
    // A human-readable message that provides details about the state change.
    shared_ptr<string> message_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Emr20210320
#endif
