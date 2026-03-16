// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEFLOWALIASRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEFLOWALIASRESPONSEBODY_HPP_
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
  class CreateFlowAliasResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateFlowAliasResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CreatedTime, createdTime_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(FlowName, flowName_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(RoutingConfigurations, routingConfigurations_);
    };
    friend void from_json(const Darabonba::Json& j, CreateFlowAliasResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CreatedTime, createdTime_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(FlowName, flowName_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(RoutingConfigurations, routingConfigurations_);
    };
    CreateFlowAliasResponseBody() = default ;
    CreateFlowAliasResponseBody(const CreateFlowAliasResponseBody &) = default ;
    CreateFlowAliasResponseBody(CreateFlowAliasResponseBody &&) = default ;
    CreateFlowAliasResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateFlowAliasResponseBody() = default ;
    CreateFlowAliasResponseBody& operator=(const CreateFlowAliasResponseBody &) = default ;
    CreateFlowAliasResponseBody& operator=(CreateFlowAliasResponseBody &&) = default ;
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
      inline int32_t getWeight() const { DARABONBA_PTR_GET_DEFAULT(weight_, 0) };
      inline RoutingConfigurations& setWeight(int32_t weight) { DARABONBA_PTR_SET_VALUE(weight_, weight) };


    protected:
      shared_ptr<string> version_ {};
      shared_ptr<int32_t> weight_ {};
    };

    virtual bool empty() const override { return this->createdTime_ == nullptr
        && this->description_ == nullptr && this->flowName_ == nullptr && this->name_ == nullptr && this->requestId_ == nullptr && this->routingConfigurations_ == nullptr; };
    // createdTime Field Functions 
    bool hasCreatedTime() const { return this->createdTime_ != nullptr;};
    void deleteCreatedTime() { this->createdTime_ = nullptr;};
    inline string getCreatedTime() const { DARABONBA_PTR_GET_DEFAULT(createdTime_, "") };
    inline CreateFlowAliasResponseBody& setCreatedTime(string createdTime) { DARABONBA_PTR_SET_VALUE(createdTime_, createdTime) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateFlowAliasResponseBody& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // flowName Field Functions 
    bool hasFlowName() const { return this->flowName_ != nullptr;};
    void deleteFlowName() { this->flowName_ = nullptr;};
    inline string getFlowName() const { DARABONBA_PTR_GET_DEFAULT(flowName_, "") };
    inline CreateFlowAliasResponseBody& setFlowName(string flowName) { DARABONBA_PTR_SET_VALUE(flowName_, flowName) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateFlowAliasResponseBody& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateFlowAliasResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // routingConfigurations Field Functions 
    bool hasRoutingConfigurations() const { return this->routingConfigurations_ != nullptr;};
    void deleteRoutingConfigurations() { this->routingConfigurations_ = nullptr;};
    inline const vector<CreateFlowAliasResponseBody::RoutingConfigurations> & getRoutingConfigurations() const { DARABONBA_PTR_GET_CONST(routingConfigurations_, vector<CreateFlowAliasResponseBody::RoutingConfigurations>) };
    inline vector<CreateFlowAliasResponseBody::RoutingConfigurations> getRoutingConfigurations() { DARABONBA_PTR_GET(routingConfigurations_, vector<CreateFlowAliasResponseBody::RoutingConfigurations>) };
    inline CreateFlowAliasResponseBody& setRoutingConfigurations(const vector<CreateFlowAliasResponseBody::RoutingConfigurations> & routingConfigurations) { DARABONBA_PTR_SET_VALUE(routingConfigurations_, routingConfigurations) };
    inline CreateFlowAliasResponseBody& setRoutingConfigurations(vector<CreateFlowAliasResponseBody::RoutingConfigurations> && routingConfigurations) { DARABONBA_PTR_SET_RVALUE(routingConfigurations_, routingConfigurations) };


  protected:
    shared_ptr<string> createdTime_ {};
    shared_ptr<string> description_ {};
    shared_ptr<string> flowName_ {};
    shared_ptr<string> name_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
    shared_ptr<vector<CreateFlowAliasResponseBody::RoutingConfigurations>> routingConfigurations_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Fnf20190315
#endif
