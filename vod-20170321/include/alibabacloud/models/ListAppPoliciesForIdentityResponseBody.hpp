// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAPPPOLICIESFORIDENTITYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTAPPPOLICIESFORIDENTITYRESPONSEBODY_HPP_
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
    class AppPolicyList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AppPolicyList& obj) { 
        DARABONBA_PTR_TO_JSON(AppId, appId_);
        DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(ModificationTime, modificationTime_);
        DARABONBA_PTR_TO_JSON(PolicyName, policyName_);
        DARABONBA_PTR_TO_JSON(PolicyType, policyType_);
        DARABONBA_PTR_TO_JSON(PolicyValue, policyValue_);
      };
      friend void from_json(const Darabonba::Json& j, AppPolicyList& obj) { 
        DARABONBA_PTR_FROM_JSON(AppId, appId_);
        DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(ModificationTime, modificationTime_);
        DARABONBA_PTR_FROM_JSON(PolicyName, policyName_);
        DARABONBA_PTR_FROM_JSON(PolicyType, policyType_);
        DARABONBA_PTR_FROM_JSON(PolicyValue, policyValue_);
      };
      AppPolicyList() = default ;
      AppPolicyList(const AppPolicyList &) = default ;
      AppPolicyList(AppPolicyList &&) = default ;
      AppPolicyList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AppPolicyList() = default ;
      AppPolicyList& operator=(const AppPolicyList &) = default ;
      AppPolicyList& operator=(AppPolicyList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->appId_ == nullptr
        && this->creationTime_ == nullptr && this->description_ == nullptr && this->modificationTime_ == nullptr && this->policyName_ == nullptr && this->policyType_ == nullptr
        && this->policyValue_ == nullptr; };
      // appId Field Functions 
      bool hasAppId() const { return this->appId_ != nullptr;};
      void deleteAppId() { this->appId_ = nullptr;};
      inline string getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
      inline AppPolicyList& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


      // creationTime Field Functions 
      bool hasCreationTime() const { return this->creationTime_ != nullptr;};
      void deleteCreationTime() { this->creationTime_ = nullptr;};
      inline string getCreationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
      inline AppPolicyList& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline AppPolicyList& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // modificationTime Field Functions 
      bool hasModificationTime() const { return this->modificationTime_ != nullptr;};
      void deleteModificationTime() { this->modificationTime_ = nullptr;};
      inline string getModificationTime() const { DARABONBA_PTR_GET_DEFAULT(modificationTime_, "") };
      inline AppPolicyList& setModificationTime(string modificationTime) { DARABONBA_PTR_SET_VALUE(modificationTime_, modificationTime) };


      // policyName Field Functions 
      bool hasPolicyName() const { return this->policyName_ != nullptr;};
      void deletePolicyName() { this->policyName_ = nullptr;};
      inline string getPolicyName() const { DARABONBA_PTR_GET_DEFAULT(policyName_, "") };
      inline AppPolicyList& setPolicyName(string policyName) { DARABONBA_PTR_SET_VALUE(policyName_, policyName) };


      // policyType Field Functions 
      bool hasPolicyType() const { return this->policyType_ != nullptr;};
      void deletePolicyType() { this->policyType_ = nullptr;};
      inline string getPolicyType() const { DARABONBA_PTR_GET_DEFAULT(policyType_, "") };
      inline AppPolicyList& setPolicyType(string policyType) { DARABONBA_PTR_SET_VALUE(policyType_, policyType) };


      // policyValue Field Functions 
      bool hasPolicyValue() const { return this->policyValue_ != nullptr;};
      void deletePolicyValue() { this->policyValue_ = nullptr;};
      inline string getPolicyValue() const { DARABONBA_PTR_GET_DEFAULT(policyValue_, "") };
      inline AppPolicyList& setPolicyValue(string policyValue) { DARABONBA_PTR_SET_VALUE(policyValue_, policyValue) };


    protected:
      // The ID of the application.
      shared_ptr<string> appId_ {};
      // The time when the application policy was created. The time follows the ISO 8601 standard in the *yyyy-MM-dd*T*HH:mm:ss*Z format. The time is displayed in UTC.
      shared_ptr<string> creationTime_ {};
      // The description of the policy.
      shared_ptr<string> description_ {};
      // The last time when the application policy was modified. The time follows the ISO 8601 standard in the *yyyy-MM-dd*T*HH:mm:ss*Z format. The time is displayed in UTC.
      shared_ptr<string> modificationTime_ {};
      // The name of the policy.
      shared_ptr<string> policyName_ {};
      // The type of the policy. Valid values:
      // 
      // *   **System**
      // *   **Custom**
      shared_ptr<string> policyType_ {};
      // The content of the policy.
      shared_ptr<string> policyValue_ {};
    };

    virtual bool empty() const override { return this->appPolicyList_ == nullptr
        && this->requestId_ == nullptr; };
    // appPolicyList Field Functions 
    bool hasAppPolicyList() const { return this->appPolicyList_ != nullptr;};
    void deleteAppPolicyList() { this->appPolicyList_ = nullptr;};
    inline const vector<ListAppPoliciesForIdentityResponseBody::AppPolicyList> & getAppPolicyList() const { DARABONBA_PTR_GET_CONST(appPolicyList_, vector<ListAppPoliciesForIdentityResponseBody::AppPolicyList>) };
    inline vector<ListAppPoliciesForIdentityResponseBody::AppPolicyList> getAppPolicyList() { DARABONBA_PTR_GET(appPolicyList_, vector<ListAppPoliciesForIdentityResponseBody::AppPolicyList>) };
    inline ListAppPoliciesForIdentityResponseBody& setAppPolicyList(const vector<ListAppPoliciesForIdentityResponseBody::AppPolicyList> & appPolicyList) { DARABONBA_PTR_SET_VALUE(appPolicyList_, appPolicyList) };
    inline ListAppPoliciesForIdentityResponseBody& setAppPolicyList(vector<ListAppPoliciesForIdentityResponseBody::AppPolicyList> && appPolicyList) { DARABONBA_PTR_SET_RVALUE(appPolicyList_, appPolicyList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListAppPoliciesForIdentityResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The details of each policy.
    // 
    // > A maximum of 100 entries can be returned.
    shared_ptr<vector<ListAppPoliciesForIdentityResponseBody::AppPolicyList>> appPolicyList_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
