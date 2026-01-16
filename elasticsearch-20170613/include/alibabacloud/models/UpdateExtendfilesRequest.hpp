// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEEXTENDFILESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEEXTENDFILESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Elasticsearch20170613
{
namespace Models
{
  class UpdateExtendfilesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateExtendfilesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateExtendfilesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    UpdateExtendfilesRequest() = default ;
    UpdateExtendfilesRequest(const UpdateExtendfilesRequest &) = default ;
    UpdateExtendfilesRequest(UpdateExtendfilesRequest &&) = default ;
    UpdateExtendfilesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateExtendfilesRequest() = default ;
    UpdateExtendfilesRequest& operator=(const UpdateExtendfilesRequest &) = default ;
    UpdateExtendfilesRequest& operator=(UpdateExtendfilesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clientToken_ == nullptr
        && this->body_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline UpdateExtendfilesRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline string getBody() const { DARABONBA_PTR_GET_DEFAULT(body_, "") };
    inline UpdateExtendfilesRequest& setBody(string body) { DARABONBA_PTR_SET_VALUE(body_, body) };


  protected:
    // The client token that is used to ensure the idempotence of the request. You can use the client to generate the token, but you must make sure that the token is unique among different requests. The token can contain only ASCII characters and cannot exceed 64 characters in length.
    shared_ptr<string> clientToken_ {};
    shared_ptr<string> body_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Elasticsearch20170613
#endif
