// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAUTHENTICATIONTOKENSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTAUTHENTICATIONTOKENSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EiamDeveloperapi20220225
{
namespace Models
{
  class ListAuthenticationTokensRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAuthenticationTokensRequest& obj) { 
      DARABONBA_PTR_TO_JSON(consumerId, consumerId_);
      DARABONBA_PTR_TO_JSON(credentialProviderIdentifier, credentialProviderIdentifier_);
      DARABONBA_PTR_TO_JSON(expired, expired_);
      DARABONBA_PTR_TO_JSON(maxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(nextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(revoked, revoked_);
    };
    friend void from_json(const Darabonba::Json& j, ListAuthenticationTokensRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(consumerId, consumerId_);
      DARABONBA_PTR_FROM_JSON(credentialProviderIdentifier, credentialProviderIdentifier_);
      DARABONBA_PTR_FROM_JSON(expired, expired_);
      DARABONBA_PTR_FROM_JSON(maxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(nextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(revoked, revoked_);
    };
    ListAuthenticationTokensRequest() = default ;
    ListAuthenticationTokensRequest(const ListAuthenticationTokensRequest &) = default ;
    ListAuthenticationTokensRequest(ListAuthenticationTokensRequest &&) = default ;
    ListAuthenticationTokensRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAuthenticationTokensRequest() = default ;
    ListAuthenticationTokensRequest& operator=(const ListAuthenticationTokensRequest &) = default ;
    ListAuthenticationTokensRequest& operator=(ListAuthenticationTokensRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->consumerId_ == nullptr
        && this->credentialProviderIdentifier_ == nullptr && this->expired_ == nullptr && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->revoked_ == nullptr; };
    // consumerId Field Functions 
    bool hasConsumerId() const { return this->consumerId_ != nullptr;};
    void deleteConsumerId() { this->consumerId_ = nullptr;};
    inline string getConsumerId() const { DARABONBA_PTR_GET_DEFAULT(consumerId_, "") };
    inline ListAuthenticationTokensRequest& setConsumerId(string consumerId) { DARABONBA_PTR_SET_VALUE(consumerId_, consumerId) };


    // credentialProviderIdentifier Field Functions 
    bool hasCredentialProviderIdentifier() const { return this->credentialProviderIdentifier_ != nullptr;};
    void deleteCredentialProviderIdentifier() { this->credentialProviderIdentifier_ = nullptr;};
    inline string getCredentialProviderIdentifier() const { DARABONBA_PTR_GET_DEFAULT(credentialProviderIdentifier_, "") };
    inline ListAuthenticationTokensRequest& setCredentialProviderIdentifier(string credentialProviderIdentifier) { DARABONBA_PTR_SET_VALUE(credentialProviderIdentifier_, credentialProviderIdentifier) };


    // expired Field Functions 
    bool hasExpired() const { return this->expired_ != nullptr;};
    void deleteExpired() { this->expired_ = nullptr;};
    inline bool getExpired() const { DARABONBA_PTR_GET_DEFAULT(expired_, false) };
    inline ListAuthenticationTokensRequest& setExpired(bool expired) { DARABONBA_PTR_SET_VALUE(expired_, expired) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int64_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0L) };
    inline ListAuthenticationTokensRequest& setMaxResults(int64_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListAuthenticationTokensRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // revoked Field Functions 
    bool hasRevoked() const { return this->revoked_ != nullptr;};
    void deleteRevoked() { this->revoked_ = nullptr;};
    inline bool getRevoked() const { DARABONBA_PTR_GET_DEFAULT(revoked_, false) };
    inline ListAuthenticationTokensRequest& setRevoked(bool revoked) { DARABONBA_PTR_SET_VALUE(revoked_, revoked) };


  protected:
    // This parameter is required.
    shared_ptr<string> consumerId_ {};
    // This parameter is required.
    shared_ptr<string> credentialProviderIdentifier_ {};
    shared_ptr<bool> expired_ {};
    shared_ptr<int64_t> maxResults_ {};
    shared_ptr<string> nextToken_ {};
    shared_ptr<bool> revoked_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EiamDeveloperapi20220225
#endif
