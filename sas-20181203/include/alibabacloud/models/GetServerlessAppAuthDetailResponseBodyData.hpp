// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSERVERLESSAPPAUTHDETAILRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETSERVERLESSAPPAUTHDETAILRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class GetServerlessAppAuthDetailResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetServerlessAppAuthDetailResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(CoreCount, coreCount_);
      DARABONBA_PTR_TO_JSON(InstanceCount, instanceCount_);
      DARABONBA_PTR_TO_JSON(IsBind, isBind_);
      DARABONBA_PTR_TO_JSON(IsPostPaid, isPostPaid_);
      DARABONBA_PTR_TO_JSON(IsServerlessPostPaidValid, isServerlessPostPaidValid_);
      DARABONBA_PTR_TO_JSON(PostPaidModuleSwitch, postPaidModuleSwitch_);
      DARABONBA_PTR_TO_JSON(PostPaidOpenTime, postPaidOpenTime_);
      DARABONBA_PTR_TO_JSON(PostPaidStatus, postPaidStatus_);
      DARABONBA_PTR_TO_JSON(PostpaidInstanceId, postpaidInstanceId_);
    };
    friend void from_json(const Darabonba::Json& j, GetServerlessAppAuthDetailResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(CoreCount, coreCount_);
      DARABONBA_PTR_FROM_JSON(InstanceCount, instanceCount_);
      DARABONBA_PTR_FROM_JSON(IsBind, isBind_);
      DARABONBA_PTR_FROM_JSON(IsPostPaid, isPostPaid_);
      DARABONBA_PTR_FROM_JSON(IsServerlessPostPaidValid, isServerlessPostPaidValid_);
      DARABONBA_PTR_FROM_JSON(PostPaidModuleSwitch, postPaidModuleSwitch_);
      DARABONBA_PTR_FROM_JSON(PostPaidOpenTime, postPaidOpenTime_);
      DARABONBA_PTR_FROM_JSON(PostPaidStatus, postPaidStatus_);
      DARABONBA_PTR_FROM_JSON(PostpaidInstanceId, postpaidInstanceId_);
    };
    GetServerlessAppAuthDetailResponseBodyData() = default ;
    GetServerlessAppAuthDetailResponseBodyData(const GetServerlessAppAuthDetailResponseBodyData &) = default ;
    GetServerlessAppAuthDetailResponseBodyData(GetServerlessAppAuthDetailResponseBodyData &&) = default ;
    GetServerlessAppAuthDetailResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetServerlessAppAuthDetailResponseBodyData() = default ;
    GetServerlessAppAuthDetailResponseBodyData& operator=(const GetServerlessAppAuthDetailResponseBodyData &) = default ;
    GetServerlessAppAuthDetailResponseBodyData& operator=(GetServerlessAppAuthDetailResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appId_ == nullptr
        && return this->coreCount_ == nullptr && return this->instanceCount_ == nullptr && return this->isBind_ == nullptr && return this->isPostPaid_ == nullptr && return this->isServerlessPostPaidValid_ == nullptr
        && return this->postPaidModuleSwitch_ == nullptr && return this->postPaidOpenTime_ == nullptr && return this->postPaidStatus_ == nullptr && return this->postpaidInstanceId_ == nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline GetServerlessAppAuthDetailResponseBodyData& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // coreCount Field Functions 
    bool hasCoreCount() const { return this->coreCount_ != nullptr;};
    void deleteCoreCount() { this->coreCount_ = nullptr;};
    inline int32_t coreCount() const { DARABONBA_PTR_GET_DEFAULT(coreCount_, 0) };
    inline GetServerlessAppAuthDetailResponseBodyData& setCoreCount(int32_t coreCount) { DARABONBA_PTR_SET_VALUE(coreCount_, coreCount) };


    // instanceCount Field Functions 
    bool hasInstanceCount() const { return this->instanceCount_ != nullptr;};
    void deleteInstanceCount() { this->instanceCount_ = nullptr;};
    inline int32_t instanceCount() const { DARABONBA_PTR_GET_DEFAULT(instanceCount_, 0) };
    inline GetServerlessAppAuthDetailResponseBodyData& setInstanceCount(int32_t instanceCount) { DARABONBA_PTR_SET_VALUE(instanceCount_, instanceCount) };


    // isBind Field Functions 
    bool hasIsBind() const { return this->isBind_ != nullptr;};
    void deleteIsBind() { this->isBind_ = nullptr;};
    inline bool isBind() const { DARABONBA_PTR_GET_DEFAULT(isBind_, false) };
    inline GetServerlessAppAuthDetailResponseBodyData& setIsBind(bool isBind) { DARABONBA_PTR_SET_VALUE(isBind_, isBind) };


    // isPostPaid Field Functions 
    bool hasIsPostPaid() const { return this->isPostPaid_ != nullptr;};
    void deleteIsPostPaid() { this->isPostPaid_ = nullptr;};
    inline bool isPostPaid() const { DARABONBA_PTR_GET_DEFAULT(isPostPaid_, false) };
    inline GetServerlessAppAuthDetailResponseBodyData& setIsPostPaid(bool isPostPaid) { DARABONBA_PTR_SET_VALUE(isPostPaid_, isPostPaid) };


    // isServerlessPostPaidValid Field Functions 
    bool hasIsServerlessPostPaidValid() const { return this->isServerlessPostPaidValid_ != nullptr;};
    void deleteIsServerlessPostPaidValid() { this->isServerlessPostPaidValid_ = nullptr;};
    inline bool isServerlessPostPaidValid() const { DARABONBA_PTR_GET_DEFAULT(isServerlessPostPaidValid_, false) };
    inline GetServerlessAppAuthDetailResponseBodyData& setIsServerlessPostPaidValid(bool isServerlessPostPaidValid) { DARABONBA_PTR_SET_VALUE(isServerlessPostPaidValid_, isServerlessPostPaidValid) };


    // postPaidModuleSwitch Field Functions 
    bool hasPostPaidModuleSwitch() const { return this->postPaidModuleSwitch_ != nullptr;};
    void deletePostPaidModuleSwitch() { this->postPaidModuleSwitch_ = nullptr;};
    inline string postPaidModuleSwitch() const { DARABONBA_PTR_GET_DEFAULT(postPaidModuleSwitch_, "") };
    inline GetServerlessAppAuthDetailResponseBodyData& setPostPaidModuleSwitch(string postPaidModuleSwitch) { DARABONBA_PTR_SET_VALUE(postPaidModuleSwitch_, postPaidModuleSwitch) };


    // postPaidOpenTime Field Functions 
    bool hasPostPaidOpenTime() const { return this->postPaidOpenTime_ != nullptr;};
    void deletePostPaidOpenTime() { this->postPaidOpenTime_ = nullptr;};
    inline int64_t postPaidOpenTime() const { DARABONBA_PTR_GET_DEFAULT(postPaidOpenTime_, 0L) };
    inline GetServerlessAppAuthDetailResponseBodyData& setPostPaidOpenTime(int64_t postPaidOpenTime) { DARABONBA_PTR_SET_VALUE(postPaidOpenTime_, postPaidOpenTime) };


    // postPaidStatus Field Functions 
    bool hasPostPaidStatus() const { return this->postPaidStatus_ != nullptr;};
    void deletePostPaidStatus() { this->postPaidStatus_ = nullptr;};
    inline int32_t postPaidStatus() const { DARABONBA_PTR_GET_DEFAULT(postPaidStatus_, 0) };
    inline GetServerlessAppAuthDetailResponseBodyData& setPostPaidStatus(int32_t postPaidStatus) { DARABONBA_PTR_SET_VALUE(postPaidStatus_, postPaidStatus) };


    // postpaidInstanceId Field Functions 
    bool hasPostpaidInstanceId() const { return this->postpaidInstanceId_ != nullptr;};
    void deletePostpaidInstanceId() { this->postpaidInstanceId_ = nullptr;};
    inline string postpaidInstanceId() const { DARABONBA_PTR_GET_DEFAULT(postpaidInstanceId_, "") };
    inline GetServerlessAppAuthDetailResponseBodyData& setPostpaidInstanceId(string postpaidInstanceId) { DARABONBA_PTR_SET_VALUE(postpaidInstanceId_, postpaidInstanceId) };


  protected:
    // Application ID.
    std::shared_ptr<string> appId_ = nullptr;
    // Number of CPU cores.
    std::shared_ptr<int32_t> coreCount_ = nullptr;
    // Number of instances.
    std::shared_ptr<int32_t> instanceCount_ = nullptr;
    // Whether authorization is bound. Values: 
    // 
    // - **true**: Yes
    // - **false**: No
    std::shared_ptr<bool> isBind_ = nullptr;
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
    // - **VUL**: Vulnerability repair module
    // - **CSPM**: Cloud Security Posture Management module
    // - **AGENTLESS**: Agentless detection module
    // - **SERVERLESS**: Serverless security module
    // - **CTDR**: Threat Detection and Response module
    std::shared_ptr<string> postPaidModuleSwitch_ = nullptr;
    // Post-paid activation time.
    std::shared_ptr<int64_t> postPaidOpenTime_ = nullptr;
    // Post-paid instance status. Values: 
    // - **1**: Active
    // - **2**: Suspended due to unpaid bills
    std::shared_ptr<int32_t> postPaidStatus_ = nullptr;
    // Post-paid instance ID.
    std::shared_ptr<string> postpaidInstanceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
