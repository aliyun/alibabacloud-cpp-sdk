// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETECOSTCENTERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETECOSTCENTERREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BssOpenApi20230930
{
namespace Models
{
  class DeleteCostCenterRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteCostCenterRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CostCenterId, costCenterId_);
      DARABONBA_PTR_TO_JSON(Nbid, nbid_);
      DARABONBA_PTR_TO_JSON(OwnerAccountId, ownerAccountId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteCostCenterRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CostCenterId, costCenterId_);
      DARABONBA_PTR_FROM_JSON(Nbid, nbid_);
      DARABONBA_PTR_FROM_JSON(OwnerAccountId, ownerAccountId_);
    };
    DeleteCostCenterRequest() = default ;
    DeleteCostCenterRequest(const DeleteCostCenterRequest &) = default ;
    DeleteCostCenterRequest(DeleteCostCenterRequest &&) = default ;
    DeleteCostCenterRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteCostCenterRequest() = default ;
    DeleteCostCenterRequest& operator=(const DeleteCostCenterRequest &) = default ;
    DeleteCostCenterRequest& operator=(DeleteCostCenterRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->costCenterId_ == nullptr
        && this->nbid_ == nullptr && this->ownerAccountId_ == nullptr; };
    // costCenterId Field Functions 
    bool hasCostCenterId() const { return this->costCenterId_ != nullptr;};
    void deleteCostCenterId() { this->costCenterId_ = nullptr;};
    inline int64_t getCostCenterId() const { DARABONBA_PTR_GET_DEFAULT(costCenterId_, 0L) };
    inline DeleteCostCenterRequest& setCostCenterId(int64_t costCenterId) { DARABONBA_PTR_SET_VALUE(costCenterId_, costCenterId) };


    // nbid Field Functions 
    bool hasNbid() const { return this->nbid_ != nullptr;};
    void deleteNbid() { this->nbid_ = nullptr;};
    inline string getNbid() const { DARABONBA_PTR_GET_DEFAULT(nbid_, "") };
    inline DeleteCostCenterRequest& setNbid(string nbid) { DARABONBA_PTR_SET_VALUE(nbid_, nbid) };


    // ownerAccountId Field Functions 
    bool hasOwnerAccountId() const { return this->ownerAccountId_ != nullptr;};
    void deleteOwnerAccountId() { this->ownerAccountId_ = nullptr;};
    inline int64_t getOwnerAccountId() const { DARABONBA_PTR_GET_DEFAULT(ownerAccountId_, 0L) };
    inline DeleteCostCenterRequest& setOwnerAccountId(int64_t ownerAccountId) { DARABONBA_PTR_SET_VALUE(ownerAccountId_, ownerAccountId) };


  protected:
    // This parameter is required.
    shared_ptr<int64_t> costCenterId_ {};
    shared_ptr<string> nbid_ {};
    // This parameter is required.
    shared_ptr<int64_t> ownerAccountId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20230930
#endif
