// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ALLOCATECOSTCENTERRESOURCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ALLOCATECOSTCENTERRESOURCEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/AllocateCostCenterResourceRequestResourceInstanceList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BssOpenApi20230930
{
namespace Models
{
  class AllocateCostCenterResourceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AllocateCostCenterResourceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(FromCostCenterId, fromCostCenterId_);
      DARABONBA_PTR_TO_JSON(FromOwnerAccountId, fromOwnerAccountId_);
      DARABONBA_PTR_TO_JSON(Nbid, nbid_);
      DARABONBA_PTR_TO_JSON(ResourceInstanceList, resourceInstanceList_);
      DARABONBA_PTR_TO_JSON(ToCostCenterId, toCostCenterId_);
    };
    friend void from_json(const Darabonba::Json& j, AllocateCostCenterResourceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(FromCostCenterId, fromCostCenterId_);
      DARABONBA_PTR_FROM_JSON(FromOwnerAccountId, fromOwnerAccountId_);
      DARABONBA_PTR_FROM_JSON(Nbid, nbid_);
      DARABONBA_PTR_FROM_JSON(ResourceInstanceList, resourceInstanceList_);
      DARABONBA_PTR_FROM_JSON(ToCostCenterId, toCostCenterId_);
    };
    AllocateCostCenterResourceRequest() = default ;
    AllocateCostCenterResourceRequest(const AllocateCostCenterResourceRequest &) = default ;
    AllocateCostCenterResourceRequest(AllocateCostCenterResourceRequest &&) = default ;
    AllocateCostCenterResourceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AllocateCostCenterResourceRequest() = default ;
    AllocateCostCenterResourceRequest& operator=(const AllocateCostCenterResourceRequest &) = default ;
    AllocateCostCenterResourceRequest& operator=(AllocateCostCenterResourceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->fromCostCenterId_ != nullptr
        && this->fromOwnerAccountId_ != nullptr && this->nbid_ != nullptr && this->resourceInstanceList_ != nullptr && this->toCostCenterId_ != nullptr; };
    // fromCostCenterId Field Functions 
    bool hasFromCostCenterId() const { return this->fromCostCenterId_ != nullptr;};
    void deleteFromCostCenterId() { this->fromCostCenterId_ = nullptr;};
    inline int64_t fromCostCenterId() const { DARABONBA_PTR_GET_DEFAULT(fromCostCenterId_, 0L) };
    inline AllocateCostCenterResourceRequest& setFromCostCenterId(int64_t fromCostCenterId) { DARABONBA_PTR_SET_VALUE(fromCostCenterId_, fromCostCenterId) };


    // fromOwnerAccountId Field Functions 
    bool hasFromOwnerAccountId() const { return this->fromOwnerAccountId_ != nullptr;};
    void deleteFromOwnerAccountId() { this->fromOwnerAccountId_ = nullptr;};
    inline int64_t fromOwnerAccountId() const { DARABONBA_PTR_GET_DEFAULT(fromOwnerAccountId_, 0L) };
    inline AllocateCostCenterResourceRequest& setFromOwnerAccountId(int64_t fromOwnerAccountId) { DARABONBA_PTR_SET_VALUE(fromOwnerAccountId_, fromOwnerAccountId) };


    // nbid Field Functions 
    bool hasNbid() const { return this->nbid_ != nullptr;};
    void deleteNbid() { this->nbid_ = nullptr;};
    inline string nbid() const { DARABONBA_PTR_GET_DEFAULT(nbid_, "") };
    inline AllocateCostCenterResourceRequest& setNbid(string nbid) { DARABONBA_PTR_SET_VALUE(nbid_, nbid) };


    // resourceInstanceList Field Functions 
    bool hasResourceInstanceList() const { return this->resourceInstanceList_ != nullptr;};
    void deleteResourceInstanceList() { this->resourceInstanceList_ = nullptr;};
    inline const vector<AllocateCostCenterResourceRequestResourceInstanceList> & resourceInstanceList() const { DARABONBA_PTR_GET_CONST(resourceInstanceList_, vector<AllocateCostCenterResourceRequestResourceInstanceList>) };
    inline vector<AllocateCostCenterResourceRequestResourceInstanceList> resourceInstanceList() { DARABONBA_PTR_GET(resourceInstanceList_, vector<AllocateCostCenterResourceRequestResourceInstanceList>) };
    inline AllocateCostCenterResourceRequest& setResourceInstanceList(const vector<AllocateCostCenterResourceRequestResourceInstanceList> & resourceInstanceList) { DARABONBA_PTR_SET_VALUE(resourceInstanceList_, resourceInstanceList) };
    inline AllocateCostCenterResourceRequest& setResourceInstanceList(vector<AllocateCostCenterResourceRequestResourceInstanceList> && resourceInstanceList) { DARABONBA_PTR_SET_RVALUE(resourceInstanceList_, resourceInstanceList) };


    // toCostCenterId Field Functions 
    bool hasToCostCenterId() const { return this->toCostCenterId_ != nullptr;};
    void deleteToCostCenterId() { this->toCostCenterId_ = nullptr;};
    inline int64_t toCostCenterId() const { DARABONBA_PTR_GET_DEFAULT(toCostCenterId_, 0L) };
    inline AllocateCostCenterResourceRequest& setToCostCenterId(int64_t toCostCenterId) { DARABONBA_PTR_SET_VALUE(toCostCenterId_, toCostCenterId) };


  protected:
    std::shared_ptr<int64_t> fromCostCenterId_ = nullptr;
    std::shared_ptr<int64_t> fromOwnerAccountId_ = nullptr;
    std::shared_ptr<string> nbid_ = nullptr;
    // This parameter is required.
    std::shared_ptr<vector<AllocateCostCenterResourceRequestResourceInstanceList>> resourceInstanceList_ = nullptr;
    std::shared_ptr<int64_t> toCostCenterId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20230930
#endif
