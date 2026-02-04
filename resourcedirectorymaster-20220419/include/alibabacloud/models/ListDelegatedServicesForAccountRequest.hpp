// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDELEGATEDSERVICESFORACCOUNTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTDELEGATEDSERVICESFORACCOUNTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ResourceDirectoryMaster20220419
{
namespace Models
{
  class ListDelegatedServicesForAccountRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDelegatedServicesForAccountRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AccountId, accountId_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
    };
    friend void from_json(const Darabonba::Json& j, ListDelegatedServicesForAccountRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AccountId, accountId_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
    };
    ListDelegatedServicesForAccountRequest() = default ;
    ListDelegatedServicesForAccountRequest(const ListDelegatedServicesForAccountRequest &) = default ;
    ListDelegatedServicesForAccountRequest(ListDelegatedServicesForAccountRequest &&) = default ;
    ListDelegatedServicesForAccountRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDelegatedServicesForAccountRequest() = default ;
    ListDelegatedServicesForAccountRequest& operator=(const ListDelegatedServicesForAccountRequest &) = default ;
    ListDelegatedServicesForAccountRequest& operator=(ListDelegatedServicesForAccountRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accountId_ == nullptr
        && this->maxResults_ == nullptr && this->nextToken_ == nullptr; };
    // accountId Field Functions 
    bool hasAccountId() const { return this->accountId_ != nullptr;};
    void deleteAccountId() { this->accountId_ = nullptr;};
    inline string getAccountId() const { DARABONBA_PTR_GET_DEFAULT(accountId_, "") };
    inline ListDelegatedServicesForAccountRequest& setAccountId(string accountId) { DARABONBA_PTR_SET_VALUE(accountId_, accountId) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListDelegatedServicesForAccountRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListDelegatedServicesForAccountRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


  protected:
    // The Alibaba Cloud account ID of the member.
    // 
    // This parameter is required.
    shared_ptr<string> accountId_ {};
    shared_ptr<int32_t> maxResults_ {};
    shared_ptr<string> nextToken_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ResourceDirectoryMaster20220419
#endif
