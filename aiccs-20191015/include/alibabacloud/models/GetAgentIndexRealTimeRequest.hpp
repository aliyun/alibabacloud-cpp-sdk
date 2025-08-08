// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAGENTINDEXREALTIMEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETAGENTINDEXREALTIMEREQUEST_HPP_
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
  class GetAgentIndexRealTimeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAgentIndexRealTimeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(DepIds, depIds_);
      DARABONBA_PTR_TO_JSON(GroupIds, groupIds_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
    };
    friend void from_json(const Darabonba::Json& j, GetAgentIndexRealTimeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(DepIds, depIds_);
      DARABONBA_PTR_FROM_JSON(GroupIds, groupIds_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
    };
    GetAgentIndexRealTimeRequest() = default ;
    GetAgentIndexRealTimeRequest(const GetAgentIndexRealTimeRequest &) = default ;
    GetAgentIndexRealTimeRequest(GetAgentIndexRealTimeRequest &&) = default ;
    GetAgentIndexRealTimeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAgentIndexRealTimeRequest() = default ;
    GetAgentIndexRealTimeRequest& operator=(const GetAgentIndexRealTimeRequest &) = default ;
    GetAgentIndexRealTimeRequest& operator=(GetAgentIndexRealTimeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->currentPage_ != nullptr
        && this->depIds_ != nullptr && this->groupIds_ != nullptr && this->instanceId_ != nullptr && this->pageSize_ != nullptr; };
    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t currentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline GetAgentIndexRealTimeRequest& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // depIds Field Functions 
    bool hasDepIds() const { return this->depIds_ != nullptr;};
    void deleteDepIds() { this->depIds_ = nullptr;};
    inline const vector<int64_t> & depIds() const { DARABONBA_PTR_GET_CONST(depIds_, vector<int64_t>) };
    inline vector<int64_t> depIds() { DARABONBA_PTR_GET(depIds_, vector<int64_t>) };
    inline GetAgentIndexRealTimeRequest& setDepIds(const vector<int64_t> & depIds) { DARABONBA_PTR_SET_VALUE(depIds_, depIds) };
    inline GetAgentIndexRealTimeRequest& setDepIds(vector<int64_t> && depIds) { DARABONBA_PTR_SET_RVALUE(depIds_, depIds) };


    // groupIds Field Functions 
    bool hasGroupIds() const { return this->groupIds_ != nullptr;};
    void deleteGroupIds() { this->groupIds_ = nullptr;};
    inline const vector<int64_t> & groupIds() const { DARABONBA_PTR_GET_CONST(groupIds_, vector<int64_t>) };
    inline vector<int64_t> groupIds() { DARABONBA_PTR_GET(groupIds_, vector<int64_t>) };
    inline GetAgentIndexRealTimeRequest& setGroupIds(const vector<int64_t> & groupIds) { DARABONBA_PTR_SET_VALUE(groupIds_, groupIds) };
    inline GetAgentIndexRealTimeRequest& setGroupIds(vector<int64_t> && groupIds) { DARABONBA_PTR_SET_RVALUE(groupIds_, groupIds) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline GetAgentIndexRealTimeRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline GetAgentIndexRealTimeRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


  protected:
    std::shared_ptr<int32_t> currentPage_ = nullptr;
    std::shared_ptr<vector<int64_t>> depIds_ = nullptr;
    std::shared_ptr<vector<int64_t>> groupIds_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    std::shared_ptr<int32_t> pageSize_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aiccs20191015
#endif
