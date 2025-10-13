// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INCIDENTMEMBERSTRUCTESCALATION_HPP_
#define ALIBABACLOUD_MODELS_INCIDENTMEMBERSTRUCTESCALATION_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class IncidentMemberStructEscalation : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const IncidentMemberStructEscalation& obj) { 
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(incidentEscalationId, incidentEscalationId_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(stageIndex, stageIndex_);
      DARABONBA_PTR_TO_JSON(title, title_);
    };
    friend void from_json(const Darabonba::Json& j, IncidentMemberStructEscalation& obj) { 
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(incidentEscalationId, incidentEscalationId_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(stageIndex, stageIndex_);
      DARABONBA_PTR_FROM_JSON(title, title_);
    };
    IncidentMemberStructEscalation() = default ;
    IncidentMemberStructEscalation(const IncidentMemberStructEscalation &) = default ;
    IncidentMemberStructEscalation(IncidentMemberStructEscalation &&) = default ;
    IncidentMemberStructEscalation(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~IncidentMemberStructEscalation() = default ;
    IncidentMemberStructEscalation& operator=(const IncidentMemberStructEscalation &) = default ;
    IncidentMemberStructEscalation& operator=(IncidentMemberStructEscalation &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->description_ == nullptr
        && return this->incidentEscalationId_ == nullptr && return this->name_ == nullptr && return this->stageIndex_ == nullptr && return this->title_ == nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline IncidentMemberStructEscalation& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // incidentEscalationId Field Functions 
    bool hasIncidentEscalationId() const { return this->incidentEscalationId_ != nullptr;};
    void deleteIncidentEscalationId() { this->incidentEscalationId_ = nullptr;};
    inline string incidentEscalationId() const { DARABONBA_PTR_GET_DEFAULT(incidentEscalationId_, "") };
    inline IncidentMemberStructEscalation& setIncidentEscalationId(string incidentEscalationId) { DARABONBA_PTR_SET_VALUE(incidentEscalationId_, incidentEscalationId) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline IncidentMemberStructEscalation& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // stageIndex Field Functions 
    bool hasStageIndex() const { return this->stageIndex_ != nullptr;};
    void deleteStageIndex() { this->stageIndex_ = nullptr;};
    inline string stageIndex() const { DARABONBA_PTR_GET_DEFAULT(stageIndex_, "") };
    inline IncidentMemberStructEscalation& setStageIndex(string stageIndex) { DARABONBA_PTR_SET_VALUE(stageIndex_, stageIndex) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string title() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline IncidentMemberStructEscalation& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


  protected:
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<string> incidentEscalationId_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> stageIndex_ = nullptr;
    std::shared_ptr<string> title_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
