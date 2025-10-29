// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ENABLELIVEREALTIMELOGDELIVERYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ENABLELIVEREALTIMELOGDELIVERYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class EnableLiveRealtimeLogDeliveryRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const EnableLiveRealtimeLogDeliveryRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, EnableLiveRealtimeLogDeliveryRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    EnableLiveRealtimeLogDeliveryRequest() = default ;
    EnableLiveRealtimeLogDeliveryRequest(const EnableLiveRealtimeLogDeliveryRequest &) = default ;
    EnableLiveRealtimeLogDeliveryRequest(EnableLiveRealtimeLogDeliveryRequest &&) = default ;
    EnableLiveRealtimeLogDeliveryRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~EnableLiveRealtimeLogDeliveryRequest() = default ;
    EnableLiveRealtimeLogDeliveryRequest& operator=(const EnableLiveRealtimeLogDeliveryRequest &) = default ;
    EnableLiveRealtimeLogDeliveryRequest& operator=(EnableLiveRealtimeLogDeliveryRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->domainName_ == nullptr
        && return this->ownerId_ == nullptr && return this->regionId_ == nullptr; };
    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string domainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline EnableLiveRealtimeLogDeliveryRequest& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline EnableLiveRealtimeLogDeliveryRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline EnableLiveRealtimeLogDeliveryRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The streaming domain for which you want to enable real-time log delivery.
    // 
    // Separate multiple streaming domains with commas (,).
    // 
    // This parameter is required.
    std::shared_ptr<string> domainName_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    std::shared_ptr<string> regionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
