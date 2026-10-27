// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTNODEPOOLCOMPONENTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTNODEPOOLCOMPONENTSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CS20151215
{
namespace Models
{
  class ListNodePoolComponentsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListNodePoolComponentsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(components, components_);
      DARABONBA_PTR_TO_JSON(max_results, maxResults_);
      DARABONBA_PTR_TO_JSON(next_token, nextToken_);
    };
    friend void from_json(const Darabonba::Json& j, ListNodePoolComponentsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(components, components_);
      DARABONBA_PTR_FROM_JSON(max_results, maxResults_);
      DARABONBA_PTR_FROM_JSON(next_token, nextToken_);
    };
    ListNodePoolComponentsResponseBody() = default ;
    ListNodePoolComponentsResponseBody(const ListNodePoolComponentsResponseBody &) = default ;
    ListNodePoolComponentsResponseBody(ListNodePoolComponentsResponseBody &&) = default ;
    ListNodePoolComponentsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListNodePoolComponentsResponseBody() = default ;
    ListNodePoolComponentsResponseBody& operator=(const ListNodePoolComponentsResponseBody &) = default ;
    ListNodePoolComponentsResponseBody& operator=(ListNodePoolComponentsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Components : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Components& obj) { 
        DARABONBA_PTR_TO_JSON(config_schema, configSchema_);
        DARABONBA_PTR_TO_JSON(name, name_);
        DARABONBA_PTR_TO_JSON(version, version_);
      };
      friend void from_json(const Darabonba::Json& j, Components& obj) { 
        DARABONBA_PTR_FROM_JSON(config_schema, configSchema_);
        DARABONBA_PTR_FROM_JSON(name, name_);
        DARABONBA_PTR_FROM_JSON(version, version_);
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
      virtual bool empty() const override { return this->configSchema_ == nullptr
        && this->name_ == nullptr && this->version_ == nullptr; };
      // configSchema Field Functions 
      bool hasConfigSchema() const { return this->configSchema_ != nullptr;};
      void deleteConfigSchema() { this->configSchema_ = nullptr;};
      inline string getConfigSchema() const { DARABONBA_PTR_GET_DEFAULT(configSchema_, "") };
      inline Components& setConfigSchema(string configSchema) { DARABONBA_PTR_SET_VALUE(configSchema_, configSchema) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Components& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // version Field Functions 
      bool hasVersion() const { return this->version_ != nullptr;};
      void deleteVersion() { this->version_ = nullptr;};
      inline string getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
      inline Components& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


    protected:
      // The parameter schema of the node component, including custom parameters and system parameters.
      shared_ptr<string> configSchema_ {};
      // The name of the node component.
      shared_ptr<string> name_ {};
      // The version of the node component.
      shared_ptr<string> version_ {};
    };

    virtual bool empty() const override { return this->components_ == nullptr
        && this->maxResults_ == nullptr && this->nextToken_ == nullptr; };
    // components Field Functions 
    bool hasComponents() const { return this->components_ != nullptr;};
    void deleteComponents() { this->components_ = nullptr;};
    inline const vector<ListNodePoolComponentsResponseBody::Components> & getComponents() const { DARABONBA_PTR_GET_CONST(components_, vector<ListNodePoolComponentsResponseBody::Components>) };
    inline vector<ListNodePoolComponentsResponseBody::Components> getComponents() { DARABONBA_PTR_GET(components_, vector<ListNodePoolComponentsResponseBody::Components>) };
    inline ListNodePoolComponentsResponseBody& setComponents(const vector<ListNodePoolComponentsResponseBody::Components> & components) { DARABONBA_PTR_SET_VALUE(components_, components) };
    inline ListNodePoolComponentsResponseBody& setComponents(vector<ListNodePoolComponentsResponseBody::Components> && components) { DARABONBA_PTR_SET_RVALUE(components_, components) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListNodePoolComponentsResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListNodePoolComponentsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


  protected:
    // The node components.
    shared_ptr<vector<ListNodePoolComponentsResponseBody::Components>> components_ {};
    // The maximum number of results per page. Default value: 200.
    shared_ptr<int32_t> maxResults_ {};
    // The pagination token.
    shared_ptr<string> nextToken_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CS20151215
#endif
