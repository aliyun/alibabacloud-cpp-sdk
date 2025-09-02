// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTMIGRATIONSRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTMIGRATIONSRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListMigrationsResponseBodyDataMigrations.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class ListMigrationsResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListMigrationsResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Migrations, migrations_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListMigrationsResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Migrations, migrations_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListMigrationsResponseBodyData() = default ;
    ListMigrationsResponseBodyData(const ListMigrationsResponseBodyData &) = default ;
    ListMigrationsResponseBodyData(ListMigrationsResponseBodyData &&) = default ;
    ListMigrationsResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListMigrationsResponseBodyData() = default ;
    ListMigrationsResponseBodyData& operator=(const ListMigrationsResponseBodyData &) = default ;
    ListMigrationsResponseBodyData& operator=(ListMigrationsResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->migrations_ != nullptr
        && this->pageNumber_ != nullptr && this->pageSize_ != nullptr && this->totalCount_ != nullptr; };
    // migrations Field Functions 
    bool hasMigrations() const { return this->migrations_ != nullptr;};
    void deleteMigrations() { this->migrations_ = nullptr;};
    inline const vector<Models::ListMigrationsResponseBodyDataMigrations> & migrations() const { DARABONBA_PTR_GET_CONST(migrations_, vector<Models::ListMigrationsResponseBodyDataMigrations>) };
    inline vector<Models::ListMigrationsResponseBodyDataMigrations> migrations() { DARABONBA_PTR_GET(migrations_, vector<Models::ListMigrationsResponseBodyDataMigrations>) };
    inline ListMigrationsResponseBodyData& setMigrations(const vector<Models::ListMigrationsResponseBodyDataMigrations> & migrations) { DARABONBA_PTR_SET_VALUE(migrations_, migrations) };
    inline ListMigrationsResponseBodyData& setMigrations(vector<Models::ListMigrationsResponseBodyDataMigrations> && migrations) { DARABONBA_PTR_SET_RVALUE(migrations_, migrations) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListMigrationsResponseBodyData& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListMigrationsResponseBodyData& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListMigrationsResponseBodyData& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The list of migration tasks.
    std::shared_ptr<vector<Models::ListMigrationsResponseBodyDataMigrations>> migrations_ = nullptr;
    // The page number.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of entries per page. Default value: 10. Maximum value: 50.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The total number of entries.
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
