// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETOSSUSAGEDATARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETOSSUSAGEDATARESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class GetOssUsageDataResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetOssUsageDataResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(UsageList, usageList_);
    };
    friend void from_json(const Darabonba::Json& j, GetOssUsageDataResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(UsageList, usageList_);
    };
    GetOssUsageDataResponseBody() = default ;
    GetOssUsageDataResponseBody(const GetOssUsageDataResponseBody &) = default ;
    GetOssUsageDataResponseBody(GetOssUsageDataResponseBody &&) = default ;
    GetOssUsageDataResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetOssUsageDataResponseBody() = default ;
    GetOssUsageDataResponseBody& operator=(const GetOssUsageDataResponseBody &) = default ;
    GetOssUsageDataResponseBody& operator=(GetOssUsageDataResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class UsageList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const UsageList& obj) { 
        DARABONBA_PTR_TO_JSON(LanRxBw, lanRxBw_);
        DARABONBA_PTR_TO_JSON(LanTxBw, lanTxBw_);
        DARABONBA_PTR_TO_JSON(Point, point_);
        DARABONBA_PTR_TO_JSON(PointTs, pointTs_);
        DARABONBA_PTR_TO_JSON(StorageUsageByte, storageUsageByte_);
        DARABONBA_PTR_TO_JSON(WanRxBw, wanRxBw_);
        DARABONBA_PTR_TO_JSON(WanTxBw, wanTxBw_);
      };
      friend void from_json(const Darabonba::Json& j, UsageList& obj) { 
        DARABONBA_PTR_FROM_JSON(LanRxBw, lanRxBw_);
        DARABONBA_PTR_FROM_JSON(LanTxBw, lanTxBw_);
        DARABONBA_PTR_FROM_JSON(Point, point_);
        DARABONBA_PTR_FROM_JSON(PointTs, pointTs_);
        DARABONBA_PTR_FROM_JSON(StorageUsageByte, storageUsageByte_);
        DARABONBA_PTR_FROM_JSON(WanRxBw, wanRxBw_);
        DARABONBA_PTR_FROM_JSON(WanTxBw, wanTxBw_);
      };
      UsageList() = default ;
      UsageList(const UsageList &) = default ;
      UsageList(UsageList &&) = default ;
      UsageList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~UsageList() = default ;
      UsageList& operator=(const UsageList &) = default ;
      UsageList& operator=(UsageList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->lanRxBw_ == nullptr
        && this->lanTxBw_ == nullptr && this->point_ == nullptr && this->pointTs_ == nullptr && this->storageUsageByte_ == nullptr && this->wanRxBw_ == nullptr
        && this->wanTxBw_ == nullptr; };
      // lanRxBw Field Functions 
      bool hasLanRxBw() const { return this->lanRxBw_ != nullptr;};
      void deleteLanRxBw() { this->lanRxBw_ = nullptr;};
      inline int64_t getLanRxBw() const { DARABONBA_PTR_GET_DEFAULT(lanRxBw_, 0L) };
      inline UsageList& setLanRxBw(int64_t lanRxBw) { DARABONBA_PTR_SET_VALUE(lanRxBw_, lanRxBw) };


      // lanTxBw Field Functions 
      bool hasLanTxBw() const { return this->lanTxBw_ != nullptr;};
      void deleteLanTxBw() { this->lanTxBw_ = nullptr;};
      inline int64_t getLanTxBw() const { DARABONBA_PTR_GET_DEFAULT(lanTxBw_, 0L) };
      inline UsageList& setLanTxBw(int64_t lanTxBw) { DARABONBA_PTR_SET_VALUE(lanTxBw_, lanTxBw) };


      // point Field Functions 
      bool hasPoint() const { return this->point_ != nullptr;};
      void deletePoint() { this->point_ = nullptr;};
      inline int64_t getPoint() const { DARABONBA_PTR_GET_DEFAULT(point_, 0L) };
      inline UsageList& setPoint(int64_t point) { DARABONBA_PTR_SET_VALUE(point_, point) };


      // pointTs Field Functions 
      bool hasPointTs() const { return this->pointTs_ != nullptr;};
      void deletePointTs() { this->pointTs_ = nullptr;};
      inline string getPointTs() const { DARABONBA_PTR_GET_DEFAULT(pointTs_, "") };
      inline UsageList& setPointTs(string pointTs) { DARABONBA_PTR_SET_VALUE(pointTs_, pointTs) };


      // storageUsageByte Field Functions 
      bool hasStorageUsageByte() const { return this->storageUsageByte_ != nullptr;};
      void deleteStorageUsageByte() { this->storageUsageByte_ = nullptr;};
      inline int64_t getStorageUsageByte() const { DARABONBA_PTR_GET_DEFAULT(storageUsageByte_, 0L) };
      inline UsageList& setStorageUsageByte(int64_t storageUsageByte) { DARABONBA_PTR_SET_VALUE(storageUsageByte_, storageUsageByte) };


      // wanRxBw Field Functions 
      bool hasWanRxBw() const { return this->wanRxBw_ != nullptr;};
      void deleteWanRxBw() { this->wanRxBw_ = nullptr;};
      inline int64_t getWanRxBw() const { DARABONBA_PTR_GET_DEFAULT(wanRxBw_, 0L) };
      inline UsageList& setWanRxBw(int64_t wanRxBw) { DARABONBA_PTR_SET_VALUE(wanRxBw_, wanRxBw) };


      // wanTxBw Field Functions 
      bool hasWanTxBw() const { return this->wanTxBw_ != nullptr;};
      void deleteWanTxBw() { this->wanTxBw_ = nullptr;};
      inline int64_t getWanTxBw() const { DARABONBA_PTR_GET_DEFAULT(wanTxBw_, 0L) };
      inline UsageList& setWanTxBw(int64_t wanTxBw) { DARABONBA_PTR_SET_VALUE(wanTxBw_, wanTxBw) };


    protected:
      // The inbound bandwidth over the internal network. Unit: bit/s.
      shared_ptr<int64_t> lanRxBw_ {};
      // The outbound bandwidth over the internal network. Unit: bit/s.
      shared_ptr<int64_t> lanTxBw_ {};
      // The number of time points within a day.
      shared_ptr<int64_t> point_ {};
      // The point in time, in UTC. Format: 2010-01-21T09:50:23Z.
      shared_ptr<string> pointTs_ {};
      // The storage usage. Unit: bytes.
      shared_ptr<int64_t> storageUsageByte_ {};
      // The outbound bandwidth over the Internet. Unit: bit/s.
      shared_ptr<int64_t> wanRxBw_ {};
      // The outbound bandwidth over the Internet. Unit: bit/s.
      shared_ptr<int64_t> wanTxBw_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->usageList_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetOssUsageDataResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // usageList Field Functions 
    bool hasUsageList() const { return this->usageList_ != nullptr;};
    void deleteUsageList() { this->usageList_ = nullptr;};
    inline const vector<GetOssUsageDataResponseBody::UsageList> & getUsageList() const { DARABONBA_PTR_GET_CONST(usageList_, vector<GetOssUsageDataResponseBody::UsageList>) };
    inline vector<GetOssUsageDataResponseBody::UsageList> getUsageList() { DARABONBA_PTR_GET(usageList_, vector<GetOssUsageDataResponseBody::UsageList>) };
    inline GetOssUsageDataResponseBody& setUsageList(const vector<GetOssUsageDataResponseBody::UsageList> & usageList) { DARABONBA_PTR_SET_VALUE(usageList_, usageList) };
    inline GetOssUsageDataResponseBody& setUsageList(vector<GetOssUsageDataResponseBody::UsageList> && usageList) { DARABONBA_PTR_SET_RVALUE(usageList_, usageList) };


  protected:
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The array of usage data.
    shared_ptr<vector<GetOssUsageDataResponseBody::UsageList>> usageList_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
