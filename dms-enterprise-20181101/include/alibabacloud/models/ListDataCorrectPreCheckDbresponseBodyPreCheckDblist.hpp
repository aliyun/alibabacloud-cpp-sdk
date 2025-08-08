// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDATACORRECTPRECHECKDBRESPONSEBODYPRECHECKDBLIST_HPP_
#define ALIBABACLOUD_MODELS_LISTDATACORRECTPRECHECKDBRESPONSEBODYPRECHECKDBLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class ListDataCorrectPreCheckDBResponseBodyPreCheckDBList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDataCorrectPreCheckDBResponseBodyPreCheckDBList& obj) { 
      DARABONBA_PTR_TO_JSON(DbId, dbId_);
      DARABONBA_PTR_TO_JSON(SearchName, searchName_);
      DARABONBA_PTR_TO_JSON(SqlNum, sqlNum_);
    };
    friend void from_json(const Darabonba::Json& j, ListDataCorrectPreCheckDBResponseBodyPreCheckDBList& obj) { 
      DARABONBA_PTR_FROM_JSON(DbId, dbId_);
      DARABONBA_PTR_FROM_JSON(SearchName, searchName_);
      DARABONBA_PTR_FROM_JSON(SqlNum, sqlNum_);
    };
    ListDataCorrectPreCheckDBResponseBodyPreCheckDBList() = default ;
    ListDataCorrectPreCheckDBResponseBodyPreCheckDBList(const ListDataCorrectPreCheckDBResponseBodyPreCheckDBList &) = default ;
    ListDataCorrectPreCheckDBResponseBodyPreCheckDBList(ListDataCorrectPreCheckDBResponseBodyPreCheckDBList &&) = default ;
    ListDataCorrectPreCheckDBResponseBodyPreCheckDBList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDataCorrectPreCheckDBResponseBodyPreCheckDBList() = default ;
    ListDataCorrectPreCheckDBResponseBodyPreCheckDBList& operator=(const ListDataCorrectPreCheckDBResponseBodyPreCheckDBList &) = default ;
    ListDataCorrectPreCheckDBResponseBodyPreCheckDBList& operator=(ListDataCorrectPreCheckDBResponseBodyPreCheckDBList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->dbId_ != nullptr
        && this->searchName_ != nullptr && this->sqlNum_ != nullptr; };
    // dbId Field Functions 
    bool hasDbId() const { return this->dbId_ != nullptr;};
    void deleteDbId() { this->dbId_ = nullptr;};
    inline int64_t dbId() const { DARABONBA_PTR_GET_DEFAULT(dbId_, 0L) };
    inline ListDataCorrectPreCheckDBResponseBodyPreCheckDBList& setDbId(int64_t dbId) { DARABONBA_PTR_SET_VALUE(dbId_, dbId) };


    // searchName Field Functions 
    bool hasSearchName() const { return this->searchName_ != nullptr;};
    void deleteSearchName() { this->searchName_ = nullptr;};
    inline string searchName() const { DARABONBA_PTR_GET_DEFAULT(searchName_, "") };
    inline ListDataCorrectPreCheckDBResponseBodyPreCheckDBList& setSearchName(string searchName) { DARABONBA_PTR_SET_VALUE(searchName_, searchName) };


    // sqlNum Field Functions 
    bool hasSqlNum() const { return this->sqlNum_ != nullptr;};
    void deleteSqlNum() { this->sqlNum_ = nullptr;};
    inline int64_t sqlNum() const { DARABONBA_PTR_GET_DEFAULT(sqlNum_, 0L) };
    inline ListDataCorrectPreCheckDBResponseBodyPreCheckDBList& setSqlNum(int64_t sqlNum) { DARABONBA_PTR_SET_VALUE(sqlNum_, sqlNum) };


  protected:
    // The ID of the database.
    std::shared_ptr<int64_t> dbId_ = nullptr;
    // The name of the database.
    std::shared_ptr<string> searchName_ = nullptr;
    // The number of SQL statements.
    std::shared_ptr<int64_t> sqlNum_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
