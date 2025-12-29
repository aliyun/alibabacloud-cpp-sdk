// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UNBINDNLBREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UNBINDNLBREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sae20190506
{
namespace Models
{
  class UnbindNlbRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UnbindNlbRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(NlbId, nlbId_);
      DARABONBA_PTR_TO_JSON(Port, port_);
      DARABONBA_PTR_TO_JSON(Protocol, protocol_);
    };
    friend void from_json(const Darabonba::Json& j, UnbindNlbRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(NlbId, nlbId_);
      DARABONBA_PTR_FROM_JSON(Port, port_);
      DARABONBA_PTR_FROM_JSON(Protocol, protocol_);
    };
    UnbindNlbRequest() = default ;
    UnbindNlbRequest(const UnbindNlbRequest &) = default ;
    UnbindNlbRequest(UnbindNlbRequest &&) = default ;
    UnbindNlbRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UnbindNlbRequest() = default ;
    UnbindNlbRequest& operator=(const UnbindNlbRequest &) = default ;
    UnbindNlbRequest& operator=(UnbindNlbRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appId_ == nullptr
        && this->nlbId_ == nullptr && this->port_ == nullptr && this->protocol_ == nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline UnbindNlbRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // nlbId Field Functions 
    bool hasNlbId() const { return this->nlbId_ != nullptr;};
    void deleteNlbId() { this->nlbId_ = nullptr;};
    inline string getNlbId() const { DARABONBA_PTR_GET_DEFAULT(nlbId_, "") };
    inline UnbindNlbRequest& setNlbId(string nlbId) { DARABONBA_PTR_SET_VALUE(nlbId_, nlbId) };


    // port Field Functions 
    bool hasPort() const { return this->port_ != nullptr;};
    void deletePort() { this->port_ = nullptr;};
    inline int32_t getPort() const { DARABONBA_PTR_GET_DEFAULT(port_, 0) };
    inline UnbindNlbRequest& setPort(int32_t port) { DARABONBA_PTR_SET_VALUE(port_, port) };


    // protocol Field Functions 
    bool hasProtocol() const { return this->protocol_ != nullptr;};
    void deleteProtocol() { this->protocol_ = nullptr;};
    inline string getProtocol() const { DARABONBA_PTR_GET_DEFAULT(protocol_, "") };
    inline UnbindNlbRequest& setProtocol(string protocol) { DARABONBA_PTR_SET_VALUE(protocol_, protocol) };


  protected:
    // A short description of struct
    shared_ptr<string> appId_ {};
    // The ID of NLB instance.
    shared_ptr<string> nlbId_ {};
    // The listener port of the instance. Valid values: 0 to 65535.
    shared_ptr<int32_t> port_ {};
    // The type of the protocol. Valid values:
    // 
    // *   **TCP**.
    // *   **UDP**.
    // *   **TCPSSL**.
    shared_ptr<string> protocol_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
