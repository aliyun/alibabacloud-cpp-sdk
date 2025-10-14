// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETRESOURCEGROUPSTATISTICSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETRESOURCEGROUPSTATISTICSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiDsw20220101
{
namespace Models
{
  class GetResourceGroupStatisticsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetResourceGroupStatisticsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(ResourceId, resourceId_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(WorkspaceIds, workspaceIds_);
    };
    friend void from_json(const Darabonba::Json& j, GetResourceGroupStatisticsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(ResourceId, resourceId_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(WorkspaceIds, workspaceIds_);
    };
    GetResourceGroupStatisticsRequest() = default ;
    GetResourceGroupStatisticsRequest(const GetResourceGroupStatisticsRequest &) = default ;
    GetResourceGroupStatisticsRequest(GetResourceGroupStatisticsRequest &&) = default ;
    GetResourceGroupStatisticsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetResourceGroupStatisticsRequest() = default ;
    GetResourceGroupStatisticsRequest& operator=(const GetResourceGroupStatisticsRequest &) = default ;
    GetResourceGroupStatisticsRequest& operator=(GetResourceGroupStatisticsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->endTime_ == nullptr
        && return this->resourceId_ == nullptr && return this->startTime_ == nullptr && return this->workspaceIds_ == nullptr; };
    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline GetResourceGroupStatisticsRequest& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // resourceId Field Functions 
    bool hasResourceId() const { return this->resourceId_ != nullptr;};
    void deleteResourceId() { this->resourceId_ = nullptr;};
    inline string resourceId() const { DARABONBA_PTR_GET_DEFAULT(resourceId_, "") };
    inline GetResourceGroupStatisticsRequest& setResourceId(string resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline GetResourceGroupStatisticsRequest& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // workspaceIds Field Functions 
    bool hasWorkspaceIds() const { return this->workspaceIds_ != nullptr;};
    void deleteWorkspaceIds() { this->workspaceIds_ = nullptr;};
    inline string workspaceIds() const { DARABONBA_PTR_GET_DEFAULT(workspaceIds_, "") };
    inline GetResourceGroupStatisticsRequest& setWorkspaceIds(string workspaceIds) { DARABONBA_PTR_SET_VALUE(workspaceIds_, workspaceIds) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> endTime_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> resourceId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> startTime_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> workspaceIds_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiDsw20220101
#endif
