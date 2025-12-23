// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_EXECUTEMULTIACCOUNTSQLQUERYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_EXECUTEMULTIACCOUNTSQLQUERYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ResourceCenter20221201
{
namespace Models
{
  class ExecuteMultiAccountSQLQueryRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ExecuteMultiAccountSQLQueryRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Expression, expression_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(Scope, scope_);
    };
    friend void from_json(const Darabonba::Json& j, ExecuteMultiAccountSQLQueryRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Expression, expression_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(Scope, scope_);
    };
    ExecuteMultiAccountSQLQueryRequest() = default ;
    ExecuteMultiAccountSQLQueryRequest(const ExecuteMultiAccountSQLQueryRequest &) = default ;
    ExecuteMultiAccountSQLQueryRequest(ExecuteMultiAccountSQLQueryRequest &&) = default ;
    ExecuteMultiAccountSQLQueryRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ExecuteMultiAccountSQLQueryRequest() = default ;
    ExecuteMultiAccountSQLQueryRequest& operator=(const ExecuteMultiAccountSQLQueryRequest &) = default ;
    ExecuteMultiAccountSQLQueryRequest& operator=(ExecuteMultiAccountSQLQueryRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->expression_ == nullptr
        && return this->maxResults_ == nullptr && return this->nextToken_ == nullptr && return this->scope_ == nullptr; };
    // expression Field Functions 
    bool hasExpression() const { return this->expression_ != nullptr;};
    void deleteExpression() { this->expression_ = nullptr;};
    inline string expression() const { DARABONBA_PTR_GET_DEFAULT(expression_, "") };
    inline ExecuteMultiAccountSQLQueryRequest& setExpression(string expression) { DARABONBA_PTR_SET_VALUE(expression_, expression) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ExecuteMultiAccountSQLQueryRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ExecuteMultiAccountSQLQueryRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // scope Field Functions 
    bool hasScope() const { return this->scope_ != nullptr;};
    void deleteScope() { this->scope_ = nullptr;};
    inline string scope() const { DARABONBA_PTR_GET_DEFAULT(scope_, "") };
    inline ExecuteMultiAccountSQLQueryRequest& setScope(string scope) { DARABONBA_PTR_SET_VALUE(scope_, scope) };


  protected:
    // The SQL statement to be executed.
    // 
    // The number of characters in the SQL statement must be less than 2,000.
    // 
    // For more information about the SQL syntax, see [Basic SQL syntax](https://help.aliyun.com/document_detail/2539395.html).
    // 
    // This parameter is required.
    std::shared_ptr<string> expression_ = nullptr;
    // The maximum number of entries to return on each page.
    // 
    // Valid values: 1 to 1000.
    // 
    // Default value: 1000.
    std::shared_ptr<int32_t> maxResults_ = nullptr;
    // The pagination token that is used in the next request to retrieve a new page of results. You do not need to specify this parameter for the first request. You must specify the token that is obtained from the previous query as the value of NextToken.
    std::shared_ptr<string> nextToken_ = nullptr;
    // The search scope. The value of this parameter can be one of the following items:
    // 
    // *   ID of a resource directory: Resources within the management account and all members of the resource directory are searched.
    // *   ID of the Root folder: Resources within all members in the Root folder and the subfolders of the Root folder are searched.
    // *   ID of a folder: Resources within all members in the folder are searched.
    // *   ID of a member: Resources within the member are searched.
    // *   ID of a member/ID of a Resource group: Resources within the member in the resource group are searched.
    // 
    // For more information about how to obtain the ID of a resource directory, the Root folder, a folder, a member, or a resource group, see [GetResourceDirectory](https://help.aliyun.com/document_detail/159995.html), [ListFoldersForParent](https://help.aliyun.com/document_detail/159997.html), [ListFoldersForParent](https://help.aliyun.com/document_detail/159997.html), [ListAccounts](https://help.aliyun.com/document_detail/160016.html), or [ListResourceGroups](https://help.aliyun.com/document_detail/158855.html).
    // 
    // This parameter is required.
    std::shared_ptr<string> scope_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ResourceCenter20221201
#endif
