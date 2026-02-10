// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETATTACKPATHSENSITIVEASSETCONFIGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETATTACKPATHSENSITIVEASSETCONFIGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class GetAttackPathSensitiveAssetConfigResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAttackPathSensitiveAssetConfigResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AttackPathSensitiveAssetConfig, attackPathSensitiveAssetConfig_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetAttackPathSensitiveAssetConfigResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AttackPathSensitiveAssetConfig, attackPathSensitiveAssetConfig_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetAttackPathSensitiveAssetConfigResponseBody() = default ;
    GetAttackPathSensitiveAssetConfigResponseBody(const GetAttackPathSensitiveAssetConfigResponseBody &) = default ;
    GetAttackPathSensitiveAssetConfigResponseBody(GetAttackPathSensitiveAssetConfigResponseBody &&) = default ;
    GetAttackPathSensitiveAssetConfigResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAttackPathSensitiveAssetConfigResponseBody() = default ;
    GetAttackPathSensitiveAssetConfigResponseBody& operator=(const GetAttackPathSensitiveAssetConfigResponseBody &) = default ;
    GetAttackPathSensitiveAssetConfigResponseBody& operator=(GetAttackPathSensitiveAssetConfigResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class AttackPathSensitiveAssetConfig : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AttackPathSensitiveAssetConfig& obj) { 
        DARABONBA_PTR_TO_JSON(AttackPathAssetList, attackPathAssetList_);
        DARABONBA_PTR_TO_JSON(AttackPathSensitiveAssetConfigId, attackPathSensitiveAssetConfigId_);
        DARABONBA_PTR_TO_JSON(ConfigType, configType_);
      };
      friend void from_json(const Darabonba::Json& j, AttackPathSensitiveAssetConfig& obj) { 
        DARABONBA_PTR_FROM_JSON(AttackPathAssetList, attackPathAssetList_);
        DARABONBA_PTR_FROM_JSON(AttackPathSensitiveAssetConfigId, attackPathSensitiveAssetConfigId_);
        DARABONBA_PTR_FROM_JSON(ConfigType, configType_);
      };
      AttackPathSensitiveAssetConfig() = default ;
      AttackPathSensitiveAssetConfig(const AttackPathSensitiveAssetConfig &) = default ;
      AttackPathSensitiveAssetConfig(AttackPathSensitiveAssetConfig &&) = default ;
      AttackPathSensitiveAssetConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AttackPathSensitiveAssetConfig() = default ;
      AttackPathSensitiveAssetConfig& operator=(const AttackPathSensitiveAssetConfig &) = default ;
      AttackPathSensitiveAssetConfig& operator=(AttackPathSensitiveAssetConfig &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class AttackPathAssetList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const AttackPathAssetList& obj) { 
          DARABONBA_PTR_TO_JSON(AssetSubType, assetSubType_);
          DARABONBA_PTR_TO_JSON(AssetType, assetType_);
          DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
          DARABONBA_PTR_TO_JSON(RegionId, regionId_);
          DARABONBA_PTR_TO_JSON(Vendor, vendor_);
        };
        friend void from_json(const Darabonba::Json& j, AttackPathAssetList& obj) { 
          DARABONBA_PTR_FROM_JSON(AssetSubType, assetSubType_);
          DARABONBA_PTR_FROM_JSON(AssetType, assetType_);
          DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
          DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
          DARABONBA_PTR_FROM_JSON(Vendor, vendor_);
        };
        AttackPathAssetList() = default ;
        AttackPathAssetList(const AttackPathAssetList &) = default ;
        AttackPathAssetList(AttackPathAssetList &&) = default ;
        AttackPathAssetList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~AttackPathAssetList() = default ;
        AttackPathAssetList& operator=(const AttackPathAssetList &) = default ;
        AttackPathAssetList& operator=(AttackPathAssetList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->assetSubType_ == nullptr
        && this->assetType_ == nullptr && this->instanceId_ == nullptr && this->instanceName_ == nullptr && this->regionId_ == nullptr && this->vendor_ == nullptr; };
        // assetSubType Field Functions 
        bool hasAssetSubType() const { return this->assetSubType_ != nullptr;};
        void deleteAssetSubType() { this->assetSubType_ = nullptr;};
        inline int32_t getAssetSubType() const { DARABONBA_PTR_GET_DEFAULT(assetSubType_, 0) };
        inline AttackPathAssetList& setAssetSubType(int32_t assetSubType) { DARABONBA_PTR_SET_VALUE(assetSubType_, assetSubType) };


        // assetType Field Functions 
        bool hasAssetType() const { return this->assetType_ != nullptr;};
        void deleteAssetType() { this->assetType_ = nullptr;};
        inline int32_t getAssetType() const { DARABONBA_PTR_GET_DEFAULT(assetType_, 0) };
        inline AttackPathAssetList& setAssetType(int32_t assetType) { DARABONBA_PTR_SET_VALUE(assetType_, assetType) };


        // instanceId Field Functions 
        bool hasInstanceId() const { return this->instanceId_ != nullptr;};
        void deleteInstanceId() { this->instanceId_ = nullptr;};
        inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
        inline AttackPathAssetList& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


        // instanceName Field Functions 
        bool hasInstanceName() const { return this->instanceName_ != nullptr;};
        void deleteInstanceName() { this->instanceName_ = nullptr;};
        inline string getInstanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
        inline AttackPathAssetList& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


        // regionId Field Functions 
        bool hasRegionId() const { return this->regionId_ != nullptr;};
        void deleteRegionId() { this->regionId_ = nullptr;};
        inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
        inline AttackPathAssetList& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


        // vendor Field Functions 
        bool hasVendor() const { return this->vendor_ != nullptr;};
        void deleteVendor() { this->vendor_ = nullptr;};
        inline int32_t getVendor() const { DARABONBA_PTR_GET_DEFAULT(vendor_, 0) };
        inline AttackPathAssetList& setVendor(int32_t vendor) { DARABONBA_PTR_SET_VALUE(vendor_, vendor) };


      protected:
        // Subtype of the cloud product asset.
        shared_ptr<int32_t> assetSubType_ {};
        // Type of the cloud product asset.
        shared_ptr<int32_t> assetType_ {};
        // Instance ID of the cloud product asset.
        shared_ptr<string> instanceId_ {};
        // Instance name of the cloud product asset.
        shared_ptr<string> instanceName_ {};
        // Region ID of the cloud product asset instance.
        shared_ptr<string> regionId_ {};
        // Vendor of the cloud product asset.
        shared_ptr<int32_t> vendor_ {};
      };

      virtual bool empty() const override { return this->attackPathAssetList_ == nullptr
        && this->attackPathSensitiveAssetConfigId_ == nullptr && this->configType_ == nullptr; };
      // attackPathAssetList Field Functions 
      bool hasAttackPathAssetList() const { return this->attackPathAssetList_ != nullptr;};
      void deleteAttackPathAssetList() { this->attackPathAssetList_ = nullptr;};
      inline const vector<AttackPathSensitiveAssetConfig::AttackPathAssetList> & getAttackPathAssetList() const { DARABONBA_PTR_GET_CONST(attackPathAssetList_, vector<AttackPathSensitiveAssetConfig::AttackPathAssetList>) };
      inline vector<AttackPathSensitiveAssetConfig::AttackPathAssetList> getAttackPathAssetList() { DARABONBA_PTR_GET(attackPathAssetList_, vector<AttackPathSensitiveAssetConfig::AttackPathAssetList>) };
      inline AttackPathSensitiveAssetConfig& setAttackPathAssetList(const vector<AttackPathSensitiveAssetConfig::AttackPathAssetList> & attackPathAssetList) { DARABONBA_PTR_SET_VALUE(attackPathAssetList_, attackPathAssetList) };
      inline AttackPathSensitiveAssetConfig& setAttackPathAssetList(vector<AttackPathSensitiveAssetConfig::AttackPathAssetList> && attackPathAssetList) { DARABONBA_PTR_SET_RVALUE(attackPathAssetList_, attackPathAssetList) };


      // attackPathSensitiveAssetConfigId Field Functions 
      bool hasAttackPathSensitiveAssetConfigId() const { return this->attackPathSensitiveAssetConfigId_ != nullptr;};
      void deleteAttackPathSensitiveAssetConfigId() { this->attackPathSensitiveAssetConfigId_ = nullptr;};
      inline string getAttackPathSensitiveAssetConfigId() const { DARABONBA_PTR_GET_DEFAULT(attackPathSensitiveAssetConfigId_, "") };
      inline AttackPathSensitiveAssetConfig& setAttackPathSensitiveAssetConfigId(string attackPathSensitiveAssetConfigId) { DARABONBA_PTR_SET_VALUE(attackPathSensitiveAssetConfigId_, attackPathSensitiveAssetConfigId) };


      // configType Field Functions 
      bool hasConfigType() const { return this->configType_ != nullptr;};
      void deleteConfigType() { this->configType_ = nullptr;};
      inline string getConfigType() const { DARABONBA_PTR_GET_DEFAULT(configType_, "") };
      inline AttackPathSensitiveAssetConfig& setConfigType(string configType) { DARABONBA_PTR_SET_VALUE(configType_, configType) };


    protected:
      // List of cloud product assets in the attack path.
      shared_ptr<vector<AttackPathSensitiveAssetConfig::AttackPathAssetList>> attackPathAssetList_ {};
      // ID of the attack path sensitive asset setting.
      shared_ptr<string> attackPathSensitiveAssetConfigId_ {};
      // Configuration type. Value range: - asset_instance: Asset.
      shared_ptr<string> configType_ {};
    };

    virtual bool empty() const override { return this->attackPathSensitiveAssetConfig_ == nullptr
        && this->requestId_ == nullptr; };
    // attackPathSensitiveAssetConfig Field Functions 
    bool hasAttackPathSensitiveAssetConfig() const { return this->attackPathSensitiveAssetConfig_ != nullptr;};
    void deleteAttackPathSensitiveAssetConfig() { this->attackPathSensitiveAssetConfig_ = nullptr;};
    inline const GetAttackPathSensitiveAssetConfigResponseBody::AttackPathSensitiveAssetConfig & getAttackPathSensitiveAssetConfig() const { DARABONBA_PTR_GET_CONST(attackPathSensitiveAssetConfig_, GetAttackPathSensitiveAssetConfigResponseBody::AttackPathSensitiveAssetConfig) };
    inline GetAttackPathSensitiveAssetConfigResponseBody::AttackPathSensitiveAssetConfig getAttackPathSensitiveAssetConfig() { DARABONBA_PTR_GET(attackPathSensitiveAssetConfig_, GetAttackPathSensitiveAssetConfigResponseBody::AttackPathSensitiveAssetConfig) };
    inline GetAttackPathSensitiveAssetConfigResponseBody& setAttackPathSensitiveAssetConfig(const GetAttackPathSensitiveAssetConfigResponseBody::AttackPathSensitiveAssetConfig & attackPathSensitiveAssetConfig) { DARABONBA_PTR_SET_VALUE(attackPathSensitiveAssetConfig_, attackPathSensitiveAssetConfig) };
    inline GetAttackPathSensitiveAssetConfigResponseBody& setAttackPathSensitiveAssetConfig(GetAttackPathSensitiveAssetConfigResponseBody::AttackPathSensitiveAssetConfig && attackPathSensitiveAssetConfig) { DARABONBA_PTR_SET_RVALUE(attackPathSensitiveAssetConfig_, attackPathSensitiveAssetConfig) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetAttackPathSensitiveAssetConfigResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // Data of the attack path sensitive asset configuration.
    shared_ptr<GetAttackPathSensitiveAssetConfigResponseBody::AttackPathSensitiveAssetConfig> attackPathSensitiveAssetConfig_ {};
    // The ID of this request, which is a unique identifier generated by Alibaba Cloud for this request and can be used to troubleshoot and locate issues.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
