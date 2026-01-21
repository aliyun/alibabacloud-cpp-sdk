// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CONFIGINSTANCEWHITELISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CONFIGINSTANCEWHITELISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace YundunBastionhost20191209
{
namespace Models
{
  class ConfigInstanceWhiteListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ConfigInstanceWhiteListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ConfigInstanceWhiteListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ConfigInstanceWhiteListResponseBody() = default ;
    ConfigInstanceWhiteListResponseBody(const ConfigInstanceWhiteListResponseBody &) = default ;
    ConfigInstanceWhiteListResponseBody(ConfigInstanceWhiteListResponseBody &&) = default ;
    ConfigInstanceWhiteListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ConfigInstanceWhiteListResponseBody() = default ;
    ConfigInstanceWhiteListResponseBody& operator=(const ConfigInstanceWhiteListResponseBody &) = default ;
    ConfigInstanceWhiteListResponseBody& operator=(ConfigInstanceWhiteListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceId_ == nullptr
        && this->requestId_ == nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ConfigInstanceWhiteListResponseBody& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ConfigInstanceWhiteListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The ID of the bastion host for which a whitelist of public IP addresses is configured.
    shared_ptr<string> instanceId_ {};
    // The ID of the request, which is used to locate and troubleshoot issues.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace YundunBastionhost20191209
#endif
