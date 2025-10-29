// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPROJECTRESPONSEBODYPROJECTS_HPP_
#define ALIBABACLOUD_MODELS_LISTPROJECTRESPONSEBODYPROJECTS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListProjectResponseBodyProjectsTags.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IaCService20210806
{
namespace Models
{
  class ListProjectResponseBodyProjects : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListProjectResponseBodyProjects& obj) { 
      DARABONBA_PTR_TO_JSON(createTime, createTime_);
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(projectId, projectId_);
      DARABONBA_PTR_TO_JSON(tags, tags_);
      DARABONBA_PTR_TO_JSON(taskCnt, taskCnt_);
    };
    friend void from_json(const Darabonba::Json& j, ListProjectResponseBodyProjects& obj) { 
      DARABONBA_PTR_FROM_JSON(createTime, createTime_);
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(projectId, projectId_);
      DARABONBA_PTR_FROM_JSON(tags, tags_);
      DARABONBA_PTR_FROM_JSON(taskCnt, taskCnt_);
    };
    ListProjectResponseBodyProjects() = default ;
    ListProjectResponseBodyProjects(const ListProjectResponseBodyProjects &) = default ;
    ListProjectResponseBodyProjects(ListProjectResponseBodyProjects &&) = default ;
    ListProjectResponseBodyProjects(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListProjectResponseBodyProjects() = default ;
    ListProjectResponseBodyProjects& operator=(const ListProjectResponseBodyProjects &) = default ;
    ListProjectResponseBodyProjects& operator=(ListProjectResponseBodyProjects &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->createTime_ == nullptr
        && return this->description_ == nullptr && return this->name_ == nullptr && return this->projectId_ == nullptr && return this->tags_ == nullptr && return this->taskCnt_ == nullptr; };
    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline ListProjectResponseBodyProjects& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ListProjectResponseBodyProjects& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListProjectResponseBodyProjects& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline string projectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, "") };
    inline ListProjectResponseBodyProjects& setProjectId(string projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<Models::ListProjectResponseBodyProjectsTags> & tags() const { DARABONBA_PTR_GET_CONST(tags_, vector<Models::ListProjectResponseBodyProjectsTags>) };
    inline vector<Models::ListProjectResponseBodyProjectsTags> tags() { DARABONBA_PTR_GET(tags_, vector<Models::ListProjectResponseBodyProjectsTags>) };
    inline ListProjectResponseBodyProjects& setTags(const vector<Models::ListProjectResponseBodyProjectsTags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline ListProjectResponseBodyProjects& setTags(vector<Models::ListProjectResponseBodyProjectsTags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // taskCnt Field Functions 
    bool hasTaskCnt() const { return this->taskCnt_ != nullptr;};
    void deleteTaskCnt() { this->taskCnt_ = nullptr;};
    inline int64_t taskCnt() const { DARABONBA_PTR_GET_DEFAULT(taskCnt_, 0L) };
    inline ListProjectResponseBodyProjects& setTaskCnt(int64_t taskCnt) { DARABONBA_PTR_SET_VALUE(taskCnt_, taskCnt) };


  protected:
    std::shared_ptr<string> createTime_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> projectId_ = nullptr;
    std::shared_ptr<vector<Models::ListProjectResponseBodyProjectsTags>> tags_ = nullptr;
    std::shared_ptr<int64_t> taskCnt_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IaCService20210806
#endif
