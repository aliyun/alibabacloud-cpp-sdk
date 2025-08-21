// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TRANSFERNODEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_TRANSFERNODEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/TransferNodeRequestBody.hpp>
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
    virtual bool empty() const override { this->body_ != nullptr
        && this->clientToken_ != nullptr && this->nodeType_ != nullptr; };
    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const vector<TransferNodeRequestBody> & body() const { DARABONBA_PTR_GET_CONST(body_, vector<TransferNodeRequestBody>) };
    inline vector<TransferNodeRequestBody> body() { DARABONBA_PTR_GET(body_, vector<TransferNodeRequestBody>) };
    inline TransferNodeRequest& setBody(const vector<TransferNodeRequestBody> & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline TransferNodeRequest& setBody(vector<TransferNodeRequestBody> && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string clientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline TransferNodeRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // nodeType Field Functions 
    bool hasNodeType() const { return this->nodeType_ != nullptr;};
    void deleteNodeType() { this->nodeType_ = nullptr;};
    inline string nodeType() const { DARABONBA_PTR_GET_DEFAULT(nodeType_, "") };
    inline TransferNodeRequest& setNodeType(string nodeType) { DARABONBA_PTR_SET_VALUE(nodeType_, nodeType) };


  protected:
    std::shared_ptr<vector<TransferNodeRequestBody>> body_ = nullptr;
    std::shared_ptr<string> clientToken_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> nodeType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Elasticsearch20170613
#endif
