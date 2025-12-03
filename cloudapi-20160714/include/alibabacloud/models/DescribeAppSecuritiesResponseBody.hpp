// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAPPSECURITIESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAPPSECURITIESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeAppSecuritiesResponseBodyAppSecuritys.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class DescribeAppSecuritiesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAppSecuritiesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AppSecuritys, appSecuritys_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAppSecuritiesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AppSecuritys, appSecuritys_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeAppSecuritiesResponseBody() = default ;
    DescribeAppSecuritiesResponseBody(const DescribeAppSecuritiesResponseBody &) = default ;
    DescribeAppSecuritiesResponseBody(DescribeAppSecuritiesResponseBody &&) = default ;
    DescribeAppSecuritiesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAppSecuritiesResponseBody() = default ;
    DescribeAppSecuritiesResponseBody& operator=(const DescribeAppSecuritiesResponseBody &) = default ;
    DescribeAppSecuritiesResponseBody& operator=(DescribeAppSecuritiesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appSecuritys_ == nullptr
        && return this->requestId_ == nullptr; };
    // appSecuritys Field Functions 
    bool hasAppSecuritys() const { return this->appSecuritys_ != nullptr;};
    void deleteAppSecuritys() { this->appSecuritys_ = nullptr;};
    inline const DescribeAppSecuritiesResponseBodyAppSecuritys & appSecuritys() const { DARABONBA_PTR_GET_CONST(appSecuritys_, DescribeAppSecuritiesResponseBodyAppSecuritys) };
    inline DescribeAppSecuritiesResponseBodyAppSecuritys appSecuritys() { DARABONBA_PTR_GET(appSecuritys_, DescribeAppSecuritiesResponseBodyAppSecuritys) };
    inline DescribeAppSecuritiesResponseBody& setAppSecuritys(const DescribeAppSecuritiesResponseBodyAppSecuritys & appSecuritys) { DARABONBA_PTR_SET_VALUE(appSecuritys_, appSecuritys) };
    inline DescribeAppSecuritiesResponseBody& setAppSecuritys(DescribeAppSecuritiesResponseBodyAppSecuritys && appSecuritys) { DARABONBA_PTR_SET_RVALUE(appSecuritys_, appSecuritys) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeAppSecuritiesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The associated security policy information.
    std::shared_ptr<DescribeAppSecuritiesResponseBodyAppSecuritys> appSecuritys_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
