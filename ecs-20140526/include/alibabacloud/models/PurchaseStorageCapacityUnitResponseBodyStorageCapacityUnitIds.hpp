// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PURCHASESTORAGECAPACITYUNITRESPONSEBODYSTORAGECAPACITYUNITIDS_HPP_
#define ALIBABACLOUD_MODELS_PURCHASESTORAGECAPACITYUNITRESPONSEBODYSTORAGECAPACITYUNITIDS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class PurchaseStorageCapacityUnitResponseBodyStorageCapacityUnitIds : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PurchaseStorageCapacityUnitResponseBodyStorageCapacityUnitIds& obj) { 
      DARABONBA_PTR_TO_JSON(StorageCapacityUnitId, storageCapacityUnitId_);
    };
    friend void from_json(const Darabonba::Json& j, PurchaseStorageCapacityUnitResponseBodyStorageCapacityUnitIds& obj) { 
      DARABONBA_PTR_FROM_JSON(StorageCapacityUnitId, storageCapacityUnitId_);
    };
    PurchaseStorageCapacityUnitResponseBodyStorageCapacityUnitIds() = default ;
    PurchaseStorageCapacityUnitResponseBodyStorageCapacityUnitIds(const PurchaseStorageCapacityUnitResponseBodyStorageCapacityUnitIds &) = default ;
    PurchaseStorageCapacityUnitResponseBodyStorageCapacityUnitIds(PurchaseStorageCapacityUnitResponseBodyStorageCapacityUnitIds &&) = default ;
    PurchaseStorageCapacityUnitResponseBodyStorageCapacityUnitIds(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PurchaseStorageCapacityUnitResponseBodyStorageCapacityUnitIds() = default ;
    PurchaseStorageCapacityUnitResponseBodyStorageCapacityUnitIds& operator=(const PurchaseStorageCapacityUnitResponseBodyStorageCapacityUnitIds &) = default ;
    PurchaseStorageCapacityUnitResponseBodyStorageCapacityUnitIds& operator=(PurchaseStorageCapacityUnitResponseBodyStorageCapacityUnitIds &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->storageCapacityUnitId_ != nullptr; };
    // storageCapacityUnitId Field Functions 
    bool hasStorageCapacityUnitId() const { return this->storageCapacityUnitId_ != nullptr;};
    void deleteStorageCapacityUnitId() { this->storageCapacityUnitId_ = nullptr;};
    inline const vector<string> & storageCapacityUnitId() const { DARABONBA_PTR_GET_CONST(storageCapacityUnitId_, vector<string>) };
    inline vector<string> storageCapacityUnitId() { DARABONBA_PTR_GET(storageCapacityUnitId_, vector<string>) };
    inline PurchaseStorageCapacityUnitResponseBodyStorageCapacityUnitIds& setStorageCapacityUnitId(const vector<string> & storageCapacityUnitId) { DARABONBA_PTR_SET_VALUE(storageCapacityUnitId_, storageCapacityUnitId) };
    inline PurchaseStorageCapacityUnitResponseBodyStorageCapacityUnitIds& setStorageCapacityUnitId(vector<string> && storageCapacityUnitId) { DARABONBA_PTR_SET_RVALUE(storageCapacityUnitId_, storageCapacityUnitId) };


  protected:
    std::shared_ptr<vector<string>> storageCapacityUnitId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
