// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PRECHECKCREATEORDERFORDELETEDBNODESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_PRECHECKCREATEORDERFORDELETEDBNODESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/PreCheckCreateOrderForDeleteDBNodesResponseBodyFailures.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class PreCheckCreateOrderForDeleteDBNodesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PreCheckCreateOrderForDeleteDBNodesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Failures, failures_);
      DARABONBA_PTR_TO_JSON(PreCheckResult, preCheckResult_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, PreCheckCreateOrderForDeleteDBNodesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Failures, failures_);
      DARABONBA_PTR_FROM_JSON(PreCheckResult, preCheckResult_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    PreCheckCreateOrderForDeleteDBNodesResponseBody() = default ;
    PreCheckCreateOrderForDeleteDBNodesResponseBody(const PreCheckCreateOrderForDeleteDBNodesResponseBody &) = default ;
    PreCheckCreateOrderForDeleteDBNodesResponseBody(PreCheckCreateOrderForDeleteDBNodesResponseBody &&) = default ;
    PreCheckCreateOrderForDeleteDBNodesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PreCheckCreateOrderForDeleteDBNodesResponseBody() = default ;
    PreCheckCreateOrderForDeleteDBNodesResponseBody& operator=(const PreCheckCreateOrderForDeleteDBNodesResponseBody &) = default ;
    PreCheckCreateOrderForDeleteDBNodesResponseBody& operator=(PreCheckCreateOrderForDeleteDBNodesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->failures_ == nullptr
        && return this->preCheckResult_ == nullptr && return this->requestId_ == nullptr; };
    // failures Field Functions 
    bool hasFailures() const { return this->failures_ != nullptr;};
    void deleteFailures() { this->failures_ = nullptr;};
    inline const PreCheckCreateOrderForDeleteDBNodesResponseBodyFailures & failures() const { DARABONBA_PTR_GET_CONST(failures_, PreCheckCreateOrderForDeleteDBNodesResponseBodyFailures) };
    inline PreCheckCreateOrderForDeleteDBNodesResponseBodyFailures failures() { DARABONBA_PTR_GET(failures_, PreCheckCreateOrderForDeleteDBNodesResponseBodyFailures) };
    inline PreCheckCreateOrderForDeleteDBNodesResponseBody& setFailures(const PreCheckCreateOrderForDeleteDBNodesResponseBodyFailures & failures) { DARABONBA_PTR_SET_VALUE(failures_, failures) };
    inline PreCheckCreateOrderForDeleteDBNodesResponseBody& setFailures(PreCheckCreateOrderForDeleteDBNodesResponseBodyFailures && failures) { DARABONBA_PTR_SET_RVALUE(failures_, failures) };


    // preCheckResult Field Functions 
    bool hasPreCheckResult() const { return this->preCheckResult_ != nullptr;};
    void deletePreCheckResult() { this->preCheckResult_ = nullptr;};
    inline bool preCheckResult() const { DARABONBA_PTR_GET_DEFAULT(preCheckResult_, false) };
    inline PreCheckCreateOrderForDeleteDBNodesResponseBody& setPreCheckResult(bool preCheckResult) { DARABONBA_PTR_SET_VALUE(preCheckResult_, preCheckResult) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline PreCheckCreateOrderForDeleteDBNodesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information about the failed order.
    std::shared_ptr<PreCheckCreateOrderForDeleteDBNodesResponseBodyFailures> failures_ = nullptr;
    // The precheck result.
    std::shared_ptr<bool> preCheckResult_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
