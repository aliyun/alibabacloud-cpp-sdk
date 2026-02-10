// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEATTACKPATHWHITELISTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEATTACKPATHWHITELISTREQUEST_HPP_
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
  class CreateAttackPathWhitelistRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateAttackPathWhitelistRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AttackPathAssetList, attackPathAssetList_);
      DARABONBA_PTR_TO_JSON(PathName, pathName_);
      DARABONBA_PTR_TO_JSON(PathType, pathType_);
      DARABONBA_PTR_TO_JSON(Remark, remark_);
      DARABONBA_PTR_TO_JSON(WhitelistName, whitelistName_);
      DARABONBA_PTR_TO_JSON(WhitelistType, whitelistType_);
    };
    friend void from_json(const Darabonba::Json& j, CreateAttackPathWhitelistRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AttackPathAssetList, attackPathAssetList_);
      DARABONBA_PTR_FROM_JSON(PathName, pathName_);
      DARABONBA_PTR_FROM_JSON(PathType, pathType_);
      DARABONBA_PTR_FROM_JSON(Remark, remark_);
      DARABONBA_PTR_FROM_JSON(WhitelistName, whitelistName_);
      DARABONBA_PTR_FROM_JSON(WhitelistType, whitelistType_);
    };
    CreateAttackPathWhitelistRequest() = default ;
    CreateAttackPathWhitelistRequest(const CreateAttackPathWhitelistRequest &) = default ;
    CreateAttackPathWhitelistRequest(CreateAttackPathWhitelistRequest &&) = default ;
    CreateAttackPathWhitelistRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateAttackPathWhitelistRequest() = default ;
    CreateAttackPathWhitelistRequest& operator=(const CreateAttackPathWhitelistRequest &) = default ;
    CreateAttackPathWhitelistRequest& operator=(CreateAttackPathWhitelistRequest &&) = default ;
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
        DARABONBA_PTR_TO_JSON(NodeType, nodeType_);
        DARABONBA_PTR_TO_JSON(RegionId, regionId_);
        DARABONBA_PTR_TO_JSON(Vendor, vendor_);
      };
      friend void from_json(const Darabonba::Json& j, AttackPathAssetList& obj) { 
        DARABONBA_PTR_FROM_JSON(AssetSubType, assetSubType_);
        DARABONBA_PTR_FROM_JSON(AssetType, assetType_);
        DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(NodeType, nodeType_);
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
        && this->assetType_ == nullptr && this->instanceId_ == nullptr && this->nodeType_ == nullptr && this->regionId_ == nullptr && this->vendor_ == nullptr; };
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


      // nodeType Field Functions 
      bool hasNodeType() const { return this->nodeType_ != nullptr;};
      void deleteNodeType() { this->nodeType_ = nullptr;};
      inline string getNodeType() const { DARABONBA_PTR_GET_DEFAULT(nodeType_, "") };
      inline AttackPathAssetList& setNodeType(string nodeType) { DARABONBA_PTR_SET_VALUE(nodeType_, nodeType) };


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
      // 
      // > You can call [ListCloudAssetInstances](~~ListCloudAssetInstances~~) to query the subtype of the cloud product asset.
      shared_ptr<int32_t> assetSubType_ {};
      // Type of the cloud product asset.
      // 
      // > You can call [ListCloudAssetInstances](~~ListCloudAssetInstances~~) to query the type of the cloud product asset.
      shared_ptr<int32_t> assetType_ {};
      // Cloud product asset instance ID.
      // 
      // > You can call [ListCloudAssetInstances](~~ListCloudAssetInstances~~) to query the cloud product asset instance ID.
      shared_ptr<string> instanceId_ {};
      // Node type, with values:
      // - **start**: Start point.
      // - **end**: End point.
      shared_ptr<string> nodeType_ {};
      // Region ID of the cloud product asset instance.
      // 
      // > You can call [ListCloudAssetInstances](~~ListCloudAssetInstances~~) to query the region ID of the cloud product asset instance.
      shared_ptr<string> regionId_ {};
      // Vendor of the cloud product asset.
      // 
      // > You can call [ListCloudAssetInstances](~~ListCloudAssetInstances~~) to query the vendor of the cloud product asset.
      shared_ptr<int32_t> vendor_ {};
    };

    virtual bool empty() const override { return this->attackPathAssetList_ == nullptr
        && this->pathName_ == nullptr && this->pathType_ == nullptr && this->remark_ == nullptr && this->whitelistName_ == nullptr && this->whitelistType_ == nullptr; };
    // attackPathAssetList Field Functions 
    bool hasAttackPathAssetList() const { return this->attackPathAssetList_ != nullptr;};
    void deleteAttackPathAssetList() { this->attackPathAssetList_ = nullptr;};
    inline const vector<CreateAttackPathWhitelistRequest::AttackPathAssetList> & getAttackPathAssetList() const { DARABONBA_PTR_GET_CONST(attackPathAssetList_, vector<CreateAttackPathWhitelistRequest::AttackPathAssetList>) };
    inline vector<CreateAttackPathWhitelistRequest::AttackPathAssetList> getAttackPathAssetList() { DARABONBA_PTR_GET(attackPathAssetList_, vector<CreateAttackPathWhitelistRequest::AttackPathAssetList>) };
    inline CreateAttackPathWhitelistRequest& setAttackPathAssetList(const vector<CreateAttackPathWhitelistRequest::AttackPathAssetList> & attackPathAssetList) { DARABONBA_PTR_SET_VALUE(attackPathAssetList_, attackPathAssetList) };
    inline CreateAttackPathWhitelistRequest& setAttackPathAssetList(vector<CreateAttackPathWhitelistRequest::AttackPathAssetList> && attackPathAssetList) { DARABONBA_PTR_SET_RVALUE(attackPathAssetList_, attackPathAssetList) };


    // pathName Field Functions 
    bool hasPathName() const { return this->pathName_ != nullptr;};
    void deletePathName() { this->pathName_ = nullptr;};
    inline string getPathName() const { DARABONBA_PTR_GET_DEFAULT(pathName_, "") };
    inline CreateAttackPathWhitelistRequest& setPathName(string pathName) { DARABONBA_PTR_SET_VALUE(pathName_, pathName) };


    // pathType Field Functions 
    bool hasPathType() const { return this->pathType_ != nullptr;};
    void deletePathType() { this->pathType_ = nullptr;};
    inline string getPathType() const { DARABONBA_PTR_GET_DEFAULT(pathType_, "") };
    inline CreateAttackPathWhitelistRequest& setPathType(string pathType) { DARABONBA_PTR_SET_VALUE(pathType_, pathType) };


    // remark Field Functions 
    bool hasRemark() const { return this->remark_ != nullptr;};
    void deleteRemark() { this->remark_ = nullptr;};
    inline string getRemark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
    inline CreateAttackPathWhitelistRequest& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


    // whitelistName Field Functions 
    bool hasWhitelistName() const { return this->whitelistName_ != nullptr;};
    void deleteWhitelistName() { this->whitelistName_ = nullptr;};
    inline string getWhitelistName() const { DARABONBA_PTR_GET_DEFAULT(whitelistName_, "") };
    inline CreateAttackPathWhitelistRequest& setWhitelistName(string whitelistName) { DARABONBA_PTR_SET_VALUE(whitelistName_, whitelistName) };


    // whitelistType Field Functions 
    bool hasWhitelistType() const { return this->whitelistType_ != nullptr;};
    void deleteWhitelistType() { this->whitelistType_ = nullptr;};
    inline string getWhitelistType() const { DARABONBA_PTR_GET_DEFAULT(whitelistType_, "") };
    inline CreateAttackPathWhitelistRequest& setWhitelistType(string whitelistType) { DARABONBA_PTR_SET_VALUE(whitelistType_, whitelistType) };


  protected:
    // List of cloud product assets in the attack path.
    shared_ptr<vector<CreateAttackPathWhitelistRequest::AttackPathAssetList>> attackPathAssetList_ {};
    // Path name.
    // 
    // > You can call [ListAvailableAttackPath](~~ListAvailableAttackPath~~) to query the path name.
    shared_ptr<string> pathName_ {};
    // Path type.
    // > You can call [ListAvailableAttackPath](~~ListAvailableAttackPath~~) to query the path type.
    // 
    // This parameter is required.
    shared_ptr<string> pathType_ {};
    // Remark information.
    shared_ptr<string> remark_ {};
    // Whitelist name.
    // 
    // This parameter is required.
    shared_ptr<string> whitelistName_ {};
    // Whitelist type. Values:
    // 
    // - **ALL_ASSET**: All assets
    // - **PART_ASSET**: Partial assets
    // 
    // This parameter is required.
    shared_ptr<string> whitelistType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
