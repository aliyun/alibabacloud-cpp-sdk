// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETACCOUNTSECURITYPRACTICEREPORTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETACCOUNTSECURITYPRACTICEREPORTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetAccountSecurityPracticeReportResponseBodyAccountSecurityPracticeInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ims20190815
{
namespace Models
{
  class GetAccountSecurityPracticeReportResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAccountSecurityPracticeReportResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccountSecurityPracticeInfo, accountSecurityPracticeInfo_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetAccountSecurityPracticeReportResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccountSecurityPracticeInfo, accountSecurityPracticeInfo_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetAccountSecurityPracticeReportResponseBody() = default ;
    GetAccountSecurityPracticeReportResponseBody(const GetAccountSecurityPracticeReportResponseBody &) = default ;
    GetAccountSecurityPracticeReportResponseBody(GetAccountSecurityPracticeReportResponseBody &&) = default ;
    GetAccountSecurityPracticeReportResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAccountSecurityPracticeReportResponseBody() = default ;
    GetAccountSecurityPracticeReportResponseBody& operator=(const GetAccountSecurityPracticeReportResponseBody &) = default ;
    GetAccountSecurityPracticeReportResponseBody& operator=(GetAccountSecurityPracticeReportResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->accountSecurityPracticeInfo_ != nullptr
        && this->requestId_ != nullptr; };
    // accountSecurityPracticeInfo Field Functions 
    bool hasAccountSecurityPracticeInfo() const { return this->accountSecurityPracticeInfo_ != nullptr;};
    void deleteAccountSecurityPracticeInfo() { this->accountSecurityPracticeInfo_ = nullptr;};
    inline const GetAccountSecurityPracticeReportResponseBodyAccountSecurityPracticeInfo & accountSecurityPracticeInfo() const { DARABONBA_PTR_GET_CONST(accountSecurityPracticeInfo_, GetAccountSecurityPracticeReportResponseBodyAccountSecurityPracticeInfo) };
    inline GetAccountSecurityPracticeReportResponseBodyAccountSecurityPracticeInfo accountSecurityPracticeInfo() { DARABONBA_PTR_GET(accountSecurityPracticeInfo_, GetAccountSecurityPracticeReportResponseBodyAccountSecurityPracticeInfo) };
    inline GetAccountSecurityPracticeReportResponseBody& setAccountSecurityPracticeInfo(const GetAccountSecurityPracticeReportResponseBodyAccountSecurityPracticeInfo & accountSecurityPracticeInfo) { DARABONBA_PTR_SET_VALUE(accountSecurityPracticeInfo_, accountSecurityPracticeInfo) };
    inline GetAccountSecurityPracticeReportResponseBody& setAccountSecurityPracticeInfo(GetAccountSecurityPracticeReportResponseBodyAccountSecurityPracticeInfo && accountSecurityPracticeInfo) { DARABONBA_PTR_SET_RVALUE(accountSecurityPracticeInfo_, accountSecurityPracticeInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetAccountSecurityPracticeReportResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information about the security report for the Alibaba Cloud account.
    std::shared_ptr<GetAccountSecurityPracticeReportResponseBodyAccountSecurityPracticeInfo> accountSecurityPracticeInfo_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ims20190815
#endif
