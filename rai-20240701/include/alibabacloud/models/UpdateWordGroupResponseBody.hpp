// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEWORDGROUPRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_UPDATEWORDGROUPRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/UpdateWordGroupResponseBodyWordErrorInfoList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RAI20240701
{
namespace Models
{
  class UpdateWordGroupResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateWordGroupResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(WordErrorInfoList, wordErrorInfoList_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateWordGroupResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(WordErrorInfoList, wordErrorInfoList_);
    };
    UpdateWordGroupResponseBody() = default ;
    UpdateWordGroupResponseBody(const UpdateWordGroupResponseBody &) = default ;
    UpdateWordGroupResponseBody(UpdateWordGroupResponseBody &&) = default ;
    UpdateWordGroupResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateWordGroupResponseBody() = default ;
    UpdateWordGroupResponseBody& operator=(const UpdateWordGroupResponseBody &) = default ;
    UpdateWordGroupResponseBody& operator=(UpdateWordGroupResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->code_ == nullptr
        && return this->httpStatusCode_ == nullptr && return this->message_ == nullptr && return this->requestId_ == nullptr && return this->success_ == nullptr && return this->wordErrorInfoList_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline UpdateWordGroupResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t httpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline UpdateWordGroupResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline UpdateWordGroupResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline UpdateWordGroupResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline UpdateWordGroupResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // wordErrorInfoList Field Functions 
    bool hasWordErrorInfoList() const { return this->wordErrorInfoList_ != nullptr;};
    void deleteWordErrorInfoList() { this->wordErrorInfoList_ = nullptr;};
    inline const vector<UpdateWordGroupResponseBodyWordErrorInfoList> & wordErrorInfoList() const { DARABONBA_PTR_GET_CONST(wordErrorInfoList_, vector<UpdateWordGroupResponseBodyWordErrorInfoList>) };
    inline vector<UpdateWordGroupResponseBodyWordErrorInfoList> wordErrorInfoList() { DARABONBA_PTR_GET(wordErrorInfoList_, vector<UpdateWordGroupResponseBodyWordErrorInfoList>) };
    inline UpdateWordGroupResponseBody& setWordErrorInfoList(const vector<UpdateWordGroupResponseBodyWordErrorInfoList> & wordErrorInfoList) { DARABONBA_PTR_SET_VALUE(wordErrorInfoList_, wordErrorInfoList) };
    inline UpdateWordGroupResponseBody& setWordErrorInfoList(vector<UpdateWordGroupResponseBodyWordErrorInfoList> && wordErrorInfoList) { DARABONBA_PTR_SET_RVALUE(wordErrorInfoList_, wordErrorInfoList) };


  protected:
    // Status code, 00000 indicates success; others indicate failure.
    std::shared_ptr<string> code_ = nullptr;
    // HTTP status code.
    std::shared_ptr<int32_t> httpStatusCode_ = nullptr;
    // If there is an error, return the error message.
    std::shared_ptr<string> message_ = nullptr;
    // Request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // Whether it was successful.
    std::shared_ptr<bool> success_ = nullptr;
    // List of error information.
    std::shared_ptr<vector<UpdateWordGroupResponseBodyWordErrorInfoList>> wordErrorInfoList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RAI20240701
#endif
