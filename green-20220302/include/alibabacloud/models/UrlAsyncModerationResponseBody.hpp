// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_URLASYNCMODERATIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_URLASYNCMODERATIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/UrlAsyncModerationResponseBodyData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Green20220302
{
namespace Models
{
  class UrlAsyncModerationResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UrlAsyncModerationResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Msg, msg_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, UrlAsyncModerationResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Msg, msg_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    UrlAsyncModerationResponseBody() = default ;
    UrlAsyncModerationResponseBody(const UrlAsyncModerationResponseBody &) = default ;
    UrlAsyncModerationResponseBody(UrlAsyncModerationResponseBody &&) = default ;
    UrlAsyncModerationResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UrlAsyncModerationResponseBody() = default ;
    UrlAsyncModerationResponseBody& operator=(const UrlAsyncModerationResponseBody &) = default ;
    UrlAsyncModerationResponseBody& operator=(UrlAsyncModerationResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->code_ == nullptr
        && return this->data_ == nullptr && return this->msg_ == nullptr && return this->requestId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t code() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline UrlAsyncModerationResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const UrlAsyncModerationResponseBodyData & data() const { DARABONBA_PTR_GET_CONST(data_, UrlAsyncModerationResponseBodyData) };
    inline UrlAsyncModerationResponseBodyData data() { DARABONBA_PTR_GET(data_, UrlAsyncModerationResponseBodyData) };
    inline UrlAsyncModerationResponseBody& setData(const UrlAsyncModerationResponseBodyData & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline UrlAsyncModerationResponseBody& setData(UrlAsyncModerationResponseBodyData && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // msg Field Functions 
    bool hasMsg() const { return this->msg_ != nullptr;};
    void deleteMsg() { this->msg_ = nullptr;};
    inline string msg() const { DARABONBA_PTR_GET_DEFAULT(msg_, "") };
    inline UrlAsyncModerationResponseBody& setMsg(string msg) { DARABONBA_PTR_SET_VALUE(msg_, msg) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline UrlAsyncModerationResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The returned HTTP status code.
    std::shared_ptr<int32_t> code_ = nullptr;
    // The data returned.
    std::shared_ptr<UrlAsyncModerationResponseBodyData> data_ = nullptr;
    // The message that is returned in response to the request.
    std::shared_ptr<string> msg_ = nullptr;
    // Id of the request
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Green20220302
#endif
