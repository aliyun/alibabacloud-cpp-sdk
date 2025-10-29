// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTNODEDEPENDENCIESRESPONSEBODYPAGINGINFONODESSCRIPT_HPP_
#define ALIBABACLOUD_MODELS_LISTNODEDEPENDENCIESRESPONSEBODYPAGINGINFONODESSCRIPT_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListNodeDependenciesResponseBodyPagingInfoNodesScriptRuntime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class ListNodeDependenciesResponseBodyPagingInfoNodesScript : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListNodeDependenciesResponseBodyPagingInfoNodesScript& obj) { 
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Path, path_);
      DARABONBA_PTR_TO_JSON(Runtime, runtime_);
    };
    friend void from_json(const Darabonba::Json& j, ListNodeDependenciesResponseBodyPagingInfoNodesScript& obj) { 
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Path, path_);
      DARABONBA_PTR_FROM_JSON(Runtime, runtime_);
    };
    ListNodeDependenciesResponseBodyPagingInfoNodesScript() = default ;
    ListNodeDependenciesResponseBodyPagingInfoNodesScript(const ListNodeDependenciesResponseBodyPagingInfoNodesScript &) = default ;
    ListNodeDependenciesResponseBodyPagingInfoNodesScript(ListNodeDependenciesResponseBodyPagingInfoNodesScript &&) = default ;
    ListNodeDependenciesResponseBodyPagingInfoNodesScript(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListNodeDependenciesResponseBodyPagingInfoNodesScript() = default ;
    ListNodeDependenciesResponseBodyPagingInfoNodesScript& operator=(const ListNodeDependenciesResponseBodyPagingInfoNodesScript &) = default ;
    ListNodeDependenciesResponseBodyPagingInfoNodesScript& operator=(ListNodeDependenciesResponseBodyPagingInfoNodesScript &&) = default ;
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
    inline ListNodeDependenciesResponseBodyPagingInfoNodesScript& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // path Field Functions 
    bool hasPath() const { return this->path_ != nullptr;};
    void deletePath() { this->path_ = nullptr;};
    inline string path() const { DARABONBA_PTR_GET_DEFAULT(path_, "") };
    inline ListNodeDependenciesResponseBodyPagingInfoNodesScript& setPath(string path) { DARABONBA_PTR_SET_VALUE(path_, path) };


    // runtime Field Functions 
    bool hasRuntime() const { return this->runtime_ != nullptr;};
    void deleteRuntime() { this->runtime_ = nullptr;};
    inline const Models::ListNodeDependenciesResponseBodyPagingInfoNodesScriptRuntime & runtime() const { DARABONBA_PTR_GET_CONST(runtime_, Models::ListNodeDependenciesResponseBodyPagingInfoNodesScriptRuntime) };
    inline Models::ListNodeDependenciesResponseBodyPagingInfoNodesScriptRuntime runtime() { DARABONBA_PTR_GET(runtime_, Models::ListNodeDependenciesResponseBodyPagingInfoNodesScriptRuntime) };
    inline ListNodeDependenciesResponseBodyPagingInfoNodesScript& setRuntime(const Models::ListNodeDependenciesResponseBodyPagingInfoNodesScriptRuntime & runtime) { DARABONBA_PTR_SET_VALUE(runtime_, runtime) };
    inline ListNodeDependenciesResponseBodyPagingInfoNodesScript& setRuntime(Models::ListNodeDependenciesResponseBodyPagingInfoNodesScriptRuntime && runtime) { DARABONBA_PTR_SET_RVALUE(runtime_, runtime) };


  protected:
    // The script ID.
    std::shared_ptr<int64_t> id_ = nullptr;
    // The script path.
    std::shared_ptr<string> path_ = nullptr;
    // The runtime.
    std::shared_ptr<Models::ListNodeDependenciesResponseBodyPagingInfoNodesScriptRuntime> runtime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
