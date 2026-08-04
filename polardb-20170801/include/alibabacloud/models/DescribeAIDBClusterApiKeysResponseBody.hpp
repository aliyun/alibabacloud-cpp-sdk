// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAIDBCLUSTERAPIKEYSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAIDBCLUSTERAPIKEYSRESPONSEBODY_HPP_
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
  class DescribeAIDBClusterApiKeysResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAIDBClusterApiKeysResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ApiKeys, apiKeys_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAIDBClusterApiKeysResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ApiKeys, apiKeys_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeAIDBClusterApiKeysResponseBody() = default ;
    DescribeAIDBClusterApiKeysResponseBody(const DescribeAIDBClusterApiKeysResponseBody &) = default ;
    DescribeAIDBClusterApiKeysResponseBody(DescribeAIDBClusterApiKeysResponseBody &&) = default ;
    DescribeAIDBClusterApiKeysResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAIDBClusterApiKeysResponseBody() = default ;
    DescribeAIDBClusterApiKeysResponseBody& operator=(const DescribeAIDBClusterApiKeysResponseBody &) = default ;
    DescribeAIDBClusterApiKeysResponseBody& operator=(DescribeAIDBClusterApiKeysResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ApiKeys : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ApiKeys& obj) { 
        DARABONBA_PTR_TO_JSON(ApiKey, apiKey_);
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(Status, status_);
      };
      friend void from_json(const Darabonba::Json& j, ApiKeys& obj) { 
        DARABONBA_PTR_FROM_JSON(ApiKey, apiKey_);
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
      };
      ApiKeys() = default ;
      ApiKeys(const ApiKeys &) = default ;
      ApiKeys(ApiKeys &&) = default ;
      ApiKeys(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ApiKeys() = default ;
      ApiKeys& operator=(const ApiKeys &) = default ;
      ApiKeys& operator=(ApiKeys &&) = default ;
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
      inline ApiKeys& setApiKey(string apiKey) { DARABONBA_PTR_SET_VALUE(apiKey_, apiKey) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline ApiKeys& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline ApiKeys& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
      inline ApiKeys& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline ApiKeys& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    protected:
      // The API key of the model service.
      shared_ptr<string> apiKey_ {};
      // The creation time.
      shared_ptr<string> createTime_ {};
      // The description of the API key.
      shared_ptr<string> description_ {};
      // ApiKey ID
      shared_ptr<string> id_ {};
      // The status of the API key.
      shared_ptr<string> status_ {};
    };

    virtual bool empty() const override { return this->apiKeys_ == nullptr
        && this->requestId_ == nullptr; };
    // apiKeys Field Functions 
    bool hasApiKeys() const { return this->apiKeys_ != nullptr;};
    void deleteApiKeys() { this->apiKeys_ = nullptr;};
    inline const vector<DescribeAIDBClusterApiKeysResponseBody::ApiKeys> & getApiKeys() const { DARABONBA_PTR_GET_CONST(apiKeys_, vector<DescribeAIDBClusterApiKeysResponseBody::ApiKeys>) };
    inline vector<DescribeAIDBClusterApiKeysResponseBody::ApiKeys> getApiKeys() { DARABONBA_PTR_GET(apiKeys_, vector<DescribeAIDBClusterApiKeysResponseBody::ApiKeys>) };
    inline DescribeAIDBClusterApiKeysResponseBody& setApiKeys(const vector<DescribeAIDBClusterApiKeysResponseBody::ApiKeys> & apiKeys) { DARABONBA_PTR_SET_VALUE(apiKeys_, apiKeys) };
    inline DescribeAIDBClusterApiKeysResponseBody& setApiKeys(vector<DescribeAIDBClusterApiKeysResponseBody::ApiKeys> && apiKeys) { DARABONBA_PTR_SET_RVALUE(apiKeys_, apiKeys) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeAIDBClusterApiKeysResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // API Keys。
    shared_ptr<vector<DescribeAIDBClusterApiKeysResponseBody::ApiKeys>> apiKeys_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
