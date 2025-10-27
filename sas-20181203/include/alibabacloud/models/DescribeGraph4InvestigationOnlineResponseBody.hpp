// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEGRAPH4INVESTIGATIONONLINERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEGRAPH4INVESTIGATIONONLINERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeGraph4InvestigationOnlineResponseBodyData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeGraph4InvestigationOnlineResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeGraph4InvestigationOnlineResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeGraph4InvestigationOnlineResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    DescribeGraph4InvestigationOnlineResponseBody() = default ;
    DescribeGraph4InvestigationOnlineResponseBody(const DescribeGraph4InvestigationOnlineResponseBody &) = default ;
    DescribeGraph4InvestigationOnlineResponseBody(DescribeGraph4InvestigationOnlineResponseBody &&) = default ;
    DescribeGraph4InvestigationOnlineResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeGraph4InvestigationOnlineResponseBody() = default ;
    DescribeGraph4InvestigationOnlineResponseBody& operator=(const DescribeGraph4InvestigationOnlineResponseBody &) = default ;
    DescribeGraph4InvestigationOnlineResponseBody& operator=(DescribeGraph4InvestigationOnlineResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->code_ == nullptr
        && return this->data_ == nullptr && return this->message_ == nullptr && return this->requestId_ == nullptr && return this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline DescribeGraph4InvestigationOnlineResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const DescribeGraph4InvestigationOnlineResponseBodyData & data() const { DARABONBA_PTR_GET_CONST(data_, DescribeGraph4InvestigationOnlineResponseBodyData) };
    inline DescribeGraph4InvestigationOnlineResponseBodyData data() { DARABONBA_PTR_GET(data_, DescribeGraph4InvestigationOnlineResponseBodyData) };
    inline DescribeGraph4InvestigationOnlineResponseBody& setData(const DescribeGraph4InvestigationOnlineResponseBodyData & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribeGraph4InvestigationOnlineResponseBody& setData(DescribeGraph4InvestigationOnlineResponseBodyData && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DescribeGraph4InvestigationOnlineResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeGraph4InvestigationOnlineResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline DescribeGraph4InvestigationOnlineResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // Result code, where **200** indicates success. Any other value indicates failure, and the caller can use this field to determine the reason for the failure.
    std::shared_ptr<string> code_ = nullptr;
    // Data
    std::shared_ptr<DescribeGraph4InvestigationOnlineResponseBodyData> data_ = nullptr;
    // The response message from the request.
    std::shared_ptr<string> message_ = nullptr;
    // A unique identifier generated by Alibaba Cloud for this request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The result status of the API call. Values:
    // - **true**: The API call was successful.
    // - **false**: The API call failed.
    std::shared_ptr<bool> success_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
