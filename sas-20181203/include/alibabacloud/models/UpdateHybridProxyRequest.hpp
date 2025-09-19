// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEHYBRIDPROXYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEHYBRIDPROXYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class UpdateHybridProxyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateHybridProxyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ProxyUuid, proxyUuid_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateHybridProxyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ProxyUuid, proxyUuid_);
    };
    UpdateHybridProxyRequest() = default ;
    UpdateHybridProxyRequest(const UpdateHybridProxyRequest &) = default ;
    UpdateHybridProxyRequest(UpdateHybridProxyRequest &&) = default ;
    UpdateHybridProxyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateHybridProxyRequest() = default ;
    UpdateHybridProxyRequest& operator=(const UpdateHybridProxyRequest &) = default ;
    UpdateHybridProxyRequest& operator=(UpdateHybridProxyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->proxyUuid_ != nullptr; };
    // proxyUuid Field Functions 
    bool hasProxyUuid() const { return this->proxyUuid_ != nullptr;};
    void deleteProxyUuid() { this->proxyUuid_ = nullptr;};
    inline string proxyUuid() const { DARABONBA_PTR_GET_DEFAULT(proxyUuid_, "") };
    inline UpdateHybridProxyRequest& setProxyUuid(string proxyUuid) { DARABONBA_PTR_SET_VALUE(proxyUuid_, proxyUuid) };


  protected:
    // The UUID of the Security Center agent.
    // 
    // This parameter is required.
    std::shared_ptr<string> proxyUuid_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
