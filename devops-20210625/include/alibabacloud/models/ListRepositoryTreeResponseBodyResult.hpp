// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTREPOSITORYTREERESPONSEBODYRESULT_HPP_
#define ALIBABACLOUD_MODELS_LISTREPOSITORYTREERESPONSEBODYRESULT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devops20210625
{
namespace Models
{
  class ListRepositoryTreeResponseBodyResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListRepositoryTreeResponseBodyResult& obj) { 
      DARABONBA_PTR_TO_JSON(id, id_);
      DARABONBA_PTR_TO_JSON(isLFS, isLFS_);
      DARABONBA_PTR_TO_JSON(mode, mode_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(path, path_);
      DARABONBA_PTR_TO_JSON(type, type_);
    };
    friend void from_json(const Darabonba::Json& j, ListRepositoryTreeResponseBodyResult& obj) { 
      DARABONBA_PTR_FROM_JSON(id, id_);
      DARABONBA_PTR_FROM_JSON(isLFS, isLFS_);
      DARABONBA_PTR_FROM_JSON(mode, mode_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(path, path_);
      DARABONBA_PTR_FROM_JSON(type, type_);
    };
    ListRepositoryTreeResponseBodyResult() = default ;
    ListRepositoryTreeResponseBodyResult(const ListRepositoryTreeResponseBodyResult &) = default ;
    ListRepositoryTreeResponseBodyResult(ListRepositoryTreeResponseBodyResult &&) = default ;
    ListRepositoryTreeResponseBodyResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListRepositoryTreeResponseBodyResult() = default ;
    ListRepositoryTreeResponseBodyResult& operator=(const ListRepositoryTreeResponseBodyResult &) = default ;
    ListRepositoryTreeResponseBodyResult& operator=(ListRepositoryTreeResponseBodyResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->id_ == nullptr
        && return this->isLFS_ == nullptr && return this->mode_ == nullptr && return this->name_ == nullptr && return this->path_ == nullptr && return this->type_ == nullptr; };
    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline ListRepositoryTreeResponseBodyResult& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // isLFS Field Functions 
    bool hasIsLFS() const { return this->isLFS_ != nullptr;};
    void deleteIsLFS() { this->isLFS_ = nullptr;};
    inline bool isLFS() const { DARABONBA_PTR_GET_DEFAULT(isLFS_, false) };
    inline ListRepositoryTreeResponseBodyResult& setIsLFS(bool isLFS) { DARABONBA_PTR_SET_VALUE(isLFS_, isLFS) };


    // mode Field Functions 
    bool hasMode() const { return this->mode_ != nullptr;};
    void deleteMode() { this->mode_ = nullptr;};
    inline string mode() const { DARABONBA_PTR_GET_DEFAULT(mode_, "") };
    inline ListRepositoryTreeResponseBodyResult& setMode(string mode) { DARABONBA_PTR_SET_VALUE(mode_, mode) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListRepositoryTreeResponseBodyResult& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // path Field Functions 
    bool hasPath() const { return this->path_ != nullptr;};
    void deletePath() { this->path_ = nullptr;};
    inline string path() const { DARABONBA_PTR_GET_DEFAULT(path_, "") };
    inline ListRepositoryTreeResponseBodyResult& setPath(string path) { DARABONBA_PTR_SET_VALUE(path_, path) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline ListRepositoryTreeResponseBodyResult& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    std::shared_ptr<string> id_ = nullptr;
    std::shared_ptr<bool> isLFS_ = nullptr;
    std::shared_ptr<string> mode_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> path_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devops20210625
#endif
