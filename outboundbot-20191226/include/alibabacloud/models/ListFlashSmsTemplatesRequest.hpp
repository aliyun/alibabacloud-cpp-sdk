// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTFLASHSMSTEMPLATESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTFLASHSMSTEMPLATESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OutboundBot20191226
{
namespace Models
{
  class ListFlashSmsTemplatesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListFlashSmsTemplatesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ConfigId, configId_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(ProviderId, providerId_);
    };
    friend void from_json(const Darabonba::Json& j, ListFlashSmsTemplatesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ConfigId, configId_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(ProviderId, providerId_);
    };
    ListFlashSmsTemplatesRequest() = default ;
    ListFlashSmsTemplatesRequest(const ListFlashSmsTemplatesRequest &) = default ;
    ListFlashSmsTemplatesRequest(ListFlashSmsTemplatesRequest &&) = default ;
    ListFlashSmsTemplatesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListFlashSmsTemplatesRequest() = default ;
    ListFlashSmsTemplatesRequest& operator=(const ListFlashSmsTemplatesRequest &) = default ;
    ListFlashSmsTemplatesRequest& operator=(ListFlashSmsTemplatesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->configId_ == nullptr
        && return this->instanceId_ == nullptr && return this->providerId_ == nullptr; };
    // configId Field Functions 
    bool hasConfigId() const { return this->configId_ != nullptr;};
    void deleteConfigId() { this->configId_ = nullptr;};
    inline string configId() const { DARABONBA_PTR_GET_DEFAULT(configId_, "") };
    inline ListFlashSmsTemplatesRequest& setConfigId(string configId) { DARABONBA_PTR_SET_VALUE(configId_, configId) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ListFlashSmsTemplatesRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // providerId Field Functions 
    bool hasProviderId() const { return this->providerId_ != nullptr;};
    void deleteProviderId() { this->providerId_ = nullptr;};
    inline string providerId() const { DARABONBA_PTR_GET_DEFAULT(providerId_, "") };
    inline ListFlashSmsTemplatesRequest& setProviderId(string providerId) { DARABONBA_PTR_SET_VALUE(providerId_, providerId) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> configId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> providerId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OutboundBot20191226
#endif
