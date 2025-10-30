// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEMETALISTRESPONSEBODYITEMS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEMETALISTRESPONSEBODYITEMS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class DescribeMetaListResponseBodyItems : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeMetaListResponseBodyItems& obj) { 
      DARABONBA_PTR_TO_JSON(Database, database_);
      DARABONBA_PTR_TO_JSON(Size, size_);
      DARABONBA_PTR_TO_JSON(Tables, tables_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeMetaListResponseBodyItems& obj) { 
      DARABONBA_PTR_FROM_JSON(Database, database_);
      DARABONBA_PTR_FROM_JSON(Size, size_);
      DARABONBA_PTR_FROM_JSON(Tables, tables_);
    };
    DescribeMetaListResponseBodyItems() = default ;
    DescribeMetaListResponseBodyItems(const DescribeMetaListResponseBodyItems &) = default ;
    DescribeMetaListResponseBodyItems(DescribeMetaListResponseBodyItems &&) = default ;
    DescribeMetaListResponseBodyItems(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeMetaListResponseBodyItems() = default ;
    DescribeMetaListResponseBodyItems& operator=(const DescribeMetaListResponseBodyItems &) = default ;
    DescribeMetaListResponseBodyItems& operator=(DescribeMetaListResponseBodyItems &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->database_ == nullptr
        && return this->size_ == nullptr && return this->tables_ == nullptr; };
    // database Field Functions 
    bool hasDatabase() const { return this->database_ != nullptr;};
    void deleteDatabase() { this->database_ = nullptr;};
    inline string database() const { DARABONBA_PTR_GET_DEFAULT(database_, "") };
    inline DescribeMetaListResponseBodyItems& setDatabase(string database) { DARABONBA_PTR_SET_VALUE(database_, database) };


    // size Field Functions 
    bool hasSize() const { return this->size_ != nullptr;};
    void deleteSize() { this->size_ = nullptr;};
    inline const vector<int64_t> & size() const { DARABONBA_PTR_GET_CONST(size_, vector<int64_t>) };
    inline vector<int64_t> size() { DARABONBA_PTR_GET(size_, vector<int64_t>) };
    inline DescribeMetaListResponseBodyItems& setSize(const vector<int64_t> & size) { DARABONBA_PTR_SET_VALUE(size_, size) };
    inline DescribeMetaListResponseBodyItems& setSize(vector<int64_t> && size) { DARABONBA_PTR_SET_RVALUE(size_, size) };


    // tables Field Functions 
    bool hasTables() const { return this->tables_ != nullptr;};
    void deleteTables() { this->tables_ = nullptr;};
    inline const vector<string> & tables() const { DARABONBA_PTR_GET_CONST(tables_, vector<string>) };
    inline vector<string> tables() { DARABONBA_PTR_GET(tables_, vector<string>) };
    inline DescribeMetaListResponseBodyItems& setTables(const vector<string> & tables) { DARABONBA_PTR_SET_VALUE(tables_, tables) };
    inline DescribeMetaListResponseBodyItems& setTables(vector<string> && tables) { DARABONBA_PTR_SET_RVALUE(tables_, tables) };


  protected:
    // The name of the database that can be restored.
    std::shared_ptr<string> database_ = nullptr;
    std::shared_ptr<vector<int64_t>> size_ = nullptr;
    // The name of the table that can be restored.
    std::shared_ptr<vector<string>> tables_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
