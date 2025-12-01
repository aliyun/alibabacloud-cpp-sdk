// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECATEGORYTEMPLATERULELISTRESPONSEBODYITEMS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECATEGORYTEMPLATERULELISTRESPONSEBODYITEMS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sddp20190103
{
namespace Models
{
  class DescribeCategoryTemplateRuleListResponseBodyItems : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCategoryTemplateRuleListResponseBodyItems& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(IdentificationRuleIds, identificationRuleIds_);
      DARABONBA_PTR_TO_JSON(IdentificationScope, identificationScope_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(RiskLevelId, riskLevelId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCategoryTemplateRuleListResponseBodyItems& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(IdentificationRuleIds, identificationRuleIds_);
      DARABONBA_PTR_FROM_JSON(IdentificationScope, identificationScope_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(RiskLevelId, riskLevelId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    DescribeCategoryTemplateRuleListResponseBodyItems() = default ;
    DescribeCategoryTemplateRuleListResponseBodyItems(const DescribeCategoryTemplateRuleListResponseBodyItems &) = default ;
    DescribeCategoryTemplateRuleListResponseBodyItems(DescribeCategoryTemplateRuleListResponseBodyItems &&) = default ;
    DescribeCategoryTemplateRuleListResponseBodyItems(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCategoryTemplateRuleListResponseBodyItems() = default ;
    DescribeCategoryTemplateRuleListResponseBodyItems& operator=(const DescribeCategoryTemplateRuleListResponseBodyItems &) = default ;
    DescribeCategoryTemplateRuleListResponseBodyItems& operator=(DescribeCategoryTemplateRuleListResponseBodyItems &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->description_ == nullptr
        && return this->id_ == nullptr && return this->identificationRuleIds_ == nullptr && return this->identificationScope_ == nullptr && return this->name_ == nullptr && return this->riskLevelId_ == nullptr
        && return this->status_ == nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeCategoryTemplateRuleListResponseBodyItems& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline DescribeCategoryTemplateRuleListResponseBodyItems& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // identificationRuleIds Field Functions 
    bool hasIdentificationRuleIds() const { return this->identificationRuleIds_ != nullptr;};
    void deleteIdentificationRuleIds() { this->identificationRuleIds_ = nullptr;};
    inline string identificationRuleIds() const { DARABONBA_PTR_GET_DEFAULT(identificationRuleIds_, "") };
    inline DescribeCategoryTemplateRuleListResponseBodyItems& setIdentificationRuleIds(string identificationRuleIds) { DARABONBA_PTR_SET_VALUE(identificationRuleIds_, identificationRuleIds) };


    // identificationScope Field Functions 
    bool hasIdentificationScope() const { return this->identificationScope_ != nullptr;};
    void deleteIdentificationScope() { this->identificationScope_ = nullptr;};
    inline string identificationScope() const { DARABONBA_PTR_GET_DEFAULT(identificationScope_, "") };
    inline DescribeCategoryTemplateRuleListResponseBodyItems& setIdentificationScope(string identificationScope) { DARABONBA_PTR_SET_VALUE(identificationScope_, identificationScope) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeCategoryTemplateRuleListResponseBodyItems& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // riskLevelId Field Functions 
    bool hasRiskLevelId() const { return this->riskLevelId_ != nullptr;};
    void deleteRiskLevelId() { this->riskLevelId_ = nullptr;};
    inline int64_t riskLevelId() const { DARABONBA_PTR_GET_DEFAULT(riskLevelId_, 0L) };
    inline DescribeCategoryTemplateRuleListResponseBodyItems& setRiskLevelId(int64_t riskLevelId) { DARABONBA_PTR_SET_VALUE(riskLevelId_, riskLevelId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t status() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline DescribeCategoryTemplateRuleListResponseBodyItems& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The description of the rule.
    std::shared_ptr<string> description_ = nullptr;
    // The unique ID of the rule.
    std::shared_ptr<int64_t> id_ = nullptr;
    // The IDs of sensitive data types. Multiple IDs are separated by commas (,).
    std::shared_ptr<string> identificationRuleIds_ = nullptr;
    // The scan scope of the rule. The value is a JSON array of the STRING type. Each element in a JSON array indicates a scan scope that contains the following fields:
    // 
    // *   **Asset**: the data asset type. Valid values: RDS, DRDS, PolarDB, OTS, ADB, and OceanBase. The value is of the STRING type.
    // 
    // *   **Content**: the scan scope. The value is of the STRING type. Each element in a JSON array indicates a scan scope that contains the following fields:
    // 
    //     *   **Range**: the matching condition. Valid values: Instance, database, table, column, project, bucket, and object. The value project is valid only for data assets in MaxCompute. The values bucket and object are valid only for data assets in Object Storage Service (OSS). The value of this parameter is of the STRING type.
    //     *   **Operator**: the operator. Valid values: equals, regex, prefix, and suffix. The operator equals indicates a full match. The operator regex indicates a match by regular expression. The operator prefix indicates a match by prefix. The operator suffix indicates a match by suffix.
    //     *   **Value**: the matching content. The value is of the STRING type.
    std::shared_ptr<string> identificationScope_ = nullptr;
    // The name of the rule.
    std::shared_ptr<string> name_ = nullptr;
    // The sensitivity level of the data that is not compliant with the rule. Valid values: **1** to **11**.
    // 
    // *   **1**: No sensitive data is detected.
    // *   **2**: indicates the S1 sensitivity level.
    // *   **3**: indicates the S2 sensitivity level.
    // *   **4**: indicates the S3 sensitivity level.
    // *   **5**: indicates the S4 sensitivity level.
    // *   **6**: indicates the S5 sensitivity level.
    // *   **7**: indicates the S6 sensitivity level.
    // *   **8**: indicates the S7 sensitivity level.
    // *   **9**: indicates the S8 sensitivity level.
    // *   **10**: indicates the S9 sensitivity level.
    // *   **11**: indicates the S10 sensitivity level.
    // *   **null**: indicates all preceding sensitivity levels.
    std::shared_ptr<int64_t> riskLevelId_ = nullptr;
    // The status of the rule. Valid values:
    // 
    // *   **0**: disabled
    // *   **1**: enabled
    // *   **null**: all states
    std::shared_ptr<int32_t> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sddp20190103
#endif
