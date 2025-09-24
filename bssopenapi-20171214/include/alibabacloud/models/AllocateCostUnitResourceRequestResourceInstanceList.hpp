// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ALLOCATECOSTUNITRESOURCEREQUESTRESOURCEINSTANCELIST_HPP_
#define ALIBABACLOUD_MODELS_ALLOCATECOSTUNITRESOURCEREQUESTRESOURCEINSTANCELIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BssOpenApi20171214
{
namespace Models
{
  class AllocateCostUnitResourceRequestResourceInstanceList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AllocateCostUnitResourceRequestResourceInstanceList& obj) { 
      DARABONBA_PTR_TO_JSON(ApportionCode, apportionCode_);
      DARABONBA_PTR_TO_JSON(CommodityCode, commodityCode_);
      DARABONBA_PTR_TO_JSON(ResourceId, resourceId_);
      DARABONBA_PTR_TO_JSON(ResourceUserId, resourceUserId_);
    };
    friend void from_json(const Darabonba::Json& j, AllocateCostUnitResourceRequestResourceInstanceList& obj) { 
      DARABONBA_PTR_FROM_JSON(ApportionCode, apportionCode_);
      DARABONBA_PTR_FROM_JSON(CommodityCode, commodityCode_);
      DARABONBA_PTR_FROM_JSON(ResourceId, resourceId_);
      DARABONBA_PTR_FROM_JSON(ResourceUserId, resourceUserId_);
    };
    AllocateCostUnitResourceRequestResourceInstanceList() = default ;
    AllocateCostUnitResourceRequestResourceInstanceList(const AllocateCostUnitResourceRequestResourceInstanceList &) = default ;
    AllocateCostUnitResourceRequestResourceInstanceList(AllocateCostUnitResourceRequestResourceInstanceList &&) = default ;
    AllocateCostUnitResourceRequestResourceInstanceList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AllocateCostUnitResourceRequestResourceInstanceList() = default ;
    AllocateCostUnitResourceRequestResourceInstanceList& operator=(const AllocateCostUnitResourceRequestResourceInstanceList &) = default ;
    AllocateCostUnitResourceRequestResourceInstanceList& operator=(AllocateCostUnitResourceRequestResourceInstanceList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->apportionCode_ != nullptr
        && this->commodityCode_ != nullptr && this->resourceId_ != nullptr && this->resourceUserId_ != nullptr; };
    // apportionCode Field Functions 
    bool hasApportionCode() const { return this->apportionCode_ != nullptr;};
    void deleteApportionCode() { this->apportionCode_ = nullptr;};
    inline string apportionCode() const { DARABONBA_PTR_GET_DEFAULT(apportionCode_, "") };
    inline AllocateCostUnitResourceRequestResourceInstanceList& setApportionCode(string apportionCode) { DARABONBA_PTR_SET_VALUE(apportionCode_, apportionCode) };


    // commodityCode Field Functions 
    bool hasCommodityCode() const { return this->commodityCode_ != nullptr;};
    void deleteCommodityCode() { this->commodityCode_ = nullptr;};
    inline string commodityCode() const { DARABONBA_PTR_GET_DEFAULT(commodityCode_, "") };
    inline AllocateCostUnitResourceRequestResourceInstanceList& setCommodityCode(string commodityCode) { DARABONBA_PTR_SET_VALUE(commodityCode_, commodityCode) };


    // resourceId Field Functions 
    bool hasResourceId() const { return this->resourceId_ != nullptr;};
    void deleteResourceId() { this->resourceId_ = nullptr;};
    inline string resourceId() const { DARABONBA_PTR_GET_DEFAULT(resourceId_, "") };
    inline AllocateCostUnitResourceRequestResourceInstanceList& setResourceId(string resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };


    // resourceUserId Field Functions 
    bool hasResourceUserId() const { return this->resourceUserId_ != nullptr;};
    void deleteResourceUserId() { this->resourceUserId_ = nullptr;};
    inline int64_t resourceUserId() const { DARABONBA_PTR_GET_DEFAULT(resourceUserId_, 0L) };
    inline AllocateCostUnitResourceRequestResourceInstanceList& setResourceUserId(int64_t resourceUserId) { DARABONBA_PTR_SET_VALUE(resourceUserId_, resourceUserId) };


  protected:
    // The split item of the shared instance. This parameter is required only for shared instances.
    // 
    // *   Eight cloud services support bill splitting. The commodity codes of the eight services are oss, dcdn, snapshot, vod, cdn, live, and cbwp.
    // *   You can obtain the split item of a shared instance by calling QueryCostUnitResource operation to obtain all resource instances within a cost center.
    std::shared_ptr<string> apportionCode_ = nullptr;
    // The commodity code of the resource instance.
    // 
    // This parameter is required.
    std::shared_ptr<string> commodityCode_ = nullptr;
    // The ID of the resource instance.
    // 
    // This parameter is required.
    std::shared_ptr<string> resourceId_ = nullptr;
    // The user ID of the resource instance owner.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> resourceUserId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20171214
#endif
