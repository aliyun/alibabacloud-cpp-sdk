// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETIDENTITYPROVIDERRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETIDENTITYPROVIDERRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetIdentityProviderResponseBodyIdentityProviderDetail.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class GetIdentityProviderResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetIdentityProviderResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(IdentityProviderDetail, identityProviderDetail_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetIdentityProviderResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(IdentityProviderDetail, identityProviderDetail_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetIdentityProviderResponseBody() = default ;
    GetIdentityProviderResponseBody(const GetIdentityProviderResponseBody &) = default ;
    GetIdentityProviderResponseBody(GetIdentityProviderResponseBody &&) = default ;
    GetIdentityProviderResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetIdentityProviderResponseBody() = default ;
    GetIdentityProviderResponseBody& operator=(const GetIdentityProviderResponseBody &) = default ;
    GetIdentityProviderResponseBody& operator=(GetIdentityProviderResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->identityProviderDetail_ == nullptr
        && return this->requestId_ == nullptr; };
    // identityProviderDetail Field Functions 
    bool hasIdentityProviderDetail() const { return this->identityProviderDetail_ != nullptr;};
    void deleteIdentityProviderDetail() { this->identityProviderDetail_ = nullptr;};
    inline const GetIdentityProviderResponseBodyIdentityProviderDetail & identityProviderDetail() const { DARABONBA_PTR_GET_CONST(identityProviderDetail_, GetIdentityProviderResponseBodyIdentityProviderDetail) };
    inline GetIdentityProviderResponseBodyIdentityProviderDetail identityProviderDetail() { DARABONBA_PTR_GET(identityProviderDetail_, GetIdentityProviderResponseBodyIdentityProviderDetail) };
    inline GetIdentityProviderResponseBody& setIdentityProviderDetail(const GetIdentityProviderResponseBodyIdentityProviderDetail & identityProviderDetail) { DARABONBA_PTR_SET_VALUE(identityProviderDetail_, identityProviderDetail) };
    inline GetIdentityProviderResponseBody& setIdentityProviderDetail(GetIdentityProviderResponseBodyIdentityProviderDetail && identityProviderDetail) { DARABONBA_PTR_SET_RVALUE(identityProviderDetail_, identityProviderDetail) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetIdentityProviderResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // Identity provider Information.
    std::shared_ptr<GetIdentityProviderResponseBodyIdentityProviderDetail> identityProviderDetail_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
