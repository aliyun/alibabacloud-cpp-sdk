// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETGLOBALEVENTSSTORAGEREGIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETGLOBALEVENTSSTORAGEREGIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Actiontrail20200706
{
namespace Models
{
  class GetGlobalEventsStorageRegionResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetGlobalEventsStorageRegionResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(StorageRegion, storageRegion_);
    };
    friend void from_json(const Darabonba::Json& j, GetGlobalEventsStorageRegionResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(StorageRegion, storageRegion_);
    };
    GetGlobalEventsStorageRegionResponseBody() = default ;
    GetGlobalEventsStorageRegionResponseBody(const GetGlobalEventsStorageRegionResponseBody &) = default ;
    GetGlobalEventsStorageRegionResponseBody(GetGlobalEventsStorageRegionResponseBody &&) = default ;
    GetGlobalEventsStorageRegionResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetGlobalEventsStorageRegionResponseBody() = default ;
    GetGlobalEventsStorageRegionResponseBody& operator=(const GetGlobalEventsStorageRegionResponseBody &) = default ;
    GetGlobalEventsStorageRegionResponseBody& operator=(GetGlobalEventsStorageRegionResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->requestId_ != nullptr
        && this->storageRegion_ != nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetGlobalEventsStorageRegionResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // storageRegion Field Functions 
    bool hasStorageRegion() const { return this->storageRegion_ != nullptr;};
    void deleteStorageRegion() { this->storageRegion_ = nullptr;};
    inline string storageRegion() const { DARABONBA_PTR_GET_DEFAULT(storageRegion_, "") };
    inline GetGlobalEventsStorageRegionResponseBody& setStorageRegion(string storageRegion) { DARABONBA_PTR_SET_VALUE(storageRegion_, storageRegion) };


  protected:
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The region where global events are stored.
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
    std::shared_ptr<string> storageRegion_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Actiontrail20200706
#endif
