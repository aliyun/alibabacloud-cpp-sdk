// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSERVERLESSAPPAUTHDETAILRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETSERVERLESSAPPAUTHDETAILRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class GetServerlessAppAuthDetailResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetServerlessAppAuthDetailResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetServerlessAppAuthDetailResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetServerlessAppAuthDetailResponseBody() = default ;
    GetServerlessAppAuthDetailResponseBody(const GetServerlessAppAuthDetailResponseBody &) = default ;
    GetServerlessAppAuthDetailResponseBody(GetServerlessAppAuthDetailResponseBody &&) = default ;
    GetServerlessAppAuthDetailResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetServerlessAppAuthDetailResponseBody() = default ;
    GetServerlessAppAuthDetailResponseBody& operator=(const GetServerlessAppAuthDetailResponseBody &) = default ;
    GetServerlessAppAuthDetailResponseBody& operator=(GetServerlessAppAuthDetailResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
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
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
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
      virtual bool empty() const override { return this->appId_ == nullptr
        && this->coreCount_ == nullptr && this->instanceCount_ == nullptr && this->isBind_ == nullptr && this->isPostPaid_ == nullptr && this->isServerlessPostPaidValid_ == nullptr
        && this->postPaidModuleSwitch_ == nullptr && this->postPaidOpenTime_ == nullptr && this->postPaidStatus_ == nullptr && this->postpaidInstanceId_ == nullptr; };
      // appId Field Functions 
      bool hasAppId() const { return this->appId_ != nullptr;};
      void deleteAppId() { this->appId_ = nullptr;};
      inline string getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
      inline Data& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


      // coreCount Field Functions 
      bool hasCoreCount() const { return this->coreCount_ != nullptr;};
      void deleteCoreCount() { this->coreCount_ = nullptr;};
      inline int32_t getCoreCount() const { DARABONBA_PTR_GET_DEFAULT(coreCount_, 0) };
      inline Data& setCoreCount(int32_t coreCount) { DARABONBA_PTR_SET_VALUE(coreCount_, coreCount) };


      // instanceCount Field Functions 
      bool hasInstanceCount() const { return this->instanceCount_ != nullptr;};
      void deleteInstanceCount() { this->instanceCount_ = nullptr;};
      inline int32_t getInstanceCount() const { DARABONBA_PTR_GET_DEFAULT(instanceCount_, 0) };
      inline Data& setInstanceCount(int32_t instanceCount) { DARABONBA_PTR_SET_VALUE(instanceCount_, instanceCount) };


      // isBind Field Functions 
      bool hasIsBind() const { return this->isBind_ != nullptr;};
      void deleteIsBind() { this->isBind_ = nullptr;};
      inline bool getIsBind() const { DARABONBA_PTR_GET_DEFAULT(isBind_, false) };
      inline Data& setIsBind(bool isBind) { DARABONBA_PTR_SET_VALUE(isBind_, isBind) };


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


    protected:
      // Application ID.
      shared_ptr<string> appId_ {};
      // Number of CPU cores.
      shared_ptr<int32_t> coreCount_ {};
      // Number of instances.
      shared_ptr<int32_t> instanceCount_ {};
      // Whether authorization is bound. Values: 
      // 
      // - **true**: Yes
      // - **false**: No
      shared_ptr<bool> isBind_ {};
      // Whether it is a post-paid instance. Values: 
      // 
      // - **true**: Yes
      // - **false**: No
      shared_ptr<bool> isPostPaid_ {};
      // Serverless post-paid status. Values: 
      // - **true**: Active
      // - **false**: Expired
      shared_ptr<bool> isServerlessPostPaidValid_ {};
      // Pay-as-you-go module switch. Values: 
      // 
      // - **VUL**: Vulnerability repair module
      // - **CSPM**: Cloud Security Posture Management module
      // - **AGENTLESS**: Agentless detection module
      // - **SERVERLESS**: Serverless security module
      // - **CTDR**: Threat Detection and Response module
      shared_ptr<string> postPaidModuleSwitch_ {};
      // Post-paid activation time.
      shared_ptr<int64_t> postPaidOpenTime_ {};
      // Post-paid instance status. Values: 
      // - **1**: Active
      // - **2**: Suspended due to unpaid bills
      shared_ptr<int32_t> postPaidStatus_ {};
      // Post-paid instance ID.
      shared_ptr<string> postpaidInstanceId_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr && this->success_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetServerlessAppAuthDetailResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetServerlessAppAuthDetailResponseBody::Data) };
    inline GetServerlessAppAuthDetailResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetServerlessAppAuthDetailResponseBody::Data) };
    inline GetServerlessAppAuthDetailResponseBody& setData(const GetServerlessAppAuthDetailResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetServerlessAppAuthDetailResponseBody& setData(GetServerlessAppAuthDetailResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetServerlessAppAuthDetailResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetServerlessAppAuthDetailResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // Data details.
    shared_ptr<GetServerlessAppAuthDetailResponseBody::Data> data_ {};
    // The ID of this call request, a unique identifier generated by Alibaba Cloud for the request, which can be used to troubleshoot and pinpoint issues.
    shared_ptr<string> requestId_ {};
    // Whether the API call was successful. Values: 
    // - **true**: Success
    // - **false**: Failure
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
