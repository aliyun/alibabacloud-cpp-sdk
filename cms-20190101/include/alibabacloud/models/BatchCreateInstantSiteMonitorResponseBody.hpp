// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BATCHCREATEINSTANTSITEMONITORRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_BATCHCREATEINSTANTSITEMONITORRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/BatchCreateInstantSiteMonitorResponseBodyData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class BatchCreateInstantSiteMonitorResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BatchCreateInstantSiteMonitorResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, BatchCreateInstantSiteMonitorResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    BatchCreateInstantSiteMonitorResponseBody() = default ;
    BatchCreateInstantSiteMonitorResponseBody(const BatchCreateInstantSiteMonitorResponseBody &) = default ;
    BatchCreateInstantSiteMonitorResponseBody(BatchCreateInstantSiteMonitorResponseBody &&) = default ;
    BatchCreateInstantSiteMonitorResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BatchCreateInstantSiteMonitorResponseBody() = default ;
    BatchCreateInstantSiteMonitorResponseBody& operator=(const BatchCreateInstantSiteMonitorResponseBody &) = default ;
    BatchCreateInstantSiteMonitorResponseBody& operator=(BatchCreateInstantSiteMonitorResponseBody &&) = default ;
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
    inline BatchCreateInstantSiteMonitorResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<BatchCreateInstantSiteMonitorResponseBodyData> & data() const { DARABONBA_PTR_GET_CONST(data_, vector<BatchCreateInstantSiteMonitorResponseBodyData>) };
    inline vector<BatchCreateInstantSiteMonitorResponseBodyData> data() { DARABONBA_PTR_GET(data_, vector<BatchCreateInstantSiteMonitorResponseBodyData>) };
    inline BatchCreateInstantSiteMonitorResponseBody& setData(const vector<BatchCreateInstantSiteMonitorResponseBodyData> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline BatchCreateInstantSiteMonitorResponseBody& setData(vector<BatchCreateInstantSiteMonitorResponseBodyData> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline BatchCreateInstantSiteMonitorResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline BatchCreateInstantSiteMonitorResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline BatchCreateInstantSiteMonitorResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The HTTP status code.
    // 
    // >  The status code 200 indicates that the request was successful.
    std::shared_ptr<string> code_ = nullptr;
    // The information about the site monitoring task.
    std::shared_ptr<vector<BatchCreateInstantSiteMonitorResponseBodyData>> data_ = nullptr;
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
} // namespace Cms20190101
#endif
