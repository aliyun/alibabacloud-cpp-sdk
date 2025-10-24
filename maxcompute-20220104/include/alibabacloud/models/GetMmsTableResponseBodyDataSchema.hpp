// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMMSTABLERESPONSEBODYDATASCHEMA_HPP_
#define ALIBABACLOUD_MODELS_GETMMSTABLERESPONSEBODYDATASCHEMA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetMmsTableResponseBodyDataSchemaColumns.hpp>
#include <alibabacloud/models/GetMmsTableResponseBodyDataSchemaPartitions.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MaxCompute20220104
{
namespace Models
{
  class GetMmsTableResponseBodyDataSchema : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetMmsTableResponseBodyDataSchema& obj) { 
      DARABONBA_PTR_TO_JSON(columns, columns_);
      DARABONBA_PTR_TO_JSON(comment, comment_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(partitions, partitions_);
    };
    friend void from_json(const Darabonba::Json& j, GetMmsTableResponseBodyDataSchema& obj) { 
      DARABONBA_PTR_FROM_JSON(columns, columns_);
      DARABONBA_PTR_FROM_JSON(comment, comment_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(partitions, partitions_);
    };
    GetMmsTableResponseBodyDataSchema() = default ;
    GetMmsTableResponseBodyDataSchema(const GetMmsTableResponseBodyDataSchema &) = default ;
    GetMmsTableResponseBodyDataSchema(GetMmsTableResponseBodyDataSchema &&) = default ;
    GetMmsTableResponseBodyDataSchema(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetMmsTableResponseBodyDataSchema() = default ;
    GetMmsTableResponseBodyDataSchema& operator=(const GetMmsTableResponseBodyDataSchema &) = default ;
    GetMmsTableResponseBodyDataSchema& operator=(GetMmsTableResponseBodyDataSchema &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->columns_ == nullptr
        && return this->comment_ == nullptr && return this->name_ == nullptr && return this->partitions_ == nullptr; };
    // columns Field Functions 
    bool hasColumns() const { return this->columns_ != nullptr;};
    void deleteColumns() { this->columns_ = nullptr;};
    inline const vector<Models::GetMmsTableResponseBodyDataSchemaColumns> & columns() const { DARABONBA_PTR_GET_CONST(columns_, vector<Models::GetMmsTableResponseBodyDataSchemaColumns>) };
    inline vector<Models::GetMmsTableResponseBodyDataSchemaColumns> columns() { DARABONBA_PTR_GET(columns_, vector<Models::GetMmsTableResponseBodyDataSchemaColumns>) };
    inline GetMmsTableResponseBodyDataSchema& setColumns(const vector<Models::GetMmsTableResponseBodyDataSchemaColumns> & columns) { DARABONBA_PTR_SET_VALUE(columns_, columns) };
    inline GetMmsTableResponseBodyDataSchema& setColumns(vector<Models::GetMmsTableResponseBodyDataSchemaColumns> && columns) { DARABONBA_PTR_SET_RVALUE(columns_, columns) };


    // comment Field Functions 
    bool hasComment() const { return this->comment_ != nullptr;};
    void deleteComment() { this->comment_ = nullptr;};
    inline string comment() const { DARABONBA_PTR_GET_DEFAULT(comment_, "") };
    inline GetMmsTableResponseBodyDataSchema& setComment(string comment) { DARABONBA_PTR_SET_VALUE(comment_, comment) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GetMmsTableResponseBodyDataSchema& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // partitions Field Functions 
    bool hasPartitions() const { return this->partitions_ != nullptr;};
    void deletePartitions() { this->partitions_ = nullptr;};
    inline const vector<Models::GetMmsTableResponseBodyDataSchemaPartitions> & partitions() const { DARABONBA_PTR_GET_CONST(partitions_, vector<Models::GetMmsTableResponseBodyDataSchemaPartitions>) };
    inline vector<Models::GetMmsTableResponseBodyDataSchemaPartitions> partitions() { DARABONBA_PTR_GET(partitions_, vector<Models::GetMmsTableResponseBodyDataSchemaPartitions>) };
    inline GetMmsTableResponseBodyDataSchema& setPartitions(const vector<Models::GetMmsTableResponseBodyDataSchemaPartitions> & partitions) { DARABONBA_PTR_SET_VALUE(partitions_, partitions) };
    inline GetMmsTableResponseBodyDataSchema& setPartitions(vector<Models::GetMmsTableResponseBodyDataSchemaPartitions> && partitions) { DARABONBA_PTR_SET_RVALUE(partitions_, partitions) };


  protected:
    std::shared_ptr<vector<Models::GetMmsTableResponseBodyDataSchemaColumns>> columns_ = nullptr;
    std::shared_ptr<string> comment_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<vector<Models::GetMmsTableResponseBodyDataSchemaPartitions>> partitions_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MaxCompute20220104
#endif
