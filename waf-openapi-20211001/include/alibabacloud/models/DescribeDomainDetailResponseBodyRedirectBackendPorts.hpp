// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDOMAINDETAILRESPONSEBODYREDIRECTBACKENDPORTS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDOMAINDETAILRESPONSEBODYREDIRECTBACKENDPORTS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class DescribeDomainDetailResponseBodyRedirectBackendPorts : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDomainDetailResponseBodyRedirectBackendPorts& obj) { 
      DARABONBA_PTR_TO_JSON(BackendPort, backendPort_);
      DARABONBA_PTR_TO_JSON(ListenPort, listenPort_);
      DARABONBA_PTR_TO_JSON(Protocol, protocol_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDomainDetailResponseBodyRedirectBackendPorts& obj) { 
      DARABONBA_PTR_FROM_JSON(BackendPort, backendPort_);
      DARABONBA_PTR_FROM_JSON(ListenPort, listenPort_);
      DARABONBA_PTR_FROM_JSON(Protocol, protocol_);
    };
    DescribeDomainDetailResponseBodyRedirectBackendPorts() = default ;
    DescribeDomainDetailResponseBodyRedirectBackendPorts(const DescribeDomainDetailResponseBodyRedirectBackendPorts &) = default ;
    DescribeDomainDetailResponseBodyRedirectBackendPorts(DescribeDomainDetailResponseBodyRedirectBackendPorts &&) = default ;
    DescribeDomainDetailResponseBodyRedirectBackendPorts(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDomainDetailResponseBodyRedirectBackendPorts() = default ;
    DescribeDomainDetailResponseBodyRedirectBackendPorts& operator=(const DescribeDomainDetailResponseBodyRedirectBackendPorts &) = default ;
    DescribeDomainDetailResponseBodyRedirectBackendPorts& operator=(DescribeDomainDetailResponseBodyRedirectBackendPorts &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->backendPort_ != nullptr
        && this->listenPort_ != nullptr && this->protocol_ != nullptr; };
    // backendPort Field Functions 
    bool hasBackendPort() const { return this->backendPort_ != nullptr;};
    void deleteBackendPort() { this->backendPort_ = nullptr;};
    inline int32_t backendPort() const { DARABONBA_PTR_GET_DEFAULT(backendPort_, 0) };
    inline DescribeDomainDetailResponseBodyRedirectBackendPorts& setBackendPort(int32_t backendPort) { DARABONBA_PTR_SET_VALUE(backendPort_, backendPort) };


    // listenPort Field Functions 
    bool hasListenPort() const { return this->listenPort_ != nullptr;};
    void deleteListenPort() { this->listenPort_ = nullptr;};
    inline int32_t listenPort() const { DARABONBA_PTR_GET_DEFAULT(listenPort_, 0) };
    inline DescribeDomainDetailResponseBodyRedirectBackendPorts& setListenPort(int32_t listenPort) { DARABONBA_PTR_SET_VALUE(listenPort_, listenPort) };


    // protocol Field Functions 
    bool hasProtocol() const { return this->protocol_ != nullptr;};
    void deleteProtocol() { this->protocol_ = nullptr;};
    inline string protocol() const { DARABONBA_PTR_GET_DEFAULT(protocol_, "") };
    inline DescribeDomainDetailResponseBodyRedirectBackendPorts& setProtocol(string protocol) { DARABONBA_PTR_SET_VALUE(protocol_, protocol) };


  protected:
    std::shared_ptr<int32_t> backendPort_ = nullptr;
    std::shared_ptr<int32_t> listenPort_ = nullptr;
    std::shared_ptr<string> protocol_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
