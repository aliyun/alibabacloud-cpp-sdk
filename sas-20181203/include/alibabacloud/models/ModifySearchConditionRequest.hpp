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
    virtual bool empty() const override { return this->filterConditions_ == nullptr
        && this->name_ == nullptr && this->sourceIp_ == nullptr && this->type_ == nullptr; };
    // filterConditions Field Functions 
    bool hasFilterConditions() const { return this->filterConditions_ != nullptr;};
    void deleteFilterConditions() { this->filterConditions_ = nullptr;};
    inline string getFilterConditions() const { DARABONBA_PTR_GET_DEFAULT(filterConditions_, "") };
    inline ModifySearchConditionRequest& setFilterConditions(string filterConditions) { DARABONBA_PTR_SET_VALUE(filterConditions_, filterConditions) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ModifySearchConditionRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // sourceIp Field Functions 
    bool hasSourceIp() const { return this->sourceIp_ != nullptr;};
    void deleteSourceIp() { this->sourceIp_ = nullptr;};
    inline string getSourceIp() const { DARABONBA_PTR_GET_DEFAULT(sourceIp_, "") };
    inline ModifySearchConditionRequest& setSourceIp(string sourceIp) { DARABONBA_PTR_SET_VALUE(sourceIp_, sourceIp) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline ModifySearchConditionRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The filter conditions. This parameter is in JSON format. Pay attention to the letter case when you specify this parameter. The following fields are included:
    // 
    // - **filterParams**: The filter parameters. This parameter is in JSON format. The following fields are included:
    //   - **label**: The display name for the search in the console.
    //   - **value**: The filter parameter condition. This parameter is in JSON format. The following fields are included:
    // 
    //      - **name**: The filter condition field. For more information about the valid values of this field, see the description below.
    //      - **value**: The value that corresponds to the filter condition field.
    // 
    // - **LogicalExp**: The logical relationship between multiple filter conditions. Valid values:
    //   - **OR**: or
    //   - **AND**: and
    // > Valid values of **name**:
    // > - If **Type** is set to **ecs**, call the [DescribeCriteria](~~DescribeCriteria~~) operation to query the supported search conditions.
    // > - If **Type** is set to **cloud_product**, call the [GetCloudAssetCriteria](~~GetCloudAssetCriteria~~) operation to query the supported search conditions.
    shared_ptr<string> filterConditions_ {};
    // The name of the common filter condition.
    // 
    // This parameter is required.
    shared_ptr<string> name_ {};
    // The source IP address of the request. You do not need to specify this parameter. The system automatically obtains the value.
    shared_ptr<string> sourceIp_ {};
    // The asset type. Default value: **ecs**. Valid values:
    // - **ecs**: host asset
    // - **cloud_product**: cloud service.
    shared_ptr<string> type_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
