// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTBIZCHAINDATAREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTBIZCHAINDATAREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Lto20210707
{
namespace Models
{
  class ListBizChainDataRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListBizChainDataRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BizChainId, bizChainId_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(IoTDataDID, ioTDataDID_);
      DARABONBA_PTR_TO_JSON(MemberId, memberId_);
      DARABONBA_PTR_TO_JSON(Num, num_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(Size, size_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, ListBizChainDataRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BizChainId, bizChainId_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(IoTDataDID, ioTDataDID_);
      DARABONBA_PTR_FROM_JSON(MemberId, memberId_);
      DARABONBA_PTR_FROM_JSON(Num, num_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(Size, size_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
    };
    ListBizChainDataRequest() = default ;
    ListBizChainDataRequest(const ListBizChainDataRequest &) = default ;
    ListBizChainDataRequest(ListBizChainDataRequest &&) = default ;
    ListBizChainDataRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListBizChainDataRequest() = default ;
    ListBizChainDataRequest& operator=(const ListBizChainDataRequest &) = default ;
    ListBizChainDataRequest& operator=(ListBizChainDataRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bizChainId_ == nullptr
        && return this->endTime_ == nullptr && return this->ioTDataDID_ == nullptr && return this->memberId_ == nullptr && return this->num_ == nullptr && return this->regionId_ == nullptr
        && return this->size_ == nullptr && return this->startTime_ == nullptr; };
    // bizChainId Field Functions 
    bool hasBizChainId() const { return this->bizChainId_ != nullptr;};
    void deleteBizChainId() { this->bizChainId_ = nullptr;};
    inline string bizChainId() const { DARABONBA_PTR_GET_DEFAULT(bizChainId_, "") };
    inline ListBizChainDataRequest& setBizChainId(string bizChainId) { DARABONBA_PTR_SET_VALUE(bizChainId_, bizChainId) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int64_t endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
    inline ListBizChainDataRequest& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // ioTDataDID Field Functions 
    bool hasIoTDataDID() const { return this->ioTDataDID_ != nullptr;};
    void deleteIoTDataDID() { this->ioTDataDID_ = nullptr;};
    inline string ioTDataDID() const { DARABONBA_PTR_GET_DEFAULT(ioTDataDID_, "") };
    inline ListBizChainDataRequest& setIoTDataDID(string ioTDataDID) { DARABONBA_PTR_SET_VALUE(ioTDataDID_, ioTDataDID) };


    // memberId Field Functions 
    bool hasMemberId() const { return this->memberId_ != nullptr;};
    void deleteMemberId() { this->memberId_ = nullptr;};
    inline string memberId() const { DARABONBA_PTR_GET_DEFAULT(memberId_, "") };
    inline ListBizChainDataRequest& setMemberId(string memberId) { DARABONBA_PTR_SET_VALUE(memberId_, memberId) };


    // num Field Functions 
    bool hasNum() const { return this->num_ != nullptr;};
    void deleteNum() { this->num_ = nullptr;};
    inline int32_t num() const { DARABONBA_PTR_GET_DEFAULT(num_, 0) };
    inline ListBizChainDataRequest& setNum(int32_t num) { DARABONBA_PTR_SET_VALUE(num_, num) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListBizChainDataRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // size Field Functions 
    bool hasSize() const { return this->size_ != nullptr;};
    void deleteSize() { this->size_ = nullptr;};
    inline int32_t size() const { DARABONBA_PTR_GET_DEFAULT(size_, 0) };
    inline ListBizChainDataRequest& setSize(int32_t size) { DARABONBA_PTR_SET_VALUE(size_, size) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int64_t startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
    inline ListBizChainDataRequest& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> bizChainId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> endTime_ = nullptr;
    std::shared_ptr<string> ioTDataDID_ = nullptr;
    std::shared_ptr<string> memberId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int32_t> num_ = nullptr;
    std::shared_ptr<string> regionId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int32_t> size_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> startTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Lto20210707
#endif
