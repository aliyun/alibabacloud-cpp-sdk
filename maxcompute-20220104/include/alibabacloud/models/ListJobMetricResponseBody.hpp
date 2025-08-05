// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTJOBMETRICRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTJOBMETRICRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListJobMetricResponseBodyData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MaxCompute20220104
{
namespace Models
{
  class ListJobMetricResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListJobMetricResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(errorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(errorMsg, errorMsg_);
      DARABONBA_PTR_TO_JSON(httpCode, httpCode_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListJobMetricResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(errorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(errorMsg, errorMsg_);
      DARABONBA_PTR_FROM_JSON(httpCode, httpCode_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    ListJobMetricResponseBody() = default ;
    ListJobMetricResponseBody(const ListJobMetricResponseBody &) = default ;
    ListJobMetricResponseBody(ListJobMetricResponseBody &&) = default ;
    ListJobMetricResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListJobMetricResponseBody() = default ;
    ListJobMetricResponseBody& operator=(const ListJobMetricResponseBody &) = default ;
    ListJobMetricResponseBody& operator=(ListJobMetricResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->data_ != nullptr
        && this->errorCode_ != nullptr && this->errorMsg_ != nullptr && this->httpCode_ != nullptr && this->requestId_ != nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ListJobMetricResponseBodyData & data() const { DARABONBA_PTR_GET_CONST(data_, ListJobMetricResponseBodyData) };
    inline ListJobMetricResponseBodyData data() { DARABONBA_PTR_GET(data_, ListJobMetricResponseBodyData) };
    inline ListJobMetricResponseBody& setData(const ListJobMetricResponseBodyData & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListJobMetricResponseBody& setData(ListJobMetricResponseBodyData && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string errorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline ListJobMetricResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMsg Field Functions 
    bool hasErrorMsg() const { return this->errorMsg_ != nullptr;};
    void deleteErrorMsg() { this->errorMsg_ = nullptr;};
    inline string errorMsg() const { DARABONBA_PTR_GET_DEFAULT(errorMsg_, "") };
    inline ListJobMetricResponseBody& setErrorMsg(string errorMsg) { DARABONBA_PTR_SET_VALUE(errorMsg_, errorMsg) };


    // httpCode Field Functions 
    bool hasHttpCode() const { return this->httpCode_ != nullptr;};
    void deleteHttpCode() { this->httpCode_ = nullptr;};
    inline int32_t httpCode() const { DARABONBA_PTR_GET_DEFAULT(httpCode_, 0) };
    inline ListJobMetricResponseBody& setHttpCode(int32_t httpCode) { DARABONBA_PTR_SET_VALUE(httpCode_, httpCode) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListJobMetricResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The data returned.
    std::shared_ptr<ListJobMetricResponseBodyData> data_ = nullptr;
    // The error code.
    std::shared_ptr<string> errorCode_ = nullptr;
    // The error message.
    std::shared_ptr<string> errorMsg_ = nullptr;
    // HTTP status code.
    // - 1xx: Informational response - Request received, processing continues.
    // - 2xx: Success - The request has been successfully received, understood, and accepted by the server.
    // - 3xx: Redirection - Further action must be taken to complete the request.
    // - 4xx: Client error - The request contains bad syntax or cannot be fulfilled.
    // - 5xx: Server error - The server failed to fulfill an apparently valid request.
    std::shared_ptr<int32_t> httpCode_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MaxCompute20220104
#endif
