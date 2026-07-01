// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAGENTICDBCOMPUTECLUSTERSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAGENTICDBCOMPUTECLUSTERSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class DescribeAgenticDBComputeClustersRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAgenticDBComputeClustersRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ComputeClusterId, computeClusterId_);
      DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAgenticDBComputeClustersRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ComputeClusterId, computeClusterId_);
      DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    DescribeAgenticDBComputeClustersRequest() = default ;
    DescribeAgenticDBComputeClustersRequest(const DescribeAgenticDBComputeClustersRequest &) = default ;
    DescribeAgenticDBComputeClustersRequest(DescribeAgenticDBComputeClustersRequest &&) = default ;
    DescribeAgenticDBComputeClustersRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAgenticDBComputeClustersRequest() = default ;
    DescribeAgenticDBComputeClustersRequest& operator=(const DescribeAgenticDBComputeClustersRequest &) = default ;
    DescribeAgenticDBComputeClustersRequest& operator=(DescribeAgenticDBComputeClustersRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->computeClusterId_ == nullptr
        && this->DBClusterId_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->regionId_ == nullptr && this->status_ == nullptr; };
    // computeClusterId Field Functions 
    bool hasComputeClusterId() const { return this->computeClusterId_ != nullptr;};
    void deleteComputeClusterId() { this->computeClusterId_ = nullptr;};
    inline string getComputeClusterId() const { DARABONBA_PTR_GET_DEFAULT(computeClusterId_, "") };
    inline DescribeAgenticDBComputeClustersRequest& setComputeClusterId(string computeClusterId) { DARABONBA_PTR_SET_VALUE(computeClusterId_, computeClusterId) };


    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string getDBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline DescribeAgenticDBComputeClustersRequest& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeAgenticDBComputeClustersRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeAgenticDBComputeClustersRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeAgenticDBComputeClustersRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeAgenticDBComputeClustersRequest& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    shared_ptr<string> computeClusterId_ {};
    // This parameter is required.
    shared_ptr<string> DBClusterId_ {};
    shared_ptr<int32_t> pageNumber_ {};
    shared_ptr<int32_t> pageSize_ {};
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    shared_ptr<string> status_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
