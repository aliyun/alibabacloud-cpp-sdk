// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEVARIABLEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEVARIABLEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace VoiceNavigator20251111
{
namespace Models
{
  class UpdateVariableRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateVariableRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(DisplayName, displayName_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(VariableId, variableId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateVariableRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(DisplayName, displayName_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(VariableId, variableId_);
    };
    UpdateVariableRequest() = default ;
    UpdateVariableRequest(const UpdateVariableRequest &) = default ;
    UpdateVariableRequest(UpdateVariableRequest &&) = default ;
    UpdateVariableRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateVariableRequest() = default ;
    UpdateVariableRequest& operator=(const UpdateVariableRequest &) = default ;
    UpdateVariableRequest& operator=(UpdateVariableRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->description_ == nullptr
        && this->displayName_ == nullptr && this->instanceId_ == nullptr && this->variableId_ == nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline UpdateVariableRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // displayName Field Functions 
    bool hasDisplayName() const { return this->displayName_ != nullptr;};
    void deleteDisplayName() { this->displayName_ = nullptr;};
    inline string getDisplayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
    inline UpdateVariableRequest& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline UpdateVariableRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // variableId Field Functions 
    bool hasVariableId() const { return this->variableId_ != nullptr;};
    void deleteVariableId() { this->variableId_ = nullptr;};
    inline string getVariableId() const { DARABONBA_PTR_GET_DEFAULT(variableId_, "") };
    inline UpdateVariableRequest& setVariableId(string variableId) { DARABONBA_PTR_SET_VALUE(variableId_, variableId) };


  protected:
    shared_ptr<string> description_ {};
    shared_ptr<string> displayName_ {};
    shared_ptr<string> instanceId_ {};
    shared_ptr<string> variableId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace VoiceNavigator20251111
#endif
