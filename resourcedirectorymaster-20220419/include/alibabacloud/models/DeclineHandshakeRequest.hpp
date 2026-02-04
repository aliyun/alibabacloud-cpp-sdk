// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DECLINEHANDSHAKEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DECLINEHANDSHAKEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ResourceDirectoryMaster20220419
{
namespace Models
{
  class DeclineHandshakeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeclineHandshakeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(HandshakeId, handshakeId_);
    };
    friend void from_json(const Darabonba::Json& j, DeclineHandshakeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(HandshakeId, handshakeId_);
    };
    DeclineHandshakeRequest() = default ;
    DeclineHandshakeRequest(const DeclineHandshakeRequest &) = default ;
    DeclineHandshakeRequest(DeclineHandshakeRequest &&) = default ;
    DeclineHandshakeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeclineHandshakeRequest() = default ;
    DeclineHandshakeRequest& operator=(const DeclineHandshakeRequest &) = default ;
    DeclineHandshakeRequest& operator=(DeclineHandshakeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->handshakeId_ == nullptr; };
    // handshakeId Field Functions 
    bool hasHandshakeId() const { return this->handshakeId_ != nullptr;};
    void deleteHandshakeId() { this->handshakeId_ = nullptr;};
    inline string getHandshakeId() const { DARABONBA_PTR_GET_DEFAULT(handshakeId_, "") };
    inline DeclineHandshakeRequest& setHandshakeId(string handshakeId) { DARABONBA_PTR_SET_VALUE(handshakeId_, handshakeId) };


  protected:
    // The ID of the invitation.
    // 
    // This parameter is required.
    shared_ptr<string> handshakeId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ResourceDirectoryMaster20220419
#endif
