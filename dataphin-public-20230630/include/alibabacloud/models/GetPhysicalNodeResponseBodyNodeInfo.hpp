// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPHYSICALNODERESPONSEBODYNODEINFO_HPP_
#define ALIBABACLOUD_MODELS_GETPHYSICALNODERESPONSEBODYNODEINFO_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetPhysicalNodeResponseBodyNodeInfoCreator.hpp>
#include <alibabacloud/models/GetPhysicalNodeResponseBodyNodeInfoModifier.hpp>
#include <vector>
#include <alibabacloud/models/GetPhysicalNodeResponseBodyNodeInfoOwner.hpp>
#include <alibabacloud/models/GetPhysicalNodeResponseBodyNodeInfoProjectInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class GetPhysicalNodeResponseBodyNodeInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetPhysicalNodeResponseBodyNodeInfo& obj) { 
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(Creator, creator_);
      DARABONBA_PTR_TO_JSON(CronExpression, cronExpression_);
      DARABONBA_PTR_TO_JSON(DataSourceId, dataSourceId_);
      DARABONBA_PTR_TO_JSON(DataSourceSchema, dataSourceSchema_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(From, from_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(LastModifiedTime, lastModifiedTime_);
      DARABONBA_PTR_TO_JSON(Modifier, modifier_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(OperatorType, operatorType_);
      DARABONBA_PTR_TO_JSON(OutputNameList, outputNameList_);
      DARABONBA_PTR_TO_JSON(Owner, owner_);
      DARABONBA_PTR_TO_JSON(Priority, priority_);
      DARABONBA_PTR_TO_JSON(ProjectInfo, projectInfo_);
      DARABONBA_PTR_TO_JSON(ScheduleType, scheduleType_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(TriggerConfig, triggerConfig_);
    };
    friend void from_json(const Darabonba::Json& j, GetPhysicalNodeResponseBodyNodeInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(Creator, creator_);
      DARABONBA_PTR_FROM_JSON(CronExpression, cronExpression_);
      DARABONBA_PTR_FROM_JSON(DataSourceId, dataSourceId_);
      DARABONBA_PTR_FROM_JSON(DataSourceSchema, dataSourceSchema_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(From, from_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(LastModifiedTime, lastModifiedTime_);
      DARABONBA_PTR_FROM_JSON(Modifier, modifier_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(OperatorType, operatorType_);
      DARABONBA_PTR_FROM_JSON(OutputNameList, outputNameList_);
      DARABONBA_PTR_FROM_JSON(Owner, owner_);
      DARABONBA_PTR_FROM_JSON(Priority, priority_);
      DARABONBA_PTR_FROM_JSON(ProjectInfo, projectInfo_);
      DARABONBA_PTR_FROM_JSON(ScheduleType, scheduleType_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(TriggerConfig, triggerConfig_);
    };
    GetPhysicalNodeResponseBodyNodeInfo() = default ;
    GetPhysicalNodeResponseBodyNodeInfo(const GetPhysicalNodeResponseBodyNodeInfo &) = default ;
    GetPhysicalNodeResponseBodyNodeInfo(GetPhysicalNodeResponseBodyNodeInfo &&) = default ;
    GetPhysicalNodeResponseBodyNodeInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetPhysicalNodeResponseBodyNodeInfo() = default ;
    GetPhysicalNodeResponseBodyNodeInfo& operator=(const GetPhysicalNodeResponseBodyNodeInfo &) = default ;
    GetPhysicalNodeResponseBodyNodeInfo& operator=(GetPhysicalNodeResponseBodyNodeInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->createTime_ != nullptr
        && this->creator_ != nullptr && this->cronExpression_ != nullptr && this->dataSourceId_ != nullptr && this->dataSourceSchema_ != nullptr && this->description_ != nullptr
        && this->from_ != nullptr && this->id_ != nullptr && this->lastModifiedTime_ != nullptr && this->modifier_ != nullptr && this->name_ != nullptr
        && this->operatorType_ != nullptr && this->outputNameList_ != nullptr && this->owner_ != nullptr && this->priority_ != nullptr && this->projectInfo_ != nullptr
        && this->scheduleType_ != nullptr && this->status_ != nullptr && this->triggerConfig_ != nullptr; };
    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline int64_t createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
    inline GetPhysicalNodeResponseBodyNodeInfo& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // creator Field Functions 
    bool hasCreator() const { return this->creator_ != nullptr;};
    void deleteCreator() { this->creator_ = nullptr;};
    inline const Models::GetPhysicalNodeResponseBodyNodeInfoCreator & creator() const { DARABONBA_PTR_GET_CONST(creator_, Models::GetPhysicalNodeResponseBodyNodeInfoCreator) };
    inline Models::GetPhysicalNodeResponseBodyNodeInfoCreator creator() { DARABONBA_PTR_GET(creator_, Models::GetPhysicalNodeResponseBodyNodeInfoCreator) };
    inline GetPhysicalNodeResponseBodyNodeInfo& setCreator(const Models::GetPhysicalNodeResponseBodyNodeInfoCreator & creator) { DARABONBA_PTR_SET_VALUE(creator_, creator) };
    inline GetPhysicalNodeResponseBodyNodeInfo& setCreator(Models::GetPhysicalNodeResponseBodyNodeInfoCreator && creator) { DARABONBA_PTR_SET_RVALUE(creator_, creator) };


    // cronExpression Field Functions 
    bool hasCronExpression() const { return this->cronExpression_ != nullptr;};
    void deleteCronExpression() { this->cronExpression_ = nullptr;};
    inline string cronExpression() const { DARABONBA_PTR_GET_DEFAULT(cronExpression_, "") };
    inline GetPhysicalNodeResponseBodyNodeInfo& setCronExpression(string cronExpression) { DARABONBA_PTR_SET_VALUE(cronExpression_, cronExpression) };


    // dataSourceId Field Functions 
    bool hasDataSourceId() const { return this->dataSourceId_ != nullptr;};
    void deleteDataSourceId() { this->dataSourceId_ = nullptr;};
    inline int64_t dataSourceId() const { DARABONBA_PTR_GET_DEFAULT(dataSourceId_, 0L) };
    inline GetPhysicalNodeResponseBodyNodeInfo& setDataSourceId(int64_t dataSourceId) { DARABONBA_PTR_SET_VALUE(dataSourceId_, dataSourceId) };


    // dataSourceSchema Field Functions 
    bool hasDataSourceSchema() const { return this->dataSourceSchema_ != nullptr;};
    void deleteDataSourceSchema() { this->dataSourceSchema_ = nullptr;};
    inline string dataSourceSchema() const { DARABONBA_PTR_GET_DEFAULT(dataSourceSchema_, "") };
    inline GetPhysicalNodeResponseBodyNodeInfo& setDataSourceSchema(string dataSourceSchema) { DARABONBA_PTR_SET_VALUE(dataSourceSchema_, dataSourceSchema) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline GetPhysicalNodeResponseBodyNodeInfo& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // from Field Functions 
    bool hasFrom() const { return this->from_ != nullptr;};
    void deleteFrom() { this->from_ = nullptr;};
    inline string from() const { DARABONBA_PTR_GET_DEFAULT(from_, "") };
    inline GetPhysicalNodeResponseBodyNodeInfo& setFrom(string from) { DARABONBA_PTR_SET_VALUE(from_, from) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline GetPhysicalNodeResponseBodyNodeInfo& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // lastModifiedTime Field Functions 
    bool hasLastModifiedTime() const { return this->lastModifiedTime_ != nullptr;};
    void deleteLastModifiedTime() { this->lastModifiedTime_ = nullptr;};
    inline int64_t lastModifiedTime() const { DARABONBA_PTR_GET_DEFAULT(lastModifiedTime_, 0L) };
    inline GetPhysicalNodeResponseBodyNodeInfo& setLastModifiedTime(int64_t lastModifiedTime) { DARABONBA_PTR_SET_VALUE(lastModifiedTime_, lastModifiedTime) };


    // modifier Field Functions 
    bool hasModifier() const { return this->modifier_ != nullptr;};
    void deleteModifier() { this->modifier_ = nullptr;};
    inline const Models::GetPhysicalNodeResponseBodyNodeInfoModifier & modifier() const { DARABONBA_PTR_GET_CONST(modifier_, Models::GetPhysicalNodeResponseBodyNodeInfoModifier) };
    inline Models::GetPhysicalNodeResponseBodyNodeInfoModifier modifier() { DARABONBA_PTR_GET(modifier_, Models::GetPhysicalNodeResponseBodyNodeInfoModifier) };
    inline GetPhysicalNodeResponseBodyNodeInfo& setModifier(const Models::GetPhysicalNodeResponseBodyNodeInfoModifier & modifier) { DARABONBA_PTR_SET_VALUE(modifier_, modifier) };
    inline GetPhysicalNodeResponseBodyNodeInfo& setModifier(Models::GetPhysicalNodeResponseBodyNodeInfoModifier && modifier) { DARABONBA_PTR_SET_RVALUE(modifier_, modifier) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GetPhysicalNodeResponseBodyNodeInfo& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // operatorType Field Functions 
    bool hasOperatorType() const { return this->operatorType_ != nullptr;};
    void deleteOperatorType() { this->operatorType_ = nullptr;};
    inline string operatorType() const { DARABONBA_PTR_GET_DEFAULT(operatorType_, "") };
    inline GetPhysicalNodeResponseBodyNodeInfo& setOperatorType(string operatorType) { DARABONBA_PTR_SET_VALUE(operatorType_, operatorType) };


    // outputNameList Field Functions 
    bool hasOutputNameList() const { return this->outputNameList_ != nullptr;};
    void deleteOutputNameList() { this->outputNameList_ = nullptr;};
    inline const vector<string> & outputNameList() const { DARABONBA_PTR_GET_CONST(outputNameList_, vector<string>) };
    inline vector<string> outputNameList() { DARABONBA_PTR_GET(outputNameList_, vector<string>) };
    inline GetPhysicalNodeResponseBodyNodeInfo& setOutputNameList(const vector<string> & outputNameList) { DARABONBA_PTR_SET_VALUE(outputNameList_, outputNameList) };
    inline GetPhysicalNodeResponseBodyNodeInfo& setOutputNameList(vector<string> && outputNameList) { DARABONBA_PTR_SET_RVALUE(outputNameList_, outputNameList) };


    // owner Field Functions 
    bool hasOwner() const { return this->owner_ != nullptr;};
    void deleteOwner() { this->owner_ = nullptr;};
    inline const Models::GetPhysicalNodeResponseBodyNodeInfoOwner & owner() const { DARABONBA_PTR_GET_CONST(owner_, Models::GetPhysicalNodeResponseBodyNodeInfoOwner) };
    inline Models::GetPhysicalNodeResponseBodyNodeInfoOwner owner() { DARABONBA_PTR_GET(owner_, Models::GetPhysicalNodeResponseBodyNodeInfoOwner) };
    inline GetPhysicalNodeResponseBodyNodeInfo& setOwner(const Models::GetPhysicalNodeResponseBodyNodeInfoOwner & owner) { DARABONBA_PTR_SET_VALUE(owner_, owner) };
    inline GetPhysicalNodeResponseBodyNodeInfo& setOwner(Models::GetPhysicalNodeResponseBodyNodeInfoOwner && owner) { DARABONBA_PTR_SET_RVALUE(owner_, owner) };


    // priority Field Functions 
    bool hasPriority() const { return this->priority_ != nullptr;};
    void deletePriority() { this->priority_ = nullptr;};
    inline string priority() const { DARABONBA_PTR_GET_DEFAULT(priority_, "") };
    inline GetPhysicalNodeResponseBodyNodeInfo& setPriority(string priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


    // projectInfo Field Functions 
    bool hasProjectInfo() const { return this->projectInfo_ != nullptr;};
    void deleteProjectInfo() { this->projectInfo_ = nullptr;};
    inline const Models::GetPhysicalNodeResponseBodyNodeInfoProjectInfo & projectInfo() const { DARABONBA_PTR_GET_CONST(projectInfo_, Models::GetPhysicalNodeResponseBodyNodeInfoProjectInfo) };
    inline Models::GetPhysicalNodeResponseBodyNodeInfoProjectInfo projectInfo() { DARABONBA_PTR_GET(projectInfo_, Models::GetPhysicalNodeResponseBodyNodeInfoProjectInfo) };
    inline GetPhysicalNodeResponseBodyNodeInfo& setProjectInfo(const Models::GetPhysicalNodeResponseBodyNodeInfoProjectInfo & projectInfo) { DARABONBA_PTR_SET_VALUE(projectInfo_, projectInfo) };
    inline GetPhysicalNodeResponseBodyNodeInfo& setProjectInfo(Models::GetPhysicalNodeResponseBodyNodeInfoProjectInfo && projectInfo) { DARABONBA_PTR_SET_RVALUE(projectInfo_, projectInfo) };


    // scheduleType Field Functions 
    bool hasScheduleType() const { return this->scheduleType_ != nullptr;};
    void deleteScheduleType() { this->scheduleType_ = nullptr;};
    inline string scheduleType() const { DARABONBA_PTR_GET_DEFAULT(scheduleType_, "") };
    inline GetPhysicalNodeResponseBodyNodeInfo& setScheduleType(string scheduleType) { DARABONBA_PTR_SET_VALUE(scheduleType_, scheduleType) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetPhysicalNodeResponseBodyNodeInfo& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // triggerConfig Field Functions 
    bool hasTriggerConfig() const { return this->triggerConfig_ != nullptr;};
    void deleteTriggerConfig() { this->triggerConfig_ = nullptr;};
    inline string triggerConfig() const { DARABONBA_PTR_GET_DEFAULT(triggerConfig_, "") };
    inline GetPhysicalNodeResponseBodyNodeInfo& setTriggerConfig(string triggerConfig) { DARABONBA_PTR_SET_VALUE(triggerConfig_, triggerConfig) };


  protected:
    std::shared_ptr<int64_t> createTime_ = nullptr;
    std::shared_ptr<Models::GetPhysicalNodeResponseBodyNodeInfoCreator> creator_ = nullptr;
    std::shared_ptr<string> cronExpression_ = nullptr;
    std::shared_ptr<int64_t> dataSourceId_ = nullptr;
    std::shared_ptr<string> dataSourceSchema_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<string> from_ = nullptr;
    std::shared_ptr<string> id_ = nullptr;
    std::shared_ptr<int64_t> lastModifiedTime_ = nullptr;
    std::shared_ptr<Models::GetPhysicalNodeResponseBodyNodeInfoModifier> modifier_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> operatorType_ = nullptr;
    std::shared_ptr<vector<string>> outputNameList_ = nullptr;
    std::shared_ptr<Models::GetPhysicalNodeResponseBodyNodeInfoOwner> owner_ = nullptr;
    std::shared_ptr<string> priority_ = nullptr;
    std::shared_ptr<Models::GetPhysicalNodeResponseBodyNodeInfoProjectInfo> projectInfo_ = nullptr;
    std::shared_ptr<string> scheduleType_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<string> triggerConfig_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
