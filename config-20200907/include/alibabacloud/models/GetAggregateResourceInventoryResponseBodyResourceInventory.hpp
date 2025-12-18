// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAGGREGATERESOURCEINVENTORYRESPONSEBODYRESOURCEINVENTORY_HPP_
#define ALIBABACLOUD_MODELS_GETAGGREGATERESOURCEINVENTORYRESPONSEBODYRESOURCEINVENTORY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Config20200907
{
namespace Models
{
  class GetAggregateResourceInventoryResponseBodyResourceInventory : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAggregateResourceInventoryResponseBodyResourceInventory& obj) { 
      DARABONBA_PTR_TO_JSON(DownloadUrl, downloadUrl_);
      DARABONBA_PTR_TO_JSON(ResourceInventoryGenerateTime, resourceInventoryGenerateTime_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, GetAggregateResourceInventoryResponseBodyResourceInventory& obj) { 
      DARABONBA_PTR_FROM_JSON(DownloadUrl, downloadUrl_);
      DARABONBA_PTR_FROM_JSON(ResourceInventoryGenerateTime, resourceInventoryGenerateTime_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    GetAggregateResourceInventoryResponseBodyResourceInventory() = default ;
    GetAggregateResourceInventoryResponseBodyResourceInventory(const GetAggregateResourceInventoryResponseBodyResourceInventory &) = default ;
    GetAggregateResourceInventoryResponseBodyResourceInventory(GetAggregateResourceInventoryResponseBodyResourceInventory &&) = default ;
    GetAggregateResourceInventoryResponseBodyResourceInventory(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAggregateResourceInventoryResponseBodyResourceInventory() = default ;
    GetAggregateResourceInventoryResponseBodyResourceInventory& operator=(const GetAggregateResourceInventoryResponseBodyResourceInventory &) = default ;
    GetAggregateResourceInventoryResponseBodyResourceInventory& operator=(GetAggregateResourceInventoryResponseBodyResourceInventory &&) = default ;
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
    inline GetAggregateResourceInventoryResponseBodyResourceInventory& setDownloadUrl(string downloadUrl) { DARABONBA_PTR_SET_VALUE(downloadUrl_, downloadUrl) };


    // resourceInventoryGenerateTime Field Functions 
    bool hasResourceInventoryGenerateTime() const { return this->resourceInventoryGenerateTime_ != nullptr;};
    void deleteResourceInventoryGenerateTime() { this->resourceInventoryGenerateTime_ = nullptr;};
    inline int64_t resourceInventoryGenerateTime() const { DARABONBA_PTR_GET_DEFAULT(resourceInventoryGenerateTime_, 0L) };
    inline GetAggregateResourceInventoryResponseBodyResourceInventory& setResourceInventoryGenerateTime(int64_t resourceInventoryGenerateTime) { DARABONBA_PTR_SET_VALUE(resourceInventoryGenerateTime_, resourceInventoryGenerateTime) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetAggregateResourceInventoryResponseBodyResourceInventory& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The download URL of the resource inventory.
    std::shared_ptr<string> downloadUrl_ = nullptr;
    // The time when the resource inventory was generated. The value is a timestamp.
    // 
    // Unit: milliseconds.
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
