// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MIGRATIONJOBPLANESCALATIONS_HPP_
#define ALIBABACLOUD_MODELS_MIGRATIONJOBPLANESCALATIONS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/MigrationJobPlanEscalationsEscalations.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class MigrationJobPlanEscalations : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const MigrationJobPlanEscalations& obj) { 
      DARABONBA_PTR_TO_JSON(Escalations, escalations_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Uuid, uuid_);
    };
    friend void from_json(const Darabonba::Json& j, MigrationJobPlanEscalations& obj) { 
      DARABONBA_PTR_FROM_JSON(Escalations, escalations_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Uuid, uuid_);
    };
    MigrationJobPlanEscalations() = default ;
    MigrationJobPlanEscalations(const MigrationJobPlanEscalations &) = default ;
    MigrationJobPlanEscalations(MigrationJobPlanEscalations &&) = default ;
    MigrationJobPlanEscalations(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~MigrationJobPlanEscalations() = default ;
    MigrationJobPlanEscalations& operator=(const MigrationJobPlanEscalations &) = default ;
    MigrationJobPlanEscalations& operator=(MigrationJobPlanEscalations &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->escalations_ != nullptr
        && this->name_ != nullptr && this->uuid_ != nullptr; };
    // escalations Field Functions 
    bool hasEscalations() const { return this->escalations_ != nullptr;};
    void deleteEscalations() { this->escalations_ = nullptr;};
    inline const vector<Models::MigrationJobPlanEscalationsEscalations> & escalations() const { DARABONBA_PTR_GET_CONST(escalations_, vector<Models::MigrationJobPlanEscalationsEscalations>) };
    inline vector<Models::MigrationJobPlanEscalationsEscalations> escalations() { DARABONBA_PTR_GET(escalations_, vector<Models::MigrationJobPlanEscalationsEscalations>) };
    inline MigrationJobPlanEscalations& setEscalations(const vector<Models::MigrationJobPlanEscalationsEscalations> & escalations) { DARABONBA_PTR_SET_VALUE(escalations_, escalations) };
    inline MigrationJobPlanEscalations& setEscalations(vector<Models::MigrationJobPlanEscalationsEscalations> && escalations) { DARABONBA_PTR_SET_RVALUE(escalations_, escalations) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline MigrationJobPlanEscalations& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // uuid Field Functions 
    bool hasUuid() const { return this->uuid_ != nullptr;};
    void deleteUuid() { this->uuid_ = nullptr;};
    inline string uuid() const { DARABONBA_PTR_GET_DEFAULT(uuid_, "") };
    inline MigrationJobPlanEscalations& setUuid(string uuid) { DARABONBA_PTR_SET_VALUE(uuid_, uuid) };


  protected:
    std::shared_ptr<vector<Models::MigrationJobPlanEscalationsEscalations>> escalations_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> uuid_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
