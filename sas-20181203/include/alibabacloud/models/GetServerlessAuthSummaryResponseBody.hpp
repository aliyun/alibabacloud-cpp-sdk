// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSERVERLESSAUTHSUMMARYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETSERVERLESSAUTHSUMMARYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class GetServerlessAuthSummaryResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetServerlessAuthSummaryResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetServerlessAuthSummaryResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetServerlessAuthSummaryResponseBody() = default ;
    GetServerlessAuthSummaryResponseBody(const GetServerlessAuthSummaryResponseBody &) = default ;
    GetServerlessAuthSummaryResponseBody(GetServerlessAuthSummaryResponseBody &&) = default ;
    GetServerlessAuthSummaryResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetServerlessAuthSummaryResponseBody() = default ;
    GetServerlessAuthSummaryResponseBody& operator=(const GetServerlessAuthSummaryResponseBody &) = default ;
    GetServerlessAuthSummaryResponseBody& operator=(GetServerlessAuthSummaryResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
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
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
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
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->autoBind_ == nullptr
        && this->hasPreBindSetting_ == nullptr && this->isPostPaid_ == nullptr && this->isServerlessPostPaidValid_ == nullptr && this->postPaidModuleSwitch_ == nullptr && this->postPaidOpenTime_ == nullptr
        && this->postPaidStatus_ == nullptr && this->postpaidInstanceId_ == nullptr && this->regionId_ == nullptr && this->totalBindAppCount_ == nullptr && this->totalBindCoreCount_ == nullptr
        && this->totalBindInstanceCount_ == nullptr && this->totalUnBindAppCount_ == nullptr && this->totalUnBindCoreCount_ == nullptr && this->totalUnBindInstanceCount_ == nullptr; };
      // autoBind Field Functions 
      bool hasAutoBind() const { return this->autoBind_ != nullptr;};
      void deleteAutoBind() { this->autoBind_ = nullptr;};
      inline int32_t getAutoBind() const { DARABONBA_PTR_GET_DEFAULT(autoBind_, 0) };
      inline Data& setAutoBind(int32_t autoBind) { DARABONBA_PTR_SET_VALUE(autoBind_, autoBind) };


      // hasPreBindSetting Field Functions 
      bool hasHasPreBindSetting() const { return this->hasPreBindSetting_ != nullptr;};
      void deleteHasPreBindSetting() { this->hasPreBindSetting_ = nullptr;};
      inline bool getHasPreBindSetting() const { DARABONBA_PTR_GET_DEFAULT(hasPreBindSetting_, false) };
      inline Data& setHasPreBindSetting(bool hasPreBindSetting) { DARABONBA_PTR_SET_VALUE(hasPreBindSetting_, hasPreBindSetting) };


      // isPostPaid Field Functions 
      bool hasIsPostPaid() const { return this->isPostPaid_ != nullptr;};
      void deleteIsPostPaid() { this->isPostPaid_ = nullptr;};
      inline bool getIsPostPaid() const { DARABONBA_PTR_GET_DEFAULT(isPostPaid_, false) };
      inline Data& setIsPostPaid(bool isPostPaid) { DARABONBA_PTR_SET_VALUE(isPostPaid_, isPostPaid) };


      // isServerlessPostPaidValid Field Functions 
      bool hasIsServerlessPostPaidValid() const { return this->isServerlessPostPaidValid_ != nullptr;};
      void deleteIsServerlessPostPaidValid() { this->isServerlessPostPaidValid_ = nullptr;};
      inline bool getIsServerlessPostPaidValid() const { DARABONBA_PTR_GET_DEFAULT(isServerlessPostPaidValid_, false) };
      inline Data& setIsServerlessPostPaidValid(bool isServerlessPostPaidValid) { DARABONBA_PTR_SET_VALUE(isServerlessPostPaidValid_, isServerlessPostPaidValid) };


      // postPaidModuleSwitch Field Functions 
      bool hasPostPaidModuleSwitch() const { return this->postPaidModuleSwitch_ != nullptr;};
      void deletePostPaidModuleSwitch() { this->postPaidModuleSwitch_ = nullptr;};
      inline string getPostPaidModuleSwitch() const { DARABONBA_PTR_GET_DEFAULT(postPaidModuleSwitch_, "") };
      inline Data& setPostPaidModuleSwitch(string postPaidModuleSwitch) { DARABONBA_PTR_SET_VALUE(postPaidModuleSwitch_, postPaidModuleSwitch) };


      // postPaidOpenTime Field Functions 
      bool hasPostPaidOpenTime() const { return this->postPaidOpenTime_ != nullptr;};
      void deletePostPaidOpenTime() { this->postPaidOpenTime_ = nullptr;};
      inline int64_t getPostPaidOpenTime() const { DARABONBA_PTR_GET_DEFAULT(postPaidOpenTime_, 0L) };
      inline Data& setPostPaidOpenTime(int64_t postPaidOpenTime) { DARABONBA_PTR_SET_VALUE(postPaidOpenTime_, postPaidOpenTime) };


      // postPaidStatus Field Functions 
      bool hasPostPaidStatus() const { return this->postPaidStatus_ != nullptr;};
      void deletePostPaidStatus() { this->postPaidStatus_ = nullptr;};
      inline int32_t getPostPaidStatus() const { DARABONBA_PTR_GET_DEFAULT(postPaidStatus_, 0) };
      inline Data& setPostPaidStatus(int32_t postPaidStatus) { DARABONBA_PTR_SET_VALUE(postPaidStatus_, postPaidStatus) };


      // postpaidInstanceId Field Functions 
      bool hasPostpaidInstanceId() const { return this->postpaidInstanceId_ != nullptr;};
      void deletePostpaidInstanceId() { this->postpaidInstanceId_ = nullptr;};
      inline string getPostpaidInstanceId() const { DARABONBA_PTR_GET_DEFAULT(postpaidInstanceId_, "") };
      inline Data& setPostpaidInstanceId(string postpaidInstanceId) { DARABONBA_PTR_SET_VALUE(postpaidInstanceId_, postpaidInstanceId) };


      // regionId Field Functions 
      bool hasRegionId() const { return this->regionId_ != nullptr;};
      void deleteRegionId() { this->regionId_ = nullptr;};
      inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
      inline Data& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


      // totalBindAppCount Field Functions 
      bool hasTotalBindAppCount() const { return this->totalBindAppCount_ != nullptr;};
      void deleteTotalBindAppCount() { this->totalBindAppCount_ = nullptr;};
      inline int32_t getTotalBindAppCount() const { DARABONBA_PTR_GET_DEFAULT(totalBindAppCount_, 0) };
      inline Data& setTotalBindAppCount(int32_t totalBindAppCount) { DARABONBA_PTR_SET_VALUE(totalBindAppCount_, totalBindAppCount) };


      // totalBindCoreCount Field Functions 
      bool hasTotalBindCoreCount() const { return this->totalBindCoreCount_ != nullptr;};
      void deleteTotalBindCoreCount() { this->totalBindCoreCount_ = nullptr;};
      inline int32_t getTotalBindCoreCount() const { DARABONBA_PTR_GET_DEFAULT(totalBindCoreCount_, 0) };
      inline Data& setTotalBindCoreCount(int32_t totalBindCoreCount) { DARABONBA_PTR_SET_VALUE(totalBindCoreCount_, totalBindCoreCount) };


      // totalBindInstanceCount Field Functions 
      bool hasTotalBindInstanceCount() const { return this->totalBindInstanceCount_ != nullptr;};
      void deleteTotalBindInstanceCount() { this->totalBindInstanceCount_ = nullptr;};
      inline int32_t getTotalBindInstanceCount() const { DARABONBA_PTR_GET_DEFAULT(totalBindInstanceCount_, 0) };
      inline Data& setTotalBindInstanceCount(int32_t totalBindInstanceCount) { DARABONBA_PTR_SET_VALUE(totalBindInstanceCount_, totalBindInstanceCount) };


      // totalUnBindAppCount Field Functions 
      bool hasTotalUnBindAppCount() const { return this->totalUnBindAppCount_ != nullptr;};
      void deleteTotalUnBindAppCount() { this->totalUnBindAppCount_ = nullptr;};
      inline int32_t getTotalUnBindAppCount() const { DARABONBA_PTR_GET_DEFAULT(totalUnBindAppCount_, 0) };
      inline Data& setTotalUnBindAppCount(int32_t totalUnBindAppCount) { DARABONBA_PTR_SET_VALUE(totalUnBindAppCount_, totalUnBindAppCount) };


      // totalUnBindCoreCount Field Functions 
      bool hasTotalUnBindCoreCount() const { return this->totalUnBindCoreCount_ != nullptr;};
      void deleteTotalUnBindCoreCount() { this->totalUnBindCoreCount_ = nullptr;};
      inline int32_t getTotalUnBindCoreCount() const { DARABONBA_PTR_GET_DEFAULT(totalUnBindCoreCount_, 0) };
      inline Data& setTotalUnBindCoreCount(int32_t totalUnBindCoreCount) { DARABONBA_PTR_SET_VALUE(totalUnBindCoreCount_, totalUnBindCoreCount) };


      // totalUnBindInstanceCount Field Functions 
      bool hasTotalUnBindInstanceCount() const { return this->totalUnBindInstanceCount_ != nullptr;};
      void deleteTotalUnBindInstanceCount() { this->totalUnBindInstanceCount_ = nullptr;};
      inline int32_t getTotalUnBindInstanceCount() const { DARABONBA_PTR_GET_DEFAULT(totalUnBindInstanceCount_, 0) };
      inline Data& setTotalUnBindInstanceCount(int32_t totalUnBindInstanceCount) { DARABONBA_PTR_SET_VALUE(totalUnBindInstanceCount_, totalUnBindInstanceCount) };


    protected:
      // Indicates whether automatic binding is enabled. Valid values:
      // 
      // - **0**: disabled
      // - **1**: enabled.
      shared_ptr<int32_t> autoBind_ {};
      // Indicates whether a pre-binding asset configuration exists. Pre-binding refers to the asset binding configuration that is selected in advance during purchase. Valid values:
      // - **0**: does not exist
      // - **1**: exists.
      shared_ptr<bool> hasPreBindSetting_ {};
      // Indicates whether the instance is a pay-as-you-go instance. Valid values:
      // 
      // - **true**: The instance is a pay-as-you-go instance.
      // - **false**: The instance is not a pay-as-you-go instance.
      shared_ptr<bool> isPostPaid_ {};
      // The Serverless pay-as-you-go status. Valid values:
      // - **true**: active
      // - **false**: expired.
      shared_ptr<bool> isServerlessPostPaidValid_ {};
      // The pay-as-you-go module switch. Valid values:
      // 
      // - **VUL**: vulnerability fix module
      // - **CSPM**: Cloud Security Posture Management (CSPM) module
      // - **AGENTLESS**: agentless detection module
      // - **SERVERLESS**: Serverless security module
      // - **CTDR**: Cloud Threat Detection and Response (CTDR) module.
      shared_ptr<string> postPaidModuleSwitch_ {};
      // The time when pay-as-you-go billing was enabled. Unit: milliseconds.
      shared_ptr<int64_t> postPaidOpenTime_ {};
      // The pay-as-you-go instance status. Valid values:
      // - **1**: active
      // - **2**: suspended due to overdue payment.
      shared_ptr<int32_t> postPaidStatus_ {};
      // The pay-as-you-go instance ID.
      shared_ptr<string> postpaidInstanceId_ {};
      // The region ID.
      shared_ptr<string> regionId_ {};
      // The total number of bound applications.
      shared_ptr<int32_t> totalBindAppCount_ {};
      // The total number of bound cores.
      shared_ptr<int32_t> totalBindCoreCount_ {};
      // The total number of bound instances.
      shared_ptr<int32_t> totalBindInstanceCount_ {};
      // The total number of unbound applications.
      shared_ptr<int32_t> totalUnBindAppCount_ {};
      // The total number of unbound cores.
      shared_ptr<int32_t> totalUnBindCoreCount_ {};
      // The total number of unbound instances.
      shared_ptr<int32_t> totalUnBindInstanceCount_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr && this->success_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetServerlessAuthSummaryResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetServerlessAuthSummaryResponseBody::Data) };
    inline GetServerlessAuthSummaryResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetServerlessAuthSummaryResponseBody::Data) };
    inline GetServerlessAuthSummaryResponseBody& setData(const GetServerlessAuthSummaryResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetServerlessAuthSummaryResponseBody& setData(GetServerlessAuthSummaryResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetServerlessAuthSummaryResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetServerlessAuthSummaryResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The returned data details.
    shared_ptr<GetServerlessAuthSummaryResponseBody::Data> data_ {};
    // The request ID, which is a unique identifier generated by Alibaba Cloud for the request. You can use this ID to troubleshoot issues.
    shared_ptr<string> requestId_ {};
    // Indicates whether the call was successful. Valid values:
    // - **true**: The call was successful.
    // - **false**: The call failed.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
