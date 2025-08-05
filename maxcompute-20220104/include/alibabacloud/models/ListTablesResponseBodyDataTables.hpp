// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTABLESRESPONSEBODYDATATABLES_HPP_
#define ALIBABACLOUD_MODELS_LISTTABLESRESPONSEBODYDATATABLES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MaxCompute20220104
{
namespace Models
{
  class ListTablesResponseBodyDataTables : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTablesResponseBodyDataTables& obj) { 
      DARABONBA_PTR_TO_JSON(creationTime, creationTime_);
      DARABONBA_PTR_TO_JSON(displayName, displayName_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(owner, owner_);
      DARABONBA_PTR_TO_JSON(schema, schema_);
      DARABONBA_PTR_TO_JSON(type, type_);
    };
    friend void from_json(const Darabonba::Json& j, ListTablesResponseBodyDataTables& obj) { 
      DARABONBA_PTR_FROM_JSON(creationTime, creationTime_);
      DARABONBA_PTR_FROM_JSON(displayName, displayName_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(owner, owner_);
      DARABONBA_PTR_FROM_JSON(schema, schema_);
      DARABONBA_PTR_FROM_JSON(type, type_);
    };
    ListTablesResponseBodyDataTables() = default ;
    ListTablesResponseBodyDataTables(const ListTablesResponseBodyDataTables &) = default ;
    ListTablesResponseBodyDataTables(ListTablesResponseBodyDataTables &&) = default ;
    ListTablesResponseBodyDataTables(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTablesResponseBodyDataTables() = default ;
    ListTablesResponseBodyDataTables& operator=(const ListTablesResponseBodyDataTables &) = default ;
    ListTablesResponseBodyDataTables& operator=(ListTablesResponseBodyDataTables &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->creationTime_ != nullptr
        && this->displayName_ != nullptr && this->name_ != nullptr && this->owner_ != nullptr && this->schema_ != nullptr && this->type_ != nullptr; };
    // creationTime Field Functions 
    bool hasCreationTime() const { return this->creationTime_ != nullptr;};
    void deleteCreationTime() { this->creationTime_ = nullptr;};
    inline int64_t creationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, 0L) };
    inline ListTablesResponseBodyDataTables& setCreationTime(int64_t creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


    // displayName Field Functions 
    bool hasDisplayName() const { return this->displayName_ != nullptr;};
    void deleteDisplayName() { this->displayName_ = nullptr;};
    inline string displayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
    inline ListTablesResponseBodyDataTables& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListTablesResponseBodyDataTables& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // owner Field Functions 
    bool hasOwner() const { return this->owner_ != nullptr;};
    void deleteOwner() { this->owner_ = nullptr;};
    inline string owner() const { DARABONBA_PTR_GET_DEFAULT(owner_, "") };
    inline ListTablesResponseBodyDataTables& setOwner(string owner) { DARABONBA_PTR_SET_VALUE(owner_, owner) };


    // schema Field Functions 
    bool hasSchema() const { return this->schema_ != nullptr;};
    void deleteSchema() { this->schema_ = nullptr;};
    inline string schema() const { DARABONBA_PTR_GET_DEFAULT(schema_, "") };
    inline ListTablesResponseBodyDataTables& setSchema(string schema) { DARABONBA_PTR_SET_VALUE(schema_, schema) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline ListTablesResponseBodyDataTables& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The time when the table was created.
    std::shared_ptr<int64_t> creationTime_ = nullptr;
    // The display name of the table.
    std::shared_ptr<string> displayName_ = nullptr;
    // The name of the table.
    std::shared_ptr<string> name_ = nullptr;
    // The owner of the table.
    std::shared_ptr<string> owner_ = nullptr;
    // The schema to which the table belongs.
    std::shared_ptr<string> schema_ = nullptr;
    // The type of the table.
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MaxCompute20220104
#endif
