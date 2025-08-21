// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_VALIDATETRANSFERABLENODESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_VALIDATETRANSFERABLENODESREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ValidateTransferableNodesRequestBody.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Elasticsearch20170613
{
namespace Models
{
  class ValidateTransferableNodesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ValidateTransferableNodesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(body, body_);
      DARABONBA_PTR_TO_JSON(nodeType, nodeType_);
    };
    friend void from_json(const Darabonba::Json& j, ValidateTransferableNodesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(body, body_);
      DARABONBA_PTR_FROM_JSON(nodeType, nodeType_);
    };
    ValidateTransferableNodesRequest() = default ;
    ValidateTransferableNodesRequest(const ValidateTransferableNodesRequest &) = default ;
    ValidateTransferableNodesRequest(ValidateTransferableNodesRequest &&) = default ;
    ValidateTransferableNodesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ValidateTransferableNodesRequest() = default ;
    ValidateTransferableNodesRequest& operator=(const ValidateTransferableNodesRequest &) = default ;
    ValidateTransferableNodesRequest& operator=(ValidateTransferableNodesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->body_ != nullptr
        && this->nodeType_ != nullptr; };
    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const vector<ValidateTransferableNodesRequestBody> & body() const { DARABONBA_PTR_GET_CONST(body_, vector<ValidateTransferableNodesRequestBody>) };
    inline vector<ValidateTransferableNodesRequestBody> body() { DARABONBA_PTR_GET(body_, vector<ValidateTransferableNodesRequestBody>) };
    inline ValidateTransferableNodesRequest& setBody(const vector<ValidateTransferableNodesRequestBody> & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline ValidateTransferableNodesRequest& setBody(vector<ValidateTransferableNodesRequestBody> && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


    // nodeType Field Functions 
    bool hasNodeType() const { return this->nodeType_ != nullptr;};
    void deleteNodeType() { this->nodeType_ = nullptr;};
    inline string nodeType() const { DARABONBA_PTR_GET_DEFAULT(nodeType_, "") };
    inline ValidateTransferableNodesRequest& setNodeType(string nodeType) { DARABONBA_PTR_SET_VALUE(nodeType_, nodeType) };


  protected:
    std::shared_ptr<vector<ValidateTransferableNodesRequestBody>> body_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> nodeType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Elasticsearch20170613
#endif
