// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SETTLSCIPHERPOLICYATTRIBUTERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_SETTLSCIPHERPOLICYATTRIBUTERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Slb20140515
{
namespace Models
{
  class SetTLSCipherPolicyAttributeResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SetTLSCipherPolicyAttributeResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
    };
    friend void from_json(const Darabonba::Json& j, SetTLSCipherPolicyAttributeResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
    };
    SetTLSCipherPolicyAttributeResponseBody() = default ;
    SetTLSCipherPolicyAttributeResponseBody(const SetTLSCipherPolicyAttributeResponseBody &) = default ;
    SetTLSCipherPolicyAttributeResponseBody(SetTLSCipherPolicyAttributeResponseBody &&) = default ;
    SetTLSCipherPolicyAttributeResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SetTLSCipherPolicyAttributeResponseBody() = default ;
    SetTLSCipherPolicyAttributeResponseBody& operator=(const SetTLSCipherPolicyAttributeResponseBody &) = default ;
    SetTLSCipherPolicyAttributeResponseBody& operator=(SetTLSCipherPolicyAttributeResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && return this->taskId_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline SetTLSCipherPolicyAttributeResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline SetTLSCipherPolicyAttributeResponseBody& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


  protected:
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The ID of the asynchronous task.
    std::shared_ptr<string> taskId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Slb20140515
#endif
