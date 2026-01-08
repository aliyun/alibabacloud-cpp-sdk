// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAPPINSTANCESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTAPPINSTANCESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AppstreamCenter20210901
{
namespace Models
{
  class ListAppInstancesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAppInstancesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AppInstanceModels, appInstanceModels_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListAppInstancesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AppInstanceModels, appInstanceModels_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListAppInstancesResponseBody() = default ;
    ListAppInstancesResponseBody(const ListAppInstancesResponseBody &) = default ;
    ListAppInstancesResponseBody(ListAppInstancesResponseBody &&) = default ;
    ListAppInstancesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAppInstancesResponseBody() = default ;
    ListAppInstancesResponseBody& operator=(const ListAppInstancesResponseBody &) = default ;
    ListAppInstancesResponseBody& operator=(ListAppInstancesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class AppInstanceModels : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AppInstanceModels& obj) { 
        DARABONBA_PTR_TO_JSON(AppInstanceGroupId, appInstanceGroupId_);
        DARABONBA_PTR_TO_JSON(AppInstanceId, appInstanceId_);
        DARABONBA_PTR_TO_JSON(BindInfo, bindInfo_);
        DARABONBA_PTR_TO_JSON(ChargeType, chargeType_);
        DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
        DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
        DARABONBA_PTR_TO_JSON(MainEthPublicIp, mainEthPublicIp_);
        DARABONBA_PTR_TO_JSON(NetworkInterfaceId, networkInterfaceId_);
        DARABONBA_PTR_TO_JSON(NetworkInterfaceIp, networkInterfaceIp_);
        DARABONBA_PTR_TO_JSON(NodeId, nodeId_);
        DARABONBA_PTR_TO_JSON(SessionStatus, sessionStatus_);
        DARABONBA_PTR_TO_JSON(Status, status_);
      };
      friend void from_json(const Darabonba::Json& j, AppInstanceModels& obj) { 
        DARABONBA_PTR_FROM_JSON(AppInstanceGroupId, appInstanceGroupId_);
        DARABONBA_PTR_FROM_JSON(AppInstanceId, appInstanceId_);
        DARABONBA_PTR_FROM_JSON(BindInfo, bindInfo_);
        DARABONBA_PTR_FROM_JSON(ChargeType, chargeType_);
        DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
        DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
        DARABONBA_PTR_FROM_JSON(MainEthPublicIp, mainEthPublicIp_);
        DARABONBA_PTR_FROM_JSON(NetworkInterfaceId, networkInterfaceId_);
        DARABONBA_PTR_FROM_JSON(NetworkInterfaceIp, networkInterfaceIp_);
        DARABONBA_PTR_FROM_JSON(NodeId, nodeId_);
        DARABONBA_PTR_FROM_JSON(SessionStatus, sessionStatus_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
      };
      AppInstanceModels() = default ;
      AppInstanceModels(const AppInstanceModels &) = default ;
      AppInstanceModels(AppInstanceModels &&) = default ;
      AppInstanceModels(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AppInstanceModels() = default ;
      AppInstanceModels& operator=(const AppInstanceModels &) = default ;
      AppInstanceModels& operator=(AppInstanceModels &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class BindInfo : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const BindInfo& obj) { 
          DARABONBA_PTR_TO_JSON(EndUserId, endUserId_);
          DARABONBA_PTR_TO_JSON(UsageDuration, usageDuration_);
        };
        friend void from_json(const Darabonba::Json& j, BindInfo& obj) { 
          DARABONBA_PTR_FROM_JSON(EndUserId, endUserId_);
          DARABONBA_PTR_FROM_JSON(UsageDuration, usageDuration_);
        };
        BindInfo() = default ;
        BindInfo(const BindInfo &) = default ;
        BindInfo(BindInfo &&) = default ;
        BindInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~BindInfo() = default ;
        BindInfo& operator=(const BindInfo &) = default ;
        BindInfo& operator=(BindInfo &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->endUserId_ == nullptr
        && this->usageDuration_ == nullptr; };
        // endUserId Field Functions 
        bool hasEndUserId() const { return this->endUserId_ != nullptr;};
        void deleteEndUserId() { this->endUserId_ = nullptr;};
        inline string getEndUserId() const { DARABONBA_PTR_GET_DEFAULT(endUserId_, "") };
        inline BindInfo& setEndUserId(string endUserId) { DARABONBA_PTR_SET_VALUE(endUserId_, endUserId) };


        // usageDuration Field Functions 
        bool hasUsageDuration() const { return this->usageDuration_ != nullptr;};
        void deleteUsageDuration() { this->usageDuration_ = nullptr;};
        inline int64_t getUsageDuration() const { DARABONBA_PTR_GET_DEFAULT(usageDuration_, 0L) };
        inline BindInfo& setUsageDuration(int64_t usageDuration) { DARABONBA_PTR_SET_VALUE(usageDuration_, usageDuration) };


      protected:
        // The ID of the end user that is bound to the application instance.
        shared_ptr<string> endUserId_ {};
        // The use duration of the application instance. Unit: seconds.
        shared_ptr<int64_t> usageDuration_ {};
      };

      virtual bool empty() const override { return this->appInstanceGroupId_ == nullptr
        && this->appInstanceId_ == nullptr && this->bindInfo_ == nullptr && this->chargeType_ == nullptr && this->gmtCreate_ == nullptr && this->gmtModified_ == nullptr
        && this->mainEthPublicIp_ == nullptr && this->networkInterfaceId_ == nullptr && this->networkInterfaceIp_ == nullptr && this->nodeId_ == nullptr && this->sessionStatus_ == nullptr
        && this->status_ == nullptr; };
      // appInstanceGroupId Field Functions 
      bool hasAppInstanceGroupId() const { return this->appInstanceGroupId_ != nullptr;};
      void deleteAppInstanceGroupId() { this->appInstanceGroupId_ = nullptr;};
      inline string getAppInstanceGroupId() const { DARABONBA_PTR_GET_DEFAULT(appInstanceGroupId_, "") };
      inline AppInstanceModels& setAppInstanceGroupId(string appInstanceGroupId) { DARABONBA_PTR_SET_VALUE(appInstanceGroupId_, appInstanceGroupId) };


      // appInstanceId Field Functions 
      bool hasAppInstanceId() const { return this->appInstanceId_ != nullptr;};
      void deleteAppInstanceId() { this->appInstanceId_ = nullptr;};
      inline string getAppInstanceId() const { DARABONBA_PTR_GET_DEFAULT(appInstanceId_, "") };
      inline AppInstanceModels& setAppInstanceId(string appInstanceId) { DARABONBA_PTR_SET_VALUE(appInstanceId_, appInstanceId) };


      // bindInfo Field Functions 
      bool hasBindInfo() const { return this->bindInfo_ != nullptr;};
      void deleteBindInfo() { this->bindInfo_ = nullptr;};
      inline const AppInstanceModels::BindInfo & getBindInfo() const { DARABONBA_PTR_GET_CONST(bindInfo_, AppInstanceModels::BindInfo) };
      inline AppInstanceModels::BindInfo getBindInfo() { DARABONBA_PTR_GET(bindInfo_, AppInstanceModels::BindInfo) };
      inline AppInstanceModels& setBindInfo(const AppInstanceModels::BindInfo & bindInfo) { DARABONBA_PTR_SET_VALUE(bindInfo_, bindInfo) };
      inline AppInstanceModels& setBindInfo(AppInstanceModels::BindInfo && bindInfo) { DARABONBA_PTR_SET_RVALUE(bindInfo_, bindInfo) };


      // chargeType Field Functions 
      bool hasChargeType() const { return this->chargeType_ != nullptr;};
      void deleteChargeType() { this->chargeType_ = nullptr;};
      inline string getChargeType() const { DARABONBA_PTR_GET_DEFAULT(chargeType_, "") };
      inline AppInstanceModels& setChargeType(string chargeType) { DARABONBA_PTR_SET_VALUE(chargeType_, chargeType) };


      // gmtCreate Field Functions 
      bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
      void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
      inline string getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
      inline AppInstanceModels& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


      // gmtModified Field Functions 
      bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
      void deleteGmtModified() { this->gmtModified_ = nullptr;};
      inline string getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
      inline AppInstanceModels& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


      // mainEthPublicIp Field Functions 
      bool hasMainEthPublicIp() const { return this->mainEthPublicIp_ != nullptr;};
      void deleteMainEthPublicIp() { this->mainEthPublicIp_ = nullptr;};
      inline string getMainEthPublicIp() const { DARABONBA_PTR_GET_DEFAULT(mainEthPublicIp_, "") };
      inline AppInstanceModels& setMainEthPublicIp(string mainEthPublicIp) { DARABONBA_PTR_SET_VALUE(mainEthPublicIp_, mainEthPublicIp) };


      // networkInterfaceId Field Functions 
      bool hasNetworkInterfaceId() const { return this->networkInterfaceId_ != nullptr;};
      void deleteNetworkInterfaceId() { this->networkInterfaceId_ = nullptr;};
      inline string getNetworkInterfaceId() const { DARABONBA_PTR_GET_DEFAULT(networkInterfaceId_, "") };
      inline AppInstanceModels& setNetworkInterfaceId(string networkInterfaceId) { DARABONBA_PTR_SET_VALUE(networkInterfaceId_, networkInterfaceId) };


      // networkInterfaceIp Field Functions 
      bool hasNetworkInterfaceIp() const { return this->networkInterfaceIp_ != nullptr;};
      void deleteNetworkInterfaceIp() { this->networkInterfaceIp_ = nullptr;};
      inline string getNetworkInterfaceIp() const { DARABONBA_PTR_GET_DEFAULT(networkInterfaceIp_, "") };
      inline AppInstanceModels& setNetworkInterfaceIp(string networkInterfaceIp) { DARABONBA_PTR_SET_VALUE(networkInterfaceIp_, networkInterfaceIp) };


      // nodeId Field Functions 
      bool hasNodeId() const { return this->nodeId_ != nullptr;};
      void deleteNodeId() { this->nodeId_ = nullptr;};
      inline string getNodeId() const { DARABONBA_PTR_GET_DEFAULT(nodeId_, "") };
      inline AppInstanceModels& setNodeId(string nodeId) { DARABONBA_PTR_SET_VALUE(nodeId_, nodeId) };


      // sessionStatus Field Functions 
      bool hasSessionStatus() const { return this->sessionStatus_ != nullptr;};
      void deleteSessionStatus() { this->sessionStatus_ = nullptr;};
      inline string getSessionStatus() const { DARABONBA_PTR_GET_DEFAULT(sessionStatus_, "") };
      inline AppInstanceModels& setSessionStatus(string sessionStatus) { DARABONBA_PTR_SET_VALUE(sessionStatus_, sessionStatus) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline AppInstanceModels& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    protected:
      // The ID of the delivery group.
      shared_ptr<string> appInstanceGroupId_ {};
      // The ID of the application instance.
      shared_ptr<string> appInstanceId_ {};
      // The information about the binding between the application instance and end users.
      shared_ptr<AppInstanceModels::BindInfo> bindInfo_ {};
      // The billing method of the app instance. Valid values:
      // 
      // *   **PrePaid**: subscription.
      // *   **PostPaid**: pay-as-you-go
      // 
      // >  This parameter is returned only if the ChargeResourceMode parameter of the delivery group to which the app instance belongs is set to Node.
      shared_ptr<string> chargeType_ {};
      // The time when the application instance was created.
      shared_ptr<string> gmtCreate_ {};
      // The time when the application instance was updated.
      shared_ptr<string> gmtModified_ {};
      // The public IP address associated with the primary NIC. This value is returned only if `StrategyType` is set to `Mixed`.
      shared_ptr<string> mainEthPublicIp_ {};
      shared_ptr<string> networkInterfaceId_ {};
      shared_ptr<string> networkInterfaceIp_ {};
      // The ID of the node on which the app instance runs.
      // 
      // >  This parameter is returned only if the ChargeResourceMode parameter of the delivery group to which the app instance belongs is set to Node.
      shared_ptr<string> nodeId_ {};
      // The session status. This parameter is returned only if the application instance is in the `RUNNING` state.
      // 
      // Valid values:
      // 
      // *   disconnect: disconnected
      // *   connect: connected
      shared_ptr<string> sessionStatus_ {};
      // The status of the application instance.
      shared_ptr<string> status_ {};
    };

    virtual bool empty() const override { return this->appInstanceModels_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // appInstanceModels Field Functions 
    bool hasAppInstanceModels() const { return this->appInstanceModels_ != nullptr;};
    void deleteAppInstanceModels() { this->appInstanceModels_ = nullptr;};
    inline const vector<ListAppInstancesResponseBody::AppInstanceModels> & getAppInstanceModels() const { DARABONBA_PTR_GET_CONST(appInstanceModels_, vector<ListAppInstancesResponseBody::AppInstanceModels>) };
    inline vector<ListAppInstancesResponseBody::AppInstanceModels> getAppInstanceModels() { DARABONBA_PTR_GET(appInstanceModels_, vector<ListAppInstancesResponseBody::AppInstanceModels>) };
    inline ListAppInstancesResponseBody& setAppInstanceModels(const vector<ListAppInstancesResponseBody::AppInstanceModels> & appInstanceModels) { DARABONBA_PTR_SET_VALUE(appInstanceModels_, appInstanceModels) };
    inline ListAppInstancesResponseBody& setAppInstanceModels(vector<ListAppInstancesResponseBody::AppInstanceModels> && appInstanceModels) { DARABONBA_PTR_SET_RVALUE(appInstanceModels_, appInstanceModels) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListAppInstancesResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListAppInstancesResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListAppInstancesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListAppInstancesResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The app instances.
    shared_ptr<vector<ListAppInstancesResponseBody::AppInstanceModels>> appInstanceModels_ {};
    // The page number of the returned page. We recommend that you configure this parameter.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries returned on each page. The value cannot be greater than `100`. We recommend that you configure this parameter.
    shared_ptr<int32_t> pageSize_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of entries returned.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AppstreamCenter20210901
#endif
