// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTVULGLOBALCONFIGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTVULGLOBALCONFIGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ListVulGlobalConfigRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListVulGlobalConfigRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ConfigKey, configKey_);
    };
    friend void from_json(const Darabonba::Json& j, ListVulGlobalConfigRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ConfigKey, configKey_);
    };
    ListVulGlobalConfigRequest() = default ;
    ListVulGlobalConfigRequest(const ListVulGlobalConfigRequest &) = default ;
    ListVulGlobalConfigRequest(ListVulGlobalConfigRequest &&) = default ;
    ListVulGlobalConfigRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListVulGlobalConfigRequest() = default ;
    ListVulGlobalConfigRequest& operator=(const ListVulGlobalConfigRequest &) = default ;
    ListVulGlobalConfigRequest& operator=(ListVulGlobalConfigRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->configKey_ == nullptr; };
    // configKey Field Functions 
    bool hasConfigKey() const { return this->configKey_ != nullptr;};
    void deleteConfigKey() { this->configKey_ = nullptr;};
    inline string getConfigKey() const { DARABONBA_PTR_GET_DEFAULT(configKey_, "") };
    inline ListVulGlobalConfigRequest& setConfigKey(string configKey) { DARABONBA_PTR_SET_VALUE(configKey_, configKey) };


  protected:
    // The key of the configuration item. Valid values:
    // 
    // *   **vul_scan_ip_list**: The IP addresses that are detected.
    shared_ptr<string> configKey_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
