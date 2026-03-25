// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_IMPORTKMSSECRETSFORHOSTSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_IMPORTKMSSECRETSFORHOSTSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace YundunBastionhost20191209
{
namespace Models
{
  class ImportKMSSecretsForHostShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ImportKMSSecretsForHostShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(HostId, hostId_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(Secrets, secretsShrink_);
    };
    friend void from_json(const Darabonba::Json& j, ImportKMSSecretsForHostShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(HostId, hostId_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(Secrets, secretsShrink_);
    };
    ImportKMSSecretsForHostShrinkRequest() = default ;
    ImportKMSSecretsForHostShrinkRequest(const ImportKMSSecretsForHostShrinkRequest &) = default ;
    ImportKMSSecretsForHostShrinkRequest(ImportKMSSecretsForHostShrinkRequest &&) = default ;
    ImportKMSSecretsForHostShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ImportKMSSecretsForHostShrinkRequest() = default ;
    ImportKMSSecretsForHostShrinkRequest& operator=(const ImportKMSSecretsForHostShrinkRequest &) = default ;
    ImportKMSSecretsForHostShrinkRequest& operator=(ImportKMSSecretsForHostShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->hostId_ == nullptr
        && this->instanceId_ == nullptr && this->regionId_ == nullptr && this->secretsShrink_ == nullptr; };
    // hostId Field Functions 
    bool hasHostId() const { return this->hostId_ != nullptr;};
    void deleteHostId() { this->hostId_ = nullptr;};
    inline int32_t getHostId() const { DARABONBA_PTR_GET_DEFAULT(hostId_, 0) };
    inline ImportKMSSecretsForHostShrinkRequest& setHostId(int32_t hostId) { DARABONBA_PTR_SET_VALUE(hostId_, hostId) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ImportKMSSecretsForHostShrinkRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ImportKMSSecretsForHostShrinkRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // secretsShrink Field Functions 
    bool hasSecretsShrink() const { return this->secretsShrink_ != nullptr;};
    void deleteSecretsShrink() { this->secretsShrink_ = nullptr;};
    inline string getSecretsShrink() const { DARABONBA_PTR_GET_DEFAULT(secretsShrink_, "") };
    inline ImportKMSSecretsForHostShrinkRequest& setSecretsShrink(string secretsShrink) { DARABONBA_PTR_SET_VALUE(secretsShrink_, secretsShrink) };


  protected:
    // This parameter is required.
    shared_ptr<int32_t> hostId_ {};
    shared_ptr<string> instanceId_ {};
    shared_ptr<string> regionId_ {};
    shared_ptr<string> secretsShrink_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace YundunBastionhost20191209
#endif
