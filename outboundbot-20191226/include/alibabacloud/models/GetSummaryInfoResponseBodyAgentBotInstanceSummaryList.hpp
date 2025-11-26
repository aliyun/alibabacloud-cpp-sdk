// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSUMMARYINFORESPONSEBODYAGENTBOTINSTANCESUMMARYLIST_HPP_
#define ALIBABACLOUD_MODELS_GETSUMMARYINFORESPONSEBODYAGENTBOTINSTANCESUMMARYLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OutboundBot20191226
{
namespace Models
{
  class GetSummaryInfoResponseBodyAgentBotInstanceSummaryList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSummaryInfoResponseBodyAgentBotInstanceSummaryList& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(TotalCallCount, totalCallCount_);
      DARABONBA_PTR_TO_JSON(TotalCallTime, totalCallTime_);
      DARABONBA_PTR_TO_JSON(UsedRecordingStorageSpace, usedRecordingStorageSpace_);
    };
    friend void from_json(const Darabonba::Json& j, GetSummaryInfoResponseBodyAgentBotInstanceSummaryList& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(TotalCallCount, totalCallCount_);
      DARABONBA_PTR_FROM_JSON(TotalCallTime, totalCallTime_);
      DARABONBA_PTR_FROM_JSON(UsedRecordingStorageSpace, usedRecordingStorageSpace_);
    };
    GetSummaryInfoResponseBodyAgentBotInstanceSummaryList() = default ;
    GetSummaryInfoResponseBodyAgentBotInstanceSummaryList(const GetSummaryInfoResponseBodyAgentBotInstanceSummaryList &) = default ;
    GetSummaryInfoResponseBodyAgentBotInstanceSummaryList(GetSummaryInfoResponseBodyAgentBotInstanceSummaryList &&) = default ;
    GetSummaryInfoResponseBodyAgentBotInstanceSummaryList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSummaryInfoResponseBodyAgentBotInstanceSummaryList() = default ;
    GetSummaryInfoResponseBodyAgentBotInstanceSummaryList& operator=(const GetSummaryInfoResponseBodyAgentBotInstanceSummaryList &) = default ;
    GetSummaryInfoResponseBodyAgentBotInstanceSummaryList& operator=(GetSummaryInfoResponseBodyAgentBotInstanceSummaryList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceId_ == nullptr
        && return this->totalCallCount_ == nullptr && return this->totalCallTime_ == nullptr && return this->usedRecordingStorageSpace_ == nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline GetSummaryInfoResponseBodyAgentBotInstanceSummaryList& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // totalCallCount Field Functions 
    bool hasTotalCallCount() const { return this->totalCallCount_ != nullptr;};
    void deleteTotalCallCount() { this->totalCallCount_ = nullptr;};
    inline int64_t totalCallCount() const { DARABONBA_PTR_GET_DEFAULT(totalCallCount_, 0L) };
    inline GetSummaryInfoResponseBodyAgentBotInstanceSummaryList& setTotalCallCount(int64_t totalCallCount) { DARABONBA_PTR_SET_VALUE(totalCallCount_, totalCallCount) };


    // totalCallTime Field Functions 
    bool hasTotalCallTime() const { return this->totalCallTime_ != nullptr;};
    void deleteTotalCallTime() { this->totalCallTime_ = nullptr;};
    inline int64_t totalCallTime() const { DARABONBA_PTR_GET_DEFAULT(totalCallTime_, 0L) };
    inline GetSummaryInfoResponseBodyAgentBotInstanceSummaryList& setTotalCallTime(int64_t totalCallTime) { DARABONBA_PTR_SET_VALUE(totalCallTime_, totalCallTime) };


    // usedRecordingStorageSpace Field Functions 
    bool hasUsedRecordingStorageSpace() const { return this->usedRecordingStorageSpace_ != nullptr;};
    void deleteUsedRecordingStorageSpace() { this->usedRecordingStorageSpace_ = nullptr;};
    inline int32_t usedRecordingStorageSpace() const { DARABONBA_PTR_GET_DEFAULT(usedRecordingStorageSpace_, 0) };
    inline GetSummaryInfoResponseBodyAgentBotInstanceSummaryList& setUsedRecordingStorageSpace(int32_t usedRecordingStorageSpace) { DARABONBA_PTR_SET_VALUE(usedRecordingStorageSpace_, usedRecordingStorageSpace) };


  protected:
    std::shared_ptr<string> instanceId_ = nullptr;
    std::shared_ptr<int64_t> totalCallCount_ = nullptr;
    std::shared_ptr<int64_t> totalCallTime_ = nullptr;
    std::shared_ptr<int32_t> usedRecordingStorageSpace_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OutboundBot20191226
#endif
