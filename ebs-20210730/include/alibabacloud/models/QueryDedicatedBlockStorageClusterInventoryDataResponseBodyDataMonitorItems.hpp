// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYDEDICATEDBLOCKSTORAGECLUSTERINVENTORYDATARESPONSEBODYDATAMONITORITEMS_HPP_
#define ALIBABACLOUD_MODELS_QUERYDEDICATEDBLOCKSTORAGECLUSTERINVENTORYDATARESPONSEBODYDATAMONITORITEMS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ebs20210730
{
namespace Models
{
  class QueryDedicatedBlockStorageClusterInventoryDataResponseBodyDataMonitorItems : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryDedicatedBlockStorageClusterInventoryDataResponseBodyDataMonitorItems& obj) { 
      DARABONBA_PTR_TO_JSON(AvailableSize, availableSize_);
      DARABONBA_PTR_TO_JSON(TotalSize, totalSize_);
    };
    friend void from_json(const Darabonba::Json& j, QueryDedicatedBlockStorageClusterInventoryDataResponseBodyDataMonitorItems& obj) { 
      DARABONBA_PTR_FROM_JSON(AvailableSize, availableSize_);
      DARABONBA_PTR_FROM_JSON(TotalSize, totalSize_);
    };
    QueryDedicatedBlockStorageClusterInventoryDataResponseBodyDataMonitorItems() = default ;
    QueryDedicatedBlockStorageClusterInventoryDataResponseBodyDataMonitorItems(const QueryDedicatedBlockStorageClusterInventoryDataResponseBodyDataMonitorItems &) = default ;
    QueryDedicatedBlockStorageClusterInventoryDataResponseBodyDataMonitorItems(QueryDedicatedBlockStorageClusterInventoryDataResponseBodyDataMonitorItems &&) = default ;
    QueryDedicatedBlockStorageClusterInventoryDataResponseBodyDataMonitorItems(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryDedicatedBlockStorageClusterInventoryDataResponseBodyDataMonitorItems() = default ;
    QueryDedicatedBlockStorageClusterInventoryDataResponseBodyDataMonitorItems& operator=(const QueryDedicatedBlockStorageClusterInventoryDataResponseBodyDataMonitorItems &) = default ;
    QueryDedicatedBlockStorageClusterInventoryDataResponseBodyDataMonitorItems& operator=(QueryDedicatedBlockStorageClusterInventoryDataResponseBodyDataMonitorItems &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->availableSize_ == nullptr
        && return this->totalSize_ == nullptr; };
    // availableSize Field Functions 
    bool hasAvailableSize() const { return this->availableSize_ != nullptr;};
    void deleteAvailableSize() { this->availableSize_ = nullptr;};
    inline int64_t availableSize() const { DARABONBA_PTR_GET_DEFAULT(availableSize_, 0L) };
    inline QueryDedicatedBlockStorageClusterInventoryDataResponseBodyDataMonitorItems& setAvailableSize(int64_t availableSize) { DARABONBA_PTR_SET_VALUE(availableSize_, availableSize) };


    // totalSize Field Functions 
    bool hasTotalSize() const { return this->totalSize_ != nullptr;};
    void deleteTotalSize() { this->totalSize_ = nullptr;};
    inline int64_t totalSize() const { DARABONBA_PTR_GET_DEFAULT(totalSize_, 0L) };
    inline QueryDedicatedBlockStorageClusterInventoryDataResponseBodyDataMonitorItems& setTotalSize(int64_t totalSize) { DARABONBA_PTR_SET_VALUE(totalSize_, totalSize) };


  protected:
    // Available capacity size of the dedicated block storage cluster.
    std::shared_ptr<int64_t> availableSize_ = nullptr;
    // Total capacity size of the dedicated block storage cluster.
    std::shared_ptr<int64_t> totalSize_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ebs20210730
#endif
