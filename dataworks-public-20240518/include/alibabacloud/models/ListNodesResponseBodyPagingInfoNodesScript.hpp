// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTNODESRESPONSEBODYPAGINGINFONODESSCRIPT_HPP_
#define ALIBABACLOUD_MODELS_LISTNODESRESPONSEBODYPAGINGINFONODESSCRIPT_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListNodesResponseBodyPagingInfoNodesScriptRuntime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class ListNodesResponseBodyPagingInfoNodesScript : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListNodesResponseBodyPagingInfoNodesScript& obj) { 
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Path, path_);
      DARABONBA_PTR_TO_JSON(Runtime, runtime_);
    };
    friend void from_json(const Darabonba::Json& j, ListNodesResponseBodyPagingInfoNodesScript& obj) { 
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Path, path_);
      DARABONBA_PTR_FROM_JSON(Runtime, runtime_);
    };
    ListNodesResponseBodyPagingInfoNodesScript() = default ;
    ListNodesResponseBodyPagingInfoNodesScript(const ListNodesResponseBodyPagingInfoNodesScript &) = default ;
    ListNodesResponseBodyPagingInfoNodesScript(ListNodesResponseBodyPagingInfoNodesScript &&) = default ;
    ListNodesResponseBodyPagingInfoNodesScript(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListNodesResponseBodyPagingInfoNodesScript() = default ;
    ListNodesResponseBodyPagingInfoNodesScript& operator=(const ListNodesResponseBodyPagingInfoNodesScript &) = default ;
    ListNodesResponseBodyPagingInfoNodesScript& operator=(ListNodesResponseBodyPagingInfoNodesScript &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->id_ != nullptr
        && this->path_ != nullptr && this->runtime_ != nullptr; };
    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline ListNodesResponseBodyPagingInfoNodesScript& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // path Field Functions 
    bool hasPath() const { return this->path_ != nullptr;};
    void deletePath() { this->path_ = nullptr;};
    inline string path() const { DARABONBA_PTR_GET_DEFAULT(path_, "") };
    inline ListNodesResponseBodyPagingInfoNodesScript& setPath(string path) { DARABONBA_PTR_SET_VALUE(path_, path) };


    // runtime Field Functions 
    bool hasRuntime() const { return this->runtime_ != nullptr;};
    void deleteRuntime() { this->runtime_ = nullptr;};
    inline const Models::ListNodesResponseBodyPagingInfoNodesScriptRuntime & runtime() const { DARABONBA_PTR_GET_CONST(runtime_, Models::ListNodesResponseBodyPagingInfoNodesScriptRuntime) };
    inline Models::ListNodesResponseBodyPagingInfoNodesScriptRuntime runtime() { DARABONBA_PTR_GET(runtime_, Models::ListNodesResponseBodyPagingInfoNodesScriptRuntime) };
    inline ListNodesResponseBodyPagingInfoNodesScript& setRuntime(const Models::ListNodesResponseBodyPagingInfoNodesScriptRuntime & runtime) { DARABONBA_PTR_SET_VALUE(runtime_, runtime) };
    inline ListNodesResponseBodyPagingInfoNodesScript& setRuntime(Models::ListNodesResponseBodyPagingInfoNodesScriptRuntime && runtime) { DARABONBA_PTR_SET_RVALUE(runtime_, runtime) };


  protected:
    // The script ID.
    std::shared_ptr<int64_t> id_ = nullptr;
    // The script path.
    std::shared_ptr<string> path_ = nullptr;
    // The runtime.
    std::shared_ptr<Models::ListNodesResponseBodyPagingInfoNodesScriptRuntime> runtime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
