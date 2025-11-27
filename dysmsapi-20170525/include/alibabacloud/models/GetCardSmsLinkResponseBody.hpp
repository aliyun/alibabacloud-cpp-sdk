// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCARDSMSLINKRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETCARDSMSLINKRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetCardSmsLinkResponseBodyData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dysmsapi20170525
{
namespace Models
{
  class GetCardSmsLinkResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetCardSmsLinkResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetCardSmsLinkResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetCardSmsLinkResponseBody() = default ;
    GetCardSmsLinkResponseBody(const GetCardSmsLinkResponseBody &) = default ;
    GetCardSmsLinkResponseBody(GetCardSmsLinkResponseBody &&) = default ;
    GetCardSmsLinkResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetCardSmsLinkResponseBody() = default ;
    GetCardSmsLinkResponseBody& operator=(const GetCardSmsLinkResponseBody &) = default ;
    GetCardSmsLinkResponseBody& operator=(GetCardSmsLinkResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->code_ == nullptr
        && return this->data_ == nullptr && return this->requestId_ == nullptr && return this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetCardSmsLinkResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetCardSmsLinkResponseBodyData & data() const { DARABONBA_PTR_GET_CONST(data_, GetCardSmsLinkResponseBodyData) };
    inline GetCardSmsLinkResponseBodyData data() { DARABONBA_PTR_GET(data_, GetCardSmsLinkResponseBodyData) };
    inline GetCardSmsLinkResponseBody& setData(const GetCardSmsLinkResponseBodyData & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetCardSmsLinkResponseBody& setData(GetCardSmsLinkResponseBodyData && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetCardSmsLinkResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetCardSmsLinkResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The HTTP status code.
    // 
    // *   The value OK indicates that the request was successful.
    // *   Other values indicate that the request failed. For more information, see [Error codes](https://help.aliyun.com/document_detail/101346.html).
    std::shared_ptr<string> code_ = nullptr;
    // The data returned.
    std::shared_ptr<GetCardSmsLinkResponseBodyData> data_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // Indicates whether the request is successful. Valid values:
    // 
    // *   **true**
    // *   **false**
    std::shared_ptr<bool> success_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dysmsapi20170525
#endif
