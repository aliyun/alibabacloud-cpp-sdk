// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INCIDENTESCALATIONPOLICYFORMODIFY_HPP_
#define ALIBABACLOUD_MODELS_INCIDENTESCALATIONPOLICYFORMODIFY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/IncidentEscalationStageForView.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class IncidentEscalationPolicyForModify : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const IncidentEscalationPolicyForModify& obj) { 
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(enable, enable_);
      DARABONBA_PTR_TO_JSON(escalationStageList, escalationStageList_);
      DARABONBA_PTR_TO_JSON(name, name_);
    };
    friend void from_json(const Darabonba::Json& j, IncidentEscalationPolicyForModify& obj) { 
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(enable, enable_);
      DARABONBA_PTR_FROM_JSON(escalationStageList, escalationStageList_);
      DARABONBA_PTR_FROM_JSON(name, name_);
    };
    IncidentEscalationPolicyForModify() = default ;
    IncidentEscalationPolicyForModify(const IncidentEscalationPolicyForModify &) = default ;
    IncidentEscalationPolicyForModify(IncidentEscalationPolicyForModify &&) = default ;
    IncidentEscalationPolicyForModify(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~IncidentEscalationPolicyForModify() = default ;
    IncidentEscalationPolicyForModify& operator=(const IncidentEscalationPolicyForModify &) = default ;
    IncidentEscalationPolicyForModify& operator=(IncidentEscalationPolicyForModify &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->description_ == nullptr
        && this->enable_ == nullptr && this->escalationStageList_ == nullptr && this->name_ == nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline IncidentEscalationPolicyForModify& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // enable Field Functions 
    bool hasEnable() const { return this->enable_ != nullptr;};
    void deleteEnable() { this->enable_ = nullptr;};
    inline bool getEnable() const { DARABONBA_PTR_GET_DEFAULT(enable_, false) };
    inline IncidentEscalationPolicyForModify& setEnable(bool enable) { DARABONBA_PTR_SET_VALUE(enable_, enable) };


    // escalationStageList Field Functions 
    bool hasEscalationStageList() const { return this->escalationStageList_ != nullptr;};
    void deleteEscalationStageList() { this->escalationStageList_ = nullptr;};
    inline const vector<IncidentEscalationStageForView> & getEscalationStageList() const { DARABONBA_PTR_GET_CONST(escalationStageList_, vector<IncidentEscalationStageForView>) };
    inline vector<IncidentEscalationStageForView> getEscalationStageList() { DARABONBA_PTR_GET(escalationStageList_, vector<IncidentEscalationStageForView>) };
    inline IncidentEscalationPolicyForModify& setEscalationStageList(const vector<IncidentEscalationStageForView> & escalationStageList) { DARABONBA_PTR_SET_VALUE(escalationStageList_, escalationStageList) };
    inline IncidentEscalationPolicyForModify& setEscalationStageList(vector<IncidentEscalationStageForView> && escalationStageList) { DARABONBA_PTR_SET_RVALUE(escalationStageList_, escalationStageList) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline IncidentEscalationPolicyForModify& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


  protected:
    shared_ptr<string> description_ {};
    shared_ptr<bool> enable_ {};
    shared_ptr<vector<IncidentEscalationStageForView>> escalationStageList_ {};
    // This parameter is required.
    shared_ptr<string> name_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
