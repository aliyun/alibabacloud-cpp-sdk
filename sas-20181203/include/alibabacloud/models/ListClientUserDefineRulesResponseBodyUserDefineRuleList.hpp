// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCLIENTUSERDEFINERULESRESPONSEBODYUSERDEFINERULELIST_HPP_
#define ALIBABACLOUD_MODELS_LISTCLIENTUSERDEFINERULESRESPONSEBODYUSERDEFINERULELIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ListClientUserDefineRulesResponseBodyUserDefineRuleList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListClientUserDefineRulesResponseBodyUserDefineRuleList& obj) { 
      DARABONBA_PTR_TO_JSON(ActionType, actionType_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Platform, platform_);
      DARABONBA_PTR_TO_JSON(SwitchId, switchId_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, ListClientUserDefineRulesResponseBodyUserDefineRuleList& obj) { 
      DARABONBA_PTR_FROM_JSON(ActionType, actionType_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Platform, platform_);
      DARABONBA_PTR_FROM_JSON(SwitchId, switchId_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    ListClientUserDefineRulesResponseBodyUserDefineRuleList() = default ;
    ListClientUserDefineRulesResponseBodyUserDefineRuleList(const ListClientUserDefineRulesResponseBodyUserDefineRuleList &) = default ;
    ListClientUserDefineRulesResponseBodyUserDefineRuleList(ListClientUserDefineRulesResponseBodyUserDefineRuleList &&) = default ;
    ListClientUserDefineRulesResponseBodyUserDefineRuleList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListClientUserDefineRulesResponseBodyUserDefineRuleList() = default ;
    ListClientUserDefineRulesResponseBodyUserDefineRuleList& operator=(const ListClientUserDefineRulesResponseBodyUserDefineRuleList &) = default ;
    ListClientUserDefineRulesResponseBodyUserDefineRuleList& operator=(ListClientUserDefineRulesResponseBodyUserDefineRuleList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->actionType_ == nullptr
        && return this->id_ == nullptr && return this->name_ == nullptr && return this->platform_ == nullptr && return this->switchId_ == nullptr && return this->type_ == nullptr; };
    // actionType Field Functions 
    bool hasActionType() const { return this->actionType_ != nullptr;};
    void deleteActionType() { this->actionType_ = nullptr;};
    inline int32_t actionType() const { DARABONBA_PTR_GET_DEFAULT(actionType_, 0) };
    inline ListClientUserDefineRulesResponseBodyUserDefineRuleList& setActionType(int32_t actionType) { DARABONBA_PTR_SET_VALUE(actionType_, actionType) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline ListClientUserDefineRulesResponseBodyUserDefineRuleList& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListClientUserDefineRulesResponseBodyUserDefineRuleList& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // platform Field Functions 
    bool hasPlatform() const { return this->platform_ != nullptr;};
    void deletePlatform() { this->platform_ = nullptr;};
    inline string platform() const { DARABONBA_PTR_GET_DEFAULT(platform_, "") };
    inline ListClientUserDefineRulesResponseBodyUserDefineRuleList& setPlatform(string platform) { DARABONBA_PTR_SET_VALUE(platform_, platform) };


    // switchId Field Functions 
    bool hasSwitchId() const { return this->switchId_ != nullptr;};
    void deleteSwitchId() { this->switchId_ = nullptr;};
    inline string switchId() const { DARABONBA_PTR_GET_DEFAULT(switchId_, "") };
    inline ListClientUserDefineRulesResponseBodyUserDefineRuleList& setSwitchId(string switchId) { DARABONBA_PTR_SET_VALUE(switchId_, switchId) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline int32_t type() const { DARABONBA_PTR_GET_DEFAULT(type_, 0) };
    inline ListClientUserDefineRulesResponseBodyUserDefineRuleList& setType(int32_t type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The action of the rule. Valid values:
    // 
    // *   **0**: allow
    // *   **1**: block
    std::shared_ptr<int32_t> actionType_ = nullptr;
    // The ID of the rule.
    std::shared_ptr<int64_t> id_ = nullptr;
    // The name of the rule.
    std::shared_ptr<string> name_ = nullptr;
    // The type of the operating system. Valid values:
    // 
    // *   **windows**: Windows
    // *   **linux**: Linux
    // *   **all**: all types
    std::shared_ptr<string> platform_ = nullptr;
    // The switch ID of the rule.
    std::shared_ptr<string> switchId_ = nullptr;
    // The type of the rule. Valid values:
    // 
    // *   **1**: Process hash
    // *   **2**: Command line
    // *   **3**: Process Network
    // *   **4**: File Read and Write
    // *   **5**: Operation on Registry
    // *   **6**: Dynamic-link Library Loading
    // *   **7**: File Renaming
    std::shared_ptr<int32_t> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
