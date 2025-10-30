// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHECKHADOOPNETCONNECTIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CHECKHADOOPNETCONNECTIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class CheckHadoopNetConnectionResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CheckHadoopNetConnectionResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ConnectionMessage, connectionMessage_);
      DARABONBA_PTR_TO_JSON(ConnectionStatus, connectionStatus_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CheckHadoopNetConnectionResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ConnectionMessage, connectionMessage_);
      DARABONBA_PTR_FROM_JSON(ConnectionStatus, connectionStatus_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CheckHadoopNetConnectionResponseBody() = default ;
    CheckHadoopNetConnectionResponseBody(const CheckHadoopNetConnectionResponseBody &) = default ;
    CheckHadoopNetConnectionResponseBody(CheckHadoopNetConnectionResponseBody &&) = default ;
    CheckHadoopNetConnectionResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CheckHadoopNetConnectionResponseBody() = default ;
    CheckHadoopNetConnectionResponseBody& operator=(const CheckHadoopNetConnectionResponseBody &) = default ;
    CheckHadoopNetConnectionResponseBody& operator=(CheckHadoopNetConnectionResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->connectionMessage_ == nullptr
        && return this->connectionStatus_ == nullptr && return this->requestId_ == nullptr; };
    // connectionMessage Field Functions 
    bool hasConnectionMessage() const { return this->connectionMessage_ != nullptr;};
    void deleteConnectionMessage() { this->connectionMessage_ = nullptr;};
    inline string connectionMessage() const { DARABONBA_PTR_GET_DEFAULT(connectionMessage_, "") };
    inline CheckHadoopNetConnectionResponseBody& setConnectionMessage(string connectionMessage) { DARABONBA_PTR_SET_VALUE(connectionMessage_, connectionMessage) };


    // connectionStatus Field Functions 
    bool hasConnectionStatus() const { return this->connectionStatus_ != nullptr;};
    void deleteConnectionStatus() { this->connectionStatus_ = nullptr;};
    inline string connectionStatus() const { DARABONBA_PTR_GET_DEFAULT(connectionStatus_, "") };
    inline CheckHadoopNetConnectionResponseBody& setConnectionStatus(string connectionStatus) { DARABONBA_PTR_SET_VALUE(connectionStatus_, connectionStatus) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CheckHadoopNetConnectionResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // Return message: Returns error information if the connection fails, otherwise returns an empty string ("").
    std::shared_ptr<string> connectionMessage_ = nullptr;
    // Connection status:
    // 
    // - Network connected: Success
    // 
    // - Network not connected: Failed
    std::shared_ptr<string> connectionStatus_ = nullptr;
    // Request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
