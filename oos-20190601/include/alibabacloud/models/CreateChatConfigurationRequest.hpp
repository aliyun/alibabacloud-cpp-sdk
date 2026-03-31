// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECHATCONFIGURATIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATECHATCONFIGURATIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Oos20190601
{
namespace Models
{
  class CreateChatConfigurationRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateChatConfigurationRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Configuration, configuration_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(RamRole, ramRole_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, CreateChatConfigurationRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Configuration, configuration_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(RamRole, ramRole_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    CreateChatConfigurationRequest() = default ;
    CreateChatConfigurationRequest(const CreateChatConfigurationRequest &) = default ;
    CreateChatConfigurationRequest(CreateChatConfigurationRequest &&) = default ;
    CreateChatConfigurationRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateChatConfigurationRequest() = default ;
    CreateChatConfigurationRequest& operator=(const CreateChatConfigurationRequest &) = default ;
    CreateChatConfigurationRequest& operator=(CreateChatConfigurationRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->configuration_ == nullptr
        && this->name_ == nullptr && this->ramRole_ == nullptr && this->regionId_ == nullptr && this->resourceGroupId_ == nullptr && this->type_ == nullptr; };
    // configuration Field Functions 
    bool hasConfiguration() const { return this->configuration_ != nullptr;};
    void deleteConfiguration() { this->configuration_ = nullptr;};
    inline string getConfiguration() const { DARABONBA_PTR_GET_DEFAULT(configuration_, "") };
    inline CreateChatConfigurationRequest& setConfiguration(string configuration) { DARABONBA_PTR_SET_VALUE(configuration_, configuration) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateChatConfigurationRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // ramRole Field Functions 
    bool hasRamRole() const { return this->ramRole_ != nullptr;};
    void deleteRamRole() { this->ramRole_ = nullptr;};
    inline string getRamRole() const { DARABONBA_PTR_GET_DEFAULT(ramRole_, "") };
    inline CreateChatConfigurationRequest& setRamRole(string ramRole) { DARABONBA_PTR_SET_VALUE(ramRole_, ramRole) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateChatConfigurationRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline CreateChatConfigurationRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline CreateChatConfigurationRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    shared_ptr<string> configuration_ {};
    shared_ptr<string> name_ {};
    shared_ptr<string> ramRole_ {};
    shared_ptr<string> regionId_ {};
    shared_ptr<string> resourceGroupId_ {};
    shared_ptr<string> type_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Oos20190601
#endif
