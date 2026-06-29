// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATETASKDETAIL_HPP_
#define ALIBABACLOUD_MODELS_CREATETASKDETAIL_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/SimpleUser.hpp>
#include <alibabacloud/models/TaskAssginConfig.hpp>
#include <alibabacloud/models/DatasetProxyConfig.hpp>
#include <alibabacloud/models/TaskTemplateConfig.hpp>
#include <map>
#include <alibabacloud/models/CreateTaskDetailVoteInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OpenITag20220616
{
namespace Models
{
  class CreateTaskDetail : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateTaskDetail& obj) { 
      DARABONBA_PTR_TO_JSON(Admins, admins_);
      DARABONBA_PTR_TO_JSON(AllowAppendData, allowAppendData_);
      DARABONBA_PTR_TO_JSON(AssignConfig, assignConfig_);
      DARABONBA_PTR_TO_JSON(DatasetProxyRelations, datasetProxyRelations_);
      DARABONBA_ANY_TO_JSON(Exif, exif_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
      DARABONBA_PTR_TO_JSON(TaskName, taskName_);
      DARABONBA_PTR_TO_JSON(TaskTemplateConfig, taskTemplateConfig_);
      DARABONBA_PTR_TO_JSON(TaskWorkflow, taskWorkflow_);
      DARABONBA_PTR_TO_JSON(TemplateId, templateId_);
      DARABONBA_PTR_TO_JSON(UUID, UUID_);
      DARABONBA_PTR_TO_JSON(VoteConfigs, voteConfigs_);
    };
    friend void from_json(const Darabonba::Json& j, CreateTaskDetail& obj) { 
      DARABONBA_PTR_FROM_JSON(Admins, admins_);
      DARABONBA_PTR_FROM_JSON(AllowAppendData, allowAppendData_);
      DARABONBA_PTR_FROM_JSON(AssignConfig, assignConfig_);
      DARABONBA_PTR_FROM_JSON(DatasetProxyRelations, datasetProxyRelations_);
      DARABONBA_ANY_FROM_JSON(Exif, exif_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
      DARABONBA_PTR_FROM_JSON(TaskName, taskName_);
      DARABONBA_PTR_FROM_JSON(TaskTemplateConfig, taskTemplateConfig_);
      DARABONBA_PTR_FROM_JSON(TaskWorkflow, taskWorkflow_);
      DARABONBA_PTR_FROM_JSON(TemplateId, templateId_);
      DARABONBA_PTR_FROM_JSON(UUID, UUID_);
      DARABONBA_PTR_FROM_JSON(VoteConfigs, voteConfigs_);
    };
    CreateTaskDetail() = default ;
    CreateTaskDetail(const CreateTaskDetail &) = default ;
    CreateTaskDetail(CreateTaskDetail &&) = default ;
    CreateTaskDetail(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateTaskDetail() = default ;
    CreateTaskDetail& operator=(const CreateTaskDetail &) = default ;
    CreateTaskDetail& operator=(CreateTaskDetail &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class TaskWorkflow : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const TaskWorkflow& obj) { 
        DARABONBA_PTR_TO_JSON(NodeName, nodeName_);
      };
      friend void from_json(const Darabonba::Json& j, TaskWorkflow& obj) { 
        DARABONBA_PTR_FROM_JSON(NodeName, nodeName_);
      };
      TaskWorkflow() = default ;
      TaskWorkflow(const TaskWorkflow &) = default ;
      TaskWorkflow(TaskWorkflow &&) = default ;
      TaskWorkflow(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~TaskWorkflow() = default ;
      TaskWorkflow& operator=(const TaskWorkflow &) = default ;
      TaskWorkflow& operator=(TaskWorkflow &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->nodeName_ == nullptr; };
      // nodeName Field Functions 
      bool hasNodeName() const { return this->nodeName_ != nullptr;};
      void deleteNodeName() { this->nodeName_ = nullptr;};
      inline string getNodeName() const { DARABONBA_PTR_GET_DEFAULT(nodeName_, "") };
      inline TaskWorkflow& setNodeName(string nodeName) { DARABONBA_PTR_SET_VALUE(nodeName_, nodeName) };


    protected:
      // Node name. Valid values:
      // - MARK: Annotate.
      // - CHECK: Check.
      // - SAMPLING: Validate.
      shared_ptr<string> nodeName_ {};
    };

    class Admins : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Admins& obj) { 
        DARABONBA_PTR_TO_JSON(Users, users_);
      };
      friend void from_json(const Darabonba::Json& j, Admins& obj) { 
        DARABONBA_PTR_FROM_JSON(Users, users_);
      };
      Admins() = default ;
      Admins(const Admins &) = default ;
      Admins(Admins &&) = default ;
      Admins(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Admins() = default ;
      Admins& operator=(const Admins &) = default ;
      Admins& operator=(Admins &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->users_ == nullptr; };
      // users Field Functions 
      bool hasUsers() const { return this->users_ != nullptr;};
      void deleteUsers() { this->users_ = nullptr;};
      inline const vector<SimpleUser> & getUsers() const { DARABONBA_PTR_GET_CONST(users_, vector<SimpleUser>) };
      inline vector<SimpleUser> getUsers() { DARABONBA_PTR_GET(users_, vector<SimpleUser>) };
      inline Admins& setUsers(const vector<SimpleUser> & users) { DARABONBA_PTR_SET_VALUE(users_, users) };
      inline Admins& setUsers(vector<SimpleUser> && users) { DARABONBA_PTR_SET_RVALUE(users_, users) };


    protected:
      // List of administrators.
      shared_ptr<vector<SimpleUser>> users_ {};
    };

    virtual bool empty() const override { return this->admins_ == nullptr
        && this->allowAppendData_ == nullptr && this->assignConfig_ == nullptr && this->datasetProxyRelations_ == nullptr && this->exif_ == nullptr && this->tags_ == nullptr
        && this->taskName_ == nullptr && this->taskTemplateConfig_ == nullptr && this->taskWorkflow_ == nullptr && this->templateId_ == nullptr && this->UUID_ == nullptr
        && this->voteConfigs_ == nullptr; };
    // admins Field Functions 
    bool hasAdmins() const { return this->admins_ != nullptr;};
    void deleteAdmins() { this->admins_ = nullptr;};
    inline const CreateTaskDetail::Admins & getAdmins() const { DARABONBA_PTR_GET_CONST(admins_, CreateTaskDetail::Admins) };
    inline CreateTaskDetail::Admins getAdmins() { DARABONBA_PTR_GET(admins_, CreateTaskDetail::Admins) };
    inline CreateTaskDetail& setAdmins(const CreateTaskDetail::Admins & admins) { DARABONBA_PTR_SET_VALUE(admins_, admins) };
    inline CreateTaskDetail& setAdmins(CreateTaskDetail::Admins && admins) { DARABONBA_PTR_SET_RVALUE(admins_, admins) };


    // allowAppendData Field Functions 
    bool hasAllowAppendData() const { return this->allowAppendData_ != nullptr;};
    void deleteAllowAppendData() { this->allowAppendData_ = nullptr;};
    inline bool getAllowAppendData() const { DARABONBA_PTR_GET_DEFAULT(allowAppendData_, false) };
    inline CreateTaskDetail& setAllowAppendData(bool allowAppendData) { DARABONBA_PTR_SET_VALUE(allowAppendData_, allowAppendData) };


    // assignConfig Field Functions 
    bool hasAssignConfig() const { return this->assignConfig_ != nullptr;};
    void deleteAssignConfig() { this->assignConfig_ = nullptr;};
    inline const TaskAssginConfig & getAssignConfig() const { DARABONBA_PTR_GET_CONST(assignConfig_, TaskAssginConfig) };
    inline TaskAssginConfig getAssignConfig() { DARABONBA_PTR_GET(assignConfig_, TaskAssginConfig) };
    inline CreateTaskDetail& setAssignConfig(const TaskAssginConfig & assignConfig) { DARABONBA_PTR_SET_VALUE(assignConfig_, assignConfig) };
    inline CreateTaskDetail& setAssignConfig(TaskAssginConfig && assignConfig) { DARABONBA_PTR_SET_RVALUE(assignConfig_, assignConfig) };


    // datasetProxyRelations Field Functions 
    bool hasDatasetProxyRelations() const { return this->datasetProxyRelations_ != nullptr;};
    void deleteDatasetProxyRelations() { this->datasetProxyRelations_ = nullptr;};
    inline const vector<DatasetProxyConfig> & getDatasetProxyRelations() const { DARABONBA_PTR_GET_CONST(datasetProxyRelations_, vector<DatasetProxyConfig>) };
    inline vector<DatasetProxyConfig> getDatasetProxyRelations() { DARABONBA_PTR_GET(datasetProxyRelations_, vector<DatasetProxyConfig>) };
    inline CreateTaskDetail& setDatasetProxyRelations(const vector<DatasetProxyConfig> & datasetProxyRelations) { DARABONBA_PTR_SET_VALUE(datasetProxyRelations_, datasetProxyRelations) };
    inline CreateTaskDetail& setDatasetProxyRelations(vector<DatasetProxyConfig> && datasetProxyRelations) { DARABONBA_PTR_SET_RVALUE(datasetProxyRelations_, datasetProxyRelations) };


    // exif Field Functions 
    bool hasExif() const { return this->exif_ != nullptr;};
    void deleteExif() { this->exif_ = nullptr;};
    inline     const Darabonba::Json & getExif() const { DARABONBA_GET(exif_) };
    Darabonba::Json & getExif() { DARABONBA_GET(exif_) };
    inline CreateTaskDetail& setExif(const Darabonba::Json & exif) { DARABONBA_SET_VALUE(exif_, exif) };
    inline CreateTaskDetail& setExif(Darabonba::Json && exif) { DARABONBA_SET_RVALUE(exif_, exif) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<string> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<string>) };
    inline vector<string> getTags() { DARABONBA_PTR_GET(tags_, vector<string>) };
    inline CreateTaskDetail& setTags(const vector<string> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline CreateTaskDetail& setTags(vector<string> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // taskName Field Functions 
    bool hasTaskName() const { return this->taskName_ != nullptr;};
    void deleteTaskName() { this->taskName_ = nullptr;};
    inline string getTaskName() const { DARABONBA_PTR_GET_DEFAULT(taskName_, "") };
    inline CreateTaskDetail& setTaskName(string taskName) { DARABONBA_PTR_SET_VALUE(taskName_, taskName) };


    // taskTemplateConfig Field Functions 
    bool hasTaskTemplateConfig() const { return this->taskTemplateConfig_ != nullptr;};
    void deleteTaskTemplateConfig() { this->taskTemplateConfig_ = nullptr;};
    inline const TaskTemplateConfig & getTaskTemplateConfig() const { DARABONBA_PTR_GET_CONST(taskTemplateConfig_, TaskTemplateConfig) };
    inline TaskTemplateConfig getTaskTemplateConfig() { DARABONBA_PTR_GET(taskTemplateConfig_, TaskTemplateConfig) };
    inline CreateTaskDetail& setTaskTemplateConfig(const TaskTemplateConfig & taskTemplateConfig) { DARABONBA_PTR_SET_VALUE(taskTemplateConfig_, taskTemplateConfig) };
    inline CreateTaskDetail& setTaskTemplateConfig(TaskTemplateConfig && taskTemplateConfig) { DARABONBA_PTR_SET_RVALUE(taskTemplateConfig_, taskTemplateConfig) };


    // taskWorkflow Field Functions 
    bool hasTaskWorkflow() const { return this->taskWorkflow_ != nullptr;};
    void deleteTaskWorkflow() { this->taskWorkflow_ = nullptr;};
    inline const vector<CreateTaskDetail::TaskWorkflow> & getTaskWorkflow() const { DARABONBA_PTR_GET_CONST(taskWorkflow_, vector<CreateTaskDetail::TaskWorkflow>) };
    inline vector<CreateTaskDetail::TaskWorkflow> getTaskWorkflow() { DARABONBA_PTR_GET(taskWorkflow_, vector<CreateTaskDetail::TaskWorkflow>) };
    inline CreateTaskDetail& setTaskWorkflow(const vector<CreateTaskDetail::TaskWorkflow> & taskWorkflow) { DARABONBA_PTR_SET_VALUE(taskWorkflow_, taskWorkflow) };
    inline CreateTaskDetail& setTaskWorkflow(vector<CreateTaskDetail::TaskWorkflow> && taskWorkflow) { DARABONBA_PTR_SET_RVALUE(taskWorkflow_, taskWorkflow) };


    // templateId Field Functions 
    bool hasTemplateId() const { return this->templateId_ != nullptr;};
    void deleteTemplateId() { this->templateId_ = nullptr;};
    inline string getTemplateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, "") };
    inline CreateTaskDetail& setTemplateId(string templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


    // UUID Field Functions 
    bool hasUUID() const { return this->UUID_ != nullptr;};
    void deleteUUID() { this->UUID_ = nullptr;};
    inline string getUUID() const { DARABONBA_PTR_GET_DEFAULT(UUID_, "") };
    inline CreateTaskDetail& setUUID(string UUID) { DARABONBA_PTR_SET_VALUE(UUID_, UUID) };


    // voteConfigs Field Functions 
    bool hasVoteConfigs() const { return this->voteConfigs_ != nullptr;};
    void deleteVoteConfigs() { this->voteConfigs_ = nullptr;};
    inline const map<string, CreateTaskDetailVoteInfo> & getVoteConfigs() const { DARABONBA_PTR_GET_CONST(voteConfigs_, map<string, CreateTaskDetailVoteInfo>) };
    inline map<string, CreateTaskDetailVoteInfo> getVoteConfigs() { DARABONBA_PTR_GET(voteConfigs_, map<string, CreateTaskDetailVoteInfo>) };
    inline CreateTaskDetail& setVoteConfigs(const map<string, CreateTaskDetailVoteInfo> & voteConfigs) { DARABONBA_PTR_SET_VALUE(voteConfigs_, voteConfigs) };
    inline CreateTaskDetail& setVoteConfigs(map<string, CreateTaskDetailVoteInfo> && voteConfigs) { DARABONBA_PTR_SET_RVALUE(voteConfigs_, voteConfigs) };


  protected:
    // Administrators; defaults to the Creator.
    shared_ptr<CreateTaskDetail::Admins> admins_ {};
    // Indicates whether appending new data is supported. Valid values:
    // - true: Supported
    // - false: Not supported
    shared_ptr<bool> allowAppendData_ {};
    // Job assignment mechanism.
    // 
    // This parameter is required.
    shared_ptr<TaskAssginConfig> assignConfig_ {};
    // List of dataset configurations.
    // 
    // This parameter is required.
    shared_ptr<vector<DatasetProxyConfig>> datasetProxyRelations_ {};
    // Additional configuration. JSON format.
    Darabonba::Json exif_ {};
    // List of job labels.
    shared_ptr<vector<string>> tags_ {};
    // Job name.
    // 
    // This parameter is required.
    shared_ptr<string> taskName_ {};
    // Template Configuration.
    shared_ptr<TaskTemplateConfig> taskTemplateConfig_ {};
    // List of pipelines.
    // 
    // This parameter is required.
    shared_ptr<vector<CreateTaskDetail::TaskWorkflow>> taskWorkflow_ {};
    // Template ID. For more information, see [ListTemplates](https://help.aliyun.com/document_detail/454654.html).
    // 
    // This parameter is required.
    shared_ptr<string> templateId_ {};
    // Unique identifier (UUID), controlled by the business side.
    // 
    // This parameter is required.
    shared_ptr<string> UUID_ {};
    // Vote configuration
    shared_ptr<map<string, CreateTaskDetailVoteInfo>> voteConfigs_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OpenITag20220616
#endif
