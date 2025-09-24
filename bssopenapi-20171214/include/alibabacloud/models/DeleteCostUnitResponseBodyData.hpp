// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETECOSTUNITRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_DELETECOSTUNITRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BssOpenApi20171214
{
namespace Models
{
  class DeleteCostUnitResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteCostUnitResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(IsSuccess, isSuccess_);
      DARABONBA_PTR_TO_JSON(OwnerUid, ownerUid_);
      DARABONBA_PTR_TO_JSON(UnitId, unitId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteCostUnitResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(IsSuccess, isSuccess_);
      DARABONBA_PTR_FROM_JSON(OwnerUid, ownerUid_);
      DARABONBA_PTR_FROM_JSON(UnitId, unitId_);
    };
    DeleteCostUnitResponseBodyData() = default ;
    DeleteCostUnitResponseBodyData(const DeleteCostUnitResponseBodyData &) = default ;
    DeleteCostUnitResponseBodyData(DeleteCostUnitResponseBodyData &&) = default ;
    DeleteCostUnitResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteCostUnitResponseBodyData() = default ;
    DeleteCostUnitResponseBodyData& operator=(const DeleteCostUnitResponseBodyData &) = default ;
    DeleteCostUnitResponseBodyData& operator=(DeleteCostUnitResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->isSuccess_ != nullptr
        && this->ownerUid_ != nullptr && this->unitId_ != nullptr; };
    // isSuccess Field Functions 
    bool hasIsSuccess() const { return this->isSuccess_ != nullptr;};
    void deleteIsSuccess() { this->isSuccess_ = nullptr;};
    inline bool isSuccess() const { DARABONBA_PTR_GET_DEFAULT(isSuccess_, false) };
    inline DeleteCostUnitResponseBodyData& setIsSuccess(bool isSuccess) { DARABONBA_PTR_SET_VALUE(isSuccess_, isSuccess) };


    // ownerUid Field Functions 
    bool hasOwnerUid() const { return this->ownerUid_ != nullptr;};
    void deleteOwnerUid() { this->ownerUid_ = nullptr;};
    inline int64_t ownerUid() const { DARABONBA_PTR_GET_DEFAULT(ownerUid_, 0L) };
    inline DeleteCostUnitResponseBodyData& setOwnerUid(int64_t ownerUid) { DARABONBA_PTR_SET_VALUE(ownerUid_, ownerUid) };


    // unitId Field Functions 
    bool hasUnitId() const { return this->unitId_ != nullptr;};
    void deleteUnitId() { this->unitId_ = nullptr;};
    inline int64_t unitId() const { DARABONBA_PTR_GET_DEFAULT(unitId_, 0L) };
    inline DeleteCostUnitResponseBodyData& setUnitId(int64_t unitId) { DARABONBA_PTR_SET_VALUE(unitId_, unitId) };


  protected:
    // Indicates whether the call is complete.
    std::shared_ptr<bool> isSuccess_ = nullptr;
    // The user ID of the cost center owner.
    std::shared_ptr<int64_t> ownerUid_ = nullptr;
    // The ID of the cost center.
    std::shared_ptr<int64_t> unitId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20171214
#endif
