// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCOMPONENTSRESPONSEBODYPAGINGINFOCOMPONENTSSCRIPT_HPP_
#define ALIBABACLOUD_MODELS_LISTCOMPONENTSRESPONSEBODYPAGINGINFOCOMPONENTSSCRIPT_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListComponentsResponseBodyPagingInfoComponentsScriptRuntime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class ListComponentsResponseBodyPagingInfoComponentsScript : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListComponentsResponseBodyPagingInfoComponentsScript& obj) { 
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Path, path_);
      DARABONBA_PTR_TO_JSON(Runtime, runtime_);
    };
    friend void from_json(const Darabonba::Json& j, ListComponentsResponseBodyPagingInfoComponentsScript& obj) { 
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Path, path_);
      DARABONBA_PTR_FROM_JSON(Runtime, runtime_);
    };
    ListComponentsResponseBodyPagingInfoComponentsScript() = default ;
    ListComponentsResponseBodyPagingInfoComponentsScript(const ListComponentsResponseBodyPagingInfoComponentsScript &) = default ;
    ListComponentsResponseBodyPagingInfoComponentsScript(ListComponentsResponseBodyPagingInfoComponentsScript &&) = default ;
    ListComponentsResponseBodyPagingInfoComponentsScript(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListComponentsResponseBodyPagingInfoComponentsScript() = default ;
    ListComponentsResponseBodyPagingInfoComponentsScript& operator=(const ListComponentsResponseBodyPagingInfoComponentsScript &) = default ;
    ListComponentsResponseBodyPagingInfoComponentsScript& operator=(ListComponentsResponseBodyPagingInfoComponentsScript &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->id_ != nullptr
        && this->path_ != nullptr && this->runtime_ != nullptr; };
    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline ListComponentsResponseBodyPagingInfoComponentsScript& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // path Field Functions 
    bool hasPath() const { return this->path_ != nullptr;};
    void deletePath() { this->path_ = nullptr;};
    inline string path() const { DARABONBA_PTR_GET_DEFAULT(path_, "") };
    inline ListComponentsResponseBodyPagingInfoComponentsScript& setPath(string path) { DARABONBA_PTR_SET_VALUE(path_, path) };


    // runtime Field Functions 
    bool hasRuntime() const { return this->runtime_ != nullptr;};
    void deleteRuntime() { this->runtime_ = nullptr;};
    inline const Models::ListComponentsResponseBodyPagingInfoComponentsScriptRuntime & runtime() const { DARABONBA_PTR_GET_CONST(runtime_, Models::ListComponentsResponseBodyPagingInfoComponentsScriptRuntime) };
    inline Models::ListComponentsResponseBodyPagingInfoComponentsScriptRuntime runtime() { DARABONBA_PTR_GET(runtime_, Models::ListComponentsResponseBodyPagingInfoComponentsScriptRuntime) };
    inline ListComponentsResponseBodyPagingInfoComponentsScript& setRuntime(const Models::ListComponentsResponseBodyPagingInfoComponentsScriptRuntime & runtime) { DARABONBA_PTR_SET_VALUE(runtime_, runtime) };
    inline ListComponentsResponseBodyPagingInfoComponentsScript& setRuntime(Models::ListComponentsResponseBodyPagingInfoComponentsScriptRuntime && runtime) { DARABONBA_PTR_SET_RVALUE(runtime_, runtime) };


  protected:
    // ID
    std::shared_ptr<string> id_ = nullptr;
    // 脚本路径
    std::shared_ptr<string> path_ = nullptr;
    // 脚本的运行时信息
    std::shared_ptr<Models::ListComponentsResponseBodyPagingInfoComponentsScriptRuntime> runtime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
