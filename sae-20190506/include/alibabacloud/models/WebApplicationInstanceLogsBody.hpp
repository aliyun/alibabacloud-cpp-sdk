// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_WEBAPPLICATIONINSTANCELOGSBODY_HPP_
#define ALIBABACLOUD_MODELS_WEBAPPLICATIONINSTANCELOGSBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeInstanceLogsOutput.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sae20190506
{
namespace Models
{
  class WebApplicationInstanceLogsBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const WebApplicationInstanceLogsBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, WebApplicationInstanceLogsBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    WebApplicationInstanceLogsBody() = default ;
    WebApplicationInstanceLogsBody(const WebApplicationInstanceLogsBody &) = default ;
    WebApplicationInstanceLogsBody(WebApplicationInstanceLogsBody &&) = default ;
    WebApplicationInstanceLogsBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~WebApplicationInstanceLogsBody() = default ;
    WebApplicationInstanceLogsBody& operator=(const WebApplicationInstanceLogsBody &) = default ;
    WebApplicationInstanceLogsBody& operator=(WebApplicationInstanceLogsBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->code_ != nullptr
        && this->data_ != nullptr && this->message_ != nullptr && this->requestId_ != nullptr && this->success_ != nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t code() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline WebApplicationInstanceLogsBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const DescribeInstanceLogsOutput & data() const { DARABONBA_PTR_GET_CONST(data_, DescribeInstanceLogsOutput) };
    inline DescribeInstanceLogsOutput data() { DARABONBA_PTR_GET(data_, DescribeInstanceLogsOutput) };
    inline WebApplicationInstanceLogsBody& setData(const DescribeInstanceLogsOutput & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline WebApplicationInstanceLogsBody& setData(DescribeInstanceLogsOutput && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline WebApplicationInstanceLogsBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline WebApplicationInstanceLogsBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline WebApplicationInstanceLogsBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    std::shared_ptr<int32_t> code_ = nullptr;
    std::shared_ptr<DescribeInstanceLogsOutput> data_ = nullptr;
    std::shared_ptr<string> message_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<bool> success_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
