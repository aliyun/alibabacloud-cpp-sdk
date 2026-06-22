// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCOMPONENTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTCOMPONENTSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/Attribute.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Emr20210320
{
namespace Models
{
  class ListComponentsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListComponentsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Components, components_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListComponentsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Components, components_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListComponentsResponseBody() = default ;
    ListComponentsResponseBody(const ListComponentsResponseBody &) = default ;
    ListComponentsResponseBody(ListComponentsResponseBody &&) = default ;
    ListComponentsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListComponentsResponseBody() = default ;
    ListComponentsResponseBody& operator=(const ListComponentsResponseBody &) = default ;
    ListComponentsResponseBody& operator=(ListComponentsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Components : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Components& obj) { 
        DARABONBA_PTR_TO_JSON(ApplicationName, applicationName_);
        DARABONBA_PTR_TO_JSON(Attributes, attributes_);
        DARABONBA_PTR_TO_JSON(ComponentName, componentName_);
        DARABONBA_PTR_TO_JSON(Namespace, namespace_);
        DARABONBA_PTR_TO_JSON(Replica, replica_);
      };
      friend void from_json(const Darabonba::Json& j, Components& obj) { 
        DARABONBA_PTR_FROM_JSON(ApplicationName, applicationName_);
        DARABONBA_PTR_FROM_JSON(Attributes, attributes_);
        DARABONBA_PTR_FROM_JSON(ComponentName, componentName_);
        DARABONBA_PTR_FROM_JSON(Namespace, namespace_);
        DARABONBA_PTR_FROM_JSON(Replica, replica_);
      };
      Components() = default ;
      Components(const Components &) = default ;
      Components(Components &&) = default ;
      Components(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Components() = default ;
      Components& operator=(const Components &) = default ;
      Components& operator=(Components &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->applicationName_ == nullptr
        && this->attributes_ == nullptr && this->componentName_ == nullptr && this->namespace_ == nullptr && this->replica_ == nullptr; };
      // applicationName Field Functions 
      bool hasApplicationName() const { return this->applicationName_ != nullptr;};
      void deleteApplicationName() { this->applicationName_ = nullptr;};
      inline string getApplicationName() const { DARABONBA_PTR_GET_DEFAULT(applicationName_, "") };
      inline Components& setApplicationName(string applicationName) { DARABONBA_PTR_SET_VALUE(applicationName_, applicationName) };


      // attributes Field Functions 
      bool hasAttributes() const { return this->attributes_ != nullptr;};
      void deleteAttributes() { this->attributes_ = nullptr;};
      inline const vector<Attribute> & getAttributes() const { DARABONBA_PTR_GET_CONST(attributes_, vector<Attribute>) };
      inline vector<Attribute> getAttributes() { DARABONBA_PTR_GET(attributes_, vector<Attribute>) };
      inline Components& setAttributes(const vector<Attribute> & attributes) { DARABONBA_PTR_SET_VALUE(attributes_, attributes) };
      inline Components& setAttributes(vector<Attribute> && attributes) { DARABONBA_PTR_SET_RVALUE(attributes_, attributes) };


      // componentName Field Functions 
      bool hasComponentName() const { return this->componentName_ != nullptr;};
      void deleteComponentName() { this->componentName_ = nullptr;};
      inline string getComponentName() const { DARABONBA_PTR_GET_DEFAULT(componentName_, "") };
      inline Components& setComponentName(string componentName) { DARABONBA_PTR_SET_VALUE(componentName_, componentName) };


      // namespace Field Functions 
      bool hasNamespace() const { return this->namespace_ != nullptr;};
      void deleteNamespace() { this->namespace_ = nullptr;};
      inline string getNamespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
      inline Components& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


      // replica Field Functions 
      bool hasReplica() const { return this->replica_ != nullptr;};
      void deleteReplica() { this->replica_ = nullptr;};
      inline int32_t getReplica() const { DARABONBA_PTR_GET_DEFAULT(replica_, 0) };
      inline Components& setReplica(int32_t replica) { DARABONBA_PTR_SET_VALUE(replica_, replica) };


    protected:
      // The application name.
      shared_ptr<string> applicationName_ {};
      // The list of attributes.
      shared_ptr<vector<Attribute>> attributes_ {};
      // The component name.
      shared_ptr<string> componentName_ {};
      // The reserved field.
      shared_ptr<string> namespace_ {};
      // The total number of instances on which the component is installed.
      shared_ptr<int32_t> replica_ {};
    };

    virtual bool empty() const override { return this->components_ == nullptr
        && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // components Field Functions 
    bool hasComponents() const { return this->components_ != nullptr;};
    void deleteComponents() { this->components_ = nullptr;};
    inline const vector<ListComponentsResponseBody::Components> & getComponents() const { DARABONBA_PTR_GET_CONST(components_, vector<ListComponentsResponseBody::Components>) };
    inline vector<ListComponentsResponseBody::Components> getComponents() { DARABONBA_PTR_GET(components_, vector<ListComponentsResponseBody::Components>) };
    inline ListComponentsResponseBody& setComponents(const vector<ListComponentsResponseBody::Components> & components) { DARABONBA_PTR_SET_VALUE(components_, components) };
    inline ListComponentsResponseBody& setComponents(vector<ListComponentsResponseBody::Components> && components) { DARABONBA_PTR_SET_RVALUE(components_, components) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListComponentsResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListComponentsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListComponentsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListComponentsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The list of component information.
    shared_ptr<vector<ListComponentsResponseBody::Components>> components_ {};
    // The maximum number of entries returned.
    shared_ptr<int32_t> maxResults_ {};
    // A pagination token. It can be used in the next request to retrieve a new page of results.
    shared_ptr<string> nextToken_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of entries returned.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Emr20210320
#endif
