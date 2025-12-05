// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETALLREGIONSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETALLREGIONSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <map>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PTS20201020
{
namespace Models
{
  class GetAllRegionsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAllRegionsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AllRegions, allRegions_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetAllRegionsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AllRegions, allRegions_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetAllRegionsResponseBody() = default ;
    GetAllRegionsResponseBody(const GetAllRegionsResponseBody &) = default ;
    GetAllRegionsResponseBody(GetAllRegionsResponseBody &&) = default ;
    GetAllRegionsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAllRegionsResponseBody() = default ;
    GetAllRegionsResponseBody& operator=(const GetAllRegionsResponseBody &) = default ;
    GetAllRegionsResponseBody& operator=(GetAllRegionsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->allRegions_ == nullptr
        && return this->code_ == nullptr && return this->httpStatusCode_ == nullptr && return this->message_ == nullptr && return this->requestId_ == nullptr && return this->success_ == nullptr; };
    // allRegions Field Functions 
    bool hasAllRegions() const { return this->allRegions_ != nullptr;};
    void deleteAllRegions() { this->allRegions_ = nullptr;};
    inline const map<string, string> & allRegions() const { DARABONBA_PTR_GET_CONST(allRegions_, map<string, string>) };
    inline map<string, string> allRegions() { DARABONBA_PTR_GET(allRegions_, map<string, string>) };
    inline GetAllRegionsResponseBody& setAllRegions(const map<string, string> & allRegions) { DARABONBA_PTR_SET_VALUE(allRegions_, allRegions) };
    inline GetAllRegionsResponseBody& setAllRegions(map<string, string> && allRegions) { DARABONBA_PTR_SET_RVALUE(allRegions_, allRegions) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetAllRegionsResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t httpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline GetAllRegionsResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetAllRegionsResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetAllRegionsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetAllRegionsResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The supported regions.
    std::shared_ptr<map<string, string>> allRegions_ = nullptr;
    // The system status code. If the request was successful, no data is returned.
    std::shared_ptr<string> code_ = nullptr;
    // The HTTP status code.
    std::shared_ptr<int32_t> httpStatusCode_ = nullptr;
    // The returned message. If the request was successful, no data is returned.
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
} // namespace PTS20201020
#endif
