// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTMODELTEMPLATESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTMODELTEMPLATESREQUEST_HPP_
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
  class ListModelTemplatesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListModelTemplatesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AgentPlatform, agentPlatform_);
      DARABONBA_PTR_TO_JSON(AgentProvider, agentProvider_);
      DARABONBA_PTR_TO_JSON(BizType, bizType_);
      DARABONBA_PTR_TO_JSON(HasModel, hasModel_);
      DARABONBA_PTR_TO_JSON(ModelTemplateIdList, modelTemplateIdList_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
    };
    friend void from_json(const Darabonba::Json& j, ListModelTemplatesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AgentPlatform, agentPlatform_);
      DARABONBA_PTR_FROM_JSON(AgentProvider, agentProvider_);
      DARABONBA_PTR_FROM_JSON(BizType, bizType_);
      DARABONBA_PTR_FROM_JSON(HasModel, hasModel_);
      DARABONBA_PTR_FROM_JSON(ModelTemplateIdList, modelTemplateIdList_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
    };
    ListModelTemplatesRequest() = default ;
    ListModelTemplatesRequest(const ListModelTemplatesRequest &) = default ;
    ListModelTemplatesRequest(ListModelTemplatesRequest &&) = default ;
    ListModelTemplatesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListModelTemplatesRequest() = default ;
    ListModelTemplatesRequest& operator=(const ListModelTemplatesRequest &) = default ;
    ListModelTemplatesRequest& operator=(ListModelTemplatesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->agentPlatform_ == nullptr
        && this->agentProvider_ == nullptr && this->bizType_ == nullptr && this->hasModel_ == nullptr && this->modelTemplateIdList_ == nullptr && this->pageNumber_ == nullptr
        && this->pageSize_ == nullptr; };
    // agentPlatform Field Functions 
    bool hasAgentPlatform() const { return this->agentPlatform_ != nullptr;};
    void deleteAgentPlatform() { this->agentPlatform_ = nullptr;};
    inline string getAgentPlatform() const { DARABONBA_PTR_GET_DEFAULT(agentPlatform_, "") };
    inline ListModelTemplatesRequest& setAgentPlatform(string agentPlatform) { DARABONBA_PTR_SET_VALUE(agentPlatform_, agentPlatform) };


    // agentProvider Field Functions 
    bool hasAgentProvider() const { return this->agentProvider_ != nullptr;};
    void deleteAgentProvider() { this->agentProvider_ = nullptr;};
    inline string getAgentProvider() const { DARABONBA_PTR_GET_DEFAULT(agentProvider_, "") };
    inline ListModelTemplatesRequest& setAgentProvider(string agentProvider) { DARABONBA_PTR_SET_VALUE(agentProvider_, agentProvider) };


    // bizType Field Functions 
    bool hasBizType() const { return this->bizType_ != nullptr;};
    void deleteBizType() { this->bizType_ = nullptr;};
    inline int32_t getBizType() const { DARABONBA_PTR_GET_DEFAULT(bizType_, 0) };
    inline ListModelTemplatesRequest& setBizType(int32_t bizType) { DARABONBA_PTR_SET_VALUE(bizType_, bizType) };


    // hasModel Field Functions 
    bool hasHasModel() const { return this->hasModel_ != nullptr;};
    void deleteHasModel() { this->hasModel_ = nullptr;};
    inline bool getHasModel() const { DARABONBA_PTR_GET_DEFAULT(hasModel_, false) };
    inline ListModelTemplatesRequest& setHasModel(bool hasModel) { DARABONBA_PTR_SET_VALUE(hasModel_, hasModel) };


    // modelTemplateIdList Field Functions 
    bool hasModelTemplateIdList() const { return this->modelTemplateIdList_ != nullptr;};
    void deleteModelTemplateIdList() { this->modelTemplateIdList_ = nullptr;};
    inline const vector<string> & getModelTemplateIdList() const { DARABONBA_PTR_GET_CONST(modelTemplateIdList_, vector<string>) };
    inline vector<string> getModelTemplateIdList() { DARABONBA_PTR_GET(modelTemplateIdList_, vector<string>) };
    inline ListModelTemplatesRequest& setModelTemplateIdList(const vector<string> & modelTemplateIdList) { DARABONBA_PTR_SET_VALUE(modelTemplateIdList_, modelTemplateIdList) };
    inline ListModelTemplatesRequest& setModelTemplateIdList(vector<string> && modelTemplateIdList) { DARABONBA_PTR_SET_RVALUE(modelTemplateIdList_, modelTemplateIdList) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListModelTemplatesRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListModelTemplatesRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


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
    // Specifies whether models have been configured in the group.
    shared_ptr<bool> hasModel_ {};
    // The list of template group IDs used for filtering.
    shared_ptr<vector<string>> modelTemplateIdList_ {};
    // The page number, starting from 1. Values 0 and 1 return the same result.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries per page.
    shared_ptr<int32_t> pageSize_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AppstreamCenter20210901
#endif
