// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESOURCEREQUESTNACOSSOURCECONFIG_HPP_
#define ALIBABACLOUD_MODELS_CREATESOURCEREQUESTNACOSSOURCECONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class CreateSourceRequestNacosSourceConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateSourceRequestNacosSourceConfig& obj) { 
      DARABONBA_PTR_TO_JSON(instanceId, instanceId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateSourceRequestNacosSourceConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(instanceId, instanceId_);
    };
    CreateSourceRequestNacosSourceConfig() = default ;
    CreateSourceRequestNacosSourceConfig(const CreateSourceRequestNacosSourceConfig &) = default ;
    CreateSourceRequestNacosSourceConfig(CreateSourceRequestNacosSourceConfig &&) = default ;
    CreateSourceRequestNacosSourceConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateSourceRequestNacosSourceConfig() = default ;
    CreateSourceRequestNacosSourceConfig& operator=(const CreateSourceRequestNacosSourceConfig &) = default ;
    CreateSourceRequestNacosSourceConfig& operator=(CreateSourceRequestNacosSourceConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceId_ == nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline CreateSourceRequestNacosSourceConfig& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


  protected:
    std::shared_ptr<string> instanceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
