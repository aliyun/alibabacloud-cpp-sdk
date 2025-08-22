// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTENVIRONMENTALERTRULESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTENVIRONMENTALERTRULESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListEnvironmentAlertRulesResponseBodyData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class ListEnvironmentAlertRulesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListEnvironmentAlertRulesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ListEnvironmentAlertRulesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ListEnvironmentAlertRulesResponseBody() = default ;
    ListEnvironmentAlertRulesResponseBody(const ListEnvironmentAlertRulesResponseBody &) = default ;
    ListEnvironmentAlertRulesResponseBody(ListEnvironmentAlertRulesResponseBody &&) = default ;
    ListEnvironmentAlertRulesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListEnvironmentAlertRulesResponseBody() = default ;
    ListEnvironmentAlertRulesResponseBody& operator=(const ListEnvironmentAlertRulesResponseBody &) = default ;
    ListEnvironmentAlertRulesResponseBody& operator=(ListEnvironmentAlertRulesResponseBody &&) = default ;
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
    inline ListEnvironmentAlertRulesResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ListEnvironmentAlertRulesResponseBodyData & data() const { DARABONBA_PTR_GET_CONST(data_, ListEnvironmentAlertRulesResponseBodyData) };
    inline ListEnvironmentAlertRulesResponseBodyData data() { DARABONBA_PTR_GET(data_, ListEnvironmentAlertRulesResponseBodyData) };
    inline ListEnvironmentAlertRulesResponseBody& setData(const ListEnvironmentAlertRulesResponseBodyData & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListEnvironmentAlertRulesResponseBody& setData(ListEnvironmentAlertRulesResponseBodyData && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListEnvironmentAlertRulesResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListEnvironmentAlertRulesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListEnvironmentAlertRulesResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The status code. The status code 200 indicates that the request was successful. Other status codes indicate that the request failed.
    std::shared_ptr<int32_t> code_ = nullptr;
    // The struct returned.
    std::shared_ptr<ListEnvironmentAlertRulesResponseBodyData> data_ = nullptr;
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
} // namespace ARMS20190808
#endif
