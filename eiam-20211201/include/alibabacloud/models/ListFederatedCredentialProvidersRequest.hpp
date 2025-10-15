// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTFEDERATEDCREDENTIALPROVIDERSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTFEDERATEDCREDENTIALPROVIDERSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class ListFederatedCredentialProvidersRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListFederatedCredentialProvidersRequest& obj) { 
      DARABONBA_PTR_TO_JSON(FederatedCredentialProviderName, federatedCredentialProviderName_);
      DARABONBA_PTR_TO_JSON(FederatedCredentialProviderType, federatedCredentialProviderType_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(PreviousToken, previousToken_);
    };
    friend void from_json(const Darabonba::Json& j, ListFederatedCredentialProvidersRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(FederatedCredentialProviderName, federatedCredentialProviderName_);
      DARABONBA_PTR_FROM_JSON(FederatedCredentialProviderType, federatedCredentialProviderType_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(PreviousToken, previousToken_);
    };
    ListFederatedCredentialProvidersRequest() = default ;
    ListFederatedCredentialProvidersRequest(const ListFederatedCredentialProvidersRequest &) = default ;
    ListFederatedCredentialProvidersRequest(ListFederatedCredentialProvidersRequest &&) = default ;
    ListFederatedCredentialProvidersRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListFederatedCredentialProvidersRequest() = default ;
    ListFederatedCredentialProvidersRequest& operator=(const ListFederatedCredentialProvidersRequest &) = default ;
    ListFederatedCredentialProvidersRequest& operator=(ListFederatedCredentialProvidersRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->federatedCredentialProviderName_ == nullptr
        && return this->federatedCredentialProviderType_ == nullptr && return this->instanceId_ == nullptr && return this->maxResults_ == nullptr && return this->nextToken_ == nullptr && return this->previousToken_ == nullptr; };
    // federatedCredentialProviderName Field Functions 
    bool hasFederatedCredentialProviderName() const { return this->federatedCredentialProviderName_ != nullptr;};
    void deleteFederatedCredentialProviderName() { this->federatedCredentialProviderName_ = nullptr;};
    inline string federatedCredentialProviderName() const { DARABONBA_PTR_GET_DEFAULT(federatedCredentialProviderName_, "") };
    inline ListFederatedCredentialProvidersRequest& setFederatedCredentialProviderName(string federatedCredentialProviderName) { DARABONBA_PTR_SET_VALUE(federatedCredentialProviderName_, federatedCredentialProviderName) };


    // federatedCredentialProviderType Field Functions 
    bool hasFederatedCredentialProviderType() const { return this->federatedCredentialProviderType_ != nullptr;};
    void deleteFederatedCredentialProviderType() { this->federatedCredentialProviderType_ = nullptr;};
    inline string federatedCredentialProviderType() const { DARABONBA_PTR_GET_DEFAULT(federatedCredentialProviderType_, "") };
    inline ListFederatedCredentialProvidersRequest& setFederatedCredentialProviderType(string federatedCredentialProviderType) { DARABONBA_PTR_SET_VALUE(federatedCredentialProviderType_, federatedCredentialProviderType) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ListFederatedCredentialProvidersRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListFederatedCredentialProvidersRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListFederatedCredentialProvidersRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // previousToken Field Functions 
    bool hasPreviousToken() const { return this->previousToken_ != nullptr;};
    void deletePreviousToken() { this->previousToken_ = nullptr;};
    inline string previousToken() const { DARABONBA_PTR_GET_DEFAULT(previousToken_, "") };
    inline ListFederatedCredentialProvidersRequest& setPreviousToken(string previousToken) { DARABONBA_PTR_SET_VALUE(previousToken_, previousToken) };


  protected:
    // 联邦凭证提供方名称
    std::shared_ptr<string> federatedCredentialProviderName_ = nullptr;
    // 联邦凭证提供方类型
    std::shared_ptr<string> federatedCredentialProviderType_ = nullptr;
    // IDaaS EIAM实例的ID。
    // 
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    // 分页查询时每页行数。默认值为20，最大值为100。
    std::shared_ptr<int32_t> maxResults_ = nullptr;
    // 查询凭证（Token），取值为上一次API调用返回的NextToken参数值。
    std::shared_ptr<string> nextToken_ = nullptr;
    // 查询上一页凭证（Token），取值为上一次API调用返回的previousToken参数值。
    std::shared_ptr<string> previousToken_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
