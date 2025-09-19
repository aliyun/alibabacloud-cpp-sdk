// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYSEARCHCONDITIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYSEARCHCONDITIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ModifySearchConditionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifySearchConditionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(FilterConditions, filterConditions_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(SourceIp, sourceIp_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, ModifySearchConditionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(FilterConditions, filterConditions_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(SourceIp, sourceIp_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    ModifySearchConditionRequest() = default ;
    ModifySearchConditionRequest(const ModifySearchConditionRequest &) = default ;
    ModifySearchConditionRequest(ModifySearchConditionRequest &&) = default ;
    ModifySearchConditionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifySearchConditionRequest() = default ;
    ModifySearchConditionRequest& operator=(const ModifySearchConditionRequest &) = default ;
    ModifySearchConditionRequest& operator=(ModifySearchConditionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->filterConditions_ != nullptr
        && this->name_ != nullptr && this->sourceIp_ != nullptr && this->type_ != nullptr; };
    // filterConditions Field Functions 
    bool hasFilterConditions() const { return this->filterConditions_ != nullptr;};
    void deleteFilterConditions() { this->filterConditions_ = nullptr;};
    inline string filterConditions() const { DARABONBA_PTR_GET_DEFAULT(filterConditions_, "") };
    inline ModifySearchConditionRequest& setFilterConditions(string filterConditions) { DARABONBA_PTR_SET_VALUE(filterConditions_, filterConditions) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ModifySearchConditionRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // sourceIp Field Functions 
    bool hasSourceIp() const { return this->sourceIp_ != nullptr;};
    void deleteSourceIp() { this->sourceIp_ = nullptr;};
    inline string sourceIp() const { DARABONBA_PTR_GET_DEFAULT(sourceIp_, "") };
    inline ModifySearchConditionRequest& setSourceIp(string sourceIp) { DARABONBA_PTR_SET_VALUE(sourceIp_, sourceIp) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline ModifySearchConditionRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The filter condition. The value of this parameter is in the JSON format and is case-sensitive. The value contains the following fields:
    // 
    // *   **filterParams**: the filter-related parameters. The value is in the JSON format. Valid values:
    // 
    //     *   **label**: the display name of the filter condition in the console.
    // 
    //     *   **value**: the settings of the filter condition. The value is in the JSON format. The value contains the following fields:
    // 
    //         *   **name**: the name of the field for filtering. For more information, see the value description of name.
    //         *   **value**: the value of the field for filtering.
    // 
    // *   **LogicalExp**: the logical relationship among multiple filter conditions. Valid values:
    // 
    //     *   **OR**
    //     *   **AND**
    // 
    // >  Value description of **name**:
    // 
    // *   If **Type** is set to **ecs**, you can call the [DescribeCriteria](~~DescribeCriteria~~) operation to query the supported filter conditions.
    // 
    // *   If **Type** is set to **cloud_product**, you can call the [GetCloudAssetCriteria](~~GetCloudAssetCriteria~~) operation to query the supported filter conditions.
    std::shared_ptr<string> filterConditions_ = nullptr;
    // The name of the common filter condition.
    // 
    // This parameter is required.
    std::shared_ptr<string> name_ = nullptr;
    // The source IP address of the request. You do not need to specify this parameter. It is automatically obtained by the system.
    std::shared_ptr<string> sourceIp_ = nullptr;
    // The type of the asset. Default value: **ecs**. Valid values:
    // 
    // *   **ecs**: host
    // *   **cloud_product**: Alibaba Cloud service
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
