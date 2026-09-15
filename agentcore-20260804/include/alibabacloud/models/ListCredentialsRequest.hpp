// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCREDENTIALSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTCREDENTIALSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentCore20260804
{
namespace Models
{
  class ListCredentialsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListCredentialsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(credentialType, credentialType_);
      DARABONBA_PTR_TO_JSON(maxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(nameLike, nameLike_);
      DARABONBA_PTR_TO_JSON(nextToken, nextToken_);
    };
    friend void from_json(const Darabonba::Json& j, ListCredentialsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(credentialType, credentialType_);
      DARABONBA_PTR_FROM_JSON(maxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(nameLike, nameLike_);
      DARABONBA_PTR_FROM_JSON(nextToken, nextToken_);
    };
    ListCredentialsRequest() = default ;
    ListCredentialsRequest(const ListCredentialsRequest &) = default ;
    ListCredentialsRequest(ListCredentialsRequest &&) = default ;
    ListCredentialsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListCredentialsRequest() = default ;
    ListCredentialsRequest& operator=(const ListCredentialsRequest &) = default ;
    ListCredentialsRequest& operator=(ListCredentialsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->credentialType_ == nullptr
        && this->maxResults_ == nullptr && this->name_ == nullptr && this->nameLike_ == nullptr && this->nextToken_ == nullptr; };
    // credentialType Field Functions 
    bool hasCredentialType() const { return this->credentialType_ != nullptr;};
    void deleteCredentialType() { this->credentialType_ = nullptr;};
    inline string getCredentialType() const { DARABONBA_PTR_GET_DEFAULT(credentialType_, "") };
    inline ListCredentialsRequest& setCredentialType(string credentialType) { DARABONBA_PTR_SET_VALUE(credentialType_, credentialType) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListCredentialsRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListCredentialsRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // nameLike Field Functions 
    bool hasNameLike() const { return this->nameLike_ != nullptr;};
    void deleteNameLike() { this->nameLike_ = nullptr;};
    inline string getNameLike() const { DARABONBA_PTR_GET_DEFAULT(nameLike_, "") };
    inline ListCredentialsRequest& setNameLike(string nameLike) { DARABONBA_PTR_SET_VALUE(nameLike_, nameLike) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListCredentialsRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


  protected:
    // Filters by credential type. Currently, only apiKey is supported.
    shared_ptr<string> credentialType_ {};
    // The maximum number of records to return per page. Valid values: 1 to 100. If this parameter is not specified, 10 records are returned by default.
    shared_ptr<int32_t> maxResults_ {};
    // Filters by credential name.
    shared_ptr<string> name_ {};
    // The fuzzy match filter condition for credential names.
    shared_ptr<string> nameLike_ {};
    // The pagination token for the next page. Do not specify this parameter for the first request. For subsequent requests, set this parameter to the nextToken value returned in the previous response.
    shared_ptr<string> nextToken_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentCore20260804
#endif
