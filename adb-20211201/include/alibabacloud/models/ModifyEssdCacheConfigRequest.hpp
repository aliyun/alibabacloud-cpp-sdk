// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYESSDCACHECONFIGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYESSDCACHECONFIGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class ModifyEssdCacheConfigRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyEssdCacheConfigRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_TO_JSON(EnableEssdCache, enableEssdCache_);
      DARABONBA_PTR_TO_JSON(EssdCacheSize, essdCacheSize_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyEssdCacheConfigRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_FROM_JSON(EnableEssdCache, enableEssdCache_);
      DARABONBA_PTR_FROM_JSON(EssdCacheSize, essdCacheSize_);
    };
    ModifyEssdCacheConfigRequest() = default ;
    ModifyEssdCacheConfigRequest(const ModifyEssdCacheConfigRequest &) = default ;
    ModifyEssdCacheConfigRequest(ModifyEssdCacheConfigRequest &&) = default ;
    ModifyEssdCacheConfigRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyEssdCacheConfigRequest() = default ;
    ModifyEssdCacheConfigRequest& operator=(const ModifyEssdCacheConfigRequest &) = default ;
    ModifyEssdCacheConfigRequest& operator=(ModifyEssdCacheConfigRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->DBClusterId_ == nullptr
        && return this->enableEssdCache_ == nullptr && return this->essdCacheSize_ == nullptr; };
    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string DBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline ModifyEssdCacheConfigRequest& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


    // enableEssdCache Field Functions 
    bool hasEnableEssdCache() const { return this->enableEssdCache_ != nullptr;};
    void deleteEnableEssdCache() { this->enableEssdCache_ = nullptr;};
    inline bool enableEssdCache() const { DARABONBA_PTR_GET_DEFAULT(enableEssdCache_, false) };
    inline ModifyEssdCacheConfigRequest& setEnableEssdCache(bool enableEssdCache) { DARABONBA_PTR_SET_VALUE(enableEssdCache_, enableEssdCache) };


    // essdCacheSize Field Functions 
    bool hasEssdCacheSize() const { return this->essdCacheSize_ != nullptr;};
    void deleteEssdCacheSize() { this->essdCacheSize_ = nullptr;};
    inline int32_t essdCacheSize() const { DARABONBA_PTR_GET_DEFAULT(essdCacheSize_, 0) };
    inline ModifyEssdCacheConfigRequest& setEssdCacheSize(int32_t essdCacheSize) { DARABONBA_PTR_SET_VALUE(essdCacheSize_, essdCacheSize) };


  protected:
    // The cluster ID.
    // 
    // >  You can call the [DescribeDBClusters](https://help.aliyun.com/document_detail/129857.html) operation to query the IDs of all AnalyticDB for MySQL clusters within a region.
    // 
    // This parameter is required.
    std::shared_ptr<string> DBClusterId_ = nullptr;
    // Specifies whether to enable the disk cache feature.
    // 
    // Valid values:
    // 
    // *   true
    // *   false
    // 
    // This parameter is required.
    std::shared_ptr<bool> enableEssdCache_ = nullptr;
    // The disk cache size. Unit: GB.
    std::shared_ptr<int32_t> essdCacheSize_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
