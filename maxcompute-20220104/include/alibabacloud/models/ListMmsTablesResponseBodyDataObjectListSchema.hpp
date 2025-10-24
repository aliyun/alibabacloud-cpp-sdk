// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTMMSTABLESRESPONSEBODYDATAOBJECTLISTSCHEMA_HPP_
#define ALIBABACLOUD_MODELS_LISTMMSTABLESRESPONSEBODYDATAOBJECTLISTSCHEMA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListMmsTablesResponseBodyDataObjectListSchemaColumns.hpp>
#include <alibabacloud/models/ListMmsTablesResponseBodyDataObjectListSchemaPartitions.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MaxCompute20220104
{
namespace Models
{
  class ListMmsTablesResponseBodyDataObjectListSchema : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListMmsTablesResponseBodyDataObjectListSchema& obj) { 
      DARABONBA_PTR_TO_JSON(columns, columns_);
      DARABONBA_PTR_TO_JSON(comment, comment_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(partitions, partitions_);
    };
    friend void from_json(const Darabonba::Json& j, ListMmsTablesResponseBodyDataObjectListSchema& obj) { 
      DARABONBA_PTR_FROM_JSON(columns, columns_);
      DARABONBA_PTR_FROM_JSON(comment, comment_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(partitions, partitions_);
    };
    ListMmsTablesResponseBodyDataObjectListSchema() = default ;
    ListMmsTablesResponseBodyDataObjectListSchema(const ListMmsTablesResponseBodyDataObjectListSchema &) = default ;
    ListMmsTablesResponseBodyDataObjectListSchema(ListMmsTablesResponseBodyDataObjectListSchema &&) = default ;
    ListMmsTablesResponseBodyDataObjectListSchema(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListMmsTablesResponseBodyDataObjectListSchema() = default ;
    ListMmsTablesResponseBodyDataObjectListSchema& operator=(const ListMmsTablesResponseBodyDataObjectListSchema &) = default ;
    ListMmsTablesResponseBodyDataObjectListSchema& operator=(ListMmsTablesResponseBodyDataObjectListSchema &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->columns_ == nullptr
        && return this->comment_ == nullptr && return this->name_ == nullptr && return this->partitions_ == nullptr; };
    // columns Field Functions 
    bool hasColumns() const { return this->columns_ != nullptr;};
    void deleteColumns() { this->columns_ = nullptr;};
    inline const vector<Models::ListMmsTablesResponseBodyDataObjectListSchemaColumns> & columns() const { DARABONBA_PTR_GET_CONST(columns_, vector<Models::ListMmsTablesResponseBodyDataObjectListSchemaColumns>) };
    inline vector<Models::ListMmsTablesResponseBodyDataObjectListSchemaColumns> columns() { DARABONBA_PTR_GET(columns_, vector<Models::ListMmsTablesResponseBodyDataObjectListSchemaColumns>) };
    inline ListMmsTablesResponseBodyDataObjectListSchema& setColumns(const vector<Models::ListMmsTablesResponseBodyDataObjectListSchemaColumns> & columns) { DARABONBA_PTR_SET_VALUE(columns_, columns) };
    inline ListMmsTablesResponseBodyDataObjectListSchema& setColumns(vector<Models::ListMmsTablesResponseBodyDataObjectListSchemaColumns> && columns) { DARABONBA_PTR_SET_RVALUE(columns_, columns) };


    // comment Field Functions 
    bool hasComment() const { return this->comment_ != nullptr;};
    void deleteComment() { this->comment_ = nullptr;};
    inline string comment() const { DARABONBA_PTR_GET_DEFAULT(comment_, "") };
    inline ListMmsTablesResponseBodyDataObjectListSchema& setComment(string comment) { DARABONBA_PTR_SET_VALUE(comment_, comment) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListMmsTablesResponseBodyDataObjectListSchema& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // partitions Field Functions 
    bool hasPartitions() const { return this->partitions_ != nullptr;};
    void deletePartitions() { this->partitions_ = nullptr;};
    inline const vector<Models::ListMmsTablesResponseBodyDataObjectListSchemaPartitions> & partitions() const { DARABONBA_PTR_GET_CONST(partitions_, vector<Models::ListMmsTablesResponseBodyDataObjectListSchemaPartitions>) };
    inline vector<Models::ListMmsTablesResponseBodyDataObjectListSchemaPartitions> partitions() { DARABONBA_PTR_GET(partitions_, vector<Models::ListMmsTablesResponseBodyDataObjectListSchemaPartitions>) };
    inline ListMmsTablesResponseBodyDataObjectListSchema& setPartitions(const vector<Models::ListMmsTablesResponseBodyDataObjectListSchemaPartitions> & partitions) { DARABONBA_PTR_SET_VALUE(partitions_, partitions) };
    inline ListMmsTablesResponseBodyDataObjectListSchema& setPartitions(vector<Models::ListMmsTablesResponseBodyDataObjectListSchemaPartitions> && partitions) { DARABONBA_PTR_SET_RVALUE(partitions_, partitions) };


  protected:
    std::shared_ptr<vector<Models::ListMmsTablesResponseBodyDataObjectListSchemaColumns>> columns_ = nullptr;
    std::shared_ptr<string> comment_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<vector<Models::ListMmsTablesResponseBodyDataObjectListSchemaPartitions>> partitions_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MaxCompute20220104
#endif
