// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTFLOWALIASESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTFLOWALIASESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Fnf20190315
{
namespace Models
{
  class ListFlowAliasesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListFlowAliasesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Aliases, aliases_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListFlowAliasesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Aliases, aliases_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListFlowAliasesResponseBody() = default ;
    ListFlowAliasesResponseBody(const ListFlowAliasesResponseBody &) = default ;
    ListFlowAliasesResponseBody(ListFlowAliasesResponseBody &&) = default ;
    ListFlowAliasesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListFlowAliasesResponseBody() = default ;
    ListFlowAliasesResponseBody& operator=(const ListFlowAliasesResponseBody &) = default ;
    ListFlowAliasesResponseBody& operator=(ListFlowAliasesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Aliases : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Aliases& obj) { 
        DARABONBA_PTR_TO_JSON(CreatedTime, createdTime_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(RoutingConfigurations, routingConfigurations_);
      };
      friend void from_json(const Darabonba::Json& j, Aliases& obj) { 
        DARABONBA_PTR_FROM_JSON(CreatedTime, createdTime_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(RoutingConfigurations, routingConfigurations_);
      };
      Aliases() = default ;
      Aliases(const Aliases &) = default ;
      Aliases(Aliases &&) = default ;
      Aliases(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Aliases() = default ;
      Aliases& operator=(const Aliases &) = default ;
      Aliases& operator=(Aliases &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class RoutingConfigurations : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const RoutingConfigurations& obj) { 
          DARABONBA_PTR_TO_JSON(Version, version_);
          DARABONBA_PTR_TO_JSON(Weight, weight_);
        };
        friend void from_json(const Darabonba::Json& j, RoutingConfigurations& obj) { 
          DARABONBA_PTR_FROM_JSON(Version, version_);
          DARABONBA_PTR_FROM_JSON(Weight, weight_);
        };
        RoutingConfigurations() = default ;
        RoutingConfigurations(const RoutingConfigurations &) = default ;
        RoutingConfigurations(RoutingConfigurations &&) = default ;
        RoutingConfigurations(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~RoutingConfigurations() = default ;
        RoutingConfigurations& operator=(const RoutingConfigurations &) = default ;
        RoutingConfigurations& operator=(RoutingConfigurations &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->version_ == nullptr
        && this->weight_ == nullptr; };
        // version Field Functions 
        bool hasVersion() const { return this->version_ != nullptr;};
        void deleteVersion() { this->version_ = nullptr;};
        inline string getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
        inline RoutingConfigurations& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


        // weight Field Functions 
        bool hasWeight() const { return this->weight_ != nullptr;};
        void deleteWeight() { this->weight_ = nullptr;};
        inline string getWeight() const { DARABONBA_PTR_GET_DEFAULT(weight_, "") };
        inline RoutingConfigurations& setWeight(string weight) { DARABONBA_PTR_SET_VALUE(weight_, weight) };


      protected:
        shared_ptr<string> version_ {};
        shared_ptr<string> weight_ {};
      };

      virtual bool empty() const override { return this->createdTime_ == nullptr
        && this->description_ == nullptr && this->name_ == nullptr && this->routingConfigurations_ == nullptr; };
      // createdTime Field Functions 
      bool hasCreatedTime() const { return this->createdTime_ != nullptr;};
      void deleteCreatedTime() { this->createdTime_ = nullptr;};
      inline string getCreatedTime() const { DARABONBA_PTR_GET_DEFAULT(createdTime_, "") };
      inline Aliases& setCreatedTime(string createdTime) { DARABONBA_PTR_SET_VALUE(createdTime_, createdTime) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline Aliases& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Aliases& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // routingConfigurations Field Functions 
      bool hasRoutingConfigurations() const { return this->routingConfigurations_ != nullptr;};
      void deleteRoutingConfigurations() { this->routingConfigurations_ = nullptr;};
      inline const vector<Aliases::RoutingConfigurations> & getRoutingConfigurations() const { DARABONBA_PTR_GET_CONST(routingConfigurations_, vector<Aliases::RoutingConfigurations>) };
      inline vector<Aliases::RoutingConfigurations> getRoutingConfigurations() { DARABONBA_PTR_GET(routingConfigurations_, vector<Aliases::RoutingConfigurations>) };
      inline Aliases& setRoutingConfigurations(const vector<Aliases::RoutingConfigurations> & routingConfigurations) { DARABONBA_PTR_SET_VALUE(routingConfigurations_, routingConfigurations) };
      inline Aliases& setRoutingConfigurations(vector<Aliases::RoutingConfigurations> && routingConfigurations) { DARABONBA_PTR_SET_RVALUE(routingConfigurations_, routingConfigurations) };


    protected:
      shared_ptr<string> createdTime_ {};
      shared_ptr<string> description_ {};
      shared_ptr<string> name_ {};
      shared_ptr<vector<Aliases::RoutingConfigurations>> routingConfigurations_ {};
    };

    virtual bool empty() const override { return this->aliases_ == nullptr
        && this->nextToken_ == nullptr && this->requestId_ == nullptr; };
    // aliases Field Functions 
    bool hasAliases() const { return this->aliases_ != nullptr;};
    void deleteAliases() { this->aliases_ = nullptr;};
    inline const vector<ListFlowAliasesResponseBody::Aliases> & getAliases() const { DARABONBA_PTR_GET_CONST(aliases_, vector<ListFlowAliasesResponseBody::Aliases>) };
    inline vector<ListFlowAliasesResponseBody::Aliases> getAliases() { DARABONBA_PTR_GET(aliases_, vector<ListFlowAliasesResponseBody::Aliases>) };
    inline ListFlowAliasesResponseBody& setAliases(const vector<ListFlowAliasesResponseBody::Aliases> & aliases) { DARABONBA_PTR_SET_VALUE(aliases_, aliases) };
    inline ListFlowAliasesResponseBody& setAliases(vector<ListFlowAliasesResponseBody::Aliases> && aliases) { DARABONBA_PTR_SET_RVALUE(aliases_, aliases) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListFlowAliasesResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListFlowAliasesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<vector<ListFlowAliasesResponseBody::Aliases>> aliases_ {};
    // list token
    shared_ptr<string> nextToken_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Fnf20190315
#endif
