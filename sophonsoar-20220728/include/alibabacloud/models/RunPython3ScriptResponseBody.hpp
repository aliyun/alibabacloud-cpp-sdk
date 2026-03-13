// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNPYTHON3SCRIPTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_RUNPYTHON3SCRIPTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sophonsoar20220728
{
namespace Models
{
  class RunPython3ScriptResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunPython3ScriptResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(RunResult, runResult_);
    };
    friend void from_json(const Darabonba::Json& j, RunPython3ScriptResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(RunResult, runResult_);
    };
    RunPython3ScriptResponseBody() = default ;
    RunPython3ScriptResponseBody(const RunPython3ScriptResponseBody &) = default ;
    RunPython3ScriptResponseBody(RunPython3ScriptResponseBody &&) = default ;
    RunPython3ScriptResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunPython3ScriptResponseBody() = default ;
    RunPython3ScriptResponseBody& operator=(const RunPython3ScriptResponseBody &) = default ;
    RunPython3ScriptResponseBody& operator=(RunPython3ScriptResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->runResult_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline RunPython3ScriptResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // runResult Field Functions 
    bool hasRunResult() const { return this->runResult_ != nullptr;};
    void deleteRunResult() { this->runResult_ = nullptr;};
    inline string getRunResult() const { DARABONBA_PTR_GET_DEFAULT(runResult_, "") };
    inline RunPython3ScriptResponseBody& setRunResult(string runResult) { DARABONBA_PTR_SET_VALUE(runResult_, runResult) };


  protected:
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The execution result of the Python3 script.
    shared_ptr<string> runResult_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sophonsoar20220728
#endif
