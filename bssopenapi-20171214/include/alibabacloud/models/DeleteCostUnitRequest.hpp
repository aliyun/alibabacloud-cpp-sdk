// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETECOSTUNITREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETECOSTUNITREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BssOpenApi20171214
{
namespace Models
{
  class DeleteCostUnitRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteCostUnitRequest& obj) { 
      DARABONBA_PTR_TO_JSON(OwnerUid, ownerUid_);
      DARABONBA_PTR_TO_JSON(UnitId, unitId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteCostUnitRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(OwnerUid, ownerUid_);
      DARABONBA_PTR_FROM_JSON(UnitId, unitId_);
    };
    DeleteCostUnitRequest() = default ;
    DeleteCostUnitRequest(const DeleteCostUnitRequest &) = default ;
    DeleteCostUnitRequest(DeleteCostUnitRequest &&) = default ;
    DeleteCostUnitRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteCostUnitRequest() = default ;
    DeleteCostUnitRequest& operator=(const DeleteCostUnitRequest &) = default ;
    DeleteCostUnitRequest& operator=(DeleteCostUnitRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->ownerUid_ != nullptr
        && this->unitId_ != nullptr; };
    // ownerUid Field Functions 
    bool hasOwnerUid() const { return this->ownerUid_ != nullptr;};
    void deleteOwnerUid() { this->ownerUid_ = nullptr;};
    inline int64_t ownerUid() const { DARABONBA_PTR_GET_DEFAULT(ownerUid_, 0L) };
    inline DeleteCostUnitRequest& setOwnerUid(int64_t ownerUid) { DARABONBA_PTR_SET_VALUE(ownerUid_, ownerUid) };


    // unitId Field Functions 
    bool hasUnitId() const { return this->unitId_ != nullptr;};
    void deleteUnitId() { this->unitId_ = nullptr;};
    inline int64_t unitId() const { DARABONBA_PTR_GET_DEFAULT(unitId_, 0L) };
    inline DeleteCostUnitRequest& setUnitId(int64_t unitId) { DARABONBA_PTR_SET_VALUE(unitId_, unitId) };


  protected:
    // The user ID of the cost center owner.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> ownerUid_ = nullptr;
    // The ID of the cost center. A value of -1 indicates the root cost center.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> unitId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20171214
#endif
