// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERDSTATUSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERDSTATUSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddosbgp20180720
{
namespace Models
{
  class DescribeRdStatusResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRdStatusResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CurrentUid, currentUid_);
      DARABONBA_PTR_TO_JSON(CurrentUidType, currentUidType_);
      DARABONBA_PTR_TO_JSON(Enabled, enabled_);
      DARABONBA_PTR_TO_JSON(LocalEnable, localEnable_);
      DARABONBA_PTR_TO_JSON(MasterUid, masterUid_);
      DARABONBA_PTR_TO_JSON(RemoteEnable, remoteEnable_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(RootUid, rootUid_);
      DARABONBA_PTR_TO_JSON(ServicePrincipalEnabled, servicePrincipalEnabled_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRdStatusResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CurrentUid, currentUid_);
      DARABONBA_PTR_FROM_JSON(CurrentUidType, currentUidType_);
      DARABONBA_PTR_FROM_JSON(Enabled, enabled_);
      DARABONBA_PTR_FROM_JSON(LocalEnable, localEnable_);
      DARABONBA_PTR_FROM_JSON(MasterUid, masterUid_);
      DARABONBA_PTR_FROM_JSON(RemoteEnable, remoteEnable_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(RootUid, rootUid_);
      DARABONBA_PTR_FROM_JSON(ServicePrincipalEnabled, servicePrincipalEnabled_);
    };
    DescribeRdStatusResponseBody() = default ;
    DescribeRdStatusResponseBody(const DescribeRdStatusResponseBody &) = default ;
    DescribeRdStatusResponseBody(DescribeRdStatusResponseBody &&) = default ;
    DescribeRdStatusResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRdStatusResponseBody() = default ;
    DescribeRdStatusResponseBody& operator=(const DescribeRdStatusResponseBody &) = default ;
    DescribeRdStatusResponseBody& operator=(DescribeRdStatusResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->currentUid_ == nullptr
        && this->currentUidType_ == nullptr && this->enabled_ == nullptr && this->localEnable_ == nullptr && this->masterUid_ == nullptr && this->remoteEnable_ == nullptr
        && this->requestId_ == nullptr && this->rootUid_ == nullptr && this->servicePrincipalEnabled_ == nullptr; };
    // currentUid Field Functions 
    bool hasCurrentUid() const { return this->currentUid_ != nullptr;};
    void deleteCurrentUid() { this->currentUid_ = nullptr;};
    inline string getCurrentUid() const { DARABONBA_PTR_GET_DEFAULT(currentUid_, "") };
    inline DescribeRdStatusResponseBody& setCurrentUid(string currentUid) { DARABONBA_PTR_SET_VALUE(currentUid_, currentUid) };


    // currentUidType Field Functions 
    bool hasCurrentUidType() const { return this->currentUidType_ != nullptr;};
    void deleteCurrentUidType() { this->currentUidType_ = nullptr;};
    inline string getCurrentUidType() const { DARABONBA_PTR_GET_DEFAULT(currentUidType_, "") };
    inline DescribeRdStatusResponseBody& setCurrentUidType(string currentUidType) { DARABONBA_PTR_SET_VALUE(currentUidType_, currentUidType) };


    // enabled Field Functions 
    bool hasEnabled() const { return this->enabled_ != nullptr;};
    void deleteEnabled() { this->enabled_ = nullptr;};
    inline bool getEnabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, false) };
    inline DescribeRdStatusResponseBody& setEnabled(bool enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


    // localEnable Field Functions 
    bool hasLocalEnable() const { return this->localEnable_ != nullptr;};
    void deleteLocalEnable() { this->localEnable_ = nullptr;};
    inline bool getLocalEnable() const { DARABONBA_PTR_GET_DEFAULT(localEnable_, false) };
    inline DescribeRdStatusResponseBody& setLocalEnable(bool localEnable) { DARABONBA_PTR_SET_VALUE(localEnable_, localEnable) };


    // masterUid Field Functions 
    bool hasMasterUid() const { return this->masterUid_ != nullptr;};
    void deleteMasterUid() { this->masterUid_ = nullptr;};
    inline string getMasterUid() const { DARABONBA_PTR_GET_DEFAULT(masterUid_, "") };
    inline DescribeRdStatusResponseBody& setMasterUid(string masterUid) { DARABONBA_PTR_SET_VALUE(masterUid_, masterUid) };


    // remoteEnable Field Functions 
    bool hasRemoteEnable() const { return this->remoteEnable_ != nullptr;};
    void deleteRemoteEnable() { this->remoteEnable_ = nullptr;};
    inline bool getRemoteEnable() const { DARABONBA_PTR_GET_DEFAULT(remoteEnable_, false) };
    inline DescribeRdStatusResponseBody& setRemoteEnable(bool remoteEnable) { DARABONBA_PTR_SET_VALUE(remoteEnable_, remoteEnable) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeRdStatusResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // rootUid Field Functions 
    bool hasRootUid() const { return this->rootUid_ != nullptr;};
    void deleteRootUid() { this->rootUid_ = nullptr;};
    inline string getRootUid() const { DARABONBA_PTR_GET_DEFAULT(rootUid_, "") };
    inline DescribeRdStatusResponseBody& setRootUid(string rootUid) { DARABONBA_PTR_SET_VALUE(rootUid_, rootUid) };


    // servicePrincipalEnabled Field Functions 
    bool hasServicePrincipalEnabled() const { return this->servicePrincipalEnabled_ != nullptr;};
    void deleteServicePrincipalEnabled() { this->servicePrincipalEnabled_ = nullptr;};
    inline bool getServicePrincipalEnabled() const { DARABONBA_PTR_GET_DEFAULT(servicePrincipalEnabled_, false) };
    inline DescribeRdStatusResponseBody& setServicePrincipalEnabled(bool servicePrincipalEnabled) { DARABONBA_PTR_SET_VALUE(servicePrincipalEnabled_, servicePrincipalEnabled) };


  protected:
    // The Alibaba Cloud account ID of the current account.
    shared_ptr<string> currentUid_ {};
    // The type of the Alibaba Cloud account. Valid values:
    // 
    // *   **MasterAccount**: management account.
    // *   **DelegatedAdminAccount**: delegated administrator account.
    // *   **MemberAccount**: member.
    shared_ptr<string> currentUidType_ {};
    // Indicates whether the multi-account management feature is enabled for Anti-DDoS Origin.
    shared_ptr<bool> enabled_ {};
    // Indicates whether the multi-account management feature is enabled for the current account in Anti-DDoS Origin.
    shared_ptr<bool> localEnable_ {};
    // The Alibaba Cloud account ID of the management account in the resource directory.
    shared_ptr<string> masterUid_ {};
    // Indicates whether Resource Directory is enabled in the [Resource Management console](https://resourcemanager.console.aliyun.com).
    shared_ptr<bool> remoteEnable_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The Alibaba Cloud account ID of the management account for which the multi-account management feature is enabled in Anti-DDoS Origin.
    shared_ptr<string> rootUid_ {};
    // Indicates whether the trusted service is enabled.
    shared_ptr<bool> servicePrincipalEnabled_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddosbgp20180720
#endif
