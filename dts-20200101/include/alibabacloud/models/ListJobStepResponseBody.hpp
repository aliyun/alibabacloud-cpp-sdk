// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTJOBSTEPRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTJOBSTEPRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListJobStepResponseBodyJobSteps.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dts20200101
{
namespace Models
{
  class ListJobStepResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListJobStepResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(JobSteps, jobSteps_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(UseV2API, useV2API_);
    };
    friend void from_json(const Darabonba::Json& j, ListJobStepResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(JobSteps, jobSteps_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(UseV2API, useV2API_);
    };
    ListJobStepResponseBody() = default ;
    ListJobStepResponseBody(const ListJobStepResponseBody &) = default ;
    ListJobStepResponseBody(ListJobStepResponseBody &&) = default ;
    ListJobStepResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListJobStepResponseBody() = default ;
    ListJobStepResponseBody& operator=(const ListJobStepResponseBody &) = default ;
    ListJobStepResponseBody& operator=(ListJobStepResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->code_ == nullptr
        && return this->httpStatusCode_ == nullptr && return this->jobSteps_ == nullptr && return this->requestId_ == nullptr && return this->success_ == nullptr && return this->useV2API_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListJobStepResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t httpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline ListJobStepResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // jobSteps Field Functions 
    bool hasJobSteps() const { return this->jobSteps_ != nullptr;};
    void deleteJobSteps() { this->jobSteps_ = nullptr;};
    inline const vector<ListJobStepResponseBodyJobSteps> & jobSteps() const { DARABONBA_PTR_GET_CONST(jobSteps_, vector<ListJobStepResponseBodyJobSteps>) };
    inline vector<ListJobStepResponseBodyJobSteps> jobSteps() { DARABONBA_PTR_GET(jobSteps_, vector<ListJobStepResponseBodyJobSteps>) };
    inline ListJobStepResponseBody& setJobSteps(const vector<ListJobStepResponseBodyJobSteps> & jobSteps) { DARABONBA_PTR_SET_VALUE(jobSteps_, jobSteps) };
    inline ListJobStepResponseBody& setJobSteps(vector<ListJobStepResponseBodyJobSteps> && jobSteps) { DARABONBA_PTR_SET_RVALUE(jobSteps_, jobSteps) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListJobStepResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListJobStepResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // useV2API Field Functions 
    bool hasUseV2API() const { return this->useV2API_ != nullptr;};
    void deleteUseV2API() { this->useV2API_ = nullptr;};
    inline bool useV2API() const { DARABONBA_PTR_GET_DEFAULT(useV2API_, false) };
    inline ListJobStepResponseBody& setUseV2API(bool useV2API) { DARABONBA_PTR_SET_VALUE(useV2API_, useV2API) };


  protected:
    std::shared_ptr<string> code_ = nullptr;
    std::shared_ptr<int32_t> httpStatusCode_ = nullptr;
    std::shared_ptr<vector<ListJobStepResponseBodyJobSteps>> jobSteps_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<bool> success_ = nullptr;
    std::shared_ptr<bool> useV2API_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dts20200101
#endif
