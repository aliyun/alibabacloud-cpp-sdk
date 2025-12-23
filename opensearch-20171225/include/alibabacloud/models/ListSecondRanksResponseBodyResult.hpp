// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSECONDRANKSRESPONSEBODYRESULT_HPP_
#define ALIBABACLOUD_MODELS_LISTSECONDRANKSRESPONSEBODYRESULT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OpenSearch20171225
{
namespace Models
{
  class ListSecondRanksResponseBodyResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSecondRanksResponseBodyResult& obj) { 
      DARABONBA_PTR_TO_JSON(active, active_);
      DARABONBA_PTR_TO_JSON(created, created_);
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(id, id_);
      DARABONBA_PTR_TO_JSON(isDefault, isDefault_);
      DARABONBA_PTR_TO_JSON(isSys, isSys_);
      DARABONBA_PTR_TO_JSON(meta, meta_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(updated, updated_);
    };
    friend void from_json(const Darabonba::Json& j, ListSecondRanksResponseBodyResult& obj) { 
      DARABONBA_PTR_FROM_JSON(active, active_);
      DARABONBA_PTR_FROM_JSON(created, created_);
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(id, id_);
      DARABONBA_PTR_FROM_JSON(isDefault, isDefault_);
      DARABONBA_PTR_FROM_JSON(isSys, isSys_);
      DARABONBA_PTR_FROM_JSON(meta, meta_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(updated, updated_);
    };
    ListSecondRanksResponseBodyResult() = default ;
    ListSecondRanksResponseBodyResult(const ListSecondRanksResponseBodyResult &) = default ;
    ListSecondRanksResponseBodyResult(ListSecondRanksResponseBodyResult &&) = default ;
    ListSecondRanksResponseBodyResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSecondRanksResponseBodyResult() = default ;
    ListSecondRanksResponseBodyResult& operator=(const ListSecondRanksResponseBodyResult &) = default ;
    ListSecondRanksResponseBodyResult& operator=(ListSecondRanksResponseBodyResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->active_ == nullptr
        && return this->created_ == nullptr && return this->description_ == nullptr && return this->id_ == nullptr && return this->isDefault_ == nullptr && return this->isSys_ == nullptr
        && return this->meta_ == nullptr && return this->name_ == nullptr && return this->updated_ == nullptr; };
    // active Field Functions 
    bool hasActive() const { return this->active_ != nullptr;};
    void deleteActive() { this->active_ = nullptr;};
    inline bool active() const { DARABONBA_PTR_GET_DEFAULT(active_, false) };
    inline ListSecondRanksResponseBodyResult& setActive(bool active) { DARABONBA_PTR_SET_VALUE(active_, active) };


    // created Field Functions 
    bool hasCreated() const { return this->created_ != nullptr;};
    void deleteCreated() { this->created_ = nullptr;};
    inline int32_t created() const { DARABONBA_PTR_GET_DEFAULT(created_, 0) };
    inline ListSecondRanksResponseBodyResult& setCreated(int32_t created) { DARABONBA_PTR_SET_VALUE(created_, created) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ListSecondRanksResponseBodyResult& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline ListSecondRanksResponseBodyResult& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // isDefault Field Functions 
    bool hasIsDefault() const { return this->isDefault_ != nullptr;};
    void deleteIsDefault() { this->isDefault_ = nullptr;};
    inline string isDefault() const { DARABONBA_PTR_GET_DEFAULT(isDefault_, "") };
    inline ListSecondRanksResponseBodyResult& setIsDefault(string isDefault) { DARABONBA_PTR_SET_VALUE(isDefault_, isDefault) };


    // isSys Field Functions 
    bool hasIsSys() const { return this->isSys_ != nullptr;};
    void deleteIsSys() { this->isSys_ = nullptr;};
    inline string isSys() const { DARABONBA_PTR_GET_DEFAULT(isSys_, "") };
    inline ListSecondRanksResponseBodyResult& setIsSys(string isSys) { DARABONBA_PTR_SET_VALUE(isSys_, isSys) };


    // meta Field Functions 
    bool hasMeta() const { return this->meta_ != nullptr;};
    void deleteMeta() { this->meta_ = nullptr;};
    inline string meta() const { DARABONBA_PTR_GET_DEFAULT(meta_, "") };
    inline ListSecondRanksResponseBodyResult& setMeta(string meta) { DARABONBA_PTR_SET_VALUE(meta_, meta) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListSecondRanksResponseBodyResult& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // updated Field Functions 
    bool hasUpdated() const { return this->updated_ != nullptr;};
    void deleteUpdated() { this->updated_ = nullptr;};
    inline int32_t updated() const { DARABONBA_PTR_GET_DEFAULT(updated_, 0) };
    inline ListSecondRanksResponseBodyResult& setUpdated(int32_t updated) { DARABONBA_PTR_SET_VALUE(updated_, updated) };


  protected:
    // Indicates whether the expression is the default one.
    std::shared_ptr<bool> active_ = nullptr;
    // The time when the expression was created.
    std::shared_ptr<int32_t> created_ = nullptr;
    // Description
    std::shared_ptr<string> description_ = nullptr;
    // The expression ID. This parameter is displayed only in the response.
    std::shared_ptr<string> id_ = nullptr;
    // Indicates whether the expression is the default one. This parameter is displayed only in the response. Valid values:
    // 
    // *   true: the expression is the default one.
    // *   false: the expression is not the default one.
    std::shared_ptr<string> isDefault_ = nullptr;
    // Indicates whether the expression is a system expression. This parameter is displayed only in the response. Valid values:
    // 
    // *   true: The expression is a system expression.
    // *   false:The expression is not a system expression
    std::shared_ptr<string> isSys_ = nullptr;
    // The content of the fine sort expression. You can define an expression that consists of fields, feature functions, and mathematical functions to implement complex sort logic.
    std::shared_ptr<string> meta_ = nullptr;
    // Parameter
    std::shared_ptr<string> name_ = nullptr;
    // The time when the expression was updated.
    std::shared_ptr<int32_t> updated_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OpenSearch20171225
#endif
