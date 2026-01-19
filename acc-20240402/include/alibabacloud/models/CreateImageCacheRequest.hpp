// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEIMAGECACHEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEIMAGECACHEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Acc20240402
{
namespace Models
{
  class CreateImageCacheRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateImageCacheRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AcrRegistryInfos, acrRegistryInfos_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(ImageCacheName, imageCacheName_);
      DARABONBA_PTR_TO_JSON(ImageRegistryCredentials, imageRegistryCredentials_);
      DARABONBA_PTR_TO_JSON(Images, images_);
      DARABONBA_PTR_TO_JSON(NetworkConfig, networkConfig_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
    };
    friend void from_json(const Darabonba::Json& j, CreateImageCacheRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AcrRegistryInfos, acrRegistryInfos_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(ImageCacheName, imageCacheName_);
      DARABONBA_PTR_FROM_JSON(ImageRegistryCredentials, imageRegistryCredentials_);
      DARABONBA_PTR_FROM_JSON(Images, images_);
      DARABONBA_PTR_FROM_JSON(NetworkConfig, networkConfig_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
    };
    CreateImageCacheRequest() = default ;
    CreateImageCacheRequest(const CreateImageCacheRequest &) = default ;
    CreateImageCacheRequest(CreateImageCacheRequest &&) = default ;
    CreateImageCacheRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateImageCacheRequest() = default ;
    CreateImageCacheRequest& operator=(const CreateImageCacheRequest &) = default ;
    CreateImageCacheRequest& operator=(CreateImageCacheRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Tags : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Tags& obj) { 
        DARABONBA_PTR_TO_JSON(Key, key_);
        DARABONBA_PTR_TO_JSON(Value, value_);
      };
      friend void from_json(const Darabonba::Json& j, Tags& obj) { 
        DARABONBA_PTR_FROM_JSON(Key, key_);
        DARABONBA_PTR_FROM_JSON(Value, value_);
      };
      Tags() = default ;
      Tags(const Tags &) = default ;
      Tags(Tags &&) = default ;
      Tags(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Tags() = default ;
      Tags& operator=(const Tags &) = default ;
      Tags& operator=(Tags &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->key_ == nullptr
        && this->value_ == nullptr; };
      // key Field Functions 
      bool hasKey() const { return this->key_ != nullptr;};
      void deleteKey() { this->key_ = nullptr;};
      inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
      inline Tags& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


      // value Field Functions 
      bool hasValue() const { return this->value_ != nullptr;};
      void deleteValue() { this->value_ = nullptr;};
      inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
      inline Tags& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    protected:
      shared_ptr<string> key_ {};
      shared_ptr<string> value_ {};
    };

    class NetworkConfig : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const NetworkConfig& obj) { 
        DARABONBA_PTR_TO_JSON(EipInstance, eipInstance_);
        DARABONBA_PTR_TO_JSON(SecurityGroupId, securityGroupId_);
        DARABONBA_PTR_TO_JSON(VSwitchIds, vSwitchIds_);
      };
      friend void from_json(const Darabonba::Json& j, NetworkConfig& obj) { 
        DARABONBA_PTR_FROM_JSON(EipInstance, eipInstance_);
        DARABONBA_PTR_FROM_JSON(SecurityGroupId, securityGroupId_);
        DARABONBA_PTR_FROM_JSON(VSwitchIds, vSwitchIds_);
      };
      NetworkConfig() = default ;
      NetworkConfig(const NetworkConfig &) = default ;
      NetworkConfig(NetworkConfig &&) = default ;
      NetworkConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~NetworkConfig() = default ;
      NetworkConfig& operator=(const NetworkConfig &) = default ;
      NetworkConfig& operator=(NetworkConfig &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class EipInstance : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const EipInstance& obj) { 
          DARABONBA_PTR_TO_JSON(AutoCreate, autoCreate_);
          DARABONBA_PTR_TO_JSON(Bandwidth, bandwidth_);
          DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
        };
        friend void from_json(const Darabonba::Json& j, EipInstance& obj) { 
          DARABONBA_PTR_FROM_JSON(AutoCreate, autoCreate_);
          DARABONBA_PTR_FROM_JSON(Bandwidth, bandwidth_);
          DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
        };
        EipInstance() = default ;
        EipInstance(const EipInstance &) = default ;
        EipInstance(EipInstance &&) = default ;
        EipInstance(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~EipInstance() = default ;
        EipInstance& operator=(const EipInstance &) = default ;
        EipInstance& operator=(EipInstance &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->autoCreate_ == nullptr
        && this->bandwidth_ == nullptr && this->instanceId_ == nullptr; };
        // autoCreate Field Functions 
        bool hasAutoCreate() const { return this->autoCreate_ != nullptr;};
        void deleteAutoCreate() { this->autoCreate_ = nullptr;};
        inline bool getAutoCreate() const { DARABONBA_PTR_GET_DEFAULT(autoCreate_, false) };
        inline EipInstance& setAutoCreate(bool autoCreate) { DARABONBA_PTR_SET_VALUE(autoCreate_, autoCreate) };


        // bandwidth Field Functions 
        bool hasBandwidth() const { return this->bandwidth_ != nullptr;};
        void deleteBandwidth() { this->bandwidth_ = nullptr;};
        inline int32_t getBandwidth() const { DARABONBA_PTR_GET_DEFAULT(bandwidth_, 0) };
        inline EipInstance& setBandwidth(int32_t bandwidth) { DARABONBA_PTR_SET_VALUE(bandwidth_, bandwidth) };


        // instanceId Field Functions 
        bool hasInstanceId() const { return this->instanceId_ != nullptr;};
        void deleteInstanceId() { this->instanceId_ = nullptr;};
        inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
        inline EipInstance& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      protected:
        shared_ptr<bool> autoCreate_ {};
        shared_ptr<int32_t> bandwidth_ {};
        shared_ptr<string> instanceId_ {};
      };

      virtual bool empty() const override { return this->eipInstance_ == nullptr
        && this->securityGroupId_ == nullptr && this->vSwitchIds_ == nullptr; };
      // eipInstance Field Functions 
      bool hasEipInstance() const { return this->eipInstance_ != nullptr;};
      void deleteEipInstance() { this->eipInstance_ = nullptr;};
      inline const NetworkConfig::EipInstance & getEipInstance() const { DARABONBA_PTR_GET_CONST(eipInstance_, NetworkConfig::EipInstance) };
      inline NetworkConfig::EipInstance getEipInstance() { DARABONBA_PTR_GET(eipInstance_, NetworkConfig::EipInstance) };
      inline NetworkConfig& setEipInstance(const NetworkConfig::EipInstance & eipInstance) { DARABONBA_PTR_SET_VALUE(eipInstance_, eipInstance) };
      inline NetworkConfig& setEipInstance(NetworkConfig::EipInstance && eipInstance) { DARABONBA_PTR_SET_RVALUE(eipInstance_, eipInstance) };


      // securityGroupId Field Functions 
      bool hasSecurityGroupId() const { return this->securityGroupId_ != nullptr;};
      void deleteSecurityGroupId() { this->securityGroupId_ = nullptr;};
      inline string getSecurityGroupId() const { DARABONBA_PTR_GET_DEFAULT(securityGroupId_, "") };
      inline NetworkConfig& setSecurityGroupId(string securityGroupId) { DARABONBA_PTR_SET_VALUE(securityGroupId_, securityGroupId) };


      // vSwitchIds Field Functions 
      bool hasVSwitchIds() const { return this->vSwitchIds_ != nullptr;};
      void deleteVSwitchIds() { this->vSwitchIds_ = nullptr;};
      inline const vector<string> & getVSwitchIds() const { DARABONBA_PTR_GET_CONST(vSwitchIds_, vector<string>) };
      inline vector<string> getVSwitchIds() { DARABONBA_PTR_GET(vSwitchIds_, vector<string>) };
      inline NetworkConfig& setVSwitchIds(const vector<string> & vSwitchIds) { DARABONBA_PTR_SET_VALUE(vSwitchIds_, vSwitchIds) };
      inline NetworkConfig& setVSwitchIds(vector<string> && vSwitchIds) { DARABONBA_PTR_SET_RVALUE(vSwitchIds_, vSwitchIds) };


    protected:
      shared_ptr<NetworkConfig::EipInstance> eipInstance_ {};
      // This parameter is required.
      shared_ptr<string> securityGroupId_ {};
      // This parameter is required.
      shared_ptr<vector<string>> vSwitchIds_ {};
    };

    class ImageRegistryCredentials : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ImageRegistryCredentials& obj) { 
        DARABONBA_PTR_TO_JSON(Password, password_);
        DARABONBA_PTR_TO_JSON(Server, server_);
        DARABONBA_PTR_TO_JSON(SkipCertVerification, skipCertVerification_);
        DARABONBA_PTR_TO_JSON(UsePlainHttp, usePlainHttp_);
        DARABONBA_PTR_TO_JSON(Username, username_);
      };
      friend void from_json(const Darabonba::Json& j, ImageRegistryCredentials& obj) { 
        DARABONBA_PTR_FROM_JSON(Password, password_);
        DARABONBA_PTR_FROM_JSON(Server, server_);
        DARABONBA_PTR_FROM_JSON(SkipCertVerification, skipCertVerification_);
        DARABONBA_PTR_FROM_JSON(UsePlainHttp, usePlainHttp_);
        DARABONBA_PTR_FROM_JSON(Username, username_);
      };
      ImageRegistryCredentials() = default ;
      ImageRegistryCredentials(const ImageRegistryCredentials &) = default ;
      ImageRegistryCredentials(ImageRegistryCredentials &&) = default ;
      ImageRegistryCredentials(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ImageRegistryCredentials() = default ;
      ImageRegistryCredentials& operator=(const ImageRegistryCredentials &) = default ;
      ImageRegistryCredentials& operator=(ImageRegistryCredentials &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->password_ == nullptr
        && this->server_ == nullptr && this->skipCertVerification_ == nullptr && this->usePlainHttp_ == nullptr && this->username_ == nullptr; };
      // password Field Functions 
      bool hasPassword() const { return this->password_ != nullptr;};
      void deletePassword() { this->password_ = nullptr;};
      inline string getPassword() const { DARABONBA_PTR_GET_DEFAULT(password_, "") };
      inline ImageRegistryCredentials& setPassword(string password) { DARABONBA_PTR_SET_VALUE(password_, password) };


      // server Field Functions 
      bool hasServer() const { return this->server_ != nullptr;};
      void deleteServer() { this->server_ = nullptr;};
      inline string getServer() const { DARABONBA_PTR_GET_DEFAULT(server_, "") };
      inline ImageRegistryCredentials& setServer(string server) { DARABONBA_PTR_SET_VALUE(server_, server) };


      // skipCertVerification Field Functions 
      bool hasSkipCertVerification() const { return this->skipCertVerification_ != nullptr;};
      void deleteSkipCertVerification() { this->skipCertVerification_ = nullptr;};
      inline bool getSkipCertVerification() const { DARABONBA_PTR_GET_DEFAULT(skipCertVerification_, false) };
      inline ImageRegistryCredentials& setSkipCertVerification(bool skipCertVerification) { DARABONBA_PTR_SET_VALUE(skipCertVerification_, skipCertVerification) };


      // usePlainHttp Field Functions 
      bool hasUsePlainHttp() const { return this->usePlainHttp_ != nullptr;};
      void deleteUsePlainHttp() { this->usePlainHttp_ = nullptr;};
      inline bool getUsePlainHttp() const { DARABONBA_PTR_GET_DEFAULT(usePlainHttp_, false) };
      inline ImageRegistryCredentials& setUsePlainHttp(bool usePlainHttp) { DARABONBA_PTR_SET_VALUE(usePlainHttp_, usePlainHttp) };


      // username Field Functions 
      bool hasUsername() const { return this->username_ != nullptr;};
      void deleteUsername() { this->username_ = nullptr;};
      inline string getUsername() const { DARABONBA_PTR_GET_DEFAULT(username_, "") };
      inline ImageRegistryCredentials& setUsername(string username) { DARABONBA_PTR_SET_VALUE(username_, username) };


    protected:
      shared_ptr<string> password_ {};
      shared_ptr<string> server_ {};
      shared_ptr<bool> skipCertVerification_ {};
      shared_ptr<bool> usePlainHttp_ {};
      shared_ptr<string> username_ {};
    };

    class AcrRegistryInfos : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AcrRegistryInfos& obj) { 
        DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      };
      friend void from_json(const Darabonba::Json& j, AcrRegistryInfos& obj) { 
        DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      };
      AcrRegistryInfos() = default ;
      AcrRegistryInfos(const AcrRegistryInfos &) = default ;
      AcrRegistryInfos(AcrRegistryInfos &&) = default ;
      AcrRegistryInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AcrRegistryInfos() = default ;
      AcrRegistryInfos& operator=(const AcrRegistryInfos &) = default ;
      AcrRegistryInfos& operator=(AcrRegistryInfos &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->instanceId_ == nullptr
        && this->regionId_ == nullptr; };
      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline AcrRegistryInfos& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // regionId Field Functions 
      bool hasRegionId() const { return this->regionId_ != nullptr;};
      void deleteRegionId() { this->regionId_ = nullptr;};
      inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
      inline AcrRegistryInfos& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    protected:
      shared_ptr<string> instanceId_ {};
      shared_ptr<string> regionId_ {};
    };

    virtual bool empty() const override { return this->acrRegistryInfos_ == nullptr
        && this->clientToken_ == nullptr && this->imageCacheName_ == nullptr && this->imageRegistryCredentials_ == nullptr && this->images_ == nullptr && this->networkConfig_ == nullptr
        && this->regionId_ == nullptr && this->resourceGroupId_ == nullptr && this->tags_ == nullptr; };
    // acrRegistryInfos Field Functions 
    bool hasAcrRegistryInfos() const { return this->acrRegistryInfos_ != nullptr;};
    void deleteAcrRegistryInfos() { this->acrRegistryInfos_ = nullptr;};
    inline const vector<CreateImageCacheRequest::AcrRegistryInfos> & getAcrRegistryInfos() const { DARABONBA_PTR_GET_CONST(acrRegistryInfos_, vector<CreateImageCacheRequest::AcrRegistryInfos>) };
    inline vector<CreateImageCacheRequest::AcrRegistryInfos> getAcrRegistryInfos() { DARABONBA_PTR_GET(acrRegistryInfos_, vector<CreateImageCacheRequest::AcrRegistryInfos>) };
    inline CreateImageCacheRequest& setAcrRegistryInfos(const vector<CreateImageCacheRequest::AcrRegistryInfos> & acrRegistryInfos) { DARABONBA_PTR_SET_VALUE(acrRegistryInfos_, acrRegistryInfos) };
    inline CreateImageCacheRequest& setAcrRegistryInfos(vector<CreateImageCacheRequest::AcrRegistryInfos> && acrRegistryInfos) { DARABONBA_PTR_SET_RVALUE(acrRegistryInfos_, acrRegistryInfos) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateImageCacheRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // imageCacheName Field Functions 
    bool hasImageCacheName() const { return this->imageCacheName_ != nullptr;};
    void deleteImageCacheName() { this->imageCacheName_ = nullptr;};
    inline string getImageCacheName() const { DARABONBA_PTR_GET_DEFAULT(imageCacheName_, "") };
    inline CreateImageCacheRequest& setImageCacheName(string imageCacheName) { DARABONBA_PTR_SET_VALUE(imageCacheName_, imageCacheName) };


    // imageRegistryCredentials Field Functions 
    bool hasImageRegistryCredentials() const { return this->imageRegistryCredentials_ != nullptr;};
    void deleteImageRegistryCredentials() { this->imageRegistryCredentials_ = nullptr;};
    inline const vector<CreateImageCacheRequest::ImageRegistryCredentials> & getImageRegistryCredentials() const { DARABONBA_PTR_GET_CONST(imageRegistryCredentials_, vector<CreateImageCacheRequest::ImageRegistryCredentials>) };
    inline vector<CreateImageCacheRequest::ImageRegistryCredentials> getImageRegistryCredentials() { DARABONBA_PTR_GET(imageRegistryCredentials_, vector<CreateImageCacheRequest::ImageRegistryCredentials>) };
    inline CreateImageCacheRequest& setImageRegistryCredentials(const vector<CreateImageCacheRequest::ImageRegistryCredentials> & imageRegistryCredentials) { DARABONBA_PTR_SET_VALUE(imageRegistryCredentials_, imageRegistryCredentials) };
    inline CreateImageCacheRequest& setImageRegistryCredentials(vector<CreateImageCacheRequest::ImageRegistryCredentials> && imageRegistryCredentials) { DARABONBA_PTR_SET_RVALUE(imageRegistryCredentials_, imageRegistryCredentials) };


    // images Field Functions 
    bool hasImages() const { return this->images_ != nullptr;};
    void deleteImages() { this->images_ = nullptr;};
    inline const vector<string> & getImages() const { DARABONBA_PTR_GET_CONST(images_, vector<string>) };
    inline vector<string> getImages() { DARABONBA_PTR_GET(images_, vector<string>) };
    inline CreateImageCacheRequest& setImages(const vector<string> & images) { DARABONBA_PTR_SET_VALUE(images_, images) };
    inline CreateImageCacheRequest& setImages(vector<string> && images) { DARABONBA_PTR_SET_RVALUE(images_, images) };


    // networkConfig Field Functions 
    bool hasNetworkConfig() const { return this->networkConfig_ != nullptr;};
    void deleteNetworkConfig() { this->networkConfig_ = nullptr;};
    inline const CreateImageCacheRequest::NetworkConfig & getNetworkConfig() const { DARABONBA_PTR_GET_CONST(networkConfig_, CreateImageCacheRequest::NetworkConfig) };
    inline CreateImageCacheRequest::NetworkConfig getNetworkConfig() { DARABONBA_PTR_GET(networkConfig_, CreateImageCacheRequest::NetworkConfig) };
    inline CreateImageCacheRequest& setNetworkConfig(const CreateImageCacheRequest::NetworkConfig & networkConfig) { DARABONBA_PTR_SET_VALUE(networkConfig_, networkConfig) };
    inline CreateImageCacheRequest& setNetworkConfig(CreateImageCacheRequest::NetworkConfig && networkConfig) { DARABONBA_PTR_SET_RVALUE(networkConfig_, networkConfig) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateImageCacheRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline CreateImageCacheRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<CreateImageCacheRequest::Tags> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<CreateImageCacheRequest::Tags>) };
    inline vector<CreateImageCacheRequest::Tags> getTags() { DARABONBA_PTR_GET(tags_, vector<CreateImageCacheRequest::Tags>) };
    inline CreateImageCacheRequest& setTags(const vector<CreateImageCacheRequest::Tags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline CreateImageCacheRequest& setTags(vector<CreateImageCacheRequest::Tags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


  protected:
    shared_ptr<vector<CreateImageCacheRequest::AcrRegistryInfos>> acrRegistryInfos_ {};
    shared_ptr<string> clientToken_ {};
    // This parameter is required.
    shared_ptr<string> imageCacheName_ {};
    shared_ptr<vector<CreateImageCacheRequest::ImageRegistryCredentials>> imageRegistryCredentials_ {};
    // This parameter is required.
    shared_ptr<vector<string>> images_ {};
    // This parameter is required.
    shared_ptr<CreateImageCacheRequest::NetworkConfig> networkConfig_ {};
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    shared_ptr<string> resourceGroupId_ {};
    shared_ptr<vector<CreateImageCacheRequest::Tags>> tags_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Acc20240402
#endif
