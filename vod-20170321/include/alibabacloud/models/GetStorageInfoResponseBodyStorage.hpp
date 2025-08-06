// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSTORAGEINFORESPONSEBODYSTORAGE_HPP_
#define ALIBABACLOUD_MODELS_GETSTORAGEINFORESPONSEBODYSTORAGE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class GetStorageInfoResponseBodyStorage : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetStorageInfoResponseBodyStorage& obj) { 
      DARABONBA_PTR_TO_JSON(DefaultUpload, defaultUpload_);
      DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_TO_JSON(GroupId, groupId_);
      DARABONBA_PTR_TO_JSON(Location, location_);
      DARABONBA_PTR_TO_JSON(Region, region_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(StorageUsage, storageUsage_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, GetStorageInfoResponseBodyStorage& obj) { 
      DARABONBA_PTR_FROM_JSON(DefaultUpload, defaultUpload_);
      DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
      DARABONBA_PTR_FROM_JSON(Location, location_);
      DARABONBA_PTR_FROM_JSON(Region, region_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(StorageUsage, storageUsage_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    GetStorageInfoResponseBodyStorage() = default ;
    GetStorageInfoResponseBodyStorage(const GetStorageInfoResponseBodyStorage &) = default ;
    GetStorageInfoResponseBodyStorage(GetStorageInfoResponseBodyStorage &&) = default ;
    GetStorageInfoResponseBodyStorage(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetStorageInfoResponseBodyStorage() = default ;
    GetStorageInfoResponseBodyStorage& operator=(const GetStorageInfoResponseBodyStorage &) = default ;
    GetStorageInfoResponseBodyStorage& operator=(GetStorageInfoResponseBodyStorage &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->defaultUpload_ != nullptr
        && this->gmtCreate_ != nullptr && this->gmtModified_ != nullptr && this->groupId_ != nullptr && this->location_ != nullptr && this->region_ != nullptr
        && this->resourceGroupId_ != nullptr && this->status_ != nullptr && this->storageUsage_ != nullptr && this->type_ != nullptr; };
    // defaultUpload Field Functions 
    bool hasDefaultUpload() const { return this->defaultUpload_ != nullptr;};
    void deleteDefaultUpload() { this->defaultUpload_ = nullptr;};
    inline bool defaultUpload() const { DARABONBA_PTR_GET_DEFAULT(defaultUpload_, false) };
    inline GetStorageInfoResponseBodyStorage& setDefaultUpload(bool defaultUpload) { DARABONBA_PTR_SET_VALUE(defaultUpload_, defaultUpload) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline string gmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
    inline GetStorageInfoResponseBodyStorage& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline string gmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
    inline GetStorageInfoResponseBodyStorage& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline string groupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
    inline GetStorageInfoResponseBodyStorage& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // location Field Functions 
    bool hasLocation() const { return this->location_ != nullptr;};
    void deleteLocation() { this->location_ = nullptr;};
    inline string location() const { DARABONBA_PTR_GET_DEFAULT(location_, "") };
    inline GetStorageInfoResponseBodyStorage& setLocation(string location) { DARABONBA_PTR_SET_VALUE(location_, location) };


    // region Field Functions 
    bool hasRegion() const { return this->region_ != nullptr;};
    void deleteRegion() { this->region_ = nullptr;};
    inline string region() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
    inline GetStorageInfoResponseBodyStorage& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline GetStorageInfoResponseBodyStorage& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t status() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline GetStorageInfoResponseBodyStorage& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // storageUsage Field Functions 
    bool hasStorageUsage() const { return this->storageUsage_ != nullptr;};
    void deleteStorageUsage() { this->storageUsage_ = nullptr;};
    inline int32_t storageUsage() const { DARABONBA_PTR_GET_DEFAULT(storageUsage_, 0) };
    inline GetStorageInfoResponseBodyStorage& setStorageUsage(int32_t storageUsage) { DARABONBA_PTR_SET_VALUE(storageUsage_, storageUsage) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline int32_t type() const { DARABONBA_PTR_GET_DEFAULT(type_, 0) };
    inline GetStorageInfoResponseBodyStorage& setType(int32_t type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    std::shared_ptr<bool> defaultUpload_ = nullptr;
    std::shared_ptr<string> gmtCreate_ = nullptr;
    std::shared_ptr<string> gmtModified_ = nullptr;
    std::shared_ptr<string> groupId_ = nullptr;
    std::shared_ptr<string> location_ = nullptr;
    std::shared_ptr<string> region_ = nullptr;
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    std::shared_ptr<int32_t> status_ = nullptr;
    std::shared_ptr<int32_t> storageUsage_ = nullptr;
    std::shared_ptr<int32_t> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
