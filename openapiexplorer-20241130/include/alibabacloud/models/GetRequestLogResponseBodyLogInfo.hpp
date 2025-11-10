// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETREQUESTLOGRESPONSEBODYLOGINFO_HPP_
#define ALIBABACLOUD_MODELS_GETREQUESTLOGRESPONSEBODYLOGINFO_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetRequestLogResponseBodyLogInfoAuthenticationInfo.hpp>
#include <alibabacloud/models/GetRequestLogResponseBodyLogInfoBasicInfo.hpp>
#include <alibabacloud/models/GetRequestLogResponseBodyLogInfoCallerInfo.hpp>
#include <vector>
#include <alibabacloud/models/GetRequestLogResponseBodyLogInfoParameters.hpp>
#include <alibabacloud/models/GetRequestLogResponseBodyLogInfoResponses.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OpenAPIExplorer20241130
{
namespace Models
{
  class GetRequestLogResponseBodyLogInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetRequestLogResponseBodyLogInfo& obj) { 
      DARABONBA_PTR_TO_JSON(authenticationInfo, authenticationInfo_);
      DARABONBA_PTR_TO_JSON(basicInfo, basicInfo_);
      DARABONBA_PTR_TO_JSON(callerInfo, callerInfo_);
      DARABONBA_PTR_TO_JSON(parameters, parameters_);
      DARABONBA_PTR_TO_JSON(responses, responses_);
    };
    friend void from_json(const Darabonba::Json& j, GetRequestLogResponseBodyLogInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(authenticationInfo, authenticationInfo_);
      DARABONBA_PTR_FROM_JSON(basicInfo, basicInfo_);
      DARABONBA_PTR_FROM_JSON(callerInfo, callerInfo_);
      DARABONBA_PTR_FROM_JSON(parameters, parameters_);
      DARABONBA_PTR_FROM_JSON(responses, responses_);
    };
    GetRequestLogResponseBodyLogInfo() = default ;
    GetRequestLogResponseBodyLogInfo(const GetRequestLogResponseBodyLogInfo &) = default ;
    GetRequestLogResponseBodyLogInfo(GetRequestLogResponseBodyLogInfo &&) = default ;
    GetRequestLogResponseBodyLogInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetRequestLogResponseBodyLogInfo() = default ;
    GetRequestLogResponseBodyLogInfo& operator=(const GetRequestLogResponseBodyLogInfo &) = default ;
    GetRequestLogResponseBodyLogInfo& operator=(GetRequestLogResponseBodyLogInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->authenticationInfo_ == nullptr
        && return this->basicInfo_ == nullptr && return this->callerInfo_ == nullptr && return this->parameters_ == nullptr && return this->responses_ == nullptr; };
    // authenticationInfo Field Functions 
    bool hasAuthenticationInfo() const { return this->authenticationInfo_ != nullptr;};
    void deleteAuthenticationInfo() { this->authenticationInfo_ = nullptr;};
    inline const Models::GetRequestLogResponseBodyLogInfoAuthenticationInfo & authenticationInfo() const { DARABONBA_PTR_GET_CONST(authenticationInfo_, Models::GetRequestLogResponseBodyLogInfoAuthenticationInfo) };
    inline Models::GetRequestLogResponseBodyLogInfoAuthenticationInfo authenticationInfo() { DARABONBA_PTR_GET(authenticationInfo_, Models::GetRequestLogResponseBodyLogInfoAuthenticationInfo) };
    inline GetRequestLogResponseBodyLogInfo& setAuthenticationInfo(const Models::GetRequestLogResponseBodyLogInfoAuthenticationInfo & authenticationInfo) { DARABONBA_PTR_SET_VALUE(authenticationInfo_, authenticationInfo) };
    inline GetRequestLogResponseBodyLogInfo& setAuthenticationInfo(Models::GetRequestLogResponseBodyLogInfoAuthenticationInfo && authenticationInfo) { DARABONBA_PTR_SET_RVALUE(authenticationInfo_, authenticationInfo) };


    // basicInfo Field Functions 
    bool hasBasicInfo() const { return this->basicInfo_ != nullptr;};
    void deleteBasicInfo() { this->basicInfo_ = nullptr;};
    inline const Models::GetRequestLogResponseBodyLogInfoBasicInfo & basicInfo() const { DARABONBA_PTR_GET_CONST(basicInfo_, Models::GetRequestLogResponseBodyLogInfoBasicInfo) };
    inline Models::GetRequestLogResponseBodyLogInfoBasicInfo basicInfo() { DARABONBA_PTR_GET(basicInfo_, Models::GetRequestLogResponseBodyLogInfoBasicInfo) };
    inline GetRequestLogResponseBodyLogInfo& setBasicInfo(const Models::GetRequestLogResponseBodyLogInfoBasicInfo & basicInfo) { DARABONBA_PTR_SET_VALUE(basicInfo_, basicInfo) };
    inline GetRequestLogResponseBodyLogInfo& setBasicInfo(Models::GetRequestLogResponseBodyLogInfoBasicInfo && basicInfo) { DARABONBA_PTR_SET_RVALUE(basicInfo_, basicInfo) };


    // callerInfo Field Functions 
    bool hasCallerInfo() const { return this->callerInfo_ != nullptr;};
    void deleteCallerInfo() { this->callerInfo_ = nullptr;};
    inline const Models::GetRequestLogResponseBodyLogInfoCallerInfo & callerInfo() const { DARABONBA_PTR_GET_CONST(callerInfo_, Models::GetRequestLogResponseBodyLogInfoCallerInfo) };
    inline Models::GetRequestLogResponseBodyLogInfoCallerInfo callerInfo() { DARABONBA_PTR_GET(callerInfo_, Models::GetRequestLogResponseBodyLogInfoCallerInfo) };
    inline GetRequestLogResponseBodyLogInfo& setCallerInfo(const Models::GetRequestLogResponseBodyLogInfoCallerInfo & callerInfo) { DARABONBA_PTR_SET_VALUE(callerInfo_, callerInfo) };
    inline GetRequestLogResponseBodyLogInfo& setCallerInfo(Models::GetRequestLogResponseBodyLogInfoCallerInfo && callerInfo) { DARABONBA_PTR_SET_RVALUE(callerInfo_, callerInfo) };


    // parameters Field Functions 
    bool hasParameters() const { return this->parameters_ != nullptr;};
    void deleteParameters() { this->parameters_ = nullptr;};
    inline const vector<Models::GetRequestLogResponseBodyLogInfoParameters> & parameters() const { DARABONBA_PTR_GET_CONST(parameters_, vector<Models::GetRequestLogResponseBodyLogInfoParameters>) };
    inline vector<Models::GetRequestLogResponseBodyLogInfoParameters> parameters() { DARABONBA_PTR_GET(parameters_, vector<Models::GetRequestLogResponseBodyLogInfoParameters>) };
    inline GetRequestLogResponseBodyLogInfo& setParameters(const vector<Models::GetRequestLogResponseBodyLogInfoParameters> & parameters) { DARABONBA_PTR_SET_VALUE(parameters_, parameters) };
    inline GetRequestLogResponseBodyLogInfo& setParameters(vector<Models::GetRequestLogResponseBodyLogInfoParameters> && parameters) { DARABONBA_PTR_SET_RVALUE(parameters_, parameters) };


    // responses Field Functions 
    bool hasResponses() const { return this->responses_ != nullptr;};
    void deleteResponses() { this->responses_ = nullptr;};
    inline const Models::GetRequestLogResponseBodyLogInfoResponses & responses() const { DARABONBA_PTR_GET_CONST(responses_, Models::GetRequestLogResponseBodyLogInfoResponses) };
    inline Models::GetRequestLogResponseBodyLogInfoResponses responses() { DARABONBA_PTR_GET(responses_, Models::GetRequestLogResponseBodyLogInfoResponses) };
    inline GetRequestLogResponseBodyLogInfo& setResponses(const Models::GetRequestLogResponseBodyLogInfoResponses & responses) { DARABONBA_PTR_SET_VALUE(responses_, responses) };
    inline GetRequestLogResponseBodyLogInfo& setResponses(Models::GetRequestLogResponseBodyLogInfoResponses && responses) { DARABONBA_PTR_SET_RVALUE(responses_, responses) };


  protected:
    // The authentication information.
    std::shared_ptr<Models::GetRequestLogResponseBodyLogInfoAuthenticationInfo> authenticationInfo_ = nullptr;
    // The basic information about the log of the API call.
    std::shared_ptr<Models::GetRequestLogResponseBodyLogInfoBasicInfo> basicInfo_ = nullptr;
    // The information about the caller.
    std::shared_ptr<Models::GetRequestLogResponseBodyLogInfoCallerInfo> callerInfo_ = nullptr;
    // The information about the request parameters.
    std::shared_ptr<vector<Models::GetRequestLogResponseBodyLogInfoParameters>> parameters_ = nullptr;
    // The information that is returned for the request.
    std::shared_ptr<Models::GetRequestLogResponseBodyLogInfoResponses> responses_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OpenAPIExplorer20241130
#endif
