// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ATTACHASSETGROUPTOINSTANCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ATTACHASSETGROUPTOINSTANCEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddosbgp20180720
{
namespace Models
{
  class AttachAssetGroupToInstanceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AttachAssetGroupToInstanceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AssetGroupList, assetGroupList_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, AttachAssetGroupToInstanceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AssetGroupList, assetGroupList_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    AttachAssetGroupToInstanceRequest() = default ;
    AttachAssetGroupToInstanceRequest(const AttachAssetGroupToInstanceRequest &) = default ;
    AttachAssetGroupToInstanceRequest(AttachAssetGroupToInstanceRequest &&) = default ;
    AttachAssetGroupToInstanceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AttachAssetGroupToInstanceRequest() = default ;
    AttachAssetGroupToInstanceRequest& operator=(const AttachAssetGroupToInstanceRequest &) = default ;
    AttachAssetGroupToInstanceRequest& operator=(AttachAssetGroupToInstanceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class AssetGroupList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AssetGroupList& obj) { 
        DARABONBA_PTR_TO_JSON(MemberUid, memberUid_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(Region, region_);
        DARABONBA_PTR_TO_JSON(Type, type_);
      };
      friend void from_json(const Darabonba::Json& j, AssetGroupList& obj) { 
        DARABONBA_PTR_FROM_JSON(MemberUid, memberUid_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(Region, region_);
        DARABONBA_PTR_FROM_JSON(Type, type_);
      };
      AssetGroupList() = default ;
      AssetGroupList(const AssetGroupList &) = default ;
      AssetGroupList(AssetGroupList &&) = default ;
      AssetGroupList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AssetGroupList() = default ;
      AssetGroupList& operator=(const AssetGroupList &) = default ;
      AssetGroupList& operator=(AssetGroupList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->memberUid_ == nullptr
        && this->name_ == nullptr && this->region_ == nullptr && this->type_ == nullptr; };
      // memberUid Field Functions 
      bool hasMemberUid() const { return this->memberUid_ != nullptr;};
      void deleteMemberUid() { this->memberUid_ = nullptr;};
      inline string getMemberUid() const { DARABONBA_PTR_GET_DEFAULT(memberUid_, "") };
      inline AssetGroupList& setMemberUid(string memberUid) { DARABONBA_PTR_SET_VALUE(memberUid_, memberUid) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline AssetGroupList& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // region Field Functions 
      bool hasRegion() const { return this->region_ != nullptr;};
      void deleteRegion() { this->region_ = nullptr;};
      inline string getRegion() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
      inline AssetGroupList& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline AssetGroupList& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    protected:
      // The UID of the member to which the asset belongs.
      shared_ptr<string> memberUid_ {};
      // The ID of the asset that you want to add. If the asset is a Web Application Firewall (WAF) instance, specify the ID of the WAF instance.
      // 
      // This parameter is required.
      shared_ptr<string> name_ {};
      // The region ID of the asset.
      // 
      // This parameter is required.
      shared_ptr<string> region_ {};
      // The type of the asset.
      // 
      // This parameter is required.
      shared_ptr<string> type_ {};
    };

    virtual bool empty() const override { return this->assetGroupList_ == nullptr
        && this->instanceId_ == nullptr && this->regionId_ == nullptr; };
    // assetGroupList Field Functions 
    bool hasAssetGroupList() const { return this->assetGroupList_ != nullptr;};
    void deleteAssetGroupList() { this->assetGroupList_ = nullptr;};
    inline const vector<AttachAssetGroupToInstanceRequest::AssetGroupList> & getAssetGroupList() const { DARABONBA_PTR_GET_CONST(assetGroupList_, vector<AttachAssetGroupToInstanceRequest::AssetGroupList>) };
    inline vector<AttachAssetGroupToInstanceRequest::AssetGroupList> getAssetGroupList() { DARABONBA_PTR_GET(assetGroupList_, vector<AttachAssetGroupToInstanceRequest::AssetGroupList>) };
    inline AttachAssetGroupToInstanceRequest& setAssetGroupList(const vector<AttachAssetGroupToInstanceRequest::AssetGroupList> & assetGroupList) { DARABONBA_PTR_SET_VALUE(assetGroupList_, assetGroupList) };
    inline AttachAssetGroupToInstanceRequest& setAssetGroupList(vector<AttachAssetGroupToInstanceRequest::AssetGroupList> && assetGroupList) { DARABONBA_PTR_SET_RVALUE(assetGroupList_, assetGroupList) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline AttachAssetGroupToInstanceRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline AttachAssetGroupToInstanceRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The information about the asset to be associated.
    // 
    // This parameter is required.
    shared_ptr<vector<AttachAssetGroupToInstanceRequest::AssetGroupList>> assetGroupList_ {};
    // The ID of the instance to query.
    // 
    // >  You can call the [DescribeInstanceList](https://help.aliyun.com/document_detail/118698.html) operation to query the IDs of all Anti-DDoS Origin instances of paid editions.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // The ID of the region in which the instance resides.
    // 
    // >  You can call the [DescribeRegions](https://help.aliyun.com/document_detail/118703.html) operation to query the most recent region list.
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddosbgp20180720
#endif
