// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAGGREGATERESOURCECOMPLIANCEGROUPBYRESOURCETYPERESPONSE_HPP_
#define ALIBABACLOUD_MODELS_GETAGGREGATERESOURCECOMPLIANCEGROUPBYRESOURCETYPERESPONSE_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/models/GetAggregateResourceComplianceGroupByResourceTypeResponseBody.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Config20200907
{
namespace Models
{
  class GetAggregateResourceComplianceGroupByResourceTypeResponse : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAggregateResourceComplianceGroupByResourceTypeResponse& obj) { 
      DARABONBA_PTR_TO_JSON(headers, headers_);
      DARABONBA_PTR_TO_JSON(statusCode, statusCode_);
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, GetAggregateResourceComplianceGroupByResourceTypeResponse& obj) { 
      DARABONBA_PTR_FROM_JSON(headers, headers_);
      DARABONBA_PTR_FROM_JSON(statusCode, statusCode_);
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    GetAggregateResourceComplianceGroupByResourceTypeResponse() = default ;
    GetAggregateResourceComplianceGroupByResourceTypeResponse(const GetAggregateResourceComplianceGroupByResourceTypeResponse &) = default ;
    GetAggregateResourceComplianceGroupByResourceTypeResponse(GetAggregateResourceComplianceGroupByResourceTypeResponse &&) = default ;
    GetAggregateResourceComplianceGroupByResourceTypeResponse(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAggregateResourceComplianceGroupByResourceTypeResponse() = default ;
    GetAggregateResourceComplianceGroupByResourceTypeResponse& operator=(const GetAggregateResourceComplianceGroupByResourceTypeResponse &) = default ;
    GetAggregateResourceComplianceGroupByResourceTypeResponse& operator=(GetAggregateResourceComplianceGroupByResourceTypeResponse &&) = default ;
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
    inline GetAggregateResourceComplianceGroupByResourceTypeResponse& setHeaders(const map<string, string> & headers) { DARABONBA_PTR_SET_VALUE(headers_, headers) };
    inline GetAggregateResourceComplianceGroupByResourceTypeResponse& setHeaders(map<string, string> && headers) { DARABONBA_PTR_SET_RVALUE(headers_, headers) };


    // statusCode Field Functions 
    bool hasStatusCode() const { return this->statusCode_ != nullptr;};
    void deleteStatusCode() { this->statusCode_ = nullptr;};
    inline int32_t statusCode() const { DARABONBA_PTR_GET_DEFAULT(statusCode_, 0) };
    inline GetAggregateResourceComplianceGroupByResourceTypeResponse& setStatusCode(int32_t statusCode) { DARABONBA_PTR_SET_VALUE(statusCode_, statusCode) };


    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const GetAggregateResourceComplianceGroupByResourceTypeResponseBody & body() const { DARABONBA_PTR_GET_CONST(body_, GetAggregateResourceComplianceGroupByResourceTypeResponseBody) };
    inline GetAggregateResourceComplianceGroupByResourceTypeResponseBody body() { DARABONBA_PTR_GET(body_, GetAggregateResourceComplianceGroupByResourceTypeResponseBody) };
    inline GetAggregateResourceComplianceGroupByResourceTypeResponse& setBody(const GetAggregateResourceComplianceGroupByResourceTypeResponseBody & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline GetAggregateResourceComplianceGroupByResourceTypeResponse& setBody(GetAggregateResourceComplianceGroupByResourceTypeResponseBody && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    std::shared_ptr<map<string, string>> headers_ = nullptr;
    std::shared_ptr<int32_t> statusCode_ = nullptr;
    std::shared_ptr<GetAggregateResourceComplianceGroupByResourceTypeResponseBody> body_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Config20200907
#endif
