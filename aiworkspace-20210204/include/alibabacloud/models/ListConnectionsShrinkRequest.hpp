// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCONNECTIONSSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTCONNECTIONSSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AIWorkSpace20210204
{
namespace Models
{
  class ListConnectionsShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListConnectionsShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Accessibility, accessibility_);
      DARABONBA_PTR_TO_JSON(ConnectionIds, connectionIdsShrink_);
      DARABONBA_PTR_TO_JSON(ConnectionName, connectionName_);
      DARABONBA_PTR_TO_JSON(ConnectionTypes, connectionTypesShrink_);
      DARABONBA_PTR_TO_JSON(Creator, creator_);
      DARABONBA_PTR_TO_JSON(EncryptOption, encryptOption_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(Model, model_);
      DARABONBA_PTR_TO_JSON(ModelTypes, modelTypesShrink_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(Order, order_);
      DARABONBA_PTR_TO_JSON(SortBy, sortBy_);
      DARABONBA_PTR_TO_JSON(ToolCall, toolCall_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, ListConnectionsShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Accessibility, accessibility_);
      DARABONBA_PTR_FROM_JSON(ConnectionIds, connectionIdsShrink_);
      DARABONBA_PTR_FROM_JSON(ConnectionName, connectionName_);
      DARABONBA_PTR_FROM_JSON(ConnectionTypes, connectionTypesShrink_);
      DARABONBA_PTR_FROM_JSON(Creator, creator_);
      DARABONBA_PTR_FROM_JSON(EncryptOption, encryptOption_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(Model, model_);
      DARABONBA_PTR_FROM_JSON(ModelTypes, modelTypesShrink_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(Order, order_);
      DARABONBA_PTR_FROM_JSON(SortBy, sortBy_);
      DARABONBA_PTR_FROM_JSON(ToolCall, toolCall_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    ListConnectionsShrinkRequest() = default ;
    ListConnectionsShrinkRequest(const ListConnectionsShrinkRequest &) = default ;
    ListConnectionsShrinkRequest(ListConnectionsShrinkRequest &&) = default ;
    ListConnectionsShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListConnectionsShrinkRequest() = default ;
    ListConnectionsShrinkRequest& operator=(const ListConnectionsShrinkRequest &) = default ;
    ListConnectionsShrinkRequest& operator=(ListConnectionsShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accessibility_ == nullptr
        && this->connectionIdsShrink_ == nullptr && this->connectionName_ == nullptr && this->connectionTypesShrink_ == nullptr && this->creator_ == nullptr && this->encryptOption_ == nullptr
        && this->maxResults_ == nullptr && this->model_ == nullptr && this->modelTypesShrink_ == nullptr && this->nextToken_ == nullptr && this->order_ == nullptr
        && this->sortBy_ == nullptr && this->toolCall_ == nullptr && this->workspaceId_ == nullptr; };
    // accessibility Field Functions 
    bool hasAccessibility() const { return this->accessibility_ != nullptr;};
    void deleteAccessibility() { this->accessibility_ = nullptr;};
    inline string getAccessibility() const { DARABONBA_PTR_GET_DEFAULT(accessibility_, "") };
    inline ListConnectionsShrinkRequest& setAccessibility(string accessibility) { DARABONBA_PTR_SET_VALUE(accessibility_, accessibility) };


    // connectionIdsShrink Field Functions 
    bool hasConnectionIdsShrink() const { return this->connectionIdsShrink_ != nullptr;};
    void deleteConnectionIdsShrink() { this->connectionIdsShrink_ = nullptr;};
    inline string getConnectionIdsShrink() const { DARABONBA_PTR_GET_DEFAULT(connectionIdsShrink_, "") };
    inline ListConnectionsShrinkRequest& setConnectionIdsShrink(string connectionIdsShrink) { DARABONBA_PTR_SET_VALUE(connectionIdsShrink_, connectionIdsShrink) };


    // connectionName Field Functions 
    bool hasConnectionName() const { return this->connectionName_ != nullptr;};
    void deleteConnectionName() { this->connectionName_ = nullptr;};
    inline string getConnectionName() const { DARABONBA_PTR_GET_DEFAULT(connectionName_, "") };
    inline ListConnectionsShrinkRequest& setConnectionName(string connectionName) { DARABONBA_PTR_SET_VALUE(connectionName_, connectionName) };


    // connectionTypesShrink Field Functions 
    bool hasConnectionTypesShrink() const { return this->connectionTypesShrink_ != nullptr;};
    void deleteConnectionTypesShrink() { this->connectionTypesShrink_ = nullptr;};
    inline string getConnectionTypesShrink() const { DARABONBA_PTR_GET_DEFAULT(connectionTypesShrink_, "") };
    inline ListConnectionsShrinkRequest& setConnectionTypesShrink(string connectionTypesShrink) { DARABONBA_PTR_SET_VALUE(connectionTypesShrink_, connectionTypesShrink) };


    // creator Field Functions 
    bool hasCreator() const { return this->creator_ != nullptr;};
    void deleteCreator() { this->creator_ = nullptr;};
    inline string getCreator() const { DARABONBA_PTR_GET_DEFAULT(creator_, "") };
    inline ListConnectionsShrinkRequest& setCreator(string creator) { DARABONBA_PTR_SET_VALUE(creator_, creator) };


    // encryptOption Field Functions 
    bool hasEncryptOption() const { return this->encryptOption_ != nullptr;};
    void deleteEncryptOption() { this->encryptOption_ = nullptr;};
    inline string getEncryptOption() const { DARABONBA_PTR_GET_DEFAULT(encryptOption_, "") };
    inline ListConnectionsShrinkRequest& setEncryptOption(string encryptOption) { DARABONBA_PTR_SET_VALUE(encryptOption_, encryptOption) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListConnectionsShrinkRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // model Field Functions 
    bool hasModel() const { return this->model_ != nullptr;};
    void deleteModel() { this->model_ = nullptr;};
    inline string getModel() const { DARABONBA_PTR_GET_DEFAULT(model_, "") };
    inline ListConnectionsShrinkRequest& setModel(string model) { DARABONBA_PTR_SET_VALUE(model_, model) };


    // modelTypesShrink Field Functions 
    bool hasModelTypesShrink() const { return this->modelTypesShrink_ != nullptr;};
    void deleteModelTypesShrink() { this->modelTypesShrink_ = nullptr;};
    inline string getModelTypesShrink() const { DARABONBA_PTR_GET_DEFAULT(modelTypesShrink_, "") };
    inline ListConnectionsShrinkRequest& setModelTypesShrink(string modelTypesShrink) { DARABONBA_PTR_SET_VALUE(modelTypesShrink_, modelTypesShrink) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListConnectionsShrinkRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // order Field Functions 
    bool hasOrder() const { return this->order_ != nullptr;};
    void deleteOrder() { this->order_ = nullptr;};
    inline string getOrder() const { DARABONBA_PTR_GET_DEFAULT(order_, "") };
    inline ListConnectionsShrinkRequest& setOrder(string order) { DARABONBA_PTR_SET_VALUE(order_, order) };


    // sortBy Field Functions 
    bool hasSortBy() const { return this->sortBy_ != nullptr;};
    void deleteSortBy() { this->sortBy_ = nullptr;};
    inline string getSortBy() const { DARABONBA_PTR_GET_DEFAULT(sortBy_, "") };
    inline ListConnectionsShrinkRequest& setSortBy(string sortBy) { DARABONBA_PTR_SET_VALUE(sortBy_, sortBy) };


    // toolCall Field Functions 
    bool hasToolCall() const { return this->toolCall_ != nullptr;};
    void deleteToolCall() { this->toolCall_ = nullptr;};
    inline bool getToolCall() const { DARABONBA_PTR_GET_DEFAULT(toolCall_, false) };
    inline ListConnectionsShrinkRequest& setToolCall(bool toolCall) { DARABONBA_PTR_SET_VALUE(toolCall_, toolCall) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline ListConnectionsShrinkRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    // Visibility of the connection. Valid values:
    // 
    // - PUBLIC: visible to all workspace members.
    // 
    // - PRIVATE: visible only to the creator.
    shared_ptr<string> accessibility_ {};
    // List of connection IDs to filter by.
    shared_ptr<string> connectionIdsShrink_ {};
    // Connection name. Supports fuzzy matching.
    shared_ptr<string> connectionName_ {};
    // List of connection types to filter by.
    shared_ptr<string> connectionTypesShrink_ {};
    // Alibaba Cloud account ID of the creator.
    shared_ptr<string> creator_ {};
    // Encryption option for sensitive fields in the response. Valid values:
    // 
    // - PlainText: returns values in plaintext.
    // 
    // - Secret: returns values in ciphertext.
    shared_ptr<string> encryptOption_ {};
    // Maximum number of entries per page.
    shared_ptr<int32_t> maxResults_ {};
    // Model identifier. Filters connections associated with this model.
    shared_ptr<string> model_ {};
    // List of model types to filter by.
    shared_ptr<string> modelTypesShrink_ {};
    // The token that marks the starting position for the next page of results.
    shared_ptr<string> nextToken_ {};
    // Sort order. Use with the SortBy parameter. Valid values:
    // 
    // - ASC: ascending order.
    // 
    // - DESC (default): descending order.
    shared_ptr<string> order_ {};
    // Field by which to sort results. Default value: GmtCreateTime. Valid values:
    // 
    // - GmtCreateTime (default): sorts by creation time.
    shared_ptr<string> sortBy_ {};
    // Whether tool calling is supported. Valid values:
    // 
    // - true: supported.
    // 
    // - false: not supported.
    shared_ptr<bool> toolCall_ {};
    // Workspace ID. You can call [ListWorkspaces](https://help.aliyun.com/document_detail/449124.html) to obtain the workspace ID.
    shared_ptr<string> workspaceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AIWorkSpace20210204
#endif
