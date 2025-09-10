// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETQUOTAAPPLICATIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETQUOTAAPPLICATIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetQuotaApplicationResponseBodyQuotaApplication.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Quotas20200510
{
namespace Models
{
  class GetQuotaApplicationResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetQuotaApplicationResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(QuotaApplication, quotaApplication_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetQuotaApplicationResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(QuotaApplication, quotaApplication_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetQuotaApplicationResponseBody() = default ;
    GetQuotaApplicationResponseBody(const GetQuotaApplicationResponseBody &) = default ;
    GetQuotaApplicationResponseBody(GetQuotaApplicationResponseBody &&) = default ;
    GetQuotaApplicationResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetQuotaApplicationResponseBody() = default ;
    GetQuotaApplicationResponseBody& operator=(const GetQuotaApplicationResponseBody &) = default ;
    GetQuotaApplicationResponseBody& operator=(GetQuotaApplicationResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->quotaApplication_ != nullptr
        && this->requestId_ != nullptr; };
    // quotaApplication Field Functions 
    bool hasQuotaApplication() const { return this->quotaApplication_ != nullptr;};
    void deleteQuotaApplication() { this->quotaApplication_ = nullptr;};
    inline const GetQuotaApplicationResponseBodyQuotaApplication & quotaApplication() const { DARABONBA_PTR_GET_CONST(quotaApplication_, GetQuotaApplicationResponseBodyQuotaApplication) };
    inline GetQuotaApplicationResponseBodyQuotaApplication quotaApplication() { DARABONBA_PTR_GET(quotaApplication_, GetQuotaApplicationResponseBodyQuotaApplication) };
    inline GetQuotaApplicationResponseBody& setQuotaApplication(const GetQuotaApplicationResponseBodyQuotaApplication & quotaApplication) { DARABONBA_PTR_SET_VALUE(quotaApplication_, quotaApplication) };
    inline GetQuotaApplicationResponseBody& setQuotaApplication(GetQuotaApplicationResponseBodyQuotaApplication && quotaApplication) { DARABONBA_PTR_SET_RVALUE(quotaApplication_, quotaApplication) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetQuotaApplicationResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The details of the quota application.
    std::shared_ptr<GetQuotaApplicationResponseBodyQuotaApplication> quotaApplication_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Quotas20200510
#endif
