// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAPPPLUGINCONFIGFORADMINREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETAPPPLUGINCONFIGFORADMINREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WebsiteBuild20250429
{
namespace Models
{
  class GetAppPluginConfigForAdminRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAppPluginConfigForAdminRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BizId, bizId_);
      DARABONBA_PTR_TO_JSON(PluginId, pluginId_);
    };
    friend void from_json(const Darabonba::Json& j, GetAppPluginConfigForAdminRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BizId, bizId_);
      DARABONBA_PTR_FROM_JSON(PluginId, pluginId_);
    };
    GetAppPluginConfigForAdminRequest() = default ;
    GetAppPluginConfigForAdminRequest(const GetAppPluginConfigForAdminRequest &) = default ;
    GetAppPluginConfigForAdminRequest(GetAppPluginConfigForAdminRequest &&) = default ;
    GetAppPluginConfigForAdminRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAppPluginConfigForAdminRequest() = default ;
    GetAppPluginConfigForAdminRequest& operator=(const GetAppPluginConfigForAdminRequest &) = default ;
    GetAppPluginConfigForAdminRequest& operator=(GetAppPluginConfigForAdminRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bizId_ == nullptr
        && this->pluginId_ == nullptr; };
    // bizId Field Functions 
    bool hasBizId() const { return this->bizId_ != nullptr;};
    void deleteBizId() { this->bizId_ = nullptr;};
    inline string getBizId() const { DARABONBA_PTR_GET_DEFAULT(bizId_, "") };
    inline GetAppPluginConfigForAdminRequest& setBizId(string bizId) { DARABONBA_PTR_SET_VALUE(bizId_, bizId) };


    // pluginId Field Functions 
    bool hasPluginId() const { return this->pluginId_ != nullptr;};
    void deletePluginId() { this->pluginId_ = nullptr;};
    inline string getPluginId() const { DARABONBA_PTR_GET_DEFAULT(pluginId_, "") };
    inline GetAppPluginConfigForAdminRequest& setPluginId(string pluginId) { DARABONBA_PTR_SET_VALUE(pluginId_, pluginId) };


  protected:
    // The business ID.
    // 
    // This parameter is required.
    shared_ptr<string> bizId_ {};
    // The gateway plugin ID.
    // 
    // This parameter is required.
    shared_ptr<string> pluginId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WebsiteBuild20250429
#endif
