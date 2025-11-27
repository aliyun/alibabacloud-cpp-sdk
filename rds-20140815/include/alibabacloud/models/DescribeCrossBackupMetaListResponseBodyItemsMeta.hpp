// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECROSSBACKUPMETALISTRESPONSEBODYITEMSMETA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECROSSBACKUPMETALISTRESPONSEBODYITEMSMETA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class DescribeCrossBackupMetaListResponseBodyItemsMeta : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCrossBackupMetaListResponseBodyItemsMeta& obj) { 
      DARABONBA_PTR_TO_JSON(Database, database_);
      DARABONBA_PTR_TO_JSON(Size, size_);
      DARABONBA_PTR_TO_JSON(Tables, tables_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCrossBackupMetaListResponseBodyItemsMeta& obj) { 
      DARABONBA_PTR_FROM_JSON(Database, database_);
      DARABONBA_PTR_FROM_JSON(Size, size_);
      DARABONBA_PTR_FROM_JSON(Tables, tables_);
    };
    DescribeCrossBackupMetaListResponseBodyItemsMeta() = default ;
    DescribeCrossBackupMetaListResponseBodyItemsMeta(const DescribeCrossBackupMetaListResponseBodyItemsMeta &) = default ;
    DescribeCrossBackupMetaListResponseBodyItemsMeta(DescribeCrossBackupMetaListResponseBodyItemsMeta &&) = default ;
    DescribeCrossBackupMetaListResponseBodyItemsMeta(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCrossBackupMetaListResponseBodyItemsMeta() = default ;
    DescribeCrossBackupMetaListResponseBodyItemsMeta& operator=(const DescribeCrossBackupMetaListResponseBodyItemsMeta &) = default ;
    DescribeCrossBackupMetaListResponseBodyItemsMeta& operator=(DescribeCrossBackupMetaListResponseBodyItemsMeta &&) = default ;
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
    inline DescribeCrossBackupMetaListResponseBodyItemsMeta& setDatabase(string database) { DARABONBA_PTR_SET_VALUE(database_, database) };


    // size Field Functions 
    bool hasSize() const { return this->size_ != nullptr;};
    void deleteSize() { this->size_ = nullptr;};
    inline string size() const { DARABONBA_PTR_GET_DEFAULT(size_, "") };
    inline DescribeCrossBackupMetaListResponseBodyItemsMeta& setSize(string size) { DARABONBA_PTR_SET_VALUE(size_, size) };


    // tables Field Functions 
    bool hasTables() const { return this->tables_ != nullptr;};
    void deleteTables() { this->tables_ = nullptr;};
    inline string tables() const { DARABONBA_PTR_GET_DEFAULT(tables_, "") };
    inline DescribeCrossBackupMetaListResponseBodyItemsMeta& setTables(string tables) { DARABONBA_PTR_SET_VALUE(tables_, tables) };


  protected:
    // The name of the database.
    std::shared_ptr<string> database_ = nullptr;
    // The size of the table. Unit: KB. If the database contains more than one table, the names of these tables are separated by commas (,).
    std::shared_ptr<string> size_ = nullptr;
    // An array that consists of the names of the tables that the database contains. If the database contains more than one table, the names of these tables are separated by commas (,).
    std::shared_ptr<string> tables_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
