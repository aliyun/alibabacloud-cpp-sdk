// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPROJECTSRESPONSEBODYLISTPROJECT_HPP_
#define ALIBABACLOUD_MODELS_LISTPROJECTSRESPONSEBODYLISTPROJECT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Datahub20191120
{
namespace Models
{
  class ListProjectsResponseBodyListProject : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListProjectsResponseBodyListProject& obj) { 
      DARABONBA_PTR_TO_JSON(Comment, comment_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(Creator, creator_);
      DARABONBA_PTR_TO_JSON(CreatorName, creatorName_);
      DARABONBA_PTR_TO_JSON(ProjectName, projectName_);
      DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
    };
    friend void from_json(const Darabonba::Json& j, ListProjectsResponseBodyListProject& obj) { 
      DARABONBA_PTR_FROM_JSON(Comment, comment_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(Creator, creator_);
      DARABONBA_PTR_FROM_JSON(CreatorName, creatorName_);
      DARABONBA_PTR_FROM_JSON(ProjectName, projectName_);
      DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
    };
    ListProjectsResponseBodyListProject() = default ;
    ListProjectsResponseBodyListProject(const ListProjectsResponseBodyListProject &) = default ;
    ListProjectsResponseBodyListProject(ListProjectsResponseBodyListProject &&) = default ;
    ListProjectsResponseBodyListProject(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListProjectsResponseBodyListProject() = default ;
    ListProjectsResponseBodyListProject& operator=(const ListProjectsResponseBodyListProject &) = default ;
    ListProjectsResponseBodyListProject& operator=(ListProjectsResponseBodyListProject &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->comment_ == nullptr
        && return this->createTime_ == nullptr && return this->creator_ == nullptr && return this->creatorName_ == nullptr && return this->projectName_ == nullptr && return this->updateTime_ == nullptr; };
    // comment Field Functions 
    bool hasComment() const { return this->comment_ != nullptr;};
    void deleteComment() { this->comment_ = nullptr;};
    inline string comment() const { DARABONBA_PTR_GET_DEFAULT(comment_, "") };
    inline ListProjectsResponseBodyListProject& setComment(string comment) { DARABONBA_PTR_SET_VALUE(comment_, comment) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline int64_t createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
    inline ListProjectsResponseBodyListProject& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // creator Field Functions 
    bool hasCreator() const { return this->creator_ != nullptr;};
    void deleteCreator() { this->creator_ = nullptr;};
    inline string creator() const { DARABONBA_PTR_GET_DEFAULT(creator_, "") };
    inline ListProjectsResponseBodyListProject& setCreator(string creator) { DARABONBA_PTR_SET_VALUE(creator_, creator) };


    // creatorName Field Functions 
    bool hasCreatorName() const { return this->creatorName_ != nullptr;};
    void deleteCreatorName() { this->creatorName_ = nullptr;};
    inline string creatorName() const { DARABONBA_PTR_GET_DEFAULT(creatorName_, "") };
    inline ListProjectsResponseBodyListProject& setCreatorName(string creatorName) { DARABONBA_PTR_SET_VALUE(creatorName_, creatorName) };


    // projectName Field Functions 
    bool hasProjectName() const { return this->projectName_ != nullptr;};
    void deleteProjectName() { this->projectName_ = nullptr;};
    inline string projectName() const { DARABONBA_PTR_GET_DEFAULT(projectName_, "") };
    inline ListProjectsResponseBodyListProject& setProjectName(string projectName) { DARABONBA_PTR_SET_VALUE(projectName_, projectName) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline int64_t updateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, 0L) };
    inline ListProjectsResponseBodyListProject& setUpdateTime(int64_t updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


  protected:
    // Text comment for the field
    std::shared_ptr<string> comment_ = nullptr;
    // Creation time
    std::shared_ptr<int64_t> createTime_ = nullptr;
    // Creator ID
    std::shared_ptr<string> creator_ = nullptr;
    // Creator\\"s name
    std::shared_ptr<string> creatorName_ = nullptr;
    // Project name
    std::shared_ptr<string> projectName_ = nullptr;
    // Update time
    std::shared_ptr<int64_t> updateTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Datahub20191120
#endif
