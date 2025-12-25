// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTUSERWAFRULESETSRESPONSEBODYRULESETS_HPP_
#define ALIBABACLOUD_MODELS_LISTUSERWAFRULESETSRESPONSEBODYRULESETS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class ListUserWafRulesetsResponseBodyRulesets : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListUserWafRulesetsResponseBodyRulesets& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Phase, phase_);
      DARABONBA_PTR_TO_JSON(Position, position_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, ListUserWafRulesetsResponseBodyRulesets& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Phase, phase_);
      DARABONBA_PTR_FROM_JSON(Position, position_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    ListUserWafRulesetsResponseBodyRulesets() = default ;
    ListUserWafRulesetsResponseBodyRulesets(const ListUserWafRulesetsResponseBodyRulesets &) = default ;
    ListUserWafRulesetsResponseBodyRulesets(ListUserWafRulesetsResponseBodyRulesets &&) = default ;
    ListUserWafRulesetsResponseBodyRulesets(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListUserWafRulesetsResponseBodyRulesets() = default ;
    ListUserWafRulesetsResponseBodyRulesets& operator=(const ListUserWafRulesetsResponseBodyRulesets &) = default ;
    ListUserWafRulesetsResponseBodyRulesets& operator=(ListUserWafRulesetsResponseBodyRulesets &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->description_ == nullptr
        && return this->id_ == nullptr && return this->name_ == nullptr && return this->phase_ == nullptr && return this->position_ == nullptr && return this->status_ == nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ListUserWafRulesetsResponseBodyRulesets& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline ListUserWafRulesetsResponseBodyRulesets& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListUserWafRulesetsResponseBodyRulesets& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // phase Field Functions 
    bool hasPhase() const { return this->phase_ != nullptr;};
    void deletePhase() { this->phase_ = nullptr;};
    inline string phase() const { DARABONBA_PTR_GET_DEFAULT(phase_, "") };
    inline ListUserWafRulesetsResponseBodyRulesets& setPhase(string phase) { DARABONBA_PTR_SET_VALUE(phase_, phase) };


    // position Field Functions 
    bool hasPosition() const { return this->position_ != nullptr;};
    void deletePosition() { this->position_ = nullptr;};
    inline int64_t position() const { DARABONBA_PTR_GET_DEFAULT(position_, 0L) };
    inline ListUserWafRulesetsResponseBodyRulesets& setPosition(int64_t position) { DARABONBA_PTR_SET_VALUE(position_, position) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListUserWafRulesetsResponseBodyRulesets& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<int64_t> id_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> phase_ = nullptr;
    std::shared_ptr<int64_t> position_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
