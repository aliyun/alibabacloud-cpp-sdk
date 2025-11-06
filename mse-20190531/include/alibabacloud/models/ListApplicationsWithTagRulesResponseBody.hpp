// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAPPLICATIONSWITHTAGRULESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTAPPLICATIONSWITHTAGRULESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListApplicationsWithTagRulesResponseBodyData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class ListApplicationsWithTagRulesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListApplicationsWithTagRulesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ListApplicationsWithTagRulesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ListApplicationsWithTagRulesResponseBody() = default ;
    ListApplicationsWithTagRulesResponseBody(const ListApplicationsWithTagRulesResponseBody &) = default ;
    ListApplicationsWithTagRulesResponseBody(ListApplicationsWithTagRulesResponseBody &&) = default ;
    ListApplicationsWithTagRulesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListApplicationsWithTagRulesResponseBody() = default ;
    ListApplicationsWithTagRulesResponseBody& operator=(const ListApplicationsWithTagRulesResponseBody &) = default ;
    ListApplicationsWithTagRulesResponseBody& operator=(ListApplicationsWithTagRulesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->data_ == nullptr
        && return this->httpStatusCode_ == nullptr && return this->message_ == nullptr && return this->requestId_ == nullptr && return this->success_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ListApplicationsWithTagRulesResponseBodyData & data() const { DARABONBA_PTR_GET_CONST(data_, ListApplicationsWithTagRulesResponseBodyData) };
    inline ListApplicationsWithTagRulesResponseBodyData data() { DARABONBA_PTR_GET(data_, ListApplicationsWithTagRulesResponseBodyData) };
    inline ListApplicationsWithTagRulesResponseBody& setData(const ListApplicationsWithTagRulesResponseBodyData & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListApplicationsWithTagRulesResponseBody& setData(ListApplicationsWithTagRulesResponseBodyData && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t httpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline ListApplicationsWithTagRulesResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListApplicationsWithTagRulesResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListApplicationsWithTagRulesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListApplicationsWithTagRulesResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The response parameters.
    std::shared_ptr<ListApplicationsWithTagRulesResponseBodyData> data_ = nullptr;
    // The HTTP status code returned.
    std::shared_ptr<int32_t> httpStatusCode_ = nullptr;
    // The returned message.
    // 
    // *   If the request is successful, a success message is returned.
    // *   If the request fails, an error message is returned.
    std::shared_ptr<string> message_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // Indicates whether the request was successful. Valid values:
    // 
    // *   `true`: The request was successful.
    // *   `false`: The request failed.
    std::shared_ptr<bool> success_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
