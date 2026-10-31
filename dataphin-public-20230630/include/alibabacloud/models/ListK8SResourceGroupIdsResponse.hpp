// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTK8SRESOURCEGROUPIDSRESPONSE_HPP_
#define ALIBABACLOUD_MODELS_LISTK8SRESOURCEGROUPIDSRESPONSE_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/models/ListK8SResourceGroupIdsResponseBody.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class ListK8SResourceGroupIdsResponse : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListK8SResourceGroupIdsResponse& obj) { 
      DARABONBA_PTR_TO_JSON(headers, headers_);
      DARABONBA_PTR_TO_JSON(statusCode, statusCode_);
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, ListK8SResourceGroupIdsResponse& obj) { 
      DARABONBA_PTR_FROM_JSON(headers, headers_);
      DARABONBA_PTR_FROM_JSON(statusCode, statusCode_);
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    ListK8SResourceGroupIdsResponse() = default ;
    ListK8SResourceGroupIdsResponse(const ListK8SResourceGroupIdsResponse &) = default ;
    ListK8SResourceGroupIdsResponse(ListK8SResourceGroupIdsResponse &&) = default ;
    ListK8SResourceGroupIdsResponse(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListK8SResourceGroupIdsResponse() = default ;
    ListK8SResourceGroupIdsResponse& operator=(const ListK8SResourceGroupIdsResponse &) = default ;
    ListK8SResourceGroupIdsResponse& operator=(ListK8SResourceGroupIdsResponse &&) = default ;
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
    inline ListK8SResourceGroupIdsResponse& setHeaders(const map<string, string> & headers) { DARABONBA_PTR_SET_VALUE(headers_, headers) };
    inline ListK8SResourceGroupIdsResponse& setHeaders(map<string, string> && headers) { DARABONBA_PTR_SET_RVALUE(headers_, headers) };


    // statusCode Field Functions 
    bool hasStatusCode() const { return this->statusCode_ != nullptr;};
    void deleteStatusCode() { this->statusCode_ = nullptr;};
    inline int32_t getStatusCode() const { DARABONBA_PTR_GET_DEFAULT(statusCode_, 0) };
    inline ListK8SResourceGroupIdsResponse& setStatusCode(int32_t statusCode) { DARABONBA_PTR_SET_VALUE(statusCode_, statusCode) };


    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const ListK8SResourceGroupIdsResponseBody & getBody() const { DARABONBA_PTR_GET_CONST(body_, ListK8SResourceGroupIdsResponseBody) };
    inline ListK8SResourceGroupIdsResponseBody getBody() { DARABONBA_PTR_GET(body_, ListK8SResourceGroupIdsResponseBody) };
    inline ListK8SResourceGroupIdsResponse& setBody(const ListK8SResourceGroupIdsResponseBody & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline ListK8SResourceGroupIdsResponse& setBody(ListK8SResourceGroupIdsResponseBody && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    shared_ptr<map<string, string>> headers_ {};
    shared_ptr<int32_t> statusCode_ {};
    shared_ptr<ListK8SResourceGroupIdsResponseBody> body_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
