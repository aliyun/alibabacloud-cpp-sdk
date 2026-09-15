// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCREDENTIALSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTCREDENTIALSRESPONSEBODY_HPP_
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
  class ListCredentialsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListCredentialsResponseBody& obj) { 
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
    friend void from_json(const Darabonba::Json& j, ListCredentialsResponseBody& obj) { 
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
    ListCredentialsResponseBody() = default ;
    ListCredentialsResponseBody(const ListCredentialsResponseBody &) = default ;
    ListCredentialsResponseBody(ListCredentialsResponseBody &&) = default ;
    ListCredentialsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListCredentialsResponseBody() = default ;
    ListCredentialsResponseBody& operator=(const ListCredentialsResponseBody &) = default ;
    ListCredentialsResponseBody& operator=(ListCredentialsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Items : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Items& obj) { 
        DARABONBA_PTR_TO_JSON(boundAgentsCounts, boundAgentsCounts_);
        DARABONBA_PTR_TO_JSON(createdAt, createdAt_);
        DARABONBA_PTR_TO_JSON(credentialId, credentialId_);
        DARABONBA_PTR_TO_JSON(credentialMetadata, credentialMetadata_);
        DARABONBA_PTR_TO_JSON(credentialType, credentialType_);
        DARABONBA_PTR_TO_JSON(description, description_);
        DARABONBA_PTR_TO_JSON(name, name_);
        DARABONBA_PTR_TO_JSON(regionId, regionId_);
        DARABONBA_PTR_TO_JSON(resourceRefs, resourceRefs_);
        DARABONBA_PTR_TO_JSON(resourceScope, resourceScope_);
        DARABONBA_PTR_TO_JSON(updatedAt, updatedAt_);
        DARABONBA_PTR_TO_JSON(workspaceId, workspaceId_);
      };
      friend void from_json(const Darabonba::Json& j, Items& obj) { 
        DARABONBA_PTR_FROM_JSON(boundAgentsCounts, boundAgentsCounts_);
        DARABONBA_PTR_FROM_JSON(createdAt, createdAt_);
        DARABONBA_PTR_FROM_JSON(credentialId, credentialId_);
        DARABONBA_PTR_FROM_JSON(credentialMetadata, credentialMetadata_);
        DARABONBA_PTR_FROM_JSON(credentialType, credentialType_);
        DARABONBA_PTR_FROM_JSON(description, description_);
        DARABONBA_PTR_FROM_JSON(name, name_);
        DARABONBA_PTR_FROM_JSON(regionId, regionId_);
        DARABONBA_PTR_FROM_JSON(resourceRefs, resourceRefs_);
        DARABONBA_PTR_FROM_JSON(resourceScope, resourceScope_);
        DARABONBA_PTR_FROM_JSON(updatedAt, updatedAt_);
        DARABONBA_PTR_FROM_JSON(workspaceId, workspaceId_);
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
      class ResourceRefs : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ResourceRefs& obj) { 
          DARABONBA_PTR_TO_JSON(resourceId, resourceId_);
          DARABONBA_PTR_TO_JSON(resourceName, resourceName_);
          DARABONBA_PTR_TO_JSON(resourceType, resourceType_);
        };
        friend void from_json(const Darabonba::Json& j, ResourceRefs& obj) { 
          DARABONBA_PTR_FROM_JSON(resourceId, resourceId_);
          DARABONBA_PTR_FROM_JSON(resourceName, resourceName_);
          DARABONBA_PTR_FROM_JSON(resourceType, resourceType_);
        };
        ResourceRefs() = default ;
        ResourceRefs(const ResourceRefs &) = default ;
        ResourceRefs(ResourceRefs &&) = default ;
        ResourceRefs(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ResourceRefs() = default ;
        ResourceRefs& operator=(const ResourceRefs &) = default ;
        ResourceRefs& operator=(ResourceRefs &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->resourceId_ == nullptr
        && this->resourceName_ == nullptr && this->resourceType_ == nullptr; };
        // resourceId Field Functions 
        bool hasResourceId() const { return this->resourceId_ != nullptr;};
        void deleteResourceId() { this->resourceId_ = nullptr;};
        inline string getResourceId() const { DARABONBA_PTR_GET_DEFAULT(resourceId_, "") };
        inline ResourceRefs& setResourceId(string resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };


        // resourceName Field Functions 
        bool hasResourceName() const { return this->resourceName_ != nullptr;};
        void deleteResourceName() { this->resourceName_ = nullptr;};
        inline string getResourceName() const { DARABONBA_PTR_GET_DEFAULT(resourceName_, "") };
        inline ResourceRefs& setResourceName(string resourceName) { DARABONBA_PTR_SET_VALUE(resourceName_, resourceName) };


        // resourceType Field Functions 
        bool hasResourceType() const { return this->resourceType_ != nullptr;};
        void deleteResourceType() { this->resourceType_ = nullptr;};
        inline string getResourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
        inline ResourceRefs& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


      protected:
        // The unique identifier of the resource.
        shared_ptr<string> resourceId_ {};
        // The resource name. This value is empty if the resource has been deleted.
        shared_ptr<string> resourceName_ {};
        // The resource type, such as agent.
        shared_ptr<string> resourceType_ {};
      };

      virtual bool empty() const override { return this->boundAgentsCounts_ == nullptr
        && this->createdAt_ == nullptr && this->credentialId_ == nullptr && this->credentialMetadata_ == nullptr && this->credentialType_ == nullptr && this->description_ == nullptr
        && this->name_ == nullptr && this->regionId_ == nullptr && this->resourceRefs_ == nullptr && this->resourceScope_ == nullptr && this->updatedAt_ == nullptr
        && this->workspaceId_ == nullptr; };
      // boundAgentsCounts Field Functions 
      bool hasBoundAgentsCounts() const { return this->boundAgentsCounts_ != nullptr;};
      void deleteBoundAgentsCounts() { this->boundAgentsCounts_ = nullptr;};
      inline int32_t getBoundAgentsCounts() const { DARABONBA_PTR_GET_DEFAULT(boundAgentsCounts_, 0) };
      inline Items& setBoundAgentsCounts(int32_t boundAgentsCounts) { DARABONBA_PTR_SET_VALUE(boundAgentsCounts_, boundAgentsCounts) };


      // createdAt Field Functions 
      bool hasCreatedAt() const { return this->createdAt_ != nullptr;};
      void deleteCreatedAt() { this->createdAt_ = nullptr;};
      inline string getCreatedAt() const { DARABONBA_PTR_GET_DEFAULT(createdAt_, "") };
      inline Items& setCreatedAt(string createdAt) { DARABONBA_PTR_SET_VALUE(createdAt_, createdAt) };


      // credentialId Field Functions 
      bool hasCredentialId() const { return this->credentialId_ != nullptr;};
      void deleteCredentialId() { this->credentialId_ = nullptr;};
      inline string getCredentialId() const { DARABONBA_PTR_GET_DEFAULT(credentialId_, "") };
      inline Items& setCredentialId(string credentialId) { DARABONBA_PTR_SET_VALUE(credentialId_, credentialId) };


      // credentialMetadata Field Functions 
      bool hasCredentialMetadata() const { return this->credentialMetadata_ != nullptr;};
      void deleteCredentialMetadata() { this->credentialMetadata_ = nullptr;};
      inline string getCredentialMetadata() const { DARABONBA_PTR_GET_DEFAULT(credentialMetadata_, "") };
      inline Items& setCredentialMetadata(string credentialMetadata) { DARABONBA_PTR_SET_VALUE(credentialMetadata_, credentialMetadata) };


      // credentialType Field Functions 
      bool hasCredentialType() const { return this->credentialType_ != nullptr;};
      void deleteCredentialType() { this->credentialType_ = nullptr;};
      inline string getCredentialType() const { DARABONBA_PTR_GET_DEFAULT(credentialType_, "") };
      inline Items& setCredentialType(string credentialType) { DARABONBA_PTR_SET_VALUE(credentialType_, credentialType) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline Items& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Items& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // regionId Field Functions 
      bool hasRegionId() const { return this->regionId_ != nullptr;};
      void deleteRegionId() { this->regionId_ = nullptr;};
      inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
      inline Items& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


      // resourceRefs Field Functions 
      bool hasResourceRefs() const { return this->resourceRefs_ != nullptr;};
      void deleteResourceRefs() { this->resourceRefs_ = nullptr;};
      inline const vector<Items::ResourceRefs> & getResourceRefs() const { DARABONBA_PTR_GET_CONST(resourceRefs_, vector<Items::ResourceRefs>) };
      inline vector<Items::ResourceRefs> getResourceRefs() { DARABONBA_PTR_GET(resourceRefs_, vector<Items::ResourceRefs>) };
      inline Items& setResourceRefs(const vector<Items::ResourceRefs> & resourceRefs) { DARABONBA_PTR_SET_VALUE(resourceRefs_, resourceRefs) };
      inline Items& setResourceRefs(vector<Items::ResourceRefs> && resourceRefs) { DARABONBA_PTR_SET_RVALUE(resourceRefs_, resourceRefs) };


      // resourceScope Field Functions 
      bool hasResourceScope() const { return this->resourceScope_ != nullptr;};
      void deleteResourceScope() { this->resourceScope_ = nullptr;};
      inline string getResourceScope() const { DARABONBA_PTR_GET_DEFAULT(resourceScope_, "") };
      inline Items& setResourceScope(string resourceScope) { DARABONBA_PTR_SET_VALUE(resourceScope_, resourceScope) };


      // updatedAt Field Functions 
      bool hasUpdatedAt() const { return this->updatedAt_ != nullptr;};
      void deleteUpdatedAt() { this->updatedAt_ = nullptr;};
      inline string getUpdatedAt() const { DARABONBA_PTR_GET_DEFAULT(updatedAt_, "") };
      inline Items& setUpdatedAt(string updatedAt) { DARABONBA_PTR_SET_VALUE(updatedAt_, updatedAt) };


      // workspaceId Field Functions 
      bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
      void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
      inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
      inline Items& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


    protected:
      // The number of agents bound to this credential.
      shared_ptr<int32_t> boundAgentsCounts_ {};
      // The creation time in UTC, formatted according to RFC 3339.
      shared_ptr<string> createdAt_ {};
      // The credential ID.
      shared_ptr<string> credentialId_ {};
      // The masked content of the credential. When credentialType is apiKey, the apiKey value is returned as asterisks (*) of equal length.
      shared_ptr<string> credentialMetadata_ {};
      // The credential type. Currently, only apiKey is supported.
      shared_ptr<string> credentialType_ {};
      // The credential description. The description can be up to 256 characters in length.
      shared_ptr<string> description_ {};
      // The credential name. The name must be unique within the workspace and can contain only letters, digits, periods (.), underscores (_), and hyphens (-). The name must be 3 to 128 characters in length and cannot use runtime reserved names.
      shared_ptr<string> name_ {};
      // The region ID where the resource resides.
      shared_ptr<string> regionId_ {};
      // The list of resources to which the credential can be applied.
      shared_ptr<vector<Items::ResourceRefs>> resourceRefs_ {};
      // The scope of resources to which the credential can be applied.
      shared_ptr<string> resourceScope_ {};
      // The time of the last modification in UTC, formatted according to RFC 3339.
      shared_ptr<string> updatedAt_ {};
      // The workspace ID.
      shared_ptr<string> workspaceId_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->httpStatusCode_ == nullptr && this->items_ == nullptr && this->maxResults_ == nullptr && this->message_ == nullptr && this->nextToken_ == nullptr
        && this->requestId_ == nullptr && this->success_ == nullptr && this->totalCount_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListCredentialsResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline ListCredentialsResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // items Field Functions 
    bool hasItems() const { return this->items_ != nullptr;};
    void deleteItems() { this->items_ = nullptr;};
    inline const vector<ListCredentialsResponseBody::Items> & getItems() const { DARABONBA_PTR_GET_CONST(items_, vector<ListCredentialsResponseBody::Items>) };
    inline vector<ListCredentialsResponseBody::Items> getItems() { DARABONBA_PTR_GET(items_, vector<ListCredentialsResponseBody::Items>) };
    inline ListCredentialsResponseBody& setItems(const vector<ListCredentialsResponseBody::Items> & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
    inline ListCredentialsResponseBody& setItems(vector<ListCredentialsResponseBody::Items> && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListCredentialsResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListCredentialsResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListCredentialsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListCredentialsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListCredentialsResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListCredentialsResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The business status code.
    shared_ptr<string> code_ {};
    // The HTTP status code.
    shared_ptr<int32_t> httpStatusCode_ {};
    // The list of credentials.
    shared_ptr<vector<ListCredentialsResponseBody::Items>> items_ {};
    // The maximum number of records per page that took effect for this query.
    shared_ptr<int32_t> maxResults_ {};
    // The response message. An error description is returned if the request fails.
    shared_ptr<string> message_ {};
    // The pagination token for the next page. This value is empty if there is no next page.
    shared_ptr<string> nextToken_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful.
    shared_ptr<bool> success_ {};
    // The total number of credentials that match the query conditions.
    shared_ptr<int64_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentCore20260804
#endif
