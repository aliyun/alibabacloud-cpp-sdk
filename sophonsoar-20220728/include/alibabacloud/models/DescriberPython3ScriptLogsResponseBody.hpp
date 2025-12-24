// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERPYTHON3SCRIPTLOGSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERPYTHON3SCRIPTLOGSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sophonsoar20220728
{
namespace Models
{
  class DescriberPython3ScriptLogsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescriberPython3ScriptLogsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(RunResult, runResult_);
    };
    friend void from_json(const Darabonba::Json& j, DescriberPython3ScriptLogsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(RunResult, runResult_);
    };
    DescriberPython3ScriptLogsResponseBody() = default ;
    DescriberPython3ScriptLogsResponseBody(const DescriberPython3ScriptLogsResponseBody &) = default ;
    DescriberPython3ScriptLogsResponseBody(DescriberPython3ScriptLogsResponseBody &&) = default ;
    DescriberPython3ScriptLogsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescriberPython3ScriptLogsResponseBody() = default ;
    DescriberPython3ScriptLogsResponseBody& operator=(const DescriberPython3ScriptLogsResponseBody &) = default ;
    DescriberPython3ScriptLogsResponseBody& operator=(DescriberPython3ScriptLogsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && return this->runResult_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescriberPython3ScriptLogsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // runResult Field Functions 
    bool hasRunResult() const { return this->runResult_ != nullptr;};
    void deleteRunResult() { this->runResult_ = nullptr;};
    inline string runResult() const { DARABONBA_PTR_GET_DEFAULT(runResult_, "") };
    inline DescriberPython3ScriptLogsResponseBody& setRunResult(string runResult) { DARABONBA_PTR_SET_VALUE(runResult_, runResult) };


  protected:
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The operational logs of the Python3 script.
    std::shared_ptr<string> runResult_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sophonsoar20220728
#endif
