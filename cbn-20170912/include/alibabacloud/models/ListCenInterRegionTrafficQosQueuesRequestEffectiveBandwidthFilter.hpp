// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCENINTERREGIONTRAFFICQOSQUEUESREQUESTEFFECTIVEBANDWIDTHFILTER_HPP_
#define ALIBABACLOUD_MODELS_LISTCENINTERREGIONTRAFFICQOSQUEUESREQUESTEFFECTIVEBANDWIDTHFILTER_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cbn20170912
{
namespace Models
{
  class ListCenInterRegionTrafficQosQueuesRequestEffectiveBandwidthFilter : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListCenInterRegionTrafficQosQueuesRequestEffectiveBandwidthFilter& obj) { 
      DARABONBA_PTR_TO_JSON(Gte, gte_);
      DARABONBA_PTR_TO_JSON(Lte, lte_);
    };
    friend void from_json(const Darabonba::Json& j, ListCenInterRegionTrafficQosQueuesRequestEffectiveBandwidthFilter& obj) { 
      DARABONBA_PTR_FROM_JSON(Gte, gte_);
      DARABONBA_PTR_FROM_JSON(Lte, lte_);
    };
    ListCenInterRegionTrafficQosQueuesRequestEffectiveBandwidthFilter() = default ;
    ListCenInterRegionTrafficQosQueuesRequestEffectiveBandwidthFilter(const ListCenInterRegionTrafficQosQueuesRequestEffectiveBandwidthFilter &) = default ;
    ListCenInterRegionTrafficQosQueuesRequestEffectiveBandwidthFilter(ListCenInterRegionTrafficQosQueuesRequestEffectiveBandwidthFilter &&) = default ;
    ListCenInterRegionTrafficQosQueuesRequestEffectiveBandwidthFilter(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListCenInterRegionTrafficQosQueuesRequestEffectiveBandwidthFilter() = default ;
    ListCenInterRegionTrafficQosQueuesRequestEffectiveBandwidthFilter& operator=(const ListCenInterRegionTrafficQosQueuesRequestEffectiveBandwidthFilter &) = default ;
    ListCenInterRegionTrafficQosQueuesRequestEffectiveBandwidthFilter& operator=(ListCenInterRegionTrafficQosQueuesRequestEffectiveBandwidthFilter &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->gte_ != nullptr
        && this->lte_ != nullptr; };
    // gte Field Functions 
    bool hasGte() const { return this->gte_ != nullptr;};
    void deleteGte() { this->gte_ = nullptr;};
    inline int64_t gte() const { DARABONBA_PTR_GET_DEFAULT(gte_, 0L) };
    inline ListCenInterRegionTrafficQosQueuesRequestEffectiveBandwidthFilter& setGte(int64_t gte) { DARABONBA_PTR_SET_VALUE(gte_, gte) };


    // lte Field Functions 
    bool hasLte() const { return this->lte_ != nullptr;};
    void deleteLte() { this->lte_ = nullptr;};
    inline int64_t lte() const { DARABONBA_PTR_GET_DEFAULT(lte_, 0L) };
    inline ListCenInterRegionTrafficQosQueuesRequestEffectiveBandwidthFilter& setLte(int64_t lte) { DARABONBA_PTR_SET_VALUE(lte_, lte) };


  protected:
    // The actual bandwidth is equal to or larger than the specified value.
    std::shared_ptr<int64_t> gte_ = nullptr;
    // The actual bandwidth is equal to or smaller than the specified value.
    std::shared_ptr<int64_t> lte_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cbn20170912
#endif
