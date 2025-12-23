// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTMULTIACCOUNTTAGKEYSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTMULTIACCOUNTTAGKEYSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ResourceCenter20221201
{
namespace Models
{
  class ListMultiAccountTagKeysRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListMultiAccountTagKeysRequest& obj) { 
      DARABONBA_PTR_TO_JSON(MatchType, matchType_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(Scope, scope_);
      DARABONBA_PTR_TO_JSON(TagKey, tagKey_);
    };
    friend void from_json(const Darabonba::Json& j, ListMultiAccountTagKeysRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(MatchType, matchType_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(Scope, scope_);
      DARABONBA_PTR_FROM_JSON(TagKey, tagKey_);
    };
    ListMultiAccountTagKeysRequest() = default ;
    ListMultiAccountTagKeysRequest(const ListMultiAccountTagKeysRequest &) = default ;
    ListMultiAccountTagKeysRequest(ListMultiAccountTagKeysRequest &&) = default ;
    ListMultiAccountTagKeysRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListMultiAccountTagKeysRequest() = default ;
    ListMultiAccountTagKeysRequest& operator=(const ListMultiAccountTagKeysRequest &) = default ;
    ListMultiAccountTagKeysRequest& operator=(ListMultiAccountTagKeysRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->matchType_ == nullptr
        && return this->maxResults_ == nullptr && return this->nextToken_ == nullptr && return this->scope_ == nullptr && return this->tagKey_ == nullptr; };
    // matchType Field Functions 
    bool hasMatchType() const { return this->matchType_ != nullptr;};
    void deleteMatchType() { this->matchType_ = nullptr;};
    inline string matchType() const { DARABONBA_PTR_GET_DEFAULT(matchType_, "") };
    inline ListMultiAccountTagKeysRequest& setMatchType(string matchType) { DARABONBA_PTR_SET_VALUE(matchType_, matchType) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListMultiAccountTagKeysRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListMultiAccountTagKeysRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // scope Field Functions 
    bool hasScope() const { return this->scope_ != nullptr;};
    void deleteScope() { this->scope_ = nullptr;};
    inline string scope() const { DARABONBA_PTR_GET_DEFAULT(scope_, "") };
    inline ListMultiAccountTagKeysRequest& setScope(string scope) { DARABONBA_PTR_SET_VALUE(scope_, scope) };


    // tagKey Field Functions 
    bool hasTagKey() const { return this->tagKey_ != nullptr;};
    void deleteTagKey() { this->tagKey_ = nullptr;};
    inline string tagKey() const { DARABONBA_PTR_GET_DEFAULT(tagKey_, "") };
    inline ListMultiAccountTagKeysRequest& setTagKey(string tagKey) { DARABONBA_PTR_SET_VALUE(tagKey_, tagKey) };


  protected:
    // The matching mode. Valid values:
    // 
    // *   Equals: equal match
    // *   Prefix: match by prefix
    std::shared_ptr<string> matchType_ = nullptr;
    // The maximum number of entries to return on each page.
    // 
    // Valid values: 1 to 100.
    // 
    // Default value: 20.
    std::shared_ptr<int32_t> maxResults_ = nullptr;
    // The pagination token that is used in the next request to retrieve a new page of results.
    // 
    // If the total number of entries returned for the current request exceeds the value of the `MaxResults` parameter, the entries are truncated. In this case, you can use the `token` to initiate another request and obtain the remaining entries.
    std::shared_ptr<string> nextToken_ = nullptr;
    // The search scope. The value of this parameter can be one of the following items:
    // 
    // *   ID of a resource directory: Resources within the management account and all members of the resource directory are searched. You can call the [GetResourceDirectory](https://help.aliyun.com/document_detail/159995.html) operation to obtain the ID of the resource directory. The ID is indicated by the `ResourceDirectoryId` parameter in the response of the operation.
    // *   ID of the Root folder: Resources within all members in the Root folder and the subfolders of the Root folder are searched. You can call the [GetResourceDirectory](https://help.aliyun.com/document_detail/159995.html) operation to obtain the ID of the Root folder. The ID is indicated by the `RootFolderId` parameter in the response of the operation.
    // *   ID of a folder: Resources within all members in the folder are searched. You can call the [ListFoldersForParent](https://help.aliyun.com/document_detail/159997.html) operation to obtain the ID of the folder. The ID is indicated by the `FolderId` parameter in the response of the operation.
    // *   ID of a member: Resources within the member are searched. You can call the [ListAccounts](https://help.aliyun.com/document_detail/160016.html) operation to obtain the ID of the member. The ID is indicated by the `AccountId` parameter in the response of the operation.
    // 
    // This parameter is required.
    std::shared_ptr<string> scope_ = nullptr;
    // The tag key.
    std::shared_ptr<string> tagKey_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ResourceCenter20221201
#endif
