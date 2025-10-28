// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSERVICEPROVIDERSPAGERESPONSEBODYDATACONTENT_HPP_
#define ALIBABACLOUD_MODELS_GETSERVICEPROVIDERSPAGERESPONSEBODYDATACONTENT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Edas20170801
{
namespace Models
{
  class GetServiceProvidersPageResponseBodyDataContent : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetServiceProvidersPageResponseBodyDataContent& obj) { 
      DARABONBA_PTR_TO_JSON(Iannotations, iannotations_);
      DARABONBA_PTR_TO_JSON(Ip, ip_);
      DARABONBA_PTR_TO_JSON(Port, port_);
      DARABONBA_PTR_TO_JSON(SerializeType, serializeType_);
      DARABONBA_PTR_TO_JSON(Timeout, timeout_);
    };
    friend void from_json(const Darabonba::Json& j, GetServiceProvidersPageResponseBodyDataContent& obj) { 
      DARABONBA_PTR_FROM_JSON(Iannotations, iannotations_);
      DARABONBA_PTR_FROM_JSON(Ip, ip_);
      DARABONBA_PTR_FROM_JSON(Port, port_);
      DARABONBA_PTR_FROM_JSON(SerializeType, serializeType_);
      DARABONBA_PTR_FROM_JSON(Timeout, timeout_);
    };
    GetServiceProvidersPageResponseBodyDataContent() = default ;
    GetServiceProvidersPageResponseBodyDataContent(const GetServiceProvidersPageResponseBodyDataContent &) = default ;
    GetServiceProvidersPageResponseBodyDataContent(GetServiceProvidersPageResponseBodyDataContent &&) = default ;
    GetServiceProvidersPageResponseBodyDataContent(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetServiceProvidersPageResponseBodyDataContent() = default ;
    GetServiceProvidersPageResponseBodyDataContent& operator=(const GetServiceProvidersPageResponseBodyDataContent &) = default ;
    GetServiceProvidersPageResponseBodyDataContent& operator=(GetServiceProvidersPageResponseBodyDataContent &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->iannotations_ == nullptr
        && return this->ip_ == nullptr && return this->port_ == nullptr && return this->serializeType_ == nullptr && return this->timeout_ == nullptr; };
    // iannotations Field Functions 
    bool hasIannotations() const { return this->iannotations_ != nullptr;};
    void deleteIannotations() { this->iannotations_ = nullptr;};
    inline string iannotations() const { DARABONBA_PTR_GET_DEFAULT(iannotations_, "") };
    inline GetServiceProvidersPageResponseBodyDataContent& setIannotations(string iannotations) { DARABONBA_PTR_SET_VALUE(iannotations_, iannotations) };


    // ip Field Functions 
    bool hasIp() const { return this->ip_ != nullptr;};
    void deleteIp() { this->ip_ = nullptr;};
    inline string ip() const { DARABONBA_PTR_GET_DEFAULT(ip_, "") };
    inline GetServiceProvidersPageResponseBodyDataContent& setIp(string ip) { DARABONBA_PTR_SET_VALUE(ip_, ip) };


    // port Field Functions 
    bool hasPort() const { return this->port_ != nullptr;};
    void deletePort() { this->port_ = nullptr;};
    inline string port() const { DARABONBA_PTR_GET_DEFAULT(port_, "") };
    inline GetServiceProvidersPageResponseBodyDataContent& setPort(string port) { DARABONBA_PTR_SET_VALUE(port_, port) };


    // serializeType Field Functions 
    bool hasSerializeType() const { return this->serializeType_ != nullptr;};
    void deleteSerializeType() { this->serializeType_ = nullptr;};
    inline string serializeType() const { DARABONBA_PTR_GET_DEFAULT(serializeType_, "") };
    inline GetServiceProvidersPageResponseBodyDataContent& setSerializeType(string serializeType) { DARABONBA_PTR_SET_VALUE(serializeType_, serializeType) };


    // timeout Field Functions 
    bool hasTimeout() const { return this->timeout_ != nullptr;};
    void deleteTimeout() { this->timeout_ = nullptr;};
    inline string timeout() const { DARABONBA_PTR_GET_DEFAULT(timeout_, "") };
    inline GetServiceProvidersPageResponseBodyDataContent& setTimeout(string timeout) { DARABONBA_PTR_SET_VALUE(timeout_, timeout) };


  protected:
    // The remarks of the service provider.
    std::shared_ptr<string> iannotations_ = nullptr;
    // The IP address of the service provider.
    std::shared_ptr<string> ip_ = nullptr;
    // The port number of the service provider.
    std::shared_ptr<string> port_ = nullptr;
    // The serialization type.
    std::shared_ptr<string> serializeType_ = nullptr;
    // The service timeout period.
    std::shared_ptr<string> timeout_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Edas20170801
#endif
