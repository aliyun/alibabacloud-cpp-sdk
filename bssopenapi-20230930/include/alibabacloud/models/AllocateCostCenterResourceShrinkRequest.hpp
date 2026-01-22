// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ALLOCATECOSTCENTERRESOURCESHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ALLOCATECOSTCENTERRESOURCESHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BssOpenApi20230930
{
namespace Models
{
  class AllocateCostCenterResourceShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AllocateCostCenterResourceShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(FromCostCenterId, fromCostCenterId_);
      DARABONBA_PTR_TO_JSON(FromOwnerAccountId, fromOwnerAccountId_);
      DARABONBA_PTR_TO_JSON(Nbid, nbid_);
      DARABONBA_PTR_TO_JSON(ResourceInstanceList, resourceInstanceListShrink_);
      DARABONBA_PTR_TO_JSON(ToCostCenterId, toCostCenterId_);
    };
    friend void from_json(const Darabonba::Json& j, AllocateCostCenterResourceShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(FromCostCenterId, fromCostCenterId_);
      DARABONBA_PTR_FROM_JSON(FromOwnerAccountId, fromOwnerAccountId_);
      DARABONBA_PTR_FROM_JSON(Nbid, nbid_);
      DARABONBA_PTR_FROM_JSON(ResourceInstanceList, resourceInstanceListShrink_);
      DARABONBA_PTR_FROM_JSON(ToCostCenterId, toCostCenterId_);
    };
    AllocateCostCenterResourceShrinkRequest() = default ;
    AllocateCostCenterResourceShrinkRequest(const AllocateCostCenterResourceShrinkRequest &) = default ;
    AllocateCostCenterResourceShrinkRequest(AllocateCostCenterResourceShrinkRequest &&) = default ;
    AllocateCostCenterResourceShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AllocateCostCenterResourceShrinkRequest() = default ;
    AllocateCostCenterResourceShrinkRequest& operator=(const AllocateCostCenterResourceShrinkRequest &) = default ;
    AllocateCostCenterResourceShrinkRequest& operator=(AllocateCostCenterResourceShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->fromCostCenterId_ == nullptr
        && this->fromOwnerAccountId_ == nullptr && this->nbid_ == nullptr && this->resourceInstanceListShrink_ == nullptr && this->toCostCenterId_ == nullptr; };
    // fromCostCenterId Field Functions 
    bool hasFromCostCenterId() const { return this->fromCostCenterId_ != nullptr;};
    void deleteFromCostCenterId() { this->fromCostCenterId_ = nullptr;};
    inline int64_t getFromCostCenterId() const { DARABONBA_PTR_GET_DEFAULT(fromCostCenterId_, 0L) };
    inline AllocateCostCenterResourceShrinkRequest& setFromCostCenterId(int64_t fromCostCenterId) { DARABONBA_PTR_SET_VALUE(fromCostCenterId_, fromCostCenterId) };


    // fromOwnerAccountId Field Functions 
    bool hasFromOwnerAccountId() const { return this->fromOwnerAccountId_ != nullptr;};
    void deleteFromOwnerAccountId() { this->fromOwnerAccountId_ = nullptr;};
    inline int64_t getFromOwnerAccountId() const { DARABONBA_PTR_GET_DEFAULT(fromOwnerAccountId_, 0L) };
    inline AllocateCostCenterResourceShrinkRequest& setFromOwnerAccountId(int64_t fromOwnerAccountId) { DARABONBA_PTR_SET_VALUE(fromOwnerAccountId_, fromOwnerAccountId) };


    // nbid Field Functions 
    bool hasNbid() const { return this->nbid_ != nullptr;};
    void deleteNbid() { this->nbid_ = nullptr;};
    inline string getNbid() const { DARABONBA_PTR_GET_DEFAULT(nbid_, "") };
    inline AllocateCostCenterResourceShrinkRequest& setNbid(string nbid) { DARABONBA_PTR_SET_VALUE(nbid_, nbid) };


    // resourceInstanceListShrink Field Functions 
    bool hasResourceInstanceListShrink() const { return this->resourceInstanceListShrink_ != nullptr;};
    void deleteResourceInstanceListShrink() { this->resourceInstanceListShrink_ = nullptr;};
    inline string getResourceInstanceListShrink() const { DARABONBA_PTR_GET_DEFAULT(resourceInstanceListShrink_, "") };
    inline AllocateCostCenterResourceShrinkRequest& setResourceInstanceListShrink(string resourceInstanceListShrink) { DARABONBA_PTR_SET_VALUE(resourceInstanceListShrink_, resourceInstanceListShrink) };


    // toCostCenterId Field Functions 
    bool hasToCostCenterId() const { return this->toCostCenterId_ != nullptr;};
    void deleteToCostCenterId() { this->toCostCenterId_ = nullptr;};
    inline int64_t getToCostCenterId() const { DARABONBA_PTR_GET_DEFAULT(toCostCenterId_, 0L) };
    inline AllocateCostCenterResourceShrinkRequest& setToCostCenterId(int64_t toCostCenterId) { DARABONBA_PTR_SET_VALUE(toCostCenterId_, toCostCenterId) };


  protected:
    shared_ptr<int64_t> fromCostCenterId_ {};
    shared_ptr<int64_t> fromOwnerAccountId_ {};
    shared_ptr<string> nbid_ {};
    // This parameter is required.
    shared_ptr<string> resourceInstanceListShrink_ {};
    shared_ptr<int64_t> toCostCenterId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20230930
#endif
