// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTWAFMANAGEDRULESRESPONSEBODYRULES_HPP_
#define ALIBABACLOUD_MODELS_LISTWAFMANAGEDRULESRESPONSEBODYRULES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class ListWafManagedRulesResponseBodyRules : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListWafManagedRulesResponseBodyRules& obj) { 
      DARABONBA_PTR_TO_JSON(Action, action_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(ProtectionLevel, protectionLevel_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, ListWafManagedRulesResponseBodyRules& obj) { 
      DARABONBA_PTR_FROM_JSON(Action, action_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(ProtectionLevel, protectionLevel_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    ListWafManagedRulesResponseBodyRules() = default ;
    ListWafManagedRulesResponseBodyRules(const ListWafManagedRulesResponseBodyRules &) = default ;
    ListWafManagedRulesResponseBodyRules(ListWafManagedRulesResponseBodyRules &&) = default ;
    ListWafManagedRulesResponseBodyRules(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListWafManagedRulesResponseBodyRules() = default ;
    ListWafManagedRulesResponseBodyRules& operator=(const ListWafManagedRulesResponseBodyRules &) = default ;
    ListWafManagedRulesResponseBodyRules& operator=(ListWafManagedRulesResponseBodyRules &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->action_ != nullptr
        && this->id_ != nullptr && this->name_ != nullptr && this->protectionLevel_ != nullptr && this->status_ != nullptr; };
    // action Field Functions 
    bool hasAction() const { return this->action_ != nullptr;};
    void deleteAction() { this->action_ = nullptr;};
    inline string action() const { DARABONBA_PTR_GET_DEFAULT(action_, "") };
    inline ListWafManagedRulesResponseBodyRules& setAction(string action) { DARABONBA_PTR_SET_VALUE(action_, action) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline ListWafManagedRulesResponseBodyRules& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListWafManagedRulesResponseBodyRules& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // protectionLevel Field Functions 
    bool hasProtectionLevel() const { return this->protectionLevel_ != nullptr;};
    void deleteProtectionLevel() { this->protectionLevel_ = nullptr;};
    inline int32_t protectionLevel() const { DARABONBA_PTR_GET_DEFAULT(protectionLevel_, 0) };
    inline ListWafManagedRulesResponseBodyRules& setProtectionLevel(int32_t protectionLevel) { DARABONBA_PTR_SET_VALUE(protectionLevel_, protectionLevel) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListWafManagedRulesResponseBodyRules& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // Protection action of the managed rule.
    std::shared_ptr<string> action_ = nullptr;
    // ID of the managed rule.
    std::shared_ptr<int64_t> id_ = nullptr;
    // Name of the managed rule.
    std::shared_ptr<string> name_ = nullptr;
    // Protection level of the managed rule.
    std::shared_ptr<int32_t> protectionLevel_ = nullptr;
    // Protection status of the managed rule.
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
