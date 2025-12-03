// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTWORKITEMESTIMATERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTWORKITEMESTIMATERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListWorkitemEstimateResponseBodyWorkitemTimeEstimate.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devops20210625
{
namespace Models
{
  class ListWorkitemEstimateResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListWorkitemEstimateResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(errorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(errorMsg, errorMsg_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(success, success_);
      DARABONBA_PTR_TO_JSON(workitemTimeEstimate, workitemTimeEstimate_);
    };
    friend void from_json(const Darabonba::Json& j, ListWorkitemEstimateResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(errorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(errorMsg, errorMsg_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(success, success_);
      DARABONBA_PTR_FROM_JSON(workitemTimeEstimate, workitemTimeEstimate_);
    };
    ListWorkitemEstimateResponseBody() = default ;
    ListWorkitemEstimateResponseBody(const ListWorkitemEstimateResponseBody &) = default ;
    ListWorkitemEstimateResponseBody(ListWorkitemEstimateResponseBody &&) = default ;
    ListWorkitemEstimateResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListWorkitemEstimateResponseBody() = default ;
    ListWorkitemEstimateResponseBody& operator=(const ListWorkitemEstimateResponseBody &) = default ;
    ListWorkitemEstimateResponseBody& operator=(ListWorkitemEstimateResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->code_ == nullptr
        && return this->errorCode_ == nullptr && return this->errorMsg_ == nullptr && return this->requestId_ == nullptr && return this->success_ == nullptr && return this->workitemTimeEstimate_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int64_t code() const { DARABONBA_PTR_GET_DEFAULT(code_, 0L) };
    inline ListWorkitemEstimateResponseBody& setCode(int64_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string errorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline ListWorkitemEstimateResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMsg Field Functions 
    bool hasErrorMsg() const { return this->errorMsg_ != nullptr;};
    void deleteErrorMsg() { this->errorMsg_ = nullptr;};
    inline string errorMsg() const { DARABONBA_PTR_GET_DEFAULT(errorMsg_, "") };
    inline ListWorkitemEstimateResponseBody& setErrorMsg(string errorMsg) { DARABONBA_PTR_SET_VALUE(errorMsg_, errorMsg) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListWorkitemEstimateResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListWorkitemEstimateResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // workitemTimeEstimate Field Functions 
    bool hasWorkitemTimeEstimate() const { return this->workitemTimeEstimate_ != nullptr;};
    void deleteWorkitemTimeEstimate() { this->workitemTimeEstimate_ = nullptr;};
    inline const vector<ListWorkitemEstimateResponseBodyWorkitemTimeEstimate> & workitemTimeEstimate() const { DARABONBA_PTR_GET_CONST(workitemTimeEstimate_, vector<ListWorkitemEstimateResponseBodyWorkitemTimeEstimate>) };
    inline vector<ListWorkitemEstimateResponseBodyWorkitemTimeEstimate> workitemTimeEstimate() { DARABONBA_PTR_GET(workitemTimeEstimate_, vector<ListWorkitemEstimateResponseBodyWorkitemTimeEstimate>) };
    inline ListWorkitemEstimateResponseBody& setWorkitemTimeEstimate(const vector<ListWorkitemEstimateResponseBodyWorkitemTimeEstimate> & workitemTimeEstimate) { DARABONBA_PTR_SET_VALUE(workitemTimeEstimate_, workitemTimeEstimate) };
    inline ListWorkitemEstimateResponseBody& setWorkitemTimeEstimate(vector<ListWorkitemEstimateResponseBodyWorkitemTimeEstimate> && workitemTimeEstimate) { DARABONBA_PTR_SET_RVALUE(workitemTimeEstimate_, workitemTimeEstimate) };


  protected:
    std::shared_ptr<int64_t> code_ = nullptr;
    std::shared_ptr<string> errorCode_ = nullptr;
    std::shared_ptr<string> errorMsg_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<bool> success_ = nullptr;
    std::shared_ptr<vector<ListWorkitemEstimateResponseBodyWorkitemTimeEstimate>> workitemTimeEstimate_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devops20210625
#endif
