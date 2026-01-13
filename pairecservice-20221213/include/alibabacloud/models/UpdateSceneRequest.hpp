// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATESCENEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATESCENEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiRecService20221213
{
namespace Models
{
  class UpdateSceneRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateSceneRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Flows, flows_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Name, name_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateSceneRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Flows, flows_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
    };
    UpdateSceneRequest() = default ;
    UpdateSceneRequest(const UpdateSceneRequest &) = default ;
    UpdateSceneRequest(UpdateSceneRequest &&) = default ;
    UpdateSceneRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateSceneRequest() = default ;
    UpdateSceneRequest& operator=(const UpdateSceneRequest &) = default ;
    UpdateSceneRequest& operator=(UpdateSceneRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Flows : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Flows& obj) { 
        DARABONBA_PTR_TO_JSON(FlowCode, flowCode_);
        DARABONBA_PTR_TO_JSON(FlowName, flowName_);
      };
      friend void from_json(const Darabonba::Json& j, Flows& obj) { 
        DARABONBA_PTR_FROM_JSON(FlowCode, flowCode_);
        DARABONBA_PTR_FROM_JSON(FlowName, flowName_);
      };
      Flows() = default ;
      Flows(const Flows &) = default ;
      Flows(Flows &&) = default ;
      Flows(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Flows() = default ;
      Flows& operator=(const Flows &) = default ;
      Flows& operator=(Flows &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->flowCode_ == nullptr
        && this->flowName_ == nullptr; };
      // flowCode Field Functions 
      bool hasFlowCode() const { return this->flowCode_ != nullptr;};
      void deleteFlowCode() { this->flowCode_ = nullptr;};
      inline string getFlowCode() const { DARABONBA_PTR_GET_DEFAULT(flowCode_, "") };
      inline Flows& setFlowCode(string flowCode) { DARABONBA_PTR_SET_VALUE(flowCode_, flowCode) };


      // flowName Field Functions 
      bool hasFlowName() const { return this->flowName_ != nullptr;};
      void deleteFlowName() { this->flowName_ = nullptr;};
      inline string getFlowName() const { DARABONBA_PTR_GET_DEFAULT(flowName_, "") };
      inline Flows& setFlowName(string flowName) { DARABONBA_PTR_SET_VALUE(flowName_, flowName) };


    protected:
      shared_ptr<string> flowCode_ {};
      shared_ptr<string> flowName_ {};
    };

    virtual bool empty() const override { return this->description_ == nullptr
        && this->flows_ == nullptr && this->instanceId_ == nullptr && this->name_ == nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline UpdateSceneRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // flows Field Functions 
    bool hasFlows() const { return this->flows_ != nullptr;};
    void deleteFlows() { this->flows_ = nullptr;};
    inline const vector<UpdateSceneRequest::Flows> & getFlows() const { DARABONBA_PTR_GET_CONST(flows_, vector<UpdateSceneRequest::Flows>) };
    inline vector<UpdateSceneRequest::Flows> getFlows() { DARABONBA_PTR_GET(flows_, vector<UpdateSceneRequest::Flows>) };
    inline UpdateSceneRequest& setFlows(const vector<UpdateSceneRequest::Flows> & flows) { DARABONBA_PTR_SET_VALUE(flows_, flows) };
    inline UpdateSceneRequest& setFlows(vector<UpdateSceneRequest::Flows> && flows) { DARABONBA_PTR_SET_RVALUE(flows_, flows) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline UpdateSceneRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline UpdateSceneRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


  protected:
    shared_ptr<string> description_ {};
    shared_ptr<vector<UpdateSceneRequest::Flows>> flows_ {};
    shared_ptr<string> instanceId_ {};
    shared_ptr<string> name_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiRecService20221213
#endif
