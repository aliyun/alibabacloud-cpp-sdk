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
        && this->persistentConnectionsConfiguration_ == nullptr && this->requestId_ == nullptr && this->transparentSwitchConfiguration_ == nullptr; };
    // attacksProtectionConfiguration Field Functions 
    bool hasAttacksProtectionConfiguration() const { return this->attacksProtectionConfiguration_ != nullptr;};
    void deleteAttacksProtectionConfiguration() { this->attacksProtectionConfiguration_ = nullptr;};
    inline string getAttacksProtectionConfiguration() const { DARABONBA_PTR_GET_DEFAULT(attacksProtectionConfiguration_, "") };
    inline DescribeDBInstanceProxyConfigurationResponseBody& setAttacksProtectionConfiguration(string attacksProtectionConfiguration) { DARABONBA_PTR_SET_VALUE(attacksProtectionConfiguration_, attacksProtectionConfiguration) };


    // persistentConnectionsConfiguration Field Functions 
    bool hasPersistentConnectionsConfiguration() const { return this->persistentConnectionsConfiguration_ != nullptr;};
    void deletePersistentConnectionsConfiguration() { this->persistentConnectionsConfiguration_ = nullptr;};
    inline string getPersistentConnectionsConfiguration() const { DARABONBA_PTR_GET_DEFAULT(persistentConnectionsConfiguration_, "") };
    inline DescribeDBInstanceProxyConfigurationResponseBody& setPersistentConnectionsConfiguration(string persistentConnectionsConfiguration) { DARABONBA_PTR_SET_VALUE(persistentConnectionsConfiguration_, persistentConnectionsConfiguration) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDBInstanceProxyConfigurationResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // transparentSwitchConfiguration Field Functions 
    bool hasTransparentSwitchConfiguration() const { return this->transparentSwitchConfiguration_ != nullptr;};
    void deleteTransparentSwitchConfiguration() { this->transparentSwitchConfiguration_ = nullptr;};
    inline string getTransparentSwitchConfiguration() const { DARABONBA_PTR_GET_DEFAULT(transparentSwitchConfiguration_, "") };
    inline DescribeDBInstanceProxyConfigurationResponseBody& setTransparentSwitchConfiguration(string transparentSwitchConfiguration) { DARABONBA_PTR_SET_VALUE(transparentSwitchConfiguration_, transparentSwitchConfiguration) };


  protected:
    shared_ptr<string> attacksProtectionConfiguration_ {};
    shared_ptr<string> persistentConnectionsConfiguration_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<string> transparentSwitchConfiguration_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
