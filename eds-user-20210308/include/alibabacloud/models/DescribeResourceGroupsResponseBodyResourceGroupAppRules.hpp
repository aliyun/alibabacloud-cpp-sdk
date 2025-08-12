// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERESOURCEGROUPSRESPONSEBODYRESOURCEGROUPAPPRULES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERESOURCEGROUPSRESPONSEBODYRESOURCEGROUPAPPRULES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EdsUser20210308
{
namespace Models
{
  class DescribeResourceGroupsResponseBodyResourceGroupAppRules : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeResourceGroupsResponseBodyResourceGroupAppRules& obj) { 
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeResourceGroupsResponseBodyResourceGroupAppRules& obj) { 
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    DescribeResourceGroupsResponseBodyResourceGroupAppRules() = default ;
    DescribeResourceGroupsResponseBodyResourceGroupAppRules(const DescribeResourceGroupsResponseBodyResourceGroupAppRules &) = default ;
    DescribeResourceGroupsResponseBodyResourceGroupAppRules(DescribeResourceGroupsResponseBodyResourceGroupAppRules &&) = default ;
    DescribeResourceGroupsResponseBodyResourceGroupAppRules(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeResourceGroupsResponseBodyResourceGroupAppRules() = default ;
    DescribeResourceGroupsResponseBodyResourceGroupAppRules& operator=(const DescribeResourceGroupsResponseBodyResourceGroupAppRules &) = default ;
    DescribeResourceGroupsResponseBodyResourceGroupAppRules& operator=(DescribeResourceGroupsResponseBodyResourceGroupAppRules &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->id_ != nullptr
        && this->name_ != nullptr && this->type_ != nullptr; };
    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline DescribeResourceGroupsResponseBodyResourceGroupAppRules& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeResourceGroupsResponseBodyResourceGroupAppRules& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline int32_t type() const { DARABONBA_PTR_GET_DEFAULT(type_, 0) };
    inline DescribeResourceGroupsResponseBodyResourceGroupAppRules& setType(int32_t type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    std::shared_ptr<string> id_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<int32_t> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EdsUser20210308
#endif
