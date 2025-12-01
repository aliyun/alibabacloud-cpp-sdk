// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINSTANCESRESPONSEBODYITEMSMODELTAGS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINSTANCESRESPONSEBODYITEMSMODELTAGS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sddp20190103
{
namespace Models
{
  class DescribeInstancesResponseBodyItemsModelTags : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInstancesResponseBodyItemsModelTags& obj) { 
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Name, name_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInstancesResponseBodyItemsModelTags& obj) { 
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
    };
    DescribeInstancesResponseBodyItemsModelTags() = default ;
    DescribeInstancesResponseBodyItemsModelTags(const DescribeInstancesResponseBodyItemsModelTags &) = default ;
    DescribeInstancesResponseBodyItemsModelTags(DescribeInstancesResponseBodyItemsModelTags &&) = default ;
    DescribeInstancesResponseBodyItemsModelTags(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInstancesResponseBodyItemsModelTags() = default ;
    DescribeInstancesResponseBodyItemsModelTags& operator=(const DescribeInstancesResponseBodyItemsModelTags &) = default ;
    DescribeInstancesResponseBodyItemsModelTags& operator=(DescribeInstancesResponseBodyItemsModelTags &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->id_ == nullptr
        && return this->name_ == nullptr; };
    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline DescribeInstancesResponseBodyItemsModelTags& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeInstancesResponseBodyItemsModelTags& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


  protected:
    // The ID of the tag. Valid values:
    // 
    // *   **101**: personal sensitive information
    // *   **102**: personal information
    // *   **107**: general information
    std::shared_ptr<int64_t> id_ = nullptr;
    // The name of the tag. Valid values:
    // 
    // *   Personal sensitive information
    // *   Personal information
    // *   General information
    std::shared_ptr<string> name_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sddp20190103
#endif
