// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTMODELPERMISSIONSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTMODELPERMISSIONSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ModelStudio20260210
{
namespace Models
{
  class ListModelPermissionsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListModelPermissionsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(authorizationScope, authorizationScope_);
      DARABONBA_PTR_TO_JSON(filter, filter_);
      DARABONBA_PTR_TO_JSON(maxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(modelAction, modelAction_);
      DARABONBA_PTR_TO_JSON(nextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(workspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, ListModelPermissionsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(authorizationScope, authorizationScope_);
      DARABONBA_PTR_FROM_JSON(filter, filter_);
      DARABONBA_PTR_FROM_JSON(maxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(modelAction, modelAction_);
      DARABONBA_PTR_FROM_JSON(nextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(workspaceId, workspaceId_);
    };
    ListModelPermissionsRequest() = default ;
    ListModelPermissionsRequest(const ListModelPermissionsRequest &) = default ;
    ListModelPermissionsRequest(ListModelPermissionsRequest &&) = default ;
    ListModelPermissionsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListModelPermissionsRequest() = default ;
    ListModelPermissionsRequest& operator=(const ListModelPermissionsRequest &) = default ;
    ListModelPermissionsRequest& operator=(ListModelPermissionsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Filter : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Filter& obj) { 
        DARABONBA_PTR_TO_JSON(model, model_);
        DARABONBA_PTR_TO_JSON(name, name_);
      };
      friend void from_json(const Darabonba::Json& j, Filter& obj) { 
        DARABONBA_PTR_FROM_JSON(model, model_);
        DARABONBA_PTR_FROM_JSON(name, name_);
      };
      Filter() = default ;
      Filter(const Filter &) = default ;
      Filter(Filter &&) = default ;
      Filter(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Filter() = default ;
      Filter& operator=(const Filter &) = default ;
      Filter& operator=(Filter &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->model_ == nullptr
        && this->name_ == nullptr; };
      // model Field Functions 
      bool hasModel() const { return this->model_ != nullptr;};
      void deleteModel() { this->model_ = nullptr;};
      inline string getModel() const { DARABONBA_PTR_GET_DEFAULT(model_, "") };
      inline Filter& setModel(string model) { DARABONBA_PTR_SET_VALUE(model_, model) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Filter& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    protected:
      // The exact match for a single model.
      shared_ptr<string> model_ {};
      // The fuzzy match for the model name.
      shared_ptr<string> name_ {};
    };

    virtual bool empty() const override { return this->authorizationScope_ == nullptr
        && this->filter_ == nullptr && this->maxResults_ == nullptr && this->modelAction_ == nullptr && this->nextToken_ == nullptr && this->workspaceId_ == nullptr; };
    // authorizationScope Field Functions 
    bool hasAuthorizationScope() const { return this->authorizationScope_ != nullptr;};
    void deleteAuthorizationScope() { this->authorizationScope_ = nullptr;};
    inline string getAuthorizationScope() const { DARABONBA_PTR_GET_DEFAULT(authorizationScope_, "") };
    inline ListModelPermissionsRequest& setAuthorizationScope(string authorizationScope) { DARABONBA_PTR_SET_VALUE(authorizationScope_, authorizationScope) };


    // filter Field Functions 
    bool hasFilter() const { return this->filter_ != nullptr;};
    void deleteFilter() { this->filter_ = nullptr;};
    inline const ListModelPermissionsRequest::Filter & getFilter() const { DARABONBA_PTR_GET_CONST(filter_, ListModelPermissionsRequest::Filter) };
    inline ListModelPermissionsRequest::Filter getFilter() { DARABONBA_PTR_GET(filter_, ListModelPermissionsRequest::Filter) };
    inline ListModelPermissionsRequest& setFilter(const ListModelPermissionsRequest::Filter & filter) { DARABONBA_PTR_SET_VALUE(filter_, filter) };
    inline ListModelPermissionsRequest& setFilter(ListModelPermissionsRequest::Filter && filter) { DARABONBA_PTR_SET_RVALUE(filter_, filter) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListModelPermissionsRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // modelAction Field Functions 
    bool hasModelAction() const { return this->modelAction_ != nullptr;};
    void deleteModelAction() { this->modelAction_ = nullptr;};
    inline string getModelAction() const { DARABONBA_PTR_GET_DEFAULT(modelAction_, "") };
    inline ListModelPermissionsRequest& setModelAction(string modelAction) { DARABONBA_PTR_SET_VALUE(modelAction_, modelAction) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListModelPermissionsRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline ListModelPermissionsRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    // The query dimension for the authorization scope.
    // 
    // - **AUTHORIZED**: models that are authorized for the specified modelAction. This value must be used together with modelAction.
    // - **AUTHORIZABLE**: all authorizable directories.
    shared_ptr<string> authorizationScope_ {};
    // The filter conditions.
    shared_ptr<ListModelPermissionsRequest::Filter> filter_ {};
    // The maximum number of entries to return on each page. Default value: 20. If the value exceeds the upper limit, the `InvalidParameter.maxResults` error is returned.
    shared_ptr<int32_t> maxResults_ {};
    // The authorization action dimension.
    // 
    // - **INFERENCE**: model invocation authorization.
    shared_ptr<string> modelAction_ {};
    // The pagination token that is used to retrieve the next page. This parameter is not required for the first page.
    shared_ptr<string> nextToken_ {};
    // The ID of the workspace. This parameter is required.
    // 
    // This parameter is required.
    shared_ptr<string> workspaceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ModelStudio20260210
#endif
