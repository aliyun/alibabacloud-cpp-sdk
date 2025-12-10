// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DBSTORAGERANK_HPP_
#define ALIBABACLOUD_MODELS_DBSTORAGERANK_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataLake20200710
{
namespace Models
{
  class DbStorageRank : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DbStorageRank& obj) { 
      DARABONBA_PTR_TO_JSON(DbName, dbName_);
      DARABONBA_PTR_TO_JSON(Quantity, quantity_);
    };
    friend void from_json(const Darabonba::Json& j, DbStorageRank& obj) { 
      DARABONBA_PTR_FROM_JSON(DbName, dbName_);
      DARABONBA_PTR_FROM_JSON(Quantity, quantity_);
    };
    DbStorageRank() = default ;
    DbStorageRank(const DbStorageRank &) = default ;
    DbStorageRank(DbStorageRank &&) = default ;
    DbStorageRank(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DbStorageRank() = default ;
    DbStorageRank& operator=(const DbStorageRank &) = default ;
    DbStorageRank& operator=(DbStorageRank &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dbName_ == nullptr
        && return this->quantity_ == nullptr; };
    // dbName Field Functions 
    bool hasDbName() const { return this->dbName_ != nullptr;};
    void deleteDbName() { this->dbName_ = nullptr;};
    inline string dbName() const { DARABONBA_PTR_GET_DEFAULT(dbName_, "") };
    inline DbStorageRank& setDbName(string dbName) { DARABONBA_PTR_SET_VALUE(dbName_, dbName) };


    // quantity Field Functions 
    bool hasQuantity() const { return this->quantity_ != nullptr;};
    void deleteQuantity() { this->quantity_ = nullptr;};
    inline int64_t quantity() const { DARABONBA_PTR_GET_DEFAULT(quantity_, 0L) };
    inline DbStorageRank& setQuantity(int64_t quantity) { DARABONBA_PTR_SET_VALUE(quantity_, quantity) };


  protected:
    std::shared_ptr<string> dbName_ = nullptr;
    std::shared_ptr<int64_t> quantity_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataLake20200710
#endif
