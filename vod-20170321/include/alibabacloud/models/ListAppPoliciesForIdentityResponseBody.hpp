// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAPPPOLICIESFORIDENTITYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTAPPPOLICIESFORIDENTITYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListAppPoliciesForIdentityResponseBodyAppPolicyList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class ListAppPoliciesForIdentityResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAppPoliciesForIdentityResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AppPolicyList, appPolicyList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListAppPoliciesForIdentityResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AppPolicyList, appPolicyList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListAppPoliciesForIdentityResponseBody() = default ;
    ListAppPoliciesForIdentityResponseBody(const ListAppPoliciesForIdentityResponseBody &) = default ;
    ListAppPoliciesForIdentityResponseBody(ListAppPoliciesForIdentityResponseBody &&) = default ;
    ListAppPoliciesForIdentityResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAppPoliciesForIdentityResponseBody() = default ;
    ListAppPoliciesForIdentityResponseBody& operator=(const ListAppPoliciesForIdentityResponseBody &) = default ;
    ListAppPoliciesForIdentityResponseBody& operator=(ListAppPoliciesForIdentityResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->appPolicyList_ != nullptr
        && this->requestId_ != nullptr; };
    // appPolicyList Field Functions 
    bool hasAppPolicyList() const { return this->appPolicyList_ != nullptr;};
    void deleteAppPolicyList() { this->appPolicyList_ = nullptr;};
    inline const vector<ListAppPoliciesForIdentityResponseBodyAppPolicyList> & appPolicyList() const { DARABONBA_PTR_GET_CONST(appPolicyList_, vector<ListAppPoliciesForIdentityResponseBodyAppPolicyList>) };
    inline vector<ListAppPoliciesForIdentityResponseBodyAppPolicyList> appPolicyList() { DARABONBA_PTR_GET(appPolicyList_, vector<ListAppPoliciesForIdentityResponseBodyAppPolicyList>) };
    inline ListAppPoliciesForIdentityResponseBody& setAppPolicyList(const vector<ListAppPoliciesForIdentityResponseBodyAppPolicyList> & appPolicyList) { DARABONBA_PTR_SET_VALUE(appPolicyList_, appPolicyList) };
    inline ListAppPoliciesForIdentityResponseBody& setAppPolicyList(vector<ListAppPoliciesForIdentityResponseBodyAppPolicyList> && appPolicyList) { DARABONBA_PTR_SET_RVALUE(appPolicyList_, appPolicyList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListAppPoliciesForIdentityResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The details of each policy.
    // 
    // > A maximum of 100 entries can be returned.
    std::shared_ptr<vector<ListAppPoliciesForIdentityResponseBodyAppPolicyList>> appPolicyList_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
