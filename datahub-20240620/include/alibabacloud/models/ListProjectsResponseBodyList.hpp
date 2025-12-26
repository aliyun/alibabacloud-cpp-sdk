// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPROJECTSRESPONSEBODYLIST_HPP_
#define ALIBABACLOUD_MODELS_LISTPROJECTSRESPONSEBODYLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListProjectsResponseBodyListProject.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Datahub20240620
{
namespace Models
{
  class ListProjectsResponseBodyList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListProjectsResponseBodyList& obj) { 
      DARABONBA_PTR_TO_JSON(Project, project_);
    };
    friend void from_json(const Darabonba::Json& j, ListProjectsResponseBodyList& obj) { 
      DARABONBA_PTR_FROM_JSON(Project, project_);
    };
    ListProjectsResponseBodyList() = default ;
    ListProjectsResponseBodyList(const ListProjectsResponseBodyList &) = default ;
    ListProjectsResponseBodyList(ListProjectsResponseBodyList &&) = default ;
    ListProjectsResponseBodyList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListProjectsResponseBodyList() = default ;
    ListProjectsResponseBodyList& operator=(const ListProjectsResponseBodyList &) = default ;
    ListProjectsResponseBodyList& operator=(ListProjectsResponseBodyList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->project_ == nullptr; };
    // project Field Functions 
    bool hasProject() const { return this->project_ != nullptr;};
    void deleteProject() { this->project_ = nullptr;};
    inline const vector<Models::ListProjectsResponseBodyListProject> & project() const { DARABONBA_PTR_GET_CONST(project_, vector<Models::ListProjectsResponseBodyListProject>) };
    inline vector<Models::ListProjectsResponseBodyListProject> project() { DARABONBA_PTR_GET(project_, vector<Models::ListProjectsResponseBodyListProject>) };
    inline ListProjectsResponseBodyList& setProject(const vector<Models::ListProjectsResponseBodyListProject> & project) { DARABONBA_PTR_SET_VALUE(project_, project) };
    inline ListProjectsResponseBodyList& setProject(vector<Models::ListProjectsResponseBodyListProject> && project) { DARABONBA_PTR_SET_RVALUE(project_, project) };


  protected:
    std::shared_ptr<vector<Models::ListProjectsResponseBodyListProject>> project_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Datahub20240620
#endif
