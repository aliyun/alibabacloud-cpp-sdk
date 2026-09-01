// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDASSETSELECTIONCRITERIAREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADDASSETSELECTIONCRITERIAREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
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
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(Criteria, criteria_);
      DARABONBA_PTR_TO_JSON(CriteriaOperation, criteriaOperation_);
      DARABONBA_PTR_TO_JSON(SelectionKey, selectionKey_);
      DARABONBA_PTR_TO_JSON(TargetOperationList, targetOperationList_);
    };
    friend void from_json(const Darabonba::Json& j, AddAssetSelectionCriteriaRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
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
    class TargetOperationList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const TargetOperationList& obj) { 
        DARABONBA_PTR_TO_JSON(Operation, operation_);
        DARABONBA_PTR_TO_JSON(Target, target_);
      };
      friend void from_json(const Darabonba::Json& j, TargetOperationList& obj) { 
        DARABONBA_PTR_FROM_JSON(Operation, operation_);
        DARABONBA_PTR_FROM_JSON(Target, target_);
      };
      TargetOperationList() = default ;
      TargetOperationList(const TargetOperationList &) = default ;
      TargetOperationList(TargetOperationList &&) = default ;
      TargetOperationList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~TargetOperationList() = default ;
      TargetOperationList& operator=(const TargetOperationList &) = default ;
      TargetOperationList& operator=(TargetOperationList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->operation_ == nullptr
        && this->target_ == nullptr; };
      // operation Field Functions 
      bool hasOperation() const { return this->operation_ != nullptr;};
      void deleteOperation() { this->operation_ = nullptr;};
      inline string getOperation() const { DARABONBA_PTR_GET_DEFAULT(operation_, "") };
      inline TargetOperationList& setOperation(string operation) { DARABONBA_PTR_SET_VALUE(operation_, operation) };


      // target Field Functions 
      bool hasTarget() const { return this->target_ != nullptr;};
      void deleteTarget() { this->target_ = nullptr;};
      inline string getTarget() const { DARABONBA_PTR_GET_DEFAULT(target_, "") };
      inline TargetOperationList& setTarget(string target) { DARABONBA_PTR_SET_VALUE(target_, target) };


    protected:
      // The operation type. Valid values:
      // 
      // - **add**: adds the asset.
      // - **del**: deletes the asset.
      shared_ptr<string> operation_ {};
      // The asset ID. If you select assets by machine, the value is the UUID of the machine. If you select assets by group, the value is the group ID. If you select assets by VPC, the value is the VPC ID.
      shared_ptr<string> target_ {};
    };

    virtual bool empty() const override { return this->clientToken_ == nullptr
        && this->criteria_ == nullptr && this->criteriaOperation_ == nullptr && this->selectionKey_ == nullptr && this->targetOperationList_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline AddAssetSelectionCriteriaRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // criteria Field Functions 
    bool hasCriteria() const { return this->criteria_ != nullptr;};
    void deleteCriteria() { this->criteria_ = nullptr;};
    inline string getCriteria() const { DARABONBA_PTR_GET_DEFAULT(criteria_, "") };
    inline AddAssetSelectionCriteriaRequest& setCriteria(string criteria) { DARABONBA_PTR_SET_VALUE(criteria_, criteria) };


    // criteriaOperation Field Functions 
    bool hasCriteriaOperation() const { return this->criteriaOperation_ != nullptr;};
    void deleteCriteriaOperation() { this->criteriaOperation_ = nullptr;};
    inline string getCriteriaOperation() const { DARABONBA_PTR_GET_DEFAULT(criteriaOperation_, "") };
    inline AddAssetSelectionCriteriaRequest& setCriteriaOperation(string criteriaOperation) { DARABONBA_PTR_SET_VALUE(criteriaOperation_, criteriaOperation) };


    // selectionKey Field Functions 
    bool hasSelectionKey() const { return this->selectionKey_ != nullptr;};
    void deleteSelectionKey() { this->selectionKey_ = nullptr;};
    inline string getSelectionKey() const { DARABONBA_PTR_GET_DEFAULT(selectionKey_, "") };
    inline AddAssetSelectionCriteriaRequest& setSelectionKey(string selectionKey) { DARABONBA_PTR_SET_VALUE(selectionKey_, selectionKey) };


    // targetOperationList Field Functions 
    bool hasTargetOperationList() const { return this->targetOperationList_ != nullptr;};
    void deleteTargetOperationList() { this->targetOperationList_ = nullptr;};
    inline const vector<AddAssetSelectionCriteriaRequest::TargetOperationList> & getTargetOperationList() const { DARABONBA_PTR_GET_CONST(targetOperationList_, vector<AddAssetSelectionCriteriaRequest::TargetOperationList>) };
    inline vector<AddAssetSelectionCriteriaRequest::TargetOperationList> getTargetOperationList() { DARABONBA_PTR_GET(targetOperationList_, vector<AddAssetSelectionCriteriaRequest::TargetOperationList>) };
    inline AddAssetSelectionCriteriaRequest& setTargetOperationList(const vector<AddAssetSelectionCriteriaRequest::TargetOperationList> & targetOperationList) { DARABONBA_PTR_SET_VALUE(targetOperationList_, targetOperationList) };
    inline AddAssetSelectionCriteriaRequest& setTargetOperationList(vector<AddAssetSelectionCriteriaRequest::TargetOperationList> && targetOperationList) { DARABONBA_PTR_SET_RVALUE(targetOperationList_, targetOperationList) };


  protected:
    // The client token that is used to ensure the idempotence of the request. Different requests should use different tokens. The token supports only ASCII characters and cannot exceed 64 characters in length.
    shared_ptr<string> clientToken_ {};
    // The conditions for searching assets. This parameter is in JSON format. Pay attention to the letter case when you specify this parameter.
    // > You can search for assets by instance ID, instance name, VPC ID, region, public IP address, and other conditions. Call the [DescribeCriteria](~~DescribeCriteria~~) operation to query the supported search conditions.
    shared_ptr<string> criteria_ {};
    // The operation type for criteria. Valid values:
    // 
    // - **add**: adds assets.
    // - **del**: deletes assets.
    shared_ptr<string> criteriaOperation_ {};
    // The unique identifier of the asset selection.
    // 
    // This parameter is required.
    shared_ptr<string> selectionKey_ {};
    // The list of assets.
    shared_ptr<vector<AddAssetSelectionCriteriaRequest::TargetOperationList>> targetOperationList_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
