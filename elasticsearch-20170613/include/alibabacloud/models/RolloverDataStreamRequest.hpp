// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ROLLOVERDATASTREAMREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ROLLOVERDATASTREAMREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Elasticsearch20170613
{
namespace Models
{
  class RolloverDataStreamRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RolloverDataStreamRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
    };
    friend void from_json(const Darabonba::Json& j, RolloverDataStreamRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
    };
    RolloverDataStreamRequest() = default ;
    RolloverDataStreamRequest(const RolloverDataStreamRequest &) = default ;
    RolloverDataStreamRequest(RolloverDataStreamRequest &&) = default ;
    RolloverDataStreamRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RolloverDataStreamRequest() = default ;
    RolloverDataStreamRequest& operator=(const RolloverDataStreamRequest &) = default ;
    RolloverDataStreamRequest& operator=(RolloverDataStreamRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->clientToken_ != nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string clientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline RolloverDataStreamRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


  protected:
    std::shared_ptr<string> clientToken_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Elasticsearch20170613
#endif
