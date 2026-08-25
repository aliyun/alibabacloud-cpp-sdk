// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BATCHDELETEMODELSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_BATCHDELETEMODELSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentCore20260804
{
namespace Models
{
  class BatchDeleteModelsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BatchDeleteModelsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(body, body_);
      DARABONBA_PTR_TO_JSON(clientToken, clientToken_);
    };
    friend void from_json(const Darabonba::Json& j, BatchDeleteModelsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(body, body_);
      DARABONBA_PTR_FROM_JSON(clientToken, clientToken_);
    };
    BatchDeleteModelsRequest() = default ;
    BatchDeleteModelsRequest(const BatchDeleteModelsRequest &) = default ;
    BatchDeleteModelsRequest(BatchDeleteModelsRequest &&) = default ;
    BatchDeleteModelsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BatchDeleteModelsRequest() = default ;
    BatchDeleteModelsRequest& operator=(const BatchDeleteModelsRequest &) = default ;
    BatchDeleteModelsRequest& operator=(BatchDeleteModelsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Body : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Body& obj) { 
        DARABONBA_PTR_TO_JSON(modelIds, modelIds_);
      };
      friend void from_json(const Darabonba::Json& j, Body& obj) { 
        DARABONBA_PTR_FROM_JSON(modelIds, modelIds_);
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
      virtual bool empty() const override { return this->modelIds_ == nullptr; };
      // modelIds Field Functions 
      bool hasModelIds() const { return this->modelIds_ != nullptr;};
      void deleteModelIds() { this->modelIds_ = nullptr;};
      inline const vector<string> & getModelIds() const { DARABONBA_PTR_GET_CONST(modelIds_, vector<string>) };
      inline vector<string> getModelIds() { DARABONBA_PTR_GET(modelIds_, vector<string>) };
      inline Body& setModelIds(const vector<string> & modelIds) { DARABONBA_PTR_SET_VALUE(modelIds_, modelIds) };
      inline Body& setModelIds(vector<string> && modelIds) { DARABONBA_PTR_SET_RVALUE(modelIds_, modelIds) };


    protected:
      // This parameter is required.
      shared_ptr<vector<string>> modelIds_ {};
    };

    virtual bool empty() const override { return this->body_ == nullptr
        && this->clientToken_ == nullptr; };
    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const BatchDeleteModelsRequest::Body & getBody() const { DARABONBA_PTR_GET_CONST(body_, BatchDeleteModelsRequest::Body) };
    inline BatchDeleteModelsRequest::Body getBody() { DARABONBA_PTR_GET(body_, BatchDeleteModelsRequest::Body) };
    inline BatchDeleteModelsRequest& setBody(const BatchDeleteModelsRequest::Body & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline BatchDeleteModelsRequest& setBody(BatchDeleteModelsRequest::Body && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline BatchDeleteModelsRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


  protected:
    shared_ptr<BatchDeleteModelsRequest::Body> body_ {};
    shared_ptr<string> clientToken_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentCore20260804
#endif
