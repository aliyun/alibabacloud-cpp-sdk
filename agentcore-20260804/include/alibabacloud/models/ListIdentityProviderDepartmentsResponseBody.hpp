// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTIDENTITYPROVIDERDEPARTMENTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTIDENTITYPROVIDERDEPARTMENTSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentCore20260804
{
namespace Models
{
  class ListIdentityProviderDepartmentsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListIdentityProviderDepartmentsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(httpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(items, items_);
      DARABONBA_PTR_TO_JSON(maxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(nextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(success, success_);
      DARABONBA_PTR_TO_JSON(totalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListIdentityProviderDepartmentsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(httpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(items, items_);
      DARABONBA_PTR_FROM_JSON(maxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(nextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(success, success_);
      DARABONBA_PTR_FROM_JSON(totalCount, totalCount_);
    };
    ListIdentityProviderDepartmentsResponseBody() = default ;
    ListIdentityProviderDepartmentsResponseBody(const ListIdentityProviderDepartmentsResponseBody &) = default ;
    ListIdentityProviderDepartmentsResponseBody(ListIdentityProviderDepartmentsResponseBody &&) = default ;
    ListIdentityProviderDepartmentsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListIdentityProviderDepartmentsResponseBody() = default ;
    ListIdentityProviderDepartmentsResponseBody& operator=(const ListIdentityProviderDepartmentsResponseBody &) = default ;
    ListIdentityProviderDepartmentsResponseBody& operator=(ListIdentityProviderDepartmentsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Items : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Items& obj) { 
        DARABONBA_PTR_TO_JSON(hasChildren, hasChildren_);
        DARABONBA_PTR_TO_JSON(id, id_);
        DARABONBA_PTR_TO_JSON(memberCount, memberCount_);
        DARABONBA_PTR_TO_JSON(name, name_);
        DARABONBA_PTR_TO_JSON(parentId, parentId_);
      };
      friend void from_json(const Darabonba::Json& j, Items& obj) { 
        DARABONBA_PTR_FROM_JSON(hasChildren, hasChildren_);
        DARABONBA_PTR_FROM_JSON(id, id_);
        DARABONBA_PTR_FROM_JSON(memberCount, memberCount_);
        DARABONBA_PTR_FROM_JSON(name, name_);
        DARABONBA_PTR_FROM_JSON(parentId, parentId_);
      };
      Items() = default ;
      Items(const Items &) = default ;
      Items(Items &&) = default ;
      Items(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Items() = default ;
      Items& operator=(const Items &) = default ;
      Items& operator=(Items &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->hasChildren_ == nullptr
        && this->id_ == nullptr && this->memberCount_ == nullptr && this->name_ == nullptr && this->parentId_ == nullptr; };
      // hasChildren Field Functions 
      bool hasHasChildren() const { return this->hasChildren_ != nullptr;};
      void deleteHasChildren() { this->hasChildren_ = nullptr;};
      inline bool getHasChildren() const { DARABONBA_PTR_GET_DEFAULT(hasChildren_, false) };
      inline Items& setHasChildren(bool hasChildren) { DARABONBA_PTR_SET_VALUE(hasChildren_, hasChildren) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
      inline Items& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // memberCount Field Functions 
      bool hasMemberCount() const { return this->memberCount_ != nullptr;};
      void deleteMemberCount() { this->memberCount_ = nullptr;};
      inline int64_t getMemberCount() const { DARABONBA_PTR_GET_DEFAULT(memberCount_, 0L) };
      inline Items& setMemberCount(int64_t memberCount) { DARABONBA_PTR_SET_VALUE(memberCount_, memberCount) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Items& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // parentId Field Functions 
      bool hasParentId() const { return this->parentId_ != nullptr;};
      void deleteParentId() { this->parentId_ = nullptr;};
      inline string getParentId() const { DARABONBA_PTR_GET_DEFAULT(parentId_, "") };
      inline Items& setParentId(string parentId) { DARABONBA_PTR_SET_VALUE(parentId_, parentId) };


    protected:
      // Indicates whether the department has child departments. A value of true indicates that the department has child departments and an expansion entry can be displayed accordingly. A value of false indicates a leaf node. If this field is not returned, the status is unknown. You must use the ID of the current node to make another query to obtain the details of the child departments.
      shared_ptr<bool> hasChildren_ {};
      // The unique identifier of the department returned by the identity provider. When querying the child departments of this node, use this value as the parentDepartmentId.
      shared_ptr<string> id_ {};
      // The number of members in the department returned by the identity provider. This field is not returned when the number is unknown. Do not treat a missing value as 0.
      shared_ptr<int64_t> memberCount_ {};
      // The name of the department returned by the identity provider.
      shared_ptr<string> name_ {};
      // The ID of the parent department to which this department belongs. This value describes the parent-child relationship and is not used to expand the current node.
      shared_ptr<string> parentId_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->httpStatusCode_ == nullptr && this->items_ == nullptr && this->maxResults_ == nullptr && this->message_ == nullptr && this->nextToken_ == nullptr
        && this->requestId_ == nullptr && this->success_ == nullptr && this->totalCount_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListIdentityProviderDepartmentsResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline ListIdentityProviderDepartmentsResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // items Field Functions 
    bool hasItems() const { return this->items_ != nullptr;};
    void deleteItems() { this->items_ = nullptr;};
    inline const vector<ListIdentityProviderDepartmentsResponseBody::Items> & getItems() const { DARABONBA_PTR_GET_CONST(items_, vector<ListIdentityProviderDepartmentsResponseBody::Items>) };
    inline vector<ListIdentityProviderDepartmentsResponseBody::Items> getItems() { DARABONBA_PTR_GET(items_, vector<ListIdentityProviderDepartmentsResponseBody::Items>) };
    inline ListIdentityProviderDepartmentsResponseBody& setItems(const vector<ListIdentityProviderDepartmentsResponseBody::Items> & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
    inline ListIdentityProviderDepartmentsResponseBody& setItems(vector<ListIdentityProviderDepartmentsResponseBody::Items> && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListIdentityProviderDepartmentsResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListIdentityProviderDepartmentsResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListIdentityProviderDepartmentsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListIdentityProviderDepartmentsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListIdentityProviderDepartmentsResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListIdentityProviderDepartmentsResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The business status code of the API request. SUCCESS indicates that the request is successful, but does not indicate that the asynchronous synchronization task is completed.
    shared_ptr<string> code_ {};
    // The HTTP status code of the API request, which does not indicate the execution result of the asynchronous task.
    shared_ptr<int32_t> httpStatusCode_ {};
    // The direct child departments on the current page under the current parent department. You must make another query to obtain the details of the child departments.
    shared_ptr<vector<ListIdentityProviderDepartmentsResponseBody::Items>> items_ {};
    // The number of items per page used for this query.
    shared_ptr<int32_t> maxResults_ {};
    // The response message of the API request.
    shared_ptr<string> message_ {};
    // The token for the next page. An empty or missing value indicates that there are no subsequent pages at the current hierarchy level of the parent department, but does not indicate that the entire department tree has been returned.
    shared_ptr<string> nextToken_ {};
    // The unique identifier of the request. Provide this value when troubleshooting issues.
    shared_ptr<string> requestId_ {};
    // Indicates whether the API request is successful. To check whether an asynchronous task is completed, query the task status.
    shared_ptr<bool> success_ {};
    // The total number of departments. This operation does not provide this statistic and may not return this field. Do not treat a missing value as 0.
    shared_ptr<int64_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentCore20260804
#endif
