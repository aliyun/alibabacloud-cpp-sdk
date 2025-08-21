// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEBLACKIPSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEBLACKIPSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Elasticsearch20170613
{
namespace Models
{
  class UpdateBlackIpsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateBlackIpsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(clientToken, clientToken_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateBlackIpsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(clientToken, clientToken_);
    };
    UpdateBlackIpsRequest() = default ;
    UpdateBlackIpsRequest(const UpdateBlackIpsRequest &) = default ;
    UpdateBlackIpsRequest(UpdateBlackIpsRequest &&) = default ;
    UpdateBlackIpsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateBlackIpsRequest() = default ;
    UpdateBlackIpsRequest& operator=(const UpdateBlackIpsRequest &) = default ;
    UpdateBlackIpsRequest& operator=(UpdateBlackIpsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->clientToken_ != nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string clientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline UpdateBlackIpsRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


  protected:
    std::shared_ptr<string> clientToken_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Elasticsearch20170613
#endif
