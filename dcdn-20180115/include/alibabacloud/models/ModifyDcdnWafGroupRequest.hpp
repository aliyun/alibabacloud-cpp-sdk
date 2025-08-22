// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYDCDNWAFGROUPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYDCDNWAFGROUPREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dcdn20180115
{
namespace Models
{
  class ModifyDcdnWafGroupRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyDcdnWafGroupRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Rules, rules_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyDcdnWafGroupRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Rules, rules_);
    };
    ModifyDcdnWafGroupRequest() = default ;
    ModifyDcdnWafGroupRequest(const ModifyDcdnWafGroupRequest &) = default ;
    ModifyDcdnWafGroupRequest(ModifyDcdnWafGroupRequest &&) = default ;
    ModifyDcdnWafGroupRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyDcdnWafGroupRequest() = default ;
    ModifyDcdnWafGroupRequest& operator=(const ModifyDcdnWafGroupRequest &) = default ;
    ModifyDcdnWafGroupRequest& operator=(ModifyDcdnWafGroupRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->id_ != nullptr
        && this->name_ != nullptr && this->rules_ != nullptr; };
    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline ModifyDcdnWafGroupRequest& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ModifyDcdnWafGroupRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // rules Field Functions 
    bool hasRules() const { return this->rules_ != nullptr;};
    void deleteRules() { this->rules_ = nullptr;};
    inline string rules() const { DARABONBA_PTR_GET_DEFAULT(rules_, "") };
    inline ModifyDcdnWafGroupRequest& setRules(string rules) { DARABONBA_PTR_SET_VALUE(rules_, rules) };


  protected:
    // The ID of the custom WAF rule group.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> id_ = nullptr;
    // The name of the custom WAF rule group.
    std::shared_ptr<string> name_ = nullptr;
    // The incremental modifications of the rules in the custom WAF rule group. The value is a JSON string.
    std::shared_ptr<string> rules_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dcdn20180115
#endif
