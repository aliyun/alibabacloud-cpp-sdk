// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ESCALATIONRULEESCALATIONSCONTACTGROUPSBYLEVEL_HPP_
#define ALIBABACLOUD_MODELS_ESCALATIONRULEESCALATIONSCONTACTGROUPSBYLEVEL_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class EscalationRuleEscalationsContactGroupsByLevel : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const EscalationRuleEscalationsContactGroupsByLevel& obj) { 
      DARABONBA_PTR_TO_JSON(Critical, critical_);
      DARABONBA_PTR_TO_JSON(Error, error_);
      DARABONBA_PTR_TO_JSON(Info, info_);
      DARABONBA_PTR_TO_JSON(Resolve, resolve_);
      DARABONBA_PTR_TO_JSON(Warning, warning_);
    };
    friend void from_json(const Darabonba::Json& j, EscalationRuleEscalationsContactGroupsByLevel& obj) { 
      DARABONBA_PTR_FROM_JSON(Critical, critical_);
      DARABONBA_PTR_FROM_JSON(Error, error_);
      DARABONBA_PTR_FROM_JSON(Info, info_);
      DARABONBA_PTR_FROM_JSON(Resolve, resolve_);
      DARABONBA_PTR_FROM_JSON(Warning, warning_);
    };
    EscalationRuleEscalationsContactGroupsByLevel() = default ;
    EscalationRuleEscalationsContactGroupsByLevel(const EscalationRuleEscalationsContactGroupsByLevel &) = default ;
    EscalationRuleEscalationsContactGroupsByLevel(EscalationRuleEscalationsContactGroupsByLevel &&) = default ;
    EscalationRuleEscalationsContactGroupsByLevel(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~EscalationRuleEscalationsContactGroupsByLevel() = default ;
    EscalationRuleEscalationsContactGroupsByLevel& operator=(const EscalationRuleEscalationsContactGroupsByLevel &) = default ;
    EscalationRuleEscalationsContactGroupsByLevel& operator=(EscalationRuleEscalationsContactGroupsByLevel &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->critical_ != nullptr
        && this->error_ != nullptr && this->info_ != nullptr && this->resolve_ != nullptr && this->warning_ != nullptr; };
    // critical Field Functions 
    bool hasCritical() const { return this->critical_ != nullptr;};
    void deleteCritical() { this->critical_ = nullptr;};
    inline const vector<string> & critical() const { DARABONBA_PTR_GET_CONST(critical_, vector<string>) };
    inline vector<string> critical() { DARABONBA_PTR_GET(critical_, vector<string>) };
    inline EscalationRuleEscalationsContactGroupsByLevel& setCritical(const vector<string> & critical) { DARABONBA_PTR_SET_VALUE(critical_, critical) };
    inline EscalationRuleEscalationsContactGroupsByLevel& setCritical(vector<string> && critical) { DARABONBA_PTR_SET_RVALUE(critical_, critical) };


    // error Field Functions 
    bool hasError() const { return this->error_ != nullptr;};
    void deleteError() { this->error_ = nullptr;};
    inline const vector<string> & error() const { DARABONBA_PTR_GET_CONST(error_, vector<string>) };
    inline vector<string> error() { DARABONBA_PTR_GET(error_, vector<string>) };
    inline EscalationRuleEscalationsContactGroupsByLevel& setError(const vector<string> & error) { DARABONBA_PTR_SET_VALUE(error_, error) };
    inline EscalationRuleEscalationsContactGroupsByLevel& setError(vector<string> && error) { DARABONBA_PTR_SET_RVALUE(error_, error) };


    // info Field Functions 
    bool hasInfo() const { return this->info_ != nullptr;};
    void deleteInfo() { this->info_ = nullptr;};
    inline const vector<string> & info() const { DARABONBA_PTR_GET_CONST(info_, vector<string>) };
    inline vector<string> info() { DARABONBA_PTR_GET(info_, vector<string>) };
    inline EscalationRuleEscalationsContactGroupsByLevel& setInfo(const vector<string> & info) { DARABONBA_PTR_SET_VALUE(info_, info) };
    inline EscalationRuleEscalationsContactGroupsByLevel& setInfo(vector<string> && info) { DARABONBA_PTR_SET_RVALUE(info_, info) };


    // resolve Field Functions 
    bool hasResolve() const { return this->resolve_ != nullptr;};
    void deleteResolve() { this->resolve_ = nullptr;};
    inline const vector<string> & resolve() const { DARABONBA_PTR_GET_CONST(resolve_, vector<string>) };
    inline vector<string> resolve() { DARABONBA_PTR_GET(resolve_, vector<string>) };
    inline EscalationRuleEscalationsContactGroupsByLevel& setResolve(const vector<string> & resolve) { DARABONBA_PTR_SET_VALUE(resolve_, resolve) };
    inline EscalationRuleEscalationsContactGroupsByLevel& setResolve(vector<string> && resolve) { DARABONBA_PTR_SET_RVALUE(resolve_, resolve) };


    // warning Field Functions 
    bool hasWarning() const { return this->warning_ != nullptr;};
    void deleteWarning() { this->warning_ = nullptr;};
    inline const vector<string> & warning() const { DARABONBA_PTR_GET_CONST(warning_, vector<string>) };
    inline vector<string> warning() { DARABONBA_PTR_GET(warning_, vector<string>) };
    inline EscalationRuleEscalationsContactGroupsByLevel& setWarning(const vector<string> & warning) { DARABONBA_PTR_SET_VALUE(warning_, warning) };
    inline EscalationRuleEscalationsContactGroupsByLevel& setWarning(vector<string> && warning) { DARABONBA_PTR_SET_RVALUE(warning_, warning) };


  protected:
    std::shared_ptr<vector<string>> critical_ = nullptr;
    std::shared_ptr<vector<string>> error_ = nullptr;
    std::shared_ptr<vector<string>> info_ = nullptr;
    std::shared_ptr<vector<string>> resolve_ = nullptr;
    std::shared_ptr<vector<string>> warning_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
