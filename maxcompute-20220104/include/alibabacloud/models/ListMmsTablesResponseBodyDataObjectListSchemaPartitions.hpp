// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTMMSTABLESRESPONSEBODYDATAOBJECTLISTSCHEMAPARTITIONS_HPP_
#define ALIBABACLOUD_MODELS_LISTMMSTABLESRESPONSEBODYDATAOBJECTLISTSCHEMAPARTITIONS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MaxCompute20220104
{
namespace Models
{
  class ListMmsTablesResponseBodyDataObjectListSchemaPartitions : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListMmsTablesResponseBodyDataObjectListSchemaPartitions& obj) { 
      DARABONBA_PTR_TO_JSON(comment, comment_);
      DARABONBA_PTR_TO_JSON(defaultValue, defaultValue_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(nullable, nullable_);
      DARABONBA_PTR_TO_JSON(type, type_);
    };
    friend void from_json(const Darabonba::Json& j, ListMmsTablesResponseBodyDataObjectListSchemaPartitions& obj) { 
      DARABONBA_PTR_FROM_JSON(comment, comment_);
      DARABONBA_PTR_FROM_JSON(defaultValue, defaultValue_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(nullable, nullable_);
      DARABONBA_PTR_FROM_JSON(type, type_);
    };
    ListMmsTablesResponseBodyDataObjectListSchemaPartitions() = default ;
    ListMmsTablesResponseBodyDataObjectListSchemaPartitions(const ListMmsTablesResponseBodyDataObjectListSchemaPartitions &) = default ;
    ListMmsTablesResponseBodyDataObjectListSchemaPartitions(ListMmsTablesResponseBodyDataObjectListSchemaPartitions &&) = default ;
    ListMmsTablesResponseBodyDataObjectListSchemaPartitions(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListMmsTablesResponseBodyDataObjectListSchemaPartitions() = default ;
    ListMmsTablesResponseBodyDataObjectListSchemaPartitions& operator=(const ListMmsTablesResponseBodyDataObjectListSchemaPartitions &) = default ;
    ListMmsTablesResponseBodyDataObjectListSchemaPartitions& operator=(ListMmsTablesResponseBodyDataObjectListSchemaPartitions &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->comment_ != nullptr
        && this->defaultValue_ != nullptr && this->name_ != nullptr && this->nullable_ != nullptr && this->type_ != nullptr; };
    // comment Field Functions 
    bool hasComment() const { return this->comment_ != nullptr;};
    void deleteComment() { this->comment_ = nullptr;};
    inline string comment() const { DARABONBA_PTR_GET_DEFAULT(comment_, "") };
    inline ListMmsTablesResponseBodyDataObjectListSchemaPartitions& setComment(string comment) { DARABONBA_PTR_SET_VALUE(comment_, comment) };


    // defaultValue Field Functions 
    bool hasDefaultValue() const { return this->defaultValue_ != nullptr;};
    void deleteDefaultValue() { this->defaultValue_ = nullptr;};
    inline string defaultValue() const { DARABONBA_PTR_GET_DEFAULT(defaultValue_, "") };
    inline ListMmsTablesResponseBodyDataObjectListSchemaPartitions& setDefaultValue(string defaultValue) { DARABONBA_PTR_SET_VALUE(defaultValue_, defaultValue) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListMmsTablesResponseBodyDataObjectListSchemaPartitions& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // nullable Field Functions 
    bool hasNullable() const { return this->nullable_ != nullptr;};
    void deleteNullable() { this->nullable_ = nullptr;};
    inline bool nullable() const { DARABONBA_PTR_GET_DEFAULT(nullable_, false) };
    inline ListMmsTablesResponseBodyDataObjectListSchemaPartitions& setNullable(bool nullable) { DARABONBA_PTR_SET_VALUE(nullable_, nullable) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline ListMmsTablesResponseBodyDataObjectListSchemaPartitions& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    std::shared_ptr<string> comment_ = nullptr;
    std::shared_ptr<string> defaultValue_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<bool> nullable_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MaxCompute20220104
#endif
