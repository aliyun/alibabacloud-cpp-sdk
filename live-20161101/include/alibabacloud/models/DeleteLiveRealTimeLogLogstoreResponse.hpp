// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETELIVEREALTIMELOGLOGSTORERESPONSE_HPP_
#define ALIBABACLOUD_MODELS_DELETELIVEREALTIMELOGLOGSTORERESPONSE_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/models/DeleteLiveRealTimeLogLogstoreResponseBody.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DeleteLiveRealTimeLogLogstoreResponse : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteLiveRealTimeLogLogstoreResponse& obj) { 
      DARABONBA_PTR_TO_JSON(headers, headers_);
      DARABONBA_PTR_TO_JSON(statusCode, statusCode_);
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteLiveRealTimeLogLogstoreResponse& obj) { 
      DARABONBA_PTR_FROM_JSON(headers, headers_);
      DARABONBA_PTR_FROM_JSON(statusCode, statusCode_);
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    DeleteLiveRealTimeLogLogstoreResponse() = default ;
    DeleteLiveRealTimeLogLogstoreResponse(const DeleteLiveRealTimeLogLogstoreResponse &) = default ;
    DeleteLiveRealTimeLogLogstoreResponse(DeleteLiveRealTimeLogLogstoreResponse &&) = default ;
    DeleteLiveRealTimeLogLogstoreResponse(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteLiveRealTimeLogLogstoreResponse() = default ;
    DeleteLiveRealTimeLogLogstoreResponse& operator=(const DeleteLiveRealTimeLogLogstoreResponse &) = default ;
    DeleteLiveRealTimeLogLogstoreResponse& operator=(DeleteLiveRealTimeLogLogstoreResponse &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->headers_ == nullptr
        && return this->statusCode_ == nullptr && return this->body_ == nullptr; };
    // headers Field Functions 
    bool hasHeaders() const { return this->headers_ != nullptr;};
    void deleteHeaders() { this->headers_ = nullptr;};
    inline const map<string, string> & headers() const { DARABONBA_PTR_GET_CONST(headers_, map<string, string>) };
    inline map<string, string> headers() { DARABONBA_PTR_GET(headers_, map<string, string>) };
    inline DeleteLiveRealTimeLogLogstoreResponse& setHeaders(const map<string, string> & headers) { DARABONBA_PTR_SET_VALUE(headers_, headers) };
    inline DeleteLiveRealTimeLogLogstoreResponse& setHeaders(map<string, string> && headers) { DARABONBA_PTR_SET_RVALUE(headers_, headers) };


    // statusCode Field Functions 
    bool hasStatusCode() const { return this->statusCode_ != nullptr;};
    void deleteStatusCode() { this->statusCode_ = nullptr;};
    inline int32_t statusCode() const { DARABONBA_PTR_GET_DEFAULT(statusCode_, 0) };
    inline DeleteLiveRealTimeLogLogstoreResponse& setStatusCode(int32_t statusCode) { DARABONBA_PTR_SET_VALUE(statusCode_, statusCode) };


    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const DeleteLiveRealTimeLogLogstoreResponseBody & body() const { DARABONBA_PTR_GET_CONST(body_, DeleteLiveRealTimeLogLogstoreResponseBody) };
    inline DeleteLiveRealTimeLogLogstoreResponseBody body() { DARABONBA_PTR_GET(body_, DeleteLiveRealTimeLogLogstoreResponseBody) };
    inline DeleteLiveRealTimeLogLogstoreResponse& setBody(const DeleteLiveRealTimeLogLogstoreResponseBody & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline DeleteLiveRealTimeLogLogstoreResponse& setBody(DeleteLiveRealTimeLogLogstoreResponseBody && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    std::shared_ptr<map<string, string>> headers_ = nullptr;
    std::shared_ptr<int32_t> statusCode_ = nullptr;
    std::shared_ptr<DeleteLiveRealTimeLogLogstoreResponseBody> body_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
