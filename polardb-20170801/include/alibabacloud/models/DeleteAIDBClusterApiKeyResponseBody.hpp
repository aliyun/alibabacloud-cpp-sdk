// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEAIDBCLUSTERAPIKEYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DELETEAIDBCLUSTERAPIKEYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class DeleteAIDBClusterApiKeyResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteAIDBClusterApiKeyResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ApiKey, apiKey_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteAIDBClusterApiKeyResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ApiKey, apiKey_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DeleteAIDBClusterApiKeyResponseBody() = default ;
    DeleteAIDBClusterApiKeyResponseBody(const DeleteAIDBClusterApiKeyResponseBody &) = default ;
    DeleteAIDBClusterApiKeyResponseBody(DeleteAIDBClusterApiKeyResponseBody &&) = default ;
    DeleteAIDBClusterApiKeyResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteAIDBClusterApiKeyResponseBody() = default ;
    DeleteAIDBClusterApiKeyResponseBody& operator=(const DeleteAIDBClusterApiKeyResponseBody &) = default ;
    DeleteAIDBClusterApiKeyResponseBody& operator=(DeleteAIDBClusterApiKeyResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->apiKey_ == nullptr
        && this->requestId_ == nullptr; };
    // apiKey Field Functions 
    bool hasApiKey() const { return this->apiKey_ != nullptr;};
    void deleteApiKey() { this->apiKey_ = nullptr;};
    inline string getApiKey() const { DARABONBA_PTR_GET_DEFAULT(apiKey_, "") };
    inline DeleteAIDBClusterApiKeyResponseBody& setApiKey(string apiKey) { DARABONBA_PTR_SET_VALUE(apiKey_, apiKey) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DeleteAIDBClusterApiKeyResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The API key of the model service.
    shared_ptr<string> apiKey_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
