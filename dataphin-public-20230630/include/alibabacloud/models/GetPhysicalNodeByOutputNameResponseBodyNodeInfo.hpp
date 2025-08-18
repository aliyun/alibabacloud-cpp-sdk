// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPHYSICALNODEBYOUTPUTNAMERESPONSEBODYNODEINFO_HPP_
#define ALIBABACLOUD_MODELS_GETPHYSICALNODEBYOUTPUTNAMERESPONSEBODYNODEINFO_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetPhysicalNodeByOutputNameResponseBodyNodeInfoCreator.hpp>
#include <alibabacloud/models/GetPhysicalNodeByOutputNameResponseBodyNodeInfoModifier.hpp>
#include <alibabacloud/models/GetPhysicalNodeByOutputNameResponseBodyNodeInfoOwner.hpp>
#include <alibabacloud/models/GetPhysicalNodeByOutputNameResponseBodyNodeInfoProjectInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class GetPhysicalNodeByOutputNameResponseBodyNodeInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetPhysicalNodeByOutputNameResponseBodyNodeInfo& obj) { 
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(Creator, creator_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(From, from_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(LastModifiedTime, lastModifiedTime_);
      DARABONBA_PTR_TO_JSON(Modifier, modifier_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(OperatorType, operatorType_);
      DARABONBA_PTR_TO_JSON(Owner, owner_);
      DARABONBA_PTR_TO_JSON(Priority, priority_);
      DARABONBA_PTR_TO_JSON(ProjectInfo, projectInfo_);
      DARABONBA_PTR_TO_JSON(ScheduleType, scheduleType_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(TriggerConfig, triggerConfig_);
    };
    friend void from_json(const Darabonba::Json& j, GetPhysicalNodeByOutputNameResponseBodyNodeInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(Creator, creator_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(From, from_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(LastModifiedTime, lastModifiedTime_);
      DARABONBA_PTR_FROM_JSON(Modifier, modifier_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(OperatorType, operatorType_);
      DARABONBA_PTR_FROM_JSON(Owner, owner_);
      DARABONBA_PTR_FROM_JSON(Priority, priority_);
      DARABONBA_PTR_FROM_JSON(ProjectInfo, projectInfo_);
      DARABONBA_PTR_FROM_JSON(ScheduleType, scheduleType_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(TriggerConfig, triggerConfig_);
    };
    GetPhysicalNodeByOutputNameResponseBodyNodeInfo() = default ;
    GetPhysicalNodeByOutputNameResponseBodyNodeInfo(const GetPhysicalNodeByOutputNameResponseBodyNodeInfo &) = default ;
    GetPhysicalNodeByOutputNameResponseBodyNodeInfo(GetPhysicalNodeByOutputNameResponseBodyNodeInfo &&) = default ;
    GetPhysicalNodeByOutputNameResponseBodyNodeInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetPhysicalNodeByOutputNameResponseBodyNodeInfo() = default ;
    GetPhysicalNodeByOutputNameResponseBodyNodeInfo& operator=(const GetPhysicalNodeByOutputNameResponseBodyNodeInfo &) = default ;
    GetPhysicalNodeByOutputNameResponseBodyNodeInfo& operator=(GetPhysicalNodeByOutputNameResponseBodyNodeInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->createTime_ != nullptr
        && this->creator_ != nullptr && this->description_ != nullptr && this->from_ != nullptr && this->id_ != nullptr && this->lastModifiedTime_ != nullptr
        && this->modifier_ != nullptr && this->name_ != nullptr && this->operatorType_ != nullptr && this->owner_ != nullptr && this->priority_ != nullptr
        && this->projectInfo_ != nullptr && this->scheduleType_ != nullptr && this->status_ != nullptr && this->triggerConfig_ != nullptr; };
    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline int64_t createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
    inline GetPhysicalNodeByOutputNameResponseBodyNodeInfo& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // creator Field Functions 
    bool hasCreator() const { return this->creator_ != nullptr;};
    void deleteCreator() { this->creator_ = nullptr;};
    inline const Models::GetPhysicalNodeByOutputNameResponseBodyNodeInfoCreator & creator() const { DARABONBA_PTR_GET_CONST(creator_, Models::GetPhysicalNodeByOutputNameResponseBodyNodeInfoCreator) };
    inline Models::GetPhysicalNodeByOutputNameResponseBodyNodeInfoCreator creator() { DARABONBA_PTR_GET(creator_, Models::GetPhysicalNodeByOutputNameResponseBodyNodeInfoCreator) };
    inline GetPhysicalNodeByOutputNameResponseBodyNodeInfo& setCreator(const Models::GetPhysicalNodeByOutputNameResponseBodyNodeInfoCreator & creator) { DARABONBA_PTR_SET_VALUE(creator_, creator) };
    inline GetPhysicalNodeByOutputNameResponseBodyNodeInfo& setCreator(Models::GetPhysicalNodeByOutputNameResponseBodyNodeInfoCreator && creator) { DARABONBA_PTR_SET_RVALUE(creator_, creator) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline GetPhysicalNodeByOutputNameResponseBodyNodeInfo& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // from Field Functions 
    bool hasFrom() const { return this->from_ != nullptr;};
    void deleteFrom() { this->from_ = nullptr;};
    inline string from() const { DARABONBA_PTR_GET_DEFAULT(from_, "") };
    inline GetPhysicalNodeByOutputNameResponseBodyNodeInfo& setFrom(string from) { DARABONBA_PTR_SET_VALUE(from_, from) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline GetPhysicalNodeByOutputNameResponseBodyNodeInfo& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // lastModifiedTime Field Functions 
    bool hasLastModifiedTime() const { return this->lastModifiedTime_ != nullptr;};
    void deleteLastModifiedTime() { this->lastModifiedTime_ = nullptr;};
    inline int64_t lastModifiedTime() const { DARABONBA_PTR_GET_DEFAULT(lastModifiedTime_, 0L) };
    inline GetPhysicalNodeByOutputNameResponseBodyNodeInfo& setLastModifiedTime(int64_t lastModifiedTime) { DARABONBA_PTR_SET_VALUE(lastModifiedTime_, lastModifiedTime) };


    // modifier Field Functions 
    bool hasModifier() const { return this->modifier_ != nullptr;};
    void deleteModifier() { this->modifier_ = nullptr;};
    inline const Models::GetPhysicalNodeByOutputNameResponseBodyNodeInfoModifier & modifier() const { DARABONBA_PTR_GET_CONST(modifier_, Models::GetPhysicalNodeByOutputNameResponseBodyNodeInfoModifier) };
    inline Models::GetPhysicalNodeByOutputNameResponseBodyNodeInfoModifier modifier() { DARABONBA_PTR_GET(modifier_, Models::GetPhysicalNodeByOutputNameResponseBodyNodeInfoModifier) };
    inline GetPhysicalNodeByOutputNameResponseBodyNodeInfo& setModifier(const Models::GetPhysicalNodeByOutputNameResponseBodyNodeInfoModifier & modifier) { DARABONBA_PTR_SET_VALUE(modifier_, modifier) };
    inline GetPhysicalNodeByOutputNameResponseBodyNodeInfo& setModifier(Models::GetPhysicalNodeByOutputNameResponseBodyNodeInfoModifier && modifier) { DARABONBA_PTR_SET_RVALUE(modifier_, modifier) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GetPhysicalNodeByOutputNameResponseBodyNodeInfo& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // operatorType Field Functions 
    bool hasOperatorType() const { return this->operatorType_ != nullptr;};
    void deleteOperatorType() { this->operatorType_ = nullptr;};
    inline string operatorType() const { DARABONBA_PTR_GET_DEFAULT(operatorType_, "") };
    inline GetPhysicalNodeByOutputNameResponseBodyNodeInfo& setOperatorType(string operatorType) { DARABONBA_PTR_SET_VALUE(operatorType_, operatorType) };


    // owner Field Functions 
    bool hasOwner() const { return this->owner_ != nullptr;};
    void deleteOwner() { this->owner_ = nullptr;};
    inline const Models::GetPhysicalNodeByOutputNameResponseBodyNodeInfoOwner & owner() const { DARABONBA_PTR_GET_CONST(owner_, Models::GetPhysicalNodeByOutputNameResponseBodyNodeInfoOwner) };
    inline Models::GetPhysicalNodeByOutputNameResponseBodyNodeInfoOwner owner() { DARABONBA_PTR_GET(owner_, Models::GetPhysicalNodeByOutputNameResponseBodyNodeInfoOwner) };
    inline GetPhysicalNodeByOutputNameResponseBodyNodeInfo& setOwner(const Models::GetPhysicalNodeByOutputNameResponseBodyNodeInfoOwner & owner) { DARABONBA_PTR_SET_VALUE(owner_, owner) };
    inline GetPhysicalNodeByOutputNameResponseBodyNodeInfo& setOwner(Models::GetPhysicalNodeByOutputNameResponseBodyNodeInfoOwner && owner) { DARABONBA_PTR_SET_RVALUE(owner_, owner) };


    // priority Field Functions 
    bool hasPriority() const { return this->priority_ != nullptr;};
    void deletePriority() { this->priority_ = nullptr;};
    inline string priority() const { DARABONBA_PTR_GET_DEFAULT(priority_, "") };
    inline GetPhysicalNodeByOutputNameResponseBodyNodeInfo& setPriority(string priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


    // projectInfo Field Functions 
    bool hasProjectInfo() const { return this->projectInfo_ != nullptr;};
    void deleteProjectInfo() { this->projectInfo_ = nullptr;};
    inline const Models::GetPhysicalNodeByOutputNameResponseBodyNodeInfoProjectInfo & projectInfo() const { DARABONBA_PTR_GET_CONST(projectInfo_, Models::GetPhysicalNodeByOutputNameResponseBodyNodeInfoProjectInfo) };
    inline Models::GetPhysicalNodeByOutputNameResponseBodyNodeInfoProjectInfo projectInfo() { DARABONBA_PTR_GET(projectInfo_, Models::GetPhysicalNodeByOutputNameResponseBodyNodeInfoProjectInfo) };
    inline GetPhysicalNodeByOutputNameResponseBodyNodeInfo& setProjectInfo(const Models::GetPhysicalNodeByOutputNameResponseBodyNodeInfoProjectInfo & projectInfo) { DARABONBA_PTR_SET_VALUE(projectInfo_, projectInfo) };
    inline GetPhysicalNodeByOutputNameResponseBodyNodeInfo& setProjectInfo(Models::GetPhysicalNodeByOutputNameResponseBodyNodeInfoProjectInfo && projectInfo) { DARABONBA_PTR_SET_RVALUE(projectInfo_, projectInfo) };


    // scheduleType Field Functions 
    bool hasScheduleType() const { return this->scheduleType_ != nullptr;};
    void deleteScheduleType() { this->scheduleType_ = nullptr;};
    inline string scheduleType() const { DARABONBA_PTR_GET_DEFAULT(scheduleType_, "") };
    inline GetPhysicalNodeByOutputNameResponseBodyNodeInfo& setScheduleType(string scheduleType) { DARABONBA_PTR_SET_VALUE(scheduleType_, scheduleType) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetPhysicalNodeByOutputNameResponseBodyNodeInfo& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // triggerConfig Field Functions 
    bool hasTriggerConfig() const { return this->triggerConfig_ != nullptr;};
    void deleteTriggerConfig() { this->triggerConfig_ = nullptr;};
    inline string triggerConfig() const { DARABONBA_PTR_GET_DEFAULT(triggerConfig_, "") };
    inline GetPhysicalNodeByOutputNameResponseBodyNodeInfo& setTriggerConfig(string triggerConfig) { DARABONBA_PTR_SET_VALUE(triggerConfig_, triggerConfig) };


  protected:
    std::shared_ptr<int64_t> createTime_ = nullptr;
    std::shared_ptr<Models::GetPhysicalNodeByOutputNameResponseBodyNodeInfoCreator> creator_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<string> from_ = nullptr;
    std::shared_ptr<string> id_ = nullptr;
    std::shared_ptr<int64_t> lastModifiedTime_ = nullptr;
    std::shared_ptr<Models::GetPhysicalNodeByOutputNameResponseBodyNodeInfoModifier> modifier_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> operatorType_ = nullptr;
    std::shared_ptr<Models::GetPhysicalNodeByOutputNameResponseBodyNodeInfoOwner> owner_ = nullptr;
    std::shared_ptr<string> priority_ = nullptr;
    std::shared_ptr<Models::GetPhysicalNodeByOutputNameResponseBodyNodeInfoProjectInfo> projectInfo_ = nullptr;
    std::shared_ptr<string> scheduleType_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<string> triggerConfig_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
