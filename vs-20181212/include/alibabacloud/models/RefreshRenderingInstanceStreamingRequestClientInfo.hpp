// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REFRESHRENDERINGINSTANCESTREAMINGREQUESTCLIENTINFO_HPP_
#define ALIBABACLOUD_MODELS_REFRESHRENDERINGINSTANCESTREAMINGREQUESTCLIENTINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vs20181212
{
namespace Models
{
  class RefreshRenderingInstanceStreamingRequestClientInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RefreshRenderingInstanceStreamingRequestClientInfo& obj) { 
      DARABONBA_PTR_TO_JSON(ClientIp, clientIp_);
      DARABONBA_PTR_TO_JSON(NewClient, newClient_);
    };
    friend void from_json(const Darabonba::Json& j, RefreshRenderingInstanceStreamingRequestClientInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientIp, clientIp_);
      DARABONBA_PTR_FROM_JSON(NewClient, newClient_);
    };
    RefreshRenderingInstanceStreamingRequestClientInfo() = default ;
    RefreshRenderingInstanceStreamingRequestClientInfo(const RefreshRenderingInstanceStreamingRequestClientInfo &) = default ;
    RefreshRenderingInstanceStreamingRequestClientInfo(RefreshRenderingInstanceStreamingRequestClientInfo &&) = default ;
    RefreshRenderingInstanceStreamingRequestClientInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RefreshRenderingInstanceStreamingRequestClientInfo() = default ;
    RefreshRenderingInstanceStreamingRequestClientInfo& operator=(const RefreshRenderingInstanceStreamingRequestClientInfo &) = default ;
    RefreshRenderingInstanceStreamingRequestClientInfo& operator=(RefreshRenderingInstanceStreamingRequestClientInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->clientIp_ != nullptr
        && this->newClient_ != nullptr; };
    // clientIp Field Functions 
    bool hasClientIp() const { return this->clientIp_ != nullptr;};
    void deleteClientIp() { this->clientIp_ = nullptr;};
    inline string clientIp() const { DARABONBA_PTR_GET_DEFAULT(clientIp_, "") };
    inline RefreshRenderingInstanceStreamingRequestClientInfo& setClientIp(string clientIp) { DARABONBA_PTR_SET_VALUE(clientIp_, clientIp) };


    // newClient Field Functions 
    bool hasNewClient() const { return this->newClient_ != nullptr;};
    void deleteNewClient() { this->newClient_ = nullptr;};
    inline bool newClient() const { DARABONBA_PTR_GET_DEFAULT(newClient_, false) };
    inline RefreshRenderingInstanceStreamingRequestClientInfo& setNewClient(bool newClient) { DARABONBA_PTR_SET_VALUE(newClient_, newClient) };


  protected:
    std::shared_ptr<string> clientIp_ = nullptr;
    std::shared_ptr<bool> newClient_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vs20181212
#endif
