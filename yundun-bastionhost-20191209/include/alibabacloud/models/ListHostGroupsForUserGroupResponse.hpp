// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTHOSTGROUPSFORUSERGROUPRESPONSE_HPP_
#define ALIBABACLOUD_MODELS_LISTHOSTGROUPSFORUSERGROUPRESPONSE_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/models/ListHostGroupsForUserGroupResponseBody.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace YundunBastionhost20191209
{
namespace Models
{
  class ListHostGroupsForUserGroupResponse : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListHostGroupsForUserGroupResponse& obj) { 
      DARABONBA_PTR_TO_JSON(headers, headers_);
      DARABONBA_PTR_TO_JSON(statusCode, statusCode_);
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, ListHostGroupsForUserGroupResponse& obj) { 
      DARABONBA_PTR_FROM_JSON(headers, headers_);
      DARABONBA_PTR_FROM_JSON(statusCode, statusCode_);
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    ListHostGroupsForUserGroupResponse() = default ;
    ListHostGroupsForUserGroupResponse(const ListHostGroupsForUserGroupResponse &) = default ;
    ListHostGroupsForUserGroupResponse(ListHostGroupsForUserGroupResponse &&) = default ;
    ListHostGroupsForUserGroupResponse(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListHostGroupsForUserGroupResponse() = default ;
    ListHostGroupsForUserGroupResponse& operator=(const ListHostGroupsForUserGroupResponse &) = default ;
    ListHostGroupsForUserGroupResponse& operator=(ListHostGroupsForUserGroupResponse &&) = default ;
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
    inline ListHostGroupsForUserGroupResponse& setHeaders(const map<string, string> & headers) { DARABONBA_PTR_SET_VALUE(headers_, headers) };
    inline ListHostGroupsForUserGroupResponse& setHeaders(map<string, string> && headers) { DARABONBA_PTR_SET_RVALUE(headers_, headers) };


    // statusCode Field Functions 
    bool hasStatusCode() const { return this->statusCode_ != nullptr;};
    void deleteStatusCode() { this->statusCode_ = nullptr;};
    inline int32_t statusCode() const { DARABONBA_PTR_GET_DEFAULT(statusCode_, 0) };
    inline ListHostGroupsForUserGroupResponse& setStatusCode(int32_t statusCode) { DARABONBA_PTR_SET_VALUE(statusCode_, statusCode) };


    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const ListHostGroupsForUserGroupResponseBody & body() const { DARABONBA_PTR_GET_CONST(body_, ListHostGroupsForUserGroupResponseBody) };
    inline ListHostGroupsForUserGroupResponseBody body() { DARABONBA_PTR_GET(body_, ListHostGroupsForUserGroupResponseBody) };
    inline ListHostGroupsForUserGroupResponse& setBody(const ListHostGroupsForUserGroupResponseBody & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline ListHostGroupsForUserGroupResponse& setBody(ListHostGroupsForUserGroupResponseBody && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    std::shared_ptr<map<string, string>> headers_ = nullptr;
    std::shared_ptr<int32_t> statusCode_ = nullptr;
    std::shared_ptr<ListHostGroupsForUserGroupResponseBody> body_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace YundunBastionhost20191209
#endif
