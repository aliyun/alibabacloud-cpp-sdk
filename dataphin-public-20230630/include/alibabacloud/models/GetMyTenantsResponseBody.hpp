// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMYTENANTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETMYTENANTSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetMyTenantsResponseBodyTenantList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class GetMyTenantsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetMyTenantsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(TenantList, tenantList_);
    };
    friend void from_json(const Darabonba::Json& j, GetMyTenantsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(TenantList, tenantList_);
    };
    GetMyTenantsResponseBody() = default ;
    GetMyTenantsResponseBody(const GetMyTenantsResponseBody &) = default ;
    GetMyTenantsResponseBody(GetMyTenantsResponseBody &&) = default ;
    GetMyTenantsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetMyTenantsResponseBody() = default ;
    GetMyTenantsResponseBody& operator=(const GetMyTenantsResponseBody &) = default ;
    GetMyTenantsResponseBody& operator=(GetMyTenantsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->code_ == nullptr
        && return this->httpStatusCode_ == nullptr && return this->message_ == nullptr && return this->requestId_ == nullptr && return this->success_ == nullptr && return this->tenantList_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetMyTenantsResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t httpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline GetMyTenantsResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetMyTenantsResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetMyTenantsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetMyTenantsResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // tenantList Field Functions 
    bool hasTenantList() const { return this->tenantList_ != nullptr;};
    void deleteTenantList() { this->tenantList_ = nullptr;};
    inline const vector<GetMyTenantsResponseBodyTenantList> & tenantList() const { DARABONBA_PTR_GET_CONST(tenantList_, vector<GetMyTenantsResponseBodyTenantList>) };
    inline vector<GetMyTenantsResponseBodyTenantList> tenantList() { DARABONBA_PTR_GET(tenantList_, vector<GetMyTenantsResponseBodyTenantList>) };
    inline GetMyTenantsResponseBody& setTenantList(const vector<GetMyTenantsResponseBodyTenantList> & tenantList) { DARABONBA_PTR_SET_VALUE(tenantList_, tenantList) };
    inline GetMyTenantsResponseBody& setTenantList(vector<GetMyTenantsResponseBodyTenantList> && tenantList) { DARABONBA_PTR_SET_RVALUE(tenantList_, tenantList) };


  protected:
    std::shared_ptr<string> code_ = nullptr;
    std::shared_ptr<int32_t> httpStatusCode_ = nullptr;
    std::shared_ptr<string> message_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<bool> success_ = nullptr;
    std::shared_ptr<vector<GetMyTenantsResponseBodyTenantList>> tenantList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
