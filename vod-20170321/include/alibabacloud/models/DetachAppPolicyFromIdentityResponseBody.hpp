// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DETACHAPPPOLICYFROMIDENTITYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DETACHAPPPOLICYFROMIDENTITYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class DetachAppPolicyFromIdentityResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DetachAppPolicyFromIdentityResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(FailedPolicyNames, failedPolicyNames_);
      DARABONBA_PTR_TO_JSON(NonExistPolicyNames, nonExistPolicyNames_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DetachAppPolicyFromIdentityResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(FailedPolicyNames, failedPolicyNames_);
      DARABONBA_PTR_FROM_JSON(NonExistPolicyNames, nonExistPolicyNames_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DetachAppPolicyFromIdentityResponseBody() = default ;
    DetachAppPolicyFromIdentityResponseBody(const DetachAppPolicyFromIdentityResponseBody &) = default ;
    DetachAppPolicyFromIdentityResponseBody(DetachAppPolicyFromIdentityResponseBody &&) = default ;
    DetachAppPolicyFromIdentityResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DetachAppPolicyFromIdentityResponseBody() = default ;
    DetachAppPolicyFromIdentityResponseBody& operator=(const DetachAppPolicyFromIdentityResponseBody &) = default ;
    DetachAppPolicyFromIdentityResponseBody& operator=(DetachAppPolicyFromIdentityResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->failedPolicyNames_ == nullptr
        && this->nonExistPolicyNames_ == nullptr && this->requestId_ == nullptr; };
    // failedPolicyNames Field Functions 
    bool hasFailedPolicyNames() const { return this->failedPolicyNames_ != nullptr;};
    void deleteFailedPolicyNames() { this->failedPolicyNames_ = nullptr;};
    inline const vector<string> & getFailedPolicyNames() const { DARABONBA_PTR_GET_CONST(failedPolicyNames_, vector<string>) };
    inline vector<string> getFailedPolicyNames() { DARABONBA_PTR_GET(failedPolicyNames_, vector<string>) };
    inline DetachAppPolicyFromIdentityResponseBody& setFailedPolicyNames(const vector<string> & failedPolicyNames) { DARABONBA_PTR_SET_VALUE(failedPolicyNames_, failedPolicyNames) };
    inline DetachAppPolicyFromIdentityResponseBody& setFailedPolicyNames(vector<string> && failedPolicyNames) { DARABONBA_PTR_SET_RVALUE(failedPolicyNames_, failedPolicyNames) };


    // nonExistPolicyNames Field Functions 
    bool hasNonExistPolicyNames() const { return this->nonExistPolicyNames_ != nullptr;};
    void deleteNonExistPolicyNames() { this->nonExistPolicyNames_ = nullptr;};
    inline const vector<string> & getNonExistPolicyNames() const { DARABONBA_PTR_GET_CONST(nonExistPolicyNames_, vector<string>) };
    inline vector<string> getNonExistPolicyNames() { DARABONBA_PTR_GET(nonExistPolicyNames_, vector<string>) };
    inline DetachAppPolicyFromIdentityResponseBody& setNonExistPolicyNames(const vector<string> & nonExistPolicyNames) { DARABONBA_PTR_SET_VALUE(nonExistPolicyNames_, nonExistPolicyNames) };
    inline DetachAppPolicyFromIdentityResponseBody& setNonExistPolicyNames(vector<string> && nonExistPolicyNames) { DARABONBA_PTR_SET_RVALUE(nonExistPolicyNames_, nonExistPolicyNames) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DetachAppPolicyFromIdentityResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The names of the policies that failed to be granted to the RAM user or RAM role.
    shared_ptr<vector<string>> failedPolicyNames_ {};
    // The name of the policy that was not found.
    shared_ptr<vector<string>> nonExistPolicyNames_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
