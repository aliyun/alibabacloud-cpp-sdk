// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETONLINESEATINFORMATIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETONLINESEATINFORMATIONREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aiccs20191015
{
namespace Models
{
  class GetOnlineSeatInformationRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetOnlineSeatInformationRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AgentIds, agentIds_);
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(DepIds, depIds_);
      DARABONBA_PTR_TO_JSON(EndDate, endDate_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(StartDate, startDate_);
    };
    friend void from_json(const Darabonba::Json& j, GetOnlineSeatInformationRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AgentIds, agentIds_);
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(DepIds, depIds_);
      DARABONBA_PTR_FROM_JSON(EndDate, endDate_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(StartDate, startDate_);
    };
    GetOnlineSeatInformationRequest() = default ;
    GetOnlineSeatInformationRequest(const GetOnlineSeatInformationRequest &) = default ;
    GetOnlineSeatInformationRequest(GetOnlineSeatInformationRequest &&) = default ;
    GetOnlineSeatInformationRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetOnlineSeatInformationRequest() = default ;
    GetOnlineSeatInformationRequest& operator=(const GetOnlineSeatInformationRequest &) = default ;
    GetOnlineSeatInformationRequest& operator=(GetOnlineSeatInformationRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->agentIds_ == nullptr
        && return this->currentPage_ == nullptr && return this->depIds_ == nullptr && return this->endDate_ == nullptr && return this->instanceId_ == nullptr && return this->pageSize_ == nullptr
        && return this->startDate_ == nullptr; };
    // agentIds Field Functions 
    bool hasAgentIds() const { return this->agentIds_ != nullptr;};
    void deleteAgentIds() { this->agentIds_ = nullptr;};
    inline const vector<int64_t> & agentIds() const { DARABONBA_PTR_GET_CONST(agentIds_, vector<int64_t>) };
    inline vector<int64_t> agentIds() { DARABONBA_PTR_GET(agentIds_, vector<int64_t>) };
    inline GetOnlineSeatInformationRequest& setAgentIds(const vector<int64_t> & agentIds) { DARABONBA_PTR_SET_VALUE(agentIds_, agentIds) };
    inline GetOnlineSeatInformationRequest& setAgentIds(vector<int64_t> && agentIds) { DARABONBA_PTR_SET_RVALUE(agentIds_, agentIds) };


    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t currentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline GetOnlineSeatInformationRequest& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // depIds Field Functions 
    bool hasDepIds() const { return this->depIds_ != nullptr;};
    void deleteDepIds() { this->depIds_ = nullptr;};
    inline const vector<int64_t> & depIds() const { DARABONBA_PTR_GET_CONST(depIds_, vector<int64_t>) };
    inline vector<int64_t> depIds() { DARABONBA_PTR_GET(depIds_, vector<int64_t>) };
    inline GetOnlineSeatInformationRequest& setDepIds(const vector<int64_t> & depIds) { DARABONBA_PTR_SET_VALUE(depIds_, depIds) };
    inline GetOnlineSeatInformationRequest& setDepIds(vector<int64_t> && depIds) { DARABONBA_PTR_SET_RVALUE(depIds_, depIds) };


    // endDate Field Functions 
    bool hasEndDate() const { return this->endDate_ != nullptr;};
    void deleteEndDate() { this->endDate_ = nullptr;};
    inline int64_t endDate() const { DARABONBA_PTR_GET_DEFAULT(endDate_, 0L) };
    inline GetOnlineSeatInformationRequest& setEndDate(int64_t endDate) { DARABONBA_PTR_SET_VALUE(endDate_, endDate) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline GetOnlineSeatInformationRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline GetOnlineSeatInformationRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // startDate Field Functions 
    bool hasStartDate() const { return this->startDate_ != nullptr;};
    void deleteStartDate() { this->startDate_ = nullptr;};
    inline int64_t startDate() const { DARABONBA_PTR_GET_DEFAULT(startDate_, 0L) };
    inline GetOnlineSeatInformationRequest& setStartDate(int64_t startDate) { DARABONBA_PTR_SET_VALUE(startDate_, startDate) };


  protected:
    std::shared_ptr<vector<int64_t>> agentIds_ = nullptr;
    std::shared_ptr<int32_t> currentPage_ = nullptr;
    std::shared_ptr<vector<int64_t>> depIds_ = nullptr;
    std::shared_ptr<int64_t> endDate_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    std::shared_ptr<int64_t> startDate_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aiccs20191015
#endif
