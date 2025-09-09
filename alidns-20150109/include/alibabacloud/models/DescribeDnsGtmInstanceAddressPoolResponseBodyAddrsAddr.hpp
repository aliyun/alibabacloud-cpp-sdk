// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDNSGTMINSTANCEADDRESSPOOLRESPONSEBODYADDRSADDR_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDNSGTMINSTANCEADDRESSPOOLRESPONSEBODYADDRSADDR_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class DescribeDnsGtmInstanceAddressPoolResponseBodyAddrsAddr : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDnsGtmInstanceAddressPoolResponseBodyAddrsAddr& obj) { 
      DARABONBA_PTR_TO_JSON(Addr, addr_);
      DARABONBA_PTR_TO_JSON(AlertStatus, alertStatus_);
      DARABONBA_PTR_TO_JSON(AttributeInfo, attributeInfo_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(CreateTimestamp, createTimestamp_);
      DARABONBA_PTR_TO_JSON(LbaWeight, lbaWeight_);
      DARABONBA_PTR_TO_JSON(Mode, mode_);
      DARABONBA_PTR_TO_JSON(Remark, remark_);
      DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
      DARABONBA_PTR_TO_JSON(UpdateTimestamp, updateTimestamp_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDnsGtmInstanceAddressPoolResponseBodyAddrsAddr& obj) { 
      DARABONBA_PTR_FROM_JSON(Addr, addr_);
      DARABONBA_PTR_FROM_JSON(AlertStatus, alertStatus_);
      DARABONBA_PTR_FROM_JSON(AttributeInfo, attributeInfo_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(CreateTimestamp, createTimestamp_);
      DARABONBA_PTR_FROM_JSON(LbaWeight, lbaWeight_);
      DARABONBA_PTR_FROM_JSON(Mode, mode_);
      DARABONBA_PTR_FROM_JSON(Remark, remark_);
      DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
      DARABONBA_PTR_FROM_JSON(UpdateTimestamp, updateTimestamp_);
    };
    DescribeDnsGtmInstanceAddressPoolResponseBodyAddrsAddr() = default ;
    DescribeDnsGtmInstanceAddressPoolResponseBodyAddrsAddr(const DescribeDnsGtmInstanceAddressPoolResponseBodyAddrsAddr &) = default ;
    DescribeDnsGtmInstanceAddressPoolResponseBodyAddrsAddr(DescribeDnsGtmInstanceAddressPoolResponseBodyAddrsAddr &&) = default ;
    DescribeDnsGtmInstanceAddressPoolResponseBodyAddrsAddr(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDnsGtmInstanceAddressPoolResponseBodyAddrsAddr() = default ;
    DescribeDnsGtmInstanceAddressPoolResponseBodyAddrsAddr& operator=(const DescribeDnsGtmInstanceAddressPoolResponseBodyAddrsAddr &) = default ;
    DescribeDnsGtmInstanceAddressPoolResponseBodyAddrsAddr& operator=(DescribeDnsGtmInstanceAddressPoolResponseBodyAddrsAddr &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->addr_ != nullptr
        && this->alertStatus_ != nullptr && this->attributeInfo_ != nullptr && this->createTime_ != nullptr && this->createTimestamp_ != nullptr && this->lbaWeight_ != nullptr
        && this->mode_ != nullptr && this->remark_ != nullptr && this->updateTime_ != nullptr && this->updateTimestamp_ != nullptr; };
    // addr Field Functions 
    bool hasAddr() const { return this->addr_ != nullptr;};
    void deleteAddr() { this->addr_ = nullptr;};
    inline string addr() const { DARABONBA_PTR_GET_DEFAULT(addr_, "") };
    inline DescribeDnsGtmInstanceAddressPoolResponseBodyAddrsAddr& setAddr(string addr) { DARABONBA_PTR_SET_VALUE(addr_, addr) };


    // alertStatus Field Functions 
    bool hasAlertStatus() const { return this->alertStatus_ != nullptr;};
    void deleteAlertStatus() { this->alertStatus_ = nullptr;};
    inline string alertStatus() const { DARABONBA_PTR_GET_DEFAULT(alertStatus_, "") };
    inline DescribeDnsGtmInstanceAddressPoolResponseBodyAddrsAddr& setAlertStatus(string alertStatus) { DARABONBA_PTR_SET_VALUE(alertStatus_, alertStatus) };


    // attributeInfo Field Functions 
    bool hasAttributeInfo() const { return this->attributeInfo_ != nullptr;};
    void deleteAttributeInfo() { this->attributeInfo_ = nullptr;};
    inline string attributeInfo() const { DARABONBA_PTR_GET_DEFAULT(attributeInfo_, "") };
    inline DescribeDnsGtmInstanceAddressPoolResponseBodyAddrsAddr& setAttributeInfo(string attributeInfo) { DARABONBA_PTR_SET_VALUE(attributeInfo_, attributeInfo) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline DescribeDnsGtmInstanceAddressPoolResponseBodyAddrsAddr& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // createTimestamp Field Functions 
    bool hasCreateTimestamp() const { return this->createTimestamp_ != nullptr;};
    void deleteCreateTimestamp() { this->createTimestamp_ = nullptr;};
    inline int64_t createTimestamp() const { DARABONBA_PTR_GET_DEFAULT(createTimestamp_, 0L) };
    inline DescribeDnsGtmInstanceAddressPoolResponseBodyAddrsAddr& setCreateTimestamp(int64_t createTimestamp) { DARABONBA_PTR_SET_VALUE(createTimestamp_, createTimestamp) };


    // lbaWeight Field Functions 
    bool hasLbaWeight() const { return this->lbaWeight_ != nullptr;};
    void deleteLbaWeight() { this->lbaWeight_ = nullptr;};
    inline int32_t lbaWeight() const { DARABONBA_PTR_GET_DEFAULT(lbaWeight_, 0) };
    inline DescribeDnsGtmInstanceAddressPoolResponseBodyAddrsAddr& setLbaWeight(int32_t lbaWeight) { DARABONBA_PTR_SET_VALUE(lbaWeight_, lbaWeight) };


    // mode Field Functions 
    bool hasMode() const { return this->mode_ != nullptr;};
    void deleteMode() { this->mode_ = nullptr;};
    inline string mode() const { DARABONBA_PTR_GET_DEFAULT(mode_, "") };
    inline DescribeDnsGtmInstanceAddressPoolResponseBodyAddrsAddr& setMode(string mode) { DARABONBA_PTR_SET_VALUE(mode_, mode) };


    // remark Field Functions 
    bool hasRemark() const { return this->remark_ != nullptr;};
    void deleteRemark() { this->remark_ = nullptr;};
    inline string remark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
    inline DescribeDnsGtmInstanceAddressPoolResponseBodyAddrsAddr& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline string updateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
    inline DescribeDnsGtmInstanceAddressPoolResponseBodyAddrsAddr& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


    // updateTimestamp Field Functions 
    bool hasUpdateTimestamp() const { return this->updateTimestamp_ != nullptr;};
    void deleteUpdateTimestamp() { this->updateTimestamp_ = nullptr;};
    inline int64_t updateTimestamp() const { DARABONBA_PTR_GET_DEFAULT(updateTimestamp_, 0L) };
    inline DescribeDnsGtmInstanceAddressPoolResponseBodyAddrsAddr& setUpdateTimestamp(int64_t updateTimestamp) { DARABONBA_PTR_SET_VALUE(updateTimestamp_, updateTimestamp) };


  protected:
    // The address.
    std::shared_ptr<string> addr_ = nullptr;
    // The status of the last health check on the address. Valid values:
    // 
    // *   OK: No active alerts are triggered.
    // *   ALERT: Alerts are triggered based on the alert rules.
    std::shared_ptr<string> alertStatus_ = nullptr;
    // The source region of the address.
    // 
    // *   lineCode: the line code of the source region of the address. This parameter is deprecated, and lineCodes prevails.
    // *   lineName: the line name of the source region of the address. This parameter is deprecated.
    // *   lineCodes: the line codes of the source regions of the address.
    std::shared_ptr<string> attributeInfo_ = nullptr;
    // The time when the address was added into the address pool.
    std::shared_ptr<string> createTime_ = nullptr;
    // The timestamp that indicates the time when the address was added into the address pool.
    std::shared_ptr<int64_t> createTimestamp_ = nullptr;
    // The weight of the address.
    std::shared_ptr<int32_t> lbaWeight_ = nullptr;
    // The mode of the address. Valid values:
    // 
    // *   SMART: smart return
    // *   ONLINE: always online
    // *   OFFLINE: always offline
    std::shared_ptr<string> mode_ = nullptr;
    // The description of the address.
    std::shared_ptr<string> remark_ = nullptr;
    // The time when the address was last updated.
    std::shared_ptr<string> updateTime_ = nullptr;
    // The timestamp that indicates the time when the address was last updated.
    std::shared_ptr<int64_t> updateTimestamp_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
