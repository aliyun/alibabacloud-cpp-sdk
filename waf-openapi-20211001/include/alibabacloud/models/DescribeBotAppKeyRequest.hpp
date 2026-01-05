// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEBOTAPPKEYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEBOTAPPKEYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class DescribeBotAppKeyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeBotAppKeyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(KeyVersion, keyVersion_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceManagerResourceGroupId, resourceManagerResourceGroupId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeBotAppKeyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(KeyVersion, keyVersion_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceManagerResourceGroupId, resourceManagerResourceGroupId_);
    };
    DescribeBotAppKeyRequest() = default ;
    DescribeBotAppKeyRequest(const DescribeBotAppKeyRequest &) = default ;
    DescribeBotAppKeyRequest(DescribeBotAppKeyRequest &&) = default ;
    DescribeBotAppKeyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeBotAppKeyRequest() = default ;
    DescribeBotAppKeyRequest& operator=(const DescribeBotAppKeyRequest &) = default ;
    DescribeBotAppKeyRequest& operator=(DescribeBotAppKeyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceId_ == nullptr
        && this->keyVersion_ == nullptr && this->regionId_ == nullptr && this->resourceManagerResourceGroupId_ == nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribeBotAppKeyRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // keyVersion Field Functions 
    bool hasKeyVersion() const { return this->keyVersion_ != nullptr;};
    void deleteKeyVersion() { this->keyVersion_ = nullptr;};
    inline string getKeyVersion() const { DARABONBA_PTR_GET_DEFAULT(keyVersion_, "") };
    inline DescribeBotAppKeyRequest& setKeyVersion(string keyVersion) { DARABONBA_PTR_SET_VALUE(keyVersion_, keyVersion) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeBotAppKeyRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceManagerResourceGroupId Field Functions 
    bool hasResourceManagerResourceGroupId() const { return this->resourceManagerResourceGroupId_ != nullptr;};
    void deleteResourceManagerResourceGroupId() { this->resourceManagerResourceGroupId_ = nullptr;};
    inline string getResourceManagerResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceManagerResourceGroupId_, "") };
    inline DescribeBotAppKeyRequest& setResourceManagerResourceGroupId(string resourceManagerResourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceManagerResourceGroupId_, resourceManagerResourceGroupId) };


  protected:
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    shared_ptr<string> keyVersion_ {};
    shared_ptr<string> regionId_ {};
    shared_ptr<string> resourceManagerResourceGroupId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
