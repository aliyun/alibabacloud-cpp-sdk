// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSERVERLESSAUTHSUMMARYRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETSERVERLESSAUTHSUMMARYRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class GetServerlessAuthSummaryResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetServerlessAuthSummaryResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(AutoBind, autoBind_);
      DARABONBA_PTR_TO_JSON(HasPreBindSetting, hasPreBindSetting_);
      DARABONBA_PTR_TO_JSON(IsPostPaid, isPostPaid_);
      DARABONBA_PTR_TO_JSON(IsServerlessPostPaidValid, isServerlessPostPaidValid_);
      DARABONBA_PTR_TO_JSON(PostPaidModuleSwitch, postPaidModuleSwitch_);
      DARABONBA_PTR_TO_JSON(PostPaidOpenTime, postPaidOpenTime_);
      DARABONBA_PTR_TO_JSON(PostPaidStatus, postPaidStatus_);
      DARABONBA_PTR_TO_JSON(PostpaidInstanceId, postpaidInstanceId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(TotalBindAppCount, totalBindAppCount_);
      DARABONBA_PTR_TO_JSON(TotalBindCoreCount, totalBindCoreCount_);
      DARABONBA_PTR_TO_JSON(TotalBindInstanceCount, totalBindInstanceCount_);
      DARABONBA_PTR_TO_JSON(TotalUnBindAppCount, totalUnBindAppCount_);
      DARABONBA_PTR_TO_JSON(TotalUnBindCoreCount, totalUnBindCoreCount_);
      DARABONBA_PTR_TO_JSON(TotalUnBindInstanceCount, totalUnBindInstanceCount_);
    };
    friend void from_json(const Darabonba::Json& j, GetServerlessAuthSummaryResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(AutoBind, autoBind_);
      DARABONBA_PTR_FROM_JSON(HasPreBindSetting, hasPreBindSetting_);
      DARABONBA_PTR_FROM_JSON(IsPostPaid, isPostPaid_);
      DARABONBA_PTR_FROM_JSON(IsServerlessPostPaidValid, isServerlessPostPaidValid_);
      DARABONBA_PTR_FROM_JSON(PostPaidModuleSwitch, postPaidModuleSwitch_);
      DARABONBA_PTR_FROM_JSON(PostPaidOpenTime, postPaidOpenTime_);
      DARABONBA_PTR_FROM_JSON(PostPaidStatus, postPaidStatus_);
      DARABONBA_PTR_FROM_JSON(PostpaidInstanceId, postpaidInstanceId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(TotalBindAppCount, totalBindAppCount_);
      DARABONBA_PTR_FROM_JSON(TotalBindCoreCount, totalBindCoreCount_);
      DARABONBA_PTR_FROM_JSON(TotalBindInstanceCount, totalBindInstanceCount_);
      DARABONBA_PTR_FROM_JSON(TotalUnBindAppCount, totalUnBindAppCount_);
      DARABONBA_PTR_FROM_JSON(TotalUnBindCoreCount, totalUnBindCoreCount_);
      DARABONBA_PTR_FROM_JSON(TotalUnBindInstanceCount, totalUnBindInstanceCount_);
    };
    GetServerlessAuthSummaryResponseBodyData() = default ;
    GetServerlessAuthSummaryResponseBodyData(const GetServerlessAuthSummaryResponseBodyData &) = default ;
    GetServerlessAuthSummaryResponseBodyData(GetServerlessAuthSummaryResponseBodyData &&) = default ;
    GetServerlessAuthSummaryResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetServerlessAuthSummaryResponseBodyData() = default ;
    GetServerlessAuthSummaryResponseBodyData& operator=(const GetServerlessAuthSummaryResponseBodyData &) = default ;
    GetServerlessAuthSummaryResponseBodyData& operator=(GetServerlessAuthSummaryResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->autoBind_ == nullptr
        && return this->hasPreBindSetting_ == nullptr && return this->isPostPaid_ == nullptr && return this->isServerlessPostPaidValid_ == nullptr && return this->postPaidModuleSwitch_ == nullptr && return this->postPaidOpenTime_ == nullptr
        && return this->postPaidStatus_ == nullptr && return this->postpaidInstanceId_ == nullptr && return this->regionId_ == nullptr && return this->totalBindAppCount_ == nullptr && return this->totalBindCoreCount_ == nullptr
        && return this->totalBindInstanceCount_ == nullptr && return this->totalUnBindAppCount_ == nullptr && return this->totalUnBindCoreCount_ == nullptr && return this->totalUnBindInstanceCount_ == nullptr; };
    // autoBind Field Functions 
    bool hasAutoBind() const { return this->autoBind_ != nullptr;};
    void deleteAutoBind() { this->autoBind_ = nullptr;};
    inline int32_t autoBind() const { DARABONBA_PTR_GET_DEFAULT(autoBind_, 0) };
    inline GetServerlessAuthSummaryResponseBodyData& setAutoBind(int32_t autoBind) { DARABONBA_PTR_SET_VALUE(autoBind_, autoBind) };


    // hasPreBindSetting Field Functions 
    bool hasHasPreBindSetting() const { return this->hasPreBindSetting_ != nullptr;};
    void deleteHasPreBindSetting() { this->hasPreBindSetting_ = nullptr;};
    inline bool hasPreBindSetting() const { DARABONBA_PTR_GET_DEFAULT(hasPreBindSetting_, false) };
    inline GetServerlessAuthSummaryResponseBodyData& setHasPreBindSetting(bool hasPreBindSetting) { DARABONBA_PTR_SET_VALUE(hasPreBindSetting_, hasPreBindSetting) };


    // isPostPaid Field Functions 
    bool hasIsPostPaid() const { return this->isPostPaid_ != nullptr;};
    void deleteIsPostPaid() { this->isPostPaid_ = nullptr;};
    inline bool isPostPaid() const { DARABONBA_PTR_GET_DEFAULT(isPostPaid_, false) };
    inline GetServerlessAuthSummaryResponseBodyData& setIsPostPaid(bool isPostPaid) { DARABONBA_PTR_SET_VALUE(isPostPaid_, isPostPaid) };


    // isServerlessPostPaidValid Field Functions 
    bool hasIsServerlessPostPaidValid() const { return this->isServerlessPostPaidValid_ != nullptr;};
    void deleteIsServerlessPostPaidValid() { this->isServerlessPostPaidValid_ = nullptr;};
    inline bool isServerlessPostPaidValid() const { DARABONBA_PTR_GET_DEFAULT(isServerlessPostPaidValid_, false) };
    inline GetServerlessAuthSummaryResponseBodyData& setIsServerlessPostPaidValid(bool isServerlessPostPaidValid) { DARABONBA_PTR_SET_VALUE(isServerlessPostPaidValid_, isServerlessPostPaidValid) };


    // postPaidModuleSwitch Field Functions 
    bool hasPostPaidModuleSwitch() const { return this->postPaidModuleSwitch_ != nullptr;};
    void deletePostPaidModuleSwitch() { this->postPaidModuleSwitch_ = nullptr;};
    inline string postPaidModuleSwitch() const { DARABONBA_PTR_GET_DEFAULT(postPaidModuleSwitch_, "") };
    inline GetServerlessAuthSummaryResponseBodyData& setPostPaidModuleSwitch(string postPaidModuleSwitch) { DARABONBA_PTR_SET_VALUE(postPaidModuleSwitch_, postPaidModuleSwitch) };


    // postPaidOpenTime Field Functions 
    bool hasPostPaidOpenTime() const { return this->postPaidOpenTime_ != nullptr;};
    void deletePostPaidOpenTime() { this->postPaidOpenTime_ = nullptr;};
    inline int64_t postPaidOpenTime() const { DARABONBA_PTR_GET_DEFAULT(postPaidOpenTime_, 0L) };
    inline GetServerlessAuthSummaryResponseBodyData& setPostPaidOpenTime(int64_t postPaidOpenTime) { DARABONBA_PTR_SET_VALUE(postPaidOpenTime_, postPaidOpenTime) };


    // postPaidStatus Field Functions 
    bool hasPostPaidStatus() const { return this->postPaidStatus_ != nullptr;};
    void deletePostPaidStatus() { this->postPaidStatus_ = nullptr;};
    inline int32_t postPaidStatus() const { DARABONBA_PTR_GET_DEFAULT(postPaidStatus_, 0) };
    inline GetServerlessAuthSummaryResponseBodyData& setPostPaidStatus(int32_t postPaidStatus) { DARABONBA_PTR_SET_VALUE(postPaidStatus_, postPaidStatus) };


    // postpaidInstanceId Field Functions 
    bool hasPostpaidInstanceId() const { return this->postpaidInstanceId_ != nullptr;};
    void deletePostpaidInstanceId() { this->postpaidInstanceId_ = nullptr;};
    inline string postpaidInstanceId() const { DARABONBA_PTR_GET_DEFAULT(postpaidInstanceId_, "") };
    inline GetServerlessAuthSummaryResponseBodyData& setPostpaidInstanceId(string postpaidInstanceId) { DARABONBA_PTR_SET_VALUE(postpaidInstanceId_, postpaidInstanceId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline GetServerlessAuthSummaryResponseBodyData& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // totalBindAppCount Field Functions 
    bool hasTotalBindAppCount() const { return this->totalBindAppCount_ != nullptr;};
    void deleteTotalBindAppCount() { this->totalBindAppCount_ = nullptr;};
    inline int32_t totalBindAppCount() const { DARABONBA_PTR_GET_DEFAULT(totalBindAppCount_, 0) };
    inline GetServerlessAuthSummaryResponseBodyData& setTotalBindAppCount(int32_t totalBindAppCount) { DARABONBA_PTR_SET_VALUE(totalBindAppCount_, totalBindAppCount) };


    // totalBindCoreCount Field Functions 
    bool hasTotalBindCoreCount() const { return this->totalBindCoreCount_ != nullptr;};
    void deleteTotalBindCoreCount() { this->totalBindCoreCount_ = nullptr;};
    inline int32_t totalBindCoreCount() const { DARABONBA_PTR_GET_DEFAULT(totalBindCoreCount_, 0) };
    inline GetServerlessAuthSummaryResponseBodyData& setTotalBindCoreCount(int32_t totalBindCoreCount) { DARABONBA_PTR_SET_VALUE(totalBindCoreCount_, totalBindCoreCount) };


    // totalBindInstanceCount Field Functions 
    bool hasTotalBindInstanceCount() const { return this->totalBindInstanceCount_ != nullptr;};
    void deleteTotalBindInstanceCount() { this->totalBindInstanceCount_ = nullptr;};
    inline int32_t totalBindInstanceCount() const { DARABONBA_PTR_GET_DEFAULT(totalBindInstanceCount_, 0) };
    inline GetServerlessAuthSummaryResponseBodyData& setTotalBindInstanceCount(int32_t totalBindInstanceCount) { DARABONBA_PTR_SET_VALUE(totalBindInstanceCount_, totalBindInstanceCount) };


    // totalUnBindAppCount Field Functions 
    bool hasTotalUnBindAppCount() const { return this->totalUnBindAppCount_ != nullptr;};
    void deleteTotalUnBindAppCount() { this->totalUnBindAppCount_ = nullptr;};
    inline int32_t totalUnBindAppCount() const { DARABONBA_PTR_GET_DEFAULT(totalUnBindAppCount_, 0) };
    inline GetServerlessAuthSummaryResponseBodyData& setTotalUnBindAppCount(int32_t totalUnBindAppCount) { DARABONBA_PTR_SET_VALUE(totalUnBindAppCount_, totalUnBindAppCount) };


    // totalUnBindCoreCount Field Functions 
    bool hasTotalUnBindCoreCount() const { return this->totalUnBindCoreCount_ != nullptr;};
    void deleteTotalUnBindCoreCount() { this->totalUnBindCoreCount_ = nullptr;};
    inline int32_t totalUnBindCoreCount() const { DARABONBA_PTR_GET_DEFAULT(totalUnBindCoreCount_, 0) };
    inline GetServerlessAuthSummaryResponseBodyData& setTotalUnBindCoreCount(int32_t totalUnBindCoreCount) { DARABONBA_PTR_SET_VALUE(totalUnBindCoreCount_, totalUnBindCoreCount) };


    // totalUnBindInstanceCount Field Functions 
    bool hasTotalUnBindInstanceCount() const { return this->totalUnBindInstanceCount_ != nullptr;};
    void deleteTotalUnBindInstanceCount() { this->totalUnBindInstanceCount_ = nullptr;};
    inline int32_t totalUnBindInstanceCount() const { DARABONBA_PTR_GET_DEFAULT(totalUnBindInstanceCount_, 0) };
    inline GetServerlessAuthSummaryResponseBodyData& setTotalUnBindInstanceCount(int32_t totalUnBindInstanceCount) { DARABONBA_PTR_SET_VALUE(totalUnBindInstanceCount_, totalUnBindInstanceCount) };


  protected:
    // Enable auto-binding. Values: 
    // 
    // - **0**: Disabled
    // - **1**: Enabled
    std::shared_ptr<int32_t> autoBind_ = nullptr;
    // Indicates whether there is a pre-bound asset configuration. Pre-binding refers to the asset binding configuration selected in advance at the time of purchase. The values are: - **0**: No - **1**: Yes
    std::shared_ptr<bool> hasPreBindSetting_ = nullptr;
    // Whether it is a post-paid instance. Values: 
    // 
    // - **true**: Yes
    // - **false**: No
    std::shared_ptr<bool> isPostPaid_ = nullptr;
    // Serverless post-paid status. Values: 
    // - **true**: Active
    // - **false**: Expired
    std::shared_ptr<bool> isServerlessPostPaidValid_ = nullptr;
    // Pay-as-you-go module switch. Values: 
    // 
    // - **VUL**: Vulnerability Repair Module
    // - **CSPM**: Cloud Security Posture Management Module
    // - **AGENTLESS**: Agentless Detection Module
    // - **SERVERLESS**: Serverless Security Module
    // - **CTDR**: Threat Analysis and Response Module
    std::shared_ptr<string> postPaidModuleSwitch_ = nullptr;
    // Post-paid activation time. Unit: milliseconds.
    std::shared_ptr<int64_t> postPaidOpenTime_ = nullptr;
    // Post-paid instance status. Values: 
    // - **1**: Active
    // - **2**: Suspended due to unpaid bills
    std::shared_ptr<int32_t> postPaidStatus_ = nullptr;
    // Post-paid instance ID.
    std::shared_ptr<string> postpaidInstanceId_ = nullptr;
    // Region ID.
    std::shared_ptr<string> regionId_ = nullptr;
    // Total number of bound applications.
    std::shared_ptr<int32_t> totalBindAppCount_ = nullptr;
    // Total number of bound cores.
    std::shared_ptr<int32_t> totalBindCoreCount_ = nullptr;
    // Total number of bound instances.
    std::shared_ptr<int32_t> totalBindInstanceCount_ = nullptr;
    // Total number of unbound applications.
    std::shared_ptr<int32_t> totalUnBindAppCount_ = nullptr;
    // Total number of unbound cores.
    std::shared_ptr<int32_t> totalUnBindCoreCount_ = nullptr;
    // Total number of unbound instances.
    std::shared_ptr<int32_t> totalUnBindInstanceCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
