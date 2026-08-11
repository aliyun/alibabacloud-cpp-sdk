// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEMETALOGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEMETALOGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Green20220926
{
namespace Models
{
  class UpdateMetaLogRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateMetaLogRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CommodityCode, commodityCode_);
      DARABONBA_PTR_TO_JSON(DeliveryRegion, deliveryRegion_);
      DARABONBA_PTR_TO_JSON(Storage, storage_);
      DARABONBA_PTR_TO_JSON(Ttl, ttl_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateMetaLogRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CommodityCode, commodityCode_);
      DARABONBA_PTR_FROM_JSON(DeliveryRegion, deliveryRegion_);
      DARABONBA_PTR_FROM_JSON(Storage, storage_);
      DARABONBA_PTR_FROM_JSON(Ttl, ttl_);
    };
    UpdateMetaLogRequest() = default ;
    UpdateMetaLogRequest(const UpdateMetaLogRequest &) = default ;
    UpdateMetaLogRequest(UpdateMetaLogRequest &&) = default ;
    UpdateMetaLogRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateMetaLogRequest() = default ;
    UpdateMetaLogRequest& operator=(const UpdateMetaLogRequest &) = default ;
    UpdateMetaLogRequest& operator=(UpdateMetaLogRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->commodityCode_ == nullptr
        && this->deliveryRegion_ == nullptr && this->storage_ == nullptr && this->ttl_ == nullptr; };
    // commodityCode Field Functions 
    bool hasCommodityCode() const { return this->commodityCode_ != nullptr;};
    void deleteCommodityCode() { this->commodityCode_ = nullptr;};
    inline string getCommodityCode() const { DARABONBA_PTR_GET_DEFAULT(commodityCode_, "") };
    inline UpdateMetaLogRequest& setCommodityCode(string commodityCode) { DARABONBA_PTR_SET_VALUE(commodityCode_, commodityCode) };


    // deliveryRegion Field Functions 
    bool hasDeliveryRegion() const { return this->deliveryRegion_ != nullptr;};
    void deleteDeliveryRegion() { this->deliveryRegion_ = nullptr;};
    inline string getDeliveryRegion() const { DARABONBA_PTR_GET_DEFAULT(deliveryRegion_, "") };
    inline UpdateMetaLogRequest& setDeliveryRegion(string deliveryRegion) { DARABONBA_PTR_SET_VALUE(deliveryRegion_, deliveryRegion) };


    // storage Field Functions 
    bool hasStorage() const { return this->storage_ != nullptr;};
    void deleteStorage() { this->storage_ = nullptr;};
    inline int64_t getStorage() const { DARABONBA_PTR_GET_DEFAULT(storage_, 0L) };
    inline UpdateMetaLogRequest& setStorage(int64_t storage) { DARABONBA_PTR_SET_VALUE(storage_, storage) };


    // ttl Field Functions 
    bool hasTtl() const { return this->ttl_ != nullptr;};
    void deleteTtl() { this->ttl_ = nullptr;};
    inline int32_t getTtl() const { DARABONBA_PTR_GET_DEFAULT(ttl_, 0) };
    inline UpdateMetaLogRequest& setTtl(int32_t ttl) { DARABONBA_PTR_SET_VALUE(ttl_, ttl) };


  protected:
    // The commodity code.
    shared_ptr<string> commodityCode_ {};
    // The delivery region.
    shared_ptr<string> deliveryRegion_ {};
    // The storage capacity.
    shared_ptr<int64_t> storage_ {};
    // The time to live.
    shared_ptr<int32_t> ttl_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Green20220926
#endif
