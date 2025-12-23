// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RENEWAPPGROUPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_RENEWAPPGROUPREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/PrepayOrderInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OpenSearch20171225
{
namespace Models
{
  class RenewAppGroupRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RenewAppGroupRequest& obj) { 
      DARABONBA_PTR_TO_JSON(body, body_);
      DARABONBA_PTR_TO_JSON(clientToken, clientToken_);
    };
    friend void from_json(const Darabonba::Json& j, RenewAppGroupRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(body, body_);
      DARABONBA_PTR_FROM_JSON(clientToken, clientToken_);
    };
    RenewAppGroupRequest() = default ;
    RenewAppGroupRequest(const RenewAppGroupRequest &) = default ;
    RenewAppGroupRequest(RenewAppGroupRequest &&) = default ;
    RenewAppGroupRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RenewAppGroupRequest() = default ;
    RenewAppGroupRequest& operator=(const RenewAppGroupRequest &) = default ;
    RenewAppGroupRequest& operator=(RenewAppGroupRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->body_ == nullptr
        && return this->clientToken_ == nullptr; };
    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const PrepayOrderInfo & body() const { DARABONBA_PTR_GET_CONST(body_, PrepayOrderInfo) };
    inline PrepayOrderInfo body() { DARABONBA_PTR_GET(body_, PrepayOrderInfo) };
    inline RenewAppGroupRequest& setBody(const PrepayOrderInfo & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline RenewAppGroupRequest& setBody(PrepayOrderInfo && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string clientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline RenewAppGroupRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


  protected:
    // The renewal request body.
    std::shared_ptr<PrepayOrderInfo> body_ = nullptr;
    // The client token that is used to ensure the idempotence of the request.
    std::shared_ptr<string> clientToken_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OpenSearch20171225
#endif
