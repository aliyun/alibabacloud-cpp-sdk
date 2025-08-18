// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTWAFMANAGEDRULESREQUESTQUERYARGS_HPP_
#define ALIBABACLOUD_MODELS_LISTWAFMANAGEDRULESREQUESTQUERYARGS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class ListWafManagedRulesRequestQueryArgs : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListWafManagedRulesRequestQueryArgs& obj) { 
      DARABONBA_PTR_TO_JSON(Action, action_);
      DARABONBA_PTR_TO_JSON(IdNameLike, idNameLike_);
      DARABONBA_PTR_TO_JSON(ProtectionLevels, protectionLevels_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, ListWafManagedRulesRequestQueryArgs& obj) { 
      DARABONBA_PTR_FROM_JSON(Action, action_);
      DARABONBA_PTR_FROM_JSON(IdNameLike, idNameLike_);
      DARABONBA_PTR_FROM_JSON(ProtectionLevels, protectionLevels_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    ListWafManagedRulesRequestQueryArgs() = default ;
    ListWafManagedRulesRequestQueryArgs(const ListWafManagedRulesRequestQueryArgs &) = default ;
    ListWafManagedRulesRequestQueryArgs(ListWafManagedRulesRequestQueryArgs &&) = default ;
    ListWafManagedRulesRequestQueryArgs(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListWafManagedRulesRequestQueryArgs() = default ;
    ListWafManagedRulesRequestQueryArgs& operator=(const ListWafManagedRulesRequestQueryArgs &) = default ;
    ListWafManagedRulesRequestQueryArgs& operator=(ListWafManagedRulesRequestQueryArgs &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->action_ != nullptr
        && this->idNameLike_ != nullptr && this->protectionLevels_ != nullptr && this->status_ != nullptr; };
    // action Field Functions 
    bool hasAction() const { return this->action_ != nullptr;};
    void deleteAction() { this->action_ = nullptr;};
    inline string action() const { DARABONBA_PTR_GET_DEFAULT(action_, "") };
    inline ListWafManagedRulesRequestQueryArgs& setAction(string action) { DARABONBA_PTR_SET_VALUE(action_, action) };


    // idNameLike Field Functions 
    bool hasIdNameLike() const { return this->idNameLike_ != nullptr;};
    void deleteIdNameLike() { this->idNameLike_ = nullptr;};
    inline string idNameLike() const { DARABONBA_PTR_GET_DEFAULT(idNameLike_, "") };
    inline ListWafManagedRulesRequestQueryArgs& setIdNameLike(string idNameLike) { DARABONBA_PTR_SET_VALUE(idNameLike_, idNameLike) };


    // protectionLevels Field Functions 
    bool hasProtectionLevels() const { return this->protectionLevels_ != nullptr;};
    void deleteProtectionLevels() { this->protectionLevels_ = nullptr;};
    inline const vector<int32_t> & protectionLevels() const { DARABONBA_PTR_GET_CONST(protectionLevels_, vector<int32_t>) };
    inline vector<int32_t> protectionLevels() { DARABONBA_PTR_GET(protectionLevels_, vector<int32_t>) };
    inline ListWafManagedRulesRequestQueryArgs& setProtectionLevels(const vector<int32_t> & protectionLevels) { DARABONBA_PTR_SET_VALUE(protectionLevels_, protectionLevels) };
    inline ListWafManagedRulesRequestQueryArgs& setProtectionLevels(vector<int32_t> && protectionLevels) { DARABONBA_PTR_SET_RVALUE(protectionLevels_, protectionLevels) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListWafManagedRulesRequestQueryArgs& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // Action.
    std::shared_ptr<string> action_ = nullptr;
    // Fuzzy search for rule ID or rule name.
    std::shared_ptr<string> idNameLike_ = nullptr;
    // List of rule protection levels.
    std::shared_ptr<vector<int32_t>> protectionLevels_ = nullptr;
    // Status.
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
