// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTGROUPRESPONSEBODYGROUPS_HPP_
#define ALIBABACLOUD_MODELS_LISTGROUPRESPONSEBODYGROUPS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListGroupResponseBodyGroupsTags.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IaCService20210806
{
namespace Models
{
  class ListGroupResponseBodyGroups : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListGroupResponseBodyGroups& obj) { 
      DARABONBA_PTR_TO_JSON(createTime, createTime_);
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(groupId, groupId_);
      DARABONBA_PTR_TO_JSON(isDefault, isDefault_);
      DARABONBA_PTR_TO_JSON(moduleCnt, moduleCnt_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(projectId, projectId_);
      DARABONBA_PTR_TO_JSON(sceneTestingTaskCnt, sceneTestingTaskCnt_);
      DARABONBA_PTR_TO_JSON(tags, tags_);
      DARABONBA_PTR_TO_JSON(taskCnt, taskCnt_);
    };
    friend void from_json(const Darabonba::Json& j, ListGroupResponseBodyGroups& obj) { 
      DARABONBA_PTR_FROM_JSON(createTime, createTime_);
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(groupId, groupId_);
      DARABONBA_PTR_FROM_JSON(isDefault, isDefault_);
      DARABONBA_PTR_FROM_JSON(moduleCnt, moduleCnt_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(projectId, projectId_);
      DARABONBA_PTR_FROM_JSON(sceneTestingTaskCnt, sceneTestingTaskCnt_);
      DARABONBA_PTR_FROM_JSON(tags, tags_);
      DARABONBA_PTR_FROM_JSON(taskCnt, taskCnt_);
    };
    ListGroupResponseBodyGroups() = default ;
    ListGroupResponseBodyGroups(const ListGroupResponseBodyGroups &) = default ;
    ListGroupResponseBodyGroups(ListGroupResponseBodyGroups &&) = default ;
    ListGroupResponseBodyGroups(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListGroupResponseBodyGroups() = default ;
    ListGroupResponseBodyGroups& operator=(const ListGroupResponseBodyGroups &) = default ;
    ListGroupResponseBodyGroups& operator=(ListGroupResponseBodyGroups &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->createTime_ == nullptr
        && return this->description_ == nullptr && return this->groupId_ == nullptr && return this->isDefault_ == nullptr && return this->moduleCnt_ == nullptr && return this->name_ == nullptr
        && return this->projectId_ == nullptr && return this->sceneTestingTaskCnt_ == nullptr && return this->tags_ == nullptr && return this->taskCnt_ == nullptr; };
    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline ListGroupResponseBodyGroups& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ListGroupResponseBodyGroups& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline string groupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
    inline ListGroupResponseBodyGroups& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // isDefault Field Functions 
    bool hasIsDefault() const { return this->isDefault_ != nullptr;};
    void deleteIsDefault() { this->isDefault_ = nullptr;};
    inline bool isDefault() const { DARABONBA_PTR_GET_DEFAULT(isDefault_, false) };
    inline ListGroupResponseBodyGroups& setIsDefault(bool isDefault) { DARABONBA_PTR_SET_VALUE(isDefault_, isDefault) };


    // moduleCnt Field Functions 
    bool hasModuleCnt() const { return this->moduleCnt_ != nullptr;};
    void deleteModuleCnt() { this->moduleCnt_ = nullptr;};
    inline int64_t moduleCnt() const { DARABONBA_PTR_GET_DEFAULT(moduleCnt_, 0L) };
    inline ListGroupResponseBodyGroups& setModuleCnt(int64_t moduleCnt) { DARABONBA_PTR_SET_VALUE(moduleCnt_, moduleCnt) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListGroupResponseBodyGroups& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline string projectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, "") };
    inline ListGroupResponseBodyGroups& setProjectId(string projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // sceneTestingTaskCnt Field Functions 
    bool hasSceneTestingTaskCnt() const { return this->sceneTestingTaskCnt_ != nullptr;};
    void deleteSceneTestingTaskCnt() { this->sceneTestingTaskCnt_ = nullptr;};
    inline int64_t sceneTestingTaskCnt() const { DARABONBA_PTR_GET_DEFAULT(sceneTestingTaskCnt_, 0L) };
    inline ListGroupResponseBodyGroups& setSceneTestingTaskCnt(int64_t sceneTestingTaskCnt) { DARABONBA_PTR_SET_VALUE(sceneTestingTaskCnt_, sceneTestingTaskCnt) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<Models::ListGroupResponseBodyGroupsTags> & tags() const { DARABONBA_PTR_GET_CONST(tags_, vector<Models::ListGroupResponseBodyGroupsTags>) };
    inline vector<Models::ListGroupResponseBodyGroupsTags> tags() { DARABONBA_PTR_GET(tags_, vector<Models::ListGroupResponseBodyGroupsTags>) };
    inline ListGroupResponseBodyGroups& setTags(const vector<Models::ListGroupResponseBodyGroupsTags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline ListGroupResponseBodyGroups& setTags(vector<Models::ListGroupResponseBodyGroupsTags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // taskCnt Field Functions 
    bool hasTaskCnt() const { return this->taskCnt_ != nullptr;};
    void deleteTaskCnt() { this->taskCnt_ = nullptr;};
    inline int64_t taskCnt() const { DARABONBA_PTR_GET_DEFAULT(taskCnt_, 0L) };
    inline ListGroupResponseBodyGroups& setTaskCnt(int64_t taskCnt) { DARABONBA_PTR_SET_VALUE(taskCnt_, taskCnt) };


  protected:
    std::shared_ptr<string> createTime_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<string> groupId_ = nullptr;
    std::shared_ptr<bool> isDefault_ = nullptr;
    std::shared_ptr<int64_t> moduleCnt_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> projectId_ = nullptr;
    std::shared_ptr<int64_t> sceneTestingTaskCnt_ = nullptr;
    std::shared_ptr<vector<Models::ListGroupResponseBodyGroupsTags>> tags_ = nullptr;
    std::shared_ptr<int64_t> taskCnt_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IaCService20210806
#endif
