// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYCLUSTERREQUESTAPISERVERCUSTOMCERTSANS_HPP_
#define ALIBABACLOUD_MODELS_MODIFYCLUSTERREQUESTAPISERVERCUSTOMCERTSANS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CS20151215
{
namespace Models
{
  class ModifyClusterRequestApiServerCustomCertSans : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyClusterRequestApiServerCustomCertSans& obj) { 
      DARABONBA_PTR_TO_JSON(action, action_);
      DARABONBA_PTR_TO_JSON(subject_alternative_names, subjectAlternativeNames_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyClusterRequestApiServerCustomCertSans& obj) { 
      DARABONBA_PTR_FROM_JSON(action, action_);
      DARABONBA_PTR_FROM_JSON(subject_alternative_names, subjectAlternativeNames_);
    };
    ModifyClusterRequestApiServerCustomCertSans() = default ;
    ModifyClusterRequestApiServerCustomCertSans(const ModifyClusterRequestApiServerCustomCertSans &) = default ;
    ModifyClusterRequestApiServerCustomCertSans(ModifyClusterRequestApiServerCustomCertSans &&) = default ;
    ModifyClusterRequestApiServerCustomCertSans(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyClusterRequestApiServerCustomCertSans() = default ;
    ModifyClusterRequestApiServerCustomCertSans& operator=(const ModifyClusterRequestApiServerCustomCertSans &) = default ;
    ModifyClusterRequestApiServerCustomCertSans& operator=(ModifyClusterRequestApiServerCustomCertSans &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->action_ != nullptr
        && this->subjectAlternativeNames_ != nullptr; };
    // action Field Functions 
    bool hasAction() const { return this->action_ != nullptr;};
    void deleteAction() { this->action_ = nullptr;};
    inline string action() const { DARABONBA_PTR_GET_DEFAULT(action_, "") };
    inline ModifyClusterRequestApiServerCustomCertSans& setAction(string action) { DARABONBA_PTR_SET_VALUE(action_, action) };


    // subjectAlternativeNames Field Functions 
    bool hasSubjectAlternativeNames() const { return this->subjectAlternativeNames_ != nullptr;};
    void deleteSubjectAlternativeNames() { this->subjectAlternativeNames_ = nullptr;};
    inline const vector<string> & subjectAlternativeNames() const { DARABONBA_PTR_GET_CONST(subjectAlternativeNames_, vector<string>) };
    inline vector<string> subjectAlternativeNames() { DARABONBA_PTR_GET(subjectAlternativeNames_, vector<string>) };
    inline ModifyClusterRequestApiServerCustomCertSans& setSubjectAlternativeNames(const vector<string> & subjectAlternativeNames) { DARABONBA_PTR_SET_VALUE(subjectAlternativeNames_, subjectAlternativeNames) };
    inline ModifyClusterRequestApiServerCustomCertSans& setSubjectAlternativeNames(vector<string> && subjectAlternativeNames) { DARABONBA_PTR_SET_RVALUE(subjectAlternativeNames_, subjectAlternativeNames) };


  protected:
    // Specifies whether to overwrite or add SANs. Valid values:
    // 
    // *   overwrite: overwrites SANs.
    // *   append: adds SANs.
    std::shared_ptr<string> action_ = nullptr;
    // The list of SANs.
    std::shared_ptr<vector<string>> subjectAlternativeNames_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CS20151215
#endif
