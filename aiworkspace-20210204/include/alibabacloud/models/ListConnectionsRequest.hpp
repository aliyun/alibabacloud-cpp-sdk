// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCONNECTIONSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTCONNECTIONSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AIWorkSpace20210204
{
namespace Models
{
  class ListConnectionsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListConnectionsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ConnectionIds, connectionIds_);
      DARABONBA_PTR_TO_JSON(ConnectionName, connectionName_);
      DARABONBA_PTR_TO_JSON(ConnectionTypes, connectionTypes_);
      DARABONBA_PTR_TO_JSON(Creator, creator_);
      DARABONBA_PTR_TO_JSON(EncryptOption, encryptOption_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(Model, model_);
      DARABONBA_PTR_TO_JSON(ModelTypes, modelTypes_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(Order, order_);
      DARABONBA_PTR_TO_JSON(SortBy, sortBy_);
      DARABONBA_PTR_TO_JSON(ToolCall, toolCall_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, ListConnectionsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ConnectionIds, connectionIds_);
      DARABONBA_PTR_FROM_JSON(ConnectionName, connectionName_);
      DARABONBA_PTR_FROM_JSON(ConnectionTypes, connectionTypes_);
      DARABONBA_PTR_FROM_JSON(Creator, creator_);
      DARABONBA_PTR_FROM_JSON(EncryptOption, encryptOption_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(Model, model_);
      DARABONBA_PTR_FROM_JSON(ModelTypes, modelTypes_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(Order, order_);
      DARABONBA_PTR_FROM_JSON(SortBy, sortBy_);
      DARABONBA_PTR_FROM_JSON(ToolCall, toolCall_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    ListConnectionsRequest() = default ;
    ListConnectionsRequest(const ListConnectionsRequest &) = default ;
    ListConnectionsRequest(ListConnectionsRequest &&) = default ;
    ListConnectionsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListConnectionsRequest() = default ;
    ListConnectionsRequest& operator=(const ListConnectionsRequest &) = default ;
    ListConnectionsRequest& operator=(ListConnectionsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->connectionIds_ == nullptr
        && this->connectionName_ == nullptr && this->connectionTypes_ == nullptr && this->creator_ == nullptr && this->encryptOption_ == nullptr && this->maxResults_ == nullptr
        && this->model_ == nullptr && this->modelTypes_ == nullptr && this->nextToken_ == nullptr && this->order_ == nullptr && this->sortBy_ == nullptr
        && this->toolCall_ == nullptr && this->workspaceId_ == nullptr; };
    // connectionIds Field Functions 
    bool hasConnectionIds() const { return this->connectionIds_ != nullptr;};
    void deleteConnectionIds() { this->connectionIds_ = nullptr;};
    inline const vector<string> & getConnectionIds() const { DARABONBA_PTR_GET_CONST(connectionIds_, vector<string>) };
    inline vector<string> getConnectionIds() { DARABONBA_PTR_GET(connectionIds_, vector<string>) };
    inline ListConnectionsRequest& setConnectionIds(const vector<string> & connectionIds) { DARABONBA_PTR_SET_VALUE(connectionIds_, connectionIds) };
    inline ListConnectionsRequest& setConnectionIds(vector<string> && connectionIds) { DARABONBA_PTR_SET_RVALUE(connectionIds_, connectionIds) };


    // connectionName Field Functions 
    bool hasConnectionName() const { return this->connectionName_ != nullptr;};
    void deleteConnectionName() { this->connectionName_ = nullptr;};
    inline string getConnectionName() const { DARABONBA_PTR_GET_DEFAULT(connectionName_, "") };
    inline ListConnectionsRequest& setConnectionName(string connectionName) { DARABONBA_PTR_SET_VALUE(connectionName_, connectionName) };


    // connectionTypes Field Functions 
    bool hasConnectionTypes() const { return this->connectionTypes_ != nullptr;};
    void deleteConnectionTypes() { this->connectionTypes_ = nullptr;};
    inline const vector<string> & getConnectionTypes() const { DARABONBA_PTR_GET_CONST(connectionTypes_, vector<string>) };
    inline vector<string> getConnectionTypes() { DARABONBA_PTR_GET(connectionTypes_, vector<string>) };
    inline ListConnectionsRequest& setConnectionTypes(const vector<string> & connectionTypes) { DARABONBA_PTR_SET_VALUE(connectionTypes_, connectionTypes) };
    inline ListConnectionsRequest& setConnectionTypes(vector<string> && connectionTypes) { DARABONBA_PTR_SET_RVALUE(connectionTypes_, connectionTypes) };


    // creator Field Functions 
    bool hasCreator() const { return this->creator_ != nullptr;};
    void deleteCreator() { this->creator_ = nullptr;};
    inline string getCreator() const { DARABONBA_PTR_GET_DEFAULT(creator_, "") };
    inline ListConnectionsRequest& setCreator(string creator) { DARABONBA_PTR_SET_VALUE(creator_, creator) };


    // encryptOption Field Functions 
    bool hasEncryptOption() const { return this->encryptOption_ != nullptr;};
    void deleteEncryptOption() { this->encryptOption_ = nullptr;};
    inline string getEncryptOption() const { DARABONBA_PTR_GET_DEFAULT(encryptOption_, "") };
    inline ListConnectionsRequest& setEncryptOption(string encryptOption) { DARABONBA_PTR_SET_VALUE(encryptOption_, encryptOption) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListConnectionsRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // model Field Functions 
    bool hasModel() const { return this->model_ != nullptr;};
    void deleteModel() { this->model_ = nullptr;};
    inline string getModel() const { DARABONBA_PTR_GET_DEFAULT(model_, "") };
    inline ListConnectionsRequest& setModel(string model) { DARABONBA_PTR_SET_VALUE(model_, model) };


    // modelTypes Field Functions 
    bool hasModelTypes() const { return this->modelTypes_ != nullptr;};
    void deleteModelTypes() { this->modelTypes_ = nullptr;};
    inline const vector<string> & getModelTypes() const { DARABONBA_PTR_GET_CONST(modelTypes_, vector<string>) };
    inline vector<string> getModelTypes() { DARABONBA_PTR_GET(modelTypes_, vector<string>) };
    inline ListConnectionsRequest& setModelTypes(const vector<string> & modelTypes) { DARABONBA_PTR_SET_VALUE(modelTypes_, modelTypes) };
    inline ListConnectionsRequest& setModelTypes(vector<string> && modelTypes) { DARABONBA_PTR_SET_RVALUE(modelTypes_, modelTypes) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListConnectionsRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // order Field Functions 
    bool hasOrder() const { return this->order_ != nullptr;};
    void deleteOrder() { this->order_ = nullptr;};
    inline string getOrder() const { DARABONBA_PTR_GET_DEFAULT(order_, "") };
    inline ListConnectionsRequest& setOrder(string order) { DARABONBA_PTR_SET_VALUE(order_, order) };


    // sortBy Field Functions 
    bool hasSortBy() const { return this->sortBy_ != nullptr;};
    void deleteSortBy() { this->sortBy_ = nullptr;};
    inline string getSortBy() const { DARABONBA_PTR_GET_DEFAULT(sortBy_, "") };
    inline ListConnectionsRequest& setSortBy(string sortBy) { DARABONBA_PTR_SET_VALUE(sortBy_, sortBy) };


    // toolCall Field Functions 
    bool hasToolCall() const { return this->toolCall_ != nullptr;};
    void deleteToolCall() { this->toolCall_ = nullptr;};
    inline bool getToolCall() const { DARABONBA_PTR_GET_DEFAULT(toolCall_, false) };
    inline ListConnectionsRequest& setToolCall(bool toolCall) { DARABONBA_PTR_SET_VALUE(toolCall_, toolCall) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline ListConnectionsRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    // The list of connection IDs.
    shared_ptr<vector<string>> connectionIds_ {};
    // The connection name.
    shared_ptr<string> connectionName_ {};
    // The list of connection types.
    shared_ptr<vector<string>> connectionTypes_ {};
    shared_ptr<string> creator_ {};
    // The encryption settings. Valid values:
    // 
    // *   PlainText
    // *   Secret
    shared_ptr<string> encryptOption_ {};
    // The maximum number of entries per page.
    shared_ptr<int32_t> maxResults_ {};
    // The model identifier.
    shared_ptr<string> model_ {};
    // The list of model types.
    shared_ptr<vector<string>> modelTypes_ {};
    // The pagination token that indicates the start position from which to retrieve data on the next page.
    shared_ptr<string> nextToken_ {};
    // The order in which the entries are sorted by the specific field on the returned page. This parameter must be used together with SortBy.
    // 
    // *   ASC: ascending order.
    // *   DESC: descending order. This is the default value.
    shared_ptr<string> order_ {};
    // The field used to sort the results in queries by page. Default value: GmtCreateTime. Valid value:
    // 
    // *   GmtCreateTime: The results are sorted by creation time. This is the default value.
    shared_ptr<string> sortBy_ {};
    // Specifies whether a tool can be called by using ToolCall. Valid values:
    // 
    // *   true
    // *   false
    shared_ptr<bool> toolCall_ {};
    // The workspace ID. You can call [ListWorkspaces](https://help.aliyun.com/document_detail/449124.html) to obtain the workspace ID.
    shared_ptr<string> workspaceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AIWorkSpace20210204
#endif
