// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNCOMMANDRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_RUNCOMMANDRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/RunCommandResponseBodyRunCommandInfos.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EdsAic20230930
{
namespace Models
{
  class RunCommandResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunCommandResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(InvokeId, invokeId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(RunCommandInfos, runCommandInfos_);
    };
    friend void from_json(const Darabonba::Json& j, RunCommandResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(InvokeId, invokeId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(RunCommandInfos, runCommandInfos_);
    };
    RunCommandResponseBody() = default ;
    RunCommandResponseBody(const RunCommandResponseBody &) = default ;
    RunCommandResponseBody(RunCommandResponseBody &&) = default ;
    RunCommandResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunCommandResponseBody() = default ;
    RunCommandResponseBody& operator=(const RunCommandResponseBody &) = default ;
    RunCommandResponseBody& operator=(RunCommandResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->invokeId_ != nullptr
        && this->requestId_ != nullptr && this->runCommandInfos_ != nullptr; };
    // invokeId Field Functions 
    bool hasInvokeId() const { return this->invokeId_ != nullptr;};
    void deleteInvokeId() { this->invokeId_ = nullptr;};
    inline string invokeId() const { DARABONBA_PTR_GET_DEFAULT(invokeId_, "") };
    inline RunCommandResponseBody& setInvokeId(string invokeId) { DARABONBA_PTR_SET_VALUE(invokeId_, invokeId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline RunCommandResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // runCommandInfos Field Functions 
    bool hasRunCommandInfos() const { return this->runCommandInfos_ != nullptr;};
    void deleteRunCommandInfos() { this->runCommandInfos_ = nullptr;};
    inline const vector<RunCommandResponseBodyRunCommandInfos> & runCommandInfos() const { DARABONBA_PTR_GET_CONST(runCommandInfos_, vector<RunCommandResponseBodyRunCommandInfos>) };
    inline vector<RunCommandResponseBodyRunCommandInfos> runCommandInfos() { DARABONBA_PTR_GET(runCommandInfos_, vector<RunCommandResponseBodyRunCommandInfos>) };
    inline RunCommandResponseBody& setRunCommandInfos(const vector<RunCommandResponseBodyRunCommandInfos> & runCommandInfos) { DARABONBA_PTR_SET_VALUE(runCommandInfos_, runCommandInfos) };
    inline RunCommandResponseBody& setRunCommandInfos(vector<RunCommandResponseBodyRunCommandInfos> && runCommandInfos) { DARABONBA_PTR_SET_RVALUE(runCommandInfos_, runCommandInfos) };


  protected:
    // The ID of the command execution. You can use the command execution ID to query the output of a command.
    std::shared_ptr<string> invokeId_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<vector<RunCommandResponseBodyRunCommandInfos>> runCommandInfos_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EdsAic20230930
#endif
