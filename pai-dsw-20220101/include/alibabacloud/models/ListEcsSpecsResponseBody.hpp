// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTECSSPECSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTECSSPECSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListEcsSpecsResponseBodyEcsSpecs.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiDsw20220101
{
namespace Models
{
  class ListEcsSpecsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListEcsSpecsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(EcsSpecs, ecsSpecs_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListEcsSpecsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(EcsSpecs, ecsSpecs_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListEcsSpecsResponseBody() = default ;
    ListEcsSpecsResponseBody(const ListEcsSpecsResponseBody &) = default ;
    ListEcsSpecsResponseBody(ListEcsSpecsResponseBody &&) = default ;
    ListEcsSpecsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListEcsSpecsResponseBody() = default ;
    ListEcsSpecsResponseBody& operator=(const ListEcsSpecsResponseBody &) = default ;
    ListEcsSpecsResponseBody& operator=(ListEcsSpecsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->code_ == nullptr
        && return this->ecsSpecs_ == nullptr && return this->httpStatusCode_ == nullptr && return this->message_ == nullptr && return this->requestId_ == nullptr && return this->success_ == nullptr
        && return this->totalCount_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListEcsSpecsResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // ecsSpecs Field Functions 
    bool hasEcsSpecs() const { return this->ecsSpecs_ != nullptr;};
    void deleteEcsSpecs() { this->ecsSpecs_ = nullptr;};
    inline const vector<ListEcsSpecsResponseBodyEcsSpecs> & ecsSpecs() const { DARABONBA_PTR_GET_CONST(ecsSpecs_, vector<ListEcsSpecsResponseBodyEcsSpecs>) };
    inline vector<ListEcsSpecsResponseBodyEcsSpecs> ecsSpecs() { DARABONBA_PTR_GET(ecsSpecs_, vector<ListEcsSpecsResponseBodyEcsSpecs>) };
    inline ListEcsSpecsResponseBody& setEcsSpecs(const vector<ListEcsSpecsResponseBodyEcsSpecs> & ecsSpecs) { DARABONBA_PTR_SET_VALUE(ecsSpecs_, ecsSpecs) };
    inline ListEcsSpecsResponseBody& setEcsSpecs(vector<ListEcsSpecsResponseBodyEcsSpecs> && ecsSpecs) { DARABONBA_PTR_SET_RVALUE(ecsSpecs_, ecsSpecs) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t httpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline ListEcsSpecsResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListEcsSpecsResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListEcsSpecsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListEcsSpecsResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListEcsSpecsResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The status code. Valid values:
    // 
    // *   InternalError: an internal error. All errors, except for parameter validation errors, are classified as internal errors.
    // *   ValidationError: a parameter validation error.
    std::shared_ptr<string> code_ = nullptr;
    // The specifications of the ECS instances returned on this page.
    std::shared_ptr<vector<ListEcsSpecsResponseBodyEcsSpecs>> ecsSpecs_ = nullptr;
    // The HTTP status code. Valid values:
    // 
    // *   400
    // *   404
    std::shared_ptr<int32_t> httpStatusCode_ = nullptr;
    // The response message.
    std::shared_ptr<string> message_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // Indicates whether the request was successful. Valid values:
    // 
    // *   true
    // *   false
    std::shared_ptr<bool> success_ = nullptr;
    // The total number of ECS instances.
    std::shared_ptr<int64_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiDsw20220101
#endif
