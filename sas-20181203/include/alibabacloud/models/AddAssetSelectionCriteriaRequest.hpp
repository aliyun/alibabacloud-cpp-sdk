// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDASSETSELECTIONCRITERIAREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADDASSETSELECTIONCRITERIAREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/AddAssetSelectionCriteriaRequestTargetOperationList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class AddAssetSelectionCriteriaRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddAssetSelectionCriteriaRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Criteria, criteria_);
      DARABONBA_PTR_TO_JSON(CriteriaOperation, criteriaOperation_);
      DARABONBA_PTR_TO_JSON(SelectionKey, selectionKey_);
      DARABONBA_PTR_TO_JSON(TargetOperationList, targetOperationList_);
    };
    friend void from_json(const Darabonba::Json& j, AddAssetSelectionCriteriaRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Criteria, criteria_);
      DARABONBA_PTR_FROM_JSON(CriteriaOperation, criteriaOperation_);
      DARABONBA_PTR_FROM_JSON(SelectionKey, selectionKey_);
      DARABONBA_PTR_FROM_JSON(TargetOperationList, targetOperationList_);
    };
    AddAssetSelectionCriteriaRequest() = default ;
    AddAssetSelectionCriteriaRequest(const AddAssetSelectionCriteriaRequest &) = default ;
    AddAssetSelectionCriteriaRequest(AddAssetSelectionCriteriaRequest &&) = default ;
    AddAssetSelectionCriteriaRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddAssetSelectionCriteriaRequest() = default ;
    AddAssetSelectionCriteriaRequest& operator=(const AddAssetSelectionCriteriaRequest &) = default ;
    AddAssetSelectionCriteriaRequest& operator=(AddAssetSelectionCriteriaRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->criteria_ != nullptr
        && this->criteriaOperation_ != nullptr && this->selectionKey_ != nullptr && this->targetOperationList_ != nullptr; };
    // criteria Field Functions 
    bool hasCriteria() const { return this->criteria_ != nullptr;};
    void deleteCriteria() { this->criteria_ = nullptr;};
    inline string criteria() const { DARABONBA_PTR_GET_DEFAULT(criteria_, "") };
    inline AddAssetSelectionCriteriaRequest& setCriteria(string criteria) { DARABONBA_PTR_SET_VALUE(criteria_, criteria) };


    // criteriaOperation Field Functions 
    bool hasCriteriaOperation() const { return this->criteriaOperation_ != nullptr;};
    void deleteCriteriaOperation() { this->criteriaOperation_ = nullptr;};
    inline string criteriaOperation() const { DARABONBA_PTR_GET_DEFAULT(criteriaOperation_, "") };
    inline AddAssetSelectionCriteriaRequest& setCriteriaOperation(string criteriaOperation) { DARABONBA_PTR_SET_VALUE(criteriaOperation_, criteriaOperation) };


    // selectionKey Field Functions 
    bool hasSelectionKey() const { return this->selectionKey_ != nullptr;};
    void deleteSelectionKey() { this->selectionKey_ = nullptr;};
    inline string selectionKey() const { DARABONBA_PTR_GET_DEFAULT(selectionKey_, "") };
    inline AddAssetSelectionCriteriaRequest& setSelectionKey(string selectionKey) { DARABONBA_PTR_SET_VALUE(selectionKey_, selectionKey) };


    // targetOperationList Field Functions 
    bool hasTargetOperationList() const { return this->targetOperationList_ != nullptr;};
    void deleteTargetOperationList() { this->targetOperationList_ = nullptr;};
    inline const vector<AddAssetSelectionCriteriaRequestTargetOperationList> & targetOperationList() const { DARABONBA_PTR_GET_CONST(targetOperationList_, vector<AddAssetSelectionCriteriaRequestTargetOperationList>) };
    inline vector<AddAssetSelectionCriteriaRequestTargetOperationList> targetOperationList() { DARABONBA_PTR_GET(targetOperationList_, vector<AddAssetSelectionCriteriaRequestTargetOperationList>) };
    inline AddAssetSelectionCriteriaRequest& setTargetOperationList(const vector<AddAssetSelectionCriteriaRequestTargetOperationList> & targetOperationList) { DARABONBA_PTR_SET_VALUE(targetOperationList_, targetOperationList) };
    inline AddAssetSelectionCriteriaRequest& setTargetOperationList(vector<AddAssetSelectionCriteriaRequestTargetOperationList> && targetOperationList) { DARABONBA_PTR_SET_RVALUE(targetOperationList_, targetOperationList) };


  protected:
    // The search conditions that are used to query assets. The value of this parameter is in the JSON format and is case-sensitive.
    // 
    // > A search condition can be an instance ID, instance name, virtual private cloud (VPC) ID, region, or public IP address. You can call the [DescribeCriteria](~~DescribeCriteria~~) operation to query the supported search conditions.
    std::shared_ptr<string> criteria_ = nullptr;
    // The type of the operation on search conditions. Valid values:
    // 
    // *   **add**: adds assets.
    // *   **del**: deletes assets.
    std::shared_ptr<string> criteriaOperation_ = nullptr;
    // The unique ID of the asset.
    // 
    // This parameter is required.
    std::shared_ptr<string> selectionKey_ = nullptr;
    // The list of assets.
    std::shared_ptr<vector<AddAssetSelectionCriteriaRequestTargetOperationList>> targetOperationList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
