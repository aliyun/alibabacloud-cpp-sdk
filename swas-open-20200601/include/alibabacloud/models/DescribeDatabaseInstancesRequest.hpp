// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDATABASEINSTANCESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDATABASEINSTANCESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace SWASOPEN20200601
{
namespace Models
{
  class DescribeDatabaseInstancesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDatabaseInstancesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DatabaseInstanceIds, databaseInstanceIds_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDatabaseInstancesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DatabaseInstanceIds, databaseInstanceIds_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    DescribeDatabaseInstancesRequest() = default ;
    DescribeDatabaseInstancesRequest(const DescribeDatabaseInstancesRequest &) = default ;
    DescribeDatabaseInstancesRequest(DescribeDatabaseInstancesRequest &&) = default ;
    DescribeDatabaseInstancesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDatabaseInstancesRequest() = default ;
    DescribeDatabaseInstancesRequest& operator=(const DescribeDatabaseInstancesRequest &) = default ;
    DescribeDatabaseInstancesRequest& operator=(DescribeDatabaseInstancesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->databaseInstanceIds_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->regionId_ == nullptr; };
    // databaseInstanceIds Field Functions 
    bool hasDatabaseInstanceIds() const { return this->databaseInstanceIds_ != nullptr;};
    void deleteDatabaseInstanceIds() { this->databaseInstanceIds_ = nullptr;};
    inline string getDatabaseInstanceIds() const { DARABONBA_PTR_GET_DEFAULT(databaseInstanceIds_, "") };
    inline DescribeDatabaseInstancesRequest& setDatabaseInstanceIds(string databaseInstanceIds) { DARABONBA_PTR_SET_VALUE(databaseInstanceIds_, databaseInstanceIds) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeDatabaseInstancesRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeDatabaseInstancesRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeDatabaseInstancesRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The IDs of the lightweight database instances. The value can be a JSON array that consists of multiple instance IDs. You can specify up to 100 instance IDs. Separate multiple IDs with commas (,).
    shared_ptr<string> databaseInstanceIds_ {};
    // The page number of the lightweight database instance list.
    // 
    // Starting value: 1.
    // 
    // Default value: 1.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries per page for a paged query.
    // 
    // Maximum value: 100.
    // 
    // Default value: 10.
    shared_ptr<int32_t> pageSize_ {};
    // The region ID of the lightweight database instance.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace SWASOPEN20200601
#endif
