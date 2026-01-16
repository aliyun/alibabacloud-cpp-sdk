// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TRANSFERNODEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_TRANSFERNODEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Elasticsearch20170613
{
namespace Models
{
  class TransferNodeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TransferNodeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(body, body_);
      DARABONBA_PTR_TO_JSON(clientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(nodeType, nodeType_);
    };
    friend void from_json(const Darabonba::Json& j, TransferNodeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(body, body_);
      DARABONBA_PTR_FROM_JSON(clientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(nodeType, nodeType_);
    };
    TransferNodeRequest() = default ;
    TransferNodeRequest(const TransferNodeRequest &) = default ;
    TransferNodeRequest(TransferNodeRequest &&) = default ;
    TransferNodeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TransferNodeRequest() = default ;
    TransferNodeRequest& operator=(const TransferNodeRequest &) = default ;
    TransferNodeRequest& operator=(TransferNodeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Body : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Body& obj) { 
        DARABONBA_PTR_TO_JSON(host, host_);
        DARABONBA_PTR_TO_JSON(port, port_);
        DARABONBA_PTR_TO_JSON(zoneId, zoneId_);
      };
      friend void from_json(const Darabonba::Json& j, Body& obj) { 
        DARABONBA_PTR_FROM_JSON(host, host_);
        DARABONBA_PTR_FROM_JSON(port, port_);
        DARABONBA_PTR_FROM_JSON(zoneId, zoneId_);
      };
      Body() = default ;
      Body(const Body &) = default ;
      Body(Body &&) = default ;
      Body(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Body() = default ;
      Body& operator=(const Body &) = default ;
      Body& operator=(Body &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->host_ == nullptr
        && this->port_ == nullptr && this->zoneId_ == nullptr; };
      // host Field Functions 
      bool hasHost() const { return this->host_ != nullptr;};
      void deleteHost() { this->host_ = nullptr;};
      inline string getHost() const { DARABONBA_PTR_GET_DEFAULT(host_, "") };
      inline Body& setHost(string host) { DARABONBA_PTR_SET_VALUE(host_, host) };


      // port Field Functions 
      bool hasPort() const { return this->port_ != nullptr;};
      void deletePort() { this->port_ = nullptr;};
      inline int32_t getPort() const { DARABONBA_PTR_GET_DEFAULT(port_, 0) };
      inline Body& setPort(int32_t port) { DARABONBA_PTR_SET_VALUE(port_, port) };


      // zoneId Field Functions 
      bool hasZoneId() const { return this->zoneId_ != nullptr;};
      void deleteZoneId() { this->zoneId_ = nullptr;};
      inline string getZoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
      inline Body& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


    protected:
      shared_ptr<string> host_ {};
      shared_ptr<int32_t> port_ {};
      shared_ptr<string> zoneId_ {};
    };

    virtual bool empty() const override { return this->body_ == nullptr
        && this->clientToken_ == nullptr && this->nodeType_ == nullptr; };
    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const vector<TransferNodeRequest::Body> & getBody() const { DARABONBA_PTR_GET_CONST(body_, vector<TransferNodeRequest::Body>) };
    inline vector<TransferNodeRequest::Body> getBody() { DARABONBA_PTR_GET(body_, vector<TransferNodeRequest::Body>) };
    inline TransferNodeRequest& setBody(const vector<TransferNodeRequest::Body> & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline TransferNodeRequest& setBody(vector<TransferNodeRequest::Body> && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline TransferNodeRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // nodeType Field Functions 
    bool hasNodeType() const { return this->nodeType_ != nullptr;};
    void deleteNodeType() { this->nodeType_ = nullptr;};
    inline string getNodeType() const { DARABONBA_PTR_GET_DEFAULT(nodeType_, "") };
    inline TransferNodeRequest& setNodeType(string nodeType) { DARABONBA_PTR_SET_VALUE(nodeType_, nodeType) };


  protected:
    shared_ptr<vector<TransferNodeRequest::Body>> body_ {};
    shared_ptr<string> clientToken_ {};
    // This parameter is required.
    shared_ptr<string> nodeType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Elasticsearch20170613
#endif
