// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTRESOURCESRESPONSEBODYPAGINGINFORESOURCESSCRIPT_HPP_
#define ALIBABACLOUD_MODELS_LISTRESOURCESRESPONSEBODYPAGINGINFORESOURCESSCRIPT_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListResourcesResponseBodyPagingInfoResourcesScriptRuntime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class ListResourcesResponseBodyPagingInfoResourcesScript : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListResourcesResponseBodyPagingInfoResourcesScript& obj) { 
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Path, path_);
      DARABONBA_PTR_TO_JSON(Runtime, runtime_);
    };
    friend void from_json(const Darabonba::Json& j, ListResourcesResponseBodyPagingInfoResourcesScript& obj) { 
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Path, path_);
      DARABONBA_PTR_FROM_JSON(Runtime, runtime_);
    };
    ListResourcesResponseBodyPagingInfoResourcesScript() = default ;
    ListResourcesResponseBodyPagingInfoResourcesScript(const ListResourcesResponseBodyPagingInfoResourcesScript &) = default ;
    ListResourcesResponseBodyPagingInfoResourcesScript(ListResourcesResponseBodyPagingInfoResourcesScript &&) = default ;
    ListResourcesResponseBodyPagingInfoResourcesScript(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListResourcesResponseBodyPagingInfoResourcesScript() = default ;
    ListResourcesResponseBodyPagingInfoResourcesScript& operator=(const ListResourcesResponseBodyPagingInfoResourcesScript &) = default ;
    ListResourcesResponseBodyPagingInfoResourcesScript& operator=(ListResourcesResponseBodyPagingInfoResourcesScript &&) = default ;
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
    inline ListResourcesResponseBodyPagingInfoResourcesScript& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // path Field Functions 
    bool hasPath() const { return this->path_ != nullptr;};
    void deletePath() { this->path_ = nullptr;};
    inline string path() const { DARABONBA_PTR_GET_DEFAULT(path_, "") };
    inline ListResourcesResponseBodyPagingInfoResourcesScript& setPath(string path) { DARABONBA_PTR_SET_VALUE(path_, path) };


    // runtime Field Functions 
    bool hasRuntime() const { return this->runtime_ != nullptr;};
    void deleteRuntime() { this->runtime_ = nullptr;};
    inline const Models::ListResourcesResponseBodyPagingInfoResourcesScriptRuntime & runtime() const { DARABONBA_PTR_GET_CONST(runtime_, Models::ListResourcesResponseBodyPagingInfoResourcesScriptRuntime) };
    inline Models::ListResourcesResponseBodyPagingInfoResourcesScriptRuntime runtime() { DARABONBA_PTR_GET(runtime_, Models::ListResourcesResponseBodyPagingInfoResourcesScriptRuntime) };
    inline ListResourcesResponseBodyPagingInfoResourcesScript& setRuntime(const Models::ListResourcesResponseBodyPagingInfoResourcesScriptRuntime & runtime) { DARABONBA_PTR_SET_VALUE(runtime_, runtime) };
    inline ListResourcesResponseBodyPagingInfoResourcesScript& setRuntime(Models::ListResourcesResponseBodyPagingInfoResourcesScriptRuntime && runtime) { DARABONBA_PTR_SET_RVALUE(runtime_, runtime) };


  protected:
    // The script ID.
    std::shared_ptr<int64_t> id_ = nullptr;
    // The script path.
    std::shared_ptr<string> path_ = nullptr;
    // The runtime.
    std::shared_ptr<Models::ListResourcesResponseBodyPagingInfoResourcesScriptRuntime> runtime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
