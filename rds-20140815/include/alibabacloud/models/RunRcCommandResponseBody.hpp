// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNRCCOMMANDRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_RUNRCCOMMANDRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class RunRCCommandResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunRCCommandResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CommandId, commandId_);
      DARABONBA_PTR_TO_JSON(InvokeId, invokeId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, RunRCCommandResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CommandId, commandId_);
      DARABONBA_PTR_FROM_JSON(InvokeId, invokeId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    RunRCCommandResponseBody() = default ;
    RunRCCommandResponseBody(const RunRCCommandResponseBody &) = default ;
    RunRCCommandResponseBody(RunRCCommandResponseBody &&) = default ;
    RunRCCommandResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunRCCommandResponseBody() = default ;
    RunRCCommandResponseBody& operator=(const RunRCCommandResponseBody &) = default ;
    RunRCCommandResponseBody& operator=(RunRCCommandResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->commandId_ == nullptr
        && return this->invokeId_ == nullptr && return this->requestId_ == nullptr; };
    // commandId Field Functions 
    bool hasCommandId() const { return this->commandId_ != nullptr;};
    void deleteCommandId() { this->commandId_ = nullptr;};
    inline string commandId() const { DARABONBA_PTR_GET_DEFAULT(commandId_, "") };
    inline RunRCCommandResponseBody& setCommandId(string commandId) { DARABONBA_PTR_SET_VALUE(commandId_, commandId) };


    // invokeId Field Functions 
    bool hasInvokeId() const { return this->invokeId_ != nullptr;};
    void deleteInvokeId() { this->invokeId_ = nullptr;};
    inline string invokeId() const { DARABONBA_PTR_GET_DEFAULT(invokeId_, "") };
    inline RunRCCommandResponseBody& setInvokeId(string invokeId) { DARABONBA_PTR_SET_VALUE(invokeId_, invokeId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline RunRCCommandResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<string> commandId_ = nullptr;
    std::shared_ptr<string> invokeId_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
