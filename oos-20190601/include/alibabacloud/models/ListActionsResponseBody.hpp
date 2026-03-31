// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTACTIONSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTACTIONSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Oos20190601
{
namespace Models
{
  class ListActionsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListActionsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Actions, actions_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListActionsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Actions, actions_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListActionsResponseBody() = default ;
    ListActionsResponseBody(const ListActionsResponseBody &) = default ;
    ListActionsResponseBody(ListActionsResponseBody &&) = default ;
    ListActionsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListActionsResponseBody() = default ;
    ListActionsResponseBody& operator=(const ListActionsResponseBody &) = default ;
    ListActionsResponseBody& operator=(ListActionsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Actions : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Actions& obj) { 
        DARABONBA_PTR_TO_JSON(ActionType, actionType_);
        DARABONBA_PTR_TO_JSON(CreatedDate, createdDate_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(OOSActionName, OOSActionName_);
        DARABONBA_PTR_TO_JSON(Popularity, popularity_);
        DARABONBA_PTR_TO_JSON(Properties, properties_);
        DARABONBA_PTR_TO_JSON(TemplateVersion, templateVersion_);
      };
      friend void from_json(const Darabonba::Json& j, Actions& obj) { 
        DARABONBA_PTR_FROM_JSON(ActionType, actionType_);
        DARABONBA_PTR_FROM_JSON(CreatedDate, createdDate_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(OOSActionName, OOSActionName_);
        DARABONBA_PTR_FROM_JSON(Popularity, popularity_);
        DARABONBA_PTR_FROM_JSON(Properties, properties_);
        DARABONBA_PTR_FROM_JSON(TemplateVersion, templateVersion_);
      };
      Actions() = default ;
      Actions(const Actions &) = default ;
      Actions(Actions &&) = default ;
      Actions(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Actions() = default ;
      Actions& operator=(const Actions &) = default ;
      Actions& operator=(Actions &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->actionType_ == nullptr
        && this->createdDate_ == nullptr && this->description_ == nullptr && this->OOSActionName_ == nullptr && this->popularity_ == nullptr && this->properties_ == nullptr
        && this->templateVersion_ == nullptr; };
      // actionType Field Functions 
      bool hasActionType() const { return this->actionType_ != nullptr;};
      void deleteActionType() { this->actionType_ = nullptr;};
      inline string getActionType() const { DARABONBA_PTR_GET_DEFAULT(actionType_, "") };
      inline Actions& setActionType(string actionType) { DARABONBA_PTR_SET_VALUE(actionType_, actionType) };


      // createdDate Field Functions 
      bool hasCreatedDate() const { return this->createdDate_ != nullptr;};
      void deleteCreatedDate() { this->createdDate_ = nullptr;};
      inline string getCreatedDate() const { DARABONBA_PTR_GET_DEFAULT(createdDate_, "") };
      inline Actions& setCreatedDate(string createdDate) { DARABONBA_PTR_SET_VALUE(createdDate_, createdDate) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline Actions& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // OOSActionName Field Functions 
      bool hasOOSActionName() const { return this->OOSActionName_ != nullptr;};
      void deleteOOSActionName() { this->OOSActionName_ = nullptr;};
      inline string getOOSActionName() const { DARABONBA_PTR_GET_DEFAULT(OOSActionName_, "") };
      inline Actions& setOOSActionName(string OOSActionName) { DARABONBA_PTR_SET_VALUE(OOSActionName_, OOSActionName) };


      // popularity Field Functions 
      bool hasPopularity() const { return this->popularity_ != nullptr;};
      void deletePopularity() { this->popularity_ = nullptr;};
      inline int32_t getPopularity() const { DARABONBA_PTR_GET_DEFAULT(popularity_, 0) };
      inline Actions& setPopularity(int32_t popularity) { DARABONBA_PTR_SET_VALUE(popularity_, popularity) };


      // properties Field Functions 
      bool hasProperties() const { return this->properties_ != nullptr;};
      void deleteProperties() { this->properties_ = nullptr;};
      inline string getProperties() const { DARABONBA_PTR_GET_DEFAULT(properties_, "") };
      inline Actions& setProperties(string properties) { DARABONBA_PTR_SET_VALUE(properties_, properties) };


      // templateVersion Field Functions 
      bool hasTemplateVersion() const { return this->templateVersion_ != nullptr;};
      void deleteTemplateVersion() { this->templateVersion_ = nullptr;};
      inline string getTemplateVersion() const { DARABONBA_PTR_GET_DEFAULT(templateVersion_, "") };
      inline Actions& setTemplateVersion(string templateVersion) { DARABONBA_PTR_SET_VALUE(templateVersion_, templateVersion) };


    protected:
      // The type of the action.
      // 
      // 1.  Atomic actions
      // 
      //     *   Atomic.API
      //     *   Atomic.Trigger
      //     *   Atomic.Control
      //     *   Atomic.Embedded
      // 
      // 2.  Cloud product actions
      // 
      //     *   Product.ECS
      //     *   Product.RDS
      //     *   Product.VPC
      //     *   Product.FC
      //     *   ...
      shared_ptr<string> actionType_ {};
      // The time when the action was created.
      shared_ptr<string> createdDate_ {};
      // The description of the action.
      shared_ptr<string> description_ {};
      // The name of the action.
      shared_ptr<string> OOSActionName_ {};
      // The number of times that the action is used.
      shared_ptr<int32_t> popularity_ {};
      // The parameters of the action.
      shared_ptr<string> properties_ {};
      // The version of the template that corresponds to the action.
      // 
      // >  For atomic actions, this parameter is not returned.
      shared_ptr<string> templateVersion_ {};
    };

    virtual bool empty() const override { return this->actions_ == nullptr
        && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->requestId_ == nullptr; };
    // actions Field Functions 
    bool hasActions() const { return this->actions_ != nullptr;};
    void deleteActions() { this->actions_ = nullptr;};
    inline const vector<ListActionsResponseBody::Actions> & getActions() const { DARABONBA_PTR_GET_CONST(actions_, vector<ListActionsResponseBody::Actions>) };
    inline vector<ListActionsResponseBody::Actions> getActions() { DARABONBA_PTR_GET(actions_, vector<ListActionsResponseBody::Actions>) };
    inline ListActionsResponseBody& setActions(const vector<ListActionsResponseBody::Actions> & actions) { DARABONBA_PTR_SET_VALUE(actions_, actions) };
    inline ListActionsResponseBody& setActions(vector<ListActionsResponseBody::Actions> && actions) { DARABONBA_PTR_SET_RVALUE(actions_, actions) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListActionsResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListActionsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListActionsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The details of the actions.
    shared_ptr<vector<ListActionsResponseBody::Actions>> actions_ {};
    // The number of entries returned per page.
    shared_ptr<int32_t> maxResults_ {};
    // The token that is used to retrieve the next page of results.
    shared_ptr<string> nextToken_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Oos20190601
#endif
