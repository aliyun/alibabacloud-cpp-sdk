// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYCLICKHOUSEENGINEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYCLICKHOUSEENGINEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class ModifyClickhouseEngineRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyClickhouseEngineRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CacheSize, cacheSize_);
      DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_TO_JSON(Enabled, enabled_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyClickhouseEngineRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CacheSize, cacheSize_);
      DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_FROM_JSON(Enabled, enabled_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
    };
    ModifyClickhouseEngineRequest() = default ;
    ModifyClickhouseEngineRequest(const ModifyClickhouseEngineRequest &) = default ;
    ModifyClickhouseEngineRequest(ModifyClickhouseEngineRequest &&) = default ;
    ModifyClickhouseEngineRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyClickhouseEngineRequest() = default ;
    ModifyClickhouseEngineRequest& operator=(const ModifyClickhouseEngineRequest &) = default ;
    ModifyClickhouseEngineRequest& operator=(ModifyClickhouseEngineRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->cacheSize_ == nullptr
        && return this->DBClusterId_ == nullptr && return this->enabled_ == nullptr && return this->ownerId_ == nullptr; };
    // cacheSize Field Functions 
    bool hasCacheSize() const { return this->cacheSize_ != nullptr;};
    void deleteCacheSize() { this->cacheSize_ = nullptr;};
    inline int32_t cacheSize() const { DARABONBA_PTR_GET_DEFAULT(cacheSize_, 0) };
    inline ModifyClickhouseEngineRequest& setCacheSize(int32_t cacheSize) { DARABONBA_PTR_SET_VALUE(cacheSize_, cacheSize) };


    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string DBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline ModifyClickhouseEngineRequest& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


    // enabled Field Functions 
    bool hasEnabled() const { return this->enabled_ != nullptr;};
    void deleteEnabled() { this->enabled_ = nullptr;};
    inline bool enabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, false) };
    inline ModifyClickhouseEngineRequest& setEnabled(bool enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline string ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, "") };
    inline ModifyClickhouseEngineRequest& setOwnerId(string ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


  protected:
    // The disk cache size of the wide table engine. Unit: GB. Default value: 100. Valid values: 100 to 1000.
    std::shared_ptr<int32_t> cacheSize_ = nullptr;
    // The cluster ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> DBClusterId_ = nullptr;
    // Specifies whether to enable the wide table engine feature. Valid values:
    // 
    // - true
    // 
    // - false
    std::shared_ptr<bool> enabled_ = nullptr;
    std::shared_ptr<string> ownerId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
