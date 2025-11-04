// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEINDEXREQUESTCOLUMNS_HPP_
#define ALIBABACLOUD_MODELS_CREATEINDEXREQUESTCOLUMNS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Bailian20231229
{
namespace Models
{
  class CreateIndexRequestColumns : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateIndexRequestColumns& obj) { 
      DARABONBA_PTR_TO_JSON(Column, column_);
      DARABONBA_PTR_TO_JSON(IsRecall, isRecall_);
      DARABONBA_PTR_TO_JSON(IsSearch, isSearch_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, CreateIndexRequestColumns& obj) { 
      DARABONBA_PTR_FROM_JSON(Column, column_);
      DARABONBA_PTR_FROM_JSON(IsRecall, isRecall_);
      DARABONBA_PTR_FROM_JSON(IsSearch, isSearch_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    CreateIndexRequestColumns() = default ;
    CreateIndexRequestColumns(const CreateIndexRequestColumns &) = default ;
    CreateIndexRequestColumns(CreateIndexRequestColumns &&) = default ;
    CreateIndexRequestColumns(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateIndexRequestColumns() = default ;
    CreateIndexRequestColumns& operator=(const CreateIndexRequestColumns &) = default ;
    CreateIndexRequestColumns& operator=(CreateIndexRequestColumns &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->column_ == nullptr
        && return this->isRecall_ == nullptr && return this->isSearch_ == nullptr && return this->name_ == nullptr && return this->type_ == nullptr; };
    // column Field Functions 
    bool hasColumn() const { return this->column_ != nullptr;};
    void deleteColumn() { this->column_ = nullptr;};
    inline string column() const { DARABONBA_PTR_GET_DEFAULT(column_, "") };
    inline CreateIndexRequestColumns& setColumn(string column) { DARABONBA_PTR_SET_VALUE(column_, column) };


    // isRecall Field Functions 
    bool hasIsRecall() const { return this->isRecall_ != nullptr;};
    void deleteIsRecall() { this->isRecall_ = nullptr;};
    inline bool isRecall() const { DARABONBA_PTR_GET_DEFAULT(isRecall_, false) };
    inline CreateIndexRequestColumns& setIsRecall(bool isRecall) { DARABONBA_PTR_SET_VALUE(isRecall_, isRecall) };


    // isSearch Field Functions 
    bool hasIsSearch() const { return this->isSearch_ != nullptr;};
    void deleteIsSearch() { this->isSearch_ = nullptr;};
    inline bool isSearch() const { DARABONBA_PTR_GET_DEFAULT(isSearch_, false) };
    inline CreateIndexRequestColumns& setIsSearch(bool isSearch) { DARABONBA_PTR_SET_VALUE(isSearch_, isSearch) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateIndexRequestColumns& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline CreateIndexRequestColumns& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    std::shared_ptr<string> column_ = nullptr;
    std::shared_ptr<bool> isRecall_ = nullptr;
    std::shared_ptr<bool> isSearch_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Bailian20231229
#endif
