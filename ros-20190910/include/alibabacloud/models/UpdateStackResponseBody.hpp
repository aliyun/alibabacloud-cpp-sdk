// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATESTACKRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_UPDATESTACKRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/UpdateStackResponseBodyDryRunResult.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ROS20190910
{
namespace Models
{
  class UpdateStackResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateStackResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DryRunResult, dryRunResult_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(StackId, stackId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateStackResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DryRunResult, dryRunResult_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(StackId, stackId_);
    };
    UpdateStackResponseBody() = default ;
    UpdateStackResponseBody(const UpdateStackResponseBody &) = default ;
    UpdateStackResponseBody(UpdateStackResponseBody &&) = default ;
    UpdateStackResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateStackResponseBody() = default ;
    UpdateStackResponseBody& operator=(const UpdateStackResponseBody &) = default ;
    UpdateStackResponseBody& operator=(UpdateStackResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->dryRunResult_ != nullptr
        && this->requestId_ != nullptr && this->stackId_ != nullptr; };
    // dryRunResult Field Functions 
    bool hasDryRunResult() const { return this->dryRunResult_ != nullptr;};
    void deleteDryRunResult() { this->dryRunResult_ = nullptr;};
    inline const UpdateStackResponseBodyDryRunResult & dryRunResult() const { DARABONBA_PTR_GET_CONST(dryRunResult_, UpdateStackResponseBodyDryRunResult) };
    inline UpdateStackResponseBodyDryRunResult dryRunResult() { DARABONBA_PTR_GET(dryRunResult_, UpdateStackResponseBodyDryRunResult) };
    inline UpdateStackResponseBody& setDryRunResult(const UpdateStackResponseBodyDryRunResult & dryRunResult) { DARABONBA_PTR_SET_VALUE(dryRunResult_, dryRunResult) };
    inline UpdateStackResponseBody& setDryRunResult(UpdateStackResponseBodyDryRunResult && dryRunResult) { DARABONBA_PTR_SET_RVALUE(dryRunResult_, dryRunResult) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline UpdateStackResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // stackId Field Functions 
    bool hasStackId() const { return this->stackId_ != nullptr;};
    void deleteStackId() { this->stackId_ = nullptr;};
    inline string stackId() const { DARABONBA_PTR_GET_DEFAULT(stackId_, "") };
    inline UpdateStackResponseBody& setStackId(string stackId) { DARABONBA_PTR_SET_VALUE(stackId_, stackId) };


  protected:
    // The dry run result. This parameter is returned only if DryRun is set to true.
    std::shared_ptr<UpdateStackResponseBodyDryRunResult> dryRunResult_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The ID of the stack.
    std::shared_ptr<string> stackId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ROS20190910
#endif
