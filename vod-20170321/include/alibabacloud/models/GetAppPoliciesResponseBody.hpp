// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAPPPOLICIESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETAPPPOLICIESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetAppPoliciesResponseBodyAppPolicyList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class GetAppPoliciesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAppPoliciesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AppPolicyList, appPolicyList_);
      DARABONBA_PTR_TO_JSON(NonExistPolicyNames, nonExistPolicyNames_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetAppPoliciesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AppPolicyList, appPolicyList_);
      DARABONBA_PTR_FROM_JSON(NonExistPolicyNames, nonExistPolicyNames_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetAppPoliciesResponseBody() = default ;
    GetAppPoliciesResponseBody(const GetAppPoliciesResponseBody &) = default ;
    GetAppPoliciesResponseBody(GetAppPoliciesResponseBody &&) = default ;
    GetAppPoliciesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAppPoliciesResponseBody() = default ;
    GetAppPoliciesResponseBody& operator=(const GetAppPoliciesResponseBody &) = default ;
    GetAppPoliciesResponseBody& operator=(GetAppPoliciesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->appPolicyList_ != nullptr
        && this->nonExistPolicyNames_ != nullptr && this->requestId_ != nullptr; };
    // appPolicyList Field Functions 
    bool hasAppPolicyList() const { return this->appPolicyList_ != nullptr;};
    void deleteAppPolicyList() { this->appPolicyList_ = nullptr;};
    inline const vector<GetAppPoliciesResponseBodyAppPolicyList> & appPolicyList() const { DARABONBA_PTR_GET_CONST(appPolicyList_, vector<GetAppPoliciesResponseBodyAppPolicyList>) };
    inline vector<GetAppPoliciesResponseBodyAppPolicyList> appPolicyList() { DARABONBA_PTR_GET(appPolicyList_, vector<GetAppPoliciesResponseBodyAppPolicyList>) };
    inline GetAppPoliciesResponseBody& setAppPolicyList(const vector<GetAppPoliciesResponseBodyAppPolicyList> & appPolicyList) { DARABONBA_PTR_SET_VALUE(appPolicyList_, appPolicyList) };
    inline GetAppPoliciesResponseBody& setAppPolicyList(vector<GetAppPoliciesResponseBodyAppPolicyList> && appPolicyList) { DARABONBA_PTR_SET_RVALUE(appPolicyList_, appPolicyList) };


    // nonExistPolicyNames Field Functions 
    bool hasNonExistPolicyNames() const { return this->nonExistPolicyNames_ != nullptr;};
    void deleteNonExistPolicyNames() { this->nonExistPolicyNames_ = nullptr;};
    inline const vector<string> & nonExistPolicyNames() const { DARABONBA_PTR_GET_CONST(nonExistPolicyNames_, vector<string>) };
    inline vector<string> nonExistPolicyNames() { DARABONBA_PTR_GET(nonExistPolicyNames_, vector<string>) };
    inline GetAppPoliciesResponseBody& setNonExistPolicyNames(const vector<string> & nonExistPolicyNames) { DARABONBA_PTR_SET_VALUE(nonExistPolicyNames_, nonExistPolicyNames) };
    inline GetAppPoliciesResponseBody& setNonExistPolicyNames(vector<string> && nonExistPolicyNames) { DARABONBA_PTR_SET_RVALUE(nonExistPolicyNames_, nonExistPolicyNames) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetAppPoliciesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<vector<GetAppPoliciesResponseBodyAppPolicyList>> appPolicyList_ = nullptr;
    std::shared_ptr<vector<string>> nonExistPolicyNames_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
