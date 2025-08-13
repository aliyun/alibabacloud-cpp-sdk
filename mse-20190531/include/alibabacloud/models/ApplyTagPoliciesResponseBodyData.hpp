// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_APPLYTAGPOLICIESRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_APPLYTAGPOLICIESRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class ApplyTagPoliciesResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ApplyTagPoliciesResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(CarryData, carryData_);
      DARABONBA_PTR_TO_JSON(Enable, enable_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(InstanceNum, instanceNum_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Rate, rate_);
      DARABONBA_PTR_TO_JSON(Remove, remove_);
      DARABONBA_PTR_TO_JSON(Rules, rules_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
    };
    friend void from_json(const Darabonba::Json& j, ApplyTagPoliciesResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(CarryData, carryData_);
      DARABONBA_PTR_FROM_JSON(Enable, enable_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(InstanceNum, instanceNum_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Rate, rate_);
      DARABONBA_PTR_FROM_JSON(Remove, remove_);
      DARABONBA_PTR_FROM_JSON(Rules, rules_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
    };
    ApplyTagPoliciesResponseBodyData() = default ;
    ApplyTagPoliciesResponseBodyData(const ApplyTagPoliciesResponseBodyData &) = default ;
    ApplyTagPoliciesResponseBodyData(ApplyTagPoliciesResponseBodyData &&) = default ;
    ApplyTagPoliciesResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ApplyTagPoliciesResponseBodyData() = default ;
    ApplyTagPoliciesResponseBodyData& operator=(const ApplyTagPoliciesResponseBodyData &) = default ;
    ApplyTagPoliciesResponseBodyData& operator=(ApplyTagPoliciesResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->carryData_ != nullptr
        && this->enable_ != nullptr && this->id_ != nullptr && this->instanceNum_ != nullptr && this->name_ != nullptr && this->rate_ != nullptr
        && this->remove_ != nullptr && this->rules_ != nullptr && this->status_ != nullptr && this->tag_ != nullptr; };
    // carryData Field Functions 
    bool hasCarryData() const { return this->carryData_ != nullptr;};
    void deleteCarryData() { this->carryData_ = nullptr;};
    inline bool carryData() const { DARABONBA_PTR_GET_DEFAULT(carryData_, false) };
    inline ApplyTagPoliciesResponseBodyData& setCarryData(bool carryData) { DARABONBA_PTR_SET_VALUE(carryData_, carryData) };


    // enable Field Functions 
    bool hasEnable() const { return this->enable_ != nullptr;};
    void deleteEnable() { this->enable_ = nullptr;};
    inline bool enable() const { DARABONBA_PTR_GET_DEFAULT(enable_, false) };
    inline ApplyTagPoliciesResponseBodyData& setEnable(bool enable) { DARABONBA_PTR_SET_VALUE(enable_, enable) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline ApplyTagPoliciesResponseBodyData& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // instanceNum Field Functions 
    bool hasInstanceNum() const { return this->instanceNum_ != nullptr;};
    void deleteInstanceNum() { this->instanceNum_ = nullptr;};
    inline int32_t instanceNum() const { DARABONBA_PTR_GET_DEFAULT(instanceNum_, 0) };
    inline ApplyTagPoliciesResponseBodyData& setInstanceNum(int32_t instanceNum) { DARABONBA_PTR_SET_VALUE(instanceNum_, instanceNum) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ApplyTagPoliciesResponseBodyData& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // rate Field Functions 
    bool hasRate() const { return this->rate_ != nullptr;};
    void deleteRate() { this->rate_ = nullptr;};
    inline int32_t rate() const { DARABONBA_PTR_GET_DEFAULT(rate_, 0) };
    inline ApplyTagPoliciesResponseBodyData& setRate(int32_t rate) { DARABONBA_PTR_SET_VALUE(rate_, rate) };


    // remove Field Functions 
    bool hasRemove() const { return this->remove_ != nullptr;};
    void deleteRemove() { this->remove_ = nullptr;};
    inline bool remove() const { DARABONBA_PTR_GET_DEFAULT(remove_, false) };
    inline ApplyTagPoliciesResponseBodyData& setRemove(bool remove) { DARABONBA_PTR_SET_VALUE(remove_, remove) };


    // rules Field Functions 
    bool hasRules() const { return this->rules_ != nullptr;};
    void deleteRules() { this->rules_ = nullptr;};
    inline string rules() const { DARABONBA_PTR_GET_DEFAULT(rules_, "") };
    inline ApplyTagPoliciesResponseBodyData& setRules(string rules) { DARABONBA_PTR_SET_VALUE(rules_, rules) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t status() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline ApplyTagPoliciesResponseBodyData& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline string tag() const { DARABONBA_PTR_GET_DEFAULT(tag_, "") };
    inline ApplyTagPoliciesResponseBodyData& setTag(string tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };


  protected:
    // Indicates whether the field is the primary key.
    std::shared_ptr<bool> carryData_ = nullptr;
    // Indicates whether the rule is enabled. Valid values:
    // 
    // *   `true`: The rule is enabled.
    // *   `false`: The rule is disabled.
    std::shared_ptr<bool> enable_ = nullptr;
    // The ID of the primary key.
    std::shared_ptr<int64_t> id_ = nullptr;
    // The number of instances.
    std::shared_ptr<int32_t> instanceNum_ = nullptr;
    // The policy name.
    std::shared_ptr<string> name_ = nullptr;
    // The rate.
    std::shared_ptr<int32_t> rate_ = nullptr;
    // Indicates whether the routing rule was deleted.
    std::shared_ptr<bool> remove_ = nullptr;
    // The details of the routing rule.
    std::shared_ptr<string> rules_ = nullptr;
    // The status.
    std::shared_ptr<int32_t> status_ = nullptr;
    // The tag.
    std::shared_ptr<string> tag_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
