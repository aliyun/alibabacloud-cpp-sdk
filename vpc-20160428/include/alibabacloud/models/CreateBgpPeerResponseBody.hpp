// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEBGPPEERRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEBGPPEERRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class CreateBgpPeerResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateBgpPeerResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(BgpPeerId, bgpPeerId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateBgpPeerResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(BgpPeerId, bgpPeerId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CreateBgpPeerResponseBody() = default ;
    CreateBgpPeerResponseBody(const CreateBgpPeerResponseBody &) = default ;
    CreateBgpPeerResponseBody(CreateBgpPeerResponseBody &&) = default ;
    CreateBgpPeerResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateBgpPeerResponseBody() = default ;
    CreateBgpPeerResponseBody& operator=(const CreateBgpPeerResponseBody &) = default ;
    CreateBgpPeerResponseBody& operator=(CreateBgpPeerResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bgpPeerId_ == nullptr
        && return this->requestId_ == nullptr; };
    // bgpPeerId Field Functions 
    bool hasBgpPeerId() const { return this->bgpPeerId_ != nullptr;};
    void deleteBgpPeerId() { this->bgpPeerId_ = nullptr;};
    inline string bgpPeerId() const { DARABONBA_PTR_GET_DEFAULT(bgpPeerId_, "") };
    inline CreateBgpPeerResponseBody& setBgpPeerId(string bgpPeerId) { DARABONBA_PTR_SET_VALUE(bgpPeerId_, bgpPeerId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateBgpPeerResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The ID of the BGP peer.
    std::shared_ptr<string> bgpPeerId_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
