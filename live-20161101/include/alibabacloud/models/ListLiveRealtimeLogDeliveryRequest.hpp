// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTLIVEREALTIMELOGDELIVERYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTLIVEREALTIMELOGDELIVERYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class ListLiveRealtimeLogDeliveryRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListLiveRealtimeLogDeliveryRequest& obj) { 
      DARABONBA_PTR_TO_JSON(LiveOpenapiReserve, liveOpenapiReserve_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, ListLiveRealtimeLogDeliveryRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(LiveOpenapiReserve, liveOpenapiReserve_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    ListLiveRealtimeLogDeliveryRequest() = default ;
    ListLiveRealtimeLogDeliveryRequest(const ListLiveRealtimeLogDeliveryRequest &) = default ;
    ListLiveRealtimeLogDeliveryRequest(ListLiveRealtimeLogDeliveryRequest &&) = default ;
    ListLiveRealtimeLogDeliveryRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListLiveRealtimeLogDeliveryRequest() = default ;
    ListLiveRealtimeLogDeliveryRequest& operator=(const ListLiveRealtimeLogDeliveryRequest &) = default ;
    ListLiveRealtimeLogDeliveryRequest& operator=(ListLiveRealtimeLogDeliveryRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->liveOpenapiReserve_ != nullptr
        && this->ownerId_ != nullptr && this->regionId_ != nullptr; };
    // liveOpenapiReserve Field Functions 
    bool hasLiveOpenapiReserve() const { return this->liveOpenapiReserve_ != nullptr;};
    void deleteLiveOpenapiReserve() { this->liveOpenapiReserve_ = nullptr;};
    inline string liveOpenapiReserve() const { DARABONBA_PTR_GET_DEFAULT(liveOpenapiReserve_, "") };
    inline ListLiveRealtimeLogDeliveryRequest& setLiveOpenapiReserve(string liveOpenapiReserve) { DARABONBA_PTR_SET_VALUE(liveOpenapiReserve_, liveOpenapiReserve) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline ListLiveRealtimeLogDeliveryRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListLiveRealtimeLogDeliveryRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // This parameter has no practical significance.
    std::shared_ptr<string> liveOpenapiReserve_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    std::shared_ptr<string> regionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
