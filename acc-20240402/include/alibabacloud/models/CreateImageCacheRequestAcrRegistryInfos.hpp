// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEIMAGECACHEREQUESTACRREGISTRYINFOS_HPP_
#define ALIBABACLOUD_MODELS_CREATEIMAGECACHEREQUESTACRREGISTRYINFOS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Acc20240402
{
namespace Models
{
  class CreateImageCacheRequestAcrRegistryInfos : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateImageCacheRequestAcrRegistryInfos& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateImageCacheRequestAcrRegistryInfos& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    CreateImageCacheRequestAcrRegistryInfos() = default ;
    CreateImageCacheRequestAcrRegistryInfos(const CreateImageCacheRequestAcrRegistryInfos &) = default ;
    CreateImageCacheRequestAcrRegistryInfos(CreateImageCacheRequestAcrRegistryInfos &&) = default ;
    CreateImageCacheRequestAcrRegistryInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateImageCacheRequestAcrRegistryInfos() = default ;
    CreateImageCacheRequestAcrRegistryInfos& operator=(const CreateImageCacheRequestAcrRegistryInfos &) = default ;
    CreateImageCacheRequestAcrRegistryInfos& operator=(CreateImageCacheRequestAcrRegistryInfos &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->instanceId_ != nullptr
        && this->regionId_ != nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline CreateImageCacheRequestAcrRegistryInfos& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateImageCacheRequestAcrRegistryInfos& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    std::shared_ptr<string> instanceId_ = nullptr;
    std::shared_ptr<string> regionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Acc20240402
#endif
