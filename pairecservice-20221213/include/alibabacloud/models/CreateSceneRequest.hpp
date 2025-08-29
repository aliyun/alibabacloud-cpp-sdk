// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESCENEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATESCENEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreateSceneRequestFlows.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiRecService20221213
{
namespace Models
{
  class CreateSceneRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateSceneRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Flows, flows_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Name, name_);
    };
    friend void from_json(const Darabonba::Json& j, CreateSceneRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Flows, flows_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
    };
    CreateSceneRequest() = default ;
    CreateSceneRequest(const CreateSceneRequest &) = default ;
    CreateSceneRequest(CreateSceneRequest &&) = default ;
    CreateSceneRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateSceneRequest() = default ;
    CreateSceneRequest& operator=(const CreateSceneRequest &) = default ;
    CreateSceneRequest& operator=(CreateSceneRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->description_ != nullptr
        && this->flows_ != nullptr && this->instanceId_ != nullptr && this->name_ != nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateSceneRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // flows Field Functions 
    bool hasFlows() const { return this->flows_ != nullptr;};
    void deleteFlows() { this->flows_ = nullptr;};
    inline const vector<CreateSceneRequestFlows> & flows() const { DARABONBA_PTR_GET_CONST(flows_, vector<CreateSceneRequestFlows>) };
    inline vector<CreateSceneRequestFlows> flows() { DARABONBA_PTR_GET(flows_, vector<CreateSceneRequestFlows>) };
    inline CreateSceneRequest& setFlows(const vector<CreateSceneRequestFlows> & flows) { DARABONBA_PTR_SET_VALUE(flows_, flows) };
    inline CreateSceneRequest& setFlows(vector<CreateSceneRequestFlows> && flows) { DARABONBA_PTR_SET_RVALUE(flows_, flows) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline CreateSceneRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateSceneRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


  protected:
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<vector<CreateSceneRequestFlows>> flows_ = nullptr;
    std::shared_ptr<string> instanceId_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiRecService20221213
#endif
