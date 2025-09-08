// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAUTOMATERESPONSECONFIGFEATURERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAUTOMATERESPONSECONFIGFEATURERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeAutomateResponseConfigFeatureResponseBodyData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudSiem20220616
{
namespace Models
{
  class DescribeAutomateResponseConfigFeatureResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAutomateResponseConfigFeatureResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAutomateResponseConfigFeatureResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    DescribeAutomateResponseConfigFeatureResponseBody() = default ;
    DescribeAutomateResponseConfigFeatureResponseBody(const DescribeAutomateResponseConfigFeatureResponseBody &) = default ;
    DescribeAutomateResponseConfigFeatureResponseBody(DescribeAutomateResponseConfigFeatureResponseBody &&) = default ;
    DescribeAutomateResponseConfigFeatureResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAutomateResponseConfigFeatureResponseBody() = default ;
    DescribeAutomateResponseConfigFeatureResponseBody& operator=(const DescribeAutomateResponseConfigFeatureResponseBody &) = default ;
    DescribeAutomateResponseConfigFeatureResponseBody& operator=(DescribeAutomateResponseConfigFeatureResponseBody &&) = default ;
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
    inline DescribeAutomateResponseConfigFeatureResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<DescribeAutomateResponseConfigFeatureResponseBodyData> & data() const { DARABONBA_PTR_GET_CONST(data_, vector<DescribeAutomateResponseConfigFeatureResponseBodyData>) };
    inline vector<DescribeAutomateResponseConfigFeatureResponseBodyData> data() { DARABONBA_PTR_GET(data_, vector<DescribeAutomateResponseConfigFeatureResponseBodyData>) };
    inline DescribeAutomateResponseConfigFeatureResponseBody& setData(const vector<DescribeAutomateResponseConfigFeatureResponseBodyData> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribeAutomateResponseConfigFeatureResponseBody& setData(vector<DescribeAutomateResponseConfigFeatureResponseBodyData> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DescribeAutomateResponseConfigFeatureResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeAutomateResponseConfigFeatureResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline DescribeAutomateResponseConfigFeatureResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The HTTP status code.
    std::shared_ptr<int32_t> code_ = nullptr;
    // The data returned.
    std::shared_ptr<vector<DescribeAutomateResponseConfigFeatureResponseBodyData>> data_ = nullptr;
    // The returned message.
    std::shared_ptr<string> message_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // Indicates whether the request was successful. Valid values:
    // 
    // *   true
    // *   false
    std::shared_ptr<bool> success_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudSiem20220616
#endif
