// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETACCOUNTSECURITYPRACTICEREPORTRESPONSEBODYACCOUNTSECURITYPRACTICEINFO_HPP_
#define ALIBABACLOUD_MODELS_GETACCOUNTSECURITYPRACTICEREPORTRESPONSEBODYACCOUNTSECURITYPRACTICEINFO_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetAccountSecurityPracticeReportResponseBodyAccountSecurityPracticeInfoAccountSecurityPracticeUserInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ims20190815
{
namespace Models
{
  class GetAccountSecurityPracticeReportResponseBodyAccountSecurityPracticeInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAccountSecurityPracticeReportResponseBodyAccountSecurityPracticeInfo& obj) { 
      DARABONBA_PTR_TO_JSON(AccountSecurityPracticeUserInfo, accountSecurityPracticeUserInfo_);
      DARABONBA_PTR_TO_JSON(Score, score_);
    };
    friend void from_json(const Darabonba::Json& j, GetAccountSecurityPracticeReportResponseBodyAccountSecurityPracticeInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(AccountSecurityPracticeUserInfo, accountSecurityPracticeUserInfo_);
      DARABONBA_PTR_FROM_JSON(Score, score_);
    };
    GetAccountSecurityPracticeReportResponseBodyAccountSecurityPracticeInfo() = default ;
    GetAccountSecurityPracticeReportResponseBodyAccountSecurityPracticeInfo(const GetAccountSecurityPracticeReportResponseBodyAccountSecurityPracticeInfo &) = default ;
    GetAccountSecurityPracticeReportResponseBodyAccountSecurityPracticeInfo(GetAccountSecurityPracticeReportResponseBodyAccountSecurityPracticeInfo &&) = default ;
    GetAccountSecurityPracticeReportResponseBodyAccountSecurityPracticeInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAccountSecurityPracticeReportResponseBodyAccountSecurityPracticeInfo() = default ;
    GetAccountSecurityPracticeReportResponseBodyAccountSecurityPracticeInfo& operator=(const GetAccountSecurityPracticeReportResponseBodyAccountSecurityPracticeInfo &) = default ;
    GetAccountSecurityPracticeReportResponseBodyAccountSecurityPracticeInfo& operator=(GetAccountSecurityPracticeReportResponseBodyAccountSecurityPracticeInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->accountSecurityPracticeUserInfo_ != nullptr
        && this->score_ != nullptr; };
    // accountSecurityPracticeUserInfo Field Functions 
    bool hasAccountSecurityPracticeUserInfo() const { return this->accountSecurityPracticeUserInfo_ != nullptr;};
    void deleteAccountSecurityPracticeUserInfo() { this->accountSecurityPracticeUserInfo_ = nullptr;};
    inline const Models::GetAccountSecurityPracticeReportResponseBodyAccountSecurityPracticeInfoAccountSecurityPracticeUserInfo & accountSecurityPracticeUserInfo() const { DARABONBA_PTR_GET_CONST(accountSecurityPracticeUserInfo_, Models::GetAccountSecurityPracticeReportResponseBodyAccountSecurityPracticeInfoAccountSecurityPracticeUserInfo) };
    inline Models::GetAccountSecurityPracticeReportResponseBodyAccountSecurityPracticeInfoAccountSecurityPracticeUserInfo accountSecurityPracticeUserInfo() { DARABONBA_PTR_GET(accountSecurityPracticeUserInfo_, Models::GetAccountSecurityPracticeReportResponseBodyAccountSecurityPracticeInfoAccountSecurityPracticeUserInfo) };
    inline GetAccountSecurityPracticeReportResponseBodyAccountSecurityPracticeInfo& setAccountSecurityPracticeUserInfo(const Models::GetAccountSecurityPracticeReportResponseBodyAccountSecurityPracticeInfoAccountSecurityPracticeUserInfo & accountSecurityPracticeUserInfo) { DARABONBA_PTR_SET_VALUE(accountSecurityPracticeUserInfo_, accountSecurityPracticeUserInfo) };
    inline GetAccountSecurityPracticeReportResponseBodyAccountSecurityPracticeInfo& setAccountSecurityPracticeUserInfo(Models::GetAccountSecurityPracticeReportResponseBodyAccountSecurityPracticeInfoAccountSecurityPracticeUserInfo && accountSecurityPracticeUserInfo) { DARABONBA_PTR_SET_RVALUE(accountSecurityPracticeUserInfo_, accountSecurityPracticeUserInfo) };


    // score Field Functions 
    bool hasScore() const { return this->score_ != nullptr;};
    void deleteScore() { this->score_ = nullptr;};
    inline int32_t score() const { DARABONBA_PTR_GET_DEFAULT(score_, 0) };
    inline GetAccountSecurityPracticeReportResponseBodyAccountSecurityPracticeInfo& setScore(int32_t score) { DARABONBA_PTR_SET_VALUE(score_, score) };


  protected:
    // The information about the security report for the Alibaba Cloud account.
    std::shared_ptr<Models::GetAccountSecurityPracticeReportResponseBodyAccountSecurityPracticeInfoAccountSecurityPracticeUserInfo> accountSecurityPracticeUserInfo_ = nullptr;
    // The security score of the Alibaba Cloud account.
    std::shared_ptr<int32_t> score_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ims20190815
#endif
