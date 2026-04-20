// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEINSTRUCTIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEINSTRUCTIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace VoiceNavigator20251111
{
namespace Models
{
  class UpdateInstructionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateInstructionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Config, config_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateInstructionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Config, config_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    UpdateInstructionRequest() = default ;
    UpdateInstructionRequest(const UpdateInstructionRequest &) = default ;
    UpdateInstructionRequest(UpdateInstructionRequest &&) = default ;
    UpdateInstructionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateInstructionRequest() = default ;
    UpdateInstructionRequest& operator=(const UpdateInstructionRequest &) = default ;
    UpdateInstructionRequest& operator=(UpdateInstructionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->code_ == nullptr
        && this->config_ == nullptr && this->instanceId_ == nullptr && this->name_ == nullptr && this->type_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline UpdateInstructionRequest& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // config Field Functions 
    bool hasConfig() const { return this->config_ != nullptr;};
    void deleteConfig() { this->config_ = nullptr;};
    inline string getConfig() const { DARABONBA_PTR_GET_DEFAULT(config_, "") };
    inline UpdateInstructionRequest& setConfig(string config) { DARABONBA_PTR_SET_VALUE(config_, config) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline UpdateInstructionRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline UpdateInstructionRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline UpdateInstructionRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<string> config_ {};
    shared_ptr<string> instanceId_ {};
    shared_ptr<string> name_ {};
    shared_ptr<string> type_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace VoiceNavigator20251111
#endif
