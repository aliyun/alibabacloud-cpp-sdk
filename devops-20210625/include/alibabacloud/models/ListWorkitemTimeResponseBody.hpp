// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTWORKITEMTIMERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTWORKITEMTIMERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListWorkitemTimeResponseBodyWorkitemTime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devops20210625
{
namespace Models
{
  class ListWorkitemTimeResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListWorkitemTimeResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(errorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(errorMsg, errorMsg_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(success, success_);
      DARABONBA_PTR_TO_JSON(workitemTime, workitemTime_);
    };
    friend void from_json(const Darabonba::Json& j, ListWorkitemTimeResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(errorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(errorMsg, errorMsg_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(success, success_);
      DARABONBA_PTR_FROM_JSON(workitemTime, workitemTime_);
    };
    ListWorkitemTimeResponseBody() = default ;
    ListWorkitemTimeResponseBody(const ListWorkitemTimeResponseBody &) = default ;
    ListWorkitemTimeResponseBody(ListWorkitemTimeResponseBody &&) = default ;
    ListWorkitemTimeResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListWorkitemTimeResponseBody() = default ;
    ListWorkitemTimeResponseBody& operator=(const ListWorkitemTimeResponseBody &) = default ;
    ListWorkitemTimeResponseBody& operator=(ListWorkitemTimeResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->code_ == nullptr
        && return this->errorCode_ == nullptr && return this->errorMsg_ == nullptr && return this->requestId_ == nullptr && return this->success_ == nullptr && return this->workitemTime_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int64_t code() const { DARABONBA_PTR_GET_DEFAULT(code_, 0L) };
    inline ListWorkitemTimeResponseBody& setCode(int64_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string errorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline ListWorkitemTimeResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMsg Field Functions 
    bool hasErrorMsg() const { return this->errorMsg_ != nullptr;};
    void deleteErrorMsg() { this->errorMsg_ = nullptr;};
    inline string errorMsg() const { DARABONBA_PTR_GET_DEFAULT(errorMsg_, "") };
    inline ListWorkitemTimeResponseBody& setErrorMsg(string errorMsg) { DARABONBA_PTR_SET_VALUE(errorMsg_, errorMsg) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListWorkitemTimeResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListWorkitemTimeResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // workitemTime Field Functions 
    bool hasWorkitemTime() const { return this->workitemTime_ != nullptr;};
    void deleteWorkitemTime() { this->workitemTime_ = nullptr;};
    inline const vector<ListWorkitemTimeResponseBodyWorkitemTime> & workitemTime() const { DARABONBA_PTR_GET_CONST(workitemTime_, vector<ListWorkitemTimeResponseBodyWorkitemTime>) };
    inline vector<ListWorkitemTimeResponseBodyWorkitemTime> workitemTime() { DARABONBA_PTR_GET(workitemTime_, vector<ListWorkitemTimeResponseBodyWorkitemTime>) };
    inline ListWorkitemTimeResponseBody& setWorkitemTime(const vector<ListWorkitemTimeResponseBodyWorkitemTime> & workitemTime) { DARABONBA_PTR_SET_VALUE(workitemTime_, workitemTime) };
    inline ListWorkitemTimeResponseBody& setWorkitemTime(vector<ListWorkitemTimeResponseBodyWorkitemTime> && workitemTime) { DARABONBA_PTR_SET_RVALUE(workitemTime_, workitemTime) };


  protected:
    std::shared_ptr<int64_t> code_ = nullptr;
    std::shared_ptr<string> errorCode_ = nullptr;
    std::shared_ptr<string> errorMsg_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<bool> success_ = nullptr;
    std::shared_ptr<vector<ListWorkitemTimeResponseBodyWorkitemTime>> workitemTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devops20210625
#endif
