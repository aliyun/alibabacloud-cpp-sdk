// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTMODELPROVIDERTEMPLATESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTMODELPROVIDERTEMPLATESREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AppstreamCenter20210901
{
namespace Models
{
  class ListModelProviderTemplatesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListModelProviderTemplatesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AgentPlatform, agentPlatform_);
      DARABONBA_PTR_TO_JSON(AgentProvider, agentProvider_);
      DARABONBA_PTR_TO_JSON(BizType, bizType_);
      DARABONBA_PTR_TO_JSON(ModelTemplateId, modelTemplateId_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(ProviderName, providerName_);
      DARABONBA_PTR_TO_JSON(ProviderTemplateIds, providerTemplateIds_);
    };
    friend void from_json(const Darabonba::Json& j, ListModelProviderTemplatesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AgentPlatform, agentPlatform_);
      DARABONBA_PTR_FROM_JSON(AgentProvider, agentProvider_);
      DARABONBA_PTR_FROM_JSON(BizType, bizType_);
      DARABONBA_PTR_FROM_JSON(ModelTemplateId, modelTemplateId_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(ProviderName, providerName_);
      DARABONBA_PTR_FROM_JSON(ProviderTemplateIds, providerTemplateIds_);
    };
    ListModelProviderTemplatesRequest() = default ;
    ListModelProviderTemplatesRequest(const ListModelProviderTemplatesRequest &) = default ;
    ListModelProviderTemplatesRequest(ListModelProviderTemplatesRequest &&) = default ;
    ListModelProviderTemplatesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListModelProviderTemplatesRequest() = default ;
    ListModelProviderTemplatesRequest& operator=(const ListModelProviderTemplatesRequest &) = default ;
    ListModelProviderTemplatesRequest& operator=(ListModelProviderTemplatesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->agentPlatform_ == nullptr
        && this->agentProvider_ == nullptr && this->bizType_ == nullptr && this->modelTemplateId_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr
        && this->providerName_ == nullptr && this->providerTemplateIds_ == nullptr; };
    // agentPlatform Field Functions 
    bool hasAgentPlatform() const { return this->agentPlatform_ != nullptr;};
    void deleteAgentPlatform() { this->agentPlatform_ = nullptr;};
    inline string getAgentPlatform() const { DARABONBA_PTR_GET_DEFAULT(agentPlatform_, "") };
    inline ListModelProviderTemplatesRequest& setAgentPlatform(string agentPlatform) { DARABONBA_PTR_SET_VALUE(agentPlatform_, agentPlatform) };


    // agentProvider Field Functions 
    bool hasAgentProvider() const { return this->agentProvider_ != nullptr;};
    void deleteAgentProvider() { this->agentProvider_ = nullptr;};
    inline string getAgentProvider() const { DARABONBA_PTR_GET_DEFAULT(agentProvider_, "") };
    inline ListModelProviderTemplatesRequest& setAgentProvider(string agentProvider) { DARABONBA_PTR_SET_VALUE(agentProvider_, agentProvider) };


    // bizType Field Functions 
    bool hasBizType() const { return this->bizType_ != nullptr;};
    void deleteBizType() { this->bizType_ = nullptr;};
    inline int32_t getBizType() const { DARABONBA_PTR_GET_DEFAULT(bizType_, 0) };
    inline ListModelProviderTemplatesRequest& setBizType(int32_t bizType) { DARABONBA_PTR_SET_VALUE(bizType_, bizType) };


    // modelTemplateId Field Functions 
    bool hasModelTemplateId() const { return this->modelTemplateId_ != nullptr;};
    void deleteModelTemplateId() { this->modelTemplateId_ = nullptr;};
    inline string getModelTemplateId() const { DARABONBA_PTR_GET_DEFAULT(modelTemplateId_, "") };
    inline ListModelProviderTemplatesRequest& setModelTemplateId(string modelTemplateId) { DARABONBA_PTR_SET_VALUE(modelTemplateId_, modelTemplateId) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListModelProviderTemplatesRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListModelProviderTemplatesRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // providerName Field Functions 
    bool hasProviderName() const { return this->providerName_ != nullptr;};
    void deleteProviderName() { this->providerName_ = nullptr;};
    inline string getProviderName() const { DARABONBA_PTR_GET_DEFAULT(providerName_, "") };
    inline ListModelProviderTemplatesRequest& setProviderName(string providerName) { DARABONBA_PTR_SET_VALUE(providerName_, providerName) };


    // providerTemplateIds Field Functions 
    bool hasProviderTemplateIds() const { return this->providerTemplateIds_ != nullptr;};
    void deleteProviderTemplateIds() { this->providerTemplateIds_ = nullptr;};
    inline const vector<string> & getProviderTemplateIds() const { DARABONBA_PTR_GET_CONST(providerTemplateIds_, vector<string>) };
    inline vector<string> getProviderTemplateIds() { DARABONBA_PTR_GET(providerTemplateIds_, vector<string>) };
    inline ListModelProviderTemplatesRequest& setProviderTemplateIds(const vector<string> & providerTemplateIds) { DARABONBA_PTR_SET_VALUE(providerTemplateIds_, providerTemplateIds) };
    inline ListModelProviderTemplatesRequest& setProviderTemplateIds(vector<string> && providerTemplateIds) { DARABONBA_PTR_SET_RVALUE(providerTemplateIds_, providerTemplateIds) };


  protected:
    // The Agent platform.
    shared_ptr<string> agentPlatform_ {};
    // The name of the Agent provider.
    // 
    // This parameter is required.
    shared_ptr<string> agentProvider_ {};
    // The business type.
    // 
    // This parameter is required.
    shared_ptr<int32_t> bizType_ {};
    // The model group ID to filter by.
    shared_ptr<string> modelTemplateId_ {};
    // The page number, starting from 1. Values 0 and 1 return the same result.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries per page.
    shared_ptr<int32_t> pageSize_ {};
    // The name of the model provider to filter by.
    shared_ptr<string> providerName_ {};
    // The model provider template IDs to filter by.
    shared_ptr<vector<string>> providerTemplateIds_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AppstreamCenter20210901
#endif
