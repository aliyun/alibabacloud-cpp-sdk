// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDCDNWAFGROUPSRESPONSEBODYWAFGROUPSPOLICIES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDCDNWAFGROUPSRESPONSEBODYWAFGROUPSPOLICIES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dcdn20180115
{
namespace Models
{
  class DescribeDcdnWafGroupsResponseBodyWafGroupsPolicies : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDcdnWafGroupsResponseBodyWafGroupsPolicies& obj) { 
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDcdnWafGroupsResponseBodyWafGroupsPolicies& obj) { 
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    DescribeDcdnWafGroupsResponseBodyWafGroupsPolicies() = default ;
    DescribeDcdnWafGroupsResponseBodyWafGroupsPolicies(const DescribeDcdnWafGroupsResponseBodyWafGroupsPolicies &) = default ;
    DescribeDcdnWafGroupsResponseBodyWafGroupsPolicies(DescribeDcdnWafGroupsResponseBodyWafGroupsPolicies &&) = default ;
    DescribeDcdnWafGroupsResponseBodyWafGroupsPolicies(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDcdnWafGroupsResponseBodyWafGroupsPolicies() = default ;
    DescribeDcdnWafGroupsResponseBodyWafGroupsPolicies& operator=(const DescribeDcdnWafGroupsResponseBodyWafGroupsPolicies &) = default ;
    DescribeDcdnWafGroupsResponseBodyWafGroupsPolicies& operator=(DescribeDcdnWafGroupsResponseBodyWafGroupsPolicies &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->id_ != nullptr
        && this->name_ != nullptr && this->type_ != nullptr; };
    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline DescribeDcdnWafGroupsResponseBodyWafGroupsPolicies& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeDcdnWafGroupsResponseBodyWafGroupsPolicies& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline DescribeDcdnWafGroupsResponseBodyWafGroupsPolicies& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The ID of the policy.
    std::shared_ptr<int64_t> id_ = nullptr;
    // The name of the policy.
    std::shared_ptr<string> name_ = nullptr;
    // The type of the policy. Valid values:
    // 
    // *   **custom**: a custom policy
    // *   **default**: the default policy
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dcdn20180115
#endif
