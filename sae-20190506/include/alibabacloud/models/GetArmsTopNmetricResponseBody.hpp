// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETARMSTOPNMETRICRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETARMSTOPNMETRICRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetArmsTopNMetricResponseBodyData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sae20190506
{
namespace Models
{
  class GetArmsTopNMetricResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetArmsTopNMetricResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetArmsTopNMetricResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetArmsTopNMetricResponseBody() = default ;
    GetArmsTopNMetricResponseBody(const GetArmsTopNMetricResponseBody &) = default ;
    GetArmsTopNMetricResponseBody(GetArmsTopNMetricResponseBody &&) = default ;
    GetArmsTopNMetricResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetArmsTopNMetricResponseBody() = default ;
    GetArmsTopNMetricResponseBody& operator=(const GetArmsTopNMetricResponseBody &) = default ;
    GetArmsTopNMetricResponseBody& operator=(GetArmsTopNMetricResponseBody &&) = default ;
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
    inline GetArmsTopNMetricResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<GetArmsTopNMetricResponseBodyData> & data() const { DARABONBA_PTR_GET_CONST(data_, vector<GetArmsTopNMetricResponseBodyData>) };
    inline vector<GetArmsTopNMetricResponseBodyData> data() { DARABONBA_PTR_GET(data_, vector<GetArmsTopNMetricResponseBodyData>) };
    inline GetArmsTopNMetricResponseBody& setData(const vector<GetArmsTopNMetricResponseBodyData> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetArmsTopNMetricResponseBody& setData(vector<GetArmsTopNMetricResponseBodyData> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetArmsTopNMetricResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetArmsTopNMetricResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetArmsTopNMetricResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The HTTP status code. The following limits are imposed on the ID:
    // 
    // *   **2xx**: The call was successful.
    // *   **3xx**: The call was redirected.
    // *   **4xx**: The call failed.
    // *   **5xx**: A server error occurred.
    std::shared_ptr<string> code_ = nullptr;
    // The details of applications.
    std::shared_ptr<vector<GetArmsTopNMetricResponseBodyData>> data_ = nullptr;
    // The request ID.
    std::shared_ptr<string> message_ = nullptr;
    // 3B763F98-0BA2-5C23-B6B8-558568D2C1C2
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
