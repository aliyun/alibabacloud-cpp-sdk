// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAVAILABLERESOURCERESPONSEBODYAVAILABLEZONELISTSUPPORTEDMODESUPPORTEDSERIALLISTSUPPORTEDFLEXIBLERESOURCE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAVAILABLERESOURCERESPONSEBODYAVAILABLEZONELISTSUPPORTEDMODESUPPORTEDSERIALLISTSUPPORTEDFLEXIBLERESOURCE_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeAvailableResourceResponseBodyAvailableZoneListSupportedModeSupportedSerialListSupportedFlexibleResourceSupportedElasticIOResource.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20190315
{
namespace Models
{
  class DescribeAvailableResourceResponseBodyAvailableZoneListSupportedModeSupportedSerialListSupportedFlexibleResource : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAvailableResourceResponseBodyAvailableZoneListSupportedModeSupportedSerialListSupportedFlexibleResource& obj) { 
      DARABONBA_PTR_TO_JSON(StorageType, storageType_);
      DARABONBA_PTR_TO_JSON(SupportedComputeResource, supportedComputeResource_);
      DARABONBA_PTR_TO_JSON(SupportedElasticIOResource, supportedElasticIOResource_);
      DARABONBA_PTR_TO_JSON(SupportedStorageResource, supportedStorageResource_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAvailableResourceResponseBodyAvailableZoneListSupportedModeSupportedSerialListSupportedFlexibleResource& obj) { 
      DARABONBA_PTR_FROM_JSON(StorageType, storageType_);
      DARABONBA_PTR_FROM_JSON(SupportedComputeResource, supportedComputeResource_);
      DARABONBA_PTR_FROM_JSON(SupportedElasticIOResource, supportedElasticIOResource_);
      DARABONBA_PTR_FROM_JSON(SupportedStorageResource, supportedStorageResource_);
    };
    DescribeAvailableResourceResponseBodyAvailableZoneListSupportedModeSupportedSerialListSupportedFlexibleResource() = default ;
    DescribeAvailableResourceResponseBodyAvailableZoneListSupportedModeSupportedSerialListSupportedFlexibleResource(const DescribeAvailableResourceResponseBodyAvailableZoneListSupportedModeSupportedSerialListSupportedFlexibleResource &) = default ;
    DescribeAvailableResourceResponseBodyAvailableZoneListSupportedModeSupportedSerialListSupportedFlexibleResource(DescribeAvailableResourceResponseBodyAvailableZoneListSupportedModeSupportedSerialListSupportedFlexibleResource &&) = default ;
    DescribeAvailableResourceResponseBodyAvailableZoneListSupportedModeSupportedSerialListSupportedFlexibleResource(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAvailableResourceResponseBodyAvailableZoneListSupportedModeSupportedSerialListSupportedFlexibleResource() = default ;
    DescribeAvailableResourceResponseBodyAvailableZoneListSupportedModeSupportedSerialListSupportedFlexibleResource& operator=(const DescribeAvailableResourceResponseBodyAvailableZoneListSupportedModeSupportedSerialListSupportedFlexibleResource &) = default ;
    DescribeAvailableResourceResponseBodyAvailableZoneListSupportedModeSupportedSerialListSupportedFlexibleResource& operator=(DescribeAvailableResourceResponseBodyAvailableZoneListSupportedModeSupportedSerialListSupportedFlexibleResource &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->storageType_ != nullptr
        && this->supportedComputeResource_ != nullptr && this->supportedElasticIOResource_ != nullptr && this->supportedStorageResource_ != nullptr; };
    // storageType Field Functions 
    bool hasStorageType() const { return this->storageType_ != nullptr;};
    void deleteStorageType() { this->storageType_ = nullptr;};
    inline string storageType() const { DARABONBA_PTR_GET_DEFAULT(storageType_, "") };
    inline DescribeAvailableResourceResponseBodyAvailableZoneListSupportedModeSupportedSerialListSupportedFlexibleResource& setStorageType(string storageType) { DARABONBA_PTR_SET_VALUE(storageType_, storageType) };


    // supportedComputeResource Field Functions 
    bool hasSupportedComputeResource() const { return this->supportedComputeResource_ != nullptr;};
    void deleteSupportedComputeResource() { this->supportedComputeResource_ = nullptr;};
    inline const vector<string> & supportedComputeResource() const { DARABONBA_PTR_GET_CONST(supportedComputeResource_, vector<string>) };
    inline vector<string> supportedComputeResource() { DARABONBA_PTR_GET(supportedComputeResource_, vector<string>) };
    inline DescribeAvailableResourceResponseBodyAvailableZoneListSupportedModeSupportedSerialListSupportedFlexibleResource& setSupportedComputeResource(const vector<string> & supportedComputeResource) { DARABONBA_PTR_SET_VALUE(supportedComputeResource_, supportedComputeResource) };
    inline DescribeAvailableResourceResponseBodyAvailableZoneListSupportedModeSupportedSerialListSupportedFlexibleResource& setSupportedComputeResource(vector<string> && supportedComputeResource) { DARABONBA_PTR_SET_RVALUE(supportedComputeResource_, supportedComputeResource) };


    // supportedElasticIOResource Field Functions 
    bool hasSupportedElasticIOResource() const { return this->supportedElasticIOResource_ != nullptr;};
    void deleteSupportedElasticIOResource() { this->supportedElasticIOResource_ = nullptr;};
    inline const Models::DescribeAvailableResourceResponseBodyAvailableZoneListSupportedModeSupportedSerialListSupportedFlexibleResourceSupportedElasticIOResource & supportedElasticIOResource() const { DARABONBA_PTR_GET_CONST(supportedElasticIOResource_, Models::DescribeAvailableResourceResponseBodyAvailableZoneListSupportedModeSupportedSerialListSupportedFlexibleResourceSupportedElasticIOResource) };
    inline Models::DescribeAvailableResourceResponseBodyAvailableZoneListSupportedModeSupportedSerialListSupportedFlexibleResourceSupportedElasticIOResource supportedElasticIOResource() { DARABONBA_PTR_GET(supportedElasticIOResource_, Models::DescribeAvailableResourceResponseBodyAvailableZoneListSupportedModeSupportedSerialListSupportedFlexibleResourceSupportedElasticIOResource) };
    inline DescribeAvailableResourceResponseBodyAvailableZoneListSupportedModeSupportedSerialListSupportedFlexibleResource& setSupportedElasticIOResource(const Models::DescribeAvailableResourceResponseBodyAvailableZoneListSupportedModeSupportedSerialListSupportedFlexibleResourceSupportedElasticIOResource & supportedElasticIOResource) { DARABONBA_PTR_SET_VALUE(supportedElasticIOResource_, supportedElasticIOResource) };
    inline DescribeAvailableResourceResponseBodyAvailableZoneListSupportedModeSupportedSerialListSupportedFlexibleResource& setSupportedElasticIOResource(Models::DescribeAvailableResourceResponseBodyAvailableZoneListSupportedModeSupportedSerialListSupportedFlexibleResourceSupportedElasticIOResource && supportedElasticIOResource) { DARABONBA_PTR_SET_RVALUE(supportedElasticIOResource_, supportedElasticIOResource) };


    // supportedStorageResource Field Functions 
    bool hasSupportedStorageResource() const { return this->supportedStorageResource_ != nullptr;};
    void deleteSupportedStorageResource() { this->supportedStorageResource_ = nullptr;};
    inline const vector<string> & supportedStorageResource() const { DARABONBA_PTR_GET_CONST(supportedStorageResource_, vector<string>) };
    inline vector<string> supportedStorageResource() { DARABONBA_PTR_GET(supportedStorageResource_, vector<string>) };
    inline DescribeAvailableResourceResponseBodyAvailableZoneListSupportedModeSupportedSerialListSupportedFlexibleResource& setSupportedStorageResource(const vector<string> & supportedStorageResource) { DARABONBA_PTR_SET_VALUE(supportedStorageResource_, supportedStorageResource) };
    inline DescribeAvailableResourceResponseBodyAvailableZoneListSupportedModeSupportedSerialListSupportedFlexibleResource& setSupportedStorageResource(vector<string> && supportedStorageResource) { DARABONBA_PTR_SET_RVALUE(supportedStorageResource_, supportedStorageResource) };


  protected:
    // The disk storage type. Valid values:
    // 
    // *   **hdd**
    // *   **ssd**
    std::shared_ptr<string> storageType_ = nullptr;
    // The supported computing resources.
    std::shared_ptr<vector<string>> supportedComputeResource_ = nullptr;
    // The supported elastic I/O resources.
    std::shared_ptr<Models::DescribeAvailableResourceResponseBodyAvailableZoneListSupportedModeSupportedSerialListSupportedFlexibleResourceSupportedElasticIOResource> supportedElasticIOResource_ = nullptr;
    // The supported storage resources.
    std::shared_ptr<vector<string>> supportedStorageResource_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20190315
#endif
