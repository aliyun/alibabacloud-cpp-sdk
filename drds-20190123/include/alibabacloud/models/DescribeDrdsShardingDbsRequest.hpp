// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDRDSSHARDINGDBSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDRDSSHARDINGDBSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Drds20190123
{
namespace Models
{
  class DescribeDrdsShardingDbsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDrdsShardingDbsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DbName, dbName_);
      DARABONBA_PTR_TO_JSON(DbNamePattern, dbNamePattern_);
      DARABONBA_PTR_TO_JSON(DrdsInstanceId, drdsInstanceId_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDrdsShardingDbsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DbName, dbName_);
      DARABONBA_PTR_FROM_JSON(DbNamePattern, dbNamePattern_);
      DARABONBA_PTR_FROM_JSON(DrdsInstanceId, drdsInstanceId_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
    };
    DescribeDrdsShardingDbsRequest() = default ;
    DescribeDrdsShardingDbsRequest(const DescribeDrdsShardingDbsRequest &) = default ;
    DescribeDrdsShardingDbsRequest(DescribeDrdsShardingDbsRequest &&) = default ;
    DescribeDrdsShardingDbsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDrdsShardingDbsRequest() = default ;
    DescribeDrdsShardingDbsRequest& operator=(const DescribeDrdsShardingDbsRequest &) = default ;
    DescribeDrdsShardingDbsRequest& operator=(DescribeDrdsShardingDbsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->dbName_ != nullptr
        && this->dbNamePattern_ != nullptr && this->drdsInstanceId_ != nullptr && this->pageNumber_ != nullptr && this->pageSize_ != nullptr; };
    // dbName Field Functions 
    bool hasDbName() const { return this->dbName_ != nullptr;};
    void deleteDbName() { this->dbName_ = nullptr;};
    inline string dbName() const { DARABONBA_PTR_GET_DEFAULT(dbName_, "") };
    inline DescribeDrdsShardingDbsRequest& setDbName(string dbName) { DARABONBA_PTR_SET_VALUE(dbName_, dbName) };


    // dbNamePattern Field Functions 
    bool hasDbNamePattern() const { return this->dbNamePattern_ != nullptr;};
    void deleteDbNamePattern() { this->dbNamePattern_ = nullptr;};
    inline string dbNamePattern() const { DARABONBA_PTR_GET_DEFAULT(dbNamePattern_, "") };
    inline DescribeDrdsShardingDbsRequest& setDbNamePattern(string dbNamePattern) { DARABONBA_PTR_SET_VALUE(dbNamePattern_, dbNamePattern) };


    // drdsInstanceId Field Functions 
    bool hasDrdsInstanceId() const { return this->drdsInstanceId_ != nullptr;};
    void deleteDrdsInstanceId() { this->drdsInstanceId_ = nullptr;};
    inline string drdsInstanceId() const { DARABONBA_PTR_GET_DEFAULT(drdsInstanceId_, "") };
    inline DescribeDrdsShardingDbsRequest& setDrdsInstanceId(string drdsInstanceId) { DARABONBA_PTR_SET_VALUE(drdsInstanceId_, drdsInstanceId) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int64_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0L) };
    inline DescribeDrdsShardingDbsRequest& setPageNumber(int64_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline DescribeDrdsShardingDbsRequest& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


  protected:
    // The name of the database whose shards you want to query.
    // 
    // This parameter is required.
    std::shared_ptr<string> dbName_ = nullptr;
    // The matching pattern of the database name.
    std::shared_ptr<string> dbNamePattern_ = nullptr;
    // The ID of the PolarDB-X 1.0 instance whose database shards you want to query.
    // 
    // This parameter is required.
    std::shared_ptr<string> drdsInstanceId_ = nullptr;
    // The page number of the returned page.
    std::shared_ptr<int64_t> pageNumber_ = nullptr;
    // The number of database shards returned on each page.
    std::shared_ptr<int64_t> pageSize_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Drds20190123
#endif
