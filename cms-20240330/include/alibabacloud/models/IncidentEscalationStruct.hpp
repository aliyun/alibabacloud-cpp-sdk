// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INCIDENTESCALATIONSTRUCT_HPP_
#define ALIBABACLOUD_MODELS_INCIDENTESCALATIONSTRUCT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/IncidentEscalationStageStruct.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class IncidentEscalationStruct : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const IncidentEscalationStruct& obj) { 
      DARABONBA_PTR_TO_JSON(createTime, createTime_);
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(incidentEscalationId, incidentEscalationId_);
      DARABONBA_PTR_TO_JSON(modifyTime, modifyTime_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(regionId, regionId_);
      DARABONBA_PTR_TO_JSON(stage, stage_);
      DARABONBA_PTR_TO_JSON(workspace, workspace_);
    };
    friend void from_json(const Darabonba::Json& j, IncidentEscalationStruct& obj) { 
      DARABONBA_PTR_FROM_JSON(createTime, createTime_);
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(incidentEscalationId, incidentEscalationId_);
      DARABONBA_PTR_FROM_JSON(modifyTime, modifyTime_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(regionId, regionId_);
      DARABONBA_PTR_FROM_JSON(stage, stage_);
      DARABONBA_PTR_FROM_JSON(workspace, workspace_);
    };
    IncidentEscalationStruct() = default ;
    IncidentEscalationStruct(const IncidentEscalationStruct &) = default ;
    IncidentEscalationStruct(IncidentEscalationStruct &&) = default ;
    IncidentEscalationStruct(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~IncidentEscalationStruct() = default ;
    IncidentEscalationStruct& operator=(const IncidentEscalationStruct &) = default ;
    IncidentEscalationStruct& operator=(IncidentEscalationStruct &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->createTime_ == nullptr
        && return this->description_ == nullptr && return this->incidentEscalationId_ == nullptr && return this->modifyTime_ == nullptr && return this->name_ == nullptr && return this->regionId_ == nullptr
        && return this->stage_ == nullptr && return this->workspace_ == nullptr; };
    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline int64_t createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
    inline IncidentEscalationStruct& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline IncidentEscalationStruct& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // incidentEscalationId Field Functions 
    bool hasIncidentEscalationId() const { return this->incidentEscalationId_ != nullptr;};
    void deleteIncidentEscalationId() { this->incidentEscalationId_ = nullptr;};
    inline string incidentEscalationId() const { DARABONBA_PTR_GET_DEFAULT(incidentEscalationId_, "") };
    inline IncidentEscalationStruct& setIncidentEscalationId(string incidentEscalationId) { DARABONBA_PTR_SET_VALUE(incidentEscalationId_, incidentEscalationId) };


    // modifyTime Field Functions 
    bool hasModifyTime() const { return this->modifyTime_ != nullptr;};
    void deleteModifyTime() { this->modifyTime_ = nullptr;};
    inline int64_t modifyTime() const { DARABONBA_PTR_GET_DEFAULT(modifyTime_, 0L) };
    inline IncidentEscalationStruct& setModifyTime(int64_t modifyTime) { DARABONBA_PTR_SET_VALUE(modifyTime_, modifyTime) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline IncidentEscalationStruct& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline IncidentEscalationStruct& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // stage Field Functions 
    bool hasStage() const { return this->stage_ != nullptr;};
    void deleteStage() { this->stage_ = nullptr;};
    inline const vector<IncidentEscalationStageStruct> & stage() const { DARABONBA_PTR_GET_CONST(stage_, vector<IncidentEscalationStageStruct>) };
    inline vector<IncidentEscalationStageStruct> stage() { DARABONBA_PTR_GET(stage_, vector<IncidentEscalationStageStruct>) };
    inline IncidentEscalationStruct& setStage(const vector<IncidentEscalationStageStruct> & stage) { DARABONBA_PTR_SET_VALUE(stage_, stage) };
    inline IncidentEscalationStruct& setStage(vector<IncidentEscalationStageStruct> && stage) { DARABONBA_PTR_SET_RVALUE(stage_, stage) };


    // workspace Field Functions 
    bool hasWorkspace() const { return this->workspace_ != nullptr;};
    void deleteWorkspace() { this->workspace_ = nullptr;};
    inline string workspace() const { DARABONBA_PTR_GET_DEFAULT(workspace_, "") };
    inline IncidentEscalationStruct& setWorkspace(string workspace) { DARABONBA_PTR_SET_VALUE(workspace_, workspace) };


  protected:
    std::shared_ptr<int64_t> createTime_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<string> incidentEscalationId_ = nullptr;
    std::shared_ptr<int64_t> modifyTime_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> regionId_ = nullptr;
    std::shared_ptr<vector<IncidentEscalationStageStruct>> stage_ = nullptr;
    std::shared_ptr<string> workspace_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
