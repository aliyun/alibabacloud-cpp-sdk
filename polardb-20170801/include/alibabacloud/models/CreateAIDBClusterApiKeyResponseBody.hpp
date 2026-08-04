// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEAIDBCLUSTERAPIKEYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEAIDBCLUSTERAPIKEYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class CreateAIDBClusterApiKeyResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateAIDBClusterApiKeyResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ApiKey, apiKey_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateAIDBClusterApiKeyResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ApiKey, apiKey_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CreateAIDBClusterApiKeyResponseBody() = default ;
    CreateAIDBClusterApiKeyResponseBody(const CreateAIDBClusterApiKeyResponseBody &) = default ;
    CreateAIDBClusterApiKeyResponseBody(CreateAIDBClusterApiKeyResponseBody &&) = default ;
    CreateAIDBClusterApiKeyResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateAIDBClusterApiKeyResponseBody() = default ;
    CreateAIDBClusterApiKeyResponseBody& operator=(const CreateAIDBClusterApiKeyResponseBody &) = default ;
    CreateAIDBClusterApiKeyResponseBody& operator=(CreateAIDBClusterApiKeyResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ApiKey : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ApiKey& obj) { 
        DARABONBA_PTR_TO_JSON(ApiKey, apiKey_);
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(Status, status_);
      };
      friend void from_json(const Darabonba::Json& j, ApiKey& obj) { 
        DARABONBA_PTR_FROM_JSON(ApiKey, apiKey_);
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
      };
      ApiKey() = default ;
      ApiKey(const ApiKey &) = default ;
      ApiKey(ApiKey &&) = default ;
      ApiKey(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ApiKey() = default ;
      ApiKey& operator=(const ApiKey &) = default ;
      ApiKey& operator=(ApiKey &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->apiKey_ == nullptr
        && this->createTime_ == nullptr && this->description_ == nullptr && this->id_ == nullptr && this->status_ == nullptr; };
      // apiKey Field Functions 
      bool hasApiKey() const { return this->apiKey_ != nullptr;};
      void deleteApiKey() { this->apiKey_ = nullptr;};
      inline string getApiKey() const { DARABONBA_PTR_GET_DEFAULT(apiKey_, "") };
      inline ApiKey& setApiKey(string apiKey) { DARABONBA_PTR_SET_VALUE(apiKey_, apiKey) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline ApiKey& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline ApiKey& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
      inline ApiKey& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline ApiKey& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    protected:
      // The API key of the model service.
      shared_ptr<string> apiKey_ {};
      // The creation time.
      shared_ptr<string> createTime_ {};
      // The description.
      shared_ptr<string> description_ {};
      // id
      shared_ptr<string> id_ {};
      // The API key status.
      shared_ptr<string> status_ {};
    };

    virtual bool empty() const override { return this->apiKey_ == nullptr
        && this->requestId_ == nullptr; };
    // apiKey Field Functions 
    bool hasApiKey() const { return this->apiKey_ != nullptr;};
    void deleteApiKey() { this->apiKey_ = nullptr;};
    inline const CreateAIDBClusterApiKeyResponseBody::ApiKey & getApiKey() const { DARABONBA_PTR_GET_CONST(apiKey_, CreateAIDBClusterApiKeyResponseBody::ApiKey) };
    inline CreateAIDBClusterApiKeyResponseBody::ApiKey getApiKey() { DARABONBA_PTR_GET(apiKey_, CreateAIDBClusterApiKeyResponseBody::ApiKey) };
    inline CreateAIDBClusterApiKeyResponseBody& setApiKey(const CreateAIDBClusterApiKeyResponseBody::ApiKey & apiKey) { DARABONBA_PTR_SET_VALUE(apiKey_, apiKey) };
    inline CreateAIDBClusterApiKeyResponseBody& setApiKey(CreateAIDBClusterApiKeyResponseBody::ApiKey && apiKey) { DARABONBA_PTR_SET_RVALUE(apiKey_, apiKey) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateAIDBClusterApiKeyResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The API key.
    shared_ptr<CreateAIDBClusterApiKeyResponseBody::ApiKey> apiKey_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
