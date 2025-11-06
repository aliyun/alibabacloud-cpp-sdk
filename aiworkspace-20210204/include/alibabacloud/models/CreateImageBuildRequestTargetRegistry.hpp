// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEIMAGEBUILDREQUESTTARGETREGISTRY_HPP_
#define ALIBABACLOUD_MODELS_CREATEIMAGEBUILDREQUESTTARGETREGISTRY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AIWorkSpace20210204
{
namespace Models
{
  class CreateImageBuildRequestTargetRegistry : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateImageBuildRequestTargetRegistry& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, CreateImageBuildRequestTargetRegistry& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    CreateImageBuildRequestTargetRegistry() = default ;
    CreateImageBuildRequestTargetRegistry(const CreateImageBuildRequestTargetRegistry &) = default ;
    CreateImageBuildRequestTargetRegistry(CreateImageBuildRequestTargetRegistry &&) = default ;
    CreateImageBuildRequestTargetRegistry(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateImageBuildRequestTargetRegistry() = default ;
    CreateImageBuildRequestTargetRegistry& operator=(const CreateImageBuildRequestTargetRegistry &) = default ;
    CreateImageBuildRequestTargetRegistry& operator=(CreateImageBuildRequestTargetRegistry &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceId_ == nullptr
        && return this->type_ == nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline CreateImageBuildRequestTargetRegistry& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline CreateImageBuildRequestTargetRegistry& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    std::shared_ptr<string> instanceId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AIWorkSpace20210204
#endif
