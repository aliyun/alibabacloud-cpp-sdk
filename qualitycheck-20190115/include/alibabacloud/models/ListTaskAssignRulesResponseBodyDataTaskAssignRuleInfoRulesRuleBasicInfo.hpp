// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTASKASSIGNRULESRESPONSEBODYDATATASKASSIGNRULEINFORULESRULEBASICINFO_HPP_
#define ALIBABACLOUD_MODELS_LISTTASKASSIGNRULESRESPONSEBODYDATATASKASSIGNRULEINFORULESRULEBASICINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Qualitycheck20190115
{
namespace Models
{
  class ListTaskAssignRulesResponseBodyDataTaskAssignRuleInfoRulesRuleBasicInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTaskAssignRulesResponseBodyDataTaskAssignRuleInfoRulesRuleBasicInfo& obj) { 
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Rid, rid_);
    };
    friend void from_json(const Darabonba::Json& j, ListTaskAssignRulesResponseBodyDataTaskAssignRuleInfoRulesRuleBasicInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Rid, rid_);
    };
    ListTaskAssignRulesResponseBodyDataTaskAssignRuleInfoRulesRuleBasicInfo() = default ;
    ListTaskAssignRulesResponseBodyDataTaskAssignRuleInfoRulesRuleBasicInfo(const ListTaskAssignRulesResponseBodyDataTaskAssignRuleInfoRulesRuleBasicInfo &) = default ;
    ListTaskAssignRulesResponseBodyDataTaskAssignRuleInfoRulesRuleBasicInfo(ListTaskAssignRulesResponseBodyDataTaskAssignRuleInfoRulesRuleBasicInfo &&) = default ;
    ListTaskAssignRulesResponseBodyDataTaskAssignRuleInfoRulesRuleBasicInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTaskAssignRulesResponseBodyDataTaskAssignRuleInfoRulesRuleBasicInfo() = default ;
    ListTaskAssignRulesResponseBodyDataTaskAssignRuleInfoRulesRuleBasicInfo& operator=(const ListTaskAssignRulesResponseBodyDataTaskAssignRuleInfoRulesRuleBasicInfo &) = default ;
    ListTaskAssignRulesResponseBodyDataTaskAssignRuleInfoRulesRuleBasicInfo& operator=(ListTaskAssignRulesResponseBodyDataTaskAssignRuleInfoRulesRuleBasicInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->name_ != nullptr
        && this->rid_ != nullptr; };
    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListTaskAssignRulesResponseBodyDataTaskAssignRuleInfoRulesRuleBasicInfo& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // rid Field Functions 
    bool hasRid() const { return this->rid_ != nullptr;};
    void deleteRid() { this->rid_ = nullptr;};
    inline string rid() const { DARABONBA_PTR_GET_DEFAULT(rid_, "") };
    inline ListTaskAssignRulesResponseBodyDataTaskAssignRuleInfoRulesRuleBasicInfo& setRid(string rid) { DARABONBA_PTR_SET_VALUE(rid_, rid) };


  protected:
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> rid_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Qualitycheck20190115
#endif
