// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCUSTOMPRIVACYPOLICIESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTCUSTOMPRIVACYPOLICIESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class ListCustomPrivacyPoliciesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListCustomPrivacyPoliciesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CustomPrivacyPolicies, customPrivacyPolicies_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(PreviousToken, previousToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListCustomPrivacyPoliciesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CustomPrivacyPolicies, customPrivacyPolicies_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(PreviousToken, previousToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListCustomPrivacyPoliciesResponseBody() = default ;
    ListCustomPrivacyPoliciesResponseBody(const ListCustomPrivacyPoliciesResponseBody &) = default ;
    ListCustomPrivacyPoliciesResponseBody(ListCustomPrivacyPoliciesResponseBody &&) = default ;
    ListCustomPrivacyPoliciesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListCustomPrivacyPoliciesResponseBody() = default ;
    ListCustomPrivacyPoliciesResponseBody& operator=(const ListCustomPrivacyPoliciesResponseBody &) = default ;
    ListCustomPrivacyPoliciesResponseBody& operator=(ListCustomPrivacyPoliciesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class CustomPrivacyPolicies : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const CustomPrivacyPolicies& obj) { 
        DARABONBA_PTR_TO_JSON(CustomPrivacyPolicyId, customPrivacyPolicyId_);
        DARABONBA_PTR_TO_JSON(CustomPrivacyPolicyName, customPrivacyPolicyName_);
        DARABONBA_PTR_TO_JSON(DefaultLanguageCode, defaultLanguageCode_);
        DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(UserConsentType, userConsentType_);
      };
      friend void from_json(const Darabonba::Json& j, CustomPrivacyPolicies& obj) { 
        DARABONBA_PTR_FROM_JSON(CustomPrivacyPolicyId, customPrivacyPolicyId_);
        DARABONBA_PTR_FROM_JSON(CustomPrivacyPolicyName, customPrivacyPolicyName_);
        DARABONBA_PTR_FROM_JSON(DefaultLanguageCode, defaultLanguageCode_);
        DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(UserConsentType, userConsentType_);
      };
      CustomPrivacyPolicies() = default ;
      CustomPrivacyPolicies(const CustomPrivacyPolicies &) = default ;
      CustomPrivacyPolicies(CustomPrivacyPolicies &&) = default ;
      CustomPrivacyPolicies(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~CustomPrivacyPolicies() = default ;
      CustomPrivacyPolicies& operator=(const CustomPrivacyPolicies &) = default ;
      CustomPrivacyPolicies& operator=(CustomPrivacyPolicies &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->customPrivacyPolicyId_ == nullptr
        && this->customPrivacyPolicyName_ == nullptr && this->defaultLanguageCode_ == nullptr && this->instanceId_ == nullptr && this->status_ == nullptr && this->userConsentType_ == nullptr; };
      // customPrivacyPolicyId Field Functions 
      bool hasCustomPrivacyPolicyId() const { return this->customPrivacyPolicyId_ != nullptr;};
      void deleteCustomPrivacyPolicyId() { this->customPrivacyPolicyId_ = nullptr;};
      inline string getCustomPrivacyPolicyId() const { DARABONBA_PTR_GET_DEFAULT(customPrivacyPolicyId_, "") };
      inline CustomPrivacyPolicies& setCustomPrivacyPolicyId(string customPrivacyPolicyId) { DARABONBA_PTR_SET_VALUE(customPrivacyPolicyId_, customPrivacyPolicyId) };


      // customPrivacyPolicyName Field Functions 
      bool hasCustomPrivacyPolicyName() const { return this->customPrivacyPolicyName_ != nullptr;};
      void deleteCustomPrivacyPolicyName() { this->customPrivacyPolicyName_ = nullptr;};
      inline string getCustomPrivacyPolicyName() const { DARABONBA_PTR_GET_DEFAULT(customPrivacyPolicyName_, "") };
      inline CustomPrivacyPolicies& setCustomPrivacyPolicyName(string customPrivacyPolicyName) { DARABONBA_PTR_SET_VALUE(customPrivacyPolicyName_, customPrivacyPolicyName) };


      // defaultLanguageCode Field Functions 
      bool hasDefaultLanguageCode() const { return this->defaultLanguageCode_ != nullptr;};
      void deleteDefaultLanguageCode() { this->defaultLanguageCode_ = nullptr;};
      inline string getDefaultLanguageCode() const { DARABONBA_PTR_GET_DEFAULT(defaultLanguageCode_, "") };
      inline CustomPrivacyPolicies& setDefaultLanguageCode(string defaultLanguageCode) { DARABONBA_PTR_SET_VALUE(defaultLanguageCode_, defaultLanguageCode) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline CustomPrivacyPolicies& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline CustomPrivacyPolicies& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // userConsentType Field Functions 
      bool hasUserConsentType() const { return this->userConsentType_ != nullptr;};
      void deleteUserConsentType() { this->userConsentType_ = nullptr;};
      inline string getUserConsentType() const { DARABONBA_PTR_GET_DEFAULT(userConsentType_, "") };
      inline CustomPrivacyPolicies& setUserConsentType(string userConsentType) { DARABONBA_PTR_SET_VALUE(userConsentType_, userConsentType) };


    protected:
      // 自定义条款Id
      shared_ptr<string> customPrivacyPolicyId_ {};
      // 自定义条款名称
      shared_ptr<string> customPrivacyPolicyName_ {};
      // 若显示语言未配置时，门户侧展示默认语言展示条款。
      shared_ptr<string> defaultLanguageCode_ {};
      // 实例id
      shared_ptr<string> instanceId_ {};
      // 自定义条款状态
      shared_ptr<string> status_ {};
      // 自定义条款同意类型，是默认同意，还是用户勾选同意
      shared_ptr<string> userConsentType_ {};
    };

    virtual bool empty() const override { return this->customPrivacyPolicies_ == nullptr
        && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->previousToken_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // customPrivacyPolicies Field Functions 
    bool hasCustomPrivacyPolicies() const { return this->customPrivacyPolicies_ != nullptr;};
    void deleteCustomPrivacyPolicies() { this->customPrivacyPolicies_ = nullptr;};
    inline const vector<ListCustomPrivacyPoliciesResponseBody::CustomPrivacyPolicies> & getCustomPrivacyPolicies() const { DARABONBA_PTR_GET_CONST(customPrivacyPolicies_, vector<ListCustomPrivacyPoliciesResponseBody::CustomPrivacyPolicies>) };
    inline vector<ListCustomPrivacyPoliciesResponseBody::CustomPrivacyPolicies> getCustomPrivacyPolicies() { DARABONBA_PTR_GET(customPrivacyPolicies_, vector<ListCustomPrivacyPoliciesResponseBody::CustomPrivacyPolicies>) };
    inline ListCustomPrivacyPoliciesResponseBody& setCustomPrivacyPolicies(const vector<ListCustomPrivacyPoliciesResponseBody::CustomPrivacyPolicies> & customPrivacyPolicies) { DARABONBA_PTR_SET_VALUE(customPrivacyPolicies_, customPrivacyPolicies) };
    inline ListCustomPrivacyPoliciesResponseBody& setCustomPrivacyPolicies(vector<ListCustomPrivacyPoliciesResponseBody::CustomPrivacyPolicies> && customPrivacyPolicies) { DARABONBA_PTR_SET_RVALUE(customPrivacyPolicies_, customPrivacyPolicies) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int64_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0L) };
    inline ListCustomPrivacyPoliciesResponseBody& setMaxResults(int64_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListCustomPrivacyPoliciesResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // previousToken Field Functions 
    bool hasPreviousToken() const { return this->previousToken_ != nullptr;};
    void deletePreviousToken() { this->previousToken_ = nullptr;};
    inline string getPreviousToken() const { DARABONBA_PTR_GET_DEFAULT(previousToken_, "") };
    inline ListCustomPrivacyPoliciesResponseBody& setPreviousToken(string previousToken) { DARABONBA_PTR_SET_VALUE(previousToken_, previousToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListCustomPrivacyPoliciesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListCustomPrivacyPoliciesResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    shared_ptr<vector<ListCustomPrivacyPoliciesResponseBody::CustomPrivacyPolicies>> customPrivacyPolicies_ {};
    // 分页查询时每页行数。
    shared_ptr<int64_t> maxResults_ {};
    // 本次调用返回的查询凭证（Token）值，用于下一次翻页查询。
    shared_ptr<string> nextToken_ {};
    // 本次调用返回的查询凭证（Token）值，用于上一次翻页查询。
    shared_ptr<string> previousToken_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<int64_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
