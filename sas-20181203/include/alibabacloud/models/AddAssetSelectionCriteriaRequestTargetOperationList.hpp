// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDASSETSELECTIONCRITERIAREQUESTTARGETOPERATIONLIST_HPP_
#define ALIBABACLOUD_MODELS_ADDASSETSELECTIONCRITERIAREQUESTTARGETOPERATIONLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class AddAssetSelectionCriteriaRequestTargetOperationList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddAssetSelectionCriteriaRequestTargetOperationList& obj) { 
      DARABONBA_PTR_TO_JSON(Operation, operation_);
      DARABONBA_PTR_TO_JSON(Target, target_);
    };
    friend void from_json(const Darabonba::Json& j, AddAssetSelectionCriteriaRequestTargetOperationList& obj) { 
      DARABONBA_PTR_FROM_JSON(Operation, operation_);
      DARABONBA_PTR_FROM_JSON(Target, target_);
    };
    AddAssetSelectionCriteriaRequestTargetOperationList() = default ;
    AddAssetSelectionCriteriaRequestTargetOperationList(const AddAssetSelectionCriteriaRequestTargetOperationList &) = default ;
    AddAssetSelectionCriteriaRequestTargetOperationList(AddAssetSelectionCriteriaRequestTargetOperationList &&) = default ;
    AddAssetSelectionCriteriaRequestTargetOperationList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddAssetSelectionCriteriaRequestTargetOperationList() = default ;
    AddAssetSelectionCriteriaRequestTargetOperationList& operator=(const AddAssetSelectionCriteriaRequestTargetOperationList &) = default ;
    AddAssetSelectionCriteriaRequestTargetOperationList& operator=(AddAssetSelectionCriteriaRequestTargetOperationList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->operation_ == nullptr
        && return this->target_ == nullptr; };
    // operation Field Functions 
    bool hasOperation() const { return this->operation_ != nullptr;};
    void deleteOperation() { this->operation_ = nullptr;};
    inline string operation() const { DARABONBA_PTR_GET_DEFAULT(operation_, "") };
    inline AddAssetSelectionCriteriaRequestTargetOperationList& setOperation(string operation) { DARABONBA_PTR_SET_VALUE(operation_, operation) };


    // target Field Functions 
    bool hasTarget() const { return this->target_ != nullptr;};
    void deleteTarget() { this->target_ = nullptr;};
    inline string target() const { DARABONBA_PTR_GET_DEFAULT(target_, "") };
    inline AddAssetSelectionCriteriaRequestTargetOperationList& setTarget(string target) { DARABONBA_PTR_SET_VALUE(target_, target) };


  protected:
    // The type of the operation. Valid values:
    // 
    // *   **add**
    // *   **del**
    std::shared_ptr<string> operation_ = nullptr;
    // The ID of the asset.
    std::shared_ptr<string> target_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
