// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPROJECTSBYDEPENDENCYIDRESPONSE_HPP_
#define ALIBABACLOUD_MODELS_LISTPROJECTSBYDEPENDENCYIDRESPONSE_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/models/ListProjectsByDependencyIdResponseBody.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace XrEngine20221111
{
namespace Models
{
  class ListProjectsByDependencyIdResponse : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListProjectsByDependencyIdResponse& obj) { 
      DARABONBA_PTR_TO_JSON(headers, headers_);
      DARABONBA_PTR_TO_JSON(statusCode, statusCode_);
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, ListProjectsByDependencyIdResponse& obj) { 
      DARABONBA_PTR_FROM_JSON(headers, headers_);
      DARABONBA_PTR_FROM_JSON(statusCode, statusCode_);
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    ListProjectsByDependencyIdResponse() = default ;
    ListProjectsByDependencyIdResponse(const ListProjectsByDependencyIdResponse &) = default ;
    ListProjectsByDependencyIdResponse(ListProjectsByDependencyIdResponse &&) = default ;
    ListProjectsByDependencyIdResponse(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListProjectsByDependencyIdResponse() = default ;
    ListProjectsByDependencyIdResponse& operator=(const ListProjectsByDependencyIdResponse &) = default ;
    ListProjectsByDependencyIdResponse& operator=(ListProjectsByDependencyIdResponse &&) = default ;
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
    inline ListProjectsByDependencyIdResponse& setHeaders(const map<string, string> & headers) { DARABONBA_PTR_SET_VALUE(headers_, headers) };
    inline ListProjectsByDependencyIdResponse& setHeaders(map<string, string> && headers) { DARABONBA_PTR_SET_RVALUE(headers_, headers) };


    // statusCode Field Functions 
    bool hasStatusCode() const { return this->statusCode_ != nullptr;};
    void deleteStatusCode() { this->statusCode_ = nullptr;};
    inline int32_t getStatusCode() const { DARABONBA_PTR_GET_DEFAULT(statusCode_, 0) };
    inline ListProjectsByDependencyIdResponse& setStatusCode(int32_t statusCode) { DARABONBA_PTR_SET_VALUE(statusCode_, statusCode) };


    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const ListProjectsByDependencyIdResponseBody & getBody() const { DARABONBA_PTR_GET_CONST(body_, ListProjectsByDependencyIdResponseBody) };
    inline ListProjectsByDependencyIdResponseBody getBody() { DARABONBA_PTR_GET(body_, ListProjectsByDependencyIdResponseBody) };
    inline ListProjectsByDependencyIdResponse& setBody(const ListProjectsByDependencyIdResponseBody & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline ListProjectsByDependencyIdResponse& setBody(ListProjectsByDependencyIdResponseBody && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    shared_ptr<map<string, string>> headers_ {};
    shared_ptr<int32_t> statusCode_ {};
    shared_ptr<ListProjectsByDependencyIdResponseBody> body_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace XrEngine20221111
#endif
