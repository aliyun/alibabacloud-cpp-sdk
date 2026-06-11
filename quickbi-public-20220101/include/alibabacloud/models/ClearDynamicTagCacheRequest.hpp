// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CLEARDYNAMICTAGCACHEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CLEARDYNAMICTAGCACHEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QuickbiPublic20220101
{
namespace Models
{
  class ClearDynamicTagCacheRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ClearDynamicTagCacheRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ConfigId, configId_);
    };
    friend void from_json(const Darabonba::Json& j, ClearDynamicTagCacheRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ConfigId, configId_);
    };
    ClearDynamicTagCacheRequest() = default ;
    ClearDynamicTagCacheRequest(const ClearDynamicTagCacheRequest &) = default ;
    ClearDynamicTagCacheRequest(ClearDynamicTagCacheRequest &&) = default ;
    ClearDynamicTagCacheRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ClearDynamicTagCacheRequest() = default ;
    ClearDynamicTagCacheRequest& operator=(const ClearDynamicTagCacheRequest &) = default ;
    ClearDynamicTagCacheRequest& operator=(ClearDynamicTagCacheRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->configId_ == nullptr; };
    // configId Field Functions 
    bool hasConfigId() const { return this->configId_ != nullptr;};
    void deleteConfigId() { this->configId_ = nullptr;};
    inline string getConfigId() const { DARABONBA_PTR_GET_DEFAULT(configId_, "") };
    inline ClearDynamicTagCacheRequest& setConfigId(string configId) { DARABONBA_PTR_SET_VALUE(configId_, configId) };


  protected:
    // This parameter is required.
    shared_ptr<string> configId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuickbiPublic20220101
#endif
