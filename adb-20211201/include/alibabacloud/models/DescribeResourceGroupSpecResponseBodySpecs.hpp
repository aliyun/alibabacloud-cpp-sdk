// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERESOURCEGROUPSPECRESPONSEBODYSPECS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERESOURCEGROUPSPECRESPONSEBODYSPECS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class DescribeResourceGroupSpecResponseBodySpecs : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeResourceGroupSpecResponseBodySpecs& obj) { 
      DARABONBA_PTR_TO_JSON(AllocateUnits, allocateUnits_);
      DARABONBA_PTR_TO_JSON(MaxQuantity, maxQuantity_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeResourceGroupSpecResponseBodySpecs& obj) { 
      DARABONBA_PTR_FROM_JSON(AllocateUnits, allocateUnits_);
      DARABONBA_PTR_FROM_JSON(MaxQuantity, maxQuantity_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    DescribeResourceGroupSpecResponseBodySpecs() = default ;
    DescribeResourceGroupSpecResponseBodySpecs(const DescribeResourceGroupSpecResponseBodySpecs &) = default ;
    DescribeResourceGroupSpecResponseBodySpecs(DescribeResourceGroupSpecResponseBodySpecs &&) = default ;
    DescribeResourceGroupSpecResponseBodySpecs(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeResourceGroupSpecResponseBodySpecs() = default ;
    DescribeResourceGroupSpecResponseBodySpecs& operator=(const DescribeResourceGroupSpecResponseBodySpecs &) = default ;
    DescribeResourceGroupSpecResponseBodySpecs& operator=(DescribeResourceGroupSpecResponseBodySpecs &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->allocateUnits_ == nullptr
        && return this->maxQuantity_ == nullptr && return this->name_ == nullptr && return this->type_ == nullptr; };
    // allocateUnits Field Functions 
    bool hasAllocateUnits() const { return this->allocateUnits_ != nullptr;};
    void deleteAllocateUnits() { this->allocateUnits_ = nullptr;};
    inline const vector<string> & allocateUnits() const { DARABONBA_PTR_GET_CONST(allocateUnits_, vector<string>) };
    inline vector<string> allocateUnits() { DARABONBA_PTR_GET(allocateUnits_, vector<string>) };
    inline DescribeResourceGroupSpecResponseBodySpecs& setAllocateUnits(const vector<string> & allocateUnits) { DARABONBA_PTR_SET_VALUE(allocateUnits_, allocateUnits) };
    inline DescribeResourceGroupSpecResponseBodySpecs& setAllocateUnits(vector<string> && allocateUnits) { DARABONBA_PTR_SET_RVALUE(allocateUnits_, allocateUnits) };


    // maxQuantity Field Functions 
    bool hasMaxQuantity() const { return this->maxQuantity_ != nullptr;};
    void deleteMaxQuantity() { this->maxQuantity_ = nullptr;};
    inline int32_t maxQuantity() const { DARABONBA_PTR_GET_DEFAULT(maxQuantity_, 0) };
    inline DescribeResourceGroupSpecResponseBodySpecs& setMaxQuantity(int32_t maxQuantity) { DARABONBA_PTR_SET_VALUE(maxQuantity_, maxQuantity) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeResourceGroupSpecResponseBodySpecs& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline DescribeResourceGroupSpecResponseBodySpecs& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The allocation units supported by this specification.
    std::shared_ptr<vector<string>> allocateUnits_ = nullptr;
    // The maximum number of resource groups that can be used with this specification.
    std::shared_ptr<int32_t> maxQuantity_ = nullptr;
    // The name of the specification.
    std::shared_ptr<string> name_ = nullptr;
    // The resource type.
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
