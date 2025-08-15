// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEGLOBALEVENTSSTORAGEREGIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEGLOBALEVENTSSTORAGEREGIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Actiontrail20200706
{
namespace Models
{
  class UpdateGlobalEventsStorageRegionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateGlobalEventsStorageRegionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(StorageRegion, storageRegion_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateGlobalEventsStorageRegionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(StorageRegion, storageRegion_);
    };
    UpdateGlobalEventsStorageRegionRequest() = default ;
    UpdateGlobalEventsStorageRegionRequest(const UpdateGlobalEventsStorageRegionRequest &) = default ;
    UpdateGlobalEventsStorageRegionRequest(UpdateGlobalEventsStorageRegionRequest &&) = default ;
    UpdateGlobalEventsStorageRegionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateGlobalEventsStorageRegionRequest() = default ;
    UpdateGlobalEventsStorageRegionRequest& operator=(const UpdateGlobalEventsStorageRegionRequest &) = default ;
    UpdateGlobalEventsStorageRegionRequest& operator=(UpdateGlobalEventsStorageRegionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->storageRegion_ != nullptr; };
    // storageRegion Field Functions 
    bool hasStorageRegion() const { return this->storageRegion_ != nullptr;};
    void deleteStorageRegion() { this->storageRegion_ = nullptr;};
    inline string storageRegion() const { DARABONBA_PTR_GET_DEFAULT(storageRegion_, "") };
    inline UpdateGlobalEventsStorageRegionRequest& setStorageRegion(string storageRegion) { DARABONBA_PTR_SET_VALUE(storageRegion_, storageRegion) };


  protected:
    // The region where you want to store global events.
    // 
    // Valid values:
    // 
    // *   ap-southeast-1
    // 
    //     <!-- -->
    // 
    //     :
    // 
    //     <!-- -->
    // 
    //     the Singapore region
    // 
    //     <!-- -->
    // 
    // *   cn-hangzhou
    // 
    //     <!-- -->
    // 
    //     :
    // 
    //     <!-- -->
    // 
    //     the China (Hangzhou) region
    // 
    //     <!-- -->
    // 
    // This parameter is required.
    std::shared_ptr<string> storageRegion_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Actiontrail20200706
#endif
