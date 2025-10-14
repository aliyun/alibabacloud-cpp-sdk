// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETOSSUSAGEDATARESPONSEBODYUSAGELIST_HPP_
#define ALIBABACLOUD_MODELS_GETOSSUSAGEDATARESPONSEBODYUSAGELIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class GetOssUsageDataResponseBodyUsageList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetOssUsageDataResponseBodyUsageList& obj) { 
      DARABONBA_PTR_TO_JSON(LanRxBw, lanRxBw_);
      DARABONBA_PTR_TO_JSON(LanTxBw, lanTxBw_);
      DARABONBA_PTR_TO_JSON(Point, point_);
      DARABONBA_PTR_TO_JSON(PointTs, pointTs_);
      DARABONBA_PTR_TO_JSON(StorageUsageByte, storageUsageByte_);
      DARABONBA_PTR_TO_JSON(WanRxBw, wanRxBw_);
      DARABONBA_PTR_TO_JSON(WanTxBw, wanTxBw_);
    };
    friend void from_json(const Darabonba::Json& j, GetOssUsageDataResponseBodyUsageList& obj) { 
      DARABONBA_PTR_FROM_JSON(LanRxBw, lanRxBw_);
      DARABONBA_PTR_FROM_JSON(LanTxBw, lanTxBw_);
      DARABONBA_PTR_FROM_JSON(Point, point_);
      DARABONBA_PTR_FROM_JSON(PointTs, pointTs_);
      DARABONBA_PTR_FROM_JSON(StorageUsageByte, storageUsageByte_);
      DARABONBA_PTR_FROM_JSON(WanRxBw, wanRxBw_);
      DARABONBA_PTR_FROM_JSON(WanTxBw, wanTxBw_);
    };
    GetOssUsageDataResponseBodyUsageList() = default ;
    GetOssUsageDataResponseBodyUsageList(const GetOssUsageDataResponseBodyUsageList &) = default ;
    GetOssUsageDataResponseBodyUsageList(GetOssUsageDataResponseBodyUsageList &&) = default ;
    GetOssUsageDataResponseBodyUsageList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetOssUsageDataResponseBodyUsageList() = default ;
    GetOssUsageDataResponseBodyUsageList& operator=(const GetOssUsageDataResponseBodyUsageList &) = default ;
    GetOssUsageDataResponseBodyUsageList& operator=(GetOssUsageDataResponseBodyUsageList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->lanRxBw_ == nullptr
        && return this->lanTxBw_ == nullptr && return this->point_ == nullptr && return this->pointTs_ == nullptr && return this->storageUsageByte_ == nullptr && return this->wanRxBw_ == nullptr
        && return this->wanTxBw_ == nullptr; };
    // lanRxBw Field Functions 
    bool hasLanRxBw() const { return this->lanRxBw_ != nullptr;};
    void deleteLanRxBw() { this->lanRxBw_ = nullptr;};
    inline int64_t lanRxBw() const { DARABONBA_PTR_GET_DEFAULT(lanRxBw_, 0L) };
    inline GetOssUsageDataResponseBodyUsageList& setLanRxBw(int64_t lanRxBw) { DARABONBA_PTR_SET_VALUE(lanRxBw_, lanRxBw) };


    // lanTxBw Field Functions 
    bool hasLanTxBw() const { return this->lanTxBw_ != nullptr;};
    void deleteLanTxBw() { this->lanTxBw_ = nullptr;};
    inline int64_t lanTxBw() const { DARABONBA_PTR_GET_DEFAULT(lanTxBw_, 0L) };
    inline GetOssUsageDataResponseBodyUsageList& setLanTxBw(int64_t lanTxBw) { DARABONBA_PTR_SET_VALUE(lanTxBw_, lanTxBw) };


    // point Field Functions 
    bool hasPoint() const { return this->point_ != nullptr;};
    void deletePoint() { this->point_ = nullptr;};
    inline int64_t point() const { DARABONBA_PTR_GET_DEFAULT(point_, 0L) };
    inline GetOssUsageDataResponseBodyUsageList& setPoint(int64_t point) { DARABONBA_PTR_SET_VALUE(point_, point) };


    // pointTs Field Functions 
    bool hasPointTs() const { return this->pointTs_ != nullptr;};
    void deletePointTs() { this->pointTs_ = nullptr;};
    inline string pointTs() const { DARABONBA_PTR_GET_DEFAULT(pointTs_, "") };
    inline GetOssUsageDataResponseBodyUsageList& setPointTs(string pointTs) { DARABONBA_PTR_SET_VALUE(pointTs_, pointTs) };


    // storageUsageByte Field Functions 
    bool hasStorageUsageByte() const { return this->storageUsageByte_ != nullptr;};
    void deleteStorageUsageByte() { this->storageUsageByte_ = nullptr;};
    inline int64_t storageUsageByte() const { DARABONBA_PTR_GET_DEFAULT(storageUsageByte_, 0L) };
    inline GetOssUsageDataResponseBodyUsageList& setStorageUsageByte(int64_t storageUsageByte) { DARABONBA_PTR_SET_VALUE(storageUsageByte_, storageUsageByte) };


    // wanRxBw Field Functions 
    bool hasWanRxBw() const { return this->wanRxBw_ != nullptr;};
    void deleteWanRxBw() { this->wanRxBw_ = nullptr;};
    inline int64_t wanRxBw() const { DARABONBA_PTR_GET_DEFAULT(wanRxBw_, 0L) };
    inline GetOssUsageDataResponseBodyUsageList& setWanRxBw(int64_t wanRxBw) { DARABONBA_PTR_SET_VALUE(wanRxBw_, wanRxBw) };


    // wanTxBw Field Functions 
    bool hasWanTxBw() const { return this->wanTxBw_ != nullptr;};
    void deleteWanTxBw() { this->wanTxBw_ = nullptr;};
    inline int64_t wanTxBw() const { DARABONBA_PTR_GET_DEFAULT(wanTxBw_, 0L) };
    inline GetOssUsageDataResponseBodyUsageList& setWanTxBw(int64_t wanTxBw) { DARABONBA_PTR_SET_VALUE(wanTxBw_, wanTxBw) };


  protected:
    // The inbound bandwidth over the internal network. Unit: bit/s.
    std::shared_ptr<int64_t> lanRxBw_ = nullptr;
    // The outbound bandwidth over the internal network. Unit: bit/s.
    std::shared_ptr<int64_t> lanTxBw_ = nullptr;
    // The number of time points within a day.
    std::shared_ptr<int64_t> point_ = nullptr;
    // The point in time, in UTC. Format: 2010-01-21T09:50:23Z.
    std::shared_ptr<string> pointTs_ = nullptr;
    // The storage usage. Unit: bytes.
    std::shared_ptr<int64_t> storageUsageByte_ = nullptr;
    // The outbound bandwidth over the Internet. Unit: bit/s.
    std::shared_ptr<int64_t> wanRxBw_ = nullptr;
    // The outbound bandwidth over the Internet. Unit: bit/s.
    std::shared_ptr<int64_t> wanTxBw_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
