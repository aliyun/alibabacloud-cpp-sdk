// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAPPLICATIONSWITHTAGRULESRESPONSEBODYDATARESULTROUTERULES_HPP_
#define ALIBABACLOUD_MODELS_LISTAPPLICATIONSWITHTAGRULESRESPONSEBODYDATARESULTROUTERULES_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListApplicationsWithTagRulesResponseBodyDataResultRouteRulesRules.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class ListApplicationsWithTagRulesResponseBodyDataResultRouteRules : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListApplicationsWithTagRulesResponseBodyDataResultRouteRules& obj) { 
      DARABONBA_PTR_TO_JSON(Enable, enable_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(InstanceNum, instanceNum_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Rate, rate_);
      DARABONBA_PTR_TO_JSON(Rules, rules_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
    };
    friend void from_json(const Darabonba::Json& j, ListApplicationsWithTagRulesResponseBodyDataResultRouteRules& obj) { 
      DARABONBA_PTR_FROM_JSON(Enable, enable_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(InstanceNum, instanceNum_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Rate, rate_);
      DARABONBA_PTR_FROM_JSON(Rules, rules_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
    };
    ListApplicationsWithTagRulesResponseBodyDataResultRouteRules() = default ;
    ListApplicationsWithTagRulesResponseBodyDataResultRouteRules(const ListApplicationsWithTagRulesResponseBodyDataResultRouteRules &) = default ;
    ListApplicationsWithTagRulesResponseBodyDataResultRouteRules(ListApplicationsWithTagRulesResponseBodyDataResultRouteRules &&) = default ;
    ListApplicationsWithTagRulesResponseBodyDataResultRouteRules(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListApplicationsWithTagRulesResponseBodyDataResultRouteRules() = default ;
    ListApplicationsWithTagRulesResponseBodyDataResultRouteRules& operator=(const ListApplicationsWithTagRulesResponseBodyDataResultRouteRules &) = default ;
    ListApplicationsWithTagRulesResponseBodyDataResultRouteRules& operator=(ListApplicationsWithTagRulesResponseBodyDataResultRouteRules &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->enable_ == nullptr
        && return this->id_ == nullptr && return this->instanceNum_ == nullptr && return this->name_ == nullptr && return this->rate_ == nullptr && return this->rules_ == nullptr
        && return this->status_ == nullptr && return this->tag_ == nullptr; };
    // enable Field Functions 
    bool hasEnable() const { return this->enable_ != nullptr;};
    void deleteEnable() { this->enable_ = nullptr;};
    inline bool enable() const { DARABONBA_PTR_GET_DEFAULT(enable_, false) };
    inline ListApplicationsWithTagRulesResponseBodyDataResultRouteRules& setEnable(bool enable) { DARABONBA_PTR_SET_VALUE(enable_, enable) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline ListApplicationsWithTagRulesResponseBodyDataResultRouteRules& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // instanceNum Field Functions 
    bool hasInstanceNum() const { return this->instanceNum_ != nullptr;};
    void deleteInstanceNum() { this->instanceNum_ = nullptr;};
    inline int32_t instanceNum() const { DARABONBA_PTR_GET_DEFAULT(instanceNum_, 0) };
    inline ListApplicationsWithTagRulesResponseBodyDataResultRouteRules& setInstanceNum(int32_t instanceNum) { DARABONBA_PTR_SET_VALUE(instanceNum_, instanceNum) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListApplicationsWithTagRulesResponseBodyDataResultRouteRules& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // rate Field Functions 
    bool hasRate() const { return this->rate_ != nullptr;};
    void deleteRate() { this->rate_ = nullptr;};
    inline int32_t rate() const { DARABONBA_PTR_GET_DEFAULT(rate_, 0) };
    inline ListApplicationsWithTagRulesResponseBodyDataResultRouteRules& setRate(int32_t rate) { DARABONBA_PTR_SET_VALUE(rate_, rate) };


    // rules Field Functions 
    bool hasRules() const { return this->rules_ != nullptr;};
    void deleteRules() { this->rules_ = nullptr;};
    inline const Models::ListApplicationsWithTagRulesResponseBodyDataResultRouteRulesRules & rules() const { DARABONBA_PTR_GET_CONST(rules_, Models::ListApplicationsWithTagRulesResponseBodyDataResultRouteRulesRules) };
    inline Models::ListApplicationsWithTagRulesResponseBodyDataResultRouteRulesRules rules() { DARABONBA_PTR_GET(rules_, Models::ListApplicationsWithTagRulesResponseBodyDataResultRouteRulesRules) };
    inline ListApplicationsWithTagRulesResponseBodyDataResultRouteRules& setRules(const Models::ListApplicationsWithTagRulesResponseBodyDataResultRouteRulesRules & rules) { DARABONBA_PTR_SET_VALUE(rules_, rules) };
    inline ListApplicationsWithTagRulesResponseBodyDataResultRouteRules& setRules(Models::ListApplicationsWithTagRulesResponseBodyDataResultRouteRulesRules && rules) { DARABONBA_PTR_SET_RVALUE(rules_, rules) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t status() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline ListApplicationsWithTagRulesResponseBodyDataResultRouteRules& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline string tag() const { DARABONBA_PTR_GET_DEFAULT(tag_, "") };
    inline ListApplicationsWithTagRulesResponseBodyDataResultRouteRules& setTag(string tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };


  protected:
    // Indicates whether the alert rule is enabled. Valid values:
    // 
    // *   `true`
    // *   `false`
    std::shared_ptr<bool> enable_ = nullptr;
    // The rule ID.
    std::shared_ptr<int64_t> id_ = nullptr;
    // The number of instances.
    std::shared_ptr<int32_t> instanceNum_ = nullptr;
    // The rule name.
    std::shared_ptr<string> name_ = nullptr;
    // The rate.
    std::shared_ptr<int32_t> rate_ = nullptr;
    // The details of the routing rule.
    std::shared_ptr<Models::ListApplicationsWithTagRulesResponseBodyDataResultRouteRulesRules> rules_ = nullptr;
    // The status.
    std::shared_ptr<int32_t> status_ = nullptr;
    // The tag.
    std::shared_ptr<string> tag_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
