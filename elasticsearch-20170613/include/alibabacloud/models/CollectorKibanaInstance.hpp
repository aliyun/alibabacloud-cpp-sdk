// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_COLLECTORKIBANAINSTANCE_HPP_
#define ALIBABACLOUD_MODELS_COLLECTORKIBANAINSTANCE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Elasticsearch20170613
{
namespace Models
{
  class CollectorKibanaInstance : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CollectorKibanaInstance& obj) { 
      DARABONBA_PTR_TO_JSON(configType, configType_);
      DARABONBA_PTR_TO_JSON(host, host_);
      DARABONBA_PTR_TO_JSON(instanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(kibanaHost, kibanaHost_);
      DARABONBA_PTR_TO_JSON(password, password_);
      DARABONBA_PTR_TO_JSON(protocol, protocol_);
      DARABONBA_PTR_TO_JSON(userName, userName_);
    };
    friend void from_json(const Darabonba::Json& j, CollectorKibanaInstance& obj) { 
      DARABONBA_PTR_FROM_JSON(configType, configType_);
      DARABONBA_PTR_FROM_JSON(host, host_);
      DARABONBA_PTR_FROM_JSON(instanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(kibanaHost, kibanaHost_);
      DARABONBA_PTR_FROM_JSON(password, password_);
      DARABONBA_PTR_FROM_JSON(protocol, protocol_);
      DARABONBA_PTR_FROM_JSON(userName, userName_);
    };
    CollectorKibanaInstance() = default ;
    CollectorKibanaInstance(const CollectorKibanaInstance &) = default ;
    CollectorKibanaInstance(CollectorKibanaInstance &&) = default ;
    CollectorKibanaInstance(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CollectorKibanaInstance() = default ;
    CollectorKibanaInstance& operator=(const CollectorKibanaInstance &) = default ;
    CollectorKibanaInstance& operator=(CollectorKibanaInstance &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->configType_ == nullptr
        && this->host_ == nullptr && this->instanceId_ == nullptr && this->kibanaHost_ == nullptr && this->password_ == nullptr && this->protocol_ == nullptr
        && this->userName_ == nullptr; };
    // configType Field Functions 
    bool hasConfigType() const { return this->configType_ != nullptr;};
    void deleteConfigType() { this->configType_ = nullptr;};
    inline string getConfigType() const { DARABONBA_PTR_GET_DEFAULT(configType_, "") };
    inline CollectorKibanaInstance& setConfigType(string configType) { DARABONBA_PTR_SET_VALUE(configType_, configType) };


    // host Field Functions 
    bool hasHost() const { return this->host_ != nullptr;};
    void deleteHost() { this->host_ = nullptr;};
    inline string getHost() const { DARABONBA_PTR_GET_DEFAULT(host_, "") };
    inline CollectorKibanaInstance& setHost(string host) { DARABONBA_PTR_SET_VALUE(host_, host) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline CollectorKibanaInstance& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // kibanaHost Field Functions 
    bool hasKibanaHost() const { return this->kibanaHost_ != nullptr;};
    void deleteKibanaHost() { this->kibanaHost_ = nullptr;};
    inline string getKibanaHost() const { DARABONBA_PTR_GET_DEFAULT(kibanaHost_, "") };
    inline CollectorKibanaInstance& setKibanaHost(string kibanaHost) { DARABONBA_PTR_SET_VALUE(kibanaHost_, kibanaHost) };


    // password Field Functions 
    bool hasPassword() const { return this->password_ != nullptr;};
    void deletePassword() { this->password_ = nullptr;};
    inline string getPassword() const { DARABONBA_PTR_GET_DEFAULT(password_, "") };
    inline CollectorKibanaInstance& setPassword(string password) { DARABONBA_PTR_SET_VALUE(password_, password) };


    // protocol Field Functions 
    bool hasProtocol() const { return this->protocol_ != nullptr;};
    void deleteProtocol() { this->protocol_ = nullptr;};
    inline string getProtocol() const { DARABONBA_PTR_GET_DEFAULT(protocol_, "") };
    inline CollectorKibanaInstance& setProtocol(string protocol) { DARABONBA_PTR_SET_VALUE(protocol_, protocol) };


    // userName Field Functions 
    bool hasUserName() const { return this->userName_ != nullptr;};
    void deleteUserName() { this->userName_ = nullptr;};
    inline string getUserName() const { DARABONBA_PTR_GET_DEFAULT(userName_, "") };
    inline CollectorKibanaInstance& setUserName(string userName) { DARABONBA_PTR_SET_VALUE(userName_, userName) };


  protected:
    // This parameter is required.
    shared_ptr<string> configType_ {};
    // This parameter is required.
    shared_ptr<string> host_ {};
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // This parameter is required.
    shared_ptr<string> kibanaHost_ {};
    // This parameter is required.
    shared_ptr<string> password_ {};
    // This parameter is required.
    shared_ptr<string> protocol_ {};
    // This parameter is required.
    shared_ptr<string> userName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Elasticsearch20170613
#endif
