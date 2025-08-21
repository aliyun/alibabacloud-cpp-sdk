// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CANCELLOGSTASHDELETIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CANCELLOGSTASHDELETIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Elasticsearch20170613
{
namespace Models
{
  class CancelLogstashDeletionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CancelLogstashDeletionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(clientToken, clientToken_);
    };
    friend void from_json(const Darabonba::Json& j, CancelLogstashDeletionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(clientToken, clientToken_);
    };
    CancelLogstashDeletionRequest() = default ;
    CancelLogstashDeletionRequest(const CancelLogstashDeletionRequest &) = default ;
    CancelLogstashDeletionRequest(CancelLogstashDeletionRequest &&) = default ;
    CancelLogstashDeletionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CancelLogstashDeletionRequest() = default ;
    CancelLogstashDeletionRequest& operator=(const CancelLogstashDeletionRequest &) = default ;
    CancelLogstashDeletionRequest& operator=(CancelLogstashDeletionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->clientToken_ != nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string clientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CancelLogstashDeletionRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


  protected:
    // The client token that is used to ensure the idempotence of the request. You can use the client to generate the token, but you must make sure that the token is unique among different requests. The token can contain only ASCII characters and cannot exceed 64 characters in length.
    std::shared_ptr<string> clientToken_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Elasticsearch20170613
#endif
