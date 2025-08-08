// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PROJECTDETAILSLITEVO_HPP_
#define ALIBABACLOUD_MODELS_PROJECTDETAILSLITEVO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class ProjectDetailsLiteVO : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ProjectDetailsLiteVO& obj) { 
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(ProjectName, projectName_);
    };
    friend void from_json(const Darabonba::Json& j, ProjectDetailsLiteVO& obj) { 
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(ProjectName, projectName_);
    };
    ProjectDetailsLiteVO() = default ;
    ProjectDetailsLiteVO(const ProjectDetailsLiteVO &) = default ;
    ProjectDetailsLiteVO(ProjectDetailsLiteVO &&) = default ;
    ProjectDetailsLiteVO(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ProjectDetailsLiteVO() = default ;
    ProjectDetailsLiteVO& operator=(const ProjectDetailsLiteVO &) = default ;
    ProjectDetailsLiteVO& operator=(ProjectDetailsLiteVO &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->id_ != nullptr
        && this->projectName_ != nullptr; };
    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline ProjectDetailsLiteVO& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // projectName Field Functions 
    bool hasProjectName() const { return this->projectName_ != nullptr;};
    void deleteProjectName() { this->projectName_ = nullptr;};
    inline string projectName() const { DARABONBA_PTR_GET_DEFAULT(projectName_, "") };
    inline ProjectDetailsLiteVO& setProjectName(string projectName) { DARABONBA_PTR_SET_VALUE(projectName_, projectName) };


  protected:
    std::shared_ptr<int64_t> id_ = nullptr;
    std::shared_ptr<string> projectName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
