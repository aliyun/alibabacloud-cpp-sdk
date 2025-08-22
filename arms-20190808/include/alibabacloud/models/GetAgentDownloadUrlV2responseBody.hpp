// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAGENTDOWNLOADURLV2RESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETAGENTDOWNLOADURLV2RESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetAgentDownloadUrlV2ResponseBodyData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class GetAgentDownloadUrlV2ResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAgentDownloadUrlV2ResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetAgentDownloadUrlV2ResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetAgentDownloadUrlV2ResponseBody() = default ;
    GetAgentDownloadUrlV2ResponseBody(const GetAgentDownloadUrlV2ResponseBody &) = default ;
    GetAgentDownloadUrlV2ResponseBody(GetAgentDownloadUrlV2ResponseBody &&) = default ;
    GetAgentDownloadUrlV2ResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAgentDownloadUrlV2ResponseBody() = default ;
    GetAgentDownloadUrlV2ResponseBody& operator=(const GetAgentDownloadUrlV2ResponseBody &) = default ;
    GetAgentDownloadUrlV2ResponseBody& operator=(GetAgentDownloadUrlV2ResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->code_ != nullptr
        && this->data_ != nullptr && this->message_ != nullptr && this->requestId_ != nullptr && this->success_ != nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int64_t code() const { DARABONBA_PTR_GET_DEFAULT(code_, 0L) };
    inline GetAgentDownloadUrlV2ResponseBody& setCode(int64_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetAgentDownloadUrlV2ResponseBodyData & data() const { DARABONBA_PTR_GET_CONST(data_, GetAgentDownloadUrlV2ResponseBodyData) };
    inline GetAgentDownloadUrlV2ResponseBodyData data() { DARABONBA_PTR_GET(data_, GetAgentDownloadUrlV2ResponseBodyData) };
    inline GetAgentDownloadUrlV2ResponseBody& setData(const GetAgentDownloadUrlV2ResponseBodyData & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetAgentDownloadUrlV2ResponseBody& setData(GetAgentDownloadUrlV2ResponseBodyData && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetAgentDownloadUrlV2ResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetAgentDownloadUrlV2ResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetAgentDownloadUrlV2ResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The HTTP status code.\\
    // **Valid values:**
    // 
    // *   2xx: The request was successful.
    // *   3xx: The request was redirected.
    // *   4xx: The request was invalid.
    // *   5xx: A server error occurred.
    std::shared_ptr<int64_t> code_ = nullptr;
    // The version number and download URL of the agent.
    std::shared_ptr<GetAgentDownloadUrlV2ResponseBodyData> data_ = nullptr;
    // The returned message.
    std::shared_ptr<string> message_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // Indicates whether the request was successful.\\
    // **Valid values:**
    // 
    // *   true
    // *   false
    std::shared_ptr<bool> success_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
