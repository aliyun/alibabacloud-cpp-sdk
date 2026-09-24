// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PAGEQUERYAGENTLISTNEWREQUEST_HPP_
#define ALIBABACLOUD_MODELS_PAGEQUERYAGENTLISTNEWREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aiccs20191015
{
namespace Models
{
  class PageQueryAgentListNewRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PageQueryAgentListNewRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AgentId, agentId_);
      DARABONBA_PTR_TO_JSON(AgentName, agentName_);
      DARABONBA_PTR_TO_JSON(InboundConfigurableOnly, inboundConfigurableOnly_);
      DARABONBA_PTR_TO_JSON(IsAvailable, isAvailable_);
      DARABONBA_PTR_TO_JSON(PageIndex, pageIndex_);
      DARABONBA_PTR_TO_JSON(PageNo, pageNo_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(ServiceDirection, serviceDirection_);
      DARABONBA_PTR_TO_JSON(TemplateId, templateId_);
    };
    friend void from_json(const Darabonba::Json& j, PageQueryAgentListNewRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AgentId, agentId_);
      DARABONBA_PTR_FROM_JSON(AgentName, agentName_);
      DARABONBA_PTR_FROM_JSON(InboundConfigurableOnly, inboundConfigurableOnly_);
      DARABONBA_PTR_FROM_JSON(IsAvailable, isAvailable_);
      DARABONBA_PTR_FROM_JSON(PageIndex, pageIndex_);
      DARABONBA_PTR_FROM_JSON(PageNo, pageNo_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(ServiceDirection, serviceDirection_);
      DARABONBA_PTR_FROM_JSON(TemplateId, templateId_);
    };
    PageQueryAgentListNewRequest() = default ;
    PageQueryAgentListNewRequest(const PageQueryAgentListNewRequest &) = default ;
    PageQueryAgentListNewRequest(PageQueryAgentListNewRequest &&) = default ;
    PageQueryAgentListNewRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PageQueryAgentListNewRequest() = default ;
    PageQueryAgentListNewRequest& operator=(const PageQueryAgentListNewRequest &) = default ;
    PageQueryAgentListNewRequest& operator=(PageQueryAgentListNewRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->agentId_ == nullptr
        && this->agentName_ == nullptr && this->inboundConfigurableOnly_ == nullptr && this->isAvailable_ == nullptr && this->pageIndex_ == nullptr && this->pageNo_ == nullptr
        && this->pageSize_ == nullptr && this->serviceDirection_ == nullptr && this->templateId_ == nullptr; };
    // agentId Field Functions 
    bool hasAgentId() const { return this->agentId_ != nullptr;};
    void deleteAgentId() { this->agentId_ = nullptr;};
    inline string getAgentId() const { DARABONBA_PTR_GET_DEFAULT(agentId_, "") };
    inline PageQueryAgentListNewRequest& setAgentId(string agentId) { DARABONBA_PTR_SET_VALUE(agentId_, agentId) };


    // agentName Field Functions 
    bool hasAgentName() const { return this->agentName_ != nullptr;};
    void deleteAgentName() { this->agentName_ = nullptr;};
    inline string getAgentName() const { DARABONBA_PTR_GET_DEFAULT(agentName_, "") };
    inline PageQueryAgentListNewRequest& setAgentName(string agentName) { DARABONBA_PTR_SET_VALUE(agentName_, agentName) };


    // inboundConfigurableOnly Field Functions 
    bool hasInboundConfigurableOnly() const { return this->inboundConfigurableOnly_ != nullptr;};
    void deleteInboundConfigurableOnly() { this->inboundConfigurableOnly_ = nullptr;};
    inline bool getInboundConfigurableOnly() const { DARABONBA_PTR_GET_DEFAULT(inboundConfigurableOnly_, false) };
    inline PageQueryAgentListNewRequest& setInboundConfigurableOnly(bool inboundConfigurableOnly) { DARABONBA_PTR_SET_VALUE(inboundConfigurableOnly_, inboundConfigurableOnly) };


    // isAvailable Field Functions 
    bool hasIsAvailable() const { return this->isAvailable_ != nullptr;};
    void deleteIsAvailable() { this->isAvailable_ = nullptr;};
    inline bool getIsAvailable() const { DARABONBA_PTR_GET_DEFAULT(isAvailable_, false) };
    inline PageQueryAgentListNewRequest& setIsAvailable(bool isAvailable) { DARABONBA_PTR_SET_VALUE(isAvailable_, isAvailable) };


    // pageIndex Field Functions 
    bool hasPageIndex() const { return this->pageIndex_ != nullptr;};
    void deletePageIndex() { this->pageIndex_ = nullptr;};
    inline int64_t getPageIndex() const { DARABONBA_PTR_GET_DEFAULT(pageIndex_, 0L) };
    inline PageQueryAgentListNewRequest& setPageIndex(int64_t pageIndex) { DARABONBA_PTR_SET_VALUE(pageIndex_, pageIndex) };


    // pageNo Field Functions 
    bool hasPageNo() const { return this->pageNo_ != nullptr;};
    void deletePageNo() { this->pageNo_ = nullptr;};
    inline int64_t getPageNo() const { DARABONBA_PTR_GET_DEFAULT(pageNo_, 0L) };
    inline PageQueryAgentListNewRequest& setPageNo(int64_t pageNo) { DARABONBA_PTR_SET_VALUE(pageNo_, pageNo) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline PageQueryAgentListNewRequest& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // serviceDirection Field Functions 
    bool hasServiceDirection() const { return this->serviceDirection_ != nullptr;};
    void deleteServiceDirection() { this->serviceDirection_ = nullptr;};
    inline string getServiceDirection() const { DARABONBA_PTR_GET_DEFAULT(serviceDirection_, "") };
    inline PageQueryAgentListNewRequest& setServiceDirection(string serviceDirection) { DARABONBA_PTR_SET_VALUE(serviceDirection_, serviceDirection) };


    // templateId Field Functions 
    bool hasTemplateId() const { return this->templateId_ != nullptr;};
    void deleteTemplateId() { this->templateId_ = nullptr;};
    inline int64_t getTemplateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, 0L) };
    inline PageQueryAgentListNewRequest& setTemplateId(int64_t templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


  protected:
    // Agent ID
    shared_ptr<string> agentId_ {};
    // The agent name.
    shared_ptr<string> agentName_ {};
    // Specifies whether to return only candidate agents that are configurable for inbound calls.
    shared_ptr<bool> inboundConfigurableOnly_ {};
    // Specifies whether the agent is available for outbound calls. A value of True indicates that the current deployment branch of the agent has a published version and is available for outbound calls.
    shared_ptr<bool> isAvailable_ {};
    // The page number. This parameter is deprecated. Use PageNo instead.
    shared_ptr<int64_t> pageIndex_ {};
    // The page number.
    shared_ptr<int64_t> pageNo_ {};
    // The number of entries per page.
    shared_ptr<int64_t> pageSize_ {};
    // The service direction.
    shared_ptr<string> serviceDirection_ {};
    // The source template ID.
    shared_ptr<int64_t> templateId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aiccs20191015
#endif
