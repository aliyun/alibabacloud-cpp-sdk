// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETOWNREQUESTLOGRESPONSEBODYLOGINFORESPONSES_HPP_
#define ALIBABACLOUD_MODELS_GETOWNREQUESTLOGRESPONSEBODYLOGINFORESPONSES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OpenAPIExplorer20241130
{
namespace Models
{
  class GetOwnRequestLogResponseBodyLogInfoResponses : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetOwnRequestLogResponseBodyLogInfoResponses& obj) { 
      DARABONBA_PTR_TO_JSON(responseBody, responseBody_);
      DARABONBA_PTR_TO_JSON(responseBodyFormat, responseBodyFormat_);
    };
    friend void from_json(const Darabonba::Json& j, GetOwnRequestLogResponseBodyLogInfoResponses& obj) { 
      DARABONBA_PTR_FROM_JSON(responseBody, responseBody_);
      DARABONBA_PTR_FROM_JSON(responseBodyFormat, responseBodyFormat_);
    };
    GetOwnRequestLogResponseBodyLogInfoResponses() = default ;
    GetOwnRequestLogResponseBodyLogInfoResponses(const GetOwnRequestLogResponseBodyLogInfoResponses &) = default ;
    GetOwnRequestLogResponseBodyLogInfoResponses(GetOwnRequestLogResponseBodyLogInfoResponses &&) = default ;
    GetOwnRequestLogResponseBodyLogInfoResponses(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetOwnRequestLogResponseBodyLogInfoResponses() = default ;
    GetOwnRequestLogResponseBodyLogInfoResponses& operator=(const GetOwnRequestLogResponseBodyLogInfoResponses &) = default ;
    GetOwnRequestLogResponseBodyLogInfoResponses& operator=(GetOwnRequestLogResponseBodyLogInfoResponses &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->responseBody_ == nullptr
        && return this->responseBodyFormat_ == nullptr; };
    // responseBody Field Functions 
    bool hasResponseBody() const { return this->responseBody_ != nullptr;};
    void deleteResponseBody() { this->responseBody_ = nullptr;};
    inline string responseBody() const { DARABONBA_PTR_GET_DEFAULT(responseBody_, "") };
    inline GetOwnRequestLogResponseBodyLogInfoResponses& setResponseBody(string responseBody) { DARABONBA_PTR_SET_VALUE(responseBody_, responseBody) };


    // responseBodyFormat Field Functions 
    bool hasResponseBodyFormat() const { return this->responseBodyFormat_ != nullptr;};
    void deleteResponseBodyFormat() { this->responseBodyFormat_ = nullptr;};
    inline string responseBodyFormat() const { DARABONBA_PTR_GET_DEFAULT(responseBodyFormat_, "") };
    inline GetOwnRequestLogResponseBodyLogInfoResponses& setResponseBodyFormat(string responseBodyFormat) { DARABONBA_PTR_SET_VALUE(responseBodyFormat_, responseBodyFormat) };


  protected:
    // The response body.
    std::shared_ptr<string> responseBody_ = nullptr;
    // The type of the response body. Valid values: JSON, XML, and HTML.
    std::shared_ptr<string> responseBodyFormat_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OpenAPIExplorer20241130
#endif
