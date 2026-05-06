// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTMODELTEMPLATESSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTMODELTEMPLATESSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AppstreamCenter20210901
{
namespace Models
{
  class ListModelTemplatesShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListModelTemplatesShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AgentPlatform, agentPlatform_);
      DARABONBA_PTR_TO_JSON(AgentProvider, agentProvider_);
      DARABONBA_PTR_TO_JSON(BizType, bizType_);
      DARABONBA_PTR_TO_JSON(HasModel, hasModel_);
      DARABONBA_PTR_TO_JSON(ModelTemplateIdList, modelTemplateIdListShrink_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
    };
    friend void from_json(const Darabonba::Json& j, ListModelTemplatesShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AgentPlatform, agentPlatform_);
      DARABONBA_PTR_FROM_JSON(AgentProvider, agentProvider_);
      DARABONBA_PTR_FROM_JSON(BizType, bizType_);
      DARABONBA_PTR_FROM_JSON(HasModel, hasModel_);
      DARABONBA_PTR_FROM_JSON(ModelTemplateIdList, modelTemplateIdListShrink_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
    };
    ListModelTemplatesShrinkRequest() = default ;
    ListModelTemplatesShrinkRequest(const ListModelTemplatesShrinkRequest &) = default ;
    ListModelTemplatesShrinkRequest(ListModelTemplatesShrinkRequest &&) = default ;
    ListModelTemplatesShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListModelTemplatesShrinkRequest() = default ;
    ListModelTemplatesShrinkRequest& operator=(const ListModelTemplatesShrinkRequest &) = default ;
    ListModelTemplatesShrinkRequest& operator=(ListModelTemplatesShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->agentPlatform_ == nullptr
        && this->agentProvider_ == nullptr && this->bizType_ == nullptr && this->hasModel_ == nullptr && this->modelTemplateIdListShrink_ == nullptr && this->pageNumber_ == nullptr
        && this->pageSize_ == nullptr; };
    // agentPlatform Field Functions 
    bool hasAgentPlatform() const { return this->agentPlatform_ != nullptr;};
    void deleteAgentPlatform() { this->agentPlatform_ = nullptr;};
    inline string getAgentPlatform() const { DARABONBA_PTR_GET_DEFAULT(agentPlatform_, "") };
    inline ListModelTemplatesShrinkRequest& setAgentPlatform(string agentPlatform) { DARABONBA_PTR_SET_VALUE(agentPlatform_, agentPlatform) };


    // agentProvider Field Functions 
    bool hasAgentProvider() const { return this->agentProvider_ != nullptr;};
    void deleteAgentProvider() { this->agentProvider_ = nullptr;};
    inline string getAgentProvider() const { DARABONBA_PTR_GET_DEFAULT(agentProvider_, "") };
    inline ListModelTemplatesShrinkRequest& setAgentProvider(string agentProvider) { DARABONBA_PTR_SET_VALUE(agentProvider_, agentProvider) };


    // bizType Field Functions 
    bool hasBizType() const { return this->bizType_ != nullptr;};
    void deleteBizType() { this->bizType_ = nullptr;};
    inline int32_t getBizType() const { DARABONBA_PTR_GET_DEFAULT(bizType_, 0) };
    inline ListModelTemplatesShrinkRequest& setBizType(int32_t bizType) { DARABONBA_PTR_SET_VALUE(bizType_, bizType) };


    // hasModel Field Functions 
    bool hasHasModel() const { return this->hasModel_ != nullptr;};
    void deleteHasModel() { this->hasModel_ = nullptr;};
    inline bool getHasModel() const { DARABONBA_PTR_GET_DEFAULT(hasModel_, false) };
    inline ListModelTemplatesShrinkRequest& setHasModel(bool hasModel) { DARABONBA_PTR_SET_VALUE(hasModel_, hasModel) };


    // modelTemplateIdListShrink Field Functions 
    bool hasModelTemplateIdListShrink() const { return this->modelTemplateIdListShrink_ != nullptr;};
    void deleteModelTemplateIdListShrink() { this->modelTemplateIdListShrink_ = nullptr;};
    inline string getModelTemplateIdListShrink() const { DARABONBA_PTR_GET_DEFAULT(modelTemplateIdListShrink_, "") };
    inline ListModelTemplatesShrinkRequest& setModelTemplateIdListShrink(string modelTemplateIdListShrink) { DARABONBA_PTR_SET_VALUE(modelTemplateIdListShrink_, modelTemplateIdListShrink) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListModelTemplatesShrinkRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListModelTemplatesShrinkRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


  protected:
    shared_ptr<string> agentPlatform_ {};
    // This parameter is required.
    shared_ptr<string> agentProvider_ {};
    // This parameter is required.
    shared_ptr<int32_t> bizType_ {};
    shared_ptr<bool> hasModel_ {};
    shared_ptr<string> modelTemplateIdListShrink_ {};
    shared_ptr<int32_t> pageNumber_ {};
    shared_ptr<int32_t> pageSize_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AppstreamCenter20210901
#endif
