// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CLOSEHTTPSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CLOSEHTTPSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Elasticsearch20170613
{
namespace Models
{
  class CloseHttpsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CloseHttpsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(clientToken, clientToken_);
    };
    friend void from_json(const Darabonba::Json& j, CloseHttpsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(clientToken, clientToken_);
    };
    CloseHttpsRequest() = default ;
    CloseHttpsRequest(const CloseHttpsRequest &) = default ;
    CloseHttpsRequest(CloseHttpsRequest &&) = default ;
    CloseHttpsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CloseHttpsRequest() = default ;
    CloseHttpsRequest& operator=(const CloseHttpsRequest &) = default ;
    CloseHttpsRequest& operator=(CloseHttpsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clientToken_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CloseHttpsRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


  protected:
    shared_ptr<string> clientToken_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Elasticsearch20170613
#endif
