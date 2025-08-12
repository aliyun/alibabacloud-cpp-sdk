// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DISABLESITEMONITORSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DISABLESITEMONITORSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DisableSiteMonitorsResponseBodyData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class DisableSiteMonitorsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DisableSiteMonitorsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, DisableSiteMonitorsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    DisableSiteMonitorsResponseBody() = default ;
    DisableSiteMonitorsResponseBody(const DisableSiteMonitorsResponseBody &) = default ;
    DisableSiteMonitorsResponseBody(DisableSiteMonitorsResponseBody &&) = default ;
    DisableSiteMonitorsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DisableSiteMonitorsResponseBody() = default ;
    DisableSiteMonitorsResponseBody& operator=(const DisableSiteMonitorsResponseBody &) = default ;
    DisableSiteMonitorsResponseBody& operator=(DisableSiteMonitorsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->code_ != nullptr
        && this->data_ != nullptr && this->message_ != nullptr && this->requestId_ != nullptr && this->success_ != nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline DisableSiteMonitorsResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const DisableSiteMonitorsResponseBodyData & data() const { DARABONBA_PTR_GET_CONST(data_, DisableSiteMonitorsResponseBodyData) };
    inline DisableSiteMonitorsResponseBodyData data() { DARABONBA_PTR_GET(data_, DisableSiteMonitorsResponseBodyData) };
    inline DisableSiteMonitorsResponseBody& setData(const DisableSiteMonitorsResponseBodyData & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DisableSiteMonitorsResponseBody& setData(DisableSiteMonitorsResponseBodyData && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DisableSiteMonitorsResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DisableSiteMonitorsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline string success() const { DARABONBA_PTR_GET_DEFAULT(success_, "") };
    inline DisableSiteMonitorsResponseBody& setSuccess(string success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The responses code.
    // 
    // >  The status code 200 indicates that the request was successful.
    std::shared_ptr<string> code_ = nullptr;
    // The number of detection points that are affected by the site monitoring tasks.
    std::shared_ptr<DisableSiteMonitorsResponseBodyData> data_ = nullptr;
    // The returned message.
    std::shared_ptr<string> message_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // Indicates whether the request was successful. Valid values:
    // 
    // *   true
    // *   false
    std::shared_ptr<string> success_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
