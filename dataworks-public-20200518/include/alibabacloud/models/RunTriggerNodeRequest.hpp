// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNTRIGGERNODEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_RUNTRIGGERNODEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class RunTriggerNodeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunTriggerNodeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(BizDate, bizDate_);
      DARABONBA_PTR_TO_JSON(CycleTime, cycleTime_);
      DARABONBA_PTR_TO_JSON(NodeId, nodeId_);
    };
    friend void from_json(const Darabonba::Json& j, RunTriggerNodeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(BizDate, bizDate_);
      DARABONBA_PTR_FROM_JSON(CycleTime, cycleTime_);
      DARABONBA_PTR_FROM_JSON(NodeId, nodeId_);
    };
    RunTriggerNodeRequest() = default ;
    RunTriggerNodeRequest(const RunTriggerNodeRequest &) = default ;
    RunTriggerNodeRequest(RunTriggerNodeRequest &&) = default ;
    RunTriggerNodeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunTriggerNodeRequest() = default ;
    RunTriggerNodeRequest& operator=(const RunTriggerNodeRequest &) = default ;
    RunTriggerNodeRequest& operator=(RunTriggerNodeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->appId_ != nullptr
        && this->bizDate_ != nullptr && this->cycleTime_ != nullptr && this->nodeId_ != nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline int64_t appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, 0L) };
    inline RunTriggerNodeRequest& setAppId(int64_t appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // bizDate Field Functions 
    bool hasBizDate() const { return this->bizDate_ != nullptr;};
    void deleteBizDate() { this->bizDate_ = nullptr;};
    inline int64_t bizDate() const { DARABONBA_PTR_GET_DEFAULT(bizDate_, 0L) };
    inline RunTriggerNodeRequest& setBizDate(int64_t bizDate) { DARABONBA_PTR_SET_VALUE(bizDate_, bizDate) };


    // cycleTime Field Functions 
    bool hasCycleTime() const { return this->cycleTime_ != nullptr;};
    void deleteCycleTime() { this->cycleTime_ = nullptr;};
    inline int64_t cycleTime() const { DARABONBA_PTR_GET_DEFAULT(cycleTime_, 0L) };
    inline RunTriggerNodeRequest& setCycleTime(int64_t cycleTime) { DARABONBA_PTR_SET_VALUE(cycleTime_, cycleTime) };


    // nodeId Field Functions 
    bool hasNodeId() const { return this->nodeId_ != nullptr;};
    void deleteNodeId() { this->nodeId_ = nullptr;};
    inline int64_t nodeId() const { DARABONBA_PTR_GET_DEFAULT(nodeId_, 0L) };
    inline RunTriggerNodeRequest& setNodeId(int64_t nodeId) { DARABONBA_PTR_SET_VALUE(nodeId_, nodeId) };


  protected:
    // The ID of the DataWorks workspace to which the manually triggered node belongs. You can call the [ListProjects](https://help.aliyun.com/document_detail/178393.html) operation to query the ID.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> appId_ = nullptr;
    // The data timestamp of the instance that is generated for the manually triggered node.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> bizDate_ = nullptr;
    // The scheduling time to run the manually triggered node. Set the value to a 13-digit timestamp in milliseconds.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> cycleTime_ = nullptr;
    // The ID of the manually triggered node. You can call the [ListNodes](https://help.aliyun.com/document_detail/173979.html) operation to query the ID.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> nodeId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
