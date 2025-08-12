// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INCIDENTPLANSTRUCT_HPP_
#define ALIBABACLOUD_MODELS_INCIDENTPLANSTRUCT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/Cms20240330.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class IncidentPlanStruct : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const IncidentPlanStruct& obj) { 
      DARABONBA_PTR_TO_JSON(autoRecoverSeconds, autoRecoverSeconds_);
      DARABONBA_PTR_TO_JSON(closeExpire, closeExpire_);
      DARABONBA_PTR_TO_JSON(corporation, corporation_);
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(escalationId, escalationId_);
      DARABONBA_PTR_TO_JSON(gmtCreate, gmtCreate_);
      DARABONBA_PTR_TO_JSON(gmtModified, gmtModified_);
      DARABONBA_PTR_TO_JSON(groupBy, groupBy_);
      DARABONBA_PTR_TO_JSON(incidentPlanId, incidentPlanId_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(resourceFiled, resourceFiled_);
      DARABONBA_PTR_TO_JSON(status, status_);
      DARABONBA_PTR_TO_JSON(userId, userId_);
      DARABONBA_PTR_TO_JSON(workspace, workspace_);
    };
    friend void from_json(const Darabonba::Json& j, IncidentPlanStruct& obj) { 
      DARABONBA_PTR_FROM_JSON(autoRecoverSeconds, autoRecoverSeconds_);
      DARABONBA_PTR_FROM_JSON(closeExpire, closeExpire_);
      DARABONBA_PTR_FROM_JSON(corporation, corporation_);
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(escalationId, escalationId_);
      DARABONBA_PTR_FROM_JSON(gmtCreate, gmtCreate_);
      DARABONBA_PTR_FROM_JSON(gmtModified, gmtModified_);
      DARABONBA_PTR_FROM_JSON(groupBy, groupBy_);
      DARABONBA_PTR_FROM_JSON(incidentPlanId, incidentPlanId_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(resourceFiled, resourceFiled_);
      DARABONBA_PTR_FROM_JSON(status, status_);
      DARABONBA_PTR_FROM_JSON(userId, userId_);
      DARABONBA_PTR_FROM_JSON(workspace, workspace_);
    };
    IncidentPlanStruct() = default ;
    IncidentPlanStruct(const IncidentPlanStruct &) = default ;
    IncidentPlanStruct(IncidentPlanStruct &&) = default ;
    IncidentPlanStruct(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~IncidentPlanStruct() = default ;
    IncidentPlanStruct& operator=(const IncidentPlanStruct &) = default ;
    IncidentPlanStruct& operator=(IncidentPlanStruct &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->autoRecoverSeconds_ != nullptr
        && this->closeExpire_ != nullptr && this->corporation_ != nullptr && this->description_ != nullptr && this->escalationId_ != nullptr && this->gmtCreate_ != nullptr
        && this->gmtModified_ != nullptr && this->groupBy_ != nullptr && this->incidentPlanId_ != nullptr && this->name_ != nullptr && this->resourceFiled_ != nullptr
        && this->status_ != nullptr && this->userId_ != nullptr && this->workspace_ != nullptr; };
    // autoRecoverSeconds Field Functions 
    bool hasAutoRecoverSeconds() const { return this->autoRecoverSeconds_ != nullptr;};
    void deleteAutoRecoverSeconds() { this->autoRecoverSeconds_ = nullptr;};
    inline int32_t autoRecoverSeconds() const { DARABONBA_PTR_GET_DEFAULT(autoRecoverSeconds_, 0) };
    inline IncidentPlanStruct& setAutoRecoverSeconds(int32_t autoRecoverSeconds) { DARABONBA_PTR_SET_VALUE(autoRecoverSeconds_, autoRecoverSeconds) };


    // closeExpire Field Functions 
    bool hasCloseExpire() const { return this->closeExpire_ != nullptr;};
    void deleteCloseExpire() { this->closeExpire_ = nullptr;};
    inline int64_t closeExpire() const { DARABONBA_PTR_GET_DEFAULT(closeExpire_, 0L) };
    inline IncidentPlanStruct& setCloseExpire(int64_t closeExpire) { DARABONBA_PTR_SET_VALUE(closeExpire_, closeExpire) };


    // corporation Field Functions 
    bool hasCorporation() const { return this->corporation_ != nullptr;};
    void deleteCorporation() { this->corporation_ = nullptr;};
    inline const vector<IncidentPlanCorporationStruct> & corporation() const { DARABONBA_PTR_GET_CONST(corporation_, vector<IncidentPlanCorporationStruct>) };
    inline vector<IncidentPlanCorporationStruct> corporation() { DARABONBA_PTR_GET(corporation_, vector<IncidentPlanCorporationStruct>) };
    inline IncidentPlanStruct& setCorporation(const vector<IncidentPlanCorporationStruct> & corporation) { DARABONBA_PTR_SET_VALUE(corporation_, corporation) };
    inline IncidentPlanStruct& setCorporation(vector<IncidentPlanCorporationStruct> && corporation) { DARABONBA_PTR_SET_RVALUE(corporation_, corporation) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline IncidentPlanStruct& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // escalationId Field Functions 
    bool hasEscalationId() const { return this->escalationId_ != nullptr;};
    void deleteEscalationId() { this->escalationId_ = nullptr;};
    inline const vector<string> & escalationId() const { DARABONBA_PTR_GET_CONST(escalationId_, vector<string>) };
    inline vector<string> escalationId() { DARABONBA_PTR_GET(escalationId_, vector<string>) };
    inline IncidentPlanStruct& setEscalationId(const vector<string> & escalationId) { DARABONBA_PTR_SET_VALUE(escalationId_, escalationId) };
    inline IncidentPlanStruct& setEscalationId(vector<string> && escalationId) { DARABONBA_PTR_SET_RVALUE(escalationId_, escalationId) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline int64_t gmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, 0L) };
    inline IncidentPlanStruct& setGmtCreate(int64_t gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline int64_t gmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, 0L) };
    inline IncidentPlanStruct& setGmtModified(int64_t gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    // groupBy Field Functions 
    bool hasGroupBy() const { return this->groupBy_ != nullptr;};
    void deleteGroupBy() { this->groupBy_ = nullptr;};
    inline const vector<IncidentPlanFieldPath> & groupBy() const { DARABONBA_PTR_GET_CONST(groupBy_, vector<IncidentPlanFieldPath>) };
    inline vector<IncidentPlanFieldPath> groupBy() { DARABONBA_PTR_GET(groupBy_, vector<IncidentPlanFieldPath>) };
    inline IncidentPlanStruct& setGroupBy(const vector<IncidentPlanFieldPath> & groupBy) { DARABONBA_PTR_SET_VALUE(groupBy_, groupBy) };
    inline IncidentPlanStruct& setGroupBy(vector<IncidentPlanFieldPath> && groupBy) { DARABONBA_PTR_SET_RVALUE(groupBy_, groupBy) };


    // incidentPlanId Field Functions 
    bool hasIncidentPlanId() const { return this->incidentPlanId_ != nullptr;};
    void deleteIncidentPlanId() { this->incidentPlanId_ = nullptr;};
    inline string incidentPlanId() const { DARABONBA_PTR_GET_DEFAULT(incidentPlanId_, "") };
    inline IncidentPlanStruct& setIncidentPlanId(string incidentPlanId) { DARABONBA_PTR_SET_VALUE(incidentPlanId_, incidentPlanId) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline IncidentPlanStruct& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // resourceFiled Field Functions 
    bool hasResourceFiled() const { return this->resourceFiled_ != nullptr;};
    void deleteResourceFiled() { this->resourceFiled_ = nullptr;};
    inline const vector<IncidentPlanFieldPath> & resourceFiled() const { DARABONBA_PTR_GET_CONST(resourceFiled_, vector<IncidentPlanFieldPath>) };
    inline vector<IncidentPlanFieldPath> resourceFiled() { DARABONBA_PTR_GET(resourceFiled_, vector<IncidentPlanFieldPath>) };
    inline IncidentPlanStruct& setResourceFiled(const vector<IncidentPlanFieldPath> & resourceFiled) { DARABONBA_PTR_SET_VALUE(resourceFiled_, resourceFiled) };
    inline IncidentPlanStruct& setResourceFiled(vector<IncidentPlanFieldPath> && resourceFiled) { DARABONBA_PTR_SET_RVALUE(resourceFiled_, resourceFiled) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline IncidentPlanStruct& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline int64_t userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, 0L) };
    inline IncidentPlanStruct& setUserId(int64_t userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    // workspace Field Functions 
    bool hasWorkspace() const { return this->workspace_ != nullptr;};
    void deleteWorkspace() { this->workspace_ = nullptr;};
    inline string workspace() const { DARABONBA_PTR_GET_DEFAULT(workspace_, "") };
    inline IncidentPlanStruct& setWorkspace(string workspace) { DARABONBA_PTR_SET_VALUE(workspace_, workspace) };


  protected:
    std::shared_ptr<int32_t> autoRecoverSeconds_ = nullptr;
    std::shared_ptr<int64_t> closeExpire_ = nullptr;
    std::shared_ptr<vector<IncidentPlanCorporationStruct>> corporation_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<vector<string>> escalationId_ = nullptr;
    std::shared_ptr<int64_t> gmtCreate_ = nullptr;
    std::shared_ptr<int64_t> gmtModified_ = nullptr;
    std::shared_ptr<vector<IncidentPlanFieldPath>> groupBy_ = nullptr;
    std::shared_ptr<string> incidentPlanId_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<vector<IncidentPlanFieldPath>> resourceFiled_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<int64_t> userId_ = nullptr;
    std::shared_ptr<string> workspace_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
