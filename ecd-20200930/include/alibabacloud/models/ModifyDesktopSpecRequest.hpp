// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYDESKTOPSPECREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYDESKTOPSPECREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class ModifyDesktopSpecRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyDesktopSpecRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AutoPay, autoPay_);
      DARABONBA_PTR_TO_JSON(DesktopId, desktopId_);
      DARABONBA_PTR_TO_JSON(DesktopType, desktopType_);
      DARABONBA_PTR_TO_JSON(PromotionId, promotionId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResellerOwnerUid, resellerOwnerUid_);
      DARABONBA_PTR_TO_JSON(ResourceSpecs, resourceSpecs_);
      DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_TO_JSON(RootDiskSizeGib, rootDiskSizeGib_);
      DARABONBA_PTR_TO_JSON(UserDiskPerformanceLevel, userDiskPerformanceLevel_);
      DARABONBA_PTR_TO_JSON(UserDiskSizeGib, userDiskSizeGib_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyDesktopSpecRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AutoPay, autoPay_);
      DARABONBA_PTR_FROM_JSON(DesktopId, desktopId_);
      DARABONBA_PTR_FROM_JSON(DesktopType, desktopType_);
      DARABONBA_PTR_FROM_JSON(PromotionId, promotionId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResellerOwnerUid, resellerOwnerUid_);
      DARABONBA_PTR_FROM_JSON(ResourceSpecs, resourceSpecs_);
      DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_FROM_JSON(RootDiskSizeGib, rootDiskSizeGib_);
      DARABONBA_PTR_FROM_JSON(UserDiskPerformanceLevel, userDiskPerformanceLevel_);
      DARABONBA_PTR_FROM_JSON(UserDiskSizeGib, userDiskSizeGib_);
    };
    ModifyDesktopSpecRequest() = default ;
    ModifyDesktopSpecRequest(const ModifyDesktopSpecRequest &) = default ;
    ModifyDesktopSpecRequest(ModifyDesktopSpecRequest &&) = default ;
    ModifyDesktopSpecRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyDesktopSpecRequest() = default ;
    ModifyDesktopSpecRequest& operator=(const ModifyDesktopSpecRequest &) = default ;
    ModifyDesktopSpecRequest& operator=(ModifyDesktopSpecRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ResourceSpecs : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ResourceSpecs& obj) { 
        DARABONBA_PTR_TO_JSON(DesktopId, desktopId_);
        DARABONBA_PTR_TO_JSON(RootDiskSizeGib, rootDiskSizeGib_);
        DARABONBA_PTR_TO_JSON(UserDiskSizeGib, userDiskSizeGib_);
      };
      friend void from_json(const Darabonba::Json& j, ResourceSpecs& obj) { 
        DARABONBA_PTR_FROM_JSON(DesktopId, desktopId_);
        DARABONBA_PTR_FROM_JSON(RootDiskSizeGib, rootDiskSizeGib_);
        DARABONBA_PTR_FROM_JSON(UserDiskSizeGib, userDiskSizeGib_);
      };
      ResourceSpecs() = default ;
      ResourceSpecs(const ResourceSpecs &) = default ;
      ResourceSpecs(ResourceSpecs &&) = default ;
      ResourceSpecs(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ResourceSpecs() = default ;
      ResourceSpecs& operator=(const ResourceSpecs &) = default ;
      ResourceSpecs& operator=(ResourceSpecs &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->desktopId_ == nullptr
        && this->rootDiskSizeGib_ == nullptr && this->userDiskSizeGib_ == nullptr; };
      // desktopId Field Functions 
      bool hasDesktopId() const { return this->desktopId_ != nullptr;};
      void deleteDesktopId() { this->desktopId_ = nullptr;};
      inline string getDesktopId() const { DARABONBA_PTR_GET_DEFAULT(desktopId_, "") };
      inline ResourceSpecs& setDesktopId(string desktopId) { DARABONBA_PTR_SET_VALUE(desktopId_, desktopId) };


      // rootDiskSizeGib Field Functions 
      bool hasRootDiskSizeGib() const { return this->rootDiskSizeGib_ != nullptr;};
      void deleteRootDiskSizeGib() { this->rootDiskSizeGib_ = nullptr;};
      inline int32_t getRootDiskSizeGib() const { DARABONBA_PTR_GET_DEFAULT(rootDiskSizeGib_, 0) };
      inline ResourceSpecs& setRootDiskSizeGib(int32_t rootDiskSizeGib) { DARABONBA_PTR_SET_VALUE(rootDiskSizeGib_, rootDiskSizeGib) };


      // userDiskSizeGib Field Functions 
      bool hasUserDiskSizeGib() const { return this->userDiskSizeGib_ != nullptr;};
      void deleteUserDiskSizeGib() { this->userDiskSizeGib_ = nullptr;};
      inline int32_t getUserDiskSizeGib() const { DARABONBA_PTR_GET_DEFAULT(userDiskSizeGib_, 0) };
      inline ResourceSpecs& setUserDiskSizeGib(int32_t userDiskSizeGib) { DARABONBA_PTR_SET_VALUE(userDiskSizeGib_, userDiskSizeGib) };


    protected:
      // The ID of the cloud desktop.
      shared_ptr<string> desktopId_ {};
      // The new size of the system disk, in GiB. The value must be a multiple of 10 in the range of 80 to 500.
      shared_ptr<int32_t> rootDiskSizeGib_ {};
      // The new size of the data disk, in GiB. The value must be a multiple of 10 in the range of 20 to 2,040.
      shared_ptr<int32_t> userDiskSizeGib_ {};
    };

    virtual bool empty() const override { return this->autoPay_ == nullptr
        && this->desktopId_ == nullptr && this->desktopType_ == nullptr && this->promotionId_ == nullptr && this->regionId_ == nullptr && this->resellerOwnerUid_ == nullptr
        && this->resourceSpecs_ == nullptr && this->resourceType_ == nullptr && this->rootDiskSizeGib_ == nullptr && this->userDiskPerformanceLevel_ == nullptr && this->userDiskSizeGib_ == nullptr; };
    // autoPay Field Functions 
    bool hasAutoPay() const { return this->autoPay_ != nullptr;};
    void deleteAutoPay() { this->autoPay_ = nullptr;};
    inline bool getAutoPay() const { DARABONBA_PTR_GET_DEFAULT(autoPay_, false) };
    inline ModifyDesktopSpecRequest& setAutoPay(bool autoPay) { DARABONBA_PTR_SET_VALUE(autoPay_, autoPay) };


    // desktopId Field Functions 
    bool hasDesktopId() const { return this->desktopId_ != nullptr;};
    void deleteDesktopId() { this->desktopId_ = nullptr;};
    inline string getDesktopId() const { DARABONBA_PTR_GET_DEFAULT(desktopId_, "") };
    inline ModifyDesktopSpecRequest& setDesktopId(string desktopId) { DARABONBA_PTR_SET_VALUE(desktopId_, desktopId) };


    // desktopType Field Functions 
    bool hasDesktopType() const { return this->desktopType_ != nullptr;};
    void deleteDesktopType() { this->desktopType_ = nullptr;};
    inline string getDesktopType() const { DARABONBA_PTR_GET_DEFAULT(desktopType_, "") };
    inline ModifyDesktopSpecRequest& setDesktopType(string desktopType) { DARABONBA_PTR_SET_VALUE(desktopType_, desktopType) };


    // promotionId Field Functions 
    bool hasPromotionId() const { return this->promotionId_ != nullptr;};
    void deletePromotionId() { this->promotionId_ = nullptr;};
    inline string getPromotionId() const { DARABONBA_PTR_GET_DEFAULT(promotionId_, "") };
    inline ModifyDesktopSpecRequest& setPromotionId(string promotionId) { DARABONBA_PTR_SET_VALUE(promotionId_, promotionId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ModifyDesktopSpecRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resellerOwnerUid Field Functions 
    bool hasResellerOwnerUid() const { return this->resellerOwnerUid_ != nullptr;};
    void deleteResellerOwnerUid() { this->resellerOwnerUid_ = nullptr;};
    inline int64_t getResellerOwnerUid() const { DARABONBA_PTR_GET_DEFAULT(resellerOwnerUid_, 0L) };
    inline ModifyDesktopSpecRequest& setResellerOwnerUid(int64_t resellerOwnerUid) { DARABONBA_PTR_SET_VALUE(resellerOwnerUid_, resellerOwnerUid) };


    // resourceSpecs Field Functions 
    bool hasResourceSpecs() const { return this->resourceSpecs_ != nullptr;};
    void deleteResourceSpecs() { this->resourceSpecs_ = nullptr;};
    inline const vector<ModifyDesktopSpecRequest::ResourceSpecs> & getResourceSpecs() const { DARABONBA_PTR_GET_CONST(resourceSpecs_, vector<ModifyDesktopSpecRequest::ResourceSpecs>) };
    inline vector<ModifyDesktopSpecRequest::ResourceSpecs> getResourceSpecs() { DARABONBA_PTR_GET(resourceSpecs_, vector<ModifyDesktopSpecRequest::ResourceSpecs>) };
    inline ModifyDesktopSpecRequest& setResourceSpecs(const vector<ModifyDesktopSpecRequest::ResourceSpecs> & resourceSpecs) { DARABONBA_PTR_SET_VALUE(resourceSpecs_, resourceSpecs) };
    inline ModifyDesktopSpecRequest& setResourceSpecs(vector<ModifyDesktopSpecRequest::ResourceSpecs> && resourceSpecs) { DARABONBA_PTR_SET_RVALUE(resourceSpecs_, resourceSpecs) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string getResourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline ModifyDesktopSpecRequest& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


    // rootDiskSizeGib Field Functions 
    bool hasRootDiskSizeGib() const { return this->rootDiskSizeGib_ != nullptr;};
    void deleteRootDiskSizeGib() { this->rootDiskSizeGib_ = nullptr;};
    inline int32_t getRootDiskSizeGib() const { DARABONBA_PTR_GET_DEFAULT(rootDiskSizeGib_, 0) };
    inline ModifyDesktopSpecRequest& setRootDiskSizeGib(int32_t rootDiskSizeGib) { DARABONBA_PTR_SET_VALUE(rootDiskSizeGib_, rootDiskSizeGib) };


    // userDiskPerformanceLevel Field Functions 
    bool hasUserDiskPerformanceLevel() const { return this->userDiskPerformanceLevel_ != nullptr;};
    void deleteUserDiskPerformanceLevel() { this->userDiskPerformanceLevel_ = nullptr;};
    inline string getUserDiskPerformanceLevel() const { DARABONBA_PTR_GET_DEFAULT(userDiskPerformanceLevel_, "") };
    inline ModifyDesktopSpecRequest& setUserDiskPerformanceLevel(string userDiskPerformanceLevel) { DARABONBA_PTR_SET_VALUE(userDiskPerformanceLevel_, userDiskPerformanceLevel) };


    // userDiskSizeGib Field Functions 
    bool hasUserDiskSizeGib() const { return this->userDiskSizeGib_ != nullptr;};
    void deleteUserDiskSizeGib() { this->userDiskSizeGib_ = nullptr;};
    inline int32_t getUserDiskSizeGib() const { DARABONBA_PTR_GET_DEFAULT(userDiskSizeGib_, 0) };
    inline ModifyDesktopSpecRequest& setUserDiskSizeGib(int32_t userDiskSizeGib) { DARABONBA_PTR_SET_VALUE(userDiskSizeGib_, userDiskSizeGib) };


  protected:
    // Specifies whether to enable automatic payment.
    shared_ptr<bool> autoPay_ {};
    // The ID of the cloud desktop.
    shared_ptr<string> desktopId_ {};
    // The new desktop type. You can call the [DescribeDesktopTypes](~~DescribeDesktopTypes~~) operation to query the supported desktop types.
    // 
    // This parameter is required.
    shared_ptr<string> desktopType_ {};
    // The promotion ID.
    shared_ptr<string> promotionId_ {};
    // The ID of the region. You can call the [DescribeRegions](~~DescribeRegions~~) operation to obtain a list of regions that Elastic Desktop Service supports.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    shared_ptr<int64_t> resellerOwnerUid_ {};
    // A list of resource specification templates.
    shared_ptr<vector<ModifyDesktopSpecRequest::ResourceSpecs>> resourceSpecs_ {};
    // The resource type.
    // 
    // > This parameter is required only for cloud desktops that use the subscription billing method.
    shared_ptr<string> resourceType_ {};
    // The new size of the system disk, in GiB. The value must be a multiple of 10 in the range of 80 to 500.
    shared_ptr<int32_t> rootDiskSizeGib_ {};
    // The performance level of the data disk.
    shared_ptr<string> userDiskPerformanceLevel_ {};
    // The new size of the data disk, in GiB.
    // 
    // - For non-graphics-accelerated desktop types, the value must be a multiple of 10 in the range of 20 to 1,020.
    // 
    // - For graphics-accelerated desktop types, the value must be a multiple of 10 in the range of 40 to 1,020.
    shared_ptr<int32_t> userDiskSizeGib_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
