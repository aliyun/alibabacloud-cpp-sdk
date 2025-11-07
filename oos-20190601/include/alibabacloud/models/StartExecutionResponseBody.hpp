// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_STARTEXECUTIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_STARTEXECUTIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/StartExecutionResponseBodyExecution.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Oos20190601
{
namespace Models
{
  class StartExecutionResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const StartExecutionResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Execution, execution_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, StartExecutionResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Execution, execution_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    StartExecutionResponseBody() = default ;
    StartExecutionResponseBody(const StartExecutionResponseBody &) = default ;
    StartExecutionResponseBody(StartExecutionResponseBody &&) = default ;
    StartExecutionResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~StartExecutionResponseBody() = default ;
    StartExecutionResponseBody& operator=(const StartExecutionResponseBody &) = default ;
    StartExecutionResponseBody& operator=(StartExecutionResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->execution_ == nullptr
        && return this->requestId_ == nullptr; };
    // execution Field Functions 
    bool hasExecution() const { return this->execution_ != nullptr;};
    void deleteExecution() { this->execution_ = nullptr;};
    inline const StartExecutionResponseBodyExecution & execution() const { DARABONBA_PTR_GET_CONST(execution_, StartExecutionResponseBodyExecution) };
    inline StartExecutionResponseBodyExecution execution() { DARABONBA_PTR_GET(execution_, StartExecutionResponseBodyExecution) };
    inline StartExecutionResponseBody& setExecution(const StartExecutionResponseBodyExecution & execution) { DARABONBA_PTR_SET_VALUE(execution_, execution) };
    inline StartExecutionResponseBody& setExecution(StartExecutionResponseBodyExecution && execution) { DARABONBA_PTR_SET_RVALUE(execution_, execution) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline StartExecutionResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The details of the execution.
    std::shared_ptr<StartExecutionResponseBodyExecution> execution_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Oos20190601
#endif
