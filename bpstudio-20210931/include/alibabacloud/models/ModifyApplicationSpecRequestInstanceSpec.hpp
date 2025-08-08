// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYAPPLICATIONSPECREQUESTINSTANCESPEC_HPP_
#define ALIBABACLOUD_MODELS_MODIFYAPPLICATIONSPECREQUESTINSTANCESPEC_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BPStudio20210931
{
namespace Models
{
  class ModifyApplicationSpecRequestInstanceSpec : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyApplicationSpecRequestInstanceSpec& obj) { 
      DARABONBA_ANY_TO_JSON(Configuration, configuration_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyApplicationSpecRequestInstanceSpec& obj) { 
      DARABONBA_ANY_FROM_JSON(Configuration, configuration_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
    };
    ModifyApplicationSpecRequestInstanceSpec() = default ;
    ModifyApplicationSpecRequestInstanceSpec(const ModifyApplicationSpecRequestInstanceSpec &) = default ;
    ModifyApplicationSpecRequestInstanceSpec(ModifyApplicationSpecRequestInstanceSpec &&) = default ;
    ModifyApplicationSpecRequestInstanceSpec(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyApplicationSpecRequestInstanceSpec() = default ;
    ModifyApplicationSpecRequestInstanceSpec& operator=(const ModifyApplicationSpecRequestInstanceSpec &) = default ;
    ModifyApplicationSpecRequestInstanceSpec& operator=(ModifyApplicationSpecRequestInstanceSpec &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->configuration_ != nullptr
        && this->instanceId_ != nullptr; };
    // configuration Field Functions 
    bool hasConfiguration() const { return this->configuration_ != nullptr;};
    void deleteConfiguration() { this->configuration_ = nullptr;};
    inline     const Darabonba::Json & configuration() const { DARABONBA_GET(configuration_) };
    Darabonba::Json & configuration() { DARABONBA_GET(configuration_) };
    inline ModifyApplicationSpecRequestInstanceSpec& setConfiguration(const Darabonba::Json & configuration) { DARABONBA_SET_VALUE(configuration_, configuration) };
    inline ModifyApplicationSpecRequestInstanceSpec& setConfiguration(Darabonba::Json & configuration) { DARABONBA_SET_RVALUE(configuration_, configuration) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ModifyApplicationSpecRequestInstanceSpec& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


  protected:
    Darabonba::Json configuration_ = nullptr;
    std::shared_ptr<string> instanceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BPStudio20210931
#endif
