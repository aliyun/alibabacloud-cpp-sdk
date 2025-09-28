// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVERIFYSCHEMERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVERIFYSCHEMERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeVerifySchemeResponseBodySchemeQueryResultDTO.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dypnsapi20170525
{
namespace Models
{
  class DescribeVerifySchemeResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVerifySchemeResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SchemeQueryResultDTO, schemeQueryResultDTO_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVerifySchemeResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SchemeQueryResultDTO, schemeQueryResultDTO_);
    };
    DescribeVerifySchemeResponseBody() = default ;
    DescribeVerifySchemeResponseBody(const DescribeVerifySchemeResponseBody &) = default ;
    DescribeVerifySchemeResponseBody(DescribeVerifySchemeResponseBody &&) = default ;
    DescribeVerifySchemeResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVerifySchemeResponseBody() = default ;
    DescribeVerifySchemeResponseBody& operator=(const DescribeVerifySchemeResponseBody &) = default ;
    DescribeVerifySchemeResponseBody& operator=(DescribeVerifySchemeResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->code_ != nullptr
        && this->message_ != nullptr && this->requestId_ != nullptr && this->schemeQueryResultDTO_ != nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline DescribeVerifySchemeResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DescribeVerifySchemeResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeVerifySchemeResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // schemeQueryResultDTO Field Functions 
    bool hasSchemeQueryResultDTO() const { return this->schemeQueryResultDTO_ != nullptr;};
    void deleteSchemeQueryResultDTO() { this->schemeQueryResultDTO_ = nullptr;};
    inline const DescribeVerifySchemeResponseBodySchemeQueryResultDTO & schemeQueryResultDTO() const { DARABONBA_PTR_GET_CONST(schemeQueryResultDTO_, DescribeVerifySchemeResponseBodySchemeQueryResultDTO) };
    inline DescribeVerifySchemeResponseBodySchemeQueryResultDTO schemeQueryResultDTO() { DARABONBA_PTR_GET(schemeQueryResultDTO_, DescribeVerifySchemeResponseBodySchemeQueryResultDTO) };
    inline DescribeVerifySchemeResponseBody& setSchemeQueryResultDTO(const DescribeVerifySchemeResponseBodySchemeQueryResultDTO & schemeQueryResultDTO) { DARABONBA_PTR_SET_VALUE(schemeQueryResultDTO_, schemeQueryResultDTO) };
    inline DescribeVerifySchemeResponseBody& setSchemeQueryResultDTO(DescribeVerifySchemeResponseBodySchemeQueryResultDTO && schemeQueryResultDTO) { DARABONBA_PTR_SET_RVALUE(schemeQueryResultDTO_, schemeQueryResultDTO) };


  protected:
    // The response code. OK indicates that the request is successful. For more information about other error codes, see [API response codes](https://help.aliyun.com/document_detail/85198.html).
    std::shared_ptr<string> code_ = nullptr;
    // The returned message.
    std::shared_ptr<string> message_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The response parameters.
    std::shared_ptr<DescribeVerifySchemeResponseBodySchemeQueryResultDTO> schemeQueryResultDTO_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dypnsapi20170525
#endif
