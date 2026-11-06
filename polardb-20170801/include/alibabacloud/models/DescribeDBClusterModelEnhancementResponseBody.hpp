// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDBCLUSTERMODELENHANCEMENTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDBCLUSTERMODELENHANCEMENTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class DescribeDBClusterModelEnhancementResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDBClusterModelEnhancementResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(ModelEnhancementKeyNumber, modelEnhancementKeyNumber_);
      DARABONBA_PTR_TO_JSON(ModelEnhancementKeys, modelEnhancementKeys_);
      DARABONBA_PTR_TO_JSON(ModelEnhancementStatus, modelEnhancementStatus_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDBClusterModelEnhancementResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(ModelEnhancementKeyNumber, modelEnhancementKeyNumber_);
      DARABONBA_PTR_FROM_JSON(ModelEnhancementKeys, modelEnhancementKeys_);
      DARABONBA_PTR_FROM_JSON(ModelEnhancementStatus, modelEnhancementStatus_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeDBClusterModelEnhancementResponseBody() = default ;
    DescribeDBClusterModelEnhancementResponseBody(const DescribeDBClusterModelEnhancementResponseBody &) = default ;
    DescribeDBClusterModelEnhancementResponseBody(DescribeDBClusterModelEnhancementResponseBody &&) = default ;
    DescribeDBClusterModelEnhancementResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDBClusterModelEnhancementResponseBody() = default ;
    DescribeDBClusterModelEnhancementResponseBody& operator=(const DescribeDBClusterModelEnhancementResponseBody &) = default ;
    DescribeDBClusterModelEnhancementResponseBody& operator=(DescribeDBClusterModelEnhancementResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ModelEnhancementKeys : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ModelEnhancementKeys& obj) { 
        DARABONBA_PTR_TO_JSON(ApiKey, apiKey_);
        DARABONBA_PTR_TO_JSON(ApiKeyId, apiKeyId_);
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(ExpireTime, expireTime_);
      };
      friend void from_json(const Darabonba::Json& j, ModelEnhancementKeys& obj) { 
        DARABONBA_PTR_FROM_JSON(ApiKey, apiKey_);
        DARABONBA_PTR_FROM_JSON(ApiKeyId, apiKeyId_);
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(ExpireTime, expireTime_);
      };
      ModelEnhancementKeys() = default ;
      ModelEnhancementKeys(const ModelEnhancementKeys &) = default ;
      ModelEnhancementKeys(ModelEnhancementKeys &&) = default ;
      ModelEnhancementKeys(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ModelEnhancementKeys() = default ;
      ModelEnhancementKeys& operator=(const ModelEnhancementKeys &) = default ;
      ModelEnhancementKeys& operator=(ModelEnhancementKeys &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->apiKey_ == nullptr
        && this->apiKeyId_ == nullptr && this->createTime_ == nullptr && this->description_ == nullptr && this->expireTime_ == nullptr; };
      // apiKey Field Functions 
      bool hasApiKey() const { return this->apiKey_ != nullptr;};
      void deleteApiKey() { this->apiKey_ = nullptr;};
      inline string getApiKey() const { DARABONBA_PTR_GET_DEFAULT(apiKey_, "") };
      inline ModelEnhancementKeys& setApiKey(string apiKey) { DARABONBA_PTR_SET_VALUE(apiKey_, apiKey) };


      // apiKeyId Field Functions 
      bool hasApiKeyId() const { return this->apiKeyId_ != nullptr;};
      void deleteApiKeyId() { this->apiKeyId_ = nullptr;};
      inline string getApiKeyId() const { DARABONBA_PTR_GET_DEFAULT(apiKeyId_, "") };
      inline ModelEnhancementKeys& setApiKeyId(string apiKeyId) { DARABONBA_PTR_SET_VALUE(apiKeyId_, apiKeyId) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline ModelEnhancementKeys& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline ModelEnhancementKeys& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // expireTime Field Functions 
      bool hasExpireTime() const { return this->expireTime_ != nullptr;};
      void deleteExpireTime() { this->expireTime_ = nullptr;};
      inline string getExpireTime() const { DARABONBA_PTR_GET_DEFAULT(expireTime_, "") };
      inline ModelEnhancementKeys& setExpireTime(string expireTime) { DARABONBA_PTR_SET_VALUE(expireTime_, expireTime) };


    protected:
      // The value of the API key.
      shared_ptr<string> apiKey_ {};
      // The ID of the API key.
      shared_ptr<string> apiKeyId_ {};
      // The time when the API key was created, in the ISO 8601 UTC format (YYYY-MM-DDThh:mm:ssZ).
      shared_ptr<string> createTime_ {};
      // The description of the API key.
      shared_ptr<string> description_ {};
      // The expiration time of the API key, in the ISO 8601 UTC format (YYYY-MM-DDThh:mm:ssZ).
      shared_ptr<string> expireTime_ {};
    };

    virtual bool empty() const override { return this->createTime_ == nullptr
        && this->modelEnhancementKeyNumber_ == nullptr && this->modelEnhancementKeys_ == nullptr && this->modelEnhancementStatus_ == nullptr && this->requestId_ == nullptr; };
    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline DescribeDBClusterModelEnhancementResponseBody& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // modelEnhancementKeyNumber Field Functions 
    bool hasModelEnhancementKeyNumber() const { return this->modelEnhancementKeyNumber_ != nullptr;};
    void deleteModelEnhancementKeyNumber() { this->modelEnhancementKeyNumber_ = nullptr;};
    inline int32_t getModelEnhancementKeyNumber() const { DARABONBA_PTR_GET_DEFAULT(modelEnhancementKeyNumber_, 0) };
    inline DescribeDBClusterModelEnhancementResponseBody& setModelEnhancementKeyNumber(int32_t modelEnhancementKeyNumber) { DARABONBA_PTR_SET_VALUE(modelEnhancementKeyNumber_, modelEnhancementKeyNumber) };


    // modelEnhancementKeys Field Functions 
    bool hasModelEnhancementKeys() const { return this->modelEnhancementKeys_ != nullptr;};
    void deleteModelEnhancementKeys() { this->modelEnhancementKeys_ = nullptr;};
    inline const vector<DescribeDBClusterModelEnhancementResponseBody::ModelEnhancementKeys> & getModelEnhancementKeys() const { DARABONBA_PTR_GET_CONST(modelEnhancementKeys_, vector<DescribeDBClusterModelEnhancementResponseBody::ModelEnhancementKeys>) };
    inline vector<DescribeDBClusterModelEnhancementResponseBody::ModelEnhancementKeys> getModelEnhancementKeys() { DARABONBA_PTR_GET(modelEnhancementKeys_, vector<DescribeDBClusterModelEnhancementResponseBody::ModelEnhancementKeys>) };
    inline DescribeDBClusterModelEnhancementResponseBody& setModelEnhancementKeys(const vector<DescribeDBClusterModelEnhancementResponseBody::ModelEnhancementKeys> & modelEnhancementKeys) { DARABONBA_PTR_SET_VALUE(modelEnhancementKeys_, modelEnhancementKeys) };
    inline DescribeDBClusterModelEnhancementResponseBody& setModelEnhancementKeys(vector<DescribeDBClusterModelEnhancementResponseBody::ModelEnhancementKeys> && modelEnhancementKeys) { DARABONBA_PTR_SET_RVALUE(modelEnhancementKeys_, modelEnhancementKeys) };


    // modelEnhancementStatus Field Functions 
    bool hasModelEnhancementStatus() const { return this->modelEnhancementStatus_ != nullptr;};
    void deleteModelEnhancementStatus() { this->modelEnhancementStatus_ = nullptr;};
    inline string getModelEnhancementStatus() const { DARABONBA_PTR_GET_DEFAULT(modelEnhancementStatus_, "") };
    inline DescribeDBClusterModelEnhancementResponseBody& setModelEnhancementStatus(string modelEnhancementStatus) { DARABONBA_PTR_SET_VALUE(modelEnhancementStatus_, modelEnhancementStatus) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDBClusterModelEnhancementResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The time when the model enhancement feature was enabled, in the ISO 8601 UTC format (YYYY-MM-DDThh:mm:ssZ).
    shared_ptr<string> createTime_ {};
    // The number of API keys for model enhancement.
    shared_ptr<int32_t> modelEnhancementKeyNumber_ {};
    // The list of API keys for model enhancement.
    shared_ptr<vector<DescribeDBClusterModelEnhancementResponseBody::ModelEnhancementKeys>> modelEnhancementKeys_ {};
    // The status of the model enhancement feature. A value of ON indicates that the feature is enabled.
    shared_ptr<string> modelEnhancementStatus_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
