// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYAPPMETADATARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYAPPMETADATARESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class QueryAppMetadataResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryAppMetadataResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_ANY_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, QueryAppMetadataResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_ANY_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    QueryAppMetadataResponseBody() = default ;
    QueryAppMetadataResponseBody(const QueryAppMetadataResponseBody &) = default ;
    QueryAppMetadataResponseBody(QueryAppMetadataResponseBody &&) = default ;
    QueryAppMetadataResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryAppMetadataResponseBody() = default ;
    QueryAppMetadataResponseBody& operator=(const QueryAppMetadataResponseBody &) = default ;
    QueryAppMetadataResponseBody& operator=(QueryAppMetadataResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->code_ != nullptr
        && this->data_ != nullptr && this->httpStatusCode_ != nullptr && this->requestId_ != nullptr && this->success_ != nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t code() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline QueryAppMetadataResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline     const Darabonba::Json & data() const { DARABONBA_GET(data_) };
    Darabonba::Json & data() { DARABONBA_GET(data_) };
    inline QueryAppMetadataResponseBody& setData(const Darabonba::Json & data) { DARABONBA_SET_VALUE(data_, data) };
    inline QueryAppMetadataResponseBody& setData(Darabonba::Json & data) { DARABONBA_SET_RVALUE(data_, data) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t httpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline QueryAppMetadataResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryAppMetadataResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline QueryAppMetadataResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The HTTP status code returned for the request. Valid values:
    // 
    // *   2XX: The request is successful.
    // *   3XX: A redirection message is returned.
    // *   4XX: The request is invalid.
    // *   5XX: A server error occurs.
    std::shared_ptr<int32_t> code_ = nullptr;
    // The returned struct.
    Darabonba::Json data_ = nullptr;
    // The HTTP status code returned.
    std::shared_ptr<int32_t> httpStatusCode_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // Indicates whether the call was successful. Valid values:
    // 
    // *   `true`: The call was successful.
    // *   `false`: The call failed.
    std::shared_ptr<bool> success_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
