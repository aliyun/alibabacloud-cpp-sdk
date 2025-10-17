// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELAKECACHESIZERESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELAKECACHESIZERESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class DescribeLakeCacheSizeResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLakeCacheSizeResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Capacity, capacity_);
      DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_TO_JSON(DataSize, dataSize_);
      DARABONBA_PTR_TO_JSON(EnableLakeCache, enableLakeCache_);
      DARABONBA_PTR_TO_JSON(Instances, instances_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLakeCacheSizeResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Capacity, capacity_);
      DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_FROM_JSON(DataSize, dataSize_);
      DARABONBA_PTR_FROM_JSON(EnableLakeCache, enableLakeCache_);
      DARABONBA_PTR_FROM_JSON(Instances, instances_);
    };
    DescribeLakeCacheSizeResponseBodyData() = default ;
    DescribeLakeCacheSizeResponseBodyData(const DescribeLakeCacheSizeResponseBodyData &) = default ;
    DescribeLakeCacheSizeResponseBodyData(DescribeLakeCacheSizeResponseBodyData &&) = default ;
    DescribeLakeCacheSizeResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLakeCacheSizeResponseBodyData() = default ;
    DescribeLakeCacheSizeResponseBodyData& operator=(const DescribeLakeCacheSizeResponseBodyData &) = default ;
    DescribeLakeCacheSizeResponseBodyData& operator=(DescribeLakeCacheSizeResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->capacity_ == nullptr
        && return this->DBClusterId_ == nullptr && return this->dataSize_ == nullptr && return this->enableLakeCache_ == nullptr && return this->instances_ == nullptr; };
    // capacity Field Functions 
    bool hasCapacity() const { return this->capacity_ != nullptr;};
    void deleteCapacity() { this->capacity_ = nullptr;};
    inline int64_t capacity() const { DARABONBA_PTR_GET_DEFAULT(capacity_, 0L) };
    inline DescribeLakeCacheSizeResponseBodyData& setCapacity(int64_t capacity) { DARABONBA_PTR_SET_VALUE(capacity_, capacity) };


    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string DBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline DescribeLakeCacheSizeResponseBodyData& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


    // dataSize Field Functions 
    bool hasDataSize() const { return this->dataSize_ != nullptr;};
    void deleteDataSize() { this->dataSize_ = nullptr;};
    inline int64_t dataSize() const { DARABONBA_PTR_GET_DEFAULT(dataSize_, 0L) };
    inline DescribeLakeCacheSizeResponseBodyData& setDataSize(int64_t dataSize) { DARABONBA_PTR_SET_VALUE(dataSize_, dataSize) };


    // enableLakeCache Field Functions 
    bool hasEnableLakeCache() const { return this->enableLakeCache_ != nullptr;};
    void deleteEnableLakeCache() { this->enableLakeCache_ = nullptr;};
    inline bool enableLakeCache() const { DARABONBA_PTR_GET_DEFAULT(enableLakeCache_, false) };
    inline DescribeLakeCacheSizeResponseBodyData& setEnableLakeCache(bool enableLakeCache) { DARABONBA_PTR_SET_VALUE(enableLakeCache_, enableLakeCache) };


    // instances Field Functions 
    bool hasInstances() const { return this->instances_ != nullptr;};
    void deleteInstances() { this->instances_ = nullptr;};
    inline const vector<string> & instances() const { DARABONBA_PTR_GET_CONST(instances_, vector<string>) };
    inline vector<string> instances() { DARABONBA_PTR_GET(instances_, vector<string>) };
    inline DescribeLakeCacheSizeResponseBodyData& setInstances(const vector<string> & instances) { DARABONBA_PTR_SET_VALUE(instances_, instances) };
    inline DescribeLakeCacheSizeResponseBodyData& setInstances(vector<string> && instances) { DARABONBA_PTR_SET_RVALUE(instances_, instances) };


  protected:
    // The size of the lake cache space. Unit: GB.
    std::shared_ptr<int64_t> capacity_ = nullptr;
    // The cluster ID.
    std::shared_ptr<string> DBClusterId_ = nullptr;
    // The size of the data that occupies the lake cache space. Unit: GB.
    std::shared_ptr<int64_t> dataSize_ = nullptr;
    // Indicates whether the lake cache feature is enabled.
    std::shared_ptr<bool> enableLakeCache_ = nullptr;
    // The clusters that share the lake cache space.
    std::shared_ptr<vector<string>> instances_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
