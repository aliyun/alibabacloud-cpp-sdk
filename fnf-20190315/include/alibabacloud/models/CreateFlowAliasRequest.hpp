// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEFLOWALIASREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEFLOWALIASREQUEST_HPP_
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
  class CreateFlowAliasRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateFlowAliasRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(FlowName, flowName_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(RoutingConfigurations, routingConfigurations_);
    };
    friend void from_json(const Darabonba::Json& j, CreateFlowAliasRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(FlowName, flowName_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(RoutingConfigurations, routingConfigurations_);
    };
    CreateFlowAliasRequest() = default ;
    CreateFlowAliasRequest(const CreateFlowAliasRequest &) = default ;
    CreateFlowAliasRequest(CreateFlowAliasRequest &&) = default ;
    CreateFlowAliasRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateFlowAliasRequest() = default ;
    CreateFlowAliasRequest& operator=(const CreateFlowAliasRequest &) = default ;
    CreateFlowAliasRequest& operator=(CreateFlowAliasRequest &&) = default ;
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
      // This parameter is required.
      shared_ptr<string> version_ {};
      // This parameter is required.
      shared_ptr<int32_t> weight_ {};
    };

    virtual bool empty() const override { return this->description_ == nullptr
        && this->flowName_ == nullptr && this->name_ == nullptr && this->routingConfigurations_ == nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateFlowAliasRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // flowName Field Functions 
    bool hasFlowName() const { return this->flowName_ != nullptr;};
    void deleteFlowName() { this->flowName_ = nullptr;};
    inline string getFlowName() const { DARABONBA_PTR_GET_DEFAULT(flowName_, "") };
    inline CreateFlowAliasRequest& setFlowName(string flowName) { DARABONBA_PTR_SET_VALUE(flowName_, flowName) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateFlowAliasRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // routingConfigurations Field Functions 
    bool hasRoutingConfigurations() const { return this->routingConfigurations_ != nullptr;};
    void deleteRoutingConfigurations() { this->routingConfigurations_ = nullptr;};
    inline const vector<CreateFlowAliasRequest::RoutingConfigurations> & getRoutingConfigurations() const { DARABONBA_PTR_GET_CONST(routingConfigurations_, vector<CreateFlowAliasRequest::RoutingConfigurations>) };
    inline vector<CreateFlowAliasRequest::RoutingConfigurations> getRoutingConfigurations() { DARABONBA_PTR_GET(routingConfigurations_, vector<CreateFlowAliasRequest::RoutingConfigurations>) };
    inline CreateFlowAliasRequest& setRoutingConfigurations(const vector<CreateFlowAliasRequest::RoutingConfigurations> & routingConfigurations) { DARABONBA_PTR_SET_VALUE(routingConfigurations_, routingConfigurations) };
    inline CreateFlowAliasRequest& setRoutingConfigurations(vector<CreateFlowAliasRequest::RoutingConfigurations> && routingConfigurations) { DARABONBA_PTR_SET_RVALUE(routingConfigurations_, routingConfigurations) };


  protected:
    shared_ptr<string> description_ {};
    // This parameter is required.
    shared_ptr<string> flowName_ {};
    // This parameter is required.
    shared_ptr<string> name_ {};
    // This parameter is required.
    shared_ptr<vector<CreateFlowAliasRequest::RoutingConfigurations>> routingConfigurations_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Fnf20190315
#endif
