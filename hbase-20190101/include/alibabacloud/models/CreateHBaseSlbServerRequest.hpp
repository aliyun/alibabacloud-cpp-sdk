// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEHBASESLBSERVERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEHBASESLBSERVERREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace HBase20190101
{
namespace Models
{
  class CreateHBaseSlbServerRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateHBaseSlbServerRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(SlbServer, slbServer_);
    };
    friend void from_json(const Darabonba::Json& j, CreateHBaseSlbServerRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(SlbServer, slbServer_);
    };
    CreateHBaseSlbServerRequest() = default ;
    CreateHBaseSlbServerRequest(const CreateHBaseSlbServerRequest &) = default ;
    CreateHBaseSlbServerRequest(CreateHBaseSlbServerRequest &&) = default ;
    CreateHBaseSlbServerRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateHBaseSlbServerRequest() = default ;
    CreateHBaseSlbServerRequest& operator=(const CreateHBaseSlbServerRequest &) = default ;
    CreateHBaseSlbServerRequest& operator=(CreateHBaseSlbServerRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clientToken_ == nullptr
        && this->clusterId_ == nullptr && this->slbServer_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateHBaseSlbServerRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string getClusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline CreateHBaseSlbServerRequest& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // slbServer Field Functions 
    bool hasSlbServer() const { return this->slbServer_ != nullptr;};
    void deleteSlbServer() { this->slbServer_ = nullptr;};
    inline string getSlbServer() const { DARABONBA_PTR_GET_DEFAULT(slbServer_, "") };
    inline CreateHBaseSlbServerRequest& setSlbServer(string slbServer) { DARABONBA_PTR_SET_VALUE(slbServer_, slbServer) };


  protected:
    // The client token.
    shared_ptr<string> clientToken_ {};
    // The cluster ID.
    // 
    // This parameter is required.
    shared_ptr<string> clusterId_ {};
    // The load balancing service to create. Valid values:
    // 
    // - **thrift**: the Thrift cross-language and cross-platform remote procedure call (RPC) protocol service.
    // - **rest**: the HTTP protocol service.
    // 
    // This parameter is required.
    shared_ptr<string> slbServer_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace HBase20190101
#endif
