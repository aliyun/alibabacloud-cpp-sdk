// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTWORKFLOWDEFINITIONSRESPONSEBODYPAGINGINFOWORKFLOWDEFINITIONSSCRIPT_HPP_
#define ALIBABACLOUD_MODELS_LISTWORKFLOWDEFINITIONSRESPONSEBODYPAGINGINFOWORKFLOWDEFINITIONSSCRIPT_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListWorkflowDefinitionsResponseBodyPagingInfoWorkflowDefinitionsScriptRuntime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class ListWorkflowDefinitionsResponseBodyPagingInfoWorkflowDefinitionsScript : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListWorkflowDefinitionsResponseBodyPagingInfoWorkflowDefinitionsScript& obj) { 
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Path, path_);
      DARABONBA_PTR_TO_JSON(Runtime, runtime_);
    };
    friend void from_json(const Darabonba::Json& j, ListWorkflowDefinitionsResponseBodyPagingInfoWorkflowDefinitionsScript& obj) { 
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Path, path_);
      DARABONBA_PTR_FROM_JSON(Runtime, runtime_);
    };
    ListWorkflowDefinitionsResponseBodyPagingInfoWorkflowDefinitionsScript() = default ;
    ListWorkflowDefinitionsResponseBodyPagingInfoWorkflowDefinitionsScript(const ListWorkflowDefinitionsResponseBodyPagingInfoWorkflowDefinitionsScript &) = default ;
    ListWorkflowDefinitionsResponseBodyPagingInfoWorkflowDefinitionsScript(ListWorkflowDefinitionsResponseBodyPagingInfoWorkflowDefinitionsScript &&) = default ;
    ListWorkflowDefinitionsResponseBodyPagingInfoWorkflowDefinitionsScript(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListWorkflowDefinitionsResponseBodyPagingInfoWorkflowDefinitionsScript() = default ;
    ListWorkflowDefinitionsResponseBodyPagingInfoWorkflowDefinitionsScript& operator=(const ListWorkflowDefinitionsResponseBodyPagingInfoWorkflowDefinitionsScript &) = default ;
    ListWorkflowDefinitionsResponseBodyPagingInfoWorkflowDefinitionsScript& operator=(ListWorkflowDefinitionsResponseBodyPagingInfoWorkflowDefinitionsScript &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->id_ == nullptr
        && return this->path_ == nullptr && return this->runtime_ == nullptr; };
    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline ListWorkflowDefinitionsResponseBodyPagingInfoWorkflowDefinitionsScript& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // path Field Functions 
    bool hasPath() const { return this->path_ != nullptr;};
    void deletePath() { this->path_ = nullptr;};
    inline string path() const { DARABONBA_PTR_GET_DEFAULT(path_, "") };
    inline ListWorkflowDefinitionsResponseBodyPagingInfoWorkflowDefinitionsScript& setPath(string path) { DARABONBA_PTR_SET_VALUE(path_, path) };


    // runtime Field Functions 
    bool hasRuntime() const { return this->runtime_ != nullptr;};
    void deleteRuntime() { this->runtime_ = nullptr;};
    inline const Models::ListWorkflowDefinitionsResponseBodyPagingInfoWorkflowDefinitionsScriptRuntime & runtime() const { DARABONBA_PTR_GET_CONST(runtime_, Models::ListWorkflowDefinitionsResponseBodyPagingInfoWorkflowDefinitionsScriptRuntime) };
    inline Models::ListWorkflowDefinitionsResponseBodyPagingInfoWorkflowDefinitionsScriptRuntime runtime() { DARABONBA_PTR_GET(runtime_, Models::ListWorkflowDefinitionsResponseBodyPagingInfoWorkflowDefinitionsScriptRuntime) };
    inline ListWorkflowDefinitionsResponseBodyPagingInfoWorkflowDefinitionsScript& setRuntime(const Models::ListWorkflowDefinitionsResponseBodyPagingInfoWorkflowDefinitionsScriptRuntime & runtime) { DARABONBA_PTR_SET_VALUE(runtime_, runtime) };
    inline ListWorkflowDefinitionsResponseBodyPagingInfoWorkflowDefinitionsScript& setRuntime(Models::ListWorkflowDefinitionsResponseBodyPagingInfoWorkflowDefinitionsScriptRuntime && runtime) { DARABONBA_PTR_SET_RVALUE(runtime_, runtime) };


  protected:
    // The script ID.
    std::shared_ptr<int64_t> id_ = nullptr;
    // The script path.
    std::shared_ptr<string> path_ = nullptr;
    // The runtime.
    std::shared_ptr<Models::ListWorkflowDefinitionsResponseBodyPagingInfoWorkflowDefinitionsScriptRuntime> runtime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
