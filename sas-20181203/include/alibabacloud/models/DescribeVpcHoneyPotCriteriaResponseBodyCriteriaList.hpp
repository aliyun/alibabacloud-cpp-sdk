// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVPCHONEYPOTCRITERIARESPONSEBODYCRITERIALIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVPCHONEYPOTCRITERIARESPONSEBODYCRITERIALIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeVpcHoneyPotCriteriaResponseBodyCriteriaList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVpcHoneyPotCriteriaResponseBodyCriteriaList& obj) { 
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_PTR_TO_JSON(Values, values_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVpcHoneyPotCriteriaResponseBodyCriteriaList& obj) { 
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
      DARABONBA_PTR_FROM_JSON(Values, values_);
    };
    DescribeVpcHoneyPotCriteriaResponseBodyCriteriaList() = default ;
    DescribeVpcHoneyPotCriteriaResponseBodyCriteriaList(const DescribeVpcHoneyPotCriteriaResponseBodyCriteriaList &) = default ;
    DescribeVpcHoneyPotCriteriaResponseBodyCriteriaList(DescribeVpcHoneyPotCriteriaResponseBodyCriteriaList &&) = default ;
    DescribeVpcHoneyPotCriteriaResponseBodyCriteriaList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVpcHoneyPotCriteriaResponseBodyCriteriaList() = default ;
    DescribeVpcHoneyPotCriteriaResponseBodyCriteriaList& operator=(const DescribeVpcHoneyPotCriteriaResponseBodyCriteriaList &) = default ;
    DescribeVpcHoneyPotCriteriaResponseBodyCriteriaList& operator=(DescribeVpcHoneyPotCriteriaResponseBodyCriteriaList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->name_ != nullptr
        && this->type_ != nullptr && this->values_ != nullptr; };
    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeVpcHoneyPotCriteriaResponseBodyCriteriaList& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline DescribeVpcHoneyPotCriteriaResponseBodyCriteriaList& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // values Field Functions 
    bool hasValues() const { return this->values_ != nullptr;};
    void deleteValues() { this->values_ = nullptr;};
    inline string values() const { DARABONBA_PTR_GET_DEFAULT(values_, "") };
    inline DescribeVpcHoneyPotCriteriaResponseBodyCriteriaList& setValues(string values) { DARABONBA_PTR_SET_VALUE(values_, values) };


  protected:
    // The name of the search condition.
    std::shared_ptr<string> name_ = nullptr;
    // The type of the search condition. Valid values:
    // 
    // *   **input**: You must manually enter the search condition.
    // *   **select**: You must select a search condition from the **Values** drop-down list.
    std::shared_ptr<string> type_ = nullptr;
    // The values of the search condition. This parameter is returned only if the value of **Type** is **select**.
    // 
    // > If the value of **Type** is **input**, the value of this parameter is an empty string.
    std::shared_ptr<string> values_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
