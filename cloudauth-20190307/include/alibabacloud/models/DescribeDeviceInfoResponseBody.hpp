// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDEVICEINFORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDEVICEINFORESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudauth20190307
{
namespace Models
{
  class DescribeDeviceInfoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDeviceInfoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(DeviceInfoList, deviceInfoList_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDeviceInfoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(DeviceInfoList, deviceInfoList_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeDeviceInfoResponseBody() = default ;
    DescribeDeviceInfoResponseBody(const DescribeDeviceInfoResponseBody &) = default ;
    DescribeDeviceInfoResponseBody(DescribeDeviceInfoResponseBody &&) = default ;
    DescribeDeviceInfoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDeviceInfoResponseBody() = default ;
    DescribeDeviceInfoResponseBody& operator=(const DescribeDeviceInfoResponseBody &) = default ;
    DescribeDeviceInfoResponseBody& operator=(DescribeDeviceInfoResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class DeviceInfoList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DeviceInfoList& obj) { 
        DARABONBA_PTR_TO_JSON(DeviceInfo, deviceInfo_);
      };
      friend void from_json(const Darabonba::Json& j, DeviceInfoList& obj) { 
        DARABONBA_PTR_FROM_JSON(DeviceInfo, deviceInfo_);
      };
      DeviceInfoList() = default ;
      DeviceInfoList(const DeviceInfoList &) = default ;
      DeviceInfoList(DeviceInfoList &&) = default ;
      DeviceInfoList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DeviceInfoList() = default ;
      DeviceInfoList& operator=(const DeviceInfoList &) = default ;
      DeviceInfoList& operator=(DeviceInfoList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class DeviceInfo : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const DeviceInfo& obj) { 
          DARABONBA_PTR_TO_JSON(BeginDay, beginDay_);
          DARABONBA_PTR_TO_JSON(BizType, bizType_);
          DARABONBA_PTR_TO_JSON(DeviceId, deviceId_);
          DARABONBA_PTR_TO_JSON(ExpiredDay, expiredDay_);
          DARABONBA_PTR_TO_JSON(UserDeviceId, userDeviceId_);
        };
        friend void from_json(const Darabonba::Json& j, DeviceInfo& obj) { 
          DARABONBA_PTR_FROM_JSON(BeginDay, beginDay_);
          DARABONBA_PTR_FROM_JSON(BizType, bizType_);
          DARABONBA_PTR_FROM_JSON(DeviceId, deviceId_);
          DARABONBA_PTR_FROM_JSON(ExpiredDay, expiredDay_);
          DARABONBA_PTR_FROM_JSON(UserDeviceId, userDeviceId_);
        };
        DeviceInfo() = default ;
        DeviceInfo(const DeviceInfo &) = default ;
        DeviceInfo(DeviceInfo &&) = default ;
        DeviceInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~DeviceInfo() = default ;
        DeviceInfo& operator=(const DeviceInfo &) = default ;
        DeviceInfo& operator=(DeviceInfo &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->beginDay_ == nullptr
        && this->bizType_ == nullptr && this->deviceId_ == nullptr && this->expiredDay_ == nullptr && this->userDeviceId_ == nullptr; };
        // beginDay Field Functions 
        bool hasBeginDay() const { return this->beginDay_ != nullptr;};
        void deleteBeginDay() { this->beginDay_ = nullptr;};
        inline string getBeginDay() const { DARABONBA_PTR_GET_DEFAULT(beginDay_, "") };
        inline DeviceInfo& setBeginDay(string beginDay) { DARABONBA_PTR_SET_VALUE(beginDay_, beginDay) };


        // bizType Field Functions 
        bool hasBizType() const { return this->bizType_ != nullptr;};
        void deleteBizType() { this->bizType_ = nullptr;};
        inline string getBizType() const { DARABONBA_PTR_GET_DEFAULT(bizType_, "") };
        inline DeviceInfo& setBizType(string bizType) { DARABONBA_PTR_SET_VALUE(bizType_, bizType) };


        // deviceId Field Functions 
        bool hasDeviceId() const { return this->deviceId_ != nullptr;};
        void deleteDeviceId() { this->deviceId_ = nullptr;};
        inline string getDeviceId() const { DARABONBA_PTR_GET_DEFAULT(deviceId_, "") };
        inline DeviceInfo& setDeviceId(string deviceId) { DARABONBA_PTR_SET_VALUE(deviceId_, deviceId) };


        // expiredDay Field Functions 
        bool hasExpiredDay() const { return this->expiredDay_ != nullptr;};
        void deleteExpiredDay() { this->expiredDay_ = nullptr;};
        inline string getExpiredDay() const { DARABONBA_PTR_GET_DEFAULT(expiredDay_, "") };
        inline DeviceInfo& setExpiredDay(string expiredDay) { DARABONBA_PTR_SET_VALUE(expiredDay_, expiredDay) };


        // userDeviceId Field Functions 
        bool hasUserDeviceId() const { return this->userDeviceId_ != nullptr;};
        void deleteUserDeviceId() { this->userDeviceId_ = nullptr;};
        inline string getUserDeviceId() const { DARABONBA_PTR_GET_DEFAULT(userDeviceId_, "") };
        inline DeviceInfo& setUserDeviceId(string userDeviceId) { DARABONBA_PTR_SET_VALUE(userDeviceId_, userDeviceId) };


      protected:
        // Authorization start date.
        shared_ptr<string> beginDay_ {};
        // Corresponds to the BizType in the request.
        shared_ptr<string> bizType_ {};
        // Corresponds to the DeviceId in the request.
        shared_ptr<string> deviceId_ {};
        // Authorization expiration date.
        shared_ptr<string> expiredDay_ {};
        // Corresponds to the UserDeviceId in the request.
        shared_ptr<string> userDeviceId_ {};
      };

      virtual bool empty() const override { return this->deviceInfo_ == nullptr; };
      // deviceInfo Field Functions 
      bool hasDeviceInfo() const { return this->deviceInfo_ != nullptr;};
      void deleteDeviceInfo() { this->deviceInfo_ = nullptr;};
      inline const vector<DeviceInfoList::DeviceInfo> & getDeviceInfo() const { DARABONBA_PTR_GET_CONST(deviceInfo_, vector<DeviceInfoList::DeviceInfo>) };
      inline vector<DeviceInfoList::DeviceInfo> getDeviceInfo() { DARABONBA_PTR_GET(deviceInfo_, vector<DeviceInfoList::DeviceInfo>) };
      inline DeviceInfoList& setDeviceInfo(const vector<DeviceInfoList::DeviceInfo> & deviceInfo) { DARABONBA_PTR_SET_VALUE(deviceInfo_, deviceInfo) };
      inline DeviceInfoList& setDeviceInfo(vector<DeviceInfoList::DeviceInfo> && deviceInfo) { DARABONBA_PTR_SET_RVALUE(deviceInfo_, deviceInfo) };


    protected:
      shared_ptr<vector<DeviceInfoList::DeviceInfo>> deviceInfo_ {};
    };

    virtual bool empty() const override { return this->currentPage_ == nullptr
        && this->deviceInfoList_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline DescribeDeviceInfoResponseBody& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // deviceInfoList Field Functions 
    bool hasDeviceInfoList() const { return this->deviceInfoList_ != nullptr;};
    void deleteDeviceInfoList() { this->deviceInfoList_ = nullptr;};
    inline const DescribeDeviceInfoResponseBody::DeviceInfoList & getDeviceInfoList() const { DARABONBA_PTR_GET_CONST(deviceInfoList_, DescribeDeviceInfoResponseBody::DeviceInfoList) };
    inline DescribeDeviceInfoResponseBody::DeviceInfoList getDeviceInfoList() { DARABONBA_PTR_GET(deviceInfoList_, DescribeDeviceInfoResponseBody::DeviceInfoList) };
    inline DescribeDeviceInfoResponseBody& setDeviceInfoList(const DescribeDeviceInfoResponseBody::DeviceInfoList & deviceInfoList) { DARABONBA_PTR_SET_VALUE(deviceInfoList_, deviceInfoList) };
    inline DescribeDeviceInfoResponseBody& setDeviceInfoList(DescribeDeviceInfoResponseBody::DeviceInfoList && deviceInfoList) { DARABONBA_PTR_SET_RVALUE(deviceInfoList_, deviceInfoList) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeDeviceInfoResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDeviceInfoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeDeviceInfoResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The current page number being queried.
    shared_ptr<int32_t> currentPage_ {};
    // Array of device information.
    shared_ptr<DescribeDeviceInfoResponseBody::DeviceInfoList> deviceInfoList_ {};
    // Number of items per page.
    shared_ptr<int32_t> pageSize_ {};
    // The ID of this request.
    shared_ptr<string> requestId_ {};
    // Total count.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudauth20190307
#endif
