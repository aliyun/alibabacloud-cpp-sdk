// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTHREADSRESPONSEBODYTHREADSVARIABLES_HPP_
#define ALIBABACLOUD_MODELS_LISTTHREADSRESPONSEBODYTHREADSVARIABLES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class ListThreadsResponseBodyThreadsVariables : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListThreadsResponseBodyThreadsVariables& obj) { 
      DARABONBA_PTR_TO_JSON(project, project_);
      DARABONBA_PTR_TO_JSON(workspace, workspace_);
    };
    friend void from_json(const Darabonba::Json& j, ListThreadsResponseBodyThreadsVariables& obj) { 
      DARABONBA_PTR_FROM_JSON(project, project_);
      DARABONBA_PTR_FROM_JSON(workspace, workspace_);
    };
    ListThreadsResponseBodyThreadsVariables() = default ;
    ListThreadsResponseBodyThreadsVariables(const ListThreadsResponseBodyThreadsVariables &) = default ;
    ListThreadsResponseBodyThreadsVariables(ListThreadsResponseBodyThreadsVariables &&) = default ;
    ListThreadsResponseBodyThreadsVariables(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListThreadsResponseBodyThreadsVariables() = default ;
    ListThreadsResponseBodyThreadsVariables& operator=(const ListThreadsResponseBodyThreadsVariables &) = default ;
    ListThreadsResponseBodyThreadsVariables& operator=(ListThreadsResponseBodyThreadsVariables &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->project_ == nullptr
        && return this->workspace_ == nullptr; };
    // project Field Functions 
    bool hasProject() const { return this->project_ != nullptr;};
    void deleteProject() { this->project_ = nullptr;};
    inline string project() const { DARABONBA_PTR_GET_DEFAULT(project_, "") };
    inline ListThreadsResponseBodyThreadsVariables& setProject(string project) { DARABONBA_PTR_SET_VALUE(project_, project) };


    // workspace Field Functions 
    bool hasWorkspace() const { return this->workspace_ != nullptr;};
    void deleteWorkspace() { this->workspace_ = nullptr;};
    inline string workspace() const { DARABONBA_PTR_GET_DEFAULT(workspace_, "") };
    inline ListThreadsResponseBodyThreadsVariables& setWorkspace(string workspace) { DARABONBA_PTR_SET_VALUE(workspace_, workspace) };


  protected:
    // SLS project。
    std::shared_ptr<string> project_ = nullptr;
    std::shared_ptr<string> workspace_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
