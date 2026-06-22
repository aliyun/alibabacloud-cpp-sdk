// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CLUSTERSTATECHANGEREASON_HPP_
#define ALIBABACLOUD_MODELS_CLUSTERSTATECHANGEREASON_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Emr20210320
{
namespace Models
{
  class ClusterStateChangeReason : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ClusterStateChangeReason& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Message, message_);
    };
    friend void from_json(const Darabonba::Json& j, ClusterStateChangeReason& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
    };
    ClusterStateChangeReason() = default ;
    ClusterStateChangeReason(const ClusterStateChangeReason &) = default ;
    ClusterStateChangeReason(ClusterStateChangeReason &&) = default ;
    ClusterStateChangeReason(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ClusterStateChangeReason() = default ;
    ClusterStateChangeReason& operator=(const ClusterStateChangeReason &) = default ;
    ClusterStateChangeReason& operator=(ClusterStateChangeReason &&) = default ;
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
    inline ClusterStateChangeReason& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ClusterStateChangeReason& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


  protected:
    // The status code for the state change. Valid values:
    // 
    // - UserRequest: A user request triggered the state change.
    // 
    // - OutOfStock: The requested ECS instance type is out of stock.
    // 
    // - NotAuthorized: The operation was denied due to insufficient permission.
    // 
    // - QuotaExceeded: The request exceeded a service quota.
    // 
    // - OperationDenied: The operation was denied.
    // 
    // - AccountException: An account-related exception occurred.
    // 
    // - NodeFailure: An ECS node failed.
    // 
    // - BootstrapFailure: A bootstrap action failed.
    // 
    // - ValidationFail: The request failed business logic validation.
    // 
    // - ServiceFailure: A dependent service failed.
    // 
    // - InternalError: An internal error occurred.
    shared_ptr<string> code_ {};
    // A human-readable message detailing the cluster state change.
    shared_ptr<string> message_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Emr20210320
#endif
