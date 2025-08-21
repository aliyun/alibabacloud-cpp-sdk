// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEDOMAINRESOURCEREQUESTPROXYTYPES_HPP_
#define ALIBABACLOUD_MODELS_CREATEDOMAINRESOURCEREQUESTPROXYTYPES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddoscoo20200101
{
namespace Models
{
  class CreateDomainResourceRequestProxyTypes : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateDomainResourceRequestProxyTypes& obj) { 
      DARABONBA_PTR_TO_JSON(ProxyPorts, proxyPorts_);
      DARABONBA_PTR_TO_JSON(ProxyType, proxyType_);
    };
    friend void from_json(const Darabonba::Json& j, CreateDomainResourceRequestProxyTypes& obj) { 
      DARABONBA_PTR_FROM_JSON(ProxyPorts, proxyPorts_);
      DARABONBA_PTR_FROM_JSON(ProxyType, proxyType_);
    };
    CreateDomainResourceRequestProxyTypes() = default ;
    CreateDomainResourceRequestProxyTypes(const CreateDomainResourceRequestProxyTypes &) = default ;
    CreateDomainResourceRequestProxyTypes(CreateDomainResourceRequestProxyTypes &&) = default ;
    CreateDomainResourceRequestProxyTypes(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateDomainResourceRequestProxyTypes() = default ;
    CreateDomainResourceRequestProxyTypes& operator=(const CreateDomainResourceRequestProxyTypes &) = default ;
    CreateDomainResourceRequestProxyTypes& operator=(CreateDomainResourceRequestProxyTypes &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->proxyPorts_ != nullptr
        && this->proxyType_ != nullptr; };
    // proxyPorts Field Functions 
    bool hasProxyPorts() const { return this->proxyPorts_ != nullptr;};
    void deleteProxyPorts() { this->proxyPorts_ = nullptr;};
    inline const vector<int32_t> & proxyPorts() const { DARABONBA_PTR_GET_CONST(proxyPorts_, vector<int32_t>) };
    inline vector<int32_t> proxyPorts() { DARABONBA_PTR_GET(proxyPorts_, vector<int32_t>) };
    inline CreateDomainResourceRequestProxyTypes& setProxyPorts(const vector<int32_t> & proxyPorts) { DARABONBA_PTR_SET_VALUE(proxyPorts_, proxyPorts) };
    inline CreateDomainResourceRequestProxyTypes& setProxyPorts(vector<int32_t> && proxyPorts) { DARABONBA_PTR_SET_RVALUE(proxyPorts_, proxyPorts) };


    // proxyType Field Functions 
    bool hasProxyType() const { return this->proxyType_ != nullptr;};
    void deleteProxyType() { this->proxyType_ = nullptr;};
    inline string proxyType() const { DARABONBA_PTR_GET_DEFAULT(proxyType_, "") };
    inline CreateDomainResourceRequestProxyTypes& setProxyType(string proxyType) { DARABONBA_PTR_SET_VALUE(proxyType_, proxyType) };


  protected:
    // The port numbers.
    // 
    // This parameter is required.
    std::shared_ptr<vector<int32_t>> proxyPorts_ = nullptr;
    // The type of the protocol. Valid values:
    // 
    // *   **http**
    // *   **https**
    // *   **websocket**
    // *   **websockets**
    std::shared_ptr<string> proxyType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20200101
#endif
