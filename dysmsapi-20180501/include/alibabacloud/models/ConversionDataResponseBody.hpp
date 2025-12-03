// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CONVERSIONDATARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CONVERSIONDATARESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dysmsapi20180501
{
namespace Models
{
  class ConversionDataResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ConversionDataResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResponseCode, responseCode_);
      DARABONBA_PTR_TO_JSON(ResponseDescription, responseDescription_);
    };
    friend void from_json(const Darabonba::Json& j, ConversionDataResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResponseCode, responseCode_);
      DARABONBA_PTR_FROM_JSON(ResponseDescription, responseDescription_);
    };
    ConversionDataResponseBody() = default ;
    ConversionDataResponseBody(const ConversionDataResponseBody &) = default ;
    ConversionDataResponseBody(ConversionDataResponseBody &&) = default ;
    ConversionDataResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ConversionDataResponseBody() = default ;
    ConversionDataResponseBody& operator=(const ConversionDataResponseBody &) = default ;
    ConversionDataResponseBody& operator=(ConversionDataResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && return this->responseCode_ == nullptr && return this->responseDescription_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ConversionDataResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // responseCode Field Functions 
    bool hasResponseCode() const { return this->responseCode_ != nullptr;};
    void deleteResponseCode() { this->responseCode_ = nullptr;};
    inline string responseCode() const { DARABONBA_PTR_GET_DEFAULT(responseCode_, "") };
    inline ConversionDataResponseBody& setResponseCode(string responseCode) { DARABONBA_PTR_SET_VALUE(responseCode_, responseCode) };


    // responseDescription Field Functions 
    bool hasResponseDescription() const { return this->responseDescription_ != nullptr;};
    void deleteResponseDescription() { this->responseDescription_ = nullptr;};
    inline string responseDescription() const { DARABONBA_PTR_GET_DEFAULT(responseDescription_, "") };
    inline ConversionDataResponseBody& setResponseDescription(string responseDescription) { DARABONBA_PTR_SET_VALUE(responseDescription_, responseDescription) };


  protected:
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // Status code. Returning OK means the request was successful. For other error codes, please refer to the [Error codes](https://help.aliyun.com/document_detail/180674.html) list.
    std::shared_ptr<string> responseCode_ = nullptr;
    // The description of the status code.
    std::shared_ptr<string> responseDescription_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dysmsapi20180501
#endif
