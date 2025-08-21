// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEPIPELINESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEPIPELINESREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreatePipelinesRequestBody.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Elasticsearch20170613
{
namespace Models
{
  class CreatePipelinesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreatePipelinesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(body, body_);
      DARABONBA_PTR_TO_JSON(trigger, trigger_);
    };
    friend void from_json(const Darabonba::Json& j, CreatePipelinesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(body, body_);
      DARABONBA_PTR_FROM_JSON(trigger, trigger_);
    };
    CreatePipelinesRequest() = default ;
    CreatePipelinesRequest(const CreatePipelinesRequest &) = default ;
    CreatePipelinesRequest(CreatePipelinesRequest &&) = default ;
    CreatePipelinesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreatePipelinesRequest() = default ;
    CreatePipelinesRequest& operator=(const CreatePipelinesRequest &) = default ;
    CreatePipelinesRequest& operator=(CreatePipelinesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->clientToken_ != nullptr
        && this->body_ != nullptr && this->trigger_ != nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string clientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreatePipelinesRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const vector<CreatePipelinesRequestBody> & body() const { DARABONBA_PTR_GET_CONST(body_, vector<CreatePipelinesRequestBody>) };
    inline vector<CreatePipelinesRequestBody> body() { DARABONBA_PTR_GET(body_, vector<CreatePipelinesRequestBody>) };
    inline CreatePipelinesRequest& setBody(const vector<CreatePipelinesRequestBody> & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline CreatePipelinesRequest& setBody(vector<CreatePipelinesRequestBody> && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


    // trigger Field Functions 
    bool hasTrigger() const { return this->trigger_ != nullptr;};
    void deleteTrigger() { this->trigger_ = nullptr;};
    inline bool trigger() const { DARABONBA_PTR_GET_DEFAULT(trigger_, false) };
    inline CreatePipelinesRequest& setTrigger(bool trigger) { DARABONBA_PTR_SET_VALUE(trigger_, trigger) };


  protected:
    std::shared_ptr<string> clientToken_ = nullptr;
    std::shared_ptr<vector<CreatePipelinesRequestBody>> body_ = nullptr;
    std::shared_ptr<bool> trigger_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Elasticsearch20170613
#endif
