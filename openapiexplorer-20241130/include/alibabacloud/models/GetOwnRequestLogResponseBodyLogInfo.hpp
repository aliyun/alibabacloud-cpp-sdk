// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETOWNREQUESTLOGRESPONSEBODYLOGINFO_HPP_
#define ALIBABACLOUD_MODELS_GETOWNREQUESTLOGRESPONSEBODYLOGINFO_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetOwnRequestLogResponseBodyLogInfoAuthenticationInfo.hpp>
#include <alibabacloud/models/GetOwnRequestLogResponseBodyLogInfoBasicInfo.hpp>
#include <alibabacloud/models/GetOwnRequestLogResponseBodyLogInfoCallerInfo.hpp>
#include <vector>
#include <alibabacloud/models/GetOwnRequestLogResponseBodyLogInfoParameters.hpp>
#include <alibabacloud/models/GetOwnRequestLogResponseBodyLogInfoResponses.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OpenAPIExplorer20241130
{
namespace Models
{
  class GetOwnRequestLogResponseBodyLogInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetOwnRequestLogResponseBodyLogInfo& obj) { 
      DARABONBA_PTR_TO_JSON(authenticationInfo, authenticationInfo_);
      DARABONBA_PTR_TO_JSON(basicInfo, basicInfo_);
      DARABONBA_PTR_TO_JSON(callerInfo, callerInfo_);
      DARABONBA_PTR_TO_JSON(parameters, parameters_);
      DARABONBA_PTR_TO_JSON(responses, responses_);
    };
    friend void from_json(const Darabonba::Json& j, GetOwnRequestLogResponseBodyLogInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(authenticationInfo, authenticationInfo_);
      DARABONBA_PTR_FROM_JSON(basicInfo, basicInfo_);
      DARABONBA_PTR_FROM_JSON(callerInfo, callerInfo_);
      DARABONBA_PTR_FROM_JSON(parameters, parameters_);
      DARABONBA_PTR_FROM_JSON(responses, responses_);
    };
    GetOwnRequestLogResponseBodyLogInfo() = default ;
    GetOwnRequestLogResponseBodyLogInfo(const GetOwnRequestLogResponseBodyLogInfo &) = default ;
    GetOwnRequestLogResponseBodyLogInfo(GetOwnRequestLogResponseBodyLogInfo &&) = default ;
    GetOwnRequestLogResponseBodyLogInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetOwnRequestLogResponseBodyLogInfo() = default ;
    GetOwnRequestLogResponseBodyLogInfo& operator=(const GetOwnRequestLogResponseBodyLogInfo &) = default ;
    GetOwnRequestLogResponseBodyLogInfo& operator=(GetOwnRequestLogResponseBodyLogInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->authenticationInfo_ == nullptr
        && return this->basicInfo_ == nullptr && return this->callerInfo_ == nullptr && return this->parameters_ == nullptr && return this->responses_ == nullptr; };
    // authenticationInfo Field Functions 
    bool hasAuthenticationInfo() const { return this->authenticationInfo_ != nullptr;};
    void deleteAuthenticationInfo() { this->authenticationInfo_ = nullptr;};
    inline const Models::GetOwnRequestLogResponseBodyLogInfoAuthenticationInfo & authenticationInfo() const { DARABONBA_PTR_GET_CONST(authenticationInfo_, Models::GetOwnRequestLogResponseBodyLogInfoAuthenticationInfo) };
    inline Models::GetOwnRequestLogResponseBodyLogInfoAuthenticationInfo authenticationInfo() { DARABONBA_PTR_GET(authenticationInfo_, Models::GetOwnRequestLogResponseBodyLogInfoAuthenticationInfo) };
    inline GetOwnRequestLogResponseBodyLogInfo& setAuthenticationInfo(const Models::GetOwnRequestLogResponseBodyLogInfoAuthenticationInfo & authenticationInfo) { DARABONBA_PTR_SET_VALUE(authenticationInfo_, authenticationInfo) };
    inline GetOwnRequestLogResponseBodyLogInfo& setAuthenticationInfo(Models::GetOwnRequestLogResponseBodyLogInfoAuthenticationInfo && authenticationInfo) { DARABONBA_PTR_SET_RVALUE(authenticationInfo_, authenticationInfo) };


    // basicInfo Field Functions 
    bool hasBasicInfo() const { return this->basicInfo_ != nullptr;};
    void deleteBasicInfo() { this->basicInfo_ = nullptr;};
    inline const Models::GetOwnRequestLogResponseBodyLogInfoBasicInfo & basicInfo() const { DARABONBA_PTR_GET_CONST(basicInfo_, Models::GetOwnRequestLogResponseBodyLogInfoBasicInfo) };
    inline Models::GetOwnRequestLogResponseBodyLogInfoBasicInfo basicInfo() { DARABONBA_PTR_GET(basicInfo_, Models::GetOwnRequestLogResponseBodyLogInfoBasicInfo) };
    inline GetOwnRequestLogResponseBodyLogInfo& setBasicInfo(const Models::GetOwnRequestLogResponseBodyLogInfoBasicInfo & basicInfo) { DARABONBA_PTR_SET_VALUE(basicInfo_, basicInfo) };
    inline GetOwnRequestLogResponseBodyLogInfo& setBasicInfo(Models::GetOwnRequestLogResponseBodyLogInfoBasicInfo && basicInfo) { DARABONBA_PTR_SET_RVALUE(basicInfo_, basicInfo) };


    // callerInfo Field Functions 
    bool hasCallerInfo() const { return this->callerInfo_ != nullptr;};
    void deleteCallerInfo() { this->callerInfo_ = nullptr;};
    inline const Models::GetOwnRequestLogResponseBodyLogInfoCallerInfo & callerInfo() const { DARABONBA_PTR_GET_CONST(callerInfo_, Models::GetOwnRequestLogResponseBodyLogInfoCallerInfo) };
    inline Models::GetOwnRequestLogResponseBodyLogInfoCallerInfo callerInfo() { DARABONBA_PTR_GET(callerInfo_, Models::GetOwnRequestLogResponseBodyLogInfoCallerInfo) };
    inline GetOwnRequestLogResponseBodyLogInfo& setCallerInfo(const Models::GetOwnRequestLogResponseBodyLogInfoCallerInfo & callerInfo) { DARABONBA_PTR_SET_VALUE(callerInfo_, callerInfo) };
    inline GetOwnRequestLogResponseBodyLogInfo& setCallerInfo(Models::GetOwnRequestLogResponseBodyLogInfoCallerInfo && callerInfo) { DARABONBA_PTR_SET_RVALUE(callerInfo_, callerInfo) };


    // parameters Field Functions 
    bool hasParameters() const { return this->parameters_ != nullptr;};
    void deleteParameters() { this->parameters_ = nullptr;};
    inline const vector<Models::GetOwnRequestLogResponseBodyLogInfoParameters> & parameters() const { DARABONBA_PTR_GET_CONST(parameters_, vector<Models::GetOwnRequestLogResponseBodyLogInfoParameters>) };
    inline vector<Models::GetOwnRequestLogResponseBodyLogInfoParameters> parameters() { DARABONBA_PTR_GET(parameters_, vector<Models::GetOwnRequestLogResponseBodyLogInfoParameters>) };
    inline GetOwnRequestLogResponseBodyLogInfo& setParameters(const vector<Models::GetOwnRequestLogResponseBodyLogInfoParameters> & parameters) { DARABONBA_PTR_SET_VALUE(parameters_, parameters) };
    inline GetOwnRequestLogResponseBodyLogInfo& setParameters(vector<Models::GetOwnRequestLogResponseBodyLogInfoParameters> && parameters) { DARABONBA_PTR_SET_RVALUE(parameters_, parameters) };


    // responses Field Functions 
    bool hasResponses() const { return this->responses_ != nullptr;};
    void deleteResponses() { this->responses_ = nullptr;};
    inline const Models::GetOwnRequestLogResponseBodyLogInfoResponses & responses() const { DARABONBA_PTR_GET_CONST(responses_, Models::GetOwnRequestLogResponseBodyLogInfoResponses) };
    inline Models::GetOwnRequestLogResponseBodyLogInfoResponses responses() { DARABONBA_PTR_GET(responses_, Models::GetOwnRequestLogResponseBodyLogInfoResponses) };
    inline GetOwnRequestLogResponseBodyLogInfo& setResponses(const Models::GetOwnRequestLogResponseBodyLogInfoResponses & responses) { DARABONBA_PTR_SET_VALUE(responses_, responses) };
    inline GetOwnRequestLogResponseBodyLogInfo& setResponses(Models::GetOwnRequestLogResponseBodyLogInfoResponses && responses) { DARABONBA_PTR_SET_RVALUE(responses_, responses) };


  protected:
    // The authentication information.
    std::shared_ptr<Models::GetOwnRequestLogResponseBodyLogInfoAuthenticationInfo> authenticationInfo_ = nullptr;
    // The basic information about the log of the API call.
    std::shared_ptr<Models::GetOwnRequestLogResponseBodyLogInfoBasicInfo> basicInfo_ = nullptr;
    // The information about the caller.
    std::shared_ptr<Models::GetOwnRequestLogResponseBodyLogInfoCallerInfo> callerInfo_ = nullptr;
    // The information about the request parameters.
    std::shared_ptr<vector<Models::GetOwnRequestLogResponseBodyLogInfoParameters>> parameters_ = nullptr;
    // The information that is returned for the request.
    std::shared_ptr<Models::GetOwnRequestLogResponseBodyLogInfoResponses> responses_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OpenAPIExplorer20241130
#endif
