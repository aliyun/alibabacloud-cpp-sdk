// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCUSTOMPRIVACYPOLICIESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTCUSTOMPRIVACYPOLICIESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class ListCustomPrivacyPoliciesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListCustomPrivacyPoliciesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CustomPrivacyPolicyNameStartsWith, customPrivacyPolicyNameStartsWith_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(PreviousToken, previousToken_);
    };
    friend void from_json(const Darabonba::Json& j, ListCustomPrivacyPoliciesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CustomPrivacyPolicyNameStartsWith, customPrivacyPolicyNameStartsWith_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(PreviousToken, previousToken_);
    };
    ListCustomPrivacyPoliciesRequest() = default ;
    ListCustomPrivacyPoliciesRequest(const ListCustomPrivacyPoliciesRequest &) = default ;
    ListCustomPrivacyPoliciesRequest(ListCustomPrivacyPoliciesRequest &&) = default ;
    ListCustomPrivacyPoliciesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListCustomPrivacyPoliciesRequest() = default ;
    ListCustomPrivacyPoliciesRequest& operator=(const ListCustomPrivacyPoliciesRequest &) = default ;
    ListCustomPrivacyPoliciesRequest& operator=(ListCustomPrivacyPoliciesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->customPrivacyPolicyNameStartsWith_ == nullptr
        && return this->instanceId_ == nullptr && return this->maxResults_ == nullptr && return this->nextToken_ == nullptr && return this->previousToken_ == nullptr; };
    // customPrivacyPolicyNameStartsWith Field Functions 
    bool hasCustomPrivacyPolicyNameStartsWith() const { return this->customPrivacyPolicyNameStartsWith_ != nullptr;};
    void deleteCustomPrivacyPolicyNameStartsWith() { this->customPrivacyPolicyNameStartsWith_ = nullptr;};
    inline string customPrivacyPolicyNameStartsWith() const { DARABONBA_PTR_GET_DEFAULT(customPrivacyPolicyNameStartsWith_, "") };
    inline ListCustomPrivacyPoliciesRequest& setCustomPrivacyPolicyNameStartsWith(string customPrivacyPolicyNameStartsWith) { DARABONBA_PTR_SET_VALUE(customPrivacyPolicyNameStartsWith_, customPrivacyPolicyNameStartsWith) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ListCustomPrivacyPoliciesRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int64_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0L) };
    inline ListCustomPrivacyPoliciesRequest& setMaxResults(int64_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListCustomPrivacyPoliciesRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // previousToken Field Functions 
    bool hasPreviousToken() const { return this->previousToken_ != nullptr;};
    void deletePreviousToken() { this->previousToken_ = nullptr;};
    inline string previousToken() const { DARABONBA_PTR_GET_DEFAULT(previousToken_, "") };
    inline ListCustomPrivacyPoliciesRequest& setPreviousToken(string previousToken) { DARABONBA_PTR_SET_VALUE(previousToken_, previousToken) };


  protected:
    // 自定义条款名称，左模糊匹配
    std::shared_ptr<string> customPrivacyPolicyNameStartsWith_ = nullptr;
    // IDaaS EIAM实例的ID。
    // 
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    // 分页查询时每页行数。默认值为20，最大值为100。
    std::shared_ptr<int64_t> maxResults_ = nullptr;
    // 查询凭证（Token），取值为上一次API调用返回的NextToken参数值。
    std::shared_ptr<string> nextToken_ = nullptr;
    // 查询上一页凭证（Token），取值为上一次API调用返回的previousToken参数值。
    std::shared_ptr<string> previousToken_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
