// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTOAUTH2CREDENTIALPROVIDERSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTOAUTH2CREDENTIALPROVIDERSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentIdentity20250901
{
namespace Models
{
  class ListOAuth2CredentialProvidersRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListOAuth2CredentialProvidersRequest& obj) { 
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
    };
    friend void from_json(const Darabonba::Json& j, ListOAuth2CredentialProvidersRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
    };
    ListOAuth2CredentialProvidersRequest() = default ;
    ListOAuth2CredentialProvidersRequest(const ListOAuth2CredentialProvidersRequest &) = default ;
    ListOAuth2CredentialProvidersRequest(ListOAuth2CredentialProvidersRequest &&) = default ;
    ListOAuth2CredentialProvidersRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListOAuth2CredentialProvidersRequest() = default ;
    ListOAuth2CredentialProvidersRequest& operator=(const ListOAuth2CredentialProvidersRequest &) = default ;
    ListOAuth2CredentialProvidersRequest& operator=(ListOAuth2CredentialProvidersRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->maxResults_ == nullptr
        && return this->nextToken_ == nullptr; };
    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListOAuth2CredentialProvidersRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListOAuth2CredentialProvidersRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


  protected:
    std::shared_ptr<int32_t> maxResults_ = nullptr;
    std::shared_ptr<string> nextToken_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentIdentity20250901
#endif
