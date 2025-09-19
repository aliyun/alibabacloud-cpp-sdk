// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSECURITYSCORERULERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETSECURITYSCORERULERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetSecurityScoreRuleResponseBodySecurityScoreCategoryList.hpp>
#include <alibabacloud/models/GetSecurityScoreRuleResponseBodySecurityScoreRuleList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class GetSecurityScoreRuleResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSecurityScoreRuleResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(EnableStatus, enableStatus_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SecurityScoreCategoryList, securityScoreCategoryList_);
      DARABONBA_PTR_TO_JSON(SecurityScoreRuleList, securityScoreRuleList_);
    };
    friend void from_json(const Darabonba::Json& j, GetSecurityScoreRuleResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(EnableStatus, enableStatus_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SecurityScoreCategoryList, securityScoreCategoryList_);
      DARABONBA_PTR_FROM_JSON(SecurityScoreRuleList, securityScoreRuleList_);
    };
    GetSecurityScoreRuleResponseBody() = default ;
    GetSecurityScoreRuleResponseBody(const GetSecurityScoreRuleResponseBody &) = default ;
    GetSecurityScoreRuleResponseBody(GetSecurityScoreRuleResponseBody &&) = default ;
    GetSecurityScoreRuleResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSecurityScoreRuleResponseBody() = default ;
    GetSecurityScoreRuleResponseBody& operator=(const GetSecurityScoreRuleResponseBody &) = default ;
    GetSecurityScoreRuleResponseBody& operator=(GetSecurityScoreRuleResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->enableStatus_ != nullptr
        && this->requestId_ != nullptr && this->securityScoreCategoryList_ != nullptr && this->securityScoreRuleList_ != nullptr; };
    // enableStatus Field Functions 
    bool hasEnableStatus() const { return this->enableStatus_ != nullptr;};
    void deleteEnableStatus() { this->enableStatus_ = nullptr;};
    inline bool enableStatus() const { DARABONBA_PTR_GET_DEFAULT(enableStatus_, false) };
    inline GetSecurityScoreRuleResponseBody& setEnableStatus(bool enableStatus) { DARABONBA_PTR_SET_VALUE(enableStatus_, enableStatus) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetSecurityScoreRuleResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // securityScoreCategoryList Field Functions 
    bool hasSecurityScoreCategoryList() const { return this->securityScoreCategoryList_ != nullptr;};
    void deleteSecurityScoreCategoryList() { this->securityScoreCategoryList_ = nullptr;};
    inline const vector<GetSecurityScoreRuleResponseBodySecurityScoreCategoryList> & securityScoreCategoryList() const { DARABONBA_PTR_GET_CONST(securityScoreCategoryList_, vector<GetSecurityScoreRuleResponseBodySecurityScoreCategoryList>) };
    inline vector<GetSecurityScoreRuleResponseBodySecurityScoreCategoryList> securityScoreCategoryList() { DARABONBA_PTR_GET(securityScoreCategoryList_, vector<GetSecurityScoreRuleResponseBodySecurityScoreCategoryList>) };
    inline GetSecurityScoreRuleResponseBody& setSecurityScoreCategoryList(const vector<GetSecurityScoreRuleResponseBodySecurityScoreCategoryList> & securityScoreCategoryList) { DARABONBA_PTR_SET_VALUE(securityScoreCategoryList_, securityScoreCategoryList) };
    inline GetSecurityScoreRuleResponseBody& setSecurityScoreCategoryList(vector<GetSecurityScoreRuleResponseBodySecurityScoreCategoryList> && securityScoreCategoryList) { DARABONBA_PTR_SET_RVALUE(securityScoreCategoryList_, securityScoreCategoryList) };


    // securityScoreRuleList Field Functions 
    bool hasSecurityScoreRuleList() const { return this->securityScoreRuleList_ != nullptr;};
    void deleteSecurityScoreRuleList() { this->securityScoreRuleList_ = nullptr;};
    inline const vector<GetSecurityScoreRuleResponseBodySecurityScoreRuleList> & securityScoreRuleList() const { DARABONBA_PTR_GET_CONST(securityScoreRuleList_, vector<GetSecurityScoreRuleResponseBodySecurityScoreRuleList>) };
    inline vector<GetSecurityScoreRuleResponseBodySecurityScoreRuleList> securityScoreRuleList() { DARABONBA_PTR_GET(securityScoreRuleList_, vector<GetSecurityScoreRuleResponseBodySecurityScoreRuleList>) };
    inline GetSecurityScoreRuleResponseBody& setSecurityScoreRuleList(const vector<GetSecurityScoreRuleResponseBodySecurityScoreRuleList> & securityScoreRuleList) { DARABONBA_PTR_SET_VALUE(securityScoreRuleList_, securityScoreRuleList) };
    inline GetSecurityScoreRuleResponseBody& setSecurityScoreRuleList(vector<GetSecurityScoreRuleResponseBodySecurityScoreRuleList> && securityScoreRuleList) { DARABONBA_PTR_SET_RVALUE(securityScoreRuleList_, securityScoreRuleList) };


  protected:
    // The status of the custom settings of the security score feature.
    // 
    // *   true: enabled
    // *   false: disabled
    std::shared_ptr<bool> enableStatus_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The information about the new version of the security score rule.
    std::shared_ptr<vector<GetSecurityScoreRuleResponseBodySecurityScoreCategoryList>> securityScoreCategoryList_ = nullptr;
    // The information about the old version of the security score rule.
    std::shared_ptr<vector<GetSecurityScoreRuleResponseBodySecurityScoreRuleList>> securityScoreRuleList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
