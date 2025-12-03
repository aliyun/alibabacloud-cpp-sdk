// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEWORKITEMESTIMATERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEWORKITEMESTIMATERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateWorkitemEstimateResponseBodyWorkitemTimeEstimate.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devops20210625
{
namespace Models
{
  class CreateWorkitemEstimateResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateWorkitemEstimateResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(WorkitemTimeEstimate, workitemTimeEstimate_);
      DARABONBA_PTR_TO_JSON(errorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(errorMsg, errorMsg_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(success, success_);
    };
    friend void from_json(const Darabonba::Json& j, CreateWorkitemEstimateResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(WorkitemTimeEstimate, workitemTimeEstimate_);
      DARABONBA_PTR_FROM_JSON(errorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(errorMsg, errorMsg_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(success, success_);
    };
    CreateWorkitemEstimateResponseBody() = default ;
    CreateWorkitemEstimateResponseBody(const CreateWorkitemEstimateResponseBody &) = default ;
    CreateWorkitemEstimateResponseBody(CreateWorkitemEstimateResponseBody &&) = default ;
    CreateWorkitemEstimateResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateWorkitemEstimateResponseBody() = default ;
    CreateWorkitemEstimateResponseBody& operator=(const CreateWorkitemEstimateResponseBody &) = default ;
    CreateWorkitemEstimateResponseBody& operator=(CreateWorkitemEstimateResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->workitemTimeEstimate_ == nullptr
        && return this->errorCode_ == nullptr && return this->errorMsg_ == nullptr && return this->requestId_ == nullptr && return this->success_ == nullptr; };
    // workitemTimeEstimate Field Functions 
    bool hasWorkitemTimeEstimate() const { return this->workitemTimeEstimate_ != nullptr;};
    void deleteWorkitemTimeEstimate() { this->workitemTimeEstimate_ = nullptr;};
    inline const CreateWorkitemEstimateResponseBodyWorkitemTimeEstimate & workitemTimeEstimate() const { DARABONBA_PTR_GET_CONST(workitemTimeEstimate_, CreateWorkitemEstimateResponseBodyWorkitemTimeEstimate) };
    inline CreateWorkitemEstimateResponseBodyWorkitemTimeEstimate workitemTimeEstimate() { DARABONBA_PTR_GET(workitemTimeEstimate_, CreateWorkitemEstimateResponseBodyWorkitemTimeEstimate) };
    inline CreateWorkitemEstimateResponseBody& setWorkitemTimeEstimate(const CreateWorkitemEstimateResponseBodyWorkitemTimeEstimate & workitemTimeEstimate) { DARABONBA_PTR_SET_VALUE(workitemTimeEstimate_, workitemTimeEstimate) };
    inline CreateWorkitemEstimateResponseBody& setWorkitemTimeEstimate(CreateWorkitemEstimateResponseBodyWorkitemTimeEstimate && workitemTimeEstimate) { DARABONBA_PTR_SET_RVALUE(workitemTimeEstimate_, workitemTimeEstimate) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string errorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline CreateWorkitemEstimateResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMsg Field Functions 
    bool hasErrorMsg() const { return this->errorMsg_ != nullptr;};
    void deleteErrorMsg() { this->errorMsg_ = nullptr;};
    inline string errorMsg() const { DARABONBA_PTR_GET_DEFAULT(errorMsg_, "") };
    inline CreateWorkitemEstimateResponseBody& setErrorMsg(string errorMsg) { DARABONBA_PTR_SET_VALUE(errorMsg_, errorMsg) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateWorkitemEstimateResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline CreateWorkitemEstimateResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    std::shared_ptr<CreateWorkitemEstimateResponseBodyWorkitemTimeEstimate> workitemTimeEstimate_ = nullptr;
    std::shared_ptr<string> errorCode_ = nullptr;
    std::shared_ptr<string> errorMsg_ = nullptr;
    // Id of the request
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<bool> success_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devops20210625
#endif
