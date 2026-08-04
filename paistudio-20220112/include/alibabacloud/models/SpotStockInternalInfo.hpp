// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SPOTSTOCKINTERNALINFO_HPP_
#define ALIBABACLOUD_MODELS_SPOTSTOCKINTERNALINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiStudio20220112
{
namespace Models
{
  class SpotStockInternalInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SpotStockInternalInfo& obj) { 
      DARABONBA_PTR_TO_JSON(availableQuantity, availableQuantity_);
      DARABONBA_PTR_TO_JSON(clusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(hpnZone, hpnZone_);
      DARABONBA_PTR_TO_JSON(totalQuantity, totalQuantity_);
    };
    friend void from_json(const Darabonba::Json& j, SpotStockInternalInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(availableQuantity, availableQuantity_);
      DARABONBA_PTR_FROM_JSON(clusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(hpnZone, hpnZone_);
      DARABONBA_PTR_FROM_JSON(totalQuantity, totalQuantity_);
    };
    SpotStockInternalInfo() = default ;
    SpotStockInternalInfo(const SpotStockInternalInfo &) = default ;
    SpotStockInternalInfo(SpotStockInternalInfo &&) = default ;
    SpotStockInternalInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SpotStockInternalInfo() = default ;
    SpotStockInternalInfo& operator=(const SpotStockInternalInfo &) = default ;
    SpotStockInternalInfo& operator=(SpotStockInternalInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->availableQuantity_ == nullptr
        && this->clusterId_ == nullptr && this->hpnZone_ == nullptr && this->totalQuantity_ == nullptr; };
    // availableQuantity Field Functions 
    bool hasAvailableQuantity() const { return this->availableQuantity_ != nullptr;};
    void deleteAvailableQuantity() { this->availableQuantity_ = nullptr;};
    inline int32_t getAvailableQuantity() const { DARABONBA_PTR_GET_DEFAULT(availableQuantity_, 0) };
    inline SpotStockInternalInfo& setAvailableQuantity(int32_t availableQuantity) { DARABONBA_PTR_SET_VALUE(availableQuantity_, availableQuantity) };


    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string getClusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline SpotStockInternalInfo& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // hpnZone Field Functions 
    bool hasHpnZone() const { return this->hpnZone_ != nullptr;};
    void deleteHpnZone() { this->hpnZone_ = nullptr;};
    inline string getHpnZone() const { DARABONBA_PTR_GET_DEFAULT(hpnZone_, "") };
    inline SpotStockInternalInfo& setHpnZone(string hpnZone) { DARABONBA_PTR_SET_VALUE(hpnZone_, hpnZone) };


    // totalQuantity Field Functions 
    bool hasTotalQuantity() const { return this->totalQuantity_ != nullptr;};
    void deleteTotalQuantity() { this->totalQuantity_ = nullptr;};
    inline int32_t getTotalQuantity() const { DARABONBA_PTR_GET_DEFAULT(totalQuantity_, 0) };
    inline SpotStockInternalInfo& setTotalQuantity(int32_t totalQuantity) { DARABONBA_PTR_SET_VALUE(totalQuantity_, totalQuantity) };


  protected:
    // The number of available Spot Instances.
    shared_ptr<int32_t> availableQuantity_ {};
    // The ID of the cluster.
    shared_ptr<string> clusterId_ {};
    // The ID of the high-performance network (HPN) zone.
    shared_ptr<string> hpnZone_ {};
    // The total number of Spot Instances.
    shared_ptr<int32_t> totalQuantity_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiStudio20220112
#endif
