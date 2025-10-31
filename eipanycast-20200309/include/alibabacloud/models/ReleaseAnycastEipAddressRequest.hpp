// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RELEASEANYCASTEIPADDRESSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_RELEASEANYCASTEIPADDRESSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eipanycast20200309
{
namespace Models
{
  class ReleaseAnycastEipAddressRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ReleaseAnycastEipAddressRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AnycastId, anycastId_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
    };
    friend void from_json(const Darabonba::Json& j, ReleaseAnycastEipAddressRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AnycastId, anycastId_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
    };
    ReleaseAnycastEipAddressRequest() = default ;
    ReleaseAnycastEipAddressRequest(const ReleaseAnycastEipAddressRequest &) = default ;
    ReleaseAnycastEipAddressRequest(ReleaseAnycastEipAddressRequest &&) = default ;
    ReleaseAnycastEipAddressRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ReleaseAnycastEipAddressRequest() = default ;
    ReleaseAnycastEipAddressRequest& operator=(const ReleaseAnycastEipAddressRequest &) = default ;
    ReleaseAnycastEipAddressRequest& operator=(ReleaseAnycastEipAddressRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->anycastId_ == nullptr
        && return this->clientToken_ == nullptr; };
    // anycastId Field Functions 
    bool hasAnycastId() const { return this->anycastId_ != nullptr;};
    void deleteAnycastId() { this->anycastId_ = nullptr;};
    inline string anycastId() const { DARABONBA_PTR_GET_DEFAULT(anycastId_, "") };
    inline ReleaseAnycastEipAddressRequest& setAnycastId(string anycastId) { DARABONBA_PTR_SET_VALUE(anycastId_, anycastId) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string clientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline ReleaseAnycastEipAddressRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


  protected:
    // The ID of the Anycast EIP to be released.
    // 
    // This parameter is required.
    std::shared_ptr<string> anycastId_ = nullptr;
    // The client token that is used to ensure the idempotence of the request.
    // 
    // You can use the client to generate the token, but you must make sure that the token is unique among different requests. The token can contain only ASCII characters and cannot exceed 64 characters in length.
    std::shared_ptr<string> clientToken_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eipanycast20200309
#endif
