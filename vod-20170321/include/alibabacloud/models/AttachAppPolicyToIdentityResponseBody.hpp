// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ATTACHAPPPOLICYTOIDENTITYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_ATTACHAPPPOLICYTOIDENTITYRESPONSEBODY_HPP_
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
  class AttachAppPolicyToIdentityResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AttachAppPolicyToIdentityResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(FailedPolicyNames, failedPolicyNames_);
      DARABONBA_PTR_TO_JSON(NonExistPolicyNames, nonExistPolicyNames_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, AttachAppPolicyToIdentityResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(FailedPolicyNames, failedPolicyNames_);
      DARABONBA_PTR_FROM_JSON(NonExistPolicyNames, nonExistPolicyNames_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    AttachAppPolicyToIdentityResponseBody() = default ;
    AttachAppPolicyToIdentityResponseBody(const AttachAppPolicyToIdentityResponseBody &) = default ;
    AttachAppPolicyToIdentityResponseBody(AttachAppPolicyToIdentityResponseBody &&) = default ;
    AttachAppPolicyToIdentityResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AttachAppPolicyToIdentityResponseBody() = default ;
    AttachAppPolicyToIdentityResponseBody& operator=(const AttachAppPolicyToIdentityResponseBody &) = default ;
    AttachAppPolicyToIdentityResponseBody& operator=(AttachAppPolicyToIdentityResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->failedPolicyNames_ == nullptr
        && return this->nonExistPolicyNames_ == nullptr && return this->requestId_ == nullptr; };
    // failedPolicyNames Field Functions 
    bool hasFailedPolicyNames() const { return this->failedPolicyNames_ != nullptr;};
    void deleteFailedPolicyNames() { this->failedPolicyNames_ = nullptr;};
    inline const vector<string> & failedPolicyNames() const { DARABONBA_PTR_GET_CONST(failedPolicyNames_, vector<string>) };
    inline vector<string> failedPolicyNames() { DARABONBA_PTR_GET(failedPolicyNames_, vector<string>) };
    inline AttachAppPolicyToIdentityResponseBody& setFailedPolicyNames(const vector<string> & failedPolicyNames) { DARABONBA_PTR_SET_VALUE(failedPolicyNames_, failedPolicyNames) };
    inline AttachAppPolicyToIdentityResponseBody& setFailedPolicyNames(vector<string> && failedPolicyNames) { DARABONBA_PTR_SET_RVALUE(failedPolicyNames_, failedPolicyNames) };


    // nonExistPolicyNames Field Functions 
    bool hasNonExistPolicyNames() const { return this->nonExistPolicyNames_ != nullptr;};
    void deleteNonExistPolicyNames() { this->nonExistPolicyNames_ = nullptr;};
    inline const vector<string> & nonExistPolicyNames() const { DARABONBA_PTR_GET_CONST(nonExistPolicyNames_, vector<string>) };
    inline vector<string> nonExistPolicyNames() { DARABONBA_PTR_GET(nonExistPolicyNames_, vector<string>) };
    inline AttachAppPolicyToIdentityResponseBody& setNonExistPolicyNames(const vector<string> & nonExistPolicyNames) { DARABONBA_PTR_SET_VALUE(nonExistPolicyNames_, nonExistPolicyNames) };
    inline AttachAppPolicyToIdentityResponseBody& setNonExistPolicyNames(vector<string> && nonExistPolicyNames) { DARABONBA_PTR_SET_RVALUE(nonExistPolicyNames_, nonExistPolicyNames) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline AttachAppPolicyToIdentityResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The names of the policies that failed to be granted to the RAM user or RAM role.
    std::shared_ptr<vector<string>> failedPolicyNames_ = nullptr;
    // The names of the policies that were not found.
    std::shared_ptr<vector<string>> nonExistPolicyNames_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
