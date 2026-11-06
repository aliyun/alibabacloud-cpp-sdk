// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEKVCACHEINSTANCESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEKVCACHEINSTANCESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class DescribeKVCacheInstancesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeKVCacheInstancesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(KVCacheInstanceDescription, KVCacheInstanceDescription_);
      DARABONBA_PTR_TO_JSON(KVCacheInstanceIds, KVCacheInstanceIds_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RelativeDBClusterId, relativeDBClusterId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeKVCacheInstancesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(KVCacheInstanceDescription, KVCacheInstanceDescription_);
      DARABONBA_PTR_FROM_JSON(KVCacheInstanceIds, KVCacheInstanceIds_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RelativeDBClusterId, relativeDBClusterId_);
    };
    DescribeKVCacheInstancesRequest() = default ;
    DescribeKVCacheInstancesRequest(const DescribeKVCacheInstancesRequest &) = default ;
    DescribeKVCacheInstancesRequest(DescribeKVCacheInstancesRequest &&) = default ;
    DescribeKVCacheInstancesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeKVCacheInstancesRequest() = default ;
    DescribeKVCacheInstancesRequest& operator=(const DescribeKVCacheInstancesRequest &) = default ;
    DescribeKVCacheInstancesRequest& operator=(DescribeKVCacheInstancesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->KVCacheInstanceDescription_ == nullptr
        && this->KVCacheInstanceIds_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->regionId_ == nullptr && this->relativeDBClusterId_ == nullptr; };
    // KVCacheInstanceDescription Field Functions 
    bool hasKVCacheInstanceDescription() const { return this->KVCacheInstanceDescription_ != nullptr;};
    void deleteKVCacheInstanceDescription() { this->KVCacheInstanceDescription_ = nullptr;};
    inline string getKVCacheInstanceDescription() const { DARABONBA_PTR_GET_DEFAULT(KVCacheInstanceDescription_, "") };
    inline DescribeKVCacheInstancesRequest& setKVCacheInstanceDescription(string KVCacheInstanceDescription) { DARABONBA_PTR_SET_VALUE(KVCacheInstanceDescription_, KVCacheInstanceDescription) };


    // KVCacheInstanceIds Field Functions 
    bool hasKVCacheInstanceIds() const { return this->KVCacheInstanceIds_ != nullptr;};
    void deleteKVCacheInstanceIds() { this->KVCacheInstanceIds_ = nullptr;};
    inline string getKVCacheInstanceIds() const { DARABONBA_PTR_GET_DEFAULT(KVCacheInstanceIds_, "") };
    inline DescribeKVCacheInstancesRequest& setKVCacheInstanceIds(string KVCacheInstanceIds) { DARABONBA_PTR_SET_VALUE(KVCacheInstanceIds_, KVCacheInstanceIds) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeKVCacheInstancesRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeKVCacheInstancesRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeKVCacheInstancesRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // relativeDBClusterId Field Functions 
    bool hasRelativeDBClusterId() const { return this->relativeDBClusterId_ != nullptr;};
    void deleteRelativeDBClusterId() { this->relativeDBClusterId_ = nullptr;};
    inline string getRelativeDBClusterId() const { DARABONBA_PTR_GET_DEFAULT(relativeDBClusterId_, "") };
    inline DescribeKVCacheInstancesRequest& setRelativeDBClusterId(string relativeDBClusterId) { DARABONBA_PTR_SET_VALUE(relativeDBClusterId_, relativeDBClusterId) };


  protected:
    // The description of the KVCache instance.
    shared_ptr<string> KVCacheInstanceDescription_ {};
    // The KVCache instance IDs. Separate multiple instance IDs with commas (,).
    shared_ptr<string> KVCacheInstanceIds_ {};
    // The page number.
    shared_ptr<int32_t> pageNumber_ {};
    // The page size.
    shared_ptr<int32_t> pageSize_ {};
    // The region ID.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // The instance ID of the associated PolarDB instance.
    shared_ptr<string> relativeDBClusterId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
