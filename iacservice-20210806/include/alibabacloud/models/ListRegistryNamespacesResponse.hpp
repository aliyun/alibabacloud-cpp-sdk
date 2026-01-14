// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTREGISTRYNAMESPACESRESPONSE_HPP_
#define ALIBABACLOUD_MODELS_LISTREGISTRYNAMESPACESRESPONSE_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/models/ListRegistryNamespacesResponseBody.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IaCService20210806
{
namespace Models
{
  class ListRegistryNamespacesResponse : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListRegistryNamespacesResponse& obj) { 
      DARABONBA_PTR_TO_JSON(headers, headers_);
      DARABONBA_PTR_TO_JSON(statusCode, statusCode_);
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, ListRegistryNamespacesResponse& obj) { 
      DARABONBA_PTR_FROM_JSON(headers, headers_);
      DARABONBA_PTR_FROM_JSON(statusCode, statusCode_);
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    ListRegistryNamespacesResponse() = default ;
    ListRegistryNamespacesResponse(const ListRegistryNamespacesResponse &) = default ;
    ListRegistryNamespacesResponse(ListRegistryNamespacesResponse &&) = default ;
    ListRegistryNamespacesResponse(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListRegistryNamespacesResponse() = default ;
    ListRegistryNamespacesResponse& operator=(const ListRegistryNamespacesResponse &) = default ;
    ListRegistryNamespacesResponse& operator=(ListRegistryNamespacesResponse &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->headers_ == nullptr
        && this->statusCode_ == nullptr && this->body_ == nullptr; };
    // headers Field Functions 
    bool hasHeaders() const { return this->headers_ != nullptr;};
    void deleteHeaders() { this->headers_ = nullptr;};
    inline const map<string, string> & getHeaders() const { DARABONBA_PTR_GET_CONST(headers_, map<string, string>) };
    inline map<string, string> getHeaders() { DARABONBA_PTR_GET(headers_, map<string, string>) };
    inline ListRegistryNamespacesResponse& setHeaders(const map<string, string> & headers) { DARABONBA_PTR_SET_VALUE(headers_, headers) };
    inline ListRegistryNamespacesResponse& setHeaders(map<string, string> && headers) { DARABONBA_PTR_SET_RVALUE(headers_, headers) };


    // statusCode Field Functions 
    bool hasStatusCode() const { return this->statusCode_ != nullptr;};
    void deleteStatusCode() { this->statusCode_ = nullptr;};
    inline int32_t getStatusCode() const { DARABONBA_PTR_GET_DEFAULT(statusCode_, 0) };
    inline ListRegistryNamespacesResponse& setStatusCode(int32_t statusCode) { DARABONBA_PTR_SET_VALUE(statusCode_, statusCode) };


    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const ListRegistryNamespacesResponseBody & getBody() const { DARABONBA_PTR_GET_CONST(body_, ListRegistryNamespacesResponseBody) };
    inline ListRegistryNamespacesResponseBody getBody() { DARABONBA_PTR_GET(body_, ListRegistryNamespacesResponseBody) };
    inline ListRegistryNamespacesResponse& setBody(const ListRegistryNamespacesResponseBody & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline ListRegistryNamespacesResponse& setBody(ListRegistryNamespacesResponseBody && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    shared_ptr<map<string, string>> headers_ {};
    shared_ptr<int32_t> statusCode_ {};
    shared_ptr<ListRegistryNamespacesResponseBody> body_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IaCService20210806
#endif
