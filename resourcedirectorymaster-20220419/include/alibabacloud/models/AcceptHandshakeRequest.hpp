// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ACCEPTHANDSHAKEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ACCEPTHANDSHAKEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ResourceDirectoryMaster20220419
{
namespace Models
{
  class AcceptHandshakeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AcceptHandshakeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(HandshakeId, handshakeId_);
    };
    friend void from_json(const Darabonba::Json& j, AcceptHandshakeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(HandshakeId, handshakeId_);
    };
    AcceptHandshakeRequest() = default ;
    AcceptHandshakeRequest(const AcceptHandshakeRequest &) = default ;
    AcceptHandshakeRequest(AcceptHandshakeRequest &&) = default ;
    AcceptHandshakeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AcceptHandshakeRequest() = default ;
    AcceptHandshakeRequest& operator=(const AcceptHandshakeRequest &) = default ;
    AcceptHandshakeRequest& operator=(AcceptHandshakeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->handshakeId_ != nullptr; };
    // handshakeId Field Functions 
    bool hasHandshakeId() const { return this->handshakeId_ != nullptr;};
    void deleteHandshakeId() { this->handshakeId_ = nullptr;};
    inline string handshakeId() const { DARABONBA_PTR_GET_DEFAULT(handshakeId_, "") };
    inline AcceptHandshakeRequest& setHandshakeId(string handshakeId) { DARABONBA_PTR_SET_VALUE(handshakeId_, handshakeId) };


  protected:
    // The ID of the invitation.
    // 
    // You can call the [ListHandshakesForAccount](~~ListHandshakesForAccount~~) operation to obtain the ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> handshakeId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ResourceDirectoryMaster20220419
#endif
