// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETRESOURCEINVENTORYRESPONSEBODYRESOURCEINVENTORY_HPP_
#define ALIBABACLOUD_MODELS_GETRESOURCEINVENTORYRESPONSEBODYRESOURCEINVENTORY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Config20200907
{
namespace Models
{
  class GetResourceInventoryResponseBodyResourceInventory : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetResourceInventoryResponseBodyResourceInventory& obj) { 
      DARABONBA_PTR_TO_JSON(DownloadUrl, downloadUrl_);
      DARABONBA_PTR_TO_JSON(ResourceInventoryGenerateTime, resourceInventoryGenerateTime_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, GetResourceInventoryResponseBodyResourceInventory& obj) { 
      DARABONBA_PTR_FROM_JSON(DownloadUrl, downloadUrl_);
      DARABONBA_PTR_FROM_JSON(ResourceInventoryGenerateTime, resourceInventoryGenerateTime_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    GetResourceInventoryResponseBodyResourceInventory() = default ;
    GetResourceInventoryResponseBodyResourceInventory(const GetResourceInventoryResponseBodyResourceInventory &) = default ;
    GetResourceInventoryResponseBodyResourceInventory(GetResourceInventoryResponseBodyResourceInventory &&) = default ;
    GetResourceInventoryResponseBodyResourceInventory(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetResourceInventoryResponseBodyResourceInventory() = default ;
    GetResourceInventoryResponseBodyResourceInventory& operator=(const GetResourceInventoryResponseBodyResourceInventory &) = default ;
    GetResourceInventoryResponseBodyResourceInventory& operator=(GetResourceInventoryResponseBodyResourceInventory &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->downloadUrl_ == nullptr
        && return this->resourceInventoryGenerateTime_ == nullptr && return this->status_ == nullptr; };
    // downloadUrl Field Functions 
    bool hasDownloadUrl() const { return this->downloadUrl_ != nullptr;};
    void deleteDownloadUrl() { this->downloadUrl_ = nullptr;};
    inline string downloadUrl() const { DARABONBA_PTR_GET_DEFAULT(downloadUrl_, "") };
    inline GetResourceInventoryResponseBodyResourceInventory& setDownloadUrl(string downloadUrl) { DARABONBA_PTR_SET_VALUE(downloadUrl_, downloadUrl) };


    // resourceInventoryGenerateTime Field Functions 
    bool hasResourceInventoryGenerateTime() const { return this->resourceInventoryGenerateTime_ != nullptr;};
    void deleteResourceInventoryGenerateTime() { this->resourceInventoryGenerateTime_ = nullptr;};
    inline int64_t resourceInventoryGenerateTime() const { DARABONBA_PTR_GET_DEFAULT(resourceInventoryGenerateTime_, 0L) };
    inline GetResourceInventoryResponseBodyResourceInventory& setResourceInventoryGenerateTime(int64_t resourceInventoryGenerateTime) { DARABONBA_PTR_SET_VALUE(resourceInventoryGenerateTime_, resourceInventoryGenerateTime) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetResourceInventoryResponseBodyResourceInventory& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The download URL of the resource inventory.
    std::shared_ptr<string> downloadUrl_ = nullptr;
    // The time when the resource inventory was generated. The value is a timestamp.
    std::shared_ptr<int64_t> resourceInventoryGenerateTime_ = nullptr;
    // The generation status of the resource inventory. Valid values:
    // 
    // *   CREATING: The resource inventory is being generated.
    // *   COMPLETE: The resource inventory is generated.
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Config20200907
#endif
