// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DEVICEPAGERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DEVICEPAGERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace SfmMultiModalApp20250909
{
namespace Models
{
  class DevicePageResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DevicePageResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DeviceList, deviceList_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DevicePageResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DeviceList, deviceList_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DevicePageResponseBody() = default ;
    DevicePageResponseBody(const DevicePageResponseBody &) = default ;
    DevicePageResponseBody(DevicePageResponseBody &&) = default ;
    DevicePageResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DevicePageResponseBody() = default ;
    DevicePageResponseBody& operator=(const DevicePageResponseBody &) = default ;
    DevicePageResponseBody& operator=(DevicePageResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class DeviceList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DeviceList& obj) { 
        DARABONBA_PTR_TO_JSON(ActiveTime, activeTime_);
        DARABONBA_PTR_TO_JSON(AliyunUid, aliyunUid_);
        DARABONBA_PTR_TO_JSON(AppId, appId_);
        DARABONBA_PTR_TO_JSON(DailyCount, dailyCount_);
        DARABONBA_PTR_TO_JSON(DeviceName, deviceName_);
        DARABONBA_PTR_TO_JSON(OrderType, orderType_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(SubAliyunUid, subAliyunUid_);
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
        DARABONBA_PTR_TO_JSON(UserActiveTime, userActiveTime_);
        DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
      };
      friend void from_json(const Darabonba::Json& j, DeviceList& obj) { 
        DARABONBA_PTR_FROM_JSON(ActiveTime, activeTime_);
        DARABONBA_PTR_FROM_JSON(AliyunUid, aliyunUid_);
        DARABONBA_PTR_FROM_JSON(AppId, appId_);
        DARABONBA_PTR_FROM_JSON(DailyCount, dailyCount_);
        DARABONBA_PTR_FROM_JSON(DeviceName, deviceName_);
        DARABONBA_PTR_FROM_JSON(OrderType, orderType_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(SubAliyunUid, subAliyunUid_);
        DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
        DARABONBA_PTR_FROM_JSON(UserActiveTime, userActiveTime_);
        DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
      };
      DeviceList() = default ;
      DeviceList(const DeviceList &) = default ;
      DeviceList(DeviceList &&) = default ;
      DeviceList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DeviceList() = default ;
      DeviceList& operator=(const DeviceList &) = default ;
      DeviceList& operator=(DeviceList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->activeTime_ == nullptr
        && this->aliyunUid_ == nullptr && this->appId_ == nullptr && this->dailyCount_ == nullptr && this->deviceName_ == nullptr && this->orderType_ == nullptr
        && this->status_ == nullptr && this->subAliyunUid_ == nullptr && this->totalCount_ == nullptr && this->userActiveTime_ == nullptr && this->workspaceId_ == nullptr; };
      // activeTime Field Functions 
      bool hasActiveTime() const { return this->activeTime_ != nullptr;};
      void deleteActiveTime() { this->activeTime_ = nullptr;};
      inline string getActiveTime() const { DARABONBA_PTR_GET_DEFAULT(activeTime_, "") };
      inline DeviceList& setActiveTime(string activeTime) { DARABONBA_PTR_SET_VALUE(activeTime_, activeTime) };


      // aliyunUid Field Functions 
      bool hasAliyunUid() const { return this->aliyunUid_ != nullptr;};
      void deleteAliyunUid() { this->aliyunUid_ = nullptr;};
      inline string getAliyunUid() const { DARABONBA_PTR_GET_DEFAULT(aliyunUid_, "") };
      inline DeviceList& setAliyunUid(string aliyunUid) { DARABONBA_PTR_SET_VALUE(aliyunUid_, aliyunUid) };


      // appId Field Functions 
      bool hasAppId() const { return this->appId_ != nullptr;};
      void deleteAppId() { this->appId_ = nullptr;};
      inline string getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
      inline DeviceList& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


      // dailyCount Field Functions 
      bool hasDailyCount() const { return this->dailyCount_ != nullptr;};
      void deleteDailyCount() { this->dailyCount_ = nullptr;};
      inline int32_t getDailyCount() const { DARABONBA_PTR_GET_DEFAULT(dailyCount_, 0) };
      inline DeviceList& setDailyCount(int32_t dailyCount) { DARABONBA_PTR_SET_VALUE(dailyCount_, dailyCount) };


      // deviceName Field Functions 
      bool hasDeviceName() const { return this->deviceName_ != nullptr;};
      void deleteDeviceName() { this->deviceName_ = nullptr;};
      inline string getDeviceName() const { DARABONBA_PTR_GET_DEFAULT(deviceName_, "") };
      inline DeviceList& setDeviceName(string deviceName) { DARABONBA_PTR_SET_VALUE(deviceName_, deviceName) };


      // orderType Field Functions 
      bool hasOrderType() const { return this->orderType_ != nullptr;};
      void deleteOrderType() { this->orderType_ = nullptr;};
      inline int32_t getOrderType() const { DARABONBA_PTR_GET_DEFAULT(orderType_, 0) };
      inline DeviceList& setOrderType(int32_t orderType) { DARABONBA_PTR_SET_VALUE(orderType_, orderType) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline int32_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
      inline DeviceList& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // subAliyunUid Field Functions 
      bool hasSubAliyunUid() const { return this->subAliyunUid_ != nullptr;};
      void deleteSubAliyunUid() { this->subAliyunUid_ = nullptr;};
      inline string getSubAliyunUid() const { DARABONBA_PTR_GET_DEFAULT(subAliyunUid_, "") };
      inline DeviceList& setSubAliyunUid(string subAliyunUid) { DARABONBA_PTR_SET_VALUE(subAliyunUid_, subAliyunUid) };


      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
      inline DeviceList& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


      // userActiveTime Field Functions 
      bool hasUserActiveTime() const { return this->userActiveTime_ != nullptr;};
      void deleteUserActiveTime() { this->userActiveTime_ = nullptr;};
      inline string getUserActiveTime() const { DARABONBA_PTR_GET_DEFAULT(userActiveTime_, "") };
      inline DeviceList& setUserActiveTime(string userActiveTime) { DARABONBA_PTR_SET_VALUE(userActiveTime_, userActiveTime) };


      // workspaceId Field Functions 
      bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
      void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
      inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
      inline DeviceList& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


    protected:
      shared_ptr<string> activeTime_ {};
      shared_ptr<string> aliyunUid_ {};
      shared_ptr<string> appId_ {};
      shared_ptr<int32_t> dailyCount_ {};
      shared_ptr<string> deviceName_ {};
      shared_ptr<int32_t> orderType_ {};
      shared_ptr<int32_t> status_ {};
      shared_ptr<string> subAliyunUid_ {};
      shared_ptr<int32_t> totalCount_ {};
      shared_ptr<string> userActiveTime_ {};
      shared_ptr<string> workspaceId_ {};
    };

    virtual bool empty() const override { return this->deviceList_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // deviceList Field Functions 
    bool hasDeviceList() const { return this->deviceList_ != nullptr;};
    void deleteDeviceList() { this->deviceList_ = nullptr;};
    inline const vector<DevicePageResponseBody::DeviceList> & getDeviceList() const { DARABONBA_PTR_GET_CONST(deviceList_, vector<DevicePageResponseBody::DeviceList>) };
    inline vector<DevicePageResponseBody::DeviceList> getDeviceList() { DARABONBA_PTR_GET(deviceList_, vector<DevicePageResponseBody::DeviceList>) };
    inline DevicePageResponseBody& setDeviceList(const vector<DevicePageResponseBody::DeviceList> & deviceList) { DARABONBA_PTR_SET_VALUE(deviceList_, deviceList) };
    inline DevicePageResponseBody& setDeviceList(vector<DevicePageResponseBody::DeviceList> && deviceList) { DARABONBA_PTR_SET_RVALUE(deviceList_, deviceList) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DevicePageResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DevicePageResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DevicePageResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DevicePageResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    shared_ptr<vector<DevicePageResponseBody::DeviceList>> deviceList_ {};
    shared_ptr<int32_t> pageNumber_ {};
    shared_ptr<int32_t> pageSize_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace SfmMultiModalApp20250909
#endif
