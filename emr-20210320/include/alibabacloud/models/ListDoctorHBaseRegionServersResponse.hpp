// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDOCTORHBASEREGIONSERVERSRESPONSE_HPP_
#define ALIBABACLOUD_MODELS_LISTDOCTORHBASEREGIONSERVERSRESPONSE_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/models/ListDoctorHBaseRegionServersResponseBody.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Emr20210320
{
namespace Models
{
  class ListDoctorHBaseRegionServersResponse : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDoctorHBaseRegionServersResponse& obj) { 
      DARABONBA_PTR_TO_JSON(headers, headers_);
      DARABONBA_PTR_TO_JSON(statusCode, statusCode_);
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, ListDoctorHBaseRegionServersResponse& obj) { 
      DARABONBA_PTR_FROM_JSON(headers, headers_);
      DARABONBA_PTR_FROM_JSON(statusCode, statusCode_);
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    ListDoctorHBaseRegionServersResponse() = default ;
    ListDoctorHBaseRegionServersResponse(const ListDoctorHBaseRegionServersResponse &) = default ;
    ListDoctorHBaseRegionServersResponse(ListDoctorHBaseRegionServersResponse &&) = default ;
    ListDoctorHBaseRegionServersResponse(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDoctorHBaseRegionServersResponse() = default ;
    ListDoctorHBaseRegionServersResponse& operator=(const ListDoctorHBaseRegionServersResponse &) = default ;
    ListDoctorHBaseRegionServersResponse& operator=(ListDoctorHBaseRegionServersResponse &&) = default ;
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
    inline ListDoctorHBaseRegionServersResponse& setHeaders(const map<string, string> & headers) { DARABONBA_PTR_SET_VALUE(headers_, headers) };
    inline ListDoctorHBaseRegionServersResponse& setHeaders(map<string, string> && headers) { DARABONBA_PTR_SET_RVALUE(headers_, headers) };


    // statusCode Field Functions 
    bool hasStatusCode() const { return this->statusCode_ != nullptr;};
    void deleteStatusCode() { this->statusCode_ = nullptr;};
    inline int32_t statusCode() const { DARABONBA_PTR_GET_DEFAULT(statusCode_, 0) };
    inline ListDoctorHBaseRegionServersResponse& setStatusCode(int32_t statusCode) { DARABONBA_PTR_SET_VALUE(statusCode_, statusCode) };


    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const ListDoctorHBaseRegionServersResponseBody & body() const { DARABONBA_PTR_GET_CONST(body_, ListDoctorHBaseRegionServersResponseBody) };
    inline ListDoctorHBaseRegionServersResponseBody body() { DARABONBA_PTR_GET(body_, ListDoctorHBaseRegionServersResponseBody) };
    inline ListDoctorHBaseRegionServersResponse& setBody(const ListDoctorHBaseRegionServersResponseBody & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline ListDoctorHBaseRegionServersResponse& setBody(ListDoctorHBaseRegionServersResponseBody && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    std::shared_ptr<map<string, string>> headers_ = nullptr;
    std::shared_ptr<int32_t> statusCode_ = nullptr;
    std::shared_ptr<ListDoctorHBaseRegionServersResponseBody> body_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Emr20210320
#endif
