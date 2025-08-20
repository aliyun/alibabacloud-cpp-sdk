// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CONTINUECREATESTACKRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CONTINUECREATESTACKRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ContinueCreateStackResponseBodyDryRunResult.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ROS20190910
{
namespace Models
{
  class ContinueCreateStackResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ContinueCreateStackResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DryRunResult, dryRunResult_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(StackId, stackId_);
    };
    friend void from_json(const Darabonba::Json& j, ContinueCreateStackResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DryRunResult, dryRunResult_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(StackId, stackId_);
    };
    ContinueCreateStackResponseBody() = default ;
    ContinueCreateStackResponseBody(const ContinueCreateStackResponseBody &) = default ;
    ContinueCreateStackResponseBody(ContinueCreateStackResponseBody &&) = default ;
    ContinueCreateStackResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ContinueCreateStackResponseBody() = default ;
    ContinueCreateStackResponseBody& operator=(const ContinueCreateStackResponseBody &) = default ;
    ContinueCreateStackResponseBody& operator=(ContinueCreateStackResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->dryRunResult_ != nullptr
        && this->requestId_ != nullptr && this->stackId_ != nullptr; };
    // dryRunResult Field Functions 
    bool hasDryRunResult() const { return this->dryRunResult_ != nullptr;};
    void deleteDryRunResult() { this->dryRunResult_ = nullptr;};
    inline const ContinueCreateStackResponseBodyDryRunResult & dryRunResult() const { DARABONBA_PTR_GET_CONST(dryRunResult_, ContinueCreateStackResponseBodyDryRunResult) };
    inline ContinueCreateStackResponseBodyDryRunResult dryRunResult() { DARABONBA_PTR_GET(dryRunResult_, ContinueCreateStackResponseBodyDryRunResult) };
    inline ContinueCreateStackResponseBody& setDryRunResult(const ContinueCreateStackResponseBodyDryRunResult & dryRunResult) { DARABONBA_PTR_SET_VALUE(dryRunResult_, dryRunResult) };
    inline ContinueCreateStackResponseBody& setDryRunResult(ContinueCreateStackResponseBodyDryRunResult && dryRunResult) { DARABONBA_PTR_SET_RVALUE(dryRunResult_, dryRunResult) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ContinueCreateStackResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // stackId Field Functions 
    bool hasStackId() const { return this->stackId_ != nullptr;};
    void deleteStackId() { this->stackId_ = nullptr;};
    inline string stackId() const { DARABONBA_PTR_GET_DEFAULT(stackId_, "") };
    inline ContinueCreateStackResponseBody& setStackId(string stackId) { DARABONBA_PTR_SET_VALUE(stackId_, stackId) };


  protected:
    // The validation result.
    std::shared_ptr<ContinueCreateStackResponseBodyDryRunResult> dryRunResult_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The stack ID.
    std::shared_ptr<string> stackId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ROS20190910
#endif
