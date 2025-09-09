// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATERECURSIONZONEPROXYPATTERNREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATERECURSIONZONEPROXYPATTERNREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class UpdateRecursionZoneProxyPatternRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateRecursionZoneProxyPatternRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(ProxyPattern, proxyPattern_);
      DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateRecursionZoneProxyPatternRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(ProxyPattern, proxyPattern_);
      DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
    };
    UpdateRecursionZoneProxyPatternRequest() = default ;
    UpdateRecursionZoneProxyPatternRequest(const UpdateRecursionZoneProxyPatternRequest &) = default ;
    UpdateRecursionZoneProxyPatternRequest(UpdateRecursionZoneProxyPatternRequest &&) = default ;
    UpdateRecursionZoneProxyPatternRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateRecursionZoneProxyPatternRequest() = default ;
    UpdateRecursionZoneProxyPatternRequest& operator=(const UpdateRecursionZoneProxyPatternRequest &) = default ;
    UpdateRecursionZoneProxyPatternRequest& operator=(UpdateRecursionZoneProxyPatternRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->clientToken_ != nullptr
        && this->proxyPattern_ != nullptr && this->zoneId_ != nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string clientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline UpdateRecursionZoneProxyPatternRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // proxyPattern Field Functions 
    bool hasProxyPattern() const { return this->proxyPattern_ != nullptr;};
    void deleteProxyPattern() { this->proxyPattern_ = nullptr;};
    inline string proxyPattern() const { DARABONBA_PTR_GET_DEFAULT(proxyPattern_, "") };
    inline UpdateRecursionZoneProxyPatternRequest& setProxyPattern(string proxyPattern) { DARABONBA_PTR_SET_VALUE(proxyPattern_, proxyPattern) };


    // zoneId Field Functions 
    bool hasZoneId() const { return this->zoneId_ != nullptr;};
    void deleteZoneId() { this->zoneId_ = nullptr;};
    inline string zoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
    inline UpdateRecursionZoneProxyPatternRequest& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


  protected:
    std::shared_ptr<string> clientToken_ = nullptr;
    std::shared_ptr<string> proxyPattern_ = nullptr;
    std::shared_ptr<string> zoneId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
