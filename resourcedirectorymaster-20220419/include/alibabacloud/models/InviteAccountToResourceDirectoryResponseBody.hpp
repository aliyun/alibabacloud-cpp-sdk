// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INVITEACCOUNTTORESOURCEDIRECTORYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_INVITEACCOUNTTORESOURCEDIRECTORYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/InviteAccountToResourceDirectoryResponseBodyHandshake.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ResourceDirectoryMaster20220419
{
namespace Models
{
  class InviteAccountToResourceDirectoryResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const InviteAccountToResourceDirectoryResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Handshake, handshake_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, InviteAccountToResourceDirectoryResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Handshake, handshake_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    InviteAccountToResourceDirectoryResponseBody() = default ;
    InviteAccountToResourceDirectoryResponseBody(const InviteAccountToResourceDirectoryResponseBody &) = default ;
    InviteAccountToResourceDirectoryResponseBody(InviteAccountToResourceDirectoryResponseBody &&) = default ;
    InviteAccountToResourceDirectoryResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~InviteAccountToResourceDirectoryResponseBody() = default ;
    InviteAccountToResourceDirectoryResponseBody& operator=(const InviteAccountToResourceDirectoryResponseBody &) = default ;
    InviteAccountToResourceDirectoryResponseBody& operator=(InviteAccountToResourceDirectoryResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->handshake_ == nullptr
        && return this->requestId_ == nullptr; };
    // handshake Field Functions 
    bool hasHandshake() const { return this->handshake_ != nullptr;};
    void deleteHandshake() { this->handshake_ = nullptr;};
    inline const InviteAccountToResourceDirectoryResponseBodyHandshake & handshake() const { DARABONBA_PTR_GET_CONST(handshake_, InviteAccountToResourceDirectoryResponseBodyHandshake) };
    inline InviteAccountToResourceDirectoryResponseBodyHandshake handshake() { DARABONBA_PTR_GET(handshake_, InviteAccountToResourceDirectoryResponseBodyHandshake) };
    inline InviteAccountToResourceDirectoryResponseBody& setHandshake(const InviteAccountToResourceDirectoryResponseBodyHandshake & handshake) { DARABONBA_PTR_SET_VALUE(handshake_, handshake) };
    inline InviteAccountToResourceDirectoryResponseBody& setHandshake(InviteAccountToResourceDirectoryResponseBodyHandshake && handshake) { DARABONBA_PTR_SET_RVALUE(handshake_, handshake) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline InviteAccountToResourceDirectoryResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information about the invitation.
    std::shared_ptr<InviteAccountToResourceDirectoryResponseBodyHandshake> handshake_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ResourceDirectoryMaster20220419
#endif
