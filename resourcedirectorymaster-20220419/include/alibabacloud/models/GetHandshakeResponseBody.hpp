// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETHANDSHAKERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETHANDSHAKERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetHandshakeResponseBodyHandshake.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ResourceDirectoryMaster20220419
{
namespace Models
{
  class GetHandshakeResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetHandshakeResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Handshake, handshake_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetHandshakeResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Handshake, handshake_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetHandshakeResponseBody() = default ;
    GetHandshakeResponseBody(const GetHandshakeResponseBody &) = default ;
    GetHandshakeResponseBody(GetHandshakeResponseBody &&) = default ;
    GetHandshakeResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetHandshakeResponseBody() = default ;
    GetHandshakeResponseBody& operator=(const GetHandshakeResponseBody &) = default ;
    GetHandshakeResponseBody& operator=(GetHandshakeResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->handshake_ != nullptr
        && this->requestId_ != nullptr; };
    // handshake Field Functions 
    bool hasHandshake() const { return this->handshake_ != nullptr;};
    void deleteHandshake() { this->handshake_ = nullptr;};
    inline const GetHandshakeResponseBodyHandshake & handshake() const { DARABONBA_PTR_GET_CONST(handshake_, GetHandshakeResponseBodyHandshake) };
    inline GetHandshakeResponseBodyHandshake handshake() { DARABONBA_PTR_GET(handshake_, GetHandshakeResponseBodyHandshake) };
    inline GetHandshakeResponseBody& setHandshake(const GetHandshakeResponseBodyHandshake & handshake) { DARABONBA_PTR_SET_VALUE(handshake_, handshake) };
    inline GetHandshakeResponseBody& setHandshake(GetHandshakeResponseBodyHandshake && handshake) { DARABONBA_PTR_SET_RVALUE(handshake_, handshake) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetHandshakeResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information of the invitation.
    std::shared_ptr<GetHandshakeResponseBodyHandshake> handshake_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ResourceDirectoryMaster20220419
#endif
