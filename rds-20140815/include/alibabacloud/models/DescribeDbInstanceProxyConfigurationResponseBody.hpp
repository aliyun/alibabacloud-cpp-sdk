// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDBINSTANCEPROXYCONFIGURATIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDBINSTANCEPROXYCONFIGURATIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class DescribeDBInstanceProxyConfigurationResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDBInstanceProxyConfigurationResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AttacksProtectionConfiguration, attacksProtectionConfiguration_);
      DARABONBA_PTR_TO_JSON(PersistentConnectionsConfiguration, persistentConnectionsConfiguration_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TransparentSwitchConfiguration, transparentSwitchConfiguration_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDBInstanceProxyConfigurationResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AttacksProtectionConfiguration, attacksProtectionConfiguration_);
      DARABONBA_PTR_FROM_JSON(PersistentConnectionsConfiguration, persistentConnectionsConfiguration_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TransparentSwitchConfiguration, transparentSwitchConfiguration_);
    };
    DescribeDBInstanceProxyConfigurationResponseBody() = default ;
    DescribeDBInstanceProxyConfigurationResponseBody(const DescribeDBInstanceProxyConfigurationResponseBody &) = default ;
    DescribeDBInstanceProxyConfigurationResponseBody(DescribeDBInstanceProxyConfigurationResponseBody &&) = default ;
    DescribeDBInstanceProxyConfigurationResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDBInstanceProxyConfigurationResponseBody() = default ;
    DescribeDBInstanceProxyConfigurationResponseBody& operator=(const DescribeDBInstanceProxyConfigurationResponseBody &) = default ;
    DescribeDBInstanceProxyConfigurationResponseBody& operator=(DescribeDBInstanceProxyConfigurationResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->attacksProtectionConfiguration_ == nullptr
        && return this->persistentConnectionsConfiguration_ == nullptr && return this->requestId_ == nullptr && return this->transparentSwitchConfiguration_ == nullptr; };
    // attacksProtectionConfiguration Field Functions 
    bool hasAttacksProtectionConfiguration() const { return this->attacksProtectionConfiguration_ != nullptr;};
    void deleteAttacksProtectionConfiguration() { this->attacksProtectionConfiguration_ = nullptr;};
    inline string attacksProtectionConfiguration() const { DARABONBA_PTR_GET_DEFAULT(attacksProtectionConfiguration_, "") };
    inline DescribeDBInstanceProxyConfigurationResponseBody& setAttacksProtectionConfiguration(string attacksProtectionConfiguration) { DARABONBA_PTR_SET_VALUE(attacksProtectionConfiguration_, attacksProtectionConfiguration) };


    // persistentConnectionsConfiguration Field Functions 
    bool hasPersistentConnectionsConfiguration() const { return this->persistentConnectionsConfiguration_ != nullptr;};
    void deletePersistentConnectionsConfiguration() { this->persistentConnectionsConfiguration_ = nullptr;};
    inline string persistentConnectionsConfiguration() const { DARABONBA_PTR_GET_DEFAULT(persistentConnectionsConfiguration_, "") };
    inline DescribeDBInstanceProxyConfigurationResponseBody& setPersistentConnectionsConfiguration(string persistentConnectionsConfiguration) { DARABONBA_PTR_SET_VALUE(persistentConnectionsConfiguration_, persistentConnectionsConfiguration) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDBInstanceProxyConfigurationResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // transparentSwitchConfiguration Field Functions 
    bool hasTransparentSwitchConfiguration() const { return this->transparentSwitchConfiguration_ != nullptr;};
    void deleteTransparentSwitchConfiguration() { this->transparentSwitchConfiguration_ = nullptr;};
    inline string transparentSwitchConfiguration() const { DARABONBA_PTR_GET_DEFAULT(transparentSwitchConfiguration_, "") };
    inline DescribeDBInstanceProxyConfigurationResponseBody& setTransparentSwitchConfiguration(string transparentSwitchConfiguration) { DARABONBA_PTR_SET_VALUE(transparentSwitchConfiguration_, transparentSwitchConfiguration) };


  protected:
    // Indicates whether the mechanism that is used to mitigate brute-force attacks is enabled:
    // 
    // *   **Enable**
    // *   **Disable**
    // 
    // The return value is a JSON string. Example:
    // 
    //     {"status":"Disable", "check_interval_seconds": 60,
    //               "max_failed_login_attempts": 60, "blocking_seconds": 600}
    // 
    // Description:
    // 
    // *   Each client allows {max_failed_login_attempts} logon attempts that fail due to incorrect passwords within {check_interval_seconds} seconds. If one more such attempt is conducted, the client must wait for {blocking_seconds} seconds before you can try again.
    // 
    // *   Valid values:
    // 
    //     *   check_interval_seconds: **30 to 600**. Unit: seconds.
    //     *   max_failed_login_attempts: **10 to 5000**. Unit: times.
    //     *   blocking_seconds: **30 to 3600**. Unit: seconds.
    std::shared_ptr<string> attacksProtectionConfiguration_ = nullptr;
    // Indicates whether the short-lived connection optimization feature is enabled.
    // 
    // *   **Enable**
    // *   **Disable**
    // 
    // In this case, the return value is a JSON string. Examples:
    // 
    //     {"status":"Disable"}.
    std::shared_ptr<string> persistentConnectionsConfiguration_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // Indicates whether the transparent switchover feature is enabled.
    // 
    // *   **Enable**
    // *   **Disable**
    // 
    // The return value is a JSON string. Example:
    // 
    //     {"status":"Enable"}
    std::shared_ptr<string> transparentSwitchConfiguration_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
