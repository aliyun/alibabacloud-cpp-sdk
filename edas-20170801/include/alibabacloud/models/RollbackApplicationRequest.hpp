// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ROLLBACKAPPLICATIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ROLLBACKAPPLICATIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Edas20170801
{
namespace Models
{
  class RollbackApplicationRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RollbackApplicationRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(Batch, batch_);
      DARABONBA_PTR_TO_JSON(BatchWaitTime, batchWaitTime_);
      DARABONBA_PTR_TO_JSON(GroupId, groupId_);
      DARABONBA_PTR_TO_JSON(HistoryVersion, historyVersion_);
    };
    friend void from_json(const Darabonba::Json& j, RollbackApplicationRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(Batch, batch_);
      DARABONBA_PTR_FROM_JSON(BatchWaitTime, batchWaitTime_);
      DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
      DARABONBA_PTR_FROM_JSON(HistoryVersion, historyVersion_);
    };
    RollbackApplicationRequest() = default ;
    RollbackApplicationRequest(const RollbackApplicationRequest &) = default ;
    RollbackApplicationRequest(RollbackApplicationRequest &&) = default ;
    RollbackApplicationRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RollbackApplicationRequest() = default ;
    RollbackApplicationRequest& operator=(const RollbackApplicationRequest &) = default ;
    RollbackApplicationRequest& operator=(RollbackApplicationRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appId_ == nullptr
        && return this->batch_ == nullptr && return this->batchWaitTime_ == nullptr && return this->groupId_ == nullptr && return this->historyVersion_ == nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline RollbackApplicationRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // batch Field Functions 
    bool hasBatch() const { return this->batch_ != nullptr;};
    void deleteBatch() { this->batch_ = nullptr;};
    inline int32_t batch() const { DARABONBA_PTR_GET_DEFAULT(batch_, 0) };
    inline RollbackApplicationRequest& setBatch(int32_t batch) { DARABONBA_PTR_SET_VALUE(batch_, batch) };


    // batchWaitTime Field Functions 
    bool hasBatchWaitTime() const { return this->batchWaitTime_ != nullptr;};
    void deleteBatchWaitTime() { this->batchWaitTime_ = nullptr;};
    inline int32_t batchWaitTime() const { DARABONBA_PTR_GET_DEFAULT(batchWaitTime_, 0) };
    inline RollbackApplicationRequest& setBatchWaitTime(int32_t batchWaitTime) { DARABONBA_PTR_SET_VALUE(batchWaitTime_, batchWaitTime) };


    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline string groupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
    inline RollbackApplicationRequest& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // historyVersion Field Functions 
    bool hasHistoryVersion() const { return this->historyVersion_ != nullptr;};
    void deleteHistoryVersion() { this->historyVersion_ = nullptr;};
    inline string historyVersion() const { DARABONBA_PTR_GET_DEFAULT(historyVersion_, "") };
    inline RollbackApplicationRequest& setHistoryVersion(string historyVersion) { DARABONBA_PTR_SET_VALUE(historyVersion_, historyVersion) };


  protected:
    // The application ID. You can call the ListApplication operation to query the application ID. For more information, see [ListApplication](https://help.aliyun.com/document_detail/423162.html).
    // 
    // This parameter is required.
    std::shared_ptr<string> appId_ = nullptr;
    // The number of batches for the rollback. Default value: 1. Valid values: 1 to 5.
    std::shared_ptr<int32_t> batch_ = nullptr;
    // The wait time between batches. Default value: 0. The default value indicates no wait time. Valid values: 0 to 5. Unit: minutes.
    std::shared_ptr<int32_t> batchWaitTime_ = nullptr;
    // The application group ID. You can call the ListDeployGroup operation to query the application group ID. For more information, see [ListDeployGroup](https://help.aliyun.com/document_detail/423184.html).
    // 
    // If you need to roll back the application in all application groups, set this parameter to `all`.
    // 
    // This parameter is required.
    std::shared_ptr<string> groupId_ = nullptr;
    // The historical version to which you want to roll back the application. Call the ListHistoryDeployVersion operation to query the historical versions of the application. Then, set this parameter based on the returned value of `PackageVersion`. For more information, see [ListHistoryDeployVersion](https://help.aliyun.com/document_detail/423163.html).
    // 
    // This parameter is required.
    std::shared_ptr<string> historyVersion_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Edas20170801
#endif
