// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAVAILABILITYMETRICRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETAVAILABILITYMETRICRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetAvailabilityMetricResponseBodyData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sae20190506
{
namespace Models
{
  class GetAvailabilityMetricResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAvailabilityMetricResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetAvailabilityMetricResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetAvailabilityMetricResponseBody() = default ;
    GetAvailabilityMetricResponseBody(const GetAvailabilityMetricResponseBody &) = default ;
    GetAvailabilityMetricResponseBody(GetAvailabilityMetricResponseBody &&) = default ;
    GetAvailabilityMetricResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAvailabilityMetricResponseBody() = default ;
    GetAvailabilityMetricResponseBody& operator=(const GetAvailabilityMetricResponseBody &) = default ;
    GetAvailabilityMetricResponseBody& operator=(GetAvailabilityMetricResponseBody &&) = default ;
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
    inline GetAvailabilityMetricResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<GetAvailabilityMetricResponseBodyData> & data() const { DARABONBA_PTR_GET_CONST(data_, vector<GetAvailabilityMetricResponseBodyData>) };
    inline vector<GetAvailabilityMetricResponseBodyData> data() { DARABONBA_PTR_GET(data_, vector<GetAvailabilityMetricResponseBodyData>) };
    inline GetAvailabilityMetricResponseBody& setData(const vector<GetAvailabilityMetricResponseBodyData> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetAvailabilityMetricResponseBody& setData(vector<GetAvailabilityMetricResponseBodyData> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetAvailabilityMetricResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetAvailabilityMetricResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetAvailabilityMetricResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The HTTP status code. The following limits are imposed on the ID:
    // 
    // *   **2xx**: The call was successful.
    // *   **3xx**: The call was redirected.
    // *   **4xx**: The call failed.
    // *   **5xx**: A server error occurred.
    std::shared_ptr<string> code_ = nullptr;
    // The data entries returned.
    std::shared_ptr<vector<GetAvailabilityMetricResponseBodyData>> data_ = nullptr;
    // The additional information that is returned. The following limits are imposed on the ID:
    // 
    // *   success: If the call is successful, **success** is returned.
    // *   An error code: If the call fails, an error code is returned.
    std::shared_ptr<string> message_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // Indicates whether the list of applications was obtained. The following limits are imposed on the ID:
    // 
    // *   **true**: The namespaces were obtained.
    // *   **false**: no
    std::shared_ptr<bool> success_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
