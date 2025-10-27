// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESEARCHCONDITIONRESPONSEBODYCONDITIONLIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESEARCHCONDITIONRESPONSEBODYCONDITIONLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeSearchConditionResponseBodyConditionList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSearchConditionResponseBodyConditionList& obj) { 
      DARABONBA_PTR_TO_JSON(ConditionType, conditionType_);
      DARABONBA_PTR_TO_JSON(FilterConditions, filterConditions_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(NameKey, nameKey_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSearchConditionResponseBodyConditionList& obj) { 
      DARABONBA_PTR_FROM_JSON(ConditionType, conditionType_);
      DARABONBA_PTR_FROM_JSON(FilterConditions, filterConditions_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(NameKey, nameKey_);
    };
    DescribeSearchConditionResponseBodyConditionList() = default ;
    DescribeSearchConditionResponseBodyConditionList(const DescribeSearchConditionResponseBodyConditionList &) = default ;
    DescribeSearchConditionResponseBodyConditionList(DescribeSearchConditionResponseBodyConditionList &&) = default ;
    DescribeSearchConditionResponseBodyConditionList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSearchConditionResponseBodyConditionList() = default ;
    DescribeSearchConditionResponseBodyConditionList& operator=(const DescribeSearchConditionResponseBodyConditionList &) = default ;
    DescribeSearchConditionResponseBodyConditionList& operator=(DescribeSearchConditionResponseBodyConditionList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->conditionType_ == nullptr
        && return this->filterConditions_ == nullptr && return this->name_ == nullptr && return this->nameKey_ == nullptr; };
    // conditionType Field Functions 
    bool hasConditionType() const { return this->conditionType_ != nullptr;};
    void deleteConditionType() { this->conditionType_ = nullptr;};
    inline string conditionType() const { DARABONBA_PTR_GET_DEFAULT(conditionType_, "") };
    inline DescribeSearchConditionResponseBodyConditionList& setConditionType(string conditionType) { DARABONBA_PTR_SET_VALUE(conditionType_, conditionType) };


    // filterConditions Field Functions 
    bool hasFilterConditions() const { return this->filterConditions_ != nullptr;};
    void deleteFilterConditions() { this->filterConditions_ = nullptr;};
    inline string filterConditions() const { DARABONBA_PTR_GET_DEFAULT(filterConditions_, "") };
    inline DescribeSearchConditionResponseBodyConditionList& setFilterConditions(string filterConditions) { DARABONBA_PTR_SET_VALUE(filterConditions_, filterConditions) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeSearchConditionResponseBodyConditionList& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // nameKey Field Functions 
    bool hasNameKey() const { return this->nameKey_ != nullptr;};
    void deleteNameKey() { this->nameKey_ = nullptr;};
    inline string nameKey() const { DARABONBA_PTR_GET_DEFAULT(nameKey_, "") };
    inline DescribeSearchConditionResponseBodyConditionList& setNameKey(string nameKey) { DARABONBA_PTR_SET_VALUE(nameKey_, nameKey) };


  protected:
    // The type of the filter condition. Valid values:
    // 
    // *   **system**: default filter conditions.
    // *   **user**: custom filter conditions.
    std::shared_ptr<string> conditionType_ = nullptr;
    // The filter condition. The value of this parameter is in the JSON format and contains the following fields:
    // 
    // *   **filterParams**: the parameters of the filter condition. The value of this field is in the JSON format and contains the following fields:
    // 
    //     *   **labelKey**: the key for rendering.
    // 
    //     *   **label**: the display name.
    // 
    //     *   **value**: the value of the filter condition. The value of this field is in the JSON format and contains the following fields:
    // 
    //         *   **name**: the name of the filter item.
    //         *   **value**: the value of the filter item.
    // 
    // *   **LogicalExp**: the logical relationship among the filter conditions. Valid values:
    // 
    //     *   **AND**: The filter conditions are evaluated by using a logical **AND**.
    //     *   **OR**: The filter conditions are evaluated by using a logical **OR**.
    // 
    // >  If the value of **ConditionType** is **system**, **labelKey** is returned. The labelKey field is used only for internationalization rendering.
    std::shared_ptr<string> filterConditions_ = nullptr;
    // The filter condition name.
    std::shared_ptr<string> name_ = nullptr;
    // The key of the filter condition name.
    std::shared_ptr<string> nameKey_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
