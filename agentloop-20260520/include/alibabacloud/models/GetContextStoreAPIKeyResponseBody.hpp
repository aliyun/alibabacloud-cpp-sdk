// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCONTEXTSTOREAPIKEYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETCONTEXTSTOREAPIKEYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentLoop20260520
{
namespace Models
{
  class GetContextStoreAPIKeyResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetContextStoreAPIKeyResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(agentSpace, agentSpace_);
      DARABONBA_PTR_TO_JSON(apiKey, apiKey_);
      DARABONBA_PTR_TO_JSON(contextStoreName, contextStoreName_);
      DARABONBA_PTR_TO_JSON(createTime, createTime_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(regionId, regionId_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetContextStoreAPIKeyResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(agentSpace, agentSpace_);
      DARABONBA_PTR_FROM_JSON(apiKey, apiKey_);
      DARABONBA_PTR_FROM_JSON(contextStoreName, contextStoreName_);
      DARABONBA_PTR_FROM_JSON(createTime, createTime_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(regionId, regionId_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    GetContextStoreAPIKeyResponseBody() = default ;
    GetContextStoreAPIKeyResponseBody(const GetContextStoreAPIKeyResponseBody &) = default ;
    GetContextStoreAPIKeyResponseBody(GetContextStoreAPIKeyResponseBody &&) = default ;
    GetContextStoreAPIKeyResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetContextStoreAPIKeyResponseBody() = default ;
    GetContextStoreAPIKeyResponseBody& operator=(const GetContextStoreAPIKeyResponseBody &) = default ;
    GetContextStoreAPIKeyResponseBody& operator=(GetContextStoreAPIKeyResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->agentSpace_ == nullptr
        && this->apiKey_ == nullptr && this->contextStoreName_ == nullptr && this->createTime_ == nullptr && this->name_ == nullptr && this->regionId_ == nullptr
        && this->requestId_ == nullptr; };
    // agentSpace Field Functions 
    bool hasAgentSpace() const { return this->agentSpace_ != nullptr;};
    void deleteAgentSpace() { this->agentSpace_ = nullptr;};
    inline string getAgentSpace() const { DARABONBA_PTR_GET_DEFAULT(agentSpace_, "") };
    inline GetContextStoreAPIKeyResponseBody& setAgentSpace(string agentSpace) { DARABONBA_PTR_SET_VALUE(agentSpace_, agentSpace) };


    // apiKey Field Functions 
    bool hasApiKey() const { return this->apiKey_ != nullptr;};
    void deleteApiKey() { this->apiKey_ = nullptr;};
    inline string getApiKey() const { DARABONBA_PTR_GET_DEFAULT(apiKey_, "") };
    inline GetContextStoreAPIKeyResponseBody& setApiKey(string apiKey) { DARABONBA_PTR_SET_VALUE(apiKey_, apiKey) };


    // contextStoreName Field Functions 
    bool hasContextStoreName() const { return this->contextStoreName_ != nullptr;};
    void deleteContextStoreName() { this->contextStoreName_ = nullptr;};
    inline string getContextStoreName() const { DARABONBA_PTR_GET_DEFAULT(contextStoreName_, "") };
    inline GetContextStoreAPIKeyResponseBody& setContextStoreName(string contextStoreName) { DARABONBA_PTR_SET_VALUE(contextStoreName_, contextStoreName) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline GetContextStoreAPIKeyResponseBody& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GetContextStoreAPIKeyResponseBody& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline GetContextStoreAPIKeyResponseBody& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetContextStoreAPIKeyResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<string> agentSpace_ {};
    shared_ptr<string> apiKey_ {};
    shared_ptr<string> contextStoreName_ {};
    // Use the UTC time format: yyyy-MM-ddTHH:mm:ssZ
    shared_ptr<string> createTime_ {};
    shared_ptr<string> name_ {};
    shared_ptr<string> regionId_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentLoop20260520
#endif
