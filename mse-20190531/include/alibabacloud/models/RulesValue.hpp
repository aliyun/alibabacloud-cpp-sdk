// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RULESVALUE_HPP_
#define ALIBABACLOUD_MODELS_RULESVALUE_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/RulesValueRules.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class RulesValue : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RulesValue& obj) { 
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Rate, rate_);
      DARABONBA_PTR_TO_JSON(Enable, enable_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(InstanceNum, instanceNum_);
      DARABONBA_PTR_TO_JSON(Rules, rules_);
    };
    friend void from_json(const Darabonba::Json& j, RulesValue& obj) { 
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Rate, rate_);
      DARABONBA_PTR_FROM_JSON(Enable, enable_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(InstanceNum, instanceNum_);
      DARABONBA_PTR_FROM_JSON(Rules, rules_);
    };
    RulesValue() = default ;
    RulesValue(const RulesValue &) = default ;
    RulesValue(RulesValue &&) = default ;
    RulesValue(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RulesValue() = default ;
    RulesValue& operator=(const RulesValue &) = default ;
    RulesValue& operator=(RulesValue &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->status_ != nullptr
        && this->rate_ != nullptr && this->enable_ != nullptr && this->tag_ != nullptr && this->name_ != nullptr && this->id_ != nullptr
        && this->instanceNum_ != nullptr && this->rules_ != nullptr; };
    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t status() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline RulesValue& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // rate Field Functions 
    bool hasRate() const { return this->rate_ != nullptr;};
    void deleteRate() { this->rate_ = nullptr;};
    inline int32_t rate() const { DARABONBA_PTR_GET_DEFAULT(rate_, 0) };
    inline RulesValue& setRate(int32_t rate) { DARABONBA_PTR_SET_VALUE(rate_, rate) };


    // enable Field Functions 
    bool hasEnable() const { return this->enable_ != nullptr;};
    void deleteEnable() { this->enable_ = nullptr;};
    inline bool enable() const { DARABONBA_PTR_GET_DEFAULT(enable_, false) };
    inline RulesValue& setEnable(bool enable) { DARABONBA_PTR_SET_VALUE(enable_, enable) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline string tag() const { DARABONBA_PTR_GET_DEFAULT(tag_, "") };
    inline RulesValue& setTag(string tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline RulesValue& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline RulesValue& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // instanceNum Field Functions 
    bool hasInstanceNum() const { return this->instanceNum_ != nullptr;};
    void deleteInstanceNum() { this->instanceNum_ = nullptr;};
    inline int32_t instanceNum() const { DARABONBA_PTR_GET_DEFAULT(instanceNum_, 0) };
    inline RulesValue& setInstanceNum(int32_t instanceNum) { DARABONBA_PTR_SET_VALUE(instanceNum_, instanceNum) };


    // rules Field Functions 
    bool hasRules() const { return this->rules_ != nullptr;};
    void deleteRules() { this->rules_ = nullptr;};
    inline const RulesValueRules & rules() const { DARABONBA_PTR_GET_CONST(rules_, RulesValueRules) };
    inline RulesValueRules rules() { DARABONBA_PTR_GET(rules_, RulesValueRules) };
    inline RulesValue& setRules(const RulesValueRules & rules) { DARABONBA_PTR_SET_VALUE(rules_, rules) };
    inline RulesValue& setRules(RulesValueRules && rules) { DARABONBA_PTR_SET_RVALUE(rules_, rules) };


  protected:
    std::shared_ptr<int32_t> status_ = nullptr;
    std::shared_ptr<int32_t> rate_ = nullptr;
    std::shared_ptr<bool> enable_ = nullptr;
    std::shared_ptr<string> tag_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<int64_t> id_ = nullptr;
    std::shared_ptr<int32_t> instanceNum_ = nullptr;
    std::shared_ptr<RulesValueRules> rules_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
