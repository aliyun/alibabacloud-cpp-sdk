// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_STARTRENDERINGSESSIONREQUESTCLIENTPARAMS_HPP_
#define ALIBABACLOUD_MODELS_STARTRENDERINGSESSIONREQUESTCLIENTPARAMS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vs20181212
{
namespace Models
{
  class StartRenderingSessionRequestClientParams : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const StartRenderingSessionRequestClientParams& obj) { 
      DARABONBA_PTR_TO_JSON(ClientIp, clientIp_);
    };
    friend void from_json(const Darabonba::Json& j, StartRenderingSessionRequestClientParams& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientIp, clientIp_);
    };
    StartRenderingSessionRequestClientParams() = default ;
    StartRenderingSessionRequestClientParams(const StartRenderingSessionRequestClientParams &) = default ;
    StartRenderingSessionRequestClientParams(StartRenderingSessionRequestClientParams &&) = default ;
    StartRenderingSessionRequestClientParams(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~StartRenderingSessionRequestClientParams() = default ;
    StartRenderingSessionRequestClientParams& operator=(const StartRenderingSessionRequestClientParams &) = default ;
    StartRenderingSessionRequestClientParams& operator=(StartRenderingSessionRequestClientParams &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->clientIp_ != nullptr; };
    // clientIp Field Functions 
    bool hasClientIp() const { return this->clientIp_ != nullptr;};
    void deleteClientIp() { this->clientIp_ = nullptr;};
    inline string clientIp() const { DARABONBA_PTR_GET_DEFAULT(clientIp_, "") };
    inline StartRenderingSessionRequestClientParams& setClientIp(string clientIp) { DARABONBA_PTR_SET_VALUE(clientIp_, clientIp) };


  protected:
    std::shared_ptr<string> clientIp_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vs20181212
#endif
