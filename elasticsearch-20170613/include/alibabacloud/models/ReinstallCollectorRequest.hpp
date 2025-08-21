// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REINSTALLCOLLECTORREQUEST_HPP_
#define ALIBABACLOUD_MODELS_REINSTALLCOLLECTORREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Elasticsearch20170613
{
namespace Models
{
  class ReinstallCollectorRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ReinstallCollectorRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, ReinstallCollectorRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    ReinstallCollectorRequest() = default ;
    ReinstallCollectorRequest(const ReinstallCollectorRequest &) = default ;
    ReinstallCollectorRequest(ReinstallCollectorRequest &&) = default ;
    ReinstallCollectorRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ReinstallCollectorRequest() = default ;
    ReinstallCollectorRequest& operator=(const ReinstallCollectorRequest &) = default ;
    ReinstallCollectorRequest& operator=(ReinstallCollectorRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->clientToken_ != nullptr
        && this->body_ != nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string clientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline ReinstallCollectorRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline string body() const { DARABONBA_PTR_GET_DEFAULT(body_, "") };
    inline ReinstallCollectorRequest& setBody(string body) { DARABONBA_PTR_SET_VALUE(body_, body) };


  protected:
    // The request body parameters. For more information, see the Request body section in this topic.
    std::shared_ptr<string> clientToken_ = nullptr;
    // Indicates whether the shipper is installed. Valid values:
    // 
    // *   true: The shipper is installed.
    // *   false: The shipper fails to be installed.
    std::shared_ptr<string> body_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Elasticsearch20170613
#endif
