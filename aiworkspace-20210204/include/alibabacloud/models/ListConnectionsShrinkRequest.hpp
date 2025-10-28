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
    virtual bool empty() const override { return this->connectionIdsShrink_ == nullptr
        && return this->connectionName_ == nullptr && return this->connectionTypesShrink_ == nullptr && return this->creator_ == nullptr && return this->encryptOption_ == nullptr && return this->maxResults_ == nullptr
        && return this->model_ == nullptr && return this->modelTypesShrink_ == nullptr && return this->nextToken_ == nullptr && return this->order_ == nullptr && return this->sortBy_ == nullptr
        && return this->toolCall_ == nullptr && return this->workspaceId_ == nullptr; };
    // connectionIdsShrink Field Functions 
    bool hasConnectionIdsShrink() const { return this->connectionIdsShrink_ != nullptr;};
    void deleteConnectionIdsShrink() { this->connectionIdsShrink_ = nullptr;};
    inline string connectionIdsShrink() const { DARABONBA_PTR_GET_DEFAULT(connectionIdsShrink_, "") };
    inline ListConnectionsShrinkRequest& setConnectionIdsShrink(string connectionIdsShrink) { DARABONBA_PTR_SET_VALUE(connectionIdsShrink_, connectionIdsShrink) };


    // connectionName Field Functions 
    bool hasConnectionName() const { return this->connectionName_ != nullptr;};
    void deleteConnectionName() { this->connectionName_ = nullptr;};
    inline string connectionName() const { DARABONBA_PTR_GET_DEFAULT(connectionName_, "") };
    inline ListConnectionsShrinkRequest& setConnectionName(string connectionName) { DARABONBA_PTR_SET_VALUE(connectionName_, connectionName) };


    // connectionTypesShrink Field Functions 
    bool hasConnectionTypesShrink() const { return this->connectionTypesShrink_ != nullptr;};
    void deleteConnectionTypesShrink() { this->connectionTypesShrink_ = nullptr;};
    inline string connectionTypesShrink() const { DARABONBA_PTR_GET_DEFAULT(connectionTypesShrink_, "") };
    inline ListConnectionsShrinkRequest& setConnectionTypesShrink(string connectionTypesShrink) { DARABONBA_PTR_SET_VALUE(connectionTypesShrink_, connectionTypesShrink) };


    // creator Field Functions 
    bool hasCreator() const { return this->creator_ != nullptr;};
    void deleteCreator() { this->creator_ = nullptr;};
    inline string creator() const { DARABONBA_PTR_GET_DEFAULT(creator_, "") };
    inline ListConnectionsShrinkRequest& setCreator(string creator) { DARABONBA_PTR_SET_VALUE(creator_, creator) };


    // encryptOption Field Functions 
    bool hasEncryptOption() const { return this->encryptOption_ != nullptr;};
    void deleteEncryptOption() { this->encryptOption_ = nullptr;};
    inline string encryptOption() const { DARABONBA_PTR_GET_DEFAULT(encryptOption_, "") };
    inline ListConnectionsShrinkRequest& setEncryptOption(string encryptOption) { DARABONBA_PTR_SET_VALUE(encryptOption_, encryptOption) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListConnectionsShrinkRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // model Field Functions 
    bool hasModel() const { return this->model_ != nullptr;};
    void deleteModel() { this->model_ = nullptr;};
    inline string model() const { DARABONBA_PTR_GET_DEFAULT(model_, "") };
    inline ListConnectionsShrinkRequest& setModel(string model) { DARABONBA_PTR_SET_VALUE(model_, model) };


    // modelTypesShrink Field Functions 
    bool hasModelTypesShrink() const { return this->modelTypesShrink_ != nullptr;};
    void deleteModelTypesShrink() { this->modelTypesShrink_ = nullptr;};
    inline string modelTypesShrink() const { DARABONBA_PTR_GET_DEFAULT(modelTypesShrink_, "") };
    inline ListConnectionsShrinkRequest& setModelTypesShrink(string modelTypesShrink) { DARABONBA_PTR_SET_VALUE(modelTypesShrink_, modelTypesShrink) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListConnectionsShrinkRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // order Field Functions 
    bool hasOrder() const { return this->order_ != nullptr;};
    void deleteOrder() { this->order_ = nullptr;};
    inline string order() const { DARABONBA_PTR_GET_DEFAULT(order_, "") };
    inline ListConnectionsShrinkRequest& setOrder(string order) { DARABONBA_PTR_SET_VALUE(order_, order) };


    // sortBy Field Functions 
    bool hasSortBy() const { return this->sortBy_ != nullptr;};
    void deleteSortBy() { this->sortBy_ = nullptr;};
    inline string sortBy() const { DARABONBA_PTR_GET_DEFAULT(sortBy_, "") };
    inline ListConnectionsShrinkRequest& setSortBy(string sortBy) { DARABONBA_PTR_SET_VALUE(sortBy_, sortBy) };


    // toolCall Field Functions 
    bool hasToolCall() const { return this->toolCall_ != nullptr;};
    void deleteToolCall() { this->toolCall_ = nullptr;};
    inline bool toolCall() const { DARABONBA_PTR_GET_DEFAULT(toolCall_, false) };
    inline ListConnectionsShrinkRequest& setToolCall(bool toolCall) { DARABONBA_PTR_SET_VALUE(toolCall_, toolCall) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string workspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline ListConnectionsShrinkRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    // The list of connection IDs.
    std::shared_ptr<string> connectionIdsShrink_ = nullptr;
    // The connection name.
    std::shared_ptr<string> connectionName_ = nullptr;
    // The list of connection types.
    std::shared_ptr<string> connectionTypesShrink_ = nullptr;
    std::shared_ptr<string> creator_ = nullptr;
    // The encryption settings. Valid values:
    // 
    // *   PlainText
    // *   Secret
    std::shared_ptr<string> encryptOption_ = nullptr;
    // The maximum number of entries per page.
    std::shared_ptr<int32_t> maxResults_ = nullptr;
    // The model identifier.
    std::shared_ptr<string> model_ = nullptr;
    // The list of model types.
    std::shared_ptr<string> modelTypesShrink_ = nullptr;
    // The pagination token that indicates the start position from which to retrieve data on the next page.
    std::shared_ptr<string> nextToken_ = nullptr;
    // The order in which the entries are sorted by the specific field on the returned page. This parameter must be used together with SortBy.
    // 
    // *   ASC: ascending order.
    // *   DESC: descending order. This is the default value.
    std::shared_ptr<string> order_ = nullptr;
    // The field used to sort the results in queries by page. Default value: GmtCreateTime. Valid value:
    // 
    // *   GmtCreateTime: The results are sorted by creation time. This is the default value.
    std::shared_ptr<string> sortBy_ = nullptr;
    // Specifies whether a tool can be called by using ToolCall. Valid values:
    // 
    // *   true
    // *   false
    std::shared_ptr<bool> toolCall_ = nullptr;
    // The workspace ID. You can call [ListWorkspaces](https://help.aliyun.com/document_detail/449124.html) to obtain the workspace ID.
    std::shared_ptr<string> workspaceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AIWorkSpace20210204
#endif
