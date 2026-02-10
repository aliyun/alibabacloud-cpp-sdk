// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATECHECKITEMREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATECHECKITEMREQUEST_HPP_
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
  class UpdateCheckItemRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateCheckItemRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AssistInfo, assistInfo_);
      DARABONBA_PTR_TO_JSON(CheckId, checkId_);
      DARABONBA_PTR_TO_JSON(CheckRule, checkRule_);
      DARABONBA_PTR_TO_JSON(CheckShowName, checkShowName_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(InstanceSubType, instanceSubType_);
      DARABONBA_PTR_TO_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_TO_JSON(Remark, remark_);
      DARABONBA_PTR_TO_JSON(RiskLevel, riskLevel_);
      DARABONBA_PTR_TO_JSON(SectionIds, sectionIds_);
      DARABONBA_PTR_TO_JSON(Solution, solution_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Vendor, vendor_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateCheckItemRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AssistInfo, assistInfo_);
      DARABONBA_PTR_FROM_JSON(CheckId, checkId_);
      DARABONBA_PTR_FROM_JSON(CheckRule, checkRule_);
      DARABONBA_PTR_FROM_JSON(CheckShowName, checkShowName_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(InstanceSubType, instanceSubType_);
      DARABONBA_PTR_FROM_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_FROM_JSON(Remark, remark_);
      DARABONBA_PTR_FROM_JSON(RiskLevel, riskLevel_);
      DARABONBA_PTR_FROM_JSON(SectionIds, sectionIds_);
      DARABONBA_PTR_FROM_JSON(Solution, solution_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Vendor, vendor_);
    };
    UpdateCheckItemRequest() = default ;
    UpdateCheckItemRequest(const UpdateCheckItemRequest &) = default ;
    UpdateCheckItemRequest(UpdateCheckItemRequest &&) = default ;
    UpdateCheckItemRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateCheckItemRequest() = default ;
    UpdateCheckItemRequest& operator=(const UpdateCheckItemRequest &) = default ;
    UpdateCheckItemRequest& operator=(UpdateCheckItemRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Solution : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Solution& obj) { 
        DARABONBA_PTR_TO_JSON(Type, type_);
        DARABONBA_PTR_TO_JSON(Value, value_);
      };
      friend void from_json(const Darabonba::Json& j, Solution& obj) { 
        DARABONBA_PTR_FROM_JSON(Type, type_);
        DARABONBA_PTR_FROM_JSON(Value, value_);
      };
      Solution() = default ;
      Solution(const Solution &) = default ;
      Solution(Solution &&) = default ;
      Solution(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Solution() = default ;
      Solution& operator=(const Solution &) = default ;
      Solution& operator=(Solution &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->type_ == nullptr
        && this->value_ == nullptr; };
      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline Solution& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      // value Field Functions 
      bool hasValue() const { return this->value_ != nullptr;};
      void deleteValue() { this->value_ = nullptr;};
      inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
      inline Solution& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    protected:
      // Type of the solution information for the check item. Values:
      // 
      // - **text**: Text
      shared_ptr<string> type_ {};
      // Content of the solution for the check item risk.
      shared_ptr<string> value_ {};
    };

    class Description : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Description& obj) { 
        DARABONBA_PTR_TO_JSON(Type, type_);
        DARABONBA_PTR_TO_JSON(Value, value_);
      };
      friend void from_json(const Darabonba::Json& j, Description& obj) { 
        DARABONBA_PTR_FROM_JSON(Type, type_);
        DARABONBA_PTR_FROM_JSON(Value, value_);
      };
      Description() = default ;
      Description(const Description &) = default ;
      Description(Description &&) = default ;
      Description(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Description() = default ;
      Description& operator=(const Description &) = default ;
      Description& operator=(Description &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->type_ == nullptr
        && this->value_ == nullptr; };
      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline Description& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      // value Field Functions 
      bool hasValue() const { return this->value_ != nullptr;};
      void deleteValue() { this->value_ = nullptr;};
      inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
      inline Description& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    protected:
      // Type of the check item description. Values:
      // 
      // - **text**: Text
      shared_ptr<string> type_ {};
      // Description of the check item.
      shared_ptr<string> value_ {};
    };

    class AssistInfo : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AssistInfo& obj) { 
        DARABONBA_PTR_TO_JSON(Type, type_);
        DARABONBA_PTR_TO_JSON(Value, value_);
      };
      friend void from_json(const Darabonba::Json& j, AssistInfo& obj) { 
        DARABONBA_PTR_FROM_JSON(Type, type_);
        DARABONBA_PTR_FROM_JSON(Value, value_);
      };
      AssistInfo() = default ;
      AssistInfo(const AssistInfo &) = default ;
      AssistInfo(AssistInfo &&) = default ;
      AssistInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AssistInfo() = default ;
      AssistInfo& operator=(const AssistInfo &) = default ;
      AssistInfo& operator=(AssistInfo &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->type_ == nullptr
        && this->value_ == nullptr; };
      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline AssistInfo& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      // value Field Functions 
      bool hasValue() const { return this->value_ != nullptr;};
      void deleteValue() { this->value_ = nullptr;};
      inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
      inline AssistInfo& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    protected:
      // Type of the help information for the check item risk. Values:
      // 
      // - **text**: Text
      shared_ptr<string> type_ {};
      // Content of the help information for the check item risk.
      shared_ptr<string> value_ {};
    };

    virtual bool empty() const override { return this->assistInfo_ == nullptr
        && this->checkId_ == nullptr && this->checkRule_ == nullptr && this->checkShowName_ == nullptr && this->description_ == nullptr && this->instanceSubType_ == nullptr
        && this->instanceType_ == nullptr && this->remark_ == nullptr && this->riskLevel_ == nullptr && this->sectionIds_ == nullptr && this->solution_ == nullptr
        && this->status_ == nullptr && this->vendor_ == nullptr; };
    // assistInfo Field Functions 
    bool hasAssistInfo() const { return this->assistInfo_ != nullptr;};
    void deleteAssistInfo() { this->assistInfo_ = nullptr;};
    inline const UpdateCheckItemRequest::AssistInfo & getAssistInfo() const { DARABONBA_PTR_GET_CONST(assistInfo_, UpdateCheckItemRequest::AssistInfo) };
    inline UpdateCheckItemRequest::AssistInfo getAssistInfo() { DARABONBA_PTR_GET(assistInfo_, UpdateCheckItemRequest::AssistInfo) };
    inline UpdateCheckItemRequest& setAssistInfo(const UpdateCheckItemRequest::AssistInfo & assistInfo) { DARABONBA_PTR_SET_VALUE(assistInfo_, assistInfo) };
    inline UpdateCheckItemRequest& setAssistInfo(UpdateCheckItemRequest::AssistInfo && assistInfo) { DARABONBA_PTR_SET_RVALUE(assistInfo_, assistInfo) };


    // checkId Field Functions 
    bool hasCheckId() const { return this->checkId_ != nullptr;};
    void deleteCheckId() { this->checkId_ = nullptr;};
    inline int64_t getCheckId() const { DARABONBA_PTR_GET_DEFAULT(checkId_, 0L) };
    inline UpdateCheckItemRequest& setCheckId(int64_t checkId) { DARABONBA_PTR_SET_VALUE(checkId_, checkId) };


    // checkRule Field Functions 
    bool hasCheckRule() const { return this->checkRule_ != nullptr;};
    void deleteCheckRule() { this->checkRule_ = nullptr;};
    inline string getCheckRule() const { DARABONBA_PTR_GET_DEFAULT(checkRule_, "") };
    inline UpdateCheckItemRequest& setCheckRule(string checkRule) { DARABONBA_PTR_SET_VALUE(checkRule_, checkRule) };


    // checkShowName Field Functions 
    bool hasCheckShowName() const { return this->checkShowName_ != nullptr;};
    void deleteCheckShowName() { this->checkShowName_ = nullptr;};
    inline string getCheckShowName() const { DARABONBA_PTR_GET_DEFAULT(checkShowName_, "") };
    inline UpdateCheckItemRequest& setCheckShowName(string checkShowName) { DARABONBA_PTR_SET_VALUE(checkShowName_, checkShowName) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline const UpdateCheckItemRequest::Description & getDescription() const { DARABONBA_PTR_GET_CONST(description_, UpdateCheckItemRequest::Description) };
    inline UpdateCheckItemRequest::Description getDescription() { DARABONBA_PTR_GET(description_, UpdateCheckItemRequest::Description) };
    inline UpdateCheckItemRequest& setDescription(const UpdateCheckItemRequest::Description & description) { DARABONBA_PTR_SET_VALUE(description_, description) };
    inline UpdateCheckItemRequest& setDescription(UpdateCheckItemRequest::Description && description) { DARABONBA_PTR_SET_RVALUE(description_, description) };


    // instanceSubType Field Functions 
    bool hasInstanceSubType() const { return this->instanceSubType_ != nullptr;};
    void deleteInstanceSubType() { this->instanceSubType_ = nullptr;};
    inline string getInstanceSubType() const { DARABONBA_PTR_GET_DEFAULT(instanceSubType_, "") };
    inline UpdateCheckItemRequest& setInstanceSubType(string instanceSubType) { DARABONBA_PTR_SET_VALUE(instanceSubType_, instanceSubType) };


    // instanceType Field Functions 
    bool hasInstanceType() const { return this->instanceType_ != nullptr;};
    void deleteInstanceType() { this->instanceType_ = nullptr;};
    inline string getInstanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
    inline UpdateCheckItemRequest& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


    // remark Field Functions 
    bool hasRemark() const { return this->remark_ != nullptr;};
    void deleteRemark() { this->remark_ = nullptr;};
    inline string getRemark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
    inline UpdateCheckItemRequest& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


    // riskLevel Field Functions 
    bool hasRiskLevel() const { return this->riskLevel_ != nullptr;};
    void deleteRiskLevel() { this->riskLevel_ = nullptr;};
    inline string getRiskLevel() const { DARABONBA_PTR_GET_DEFAULT(riskLevel_, "") };
    inline UpdateCheckItemRequest& setRiskLevel(string riskLevel) { DARABONBA_PTR_SET_VALUE(riskLevel_, riskLevel) };


    // sectionIds Field Functions 
    bool hasSectionIds() const { return this->sectionIds_ != nullptr;};
    void deleteSectionIds() { this->sectionIds_ = nullptr;};
    inline const vector<int64_t> & getSectionIds() const { DARABONBA_PTR_GET_CONST(sectionIds_, vector<int64_t>) };
    inline vector<int64_t> getSectionIds() { DARABONBA_PTR_GET(sectionIds_, vector<int64_t>) };
    inline UpdateCheckItemRequest& setSectionIds(const vector<int64_t> & sectionIds) { DARABONBA_PTR_SET_VALUE(sectionIds_, sectionIds) };
    inline UpdateCheckItemRequest& setSectionIds(vector<int64_t> && sectionIds) { DARABONBA_PTR_SET_RVALUE(sectionIds_, sectionIds) };


    // solution Field Functions 
    bool hasSolution() const { return this->solution_ != nullptr;};
    void deleteSolution() { this->solution_ = nullptr;};
    inline const UpdateCheckItemRequest::Solution & getSolution() const { DARABONBA_PTR_GET_CONST(solution_, UpdateCheckItemRequest::Solution) };
    inline UpdateCheckItemRequest::Solution getSolution() { DARABONBA_PTR_GET(solution_, UpdateCheckItemRequest::Solution) };
    inline UpdateCheckItemRequest& setSolution(const UpdateCheckItemRequest::Solution & solution) { DARABONBA_PTR_SET_VALUE(solution_, solution) };
    inline UpdateCheckItemRequest& setSolution(UpdateCheckItemRequest::Solution && solution) { DARABONBA_PTR_SET_RVALUE(solution_, solution) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline UpdateCheckItemRequest& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // vendor Field Functions 
    bool hasVendor() const { return this->vendor_ != nullptr;};
    void deleteVendor() { this->vendor_ = nullptr;};
    inline string getVendor() const { DARABONBA_PTR_GET_DEFAULT(vendor_, "") };
    inline UpdateCheckItemRequest& setVendor(string vendor) { DARABONBA_PTR_SET_VALUE(vendor_, vendor) };


  protected:
    // Help information for the check item.
    shared_ptr<UpdateCheckItemRequest::AssistInfo> assistInfo_ {};
    // ID of the custom check item to be updated.
    // > You can call the [ListCheckItems](~~ListCheckItems~~) API to get this parameter.
    // 
    // This parameter is required.
    shared_ptr<int64_t> checkId_ {};
    // Definition rule for the custom check item.
    shared_ptr<string> checkRule_ {};
    // Name of the custom check item.
    shared_ptr<string> checkShowName_ {};
    // Description of the check item.
    shared_ptr<UpdateCheckItemRequest::Description> description_ {};
    // Sub-asset type of the cloud product.
    // > You can call the [ListCloudAssetSchemas](~~ListCloudAssetSchemas~~) API to get this parameter.
    shared_ptr<string> instanceSubType_ {};
    // Asset type of the cloud product.
    // > You can call the [ListCloudAssetSchemas](~~ListCloudAssetSchemas~~) API to get this parameter.
    shared_ptr<string> instanceType_ {};
    // Remark information
    shared_ptr<string> remark_ {};
    // Risk level of the check item. Values:
    // - **HIGH**: High risk
    // - **MEDIUM**: Medium risk
    // - **LOW**: Low risk
    shared_ptr<string> riskLevel_ {};
    // Array of section IDs associated with the check item.
    shared_ptr<vector<int64_t>> sectionIds_ {};
    // Solution information for the check item.
    shared_ptr<UpdateCheckItemRequest::Solution> solution_ {};
    // Status of the check item. Values:
    // - **EDIT**: In editing
    // - **RELEASE**: Released
    // 
    // > - Changing from **Released** to **In editing** will clear all historical records
    // > - Only the **Released** status allows the use of the check item for inspection.
    shared_ptr<string> status_ {};
    // Cloud asset vendor.
    // > You can call the [ListCloudAssetSchemas](~~ListCloudAssetSchemas~~) API to get the available vendors.
    shared_ptr<string> vendor_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
