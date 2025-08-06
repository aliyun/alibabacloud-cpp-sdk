// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SEARCHEDITINGPROJECTRESPONSEBODYPROJECTLIST_HPP_
#define ALIBABACLOUD_MODELS_SEARCHEDITINGPROJECTRESPONSEBODYPROJECTLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/SearchEditingProjectResponseBodyProjectListProject.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class SearchEditingProjectResponseBodyProjectList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SearchEditingProjectResponseBodyProjectList& obj) { 
      DARABONBA_PTR_TO_JSON(Project, project_);
    };
    friend void from_json(const Darabonba::Json& j, SearchEditingProjectResponseBodyProjectList& obj) { 
      DARABONBA_PTR_FROM_JSON(Project, project_);
    };
    SearchEditingProjectResponseBodyProjectList() = default ;
    SearchEditingProjectResponseBodyProjectList(const SearchEditingProjectResponseBodyProjectList &) = default ;
    SearchEditingProjectResponseBodyProjectList(SearchEditingProjectResponseBodyProjectList &&) = default ;
    SearchEditingProjectResponseBodyProjectList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SearchEditingProjectResponseBodyProjectList() = default ;
    SearchEditingProjectResponseBodyProjectList& operator=(const SearchEditingProjectResponseBodyProjectList &) = default ;
    SearchEditingProjectResponseBodyProjectList& operator=(SearchEditingProjectResponseBodyProjectList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->project_ != nullptr; };
    // project Field Functions 
    bool hasProject() const { return this->project_ != nullptr;};
    void deleteProject() { this->project_ = nullptr;};
    inline const vector<Models::SearchEditingProjectResponseBodyProjectListProject> & project() const { DARABONBA_PTR_GET_CONST(project_, vector<Models::SearchEditingProjectResponseBodyProjectListProject>) };
    inline vector<Models::SearchEditingProjectResponseBodyProjectListProject> project() { DARABONBA_PTR_GET(project_, vector<Models::SearchEditingProjectResponseBodyProjectListProject>) };
    inline SearchEditingProjectResponseBodyProjectList& setProject(const vector<Models::SearchEditingProjectResponseBodyProjectListProject> & project) { DARABONBA_PTR_SET_VALUE(project_, project) };
    inline SearchEditingProjectResponseBodyProjectList& setProject(vector<Models::SearchEditingProjectResponseBodyProjectListProject> && project) { DARABONBA_PTR_SET_RVALUE(project_, project) };


  protected:
    std::shared_ptr<vector<Models::SearchEditingProjectResponseBodyProjectListProject>> project_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
