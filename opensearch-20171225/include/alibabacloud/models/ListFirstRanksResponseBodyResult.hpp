// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTFIRSTRANKSRESPONSEBODYRESULT_HPP_
#define ALIBABACLOUD_MODELS_LISTFIRSTRANKSRESPONSEBODYRESULT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListFirstRanksResponseBodyResultMeta.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OpenSearch20171225
{
namespace Models
{
  class ListFirstRanksResponseBodyResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListFirstRanksResponseBodyResult& obj) { 
      DARABONBA_PTR_TO_JSON(active, active_);
      DARABONBA_PTR_TO_JSON(created, created_);
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(meta, meta_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(updated, updated_);
    };
    friend void from_json(const Darabonba::Json& j, ListFirstRanksResponseBodyResult& obj) { 
      DARABONBA_PTR_FROM_JSON(active, active_);
      DARABONBA_PTR_FROM_JSON(created, created_);
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(meta, meta_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(updated, updated_);
    };
    ListFirstRanksResponseBodyResult() = default ;
    ListFirstRanksResponseBodyResult(const ListFirstRanksResponseBodyResult &) = default ;
    ListFirstRanksResponseBodyResult(ListFirstRanksResponseBodyResult &&) = default ;
    ListFirstRanksResponseBodyResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListFirstRanksResponseBodyResult() = default ;
    ListFirstRanksResponseBodyResult& operator=(const ListFirstRanksResponseBodyResult &) = default ;
    ListFirstRanksResponseBodyResult& operator=(ListFirstRanksResponseBodyResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->active_ == nullptr
        && return this->created_ == nullptr && return this->description_ == nullptr && return this->meta_ == nullptr && return this->name_ == nullptr && return this->updated_ == nullptr; };
    // active Field Functions 
    bool hasActive() const { return this->active_ != nullptr;};
    void deleteActive() { this->active_ = nullptr;};
    inline bool active() const { DARABONBA_PTR_GET_DEFAULT(active_, false) };
    inline ListFirstRanksResponseBodyResult& setActive(bool active) { DARABONBA_PTR_SET_VALUE(active_, active) };


    // created Field Functions 
    bool hasCreated() const { return this->created_ != nullptr;};
    void deleteCreated() { this->created_ = nullptr;};
    inline int32_t created() const { DARABONBA_PTR_GET_DEFAULT(created_, 0) };
    inline ListFirstRanksResponseBodyResult& setCreated(int32_t created) { DARABONBA_PTR_SET_VALUE(created_, created) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ListFirstRanksResponseBodyResult& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // meta Field Functions 
    bool hasMeta() const { return this->meta_ != nullptr;};
    void deleteMeta() { this->meta_ = nullptr;};
    inline const vector<Models::ListFirstRanksResponseBodyResultMeta> & meta() const { DARABONBA_PTR_GET_CONST(meta_, vector<Models::ListFirstRanksResponseBodyResultMeta>) };
    inline vector<Models::ListFirstRanksResponseBodyResultMeta> meta() { DARABONBA_PTR_GET(meta_, vector<Models::ListFirstRanksResponseBodyResultMeta>) };
    inline ListFirstRanksResponseBodyResult& setMeta(const vector<Models::ListFirstRanksResponseBodyResultMeta> & meta) { DARABONBA_PTR_SET_VALUE(meta_, meta) };
    inline ListFirstRanksResponseBodyResult& setMeta(vector<Models::ListFirstRanksResponseBodyResultMeta> && meta) { DARABONBA_PTR_SET_RVALUE(meta_, meta) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListFirstRanksResponseBodyResult& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // updated Field Functions 
    bool hasUpdated() const { return this->updated_ != nullptr;};
    void deleteUpdated() { this->updated_ = nullptr;};
    inline int32_t updated() const { DARABONBA_PTR_GET_DEFAULT(updated_, 0) };
    inline ListFirstRanksResponseBodyResult& setUpdated(int32_t updated) { DARABONBA_PTR_SET_VALUE(updated_, updated) };


  protected:
    // Specifies whether to set the fine sort expression as the default sort expression.
    std::shared_ptr<bool> active_ = nullptr;
    // The time when the expression was created.
    std::shared_ptr<int32_t> created_ = nullptr;
    // Description
    std::shared_ptr<string> description_ = nullptr;
    // The information about the expression.
    std::shared_ptr<vector<Models::ListFirstRanksResponseBodyResultMeta>> meta_ = nullptr;
    // The name.
    std::shared_ptr<string> name_ = nullptr;
    // The time when the expression was updated.
    std::shared_ptr<int32_t> updated_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OpenSearch20171225
#endif
