// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYLAKECACHESIZEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYLAKECACHESIZEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class ModifyLakeCacheSizeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyLakeCacheSizeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Capacity, capacity_);
      DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_TO_JSON(EnableLakeCache, enableLakeCache_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyLakeCacheSizeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Capacity, capacity_);
      DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_FROM_JSON(EnableLakeCache, enableLakeCache_);
    };
    ModifyLakeCacheSizeRequest() = default ;
    ModifyLakeCacheSizeRequest(const ModifyLakeCacheSizeRequest &) = default ;
    ModifyLakeCacheSizeRequest(ModifyLakeCacheSizeRequest &&) = default ;
    ModifyLakeCacheSizeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyLakeCacheSizeRequest() = default ;
    ModifyLakeCacheSizeRequest& operator=(const ModifyLakeCacheSizeRequest &) = default ;
    ModifyLakeCacheSizeRequest& operator=(ModifyLakeCacheSizeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->capacity_ == nullptr
        && return this->DBClusterId_ == nullptr && return this->enableLakeCache_ == nullptr; };
    // capacity Field Functions 
    bool hasCapacity() const { return this->capacity_ != nullptr;};
    void deleteCapacity() { this->capacity_ = nullptr;};
    inline int64_t capacity() const { DARABONBA_PTR_GET_DEFAULT(capacity_, 0L) };
    inline ModifyLakeCacheSizeRequest& setCapacity(int64_t capacity) { DARABONBA_PTR_SET_VALUE(capacity_, capacity) };


    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string DBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline ModifyLakeCacheSizeRequest& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


    // enableLakeCache Field Functions 
    bool hasEnableLakeCache() const { return this->enableLakeCache_ != nullptr;};
    void deleteEnableLakeCache() { this->enableLakeCache_ = nullptr;};
    inline bool enableLakeCache() const { DARABONBA_PTR_GET_DEFAULT(enableLakeCache_, false) };
    inline ModifyLakeCacheSizeRequest& setEnableLakeCache(bool enableLakeCache) { DARABONBA_PTR_SET_VALUE(enableLakeCache_, enableLakeCache) };


  protected:
    // The lake cache size that you want to set. Unit: GB.
    std::shared_ptr<int64_t> capacity_ = nullptr;
    // The cluster ID.
    // 
    // >  You can call the [DescribeDBClusters](https://help.aliyun.com/document_detail/129857.html) operation to query the IDs of all AnalyticDB for MySQL clusters within a region.
    // 
    // This parameter is required.
    std::shared_ptr<string> DBClusterId_ = nullptr;
    // Specifies whether to enable the lake cache feature.
    // 
    // Valid values:
    // 
    // *   true
    // *   false
    // 
    // This parameter is required.
    std::shared_ptr<bool> enableLakeCache_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
