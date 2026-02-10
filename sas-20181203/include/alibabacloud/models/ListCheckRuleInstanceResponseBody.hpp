// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCHECKRULEINSTANCERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTCHECKRULEINSTANCERESPONSEBODY_HPP_
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
  class ListCheckRuleInstanceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListCheckRuleInstanceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AliUid, aliUid_);
      DARABONBA_PTR_TO_JSON(AssetSubType, assetSubType_);
      DARABONBA_PTR_TO_JSON(AssetType, assetType_);
      DARABONBA_PTR_TO_JSON(CheckId, checkId_);
      DARABONBA_PTR_TO_JSON(CheckRuleInstances, checkRuleInstances_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Vendor, vendor_);
    };
    friend void from_json(const Darabonba::Json& j, ListCheckRuleInstanceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AliUid, aliUid_);
      DARABONBA_PTR_FROM_JSON(AssetSubType, assetSubType_);
      DARABONBA_PTR_FROM_JSON(AssetType, assetType_);
      DARABONBA_PTR_FROM_JSON(CheckId, checkId_);
      DARABONBA_PTR_FROM_JSON(CheckRuleInstances, checkRuleInstances_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Vendor, vendor_);
    };
    ListCheckRuleInstanceResponseBody() = default ;
    ListCheckRuleInstanceResponseBody(const ListCheckRuleInstanceResponseBody &) = default ;
    ListCheckRuleInstanceResponseBody(ListCheckRuleInstanceResponseBody &&) = default ;
    ListCheckRuleInstanceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListCheckRuleInstanceResponseBody() = default ;
    ListCheckRuleInstanceResponseBody& operator=(const ListCheckRuleInstanceResponseBody &) = default ;
    ListCheckRuleInstanceResponseBody& operator=(ListCheckRuleInstanceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class CheckRuleInstances : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const CheckRuleInstances& obj) { 
        DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
        DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      };
      friend void from_json(const Darabonba::Json& j, CheckRuleInstances& obj) { 
        DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
        DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      };
      CheckRuleInstances() = default ;
      CheckRuleInstances(const CheckRuleInstances &) = default ;
      CheckRuleInstances(CheckRuleInstances &&) = default ;
      CheckRuleInstances(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~CheckRuleInstances() = default ;
      CheckRuleInstances& operator=(const CheckRuleInstances &) = default ;
      CheckRuleInstances& operator=(CheckRuleInstances &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->instanceId_ == nullptr
        && this->instanceName_ == nullptr && this->regionId_ == nullptr; };
      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline CheckRuleInstances& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // instanceName Field Functions 
      bool hasInstanceName() const { return this->instanceName_ != nullptr;};
      void deleteInstanceName() { this->instanceName_ = nullptr;};
      inline string getInstanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
      inline CheckRuleInstances& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


      // regionId Field Functions 
      bool hasRegionId() const { return this->regionId_ != nullptr;};
      void deleteRegionId() { this->regionId_ = nullptr;};
      inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
      inline CheckRuleInstances& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    protected:
      // The instance ID of the asset.
      shared_ptr<string> instanceId_ {};
      // The instance name of the asset.
      shared_ptr<string> instanceName_ {};
      // Region ID.
      shared_ptr<string> regionId_ {};
    };

    virtual bool empty() const override { return this->aliUid_ == nullptr
        && this->assetSubType_ == nullptr && this->assetType_ == nullptr && this->checkId_ == nullptr && this->checkRuleInstances_ == nullptr && this->requestId_ == nullptr
        && this->vendor_ == nullptr; };
    // aliUid Field Functions 
    bool hasAliUid() const { return this->aliUid_ != nullptr;};
    void deleteAliUid() { this->aliUid_ = nullptr;};
    inline string getAliUid() const { DARABONBA_PTR_GET_DEFAULT(aliUid_, "") };
    inline ListCheckRuleInstanceResponseBody& setAliUid(string aliUid) { DARABONBA_PTR_SET_VALUE(aliUid_, aliUid) };


    // assetSubType Field Functions 
    bool hasAssetSubType() const { return this->assetSubType_ != nullptr;};
    void deleteAssetSubType() { this->assetSubType_ = nullptr;};
    inline string getAssetSubType() const { DARABONBA_PTR_GET_DEFAULT(assetSubType_, "") };
    inline ListCheckRuleInstanceResponseBody& setAssetSubType(string assetSubType) { DARABONBA_PTR_SET_VALUE(assetSubType_, assetSubType) };


    // assetType Field Functions 
    bool hasAssetType() const { return this->assetType_ != nullptr;};
    void deleteAssetType() { this->assetType_ = nullptr;};
    inline string getAssetType() const { DARABONBA_PTR_GET_DEFAULT(assetType_, "") };
    inline ListCheckRuleInstanceResponseBody& setAssetType(string assetType) { DARABONBA_PTR_SET_VALUE(assetType_, assetType) };


    // checkId Field Functions 
    bool hasCheckId() const { return this->checkId_ != nullptr;};
    void deleteCheckId() { this->checkId_ = nullptr;};
    inline string getCheckId() const { DARABONBA_PTR_GET_DEFAULT(checkId_, "") };
    inline ListCheckRuleInstanceResponseBody& setCheckId(string checkId) { DARABONBA_PTR_SET_VALUE(checkId_, checkId) };


    // checkRuleInstances Field Functions 
    bool hasCheckRuleInstances() const { return this->checkRuleInstances_ != nullptr;};
    void deleteCheckRuleInstances() { this->checkRuleInstances_ = nullptr;};
    inline const vector<ListCheckRuleInstanceResponseBody::CheckRuleInstances> & getCheckRuleInstances() const { DARABONBA_PTR_GET_CONST(checkRuleInstances_, vector<ListCheckRuleInstanceResponseBody::CheckRuleInstances>) };
    inline vector<ListCheckRuleInstanceResponseBody::CheckRuleInstances> getCheckRuleInstances() { DARABONBA_PTR_GET(checkRuleInstances_, vector<ListCheckRuleInstanceResponseBody::CheckRuleInstances>) };
    inline ListCheckRuleInstanceResponseBody& setCheckRuleInstances(const vector<ListCheckRuleInstanceResponseBody::CheckRuleInstances> & checkRuleInstances) { DARABONBA_PTR_SET_VALUE(checkRuleInstances_, checkRuleInstances) };
    inline ListCheckRuleInstanceResponseBody& setCheckRuleInstances(vector<ListCheckRuleInstanceResponseBody::CheckRuleInstances> && checkRuleInstances) { DARABONBA_PTR_SET_RVALUE(checkRuleInstances_, checkRuleInstances) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListCheckRuleInstanceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // vendor Field Functions 
    bool hasVendor() const { return this->vendor_ != nullptr;};
    void deleteVendor() { this->vendor_ = nullptr;};
    inline string getVendor() const { DARABONBA_PTR_GET_DEFAULT(vendor_, "") };
    inline ListCheckRuleInstanceResponseBody& setVendor(string vendor) { DARABONBA_PTR_SET_VALUE(vendor_, vendor) };


  protected:
    // Alibaba Cloud account ID.
    shared_ptr<string> aliUid_ {};
    // Subtype of the cloud product.
    shared_ptr<string> assetSubType_ {};
    // Type of cloud assets.
    shared_ptr<string> assetType_ {};
    // Check item ID.
    shared_ptr<string> checkId_ {};
    // List of instance rule information.
    shared_ptr<vector<ListCheckRuleInstanceResponseBody::CheckRuleInstances>> checkRuleInstances_ {};
    // The ID of the current request, which is a unique identifier generated by Alibaba Cloud for the request and can be used for troubleshooting and problem localization.
    shared_ptr<string> requestId_ {};
    // Cloud vendor. Values:
    // - **ALIYUN**: Alibaba Cloud
    // - **TENCENT**: Tencent Cloud
    // - **MICROSOFT**: Microsoft
    // - **AWS**: Amazon Web Services (AWS)
    shared_ptr<string> vendor_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
