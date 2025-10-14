// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDRECURSIONZONEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADDRECURSIONZONEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class AddRecursionZoneRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddRecursionZoneRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(ProxyPattern, proxyPattern_);
      DARABONBA_PTR_TO_JSON(ZoneName, zoneName_);
    };
    friend void from_json(const Darabonba::Json& j, AddRecursionZoneRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(ProxyPattern, proxyPattern_);
      DARABONBA_PTR_FROM_JSON(ZoneName, zoneName_);
    };
    AddRecursionZoneRequest() = default ;
    AddRecursionZoneRequest(const AddRecursionZoneRequest &) = default ;
    AddRecursionZoneRequest(AddRecursionZoneRequest &&) = default ;
    AddRecursionZoneRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddRecursionZoneRequest() = default ;
    AddRecursionZoneRequest& operator=(const AddRecursionZoneRequest &) = default ;
    AddRecursionZoneRequest& operator=(AddRecursionZoneRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clientToken_ == nullptr
        && return this->proxyPattern_ == nullptr && return this->zoneName_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string clientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline AddRecursionZoneRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // proxyPattern Field Functions 
    bool hasProxyPattern() const { return this->proxyPattern_ != nullptr;};
    void deleteProxyPattern() { this->proxyPattern_ = nullptr;};
    inline string proxyPattern() const { DARABONBA_PTR_GET_DEFAULT(proxyPattern_, "") };
    inline AddRecursionZoneRequest& setProxyPattern(string proxyPattern) { DARABONBA_PTR_SET_VALUE(proxyPattern_, proxyPattern) };


    // zoneName Field Functions 
    bool hasZoneName() const { return this->zoneName_ != nullptr;};
    void deleteZoneName() { this->zoneName_ = nullptr;};
    inline string zoneName() const { DARABONBA_PTR_GET_DEFAULT(zoneName_, "") };
    inline AddRecursionZoneRequest& setZoneName(string zoneName) { DARABONBA_PTR_SET_VALUE(zoneName_, zoneName) };


  protected:
    std::shared_ptr<string> clientToken_ = nullptr;
    std::shared_ptr<string> proxyPattern_ = nullptr;
    std::shared_ptr<string> zoneName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
